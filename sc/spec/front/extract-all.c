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
ATerm term_l_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_q_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_p_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_g_43;
ATerm term_f_43;
ATerm term_r_42;
ATerm term_q_42;
ATerm term_b_42;
ATerm term_x_41;
ATerm term_q_41;
ATerm term_u_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_j_38;
ATerm term_r_37;
ATerm term_o_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_t_30;
ATerm term_n_30;
ATerm term_v_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_p_24;
ATerm term_s_23;
ATerm term_p_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_h_22;
ATerm term_l_18;
ATerm term_f_18;
ATerm term_h_16;
ATerm term_n_15;
ATerm term_i_15;
ATerm term_f_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_r_12;
void init_constant_terms (void)
{
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATempty);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_ConstType_1, term_g_25);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_18);
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(sym__3, term_f_43, term_g_43, term_r_12);
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm MissingDefMod_0_0 (ATerm);
ATerm MissingDefs_0_0 (ATerm);
ATerm giving_up_0_0 (ATerm);
ATerm DefinitionExists_0_0 (ATerm);
ATerm Rec_2_0 (ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm z_98 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm);
ATerm Let_2_0 (ATerm e_96 (ATerm), ATerm f_96 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm split_2_0 (ATerm h_113 (ATerm), ATerm i_113 (ATerm), ATerm);
ATerm free_vars2_4_0 (ATerm d_118 (ATerm), ATerm e_118 (ATerm), ATerm f_118 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm g_118 (ATerm), ATerm);
ATerm svars_arity_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm alltd_1_0 (ATerm n_111 (ATerm), ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm e_109 (ATerm), ATerm f_109 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm);
ATerm JoinDefs2_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm l_93 (ATerm), ATerm m_93 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm e_93 (ATerm), ATerm f_93 (ATerm), ATerm);
ATerm Op_2_0 (ATerm a_93 (ATerm), ATerm b_93 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm i_105 (ATerm), ATerm);
ATerm Bapp2_0_0 (ATerm);
ATerm Bapp0_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm LiftCallArgs_0_0 (ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm Var_1_0 (ATerm u_92 (ATerm), ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm c_120 (ATerm), ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm i_93 (ATerm), ATerm j_93 (ATerm), ATerm);
ATerm Con_3_0 (ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm w_93 (ATerm), ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Scope_2_0 (ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm z_110 (ATerm), ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm v_109 (ATerm), ATerm);
ATerm desugar_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm tuple_unzip_1_0 (ATerm x_113 (ATerm), ATerm);
ATerm MkDistApplication_0_0 (ATerm);
ATerm copy_1_0 (ATerm a_124 (ATerm), ATerm);
ATerm MkThreadApplication_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm DefineCongruence_0_0 (ATerm);
ATerm CongruenceDef_0_0 (ATerm);
ATerm get_definition_0_0 (ATerm);
ATerm diff_1_0 (ATerm a_121 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNextChangeGraph_3_0 (ATerm b_136 (ATerm), ATerm c_136 (ATerm), ATerm d_136 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm);
ATerm for_3_0 (ATerm u_120 (ATerm), ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm);
ATerm extract_needed_defs_0_0 (ATerm);
ATerm assert_1_0 (ATerm k_136 (ATerm), ATerm);
ATerm Arities_0_0 (ATerm);
ATerm Definitions_0_0 (ATerm);
ATerm RegisterSDefT_0_0 (ATerm);
ATerm DefinitionName_0_0 (ATerm);
ATerm union_1_0 (ATerm e_121 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm n_123 (ATerm), ATerm o_123 (ATerm), ATerm p_123 (ATerm), ATerm);
ATerm all_defs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm w_91 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm b_92 (ATerm), ATerm);
ATerm _2_0 (ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm r_128 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm t_131 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_106 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm s_106 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm v_129 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm l_123 (ATerm), ATerm m_123 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm u_129 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm r_132 (ATerm), ATerm);
ATerm map_1_0 (ATerm b_106 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm t_100 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm u_100 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm u_134 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm t_134 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm w_132 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm c_132 (ATerm), ATerm d_132 (ATerm), ATerm e_132 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_0 = NULL,r_0 = NULL;
  l_0 = t;
  t = term_r_12;
  t = whoami_0_0(t);
  r_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), r_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = l_0;
  return(t);
}
ATerm MissingDefMod_0_0 (ATerm t)
{
  ATerm s_0 = NULL,u_0 = NULL,v_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_15 = ATgetArgument(t, 0);
      if(match_cons(a_15, sym_Mod_2))
        {
          s_0 = ATgetArgument(a_15, 0);
          u_0 = ATgetArgument(a_15, 1);
        }
      else
        _fail(t);
      v_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue))), v_0), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), u_0), (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue))), s_0), (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue))));
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_15), v_0), term_f_15), u_0), term_c_15), s_0), term_b_15);
  return(t);
}
ATerm MissingDefs_0_0 (ATerm t)
{
  ATerm z_0 = NULL,a_1 = NULL,d_1 = NULL;
  if(match_cons(t, sym__2))
    {
      z_0 = ATgetArgument(t, 0);
      {
        ATerm k_15 = ATgetArgument(t, 1);
        if(((ATgetType(k_15) == AT_LIST) && !(ATisEmpty(k_15))))
          {
            a_1 = ATgetFirst((ATermList) k_15);
            d_1 = (ATerm) ATgetNext((ATermList) k_15);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_1), a_1);
  {
    ATerm o_0 (ATerm t)
    {
      ATerm l_15 = t;
      int m_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MissingDefMod_0_0(t);
          ;
          LocalPopChoice(m_15);
        }
      else
        {
          t = l_15;
          {
            ATerm k_1 = NULL,l_1 = NULL;
            if(match_cons(t, sym__2))
              {
                k_1 = ATgetArgument(t, 0);
                l_1 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue))), l_1), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), k_1), (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue))));
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_15), l_1), term_f_15), k_1), term_b_15);
          }
        }
      return(t);
    }
    t = map_1_0(o_0, t);
    t = z_0;
  }
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = (ATerm) ATinsert(ATempty, term_n_15);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL,f_2 = NULL,h_2 = NULL;
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
      f_2 = ATgetArgument(t, 0);
      h_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_2;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = h_2;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm o_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_2;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_15 = ATgetFirst((ATermList) t);
            ATerm u_15 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(u_15) == AT_LIST) && !(ATisEmpty(u_15))))
              {
                ATerm v_15 = ATgetFirst((ATermList) u_15);
                ATerm z_15 = (ATerm) ATgetNext((ATermList) u_15);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm a_16 = t;
          if((PushChoice() == 0))
            {
              ATerm p_0 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    ATerm f_16 = ATgetArgument(t, 0);
                    if(((ATgetType(f_16) != AT_INT) || (ATgetInt((ATermInt) f_16) != 0)))
                      _fail(t);
                    {
                      ATerm g_16 = ATgetArgument(t, 1);
                      if(((ATgetType(g_16) != AT_INT) || (ATgetInt((ATermInt) g_16) != 0)))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(p_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_16;
            }
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_2), (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue))));
          t = (ATerm) ATinsert(ATinsert(ATempty, c_2), term_h_16);
          t = giving_up_0_0(t);
        }
        ;
        LocalPopChoice(s_15);
      }
    else
      {
        t = o_15;
        {
          ATerm n_1 = NULL,o_1 = NULL;
          t = c_2;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm o_16 = ATgetFirst((ATermList) t);
              if(match_cons(o_16, sym__2))
                {
                  n_1 = ATgetArgument(o_16, 0);
                  o_1 = ATgetArgument(o_16, 1);
                }
              else
                _fail(t);
              {
                ATerm p_16 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(p_16) != AT_LIST) || !(ATisEmpty(p_16))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, c_2, (ATerm) ATmakeAppl(sym__2, n_1, o_1));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, c_2, (ATerm) ATmakeAppl(sym__2, n_1, o_1));
        }
      }
  }
  return(t);
}
ATerm Rec_2_0 (ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL;
  p_2 = t;
  if(match_cons(t, sym_Rec_2))
    {
      l_2 = ATgetArgument(t, 0);
      m_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_2);
  k_2 = t;
  t = l_2;
  t = b_97(t);
  n_2 = t;
  t = m_2;
  t = c_97(t);
  o_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, n_2, o_2), k_2);
  return(t);
}
ATerm SDefT_4_0 (ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm z_98 (ATerm), ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL;
  b_3 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      t_2 = ATgetArgument(t, 0);
      u_2 = ATgetArgument(t, 1);
      v_2 = ATgetArgument(t, 2);
      w_2 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_3);
  s_2 = t;
  t = t_2;
  t = w_98(t);
  x_2 = t;
  t = u_2;
  t = x_98(t);
  y_2 = t;
  t = v_2;
  t = y_98(t);
  z_2 = t;
  t = w_2;
  t = z_98(t);
  a_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, x_2, y_2, z_2, a_3), s_2);
  return(t);
}
ATerm SDef_3_0 (ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm t)
{
  ATerm e_3 = NULL,g_3 = NULL,h_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,o_3 = NULL;
  o_3 = t;
  if(match_cons(t, sym_SDef_3))
    {
      g_3 = ATgetArgument(t, 0);
      h_3 = ATgetArgument(t, 1);
      j_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_3);
  e_3 = t;
  t = g_3;
  t = t_98(t);
  k_3 = t;
  t = h_3;
  t = u_98(t);
  l_3 = t;
  t = j_3;
  t = v_98(t);
  m_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, k_3, l_3, m_3), e_3);
  return(t);
}
ATerm Let_2_0 (ATerm e_96 (ATerm), ATerm f_96 (ATerm), ATerm t)
{
  ATerm r_3 = NULL,t_3 = NULL,v_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL;
  z_3 = t;
  if(match_cons(t, sym_Let_2))
    {
      t_3 = ATgetArgument(t, 0);
      v_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_3);
  r_3 = t;
  t = t_3;
  t = e_96(t);
  x_3 = t;
  t = v_3;
  t = f_96(t);
  y_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, x_3, y_3), r_3);
  return(t);
}
ATerm sboundin_3_0 (ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm t)
{
  ATerm q_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(a_109, a_109, t);
      ;
      LocalPopChoice(r_16);
    }
  else
    {
      t = q_16;
      {
        ATerm s_16 = t;
        int t_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(c_109, c_109, a_109, t);
            ;
            LocalPopChoice(t_16);
          }
        else
          {
            t = s_16;
            {
              ATerm u_16 = t;
              int y_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(c_109, c_109, c_109, a_109, t);
                  ;
                  LocalPopChoice(y_16);
                }
              else
                {
                  t = u_16;
                  t = Rec_2_0(c_109, a_109, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm p_4 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      p_4 = ATgetArgument(t, 0);
      {
        ATerm z_16 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = p_4;
  {
    ATerm q_0 (ATerm t)
    {
      ATerm y_4 = NULL;
      ATerm c_17 = t;
      int e_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              y_4 = ATgetArgument(t, 0);
              {
                ATerm g_17 = ATgetArgument(t, 1);
              }
              {
                ATerm h_17 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(e_17);
          t = y_4;
        }
      else
        {
          t = c_17;
          if(match_cons(t, sym_SDefT_4))
            {
              y_4 = ATgetArgument(t, 0);
              {
                ATerm m_17 = ATgetArgument(t, 1);
              }
              {
                ATerm n_17 = ATgetArgument(t, 2);
              }
              {
                ATerm r_17 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = y_4;
        }
      return(t);
    }
    t = map_1_0(q_0, t);
  }
  return(t);
}
ATerm split_2_0 (ATerm h_113 (ATerm), ATerm i_113 (ATerm), ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL,e_58 = NULL;
  c_58 = t;
  t = h_113(t);
  d_58 = t;
  t = c_58;
  t = i_113(t);
  e_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_58, e_58);
  return(t);
}
ATerm free_vars2_4_0 (ATerm d_118 (ATerm), ATerm e_118 (ATerm), ATerm f_118 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm g_118 (ATerm), ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm p_1 = NULL,q_1 = NULL,r_1 = NULL;
    p_1 = t;
    {
      ATerm s_17 = t;
      int t_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_118(t);
          ;
          LocalPopChoice(t_17);
        }
      else
        {
          t = s_17;
          t = (ATerm) ATempty;
        }
      q_1 = t;
      t = p_1;
      {
        ATerm u_17 = t;
        int y_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_3 = NULL,u_3 = NULL,w_3 = NULL;
            t = p_1;
            t = e_118(t);
            i_3 = t;
            t = p_1;
            {
              ATerm t_0 (ATerm t)
              {
                ATerm x_0 (ATerm t)
                {
                  t = i_3;
                  return(t);
                }
                t = split_2_0(s_5, x_0, t);
                t = diff_1_0(g_118, t);
                return(t);
              }
              ATerm w_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = f_118(t_0, s_5, w_0, t);
              u_3 = t;
              t = SSL_explode_term(u_3);
              if(match_cons(t, sym__2))
                {
                  ATerm z_17 = ATgetArgument(t, 0);
                  w_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_3;
              {
                ATerm y_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm b_1 (ATerm t)
                {
                  ATerm c_1 (ATerm t)
                  {
                    ATerm e_4 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        e_4 = ATgetArgument(t, 0);
                        if((e_4 != ATgetArgument(t, 1)))
                          {
                            _fail(ATgetArgument(t, 1));
                          }
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = union_1_0(c_1, t);
                  return(t);
                }
                t = foldr_3_0(y_0, b_1, _id, t);
              }
            }
            ;
            LocalPopChoice(y_17);
          }
        else
          {
            t = u_17;
            {
              ATerm g_4 = NULL;
              t = SSL_explode_term(p_1);
              if(match_cons(t, sym__2))
                {
                  ATerm a_18 = ATgetArgument(t, 0);
                  g_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_4;
              {
                ATerm e_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm f_1 (ATerm t)
                {
                  ATerm g_1 (ATerm t)
                  {
                    ATerm l_4 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        l_4 = ATgetArgument(t, 0);
                        if((l_4 != ATgetArgument(t, 1)))
                          {
                            _fail(ATgetArgument(t, 1));
                          }
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = union_1_0(g_1, t);
                  return(t);
                }
                t = foldr_3_0(e_1, f_1, s_5, t);
              }
            }
          }
        r_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_1, r_1);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm r_5 = NULL;
            if(match_cons(t, sym__2))
              {
                r_5 = ATgetArgument(t, 0);
                if((r_5 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
              }
            else
              _fail(t);
            return(t);
          }
          t = union_1_0(h_1, t);
        }
      }
    }
    return(t);
  }
  t = s_5(t);
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL;
    if(match_cons(t, sym_CallT_3))
      {
        ATerm e_18 = ATgetArgument(t, 0);
        if(match_cons(e_18, sym_SVar_1))
          {
            f_6 = ATgetArgument(e_18, 0);
          }
        else
          _fail(t);
        g_6 = ATgetArgument(t, 1);
        h_6 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = g_6;
    {
      ATerm s_1 (ATerm t)
      {
        t = term_f_18;
        return(t);
      }
      ATerm t_1 (ATerm t)
      {
        ATerm k_6 = NULL,l_6 = NULL;
        if(match_cons(t, sym__2))
          {
            k_6 = ATgetArgument(t, 0);
            l_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        {
          ATerm g_18 = t;
          int h_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_addi(k_6, l_6);
              ;
              LocalPopChoice(h_18);
            }
          else
            {
              t = g_18;
              t = SSL_addr(k_6, l_6);
            }
        }
        return(t);
      }
      ATerm u_1 (ATerm t)
      {
        t = term_l_18;
        return(t);
      }
      t = foldr_3_0(s_1, t_1, u_1, t);
      i_6 = t;
      t = h_6;
      {
        ATerm v_1 (ATerm t)
        {
          t = term_f_18;
          return(t);
        }
        ATerm w_1 (ATerm t)
        {
          ATerm m_6 = NULL,p_6 = NULL;
          if(match_cons(t, sym__2))
            {
              m_6 = ATgetArgument(t, 0);
              p_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          {
            ATerm m_18 = t;
            int n_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_addi(m_6, p_6);
                ;
                LocalPopChoice(n_18);
              }
            else
              {
                t = m_18;
                t = SSL_addr(m_6, p_6);
              }
          }
          return(t);
        }
        ATerm x_1 (ATerm t)
        {
          t = term_l_18;
          return(t);
        }
        t = foldr_3_0(v_1, w_1, x_1, t);
        j_6 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_6, (ATerm) ATmakeAppl(sym__2, i_6, j_6)));
      }
    }
    return(t);
  }
  ATerm j_1 (ATerm t)
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
          ATerm d_7 = NULL,m_7 = NULL;
          ATerm t_18 = t;
          int u_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_SDef_3))
                {
                  ATerm v_18 = ATgetArgument(t, 0);
                  m_7 = ATgetArgument(t, 1);
                  {
                    ATerm w_18 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(u_18);
              t = m_7;
              {
                ATerm y_1 (ATerm t)
                {
                  ATerm v_7 = NULL;
                  ATerm y_18 = t;
                  int z_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_VarDec_2))
                        {
                          v_7 = ATgetArgument(t, 0);
                          {
                            ATerm a_19 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(z_18);
                      t = v_7;
                    }
                  else
                    {
                      t = y_18;
                      if(match_cons(t, sym_DefaultVarDec_1))
                        {
                          v_7 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = v_7;
                    }
                  return(t);
                }
                t = map_1_0(y_1, t);
              }
            }
          else
            {
              t = t_18;
              {
                ATerm b_19 = t;
                int c_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Rec_2))
                      {
                        d_7 = ATgetArgument(t, 0);
                        {
                          ATerm d_19 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(c_19);
                    t = (ATerm) ATinsert(ATempty, d_7);
                  }
                else
                  {
                    t = b_19;
                    {
                      ATerm e_19 = t;
                      int f_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_SDefT_4))
                            {
                              ATerm h_19 = ATgetArgument(t, 0);
                              m_7 = ATgetArgument(t, 1);
                              {
                                ATerm i_19 = ATgetArgument(t, 2);
                              }
                              {
                                ATerm j_19 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(f_19);
                          t = m_7;
                          {
                            ATerm z_1 (ATerm t)
                            {
                              ATerm l_8 = NULL;
                              ATerm m_19 = t;
                              int n_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      l_8 = ATgetArgument(t, 0);
                                      {
                                        ATerm s_19 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(n_19);
                                  t = l_8;
                                }
                              else
                                {
                                  t = m_19;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      l_8 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = l_8;
                                }
                              return(t);
                            }
                            t = map_1_0(z_1, t);
                          }
                        }
                      else
                        {
                          t = e_19;
                          if(match_cons(t, sym_RDefT_4))
                            {
                              ATerm x_19 = ATgetArgument(t, 0);
                              m_7 = ATgetArgument(t, 1);
                              {
                                ATerm b_20 = ATgetArgument(t, 2);
                              }
                              {
                                ATerm d_20 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          t = m_7;
                          {
                            ATerm a_2 (ATerm t)
                            {
                              ATerm h_9 = NULL;
                              ATerm f_20 = t;
                              int i_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      h_9 = ATgetArgument(t, 0);
                                      {
                                        ATerm n_20 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(i_20);
                                  t = h_9;
                                }
                              else
                                {
                                  t = f_20;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      h_9 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = h_9;
                                }
                              return(t);
                            }
                            t = map_1_0(a_2, t);
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
  ATerm m_1 (ATerm t)
  {
    ATerm n_9 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm o_20 = ATgetArgument(t, 0);
        if(match_cons(o_20, sym__2))
          {
            n_9 = ATgetArgument(o_20, 0);
            {
              ATerm p_20 = ATgetArgument(o_20, 1);
            }
          }
        else
          _fail(t);
        if((n_9 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = free_vars2_4_0(i_1, j_1, sboundin_3_0, m_1, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm j_10 = NULL,q_10 = NULL,l_11 = NULL,m_11 = NULL,u_11 = NULL,y_11 = NULL;
  if(match_cons(t, sym__2))
    {
      l_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_11;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_11 = ATgetFirst((ATermList) t);
      y_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_11;
  if(match_cons(t, sym__2))
    {
      j_10 = ATgetArgument(t, 0);
      q_10 = ATgetArgument(t, 1);
      {
        ATerm q_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_10;
            if((l_11 != t))
              {
                _fail(t);
              }
            t = q_10;
            ;
            LocalPopChoice(r_20);
          }
        else
          {
            t = q_20;
            t = (ATerm) ATmakeAppl(sym__2, l_11, y_11);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, l_11, y_11);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm n_111 (ATerm), ATerm t)
{
  ATerm m_14 (ATerm t)
  {
    ATerm t_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_111(t);
        ;
        LocalPopChoice(u_20);
      }
    else
      {
        t = t_20;
        t = SRTS_all(m_14, t);
      }
    return(t);
  }
  t = m_14(t);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm e_15 = NULL,g_15 = NULL,h_15 = NULL,j_15 = NULL;
  e_15 = t;
  {
    ATerm x_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_21 = ATgetArgument(t, 0);
            ATerm e_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(a_21);
        t = e_15;
      }
    else
      {
        t = x_20;
        {
          ATerm p_15 = NULL;
          if(match_cons(t, sym__3))
            {
              g_15 = ATgetArgument(t, 0);
              h_15 = ATgetArgument(t, 1);
              j_15 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, g_15, h_15);
          {
            ATerm e_2 (ATerm t)
            {
              if(match_cons(t, sym__2))
                {
                  ATerm f_21 = ATgetArgument(t, 0);
                  if(((ATgetType(f_21) != AT_LIST) || !(ATisEmpty(f_21))))
                    _fail(t);
                  {
                    ATerm g_21 = ATgetArgument(t, 1);
                    if(((ATgetType(g_21) != AT_LIST) || !(ATisEmpty(g_21))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATempty;
              return(t);
            }
            ATerm g_2 (ATerm t)
            {
              ATerm q_15 = NULL,r_15 = NULL,w_15 = NULL,x_15 = NULL;
              if(match_cons(t, sym__2))
                {
                  ATerm j_21 = ATgetArgument(t, 0);
                  if(((ATgetType(j_21) == AT_LIST) && !(ATisEmpty(j_21))))
                    {
                      q_15 = ATgetFirst((ATermList) j_21);
                      w_15 = (ATerm) ATgetNext((ATermList) j_21);
                    }
                  else
                    _fail(t);
                  {
                    ATerm o_21 = ATgetArgument(t, 1);
                    if(((ATgetType(o_21) == AT_LIST) && !(ATisEmpty(o_21))))
                      {
                        r_15 = ATgetFirst((ATermList) o_21);
                        x_15 = (ATerm) ATgetNext((ATermList) o_21);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_15, r_15), (ATerm) ATmakeAppl(sym__2, w_15, x_15));
              return(t);
            }
            ATerm i_2 (ATerm t)
            {
              ATerm y_15 = NULL,b_16 = NULL;
              if(match_cons(t, sym__2))
                {
                  y_15 = ATgetArgument(t, 0);
                  b_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(b_16), y_15);
              return(t);
            }
            t = genzip_4_0(e_2, g_2, i_2, _id, t);
            p_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_15, j_15);
          }
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm e_109 (ATerm), ATerm f_109 (ATerm), ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      d_16 = ATgetArgument(t, 0);
      c_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_16;
  {
    ATerm j_2 (ATerm t)
    {
      ATerm x_4 = NULL;
      t = e_109(t);
      x_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_4, d_16);
      t = lookup_0_0(t);
      t = f_109(t);
      return(t);
    }
    t = alltd_1_0(j_2, t);
  }
  return(t);
}
ATerm VarDec_2_0 (ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm t)
{
  ATerm e_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
  n_16 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      j_16 = ATgetArgument(t, 0);
      k_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_16);
  e_16 = t;
  t = j_16;
  t = p_98(t);
  l_16 = t;
  t = k_16;
  t = q_98(t);
  m_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, l_16, m_16), e_16);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,a_17 = NULL,b_17 = NULL,d_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,o_17 = NULL;
  w_16 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_21 = ATgetFirst((ATermList) t);
      if(match_cons(s_21, sym_SDefT_4))
        {
          x_16 = ATgetArgument(s_21, 0);
          a_17 = ATgetArgument(s_21, 1);
          b_17 = ATgetArgument(s_21, 2);
          {
            ATerm u_21 = ATgetArgument(s_21, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm t_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_17;
  {
    ATerm q_2 (ATerm t)
    {
      t = VarDec_2_0(new_0_0, _id, t);
      return(t);
    }
    t = map_1_0(q_2, t);
    d_17 = t;
    t = b_17;
    {
      ATerm r_2 (ATerm t)
      {
        t = VarDec_2_0(new_0_0, _id, t);
        return(t);
      }
      t = map_1_0(r_2, t);
      i_17 = t;
      t = d_17;
      {
        ATerm c_3 (ATerm t)
        {
          ATerm p_17 = NULL;
          if(match_cons(t, sym_VarDec_2))
            {
              p_17 = ATgetArgument(t, 0);
              {
                ATerm v_21 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_17), (ATerm)ATempty, (ATerm) ATempty);
          return(t);
        }
        t = map_1_0(c_3, t);
        j_17 = t;
        t = i_17;
        {
          ATerm d_3 (ATerm t)
          {
            ATerm q_17 = NULL;
            if(match_cons(t, sym_VarDec_2))
              {
                q_17 = ATgetArgument(t, 0);
                {
                  ATerm w_21 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, q_17);
            return(t);
          }
          t = map_1_0(d_3, t);
          k_17 = t;
          t = w_16;
          {
            ATerm f_3 (ATerm t)
            {
              ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  ATerm y_21 = ATgetArgument(t, 0);
                  v_17 = ATgetArgument(t, 1);
                  w_17 = ATgetArgument(t, 2);
                  x_17 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = w_17;
              {
                ATerm n_3 (ATerm t)
                {
                  ATerm i_18 = NULL;
                  if(match_cons(t, sym_VarDec_2))
                    {
                      i_18 = ATgetArgument(t, 0);
                      {
                        ATerm z_21 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = i_18;
                  return(t);
                }
                t = map_1_0(n_3, t);
                b_18 = t;
                t = v_17;
                {
                  ATerm p_3 (ATerm t)
                  {
                    ATerm j_18 = NULL;
                    if(match_cons(t, sym_VarDec_2))
                      {
                        j_18 = ATgetArgument(t, 0);
                        {
                          ATerm g_22 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = j_18;
                    return(t);
                  }
                  t = map_1_0(p_3, t);
                  c_18 = t;
                  t = (ATerm) ATmakeAppl(sym__3, c_18, j_17, x_17);
                  {
                    ATerm q_3 (ATerm t)
                    {
                      ATerm k_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
                      if(match_cons(t, sym_CallT_3))
                        {
                          o_18 = ATgetArgument(t, 0);
                          q_18 = ATgetArgument(t, 1);
                          k_18 = ATgetArgument(t, 2);
                          t = o_18;
                          if(match_cons(t, sym_SVar_1))
                            {
                              p_18 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = q_18;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = k_18;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = p_18;
                        }
                      else
                        {
                          if(match_cons(t, sym_Call_2))
                            {
                              o_18 = ATgetArgument(t, 0);
                              q_18 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = o_18;
                          if(match_cons(t, sym_SVar_1))
                            {
                              p_18 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = q_18;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = p_18;
                        }
                      return(t);
                    }
                    t = substitute_2_0(q_3, _id, t);
                    d_18 = t;
                    t = (ATerm) ATmakeAppl(sym__3, b_18, k_17, d_18);
                    {
                      ATerm s_3 (ATerm t)
                      {
                        ATerm x_18 = NULL;
                        if(match_cons(t, sym_Var_1))
                          {
                            x_18 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = x_18;
                        return(t);
                      }
                      t = substitute_2_0(s_3, _id, t);
                    }
                  }
                }
              }
              return(t);
            }
            t = map_1_0(f_3, t);
            {
              ATerm a_4 (ATerm t)
              {
                t = term_h_22;
                return(t);
              }
              ATerm b_4 (ATerm t)
              {
                ATerm t_5 = NULL,z_5 = NULL,d_6 = NULL;
                t_5 = t;
                t = SSL_explode_term(t_5);
                if(match_cons(t, sym__2))
                  {
                    ATerm l_22 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) l_22) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm m_22 = ATgetArgument(t, 1);
                      if(((ATgetType(m_22) == AT_LIST) && !(ATisEmpty(m_22))))
                        {
                          z_5 = ATgetFirst((ATermList) m_22);
                          {
                            ATerm n_22 = (ATerm) ATgetNext((ATermList) m_22);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(t_5);
                if(match_cons(t, sym__2))
                  {
                    ATerm o_22 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) o_22) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm p_22 = ATgetArgument(t, 1);
                      if(((ATgetType(p_22) == AT_LIST) && !(ATisEmpty(p_22))))
                        {
                          ATerm q_22 = ATgetFirst((ATermList) p_22);
                          ATerm z_22 = (ATerm) ATgetNext((ATermList) p_22);
                          if(((ATgetType(z_22) == AT_LIST) && !(ATisEmpty(z_22))))
                            {
                              d_6 = ATgetFirst((ATermList) z_22);
                              {
                                ATerm a_23 = (ATerm) ATgetNext((ATermList) z_22);
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
                t = (ATerm) ATmakeAppl(sym_Choice_2, z_5, d_6);
                return(t);
              }
              t = foldr_2_0(a_4, b_4, t);
              o_17 = t;
              t = (ATerm) ATmakeAppl(sym_SDefT_4, x_16, d_17, i_17, o_17);
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
  ATerm g_19 = NULL,k_19 = NULL,l_19 = NULL;
  k_19 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      l_19 = ATgetArgument(t, 0);
      g_19 = ATgetArgument(t, 1);
      {
        ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
        t = k_19;
        t = new_0_0(t);
        o_19 = t;
        t = new_0_0(t);
        p_19 = t;
        t = new_0_0(t);
        q_19 = t;
        t = new_0_0(t);
        r_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_19), q_19), p_19), o_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, o_19), (ATerm) ATmakeAppl(sym_Var_1, q_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, l_19, (ATerm)ATmakeAppl(sym_Var_1, o_19), (ATerm) ATmakeAppl(sym_Var_1, p_19)), (ATerm) ATmakeAppl(sym_BAM_3, g_19, (ATerm)ATmakeAppl(sym_Var_1, q_19), (ATerm) ATmakeAppl(sym_Var_1, r_19)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_h_23, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_19)), (ATerm) ATmakeAppl(sym_Var_1, p_19))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          l_19 = ATgetArgument(t, 0);
          {
            ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL;
            t = k_19;
            t = new_0_0(t);
            t_19 = t;
            t = l_19;
            {
              ATerm c_4 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((u_19 != NULL) && (u_19 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      u_19 = ATgetArgument(t, 0);
                    if(((v_19 != NULL) && (v_19 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      v_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, t_19);
                return(t);
              }
              t = oncetd_1_0(c_4, t);
              w_19 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_h_23, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_19)), not_null(u_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, t_19)), (ATerm) ATmakeAppl(sym_Build_1, w_19))));
            }
          }
        }
      else
        {
          ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL,c_20 = NULL,e_20 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              l_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_19;
          t = new_0_0(t);
          y_19 = t;
          t = new_0_0(t);
          z_19 = t;
          t = l_19;
          {
            ATerm d_4 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((a_20 != NULL) && (a_20 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    a_20 = ATgetArgument(t, 0);
                  if(((c_20 != NULL) && (c_20 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    c_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, y_19);
              return(t);
            }
            t = oncetd_1_0(d_4, t);
            e_20 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, e_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_19)), (ATerm) ATmakeAppl(sym_PrimT_3, term_i_23, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_19))))), (ATerm)ATmakeAppl(sym_Var_1, y_19), (ATerm) ATmakeAppl(sym_Op_2, term_p_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_20)), not_null(a_20)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL;
  g_20 = t;
  if(match_cons(t, sym_Match_1))
    {
      h_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
        t = g_20;
        t = new_0_0(t);
        j_20 = t;
        t = h_20;
        {
          ATerm f_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((l_20 != NULL) && (l_20 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_20 = ATgetArgument(t, 0);
                if(((k_20 != NULL) && (k_20 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  k_20 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, j_20), not_null(l_20));
            return(t);
          }
          t = pat_td_1_0(f_4, t);
          m_20 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_s_23, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_20))), (ATerm) ATmakeAppl(sym_Match_1, not_null(k_20))))));
        }
        ;
        LocalPopChoice(r_23);
      }
    else
      {
        t = q_23;
        {
          ATerm u_23 = t;
          int x_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_20 = NULL,v_20 = NULL,w_20 = NULL;
              t = g_20;
              t = new_0_0(t);
              s_20 = t;
              t = h_20;
              {
                ATerm h_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((v_20 != NULL) && (v_20 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        v_20 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, s_20);
                  return(t);
                }
                t = pat_td_1_0(h_4, t);
                w_20 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, s_20)), not_null(v_20))));
              }
              ;
              LocalPopChoice(x_23);
            }
          else
            {
              t = u_23;
              {
                ATerm y_20 = NULL,z_20 = NULL,b_21 = NULL,c_21 = NULL;
                t = g_20;
                t = new_0_0(t);
                y_20 = t;
                t = h_20;
                {
                  ATerm i_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((z_20 != NULL) && (z_20 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          z_20 = ATgetArgument(t, 0);
                        if(((b_21 != NULL) && (b_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          b_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, y_20);
                    return(t);
                  }
                  t = pat_td_1_0(i_4, t);
                  c_21 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, y_20)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_21)), not_null(z_20)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm l_93 (ATerm), ATerm m_93 (ATerm), ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL;
  k_22 = t;
  if(match_cons(t, sym_As_2))
    {
      e_22 = ATgetArgument(t, 0);
      f_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_22);
  d_22 = t;
  t = e_22;
  t = l_93(t);
  i_22 = t;
  t = f_22;
  t = m_93(t);
  j_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, i_22, j_22), d_22);
  return(t);
}
ATerm PrimT_3_0 (ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
  y_22 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      s_22 = ATgetArgument(t, 0);
      t_22 = ATgetArgument(t, 1);
      u_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_22);
  r_22 = t;
  t = s_22;
  t = k_97(t);
  v_22 = t;
  t = t_22;
  t = l_97(t);
  w_22 = t;
  t = u_22;
  t = m_97(t);
  x_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, v_22, w_22, x_22), r_22);
  return(t);
}
ATerm Explode_2_0 (ATerm e_93 (ATerm), ATerm f_93 (ATerm), ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL;
  g_23 = t;
  if(match_cons(t, sym_Explode_2))
    {
      c_23 = ATgetArgument(t, 0);
      d_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_23);
  b_23 = t;
  t = c_23;
  t = e_93(t);
  e_23 = t;
  t = d_23;
  t = f_93(t);
  f_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, e_23, f_23), b_23);
  return(t);
}
ATerm Op_2_0 (ATerm a_93 (ATerm), ATerm b_93 (ATerm), ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
  o_23 = t;
  if(match_cons(t, sym_Op_2))
    {
      k_23 = ATgetArgument(t, 0);
      l_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_23);
  j_23 = t;
  t = k_23;
  t = a_93(t);
  m_23 = t;
  t = l_23;
  t = b_93(t);
  n_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, m_23, n_23), j_23);
  return(t);
}
ATerm pat_td_1_0 (ATerm i_105 (ATerm), ATerm t)
{
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_105(t);
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
            ATerm j_4 (ATerm t)
            {
              ATerm k_4 (ATerm t)
              {
                t = pat_td_1_0(i_105, t);
                return(t);
              }
              t = fetch_1_0(k_4, t);
              return(t);
            }
            t = Op_2_0(_id, j_4, t);
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
                  ATerm m_4 (ATerm t)
                  {
                    t = pat_td_1_0(i_105, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, m_4, t);
                  ;
                  LocalPopChoice(f_24);
                }
              else
                {
                  t = e_24;
                  {
                    ATerm g_24 = t;
                    int h_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_4 (ATerm t)
                        {
                          t = pat_td_1_0(i_105, t);
                          return(t);
                        }
                        t = Explode_2_0(n_4, _id, t);
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
                              ATerm o_4 (ATerm t)
                              {
                                ATerm q_4 (ATerm t)
                                {
                                  t = pat_td_1_0(i_105, t);
                                  return(t);
                                }
                                t = fetch_1_0(q_4, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, o_4, t);
                              ;
                              LocalPopChoice(j_24);
                            }
                          else
                            {
                              t = i_24;
                              {
                                ATerm r_4 (ATerm t)
                                {
                                  t = pat_td_1_0(i_105, t);
                                  return(t);
                                }
                                t = As_2_0(_id, r_4, t);
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
  ATerm h_21 = NULL,i_21 = NULL;
  h_21 = t;
  if(match_cons(t, sym_Build_1))
    {
      i_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL;
        t = h_21;
        t = new_0_0(t);
        k_21 = t;
        t = i_21;
        {
          ATerm s_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((l_21 != NULL) && (l_21 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_21 = ATgetArgument(t, 0);
                if(((m_21 != NULL) && (m_21 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  m_21 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, k_21);
            return(t);
          }
          t = pat_td_1_0(s_4, t);
          n_21 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_p_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_21)), not_null(l_21))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_21)))), (ATerm) ATmakeAppl(sym_Build_1, n_21)));
        }
        ;
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
        {
          ATerm q_24 = t;
          int s_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL;
              t = h_21;
              t = new_0_0(t);
              p_21 = t;
              t = i_21;
              {
                ATerm t_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((q_21 != NULL) && (q_21 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        q_21 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, p_21);
                  return(t);
                }
                t = pat_td_1_0(t_4, t);
                r_21 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_21), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_21)))), (ATerm) ATmakeAppl(sym_Build_1, r_21)));
              }
              ;
              LocalPopChoice(s_24);
            }
          else
            {
              t = q_24;
              {
                ATerm x_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
                t = h_21;
                t = new_0_0(t);
                x_21 = t;
                t = i_21;
                {
                  ATerm u_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((a_22 != NULL) && (a_22 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          a_22 = ATgetArgument(t, 0);
                        if(((b_22 != NULL) && (b_22 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          b_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, x_21);
                    return(t);
                  }
                  t = pat_td_1_0(u_4, t);
                  c_22 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(a_22), not_null(b_22), (ATerm) ATmakeAppl(sym_Var_1, x_21))), (ATerm) ATmakeAppl(sym_Build_1, c_22)));
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
  ATerm t_23 = NULL;
  if(match_cons(t, sym_Build_1))
    {
      t_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_23 = NULL,w_23 = NULL;
        t = t_23;
        {
          ATerm v_4 (ATerm t)
          {
            if(match_cons(t, sym_RootApp_1))
              {
                ATerm x_24 = ATgetArgument(t, 0);
                if(match_cons(x_24, sym_Build_1))
                  {
                    if(((v_23 != NULL) && (v_23 != ATgetArgument(x_24, 0))))
                      _fail(ATgetArgument(x_24, 0));
                    else
                      v_23 = ATgetArgument(x_24, 0);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            t = not_null(v_23);
            return(t);
          }
          t = pat_td_1_0(v_4, t);
          w_23 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, w_23);
        }
        ;
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        {
          ATerm y_23 = NULL,z_23 = NULL;
          t = t_23;
          {
            ATerm w_4 (ATerm t)
            {
              if(match_cons(t, sym_App_2))
                {
                  ATerm y_24 = ATgetArgument(t, 0);
                  if(match_cons(y_24, sym_Build_1))
                    {
                      if(((y_23 != NULL) && (y_23 != ATgetArgument(y_24, 0))))
                        _fail(ATgetArgument(y_24, 0));
                      else
                        y_23 = ATgetArgument(y_24, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm z_24 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = not_null(y_23);
              return(t);
            }
            t = pat_td_1_0(w_4, t);
            z_23 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, z_23);
          }
        }
      }
  }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm a_25 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm z_4 (ATerm t)
        {
          ATerm c_25 = t;
          int d_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(d_25);
            }
          else
            {
              t = c_25;
            }
          return(t);
        }
        t = Cons_2_0(_id, z_4, t);
      }
      ;
      LocalPopChoice(b_25);
    }
  else
    {
      t = a_25;
      {
        ATerm a_5 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, a_5, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,r_24 = NULL,t_24 = NULL,u_24 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      t_24 = ATgetArgument(t, 0);
      u_24 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, t_24, u_24);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          t_24 = ATgetArgument(t, 0);
          t = t_24;
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
              t = term_h_22;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              t_24 = ATgetArgument(t, 0);
              t = t_24;
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
                  t = term_h_22;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  t_24 = ATgetArgument(t, 0);
                  t = t_24;
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
                      t = term_e_25;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      t_24 = ATgetArgument(t, 0);
                      u_24 = ATgetArgument(t, 1);
                      r_24 = ATgetArgument(t, 2);
                      o_24 = ATgetArgument(t, 3);
                      {
                        ATerm o_25 = NULL,p_25 = NULL;
                        t = u_24;
                        {
                          ATerm b_5 (ATerm t)
                          {
                            ATerm q_25 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                q_25 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, q_25, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_h_25), term_h_25));
                            return(t);
                          }
                          t = map1_1_0(b_5, t);
                          o_25 = t;
                          t = r_24;
                          {
                            ATerm c_5 (ATerm t)
                            {
                              ATerm i_25 = t;
                              int j_25 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm s_25 = NULL;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      s_25 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_VarDec_2, s_25, term_h_25);
                                  ;
                                  LocalPopChoice(j_25);
                                }
                              else
                                {
                                  t = i_25;
                                }
                              return(t);
                            }
                            t = map1_1_0(c_5, t);
                            p_25 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, t_24, o_25, p_25, o_24);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          t_24 = ATgetArgument(t, 0);
                          u_24 = ATgetArgument(t, 1);
                          r_24 = ATgetArgument(t, 2);
                          o_24 = ATgetArgument(t, 3);
                          {
                            ATerm k_25 = t;
                            int l_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm y_25 = NULL,z_25 = NULL;
                                t = r_24;
                                {
                                  ATerm d_5 (ATerm t)
                                  {
                                    ATerm a_26 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        a_26 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, a_26, term_h_25);
                                    return(t);
                                  }
                                  t = map1_1_0(d_5, t);
                                  y_25 = t;
                                  t = u_24;
                                  {
                                    ATerm e_5 (ATerm t)
                                    {
                                      ATerm m_25 = t;
                                      int n_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm c_26 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              c_26 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, c_26, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_h_25), term_h_25));
                                          ;
                                          LocalPopChoice(n_25);
                                        }
                                      else
                                        {
                                          t = m_25;
                                        }
                                      return(t);
                                    }
                                    t = map_1_0(e_5, t);
                                    z_25 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, t_24, z_25, y_25, o_24);
                                  }
                                }
                                ;
                                LocalPopChoice(l_25);
                              }
                            else
                              {
                                t = k_25;
                                {
                                  ATerm j_26 = NULL,k_26 = NULL;
                                  t = u_24;
                                  {
                                    ATerm f_5 (ATerm t)
                                    {
                                      ATerm l_26 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          l_26 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, l_26, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_h_25), term_h_25));
                                      return(t);
                                    }
                                    t = map1_1_0(f_5, t);
                                    j_26 = t;
                                    t = r_24;
                                    {
                                      ATerm g_5 (ATerm t)
                                      {
                                        ATerm r_25 = t;
                                        int t_25 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm n_26 = NULL;
                                            if(match_cons(t, sym_DefaultVarDec_1))
                                              {
                                                n_26 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_VarDec_2, n_26, term_h_25);
                                            ;
                                            LocalPopChoice(t_25);
                                          }
                                        else
                                          {
                                            t = r_25;
                                          }
                                        return(t);
                                      }
                                      t = map_1_0(g_5, t);
                                      k_26 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, t_24, j_26, k_26, o_24);
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
                              t_24 = ATgetArgument(t, 0);
                              u_24 = ATgetArgument(t, 1);
                              r_24 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, u_24, (ATerm) ATmakeAppl(sym_Op_2, term_p_23, (ATerm) ATinsert(ATinsert(ATempty, r_24), t_24)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  t_24 = ATgetArgument(t, 0);
                                  u_24 = ATgetArgument(t, 1);
                                  r_24 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, r_24)), t_24), (ATerm) ATmakeAppl(sym_Build_1, u_24)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      t_24 = ATgetArgument(t, 0);
                                      u_24 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_24, (ATerm) ATmakeAppl(sym_Match_1, u_24));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          t_24 = ATgetArgument(t, 0);
                                          u_24 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_24), u_24);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              t_24 = ATgetArgument(t, 0);
                                              u_24 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_24), t_24);
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
ATerm LiftCallArgs_0_0 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      c_27 = ATgetArgument(t, 0);
      d_27 = ATgetArgument(t, 1);
      e_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_27;
  {
    ATerm h_5 (ATerm t)
    {
      ATerm u_25 = t;
      if((PushChoice() == 0))
        {
          t = Var_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = u_25;
        }
      return(t);
    }
    t = fetch_1_0(h_5, t);
    t = e_27;
    {
      ATerm i_5 (ATerm t)
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = term_v_25;
        return(t);
      }
      ATerm j_5 (ATerm t)
      {
        ATerm i_27 = NULL,j_27 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_27 = ATgetFirst((ATermList) t);
            j_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_27, j_27);
        return(t);
      }
      ATerm k_5 (ATerm t)
      {
        ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_25 = ATgetArgument(t, 0);
            if(match_cons(w_25, sym__2))
              {
                k_27 = ATgetArgument(w_25, 0);
                m_27 = ATgetArgument(w_25, 1);
              }
            else
              _fail(t);
            {
              ATerm x_25 = ATgetArgument(t, 1);
              if(match_cons(x_25, sym__2))
                {
                  l_27 = ATgetArgument(x_25, 0);
                  n_27 = ATgetArgument(x_25, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_27), k_27), (ATerm) ATinsert(CheckATermList(n_27), m_27));
        return(t);
      }
      t = genzip_4_0(i_5, j_5, k_5, LiftPrimArg_0_0, t);
      {
        ATerm l_5 (ATerm t)
        {
          ATerm m_5 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = term_v_25;
            return(t);
          }
          ATerm n_5 (ATerm t)
          {
            ATerm o_27 = NULL,p_27 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_27 = ATgetFirst((ATermList) t);
                p_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, o_27, p_27);
            return(t);
          }
          ATerm o_5 (ATerm t)
          {
            ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL;
            if(match_cons(t, sym__2))
              {
                ATerm b_26 = ATgetArgument(t, 0);
                if(match_cons(b_26, sym__2))
                  {
                    q_27 = ATgetArgument(b_26, 0);
                    s_27 = ATgetArgument(b_26, 1);
                  }
                else
                  _fail(t);
                {
                  ATerm d_26 = ATgetArgument(t, 1);
                  if(match_cons(d_26, sym__2))
                    {
                      r_27 = ATgetArgument(d_26, 0);
                      t_27 = ATgetArgument(d_26, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_27), q_27), (ATerm) ATinsert(CheckATermList(t_27), s_27));
            return(t);
          }
          t = genzip_4_0(m_5, n_5, o_5, _id, t);
          return(t);
        }
        t = _2_0(concat_0_0, l_5, t);
        if(match_cons(t, sym__2))
          {
            f_27 = ATgetArgument(t, 0);
            {
              ATerm e_26 = ATgetArgument(t, 1);
              if(match_cons(e_26, sym__2))
                {
                  g_27 = ATgetArgument(e_26, 0);
                  h_27 = ATgetArgument(e_26, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, f_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_27), (ATerm) ATmakeAppl(sym_CallT_3, c_27, d_27, h_27)));
      }
    }
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm d_28 (ATerm w_27, ATerm t)
  {
    ATerm y_27 = NULL;
    t = w_27;
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
      t = new_0_0(t);
      y_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, y_27), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_27), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_27)))), (ATerm) ATmakeAppl(sym_Var_1, y_27)));
    }
    return(t);
  }
  ATerm a_28 = NULL,b_28 = NULL;
  a_28 = t;
  if(match_cons(t, sym_Var_1))
    {
      b_28 = ATgetArgument(t, 0);
      {
        ATerm g_26 = t;
        int h_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_28(a_28, t);
            ;
            LocalPopChoice(h_26);
          }
        else
          {
            t = g_26;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_e_25, (ATerm) ATmakeAppl(sym_Var_1, b_28)));
          }
      }
    }
  else
    {
      t = d_28(a_28, t);
    }
  return(t);
}
ATerm Var_1_0 (ATerm u_92 (ATerm), ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL;
  h_28 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_28);
  e_28 = t;
  t = f_28;
  t = u_92(t);
  g_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, g_28), e_28);
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL;
  w_30 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      x_30 = ATgetArgument(t, 0);
      y_30 = ATgetArgument(t, 1);
      v_30 = ATgetArgument(t, 2);
      {
        ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
        t = v_30;
        {
          ATerm p_5 (ATerm t)
          {
            ATerm i_26 = t;
            if((PushChoice() == 0))
              {
                t = Var_1_0(_id, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = i_26;
              }
            return(t);
          }
          t = fetch_1_0(p_5, t);
          t = v_30;
          {
            ATerm q_5 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_v_25;
              return(t);
            }
            ATerm u_5 (ATerm t)
            {
              ATerm y_6 = NULL,z_6 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_6 = ATgetFirst((ATermList) t);
                  z_6 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, y_6, z_6);
              return(t);
            }
            ATerm v_5 (ATerm t)
            {
              ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL,e_7 = NULL;
              if(match_cons(t, sym__2))
                {
                  ATerm m_26 = ATgetArgument(t, 0);
                  if(match_cons(m_26, sym__2))
                    {
                      a_7 = ATgetArgument(m_26, 0);
                      c_7 = ATgetArgument(m_26, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm o_26 = ATgetArgument(t, 1);
                    if(match_cons(o_26, sym__2))
                      {
                        b_7 = ATgetArgument(o_26, 0);
                        e_7 = ATgetArgument(o_26, 1);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_7), a_7), (ATerm) ATinsert(CheckATermList(e_7), c_7));
              return(t);
            }
            t = genzip_4_0(q_5, u_5, v_5, LiftPrimArg_0_0, t);
            {
              ATerm w_5 (ATerm t)
              {
                ATerm x_5 (ATerm t)
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_v_25;
                  return(t);
                }
                ATerm y_5 (ATerm t)
                {
                  ATerm f_7 = NULL,g_7 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      f_7 = ATgetFirst((ATermList) t);
                      g_7 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, f_7, g_7);
                  return(t);
                }
                ATerm a_6 (ATerm t)
                {
                  ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm p_26 = ATgetArgument(t, 0);
                      if(match_cons(p_26, sym__2))
                        {
                          h_7 = ATgetArgument(p_26, 0);
                          j_7 = ATgetArgument(p_26, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm q_26 = ATgetArgument(t, 1);
                        if(match_cons(q_26, sym__2))
                          {
                            i_7 = ATgetArgument(q_26, 0);
                            k_7 = ATgetArgument(q_26, 1);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_7), h_7), (ATerm) ATinsert(CheckATermList(k_7), j_7));
                  return(t);
                }
                t = genzip_4_0(x_5, y_5, a_6, _id, t);
                return(t);
              }
              t = _2_0(concat_0_0, w_5, t);
              if(match_cons(t, sym__2))
                {
                  v_6 = ATgetArgument(t, 0);
                  {
                    ATerm r_26 = ATgetArgument(t, 1);
                    if(match_cons(r_26, sym__2))
                      {
                        w_6 = ATgetArgument(r_26, 0);
                        x_6 = ATgetArgument(r_26, 1);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Scope_2, v_6, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_6), (ATerm) ATmakeAppl(sym_PrimT_3, x_30, y_30, x_6)));
            }
          }
        }
      }
    }
  else
    {
      ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          x_30 = ATgetArgument(t, 0);
          y_30 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_30;
      {
        ATerm b_6 (ATerm t)
        {
          ATerm s_26 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_26;
            }
          return(t);
        }
        t = fetch_1_0(b_6, t);
        t = y_30;
        {
          ATerm c_6 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = term_v_25;
            return(t);
          }
          ATerm e_6 (ATerm t)
          {
            ATerm a_8 = NULL,b_8 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_8 = ATgetFirst((ATermList) t);
                b_8 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, a_8, b_8);
            return(t);
          }
          ATerm n_6 (ATerm t)
          {
            ATerm c_8 = NULL,h_8 = NULL,i_8 = NULL,m_8 = NULL;
            if(match_cons(t, sym__2))
              {
                ATerm t_26 = ATgetArgument(t, 0);
                if(match_cons(t_26, sym__2))
                  {
                    c_8 = ATgetArgument(t_26, 0);
                    i_8 = ATgetArgument(t_26, 1);
                  }
                else
                  _fail(t);
                {
                  ATerm u_26 = ATgetArgument(t, 1);
                  if(match_cons(u_26, sym__2))
                    {
                      h_8 = ATgetArgument(u_26, 0);
                      m_8 = ATgetArgument(u_26, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_8), c_8), (ATerm) ATinsert(CheckATermList(m_8), i_8));
            return(t);
          }
          t = genzip_4_0(c_6, e_6, n_6, LiftPrimArg_0_0, t);
          {
            ATerm o_6 (ATerm t)
            {
              ATerm q_6 (ATerm t)
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = term_v_25;
                return(t);
              }
              ATerm r_6 (ATerm t)
              {
                ATerm n_8 = NULL,o_8 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    n_8 = ATgetFirst((ATermList) t);
                    o_8 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, n_8, o_8);
                return(t);
              }
              ATerm s_6 (ATerm t)
              {
                ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL,t_8 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm v_26 = ATgetArgument(t, 0);
                    if(match_cons(v_26, sym__2))
                      {
                        p_8 = ATgetArgument(v_26, 0);
                        r_8 = ATgetArgument(v_26, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm w_26 = ATgetArgument(t, 1);
                      if(match_cons(w_26, sym__2))
                        {
                          q_8 = ATgetArgument(w_26, 0);
                          t_8 = ATgetArgument(w_26, 1);
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_8), p_8), (ATerm) ATinsert(CheckATermList(t_8), r_8));
                return(t);
              }
              t = genzip_4_0(q_6, r_6, s_6, _id, t);
              return(t);
            }
            t = _2_0(concat_0_0, o_6, t);
            if(match_cons(t, sym__2))
              {
                x_7 = ATgetArgument(t, 0);
                {
                  ATerm x_26 = ATgetArgument(t, 1);
                  if(match_cons(x_26, sym__2))
                    {
                      y_7 = ATgetArgument(x_26, 0);
                      z_7 = ATgetArgument(x_26, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, x_7, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_7), (ATerm) ATmakeAppl(sym_PrimT_3, x_30, (ATerm)ATempty, z_7)));
          }
        }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm c_120 (ATerm), ATerm t)
{
  ATerm b_31 (ATerm t)
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_120(t);
        t = b_31(t);
        ;
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
      }
    return(t);
  }
  t = b_31(t);
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm a_27 = t;
  if((PushChoice() == 0))
    {
      ATerm t_6 (ATerm t)
      {
        ATerm b_27 = t;
        int u_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(u_27);
          }
        else
          {
            t = b_27;
            if(!(match_cons(t, sym_Wld_0)))
              _fail(t);
          }
        return(t);
      }
      t = topdown_1_0(t_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_27;
    }
  return(t);
}
ATerm App_2_0 (ATerm i_93 (ATerm), ATerm j_93 (ATerm), ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,h_31 = NULL,j_31 = NULL;
  j_31 = t;
  if(match_cons(t, sym_App_2))
    {
      d_31 = ATgetArgument(t, 0);
      e_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_31);
  c_31 = t;
  t = d_31;
  t = i_93(t);
  f_31 = t;
  t = e_31;
  t = j_93(t);
  h_31 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, f_31, h_31), c_31);
  return(t);
}
ATerm Con_3_0 (ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm w_93 (ATerm), ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL;
  t_31 = t;
  if(match_cons(t, sym_Con_3))
    {
      n_31 = ATgetArgument(t, 0);
      o_31 = ATgetArgument(t, 1);
      p_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_31);
  m_31 = t;
  t = n_31;
  t = u_93(t);
  q_31 = t;
  t = o_31;
  t = v_93(t);
  r_31 = t;
  t = p_31;
  t = w_93(t);
  s_31 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, q_31, r_31, s_31), m_31);
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm v_27 = t;
  if((PushChoice() == 0))
    {
      ATerm u_6 (ATerm t)
      {
        ATerm x_27 = t;
        int z_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(z_27);
          }
        else
          {
            t = x_27;
            t = App_2_0(_id, _id, t);
          }
        return(t);
      }
      t = topdown_1_0(u_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_27;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      z_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_31;
  if(match_cons(t, sym_StratRule_3))
    {
      a_32 = ATgetArgument(t, 0);
      b_32 = ATgetArgument(t, 1);
      c_32 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_32), (ATerm) ATmakeAppl(sym_Where_1, c_32)), a_32));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          a_32 = ATgetArgument(t, 0);
          b_32 = ATgetArgument(t, 1);
          c_32 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = a_32;
      t = pureterm_0_0(t);
      t = b_32;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, b_32)), (ATerm) ATmakeAppl(sym_Where_1, c_32)), (ATerm) ATmakeAppl(sym_Match_1, a_32)));
    }
  return(t);
}
ATerm Scope_2_0 (ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,q_32 = NULL,r_32 = NULL;
  r_32 = t;
  if(match_cons(t, sym_Scope_2))
    {
      k_32 = ATgetArgument(t, 0);
      l_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_32);
  j_32 = t;
  t = k_32;
  t = o_96(t);
  m_32 = t;
  t = l_32;
  t = p_96(t);
  q_32 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, m_32, q_32), j_32);
  return(t);
}
ATerm oncetd_1_0 (ATerm z_110 (ATerm), ATerm t)
{
  ATerm u_32 (ATerm t)
  {
    ATerm c_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_110(t);
        ;
        LocalPopChoice(i_28);
      }
    else
      {
        t = c_28;
        t = SRTS_one(u_32, t);
      }
    return(t);
  }
  t = u_32(t);
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm j_28 = ATgetArgument(t, 0);
      if(match_cons(j_28, sym_Rule_3))
        {
          v_32 = ATgetArgument(j_28, 0);
          w_32 = ATgetArgument(j_28, 1);
          x_32 = ATgetArgument(j_28, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  y_32 = t;
  t = v_32;
  {
    ATerm l_7 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm k_28 = ATgetArgument(t, 0);
          if(match_cons(k_28, sym_Var_1))
            {
              if(((d_33 != NULL) && (d_33 != ATgetArgument(k_28, 0))))
                _fail(ATgetArgument(k_28, 0));
              else
                d_33 = ATgetArgument(k_28, 0);
            }
          else
            _fail(t);
          if(((c_33 != NULL) && (c_33 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            c_33 = ATgetArgument(t, 1);
          {
            ATerm l_28 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_33));
      return(t);
    }
    t = oncetd_1_0(l_7, t);
    e_33 = t;
    t = w_32;
    {
      ATerm n_7 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm m_28 = ATgetArgument(t, 0);
            if(match_cons(m_28, sym_Var_1))
              {
                if(((d_33 != NULL) && (d_33 != ATgetArgument(m_28, 0))))
                  _fail(ATgetArgument(m_28, 0));
                else
                  d_33 = ATgetArgument(m_28, 0);
              }
            else
              _fail(t);
            if(((f_33 != NULL) && (f_33 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              f_33 = ATgetArgument(t, 1);
            {
              ATerm n_28 = ATgetArgument(t, 2);
              if(match_cons(n_28, sym_CallT_3))
                {
                  if(((g_33 != NULL) && (g_33 != ATgetArgument(n_28, 0))))
                    _fail(ATgetArgument(n_28, 0));
                  else
                    g_33 = ATgetArgument(n_28, 0);
                  {
                    ATerm o_28 = ATgetArgument(n_28, 1);
                    if(((ATgetType(o_28) != AT_LIST) || !(ATisEmpty(o_28))))
                      _fail(t);
                  }
                  {
                    ATerm p_28 = ATgetArgument(n_28, 2);
                    if(((ATgetType(p_28) != AT_LIST) || !(ATisEmpty(p_28))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, y_32);
        return(t);
      }
      t = oncetd_1_0(n_7, t);
      h_33 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_32), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, e_33, h_33, (ATerm) ATmakeAppl(sym_Seq_2, x_32, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(g_33), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(c_33), not_null(f_33), term_e_25))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(d_33)), (ATerm) ATmakeAppl(sym_Var_1, y_32))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_28 = t;
      int t_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0_0(t);
          t = desugarRule_0_0(t);
          ;
          LocalPopChoice(t_28);
        }
      else
        {
          t = s_28;
          {
            ATerm u_28 = t;
            int v_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2_0(_id, desugarRule_0_0, t);
                ;
                LocalPopChoice(v_28);
              }
            else
              {
                t = u_28;
                t = RtoS_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(r_28);
    }
  else
    {
      t = q_28;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm v_109 (ATerm), ATerm t)
{
  t = v_109(t);
  {
    ATerm o_7 (ATerm t)
    {
      t = topdown_1_0(v_109, t);
      return(t);
    }
    t = SRTS_all(o_7, t);
  }
  return(t);
}
ATerm desugar_0_0 (ATerm t)
{
  ATerm p_7 (ATerm t)
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = desugarRule_0_0(t);
        ;
        LocalPopChoice(x_28);
      }
    else
      {
        t = w_28;
      }
    {
      ATerm q_7 (ATerm t)
      {
        ATerm y_28 = t;
        int z_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            ;
            LocalPopChoice(z_28);
          }
        else
          {
            t = y_28;
            {
              ATerm a_29 = t;
              int b_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = LiftCallArgs_0_0(t);
                  ;
                  LocalPopChoice(b_29);
                }
              else
                {
                  t = a_29;
                  {
                    ATerm c_29 = t;
                    int d_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = HL_0_0(t);
                        ;
                        LocalPopChoice(d_29);
                      }
                    else
                      {
                        t = c_29;
                        {
                          ATerm e_29 = t;
                          int f_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_29 = t;
                              int h_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Bapp0_0_0(t);
                                  ;
                                  LocalPopChoice(h_29);
                                }
                              else
                                {
                                  t = g_29;
                                  {
                                    ATerm i_29 = t;
                                    int j_29 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL;
                                        if(match_cons(t, sym_Build_1))
                                          {
                                            p_33 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = p_33;
                                        if(match_cons(t, sym_RootApp_1))
                                          {
                                            q_33 = ATgetArgument(t, 0);
                                            t = q_33;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_App_2))
                                              {
                                                q_33 = ATgetArgument(t, 0);
                                                r_33 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, r_33), q_33);
                                          }
                                        ;
                                        LocalPopChoice(j_29);
                                      }
                                    else
                                      {
                                        t = i_29;
                                        t = Bapp2_0_0(t);
                                      }
                                  }
                                }
                              ;
                              LocalPopChoice(f_29);
                            }
                          else
                            {
                              t = e_29;
                              {
                                ATerm k_29 = t;
                                int l_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm m_29 = t;
                                    int n_29 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
                                        if(match_cons(t, sym_Match_1))
                                          {
                                            x_8 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = x_8;
                                        {
                                          ATerm r_7 (ATerm t)
                                          {
                                            if(match_cons(t, sym_RootApp_1))
                                              {
                                                ATerm o_29 = ATgetArgument(t, 0);
                                                if(match_cons(o_29, sym_Match_1))
                                                  {
                                                    if(((y_8 != NULL) && (y_8 != ATgetArgument(o_29, 0))))
                                                      _fail(ATgetArgument(o_29, 0));
                                                    else
                                                      y_8 = ATgetArgument(o_29, 0);
                                                  }
                                                else
                                                  _fail(t);
                                              }
                                            else
                                              _fail(t);
                                            t = not_null(y_8);
                                            return(t);
                                          }
                                          t = pat_td_1_0(r_7, t);
                                          z_8 = t;
                                          t = (ATerm) ATmakeAppl(sym_Match_1, z_8);
                                        }
                                        ;
                                        LocalPopChoice(n_29);
                                      }
                                    else
                                      {
                                        t = m_29;
                                        {
                                          ATerm p_29 = t;
                                          int q_29 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm z_33 = NULL,b_34 = NULL,c_34 = NULL;
                                              if(match_cons(t, sym_Match_1))
                                                {
                                                  z_33 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = z_33;
                                              if(match_cons(t, sym_RootApp_1))
                                                {
                                                  b_34 = ATgetArgument(t, 0);
                                                  t = b_34;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_App_2))
                                                    {
                                                      b_34 = ATgetArgument(t, 0);
                                                      c_34 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_BA_2, b_34, c_34);
                                                }
                                              ;
                                              LocalPopChoice(q_29);
                                            }
                                          else
                                            {
                                              t = p_29;
                                              t = Mapp2_0_0(t);
                                            }
                                        }
                                      }
                                    ;
                                    LocalPopChoice(l_29);
                                  }
                                else
                                  {
                                    t = k_29;
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
      t = repeat_1_0(q_7, t);
    }
    return(t);
  }
  t = topdown_1_0(p_7, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm x_113 (ATerm), ATerm t)
{
  ATerm m_34 = NULL;
  ATerm r_34 (ATerm t)
  {
    ATerm r_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_34 = NULL,p_34 = NULL,q_34 = NULL;
        n_34 = t;
        {
          ATerm s_7 (ATerm t)
          {
            ATerm d_9 = NULL,i_9 = NULL;
            d_9 = t;
            t = SSL_explode_term(d_9);
            if(match_cons(t, sym__2))
              {
                ATerm t_29 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) t_29) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm u_29 = ATgetArgument(t, 1);
                  if(((ATgetType(u_29) == AT_LIST) && !(ATisEmpty(u_29))))
                    {
                      i_9 = ATgetFirst((ATermList) u_29);
                      {
                        ATerm v_29 = (ATerm) ATgetNext((ATermList) u_29);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = i_9;
            return(t);
          }
          t = map_1_0(s_7, t);
          t = x_113(t);
          p_34 = t;
          t = n_34;
          {
            ATerm t_7 (ATerm t)
            {
              ATerm o_9 = NULL,q_9 = NULL;
              o_9 = t;
              t = SSL_explode_term(o_9);
              if(match_cons(t, sym__2))
                {
                  ATerm w_29 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) w_29) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm x_29 = ATgetArgument(t, 1);
                    if(((ATgetType(x_29) == AT_LIST) && !(ATisEmpty(x_29))))
                      {
                        ATerm y_29 = ATgetFirst((ATermList) x_29);
                        q_9 = (ATerm) ATgetNext((ATermList) x_29);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), q_9);
              return(t);
            }
            t = map_1_0(t_7, t);
            t = r_34(t);
            q_34 = t;
            t = (ATerm) ATinsert(CheckATermList(q_34), p_34);
          }
        }
        ;
        LocalPopChoice(s_29);
      }
    else
      {
        t = r_29;
        {
          ATerm u_7 (ATerm t)
          {
            if(!(match_cons(t, sym__0)))
              _fail(t);
            return(t);
          }
          t = map_1_0(u_7, t);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = r_34(t);
  m_34 = t;
  t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), m_34);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm s_34 = NULL;
  s_34 = t;
  {
    ATerm z_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL;
        t = s_34;
        t = new_0_0(t);
        u_34 = t;
        t = new_0_0(t);
        v_34 = t;
        t = new_0_0(t);
        w_34 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_34), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_p_23, (ATerm) ATinsert(ATinsert(ATempty, s_34), (ATerm) ATmakeAppl(sym_Var_1, v_34))), (ATerm) ATmakeAppl(sym_Var_1, w_34)), (ATerm)ATmakeAppl(sym_VarDec_2, u_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_h_25), term_h_25)), v_34, (ATerm)ATmakeAppl(sym_Var_1, v_34), w_34, (ATerm) ATmakeAppl(sym_Var_1, w_34));
        ;
        LocalPopChoice(a_30);
      }
    else
      {
        t = z_29;
        {
          ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
          t = s_34;
          t = new_0_0(t);
          y_34 = t;
          t = new_0_0(t);
          z_34 = t;
          t = new_0_0(t);
          a_35 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_34), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_p_23, (ATerm) ATinsert(ATinsert(ATempty, s_34), (ATerm) ATmakeAppl(sym_Var_1, z_34))), (ATerm) ATmakeAppl(sym_Var_1, a_35)), (ATerm)ATmakeAppl(sym_VarDec_2, y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_h_25), term_h_25)), z_34, (ATerm)ATmakeAppl(sym_Var_1, z_34), a_35, (ATerm) ATmakeAppl(sym_Var_1, a_35));
        }
      }
  }
  return(t);
}
ATerm copy_1_0 (ATerm a_124 (ATerm), ATerm t)
{
  ATerm w_7 (ATerm t)
  {
    ATerm b_35 = NULL,c_35 = NULL;
    if(match_cons(t, sym__2))
      {
        b_35 = ATgetArgument(t, 0);
        c_35 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, b_35, c_35, (ATerm) ATempty);
    return(t);
  }
  ATerm d_8 (ATerm t)
  {
    ATerm d_35 = NULL;
    if(match_cons(t, sym__3))
      {
        ATerm b_30 = ATgetArgument(t, 0);
        if(((ATgetType(b_30) != AT_INT) || (ATgetInt((ATermInt) b_30) != 0)))
          _fail(t);
        {
          ATerm c_30 = ATgetArgument(t, 1);
        }
        d_35 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = d_35;
    return(t);
  }
  ATerm e_8 (ATerm t)
  {
    ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL;
    if(match_cons(t, sym__3))
      {
        e_35 = ATgetArgument(t, 0);
        f_35 = ATgetArgument(t, 1);
        g_35 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, e_35, term_l_18);
    t = geq_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, e_35, term_l_18);
    {
      ATerm d_30 = t;
      int e_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(e_35, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(e_30);
        }
      else
        {
          t = d_30;
          t = SSL_subtr(e_35, (ATerm) ATmakeInt(1));
        }
      h_35 = t;
      t = f_35;
      t = a_124(t);
      i_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, h_35, f_35, (ATerm) ATinsert(CheckATermList(g_35), i_35));
    }
    return(t);
  }
  t = for_3_0(w_7, d_8, e_8, t);
  return(t);
}
ATerm MkThreadApplication_0_0 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL;
  if(match_cons(t, sym__2))
    {
      j_35 = ATgetArgument(t, 0);
      k_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = new_0_0(t);
  l_35 = t;
  t = new_0_0(t);
  m_35 = t;
  t = new_0_0(t);
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_35), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_p_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_35)), (ATerm) ATmakeAppl(sym_Var_1, m_35))), (ATerm) ATmakeAppl(sym_Op_2, term_p_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, k_35)), (ATerm) ATmakeAppl(sym_Var_1, n_35)))), (ATerm)ATmakeAppl(sym_VarDec_2, l_35, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_h_25), term_h_25)), m_35, (ATerm)ATmakeAppl(sym_Var_1, m_35), n_35, (ATerm) ATmakeAppl(sym_Var_1, n_35));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_35 = ATgetFirst((ATermList) t);
      s_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_35;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm f_30 = t;
      int g_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_35;
          ;
          LocalPopChoice(g_30);
        }
      else
        {
          t = f_30;
          t = s_35;
          t = last_0_0(t);
        }
    }
  else
    {
      t = s_35;
      t = last_0_0(t);
    }
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm z_41 (ATerm f_36, ATerm g_36, ATerm h_36, ATerm i_36, ATerm t)
  {
    ATerm m_36 = NULL,f_37 = NULL,l_38 = NULL,p_38 = NULL,q_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,l_39 = NULL,n_39 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, g_36, term_l_18);
    {
      ATerm h_30 = t;
      int i_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(g_36, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(i_30);
        }
      else
        {
          t = h_30;
          t = SSL_addr(g_36, (ATerm) ATmakeInt(1));
        }
      m_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_36, term_r_12);
      t = copy_1_0(new_0_0, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_37 = ATgetFirst((ATermList) t);
          l_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_38;
      t = last_0_0(t);
      p_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_38), f_37), l_38);
      {
        ATerm f_8 (ATerm t)
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
        ATerm g_8 (ATerm t)
        {
          ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL;
          if(match_cons(t, sym__2))
            {
              ATerm l_30 = ATgetArgument(t, 0);
              if(((ATgetType(l_30) == AT_LIST) && !(ATisEmpty(l_30))))
                {
                  t_39 = ATgetFirst((ATermList) l_30);
                  v_39 = (ATerm) ATgetNext((ATermList) l_30);
                }
              else
                _fail(t);
              {
                ATerm m_30 = ATgetArgument(t, 1);
                if(((ATgetType(m_30) == AT_LIST) && !(ATisEmpty(m_30))))
                  {
                    u_39 = ATgetFirst((ATermList) m_30);
                    w_39 = (ATerm) ATgetNext((ATermList) m_30);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_39, u_39), (ATerm) ATmakeAppl(sym__2, v_39, w_39));
          return(t);
        }
        ATerm j_8 (ATerm t)
        {
          ATerm x_39 = NULL,y_39 = NULL;
          if(match_cons(t, sym__2))
            {
              x_39 = ATgetArgument(t, 0);
              y_39 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(y_39), x_39);
          return(t);
        }
        t = genzip_4_0(f_8, g_8, j_8, MkThreadApplication_0_0, t);
        t = tuple_unzip_1_0(_id, t);
        if(match_cons(t, sym__6))
          {
            q_38 = ATgetArgument(t, 0);
            x_38 = ATgetArgument(t, 1);
            y_38 = ATgetArgument(t, 2);
            z_38 = ATgetArgument(t, 3);
            a_39 = ATgetArgument(t, 4);
            l_39 = ATgetArgument(t, 5);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_39), y_38), l_38);
        t = concat_0_0(t);
        n_39 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, f_36, term_n_30), x_38, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(n_39), f_37), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_p_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_37)), (ATerm) ATmakeAppl(sym_Op_2, f_36, z_38))), (ATerm)ATmakeAppl(sym_Op_2, term_p_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, p_38)), (ATerm) ATmakeAppl(sym_Op_2, f_36, l_39))), (ATerm) ATmakeAppl(sym_Seqs_1, q_38)))));
      }
    }
    return(t);
  }
  ATerm a_42 (ATerm z_39, ATerm a_40, ATerm b_40, ATerm f_40, ATerm t)
  {
    ATerm s_40 = NULL,t_40 = NULL,w_40 = NULL,z_40 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL;
    t = f_40;
    t = new_0_0(t);
    s_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_40, (ATerm) ATmakeAppl(sym_Var_1, s_40));
    t = copy_1_0(MkDistApplication_0_0, t);
    t = tuple_unzip_1_0(_id, t);
    if(match_cons(t, sym__6))
      {
        t_40 = ATgetArgument(t, 0);
        w_40 = ATgetArgument(t, 1);
        z_40 = ATgetArgument(t, 2);
        k_41 = ATgetArgument(t, 3);
        l_41 = ATgetArgument(t, 4);
        m_41 = ATgetArgument(t, 5);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, z_40, l_41);
    {
      ATerm o_30 = t;
      int p_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm q_30 = ATgetArgument(t, 0);
              ATerm r_30 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_40;
          {
            ATerm k_8 (ATerm t)
            {
              t = l_41;
              return(t);
            }
            t = at_end_1_0(k_8, t);
          }
          ;
          LocalPopChoice(p_30);
        }
      else
        {
          t = o_30;
          {
            ATerm v_9 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, z_40, l_41));
            if(match_cons(t, sym__2))
              {
                ATerm s_30 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) s_30) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                v_9 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = v_9;
            t = concat_0_0(t);
          }
        }
      n_41 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, z_39, term_t_30), w_40, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(n_41), s_40), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_p_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_40)), (ATerm) ATmakeAppl(sym_Op_2, z_39, k_41))), (ATerm)ATmakeAppl(sym_Op_2, z_39, m_41), (ATerm) ATmakeAppl(sym_Seqs_1, t_40)))));
    }
    return(t);
  }
  ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL;
  r_41 = t;
  if(match_cons(t, sym__3))
    {
      s_41 = ATgetArgument(t, 0);
      t_41 = ATgetArgument(t, 1);
      u_41 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_41;
  if(match_string(t, "T"))
    {
      t = u_41;
      if(match_cons(t, sym__2))
        {
          v_41 = ATgetArgument(t, 0);
          w_41 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_41;
      if(match_int(t, 0))
        {
          ATerm u_30 = t;
          int z_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_41(s_41, v_41, w_41, r_41, t);
              ;
              LocalPopChoice(z_30);
            }
          else
            {
              t = u_30;
              {
                ATerm y_41 = NULL;
                t = r_41;
                t = new_0_0(t);
                y_41 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, s_41, term_n_30), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_41), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_p_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_41)), (ATerm) ATmakeAppl(sym_Op_2, s_41, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_p_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_41)), (ATerm) ATmakeAppl(sym_Op_2, s_41, (ATerm) ATempty))), term_e_25))));
              }
            }
        }
      else
        {
          t = z_41(s_41, v_41, w_41, r_41, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = u_41;
      if(match_cons(t, sym__2))
        {
          v_41 = ATgetArgument(t, 0);
          w_41 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_42(s_41, v_41, w_41, r_41, t);
    }
  return(t);
}
ATerm CongruenceDef_0_0 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_31 = ATgetArgument(t, 0);
      if(match_cons(a_31, sym__2))
        {
          ATerm g_31 = ATgetArgument(a_31, 0);
          if(match_cons(g_31, sym_Mod_2))
            {
              z_42 = ATgetArgument(g_31, 0);
              a_43 = ATgetArgument(g_31, 1);
            }
          else
            _fail(t);
          b_43 = ATgetArgument(a_31, 1);
        }
      else
        _fail(t);
      c_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, z_42, a_43, b_43);
  t = DefineCongruence_0_0(t);
  t = desugar_0_0(t);
  d_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_43, c_43);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm i_31 = t;
  int k_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0_0(t);
      ;
      LocalPopChoice(k_31);
    }
  else
    {
      t = i_31;
      {
        ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm l_31 = ATgetArgument(t, 0);
            if(match_cons(l_31, sym__2))
              {
                d_10 = ATgetArgument(l_31, 0);
                e_10 = ATgetArgument(l_31, 1);
              }
            else
              _fail(t);
            f_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_10, e_10);
        t = Definitions_0_0(t);
        g_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_10, f_10);
        {
          ATerm s_8 (ATerm t)
          {
            ATerm u_31 = t;
            int v_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_43 = NULL,i_43 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    h_43 = ATgetFirst((ATermList) t);
                    i_43 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = i_43;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = h_43;
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
          t = _2_0(s_8, _id, t);
        }
      }
    }
  return(t);
}
ATerm diff_1_0 (ATerm a_121 (ATerm), ATerm t)
{
  ATerm s_43 = NULL,c_44 = NULL;
  if(match_cons(t, sym__2))
    {
      c_44 = ATgetArgument(t, 0);
      s_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_44;
  {
    ATerm g_44 (ATerm t)
    {
      ATerm w_31 = t;
      int x_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(x_31);
        }
      else
        {
          t = w_31;
          {
            ATerm y_31 = t;
            int d_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_10 = NULL,i_10 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    h_10 = ATgetFirst((ATermList) t);
                    i_10 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = s_43;
                {
                  ATerm u_8 (ATerm t)
                  {
                    ATerm k_10 = NULL;
                    k_10 = t;
                    t = (ATerm) ATmakeAppl(sym__2, h_10, k_10);
                    t = a_121(t);
                    return(t);
                  }
                  t = fetch_1_0(u_8, t);
                  t = i_10;
                  t = g_44(t);
                }
                ;
                LocalPopChoice(d_32);
              }
            else
              {
                t = y_31;
                t = Cons_2_0(_id, g_44, t);
              }
          }
        }
      return(t);
    }
    t = g_44(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm t)
{
  ATerm h_44 (ATerm t)
  {
    ATerm e_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_114(t);
        ;
        LocalPopChoice(f_32);
      }
    else
      {
        t = e_32;
        t = i_114(t);
        t = _2_0(k_114, h_44, t);
        t = j_114(t);
      }
    return(t);
  }
  t = h_44(t);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_32 = ATgetFirst((ATermList) t);
      if(match_cons(g_32, sym__2))
        {
          y_46 = ATgetArgument(g_32, 0);
          z_46 = ATgetArgument(g_32, 1);
        }
      else
        _fail(t);
      i_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(z_46);
  if(match_cons(t, sym__2))
    {
      j_47 = ATgetArgument(t, 0);
      k_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(y_46);
  if(match_cons(t, sym__2))
    {
      if((j_47 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      l_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_47, k_47);
  {
    ATerm v_8 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm h_32 = ATgetArgument(t, 0);
          if(((ATgetType(h_32) != AT_LIST) || !(ATisEmpty(h_32))))
            _fail(t);
          {
            ATerm i_32 = ATgetArgument(t, 1);
            if(((ATgetType(i_32) != AT_LIST) || !(ATisEmpty(i_32))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm w_8 (ATerm t)
    {
      ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm n_32 = ATgetArgument(t, 0);
          if(((ATgetType(n_32) == AT_LIST) && !(ATisEmpty(n_32))))
            {
              n_47 = ATgetFirst((ATermList) n_32);
              p_47 = (ATerm) ATgetNext((ATermList) n_32);
            }
          else
            _fail(t);
          {
            ATerm o_32 = ATgetArgument(t, 1);
            if(((ATgetType(o_32) == AT_LIST) && !(ATisEmpty(o_32))))
              {
                o_47 = ATgetFirst((ATermList) o_32);
                q_47 = (ATerm) ATgetNext((ATermList) o_32);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_47, o_47), (ATerm) ATmakeAppl(sym__2, p_47, q_47));
      return(t);
    }
    ATerm a_9 (ATerm t)
    {
      ATerm r_47 = NULL,s_47 = NULL;
      if(match_cons(t, sym__2))
        {
          r_47 = ATgetArgument(t, 0);
          s_47 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(s_47), r_47);
      return(t);
    }
    t = genzip_4_0(v_8, w_8, a_9, _id, t);
    m_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_47, i_47);
    {
      ATerm p_32 = t;
      int s_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm t_32 = ATgetArgument(t, 0);
              ATerm z_32 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_47;
          {
            ATerm b_9 (ATerm t)
            {
              t = i_47;
              return(t);
            }
            t = at_end_1_0(b_9, t);
          }
          ;
          LocalPopChoice(s_32);
        }
      else
        {
          t = p_32;
          {
            ATerm r_10 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, m_47, i_47));
            if(match_cons(t, sym__2))
              {
                ATerm a_33 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) a_33) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                r_10 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_10;
            t = concat_0_0(t);
          }
        }
    }
  }
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm b_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_9 (ATerm t)
      {
        ATerm a_48 = NULL;
        a_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, a_48);
        return(t);
      }
      ATerm e_9 (ATerm t)
      {
        ATerm g_9 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, g_9, t);
        return(t);
      }
      ATerm f_9 (ATerm t)
      {
        ATerm j_33 = t;
        int k_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_9 (ATerm t)
            {
              ATerm l_33 = t;
              int m_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      c_48 = ATgetFirst((ATermList) t);
                      f_48 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = c_48;
                  if(match_cons(t, sym__2))
                    {
                      d_48 = ATgetArgument(t, 0);
                      e_48 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = e_48;
                  if((d_48 != t))
                    {
                      _fail(t);
                    }
                  t = f_48;
                  ;
                  LocalPopChoice(m_33);
                }
              else
                {
                  t = l_33;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, j_9, t);
            ;
            LocalPopChoice(k_33);
          }
        else
          {
            t = j_33;
            {
              ATerm j_48 = NULL,m_48 = NULL,n_48 = NULL,r_48 = NULL;
              if(match_cons(t, sym__2))
                {
                  j_48 = ATgetArgument(t, 0);
                  m_48 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_48;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_48 = ATgetFirst((ATermList) t);
                  r_48 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_48), n_48), r_48);
            }
          }
        return(t);
      }
      t = for_3_0(c_9, e_9, f_9, t);
      ;
      LocalPopChoice(i_33);
    }
  else
    {
      t = b_33;
      {
        ATerm k_9 (ATerm t)
        {
          ATerm y_48 = NULL;
          if(match_cons(t, sym__2))
            {
              y_48 = ATgetArgument(t, 0);
              if((y_48 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(k_9, t);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm b_136 (ATerm), ATerm c_136 (ATerm), ATerm d_136 (ATerm), ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm n_33 = ATgetArgument(t, 0);
      if(((ATgetType(n_33) == AT_LIST) && !(ATisEmpty(n_33))))
        {
          d_49 = ATgetFirst((ATermList) n_33);
          e_49 = (ATerm) ATgetNext((ATermList) n_33);
        }
      else
        _fail(t);
      h_49 = ATgetArgument(t, 1);
      i_49 = ATgetArgument(t, 2);
      j_49 = ATgetArgument(t, 3);
      k_49 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_49, i_49);
  t = b_136(t);
  if(match_cons(t, sym__2))
    {
      l_49 = ATgetArgument(t, 0);
      m_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_49;
  t = c_136(t);
  n_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_49, h_49);
  t = diff_0_0(t);
  o_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_49, e_49);
  {
    ATerm o_33 = t;
    int s_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_33 = ATgetArgument(t, 0);
            ATerm u_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_49;
        {
          ATerm l_9 (ATerm t)
          {
            t = e_49;
            return(t);
          }
          t = at_end_1_0(l_9, t);
        }
        ;
        LocalPopChoice(s_33);
      }
    else
      {
        t = o_33;
        {
          ATerm v_10 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, o_49, e_49));
          if(match_cons(t, sym__2))
            {
              ATerm v_33 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_33) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              v_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_10;
          t = concat_0_0(t);
        }
      }
    p_49 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_49, h_49);
    {
      ATerm w_33 = t;
      int x_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm y_33 = ATgetArgument(t, 0);
              ATerm a_34 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_49;
          {
            ATerm m_9 (ATerm t)
            {
              t = h_49;
              return(t);
            }
            t = at_end_1_0(m_9, t);
          }
          ;
          LocalPopChoice(x_33);
        }
      else
        {
          t = w_33;
          {
            ATerm z_10 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, o_49, h_49));
            if(match_cons(t, sym__2))
              {
                ATerm d_34 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) d_34) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                z_10 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = z_10;
            t = concat_0_0(t);
          }
        }
      q_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, d_49, l_49, j_49);
      t = d_136(t);
      r_49 = t;
      t = (ATerm) ATmakeAppl(sym__5, p_49, q_49, m_49, r_49, k_49);
    }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm t)
{
  ATerm y_49 (ATerm t)
  {
    ATerm e_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_120(t);
        ;
        LocalPopChoice(f_34);
      }
    else
      {
        t = e_34;
        t = s_120(t);
        t = y_49(t);
      }
    return(t);
  }
  t = y_49(t);
  return(t);
}
ATerm for_3_0 (ATerm u_120 (ATerm), ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm t)
{
  t = u_120(t);
  t = while_not_2_0(v_120, w_120, t);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm p_9 (ATerm t)
  {
    ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL;
    if(match_cons(t, sym__3))
      {
        d_50 = ATgetArgument(t, 0);
        e_50 = ATgetArgument(t, 1);
        f_50 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__5, d_50, d_50, e_50, f_50, (ATerm) ATempty);
    return(t);
  }
  ATerm r_9 (ATerm t)
  {
    ATerm g_50 = NULL,h_50 = NULL;
    if(match_cons(t, sym__5))
      {
        ATerm g_34 = ATgetArgument(t, 0);
        if(((ATgetType(g_34) != AT_LIST) || !(ATisEmpty(g_34))))
          _fail(t);
        {
          ATerm h_34 = ATgetArgument(t, 1);
        }
        {
          ATerm i_34 = ATgetArgument(t, 2);
        }
        g_50 = ATgetArgument(t, 3);
        h_50 = ATgetArgument(t, 4);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, g_50, h_50);
    return(t);
  }
  ATerm s_9 (ATerm t)
  {
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_9 (ATerm t)
        {
          t = svars_arity_0_0(t);
          {
            ATerm w_9 (ATerm t)
            {
              ATerm l_34 = t;
              int o_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = DefinitionExists_0_0(t);
                  ;
                  LocalPopChoice(o_34);
                }
              else
                {
                  t = l_34;
                }
              return(t);
            }
            t = map_1_0(w_9, t);
          }
          return(t);
        }
        ATerm u_9 (ATerm t)
        {
          ATerm i_50 = NULL,j_50 = NULL;
          if(match_cons(t, sym__3))
            {
              ATerm t_34 = ATgetArgument(t, 0);
              i_50 = ATgetArgument(t, 1);
              j_50 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(j_50), i_50);
          return(t);
        }
        t = GnNextChangeGraph_3_0(get_definition_0_0, t_9, u_9, t);
        ;
        LocalPopChoice(k_34);
      }
    else
      {
        t = j_34;
        {
          ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL;
          if(match_cons(t, sym__5))
            {
              l_50 = ATgetArgument(t, 0);
              o_50 = ATgetArgument(t, 1);
              p_50 = ATgetArgument(t, 2);
              q_50 = ATgetArgument(t, 3);
              r_50 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = l_50;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_50 = ATgetFirst((ATermList) t);
              n_50 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, n_50, o_50, p_50, q_50, (ATerm) ATinsert(CheckATermList(r_50), m_50));
        }
      }
    return(t);
  }
  t = for_3_0(p_9, r_9, s_9, t);
  {
    ATerm x_34 = t;
    int o_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_50 = NULL,a_51 = NULL;
        if(match_cons(t, sym__2))
          {
            z_50 = ATgetArgument(t, 0);
            a_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_51;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_50;
        ;
        LocalPopChoice(o_35);
      }
    else
      {
        t = x_34;
        t = MissingDefs_0_0(t);
        t = SSL_exit((ATerm) ATmakeInt(1));
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm k_136 (ATerm), ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL;
  if(match_cons(t, sym__2))
    {
      c_51 = ATgetArgument(t, 0);
      d_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_136(t);
  e_51 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_51, c_51, d_51);
  t = table_push_0_0(t);
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(e_51, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(q_35);
      }
    else
      {
        t = p_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_51 = ATgetFirst((ATermList) t);
        g_51 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(e_51, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(g_51), (ATerm) ATinsert(CheckATermList(f_51), c_51)));
    t = (ATerm) ATmakeAppl(sym__2, c_51, d_51);
  }
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm r_51 = NULL;
  r_51 = t;
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_11 = NULL,d_11 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue)), r_51);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_11 = ATgetFirst((ATermList) t);
            {
              ATerm v_35 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = d_11;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm w_35 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_35) != ATmakeSymbol("j_0", 0, ATtrue)))
              _fail(t);
            c_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_11;
        ;
        LocalPopChoice(u_35);
      }
    else
      {
        t = t_35;
        {
          ATerm h_11 = NULL,i_11 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue)), r_51);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_11 = ATgetFirst((ATermList) t);
              {
                ATerm x_35 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = i_11;
          if(match_cons(t, sym_Defined_2))
            {
              ATerm y_35 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) y_35) != ATmakeSymbol("e_0", 0, ATtrue)))
                _fail(t);
              h_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_11;
        }
      }
  }
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm r_52 (ATerm g_52, ATerm t)
  {
    ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL;
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue)), g_52);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_52 = ATgetFirst((ATermList) t);
        {
          ATerm z_35 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = k_52;
    if(match_cons(t, sym_Defined_3))
      {
        ATerm a_36 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) a_36) != ATmakeSymbol("c_0", 0, ATtrue)))
          _fail(t);
        i_52 = ATgetArgument(t, 1);
        j_52 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(j_52), i_52);
    return(t);
  }
  ATerm n_52 = NULL,p_52 = NULL;
  n_52 = t;
  if(match_cons(t, sym__2))
    {
      ATerm b_36 = ATgetArgument(t, 0);
      p_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_52;
  {
    ATerm c_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_36 = ATgetArgument(t, 0);
            ATerm j_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(d_36);
        {
          ATerm k_36 = t;
          int l_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_11 = NULL,o_11 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue)), n_52);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_11 = ATgetFirst((ATermList) t);
                  {
                    ATerm n_36 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = o_11;
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm o_36 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) o_36) != ATmakeSymbol("h_0", 0, ATtrue)))
                    _fail(t);
                  n_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_11;
              ;
              LocalPopChoice(l_36);
            }
          else
            {
              t = k_36;
              t = r_52(n_52, t);
            }
        }
      }
    else
      {
        t = c_36;
        t = r_52(n_52, t);
      }
  }
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL,c_53 = NULL;
  t_52 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      u_52 = ATgetArgument(t, 0);
      v_52 = ATgetArgument(t, 1);
      w_52 = ATgetArgument(t, 2);
      {
        ATerm p_36 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  x_52 = t;
  t = v_52;
  {
    ATerm x_9 (ATerm t)
    {
      t = term_f_18;
      return(t);
    }
    ATerm y_9 (ATerm t)
    {
      ATerm d_53 = NULL,e_53 = NULL;
      if(match_cons(t, sym__2))
        {
          d_53 = ATgetArgument(t, 0);
          e_53 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm q_36 = t;
        int r_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(d_53, e_53);
            ;
            LocalPopChoice(r_36);
          }
        else
          {
            t = q_36;
            t = SSL_addr(d_53, e_53);
          }
      }
      return(t);
    }
    ATerm z_9 (ATerm t)
    {
      t = term_l_18;
      return(t);
    }
    t = foldr_3_0(x_9, y_9, z_9, t);
    y_52 = t;
    t = w_52;
    {
      ATerm a_10 (ATerm t)
      {
        t = term_f_18;
        return(t);
      }
      ATerm b_10 (ATerm t)
      {
        ATerm g_53 = NULL,h_53 = NULL;
        if(match_cons(t, sym__2))
          {
            g_53 = ATgetArgument(t, 0);
            h_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        {
          ATerm s_36 = t;
          int t_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_addi(g_53, h_53);
              ;
              LocalPopChoice(t_36);
            }
          else
            {
              t = s_36;
              t = SSL_addr(g_53, h_53);
            }
        }
        return(t);
      }
      ATerm c_10 (ATerm t)
      {
        t = term_l_18;
        return(t);
      }
      t = foldr_3_0(a_10, b_10, c_10, t);
      z_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_52, (ATerm) ATmakeAppl(sym__2, y_52, z_52));
      {
        ATerm u_36 = t;
        int v_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Definitions_0_0(t);
            ;
            LocalPopChoice(v_36);
          }
        else
          {
            t = u_36;
            t = (ATerm) ATempty;
          }
        a_53 = t;
        t = u_52;
        {
          ATerm w_36 = t;
          int x_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Arities_0_0(t);
              ;
              LocalPopChoice(x_36);
            }
          else
            {
              t = w_36;
              t = (ATerm) ATempty;
            }
          b_53 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_52, z_52)), b_53);
          {
            ATerm l_10 (ATerm t)
            {
              ATerm i_53 = NULL;
              if(match_cons(t, sym__2))
                {
                  i_53 = ATgetArgument(t, 0);
                  if((i_53 != ATgetArgument(t, 1)))
                    {
                      _fail(ATgetArgument(t, 1));
                    }
                }
              else
                _fail(t);
              return(t);
            }
            t = union_1_0(l_10, t);
            c_53 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_52, (ATerm) ATmakeAppl(sym__2, y_52, z_52)), (ATerm) ATmakeAppl(sym_Defined_2, term_y_36, (ATerm) ATinsert(CheckATermList(a_53), t_52)));
            {
              ATerm m_10 (ATerm t)
              {
                t = term_z_36;
                return(t);
              }
              t = assert_1_0(m_10, t);
              t = (ATerm) ATmakeAppl(sym__2, u_52, (ATerm) ATmakeAppl(sym_Defined_2, term_a_37, c_53));
              {
                ATerm n_10 (ATerm t)
                {
                  t = term_b_37;
                  return(t);
                }
                t = assert_1_0(n_10, t);
                t = x_52;
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm DefinitionName_0_0 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL,n_53 = NULL,o_53 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      j_53 = ATgetArgument(t, 0);
      k_53 = ATgetArgument(t, 1);
      l_53 = ATgetArgument(t, 2);
      {
        ATerm c_37 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = k_53;
  {
    ATerm o_10 (ATerm t)
    {
      t = term_f_18;
      return(t);
    }
    ATerm p_10 (ATerm t)
    {
      ATerm p_53 = NULL,q_53 = NULL;
      if(match_cons(t, sym__2))
        {
          p_53 = ATgetArgument(t, 0);
          q_53 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm d_37 = t;
        int e_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(p_53, q_53);
            ;
            LocalPopChoice(e_37);
          }
        else
          {
            t = d_37;
            t = SSL_addr(p_53, q_53);
          }
      }
      return(t);
    }
    ATerm s_10 (ATerm t)
    {
      t = term_l_18;
      return(t);
    }
    t = foldr_3_0(o_10, p_10, s_10, t);
    n_53 = t;
    t = l_53;
    {
      ATerm t_10 (ATerm t)
      {
        t = term_f_18;
        return(t);
      }
      ATerm u_10 (ATerm t)
      {
        ATerm r_53 = NULL,s_53 = NULL;
        if(match_cons(t, sym__2))
          {
            r_53 = ATgetArgument(t, 0);
            s_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        {
          ATerm g_37 = t;
          int h_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_addi(r_53, s_53);
              ;
              LocalPopChoice(h_37);
            }
          else
            {
              t = g_37;
              t = SSL_addr(r_53, s_53);
            }
        }
        return(t);
      }
      ATerm w_10 (ATerm t)
      {
        t = term_l_18;
        return(t);
      }
      t = foldr_3_0(t_10, u_10, w_10, t);
      o_53 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_53, (ATerm) ATmakeAppl(sym__2, n_53, o_53)));
    }
  }
  return(t);
}
ATerm union_1_0 (ATerm e_121 (ATerm), ATerm t)
{
  ATerm w_53 = NULL,z_53 = NULL;
  if(match_cons(t, sym__2))
    {
      z_53 = ATgetArgument(t, 0);
      w_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_53;
  {
    ATerm a_54 (ATerm t)
    {
      ATerm i_37 = t;
      int j_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = w_53;
          ;
          LocalPopChoice(j_37);
        }
      else
        {
          t = i_37;
          {
            ATerm k_37 = t;
            int l_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_11 = NULL,q_11 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    p_11 = ATgetFirst((ATermList) t);
                    q_11 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = w_53;
                {
                  ATerm x_10 (ATerm t)
                  {
                    ATerm r_11 = NULL;
                    r_11 = t;
                    t = (ATerm) ATmakeAppl(sym__2, p_11, r_11);
                    t = e_121(t);
                    return(t);
                  }
                  t = fetch_1_0(x_10, t);
                  t = q_11;
                  t = a_54(t);
                }
                ;
                LocalPopChoice(l_37);
              }
            else
              {
                t = k_37;
                t = Cons_2_0(_id, a_54, t);
              }
          }
        }
      return(t);
    }
    t = a_54(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm n_123 (ATerm), ATerm o_123 (ATerm), ATerm p_123 (ATerm), ATerm t)
{
  ATerm m_37 = t;
  int n_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_123(t);
      ;
      LocalPopChoice(n_37);
    }
  else
    {
      t = m_37;
      {
        ATerm j_54 = NULL,k_54 = NULL,n_54 = NULL,o_54 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_54 = ATgetFirst((ATermList) t);
            k_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_54;
        t = p_123(t);
        n_54 = t;
        t = k_54;
        t = foldr_3_0(n_123, o_123, p_123, t);
        o_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_54, o_54);
        t = o_123(t);
      }
    }
  return(t);
}
ATerm all_defs_0_0 (ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL;
  p_54 = t;
  {
    ATerm y_10 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm a_11 (ATerm t)
    {
      ATerm b_11 (ATerm t)
      {
        ATerm s_54 = NULL;
        if(match_cons(t, sym__2))
          {
            s_54 = ATgetArgument(t, 0);
            if((s_54 != ATgetArgument(t, 1)))
              {
                _fail(ATgetArgument(t, 1));
              }
          }
        else
          _fail(t);
        return(t);
      }
      t = union_1_0(b_11, t);
      return(t);
    }
    t = foldr_3_0(y_10, a_11, DefinitionName_0_0, t);
    q_54 = t;
    t = p_54;
    t = map_1_0(RegisterSDefT_0_0, t);
    r_54 = t;
    t = (ATerm) ATmakeAppl(sym__3, q_54, r_54, (ATerm) ATempty);
    t = extract_needed_defs_0_0(t);
  }
  return(t);
}
ATerm Strategies_1_0 (ATerm w_91 (ATerm), ATerm t)
{
  ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL;
  w_54 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      u_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_54);
  t_54 = t;
  t = u_54;
  t = w_91(t);
  v_54 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, v_54), t_54);
  return(t);
}
ATerm Cons_2_0 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm t)
{
  ATerm z_54 = NULL,b_55 = NULL,c_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL;
  g_55 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_55 = ATgetFirst((ATermList) t);
      c_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_55);
  z_54 = t;
  t = b_55;
  t = s_91(t);
  e_55 = t;
  t = c_55;
  t = t_91(t);
  f_55 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(f_55), e_55), z_54);
  return(t);
}
ATerm Specification_1_0 (ATerm b_92 (ATerm), ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL,n_55 = NULL;
  n_55 = t;
  if(match_cons(t, sym_Specification_1))
    {
      k_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_55);
  j_55 = t;
  t = k_55;
  t = b_92(t);
  l_55 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, l_55), j_55);
  return(t);
}
ATerm _2_0 (ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL;
  x_55 = t;
  if(match_cons(t, sym__2))
    {
      t_55 = ATgetArgument(t, 0);
      u_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_55);
  s_55 = t;
  t = t_55;
  t = d_87(t);
  v_55 = t;
  t = u_55;
  t = e_87(t);
  w_55 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, v_55, w_55), s_55);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm r_128 (ATerm), ATerm t)
{
  ATerm a_56 = NULL,b_56 = NULL,c_56 = NULL;
  if(match_cons(t, sym__2))
    {
      a_56 = ATgetArgument(t, 0);
      b_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_56, term_o_37);
  t = open_stream_0_0(t);
  c_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_56, b_56);
  t = r_128(t);
  t = fclose_0_0(t);
  t = b_56;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm d_56 = NULL,e_56 = NULL;
  d_56 = t;
  {
    ATerm e_11 (ATerm t)
    {
      ATerm p_37 = t;
      int q_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_11 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((e_56 != NULL) && (e_56 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_56 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(f_11, t);
          ;
          LocalPopChoice(q_37);
        }
      else
        {
          t = p_37;
          t = term_r_37;
          if(((e_56 != NULL) && (e_56 != t)))
            _fail(t);
          else
            e_56 = t;
        }
      return(t);
    }
    t = _2_0(e_11, _id, t);
    t = d_56;
    {
      ATerm g_11 (ATerm t)
      {
        ATerm v_11 = NULL;
        v_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_56), v_11);
        return(t);
      }
      t = _2_0(_id, g_11, t);
      {
        ATerm s_37 = t;
        int t_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_11 (ATerm t)
            {
              ATerm s_11 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(s_11, t);
              return(t);
            }
            ATerm k_11 (ATerm t)
            {
              ATerm t_11 (ATerm t)
              {
                ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm u_37 = ATgetArgument(t, 0);
                    if(match_cons(u_37, sym_Stream_1))
                      {
                        f_56 = ATgetArgument(u_37, 0);
                      }
                    else
                      _fail(t);
                    g_56 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(f_56, g_56);
                h_56 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, h_56);
                return(t);
              }
              t = WriteToFile_1_0(t_11, t);
              return(t);
            }
            t = _2_0(j_11, k_11, t);
            ;
            LocalPopChoice(t_37);
          }
        else
          {
            t = s_37;
            {
              ATerm w_11 (ATerm t)
              {
                ATerm x_11 (ATerm t)
                {
                  ATerm i_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm v_37 = ATgetArgument(t, 0);
                      if(match_cons(v_37, sym_Stream_1))
                        {
                          i_56 = ATgetArgument(v_37, 0);
                        }
                      else
                        _fail(t);
                      j_56 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(i_56, j_56);
                  k_56 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), k_56);
                  l_56 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, l_56);
                  return(t);
                }
                t = WriteToFile_1_0(x_11, t);
                return(t);
              }
              t = _2_0(_id, w_11, t);
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
ATerm apply_strategy_1_0 (ATerm t_131 (ATerm), ATerm t)
{
  ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL;
  o_56 = t;
  t = dtime_0_0(t);
  t = o_56;
  t = t_131(t);
  p_56 = t;
  t = dtime_0_0(t);
  q_56 = t;
  t = p_56;
  if(match_cons(t, sym__2))
    {
      r_56 = ATgetArgument(t, 0);
      s_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_56), (ATerm) ATmakeAppl(sym_Runtime_1, q_56)), s_56);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_57 (ATerm a_57, ATerm t)
  {
    t = SSL_fclose(a_57);
    return(t);
  }
  ATerm d_57 = NULL,e_57 = NULL;
  e_57 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_57 = ATgetArgument(t, 0);
      {
        ATerm w_37 = t;
        int x_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_57);
            ;
            LocalPopChoice(x_37);
          }
        else
          {
            t = w_37;
            t = g_57(e_57, t);
          }
      }
    }
  else
    {
      t = g_57(e_57, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_57 = NULL;
  t = SSL_stdin_stream();
  h_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_57);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_57 = NULL;
  t = SSL_stdout_stream();
  i_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_57);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_57 = NULL;
  t = SSL_stderr_stream();
  j_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_57);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_37 = ATgetArgument(t, 0);
      ATerm z_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_38 = t;
    int b_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_12 = NULL,l_12 = NULL;
        k_12 = t;
        t = SSL_explode_term(k_12);
        if(match_cons(t, sym__2))
          {
            ATerm c_38 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_38) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm d_38 = ATgetArgument(t, 1);
              if(((ATgetType(d_38) == AT_LIST) && !(ATisEmpty(d_38))))
                {
                  l_12 = ATgetFirst((ATermList) d_38);
                  {
                    ATerm e_38 = (ATerm) ATgetNext((ATermList) d_38);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = l_12;
        if(match_cons(t, sym_stderr_0))
          {
            t = l_12;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = l_12;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = l_12;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(b_38);
      }
    else
      {
        t = a_38;
        {
          ATerm f_38 = t;
          int g_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL;
              ATerm z_11 (ATerm t)
              {
                ATerm s_57 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    s_57 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = s_57;
                return(t);
              }
              t = _2_0(z_11, _id, t);
              if(match_cons(t, sym__2))
                {
                  p_57 = ATgetArgument(t, 0);
                  q_57 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(p_57, q_57);
              r_57 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, r_57);
              ;
              LocalPopChoice(g_38);
            }
          else
            {
              t = f_38;
              {
                ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL;
                ATerm a_12 (ATerm t)
                {
                  ATerm w_57 = NULL;
                  w_57 = t;
                  t = SSL_is_string(w_57);
                  return(t);
                }
                t = _2_0(a_12, _id, t);
                if(match_cons(t, sym__2))
                  {
                    t_57 = ATgetArgument(t, 0);
                    u_57 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(t_57, u_57);
                v_57 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, v_57);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL;
  ATerm h_38 = t;
  int i_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_58 = NULL;
      a_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_58, term_j_38);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(i_38);
    }
  else
    {
      t = h_38;
      {
        ATerm p_12 = NULL;
        p_12 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_12), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = p_12;
        _fail(t);
      }
    }
  x_57 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(z_57);
  y_57 = t;
  t = x_57;
  t = fclose_0_0(t);
  t = y_57;
  return(t);
}
ATerm fetch_1_0 (ATerm m_106 (ATerm), ATerm t)
{
  ATerm f_58 (ATerm t)
  {
    ATerm k_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(m_106, _id, t);
        ;
        LocalPopChoice(m_38);
      }
    else
      {
        t = k_38;
        t = Cons_2_0(_id, f_58, t);
      }
    return(t);
  }
  t = f_58(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_38 = t;
  int o_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(o_38);
    }
  else
    {
      t = n_38;
      {
        ATerm i_58 = NULL,j_58 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_58 = ATgetFirst((ATermList) t);
            j_58 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_58;
        {
          ATerm b_12 (ATerm t)
          {
            t = j_58;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(b_12, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm s_106 (ATerm), ATerm t)
{
  ATerm p_58 (ATerm t)
  {
    ATerm r_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, p_58, t);
        ;
        LocalPopChoice(s_38);
      }
    else
      {
        t = r_38;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_106(t);
      }
    return(t);
  }
  t = p_58(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm r_58 = NULL;
  ATerm c_12 (ATerm t)
  {
    ATerm s_58 = NULL;
    s_58 = t;
    t = SSL_explode_string(s_58);
    return(t);
  }
  ATerm d_12 (ATerm t)
  {
    ATerm t_58 = NULL;
    t_58 = t;
    t = SSL_explode_string(t_58);
    return(t);
  }
  t = _2_0(c_12, d_12, t);
  {
    ATerm t_38 = t;
    int u_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_58 = NULL,w_58 = NULL;
        if(match_cons(t, sym__2))
          {
            v_58 = ATgetArgument(t, 0);
            w_58 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_58;
        {
          ATerm e_12 (ATerm t)
          {
            t = w_58;
            return(t);
          }
          t = at_end_1_0(e_12, t);
        }
        ;
        LocalPopChoice(u_38);
      }
    else
      {
        t = t_38;
        {
          ATerm v_12 = NULL,w_12 = NULL;
          v_12 = t;
          t = SSL_explode_term(v_12);
          if(match_cons(t, sym__2))
            {
              ATerm v_38 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_38) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              w_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_12;
          t = concat_0_0(t);
        }
      }
    r_58 = t;
    t = SSL_implode_string(r_58);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_38 = t;
  int b_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_59 = NULL;
      i_59 = t;
      t = SSL_is_string(i_59);
      ;
      LocalPopChoice(b_39);
    }
  else
    {
      t = w_38;
      {
        ATerm c_39 = t;
        int d_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_12 (ATerm t)
            {
              ATerm e_39 = t;
              int f_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(f_39);
                }
              else
                {
                  t = e_39;
                }
              return(t);
            }
            t = map_1_0(f_12, t);
            ;
            LocalPopChoice(d_39);
          }
        else
          {
            t = c_39;
            {
              ATerm m_59 = NULL,n_59 = NULL,o_59 = NULL;
              m_59 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_59 = ATgetArgument(t, 0);
                  t = n_59;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_59 = ATgetArgument(t, 0);
                      t = n_59;
                      {
                        ATerm g_39 = t;
                        int h_39 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_59);
                            {
                              ATerm i_39 = t;
                              int j_39 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_13 = NULL;
                                  t = eval_config_0_0(t);
                                  n_13 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_59, n_13);
                                  t = n_13;
                                  ;
                                  LocalPopChoice(j_39);
                                }
                              else
                                {
                                  t = i_39;
                                }
                            }
                            ;
                            LocalPopChoice(h_39);
                          }
                        else
                          {
                            t = g_39;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_59), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = n_59;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm s_59 = NULL,t_59 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_59 = ATgetArgument(t, 0);
                          o_59 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_59;
                      t = eval_config_0_0(t);
                      s_59 = t;
                      t = o_59;
                      t = eval_config_0_0(t);
                      t_59 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_59, t_59);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm v_129 (ATerm), ATerm t)
{
  ATerm k_39 = t;
  int m_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_59 = NULL,a_60 = NULL;
      y_59 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm o_39 = t;
        int p_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_13 = NULL;
            t = eval_config_0_0(t);
            v_13 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), v_13);
            t = v_13;
            ;
            LocalPopChoice(p_39);
          }
        else
          {
            t = o_39;
          }
        a_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_60, term_q_39);
        t = geq_0_0(t);
        t = y_59;
        t = v_129(t);
      }
      ;
      LocalPopChoice(m_39);
    }
  else
    {
      t = k_39;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm g_12 (ATerm t)
  {
    ATerm c_60 = NULL;
    c_60 = t;
    if(match_string(t, "-k"))
      {
        t = c_60;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = c_60;
      }
    return(t);
  }
  ATerm h_12 (ATerm t)
  {
    ATerm d_60 = NULL,g_60 = NULL;
    d_60 = t;
    t = SSL_string_to_int(d_60);
    g_60 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), g_60);
    t = d_60;
    return(t);
  }
  ATerm i_12 (ATerm t)
  {
    t = term_r_39;
    return(t);
  }
  t = ArgOption_3_0(g_12, h_12, i_12, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_39 = t;
  int c_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_12 (ATerm t)
      {
        ATerm i_60 = NULL;
        i_60 = t;
        if(match_string(t, "-S"))
          {
            t = i_60;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = i_60;
          }
        return(t);
      }
      ATerm m_12 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_d_40;
        return(t);
      }
      ATerm n_12 (ATerm t)
      {
        t = term_e_40;
        return(t);
      }
      t = Option_3_0(j_12, m_12, n_12, t);
      ;
      LocalPopChoice(c_40);
    }
  else
    {
      t = s_39;
      {
        ATerm g_40 = t;
        int h_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_12 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm q_12 (ATerm t)
            {
              ATerm j_60 = NULL,k_60 = NULL;
              j_60 = t;
              t = SSL_string_to_int(j_60);
              k_60 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_60);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, j_60);
              return(t);
            }
            ATerm s_12 (ATerm t)
            {
              t = term_i_40;
              return(t);
            }
            t = ArgOption_3_0(o_12, q_12, s_12, t);
            ;
            LocalPopChoice(h_40);
          }
        else
          {
            t = g_40;
            {
              ATerm t_12 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm u_12 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_j_40;
                return(t);
              }
              ATerm x_12 (ATerm t)
              {
                t = term_k_40;
                return(t);
              }
              t = Option_3_0(t_12, u_12, x_12, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_60 = NULL;
      t = term_r_12;
      t = d_0(t);
      p_60 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_40, term_m_40, p_60);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm s_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_60 = ATgetFirst((ATermList) t);
          o_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_60;
      t = a_0(t);
      t = term_r_12;
      t = b_0(t);
      s_60 = t;
      t = (ATerm) ATinsert(CheckATermList(o_60), s_60);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm y_12 (ATerm t)
  {
    ATerm v_60 = NULL;
    v_60 = t;
    if(match_string(t, "-o"))
      {
        t = v_60;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = v_60;
      }
    return(t);
  }
  ATerm z_12 (ATerm t)
  {
    ATerm w_60 = NULL;
    w_60 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), w_60);
    t = (ATerm) ATmakeAppl(sym_Output_1, w_60);
    return(t);
  }
  ATerm a_13 (ATerm t)
  {
    t = term_n_40;
    return(t);
  }
  t = ArgOption_3_0(y_12, z_12, a_13, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL;
  if(match_cons(t, sym__3))
    {
      z_60 = ATgetArgument(t, 0);
      a_61 = ATgetArgument(t, 1);
      b_61 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_60, a_61);
  {
    ATerm o_40 = t;
    int p_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_40 = ATgetArgument(t, 0);
            ATerm r_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(z_60, a_61);
        ;
        LocalPopChoice(p_40);
      }
    else
      {
        t = o_40;
        t = (ATerm) ATempty;
      }
    c_61 = t;
    t = SSL_table_put(z_60, a_61, (ATerm) ATinsert(CheckATermList(c_61), b_61));
    t = (ATerm) ATmakeAppl(sym__3, z_60, a_61, b_61);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm k_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_61 = NULL;
      t = term_r_12;
      t = m_0(t);
      o_61 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_40, term_m_40, o_61);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm s_61 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_61 = ATgetFirst((ATermList) t);
          l_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_61;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_61 = ATgetFirst((ATermList) t);
          n_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_61;
      t = i_0(t);
      t = m_61;
      t = k_0(t);
      s_61 = t;
      t = (ATerm) ATinsert(CheckATermList(n_61), s_61);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm b_13 (ATerm t)
  {
    ATerm u_61 = NULL;
    u_61 = t;
    if(match_string(t, "-i"))
      {
        t = u_61;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = u_61;
      }
    return(t);
  }
  ATerm c_13 (ATerm t)
  {
    ATerm v_61 = NULL;
    v_61 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), v_61);
    t = (ATerm) ATmakeAppl(sym_Input_1, v_61);
    return(t);
  }
  ATerm d_13 (ATerm t)
  {
    t = term_u_40;
    return(t);
  }
  t = ArgOption_3_0(b_13, c_13, d_13, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_61 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_12;
  t = whoami_0_0(t);
  w_61 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), w_61));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm v_40 = t;
    int x_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_13 = NULL;
        t = eval_config_0_0(t);
        z_13 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_13);
        t = z_13;
        ;
        LocalPopChoice(x_40);
      }
    else
      {
        t = v_40;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm l_123 (ATerm), ATerm m_123 (ATerm), ATerm t)
{
  ATerm y_40 = t;
  int a_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_123(t);
      ;
      LocalPopChoice(a_41);
    }
  else
    {
      t = y_40;
      {
        ATerm z_61 = NULL,a_62 = NULL,d_62 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_61 = ATgetFirst((ATermList) t);
            a_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_62;
        t = foldr_2_0(l_123, m_123, t);
        d_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_61, d_62);
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
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_62 = NULL,a_14 = NULL,b_14 = NULL;
  t = times_0_0(t);
  a_14 = t;
  t = SSL_explode_term(a_14);
  if(match_cons(t, sym__2))
    {
      ATerm b_41 = ATgetArgument(t, 0);
      b_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_14;
  {
    ATerm e_13 (ATerm t)
    {
      t = term_f_18;
      return(t);
    }
    ATerm f_13 (ATerm t)
    {
      ATerm f_14 = NULL,g_14 = NULL;
      if(match_cons(t, sym__2))
        {
          f_14 = ATgetArgument(t, 0);
          g_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm c_41 = t;
        int d_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(f_14, g_14);
            ;
            LocalPopChoice(d_41);
          }
        else
          {
            t = c_41;
            t = SSL_addr(f_14, g_14);
          }
      }
      return(t);
    }
    t = foldr_2_0(e_13, f_13, t);
    g_62 = t;
    t = SSL_TicksToSeconds(g_62);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL;
  r_62 = t;
  if(match_cons(t, sym__2))
    {
      s_62 = ATgetArgument(t, 0);
      t_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_41 = t;
    int f_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_62;
        if((s_62 != t))
          {
            _fail(t);
          }
        t = r_62;
        ;
        LocalPopChoice(f_41);
      }
    else
      {
        t = e_41;
        t = r_62;
        {
          ATerm g_41 = t;
          int h_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_62, t_62);
              ;
              LocalPopChoice(h_41);
            }
          else
            {
              t = g_41;
              t = SSL_gtr(s_62, t_62);
            }
          t = (ATerm) ATmakeAppl(sym__2, s_62, t_62);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_129 (ATerm), ATerm t)
{
  ATerm i_41 = t;
  int j_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_62 = NULL,y_62 = NULL;
      w_62 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm o_41 = t;
        int p_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_14 = NULL;
            t = eval_config_0_0(t);
            r_14 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), r_14);
            t = r_14;
            ;
            LocalPopChoice(p_41);
          }
        else
          {
            t = o_41;
          }
        y_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_62, term_l_18);
        t = geq_0_0(t);
        t = w_62;
        t = u_129(t);
      }
      ;
      LocalPopChoice(j_41);
    }
  else
    {
      t = i_41;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm g_13 (ATerm t)
  {
    ATerm a_63 = NULL,b_63 = NULL;
    t = run_time_0_0(t);
    a_63 = t;
    t = term_r_12;
    t = whoami_0_0(t);
    b_63 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), a_63), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), b_63));
    t = (ATerm) ATmakeAppl(sym__2, term_q_41, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_42), a_63), term_x_41), b_63));
    return(t);
  }
  t = if_verbose1_1_0(g_13, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm r_132 (ATerm), ATerm t)
{
  ATerm c_42 = t;
  int d_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm e_42 = t;
        int f_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_14 = NULL;
            t = eval_config_0_0(t);
            v_14 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), v_14);
            t = v_14;
            ;
            LocalPopChoice(f_42);
          }
        else
          {
            t = e_42;
          }
      }
      ;
      LocalPopChoice(d_42);
    }
  else
    {
      t = c_42;
      {
        ATerm h_13 (ATerm t)
        {
          ATerm g_42 = t;
          int h_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(h_42);
            }
          else
            {
              t = g_42;
              {
                ATerm i_42 = t;
                int j_42 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(j_42);
                  }
                else
                  {
                    t = i_42;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(h_13, t);
      }
    }
  t = r_132(t);
  return(t);
}
ATerm map_1_0 (ATerm b_106 (ATerm), ATerm t)
{
  ATerm c_63 (ATerm t)
  {
    ATerm k_42 = t;
    int l_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(l_42);
      }
    else
      {
        t = k_42;
        t = Cons_2_0(b_106, c_63, t);
      }
    return(t);
  }
  t = c_63(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm e_63 = NULL,f_63 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_63 = ATgetFirst((ATermList) t);
      f_63 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_63 = NULL,k_63 = NULL;
        t = f_63;
        t = g_0(t);
        j_63 = t;
        t = e_63;
        t = f_0(t);
        k_63 = t;
        t = f_63;
        {
          ATerm i_13 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(j_63), k_63);
            return(t);
          }
          t = reverse_acc_2_0(f_0, i_13, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_12;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm t_100 (ATerm), ATerm t)
{
  ATerm l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL;
  o_63 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_63);
  l_63 = t;
  t = m_63;
  t = t_100(t);
  n_63 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, n_63), l_63);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_42 = t;
  int n_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm o_42 = t;
        int p_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_14 = NULL;
            t = eval_config_0_0(t);
            z_14 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_14);
            t = z_14;
            ;
            LocalPopChoice(p_42);
          }
        else
          {
            t = o_42;
          }
      }
      ;
      LocalPopChoice(n_42);
    }
  else
    {
      t = m_42;
      {
        ATerm j_13 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(j_13, t);
      }
    }
  t = term_q_42;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm k_13 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, k_13, t);
    {
      ATerm l_13 (ATerm t)
      {
        ATerm r_63 = NULL;
        r_63 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, r_63), term_r_42);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(l_13, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm u_100 (ATerm), ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL;
  v_63 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      t_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_63);
  s_63 = t;
  t = t_63;
  t = u_100(t);
  u_63 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, u_63), s_63);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_63 = NULL,a_64 = NULL;
  z_63 = t;
  {
    ATerm s_42 = t;
    int t_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_63;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_42 = ATgetFirst((ATermList) t);
                ATerm v_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_63;
          }
        ;
        LocalPopChoice(t_42);
      }
    else
      {
        t = s_42;
        t = (ATerm) ATinsert(ATempty, z_63);
      }
    a_64 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), a_64);
    t = z_63;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm w_42 = t;
    int x_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_15 = NULL;
        t = eval_config_0_0(t);
        d_15 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_15);
        t = d_15;
        ;
        LocalPopChoice(x_42);
      }
    else
      {
        t = w_42;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_42 = t;
  int e_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_13 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm o_13 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_j_43;
        return(t);
      }
      ATerm p_13 (ATerm t)
      {
        t = term_k_43;
        return(t);
      }
      t = Option_3_0(m_13, o_13, p_13, t);
      ;
      LocalPopChoice(e_43);
    }
  else
    {
      t = y_42;
      {
        ATerm q_13 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm r_13 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_l_43;
          return(t);
        }
        ATerm s_13 (ATerm t)
        {
          t = term_m_43;
          return(t);
        }
        t = Option_3_0(q_13, r_13, s_13, t);
      }
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_134 (ATerm), ATerm t)
{
  ATerm f_64 = NULL;
  f_64 = t;
  {
    ATerm n_43 = t;
    int o_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_43;
        t = u_134(t);
        ;
        LocalPopChoice(o_43);
      }
    else
      {
        t = n_43;
      }
    t = f_64;
    {
      ATerm t_13 (ATerm t)
      {
        ATerm g_64 = NULL;
        g_64 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_64);
        t = (ATerm) ATmakeAppl(sym_Program_1, g_64);
        return(t);
      }
      ATerm u_13 (ATerm t)
      {
        ATerm q_43 = t;
        int r_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_43 = t;
            int u_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(u_43);
              }
            else
              {
                t = t_43;
                t = u_134(t);
                t = Cons_2_0(_id, u_13, t);
              }
            ;
            LocalPopChoice(r_43);
          }
        else
          {
            t = q_43;
            {
              ATerm i_64 = NULL,j_64 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_64 = ATgetFirst((ATermList) t);
                  j_64 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(j_64), (ATerm) ATmakeAppl(sym_Undefined_1, i_64));
            }
          }
        return(t);
      }
      t = Cons_2_0(t_13, u_13, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm t_134 (ATerm), ATerm t)
{
  ATerm q_64 = NULL,r_64 = NULL,s_64 = NULL;
  q_64 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = q_64;
  {
    ATerm w_13 (ATerm t)
    {
      ATerm v_43 = t;
      int w_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_134(t);
          ;
          LocalPopChoice(w_43);
        }
      else
        {
          t = v_43;
          {
            ATerm x_43 = t;
            int y_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_13 (ATerm t)
                {
                  ATerm t_64 = NULL;
                  t_64 = t;
                  if(match_string(t, "--help"))
                    {
                      t = t_64;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = t_64;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = t_64;
                        }
                    }
                  return(t);
                }
                ATerm y_13 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_z_43;
                  return(t);
                }
                ATerm c_14 (ATerm t)
                {
                  t = term_a_44;
                  return(t);
                }
                t = Option_3_0(x_13, y_13, c_14, t);
                ;
                LocalPopChoice(y_43);
              }
            else
              {
                t = x_43;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_13, t);
    {
      ATerm b_44 = t;
      int d_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_64 = NULL;
          y_64 = t;
          {
            ATerm e_44 = t;
            int f_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = y_64;
                {
                  ATerm i_44 = t;
                  int j_44 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm k_44 = t;
                        int l_44 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm i_16 = NULL;
                            t = eval_config_0_0(t);
                            i_16 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), i_16);
                            t = i_16;
                            ;
                            LocalPopChoice(l_44);
                          }
                        else
                          {
                            t = k_44;
                          }
                      }
                      ;
                      LocalPopChoice(j_44);
                    }
                  else
                    {
                      t = i_44;
                      {
                        ATerm d_14 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(d_14, t);
                      }
                    }
                  t = y_64;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(f_44);
              }
            else
              {
                t = e_44;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm m_44 = t;
                  int n_44 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_16 = NULL;
                      t = eval_config_0_0(t);
                      v_16 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), v_16);
                      t = v_16;
                      ;
                      LocalPopChoice(n_44);
                    }
                  else
                    {
                      t = m_44;
                    }
                  t = y_64;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(d_44);
        }
      else
        {
          t = b_44;
          {
            ATerm o_44 = t;
            int p_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_14 (ATerm t)
                {
                  ATerm h_14 (ATerm t)
                  {
                    if(((r_64 != NULL) && (r_64 != t)))
                      _fail(t);
                    else
                      r_64 = t;
                    return(t);
                  }
                  t = Undefined_1_0(h_14, t);
                  return(t);
                }
                t = fetch_1_0(e_14, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_64)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_q_41, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_64)), term_q_44));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(p_44);
              }
            else
              {
                t = o_44;
              }
          }
        }
      s_64 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = s_64;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm w_132 (ATerm), ATerm t)
{
  ATerm b_65 = NULL;
  t = parse_options_1_0(t_132, t);
  b_65 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), b_65);
  t = b_65;
  t = v_132(t);
  {
    ATerm r_44 = t;
    int s_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_132, t);
        ;
        LocalPopChoice(s_44);
      }
    else
      {
        t = r_44;
        {
          ATerm t_44 = t;
          int u_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_132(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(u_44);
            }
          else
            {
              t = t_44;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm c_132 (ATerm), ATerm d_132 (ATerm), ATerm e_132 (ATerm), ATerm t)
{
  ATerm i_14 (ATerm t)
  {
    ATerm v_44 = t;
    int w_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_132(t);
        ;
        LocalPopChoice(w_44);
      }
    else
      {
        t = v_44;
        {
          ATerm x_44 = t;
          int y_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(y_44);
            }
          else
            {
              t = x_44;
              {
                ATerm z_44 = t;
                int a_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(a_45);
                  }
                else
                  {
                    t = z_44;
                    {
                      ATerm b_45 = t;
                      int c_45 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm l_14 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm n_14 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_d_45;
                            return(t);
                          }
                          ATerm o_14 (ATerm t)
                          {
                            t = term_e_45;
                            return(t);
                          }
                          t = Option_3_0(l_14, n_14, o_14, t);
                          ;
                          LocalPopChoice(c_45);
                        }
                      else
                        {
                          t = b_45;
                          {
                            ATerm f_45 = t;
                            int g_45 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(g_45);
                              }
                            else
                              {
                                t = f_45;
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
  ATerm j_14 (ATerm t)
  {
    ATerm p_14 (ATerm t)
    {
      ATerm c_65 = NULL,d_65 = NULL;
      c_65 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm h_45 = t;
        int i_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_17 = NULL;
            t = eval_config_0_0(t);
            f_17 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_17);
            t = f_17;
            ;
            LocalPopChoice(i_45);
          }
        else
          {
            t = h_45;
          }
        d_65 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, d_65));
        t = c_65;
      }
      return(t);
    }
    t = if_verbose2_1_0(p_14, t);
    return(t);
  }
  ATerm k_14 (ATerm t)
  {
    ATerm e_65 = NULL,f_65 = NULL,l_17 = NULL;
    e_65 = t;
    {
      ATerm j_45 = t;
      int k_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_14 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((f_65 != NULL) && (f_65 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  f_65 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_14, t);
          ;
          LocalPopChoice(k_45);
        }
      else
        {
          t = j_45;
          t = term_l_45;
          f_65 = t;
        }
      t = not_null(f_65);
      t = ReadFromFile_0_0(t);
      l_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_65, l_17);
      t = apply_strategy_1_0(c_132, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(i_14, e_132, j_14, k_14, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm s_14 (ATerm t)
  {
    ATerm t_14 (ATerm t)
    {
      ATerm u_14 (ATerm t)
      {
        ATerm w_14 (ATerm t)
        {
          ATerm x_14 (ATerm t)
          {
            t = Strategies_1_0(all_defs_0_0, t);
            return(t);
          }
          ATerm y_14 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = Cons_2_0(x_14, y_14, t);
          return(t);
        }
        t = Cons_2_0(_id, w_14, t);
        return(t);
      }
      t = Specification_1_0(u_14, t);
      return(t);
    }
    t = _2_0(_id, t_14, t);
    return(t);
  }
  t = iowrap_3_0(s_14, _fail, default_usage_0_0, t);
  return(t);
}
