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
ATerm term_v_44;
ATerm term_o_44;
ATerm term_n_44;
ATerm term_z_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_y_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_g_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_l_39;
ATerm term_j_39;
ATerm term_f_38;
ATerm term_n_37;
ATerm term_k_37;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_s_28;
ATerm term_m_28;
ATerm term_u_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_k_24;
ATerm term_o_23;
ATerm term_i_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_b_22;
ATerm term_t_17;
ATerm term_q_17;
ATerm term_d_16;
ATerm term_a_15;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_b_13;
void init_constant_terms (void)
{
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATempty);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_ConstType_1, term_y_24);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_17);
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(sym__3, term_p_42, term_q_42, term_b_13);
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm MissingDefMod_0_0 (ATerm);
ATerm MissingDefs_0_0 (ATerm);
ATerm giving_up_0_0 (ATerm);
ATerm DefinitionExists_0_0 (ATerm);
ATerm Rec_2_0 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm);
ATerm Let_2_0 (ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm t_108 (ATerm), ATerm u_108 (ATerm), ATerm v_108 (ATerm), ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm split_2_0 (ATerm a_113 (ATerm), ATerm b_113 (ATerm), ATerm);
ATerm free_vars2_4_0 (ATerm w_117 (ATerm), ATerm x_117 (ATerm), ATerm y_117 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm z_117 (ATerm), ATerm);
ATerm svars_arity_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm alltd_1_0 (ATerm g_111 (ATerm), ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm x_108 (ATerm), ATerm y_108 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm);
ATerm JoinDefs2_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm e_93 (ATerm), ATerm f_93 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm);
ATerm Op_2_0 (ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm b_105 (ATerm), ATerm);
ATerm Bapp2_0_0 (ATerm);
ATerm Bapp0_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm Var_1_0 (ATerm n_92 (ATerm), ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm v_119 (ATerm), ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm b_93 (ATerm), ATerm c_93 (ATerm), ATerm);
ATerm Con_3_0 (ATerm n_93 (ATerm), ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Scope_2_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm s_110 (ATerm), ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm o_109 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm tuple_unzip_1_0 (ATerm q_113 (ATerm), ATerm);
ATerm MkDistApplication_0_0 (ATerm);
ATerm copy_1_0 (ATerm t_123 (ATerm), ATerm);
ATerm MkThreadApplication_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm DefineCongruence_0_0 (ATerm);
ATerm CongruenceDef_0_0 (ATerm);
ATerm get_definition_0_0 (ATerm);
ATerm diff_1_0 (ATerm t_120 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm a_114 (ATerm), ATerm b_114 (ATerm), ATerm c_114 (ATerm), ATerm d_114 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNextChangeGraph_3_0 (ATerm u_135 (ATerm), ATerm v_135 (ATerm), ATerm w_135 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm k_120 (ATerm), ATerm l_120 (ATerm), ATerm);
ATerm for_3_0 (ATerm n_120 (ATerm), ATerm o_120 (ATerm), ATerm p_120 (ATerm), ATerm);
ATerm extract_needed_defs_0_0 (ATerm);
ATerm assert_1_0 (ATerm d_136 (ATerm), ATerm);
ATerm Arities_0_0 (ATerm);
ATerm Definitions_0_0 (ATerm);
ATerm RegisterSDefT_0_0 (ATerm);
ATerm DefinitionName_0_0 (ATerm);
ATerm union_1_0 (ATerm x_120 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm g_123 (ATerm), ATerm h_123 (ATerm), ATerm i_123 (ATerm), ATerm);
ATerm all_defs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm p_91 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm l_91 (ATerm), ATerm m_91 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm u_91 (ATerm), ATerm);
ATerm _2_0 (ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm k_128 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm m_131 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm f_106 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm l_106 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm o_129 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm e_123 (ATerm), ATerm f_123 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm n_129 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm k_132 (ATerm), ATerm);
ATerm map_1_0 (ATerm u_105 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm m_100 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm n_100 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm n_134 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm m_134 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm m_132 (ATerm), ATerm n_132 (ATerm), ATerm o_132 (ATerm), ATerm p_132 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm v_131 (ATerm), ATerm w_131 (ATerm), ATerm x_131 (ATerm), ATerm);
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
  t = term_b_13;
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
      ATerm o_14 = ATgetArgument(t, 0);
      if(match_cons(o_14, sym_Mod_2))
        {
          s_0 = ATgetArgument(o_14, 0);
          u_0 = ATgetArgument(o_14, 1);
        }
      else
        _fail(t);
      v_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue))), v_0), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), u_0), (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue))), s_0), (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue))));
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_14), v_0), term_t_14), u_0), term_r_14), s_0), term_p_14);
  return(t);
}
ATerm MissingDefs_0_0 (ATerm t)
{
  ATerm z_0 = NULL,a_1 = NULL,d_1 = NULL;
  if(match_cons(t, sym__2))
    {
      z_0 = ATgetArgument(t, 0);
      {
        ATerm w_14 = ATgetArgument(t, 1);
        if(((ATgetType(w_14) == AT_LIST) && !(ATisEmpty(w_14))))
          {
            a_1 = ATgetFirst((ATermList) w_14);
            d_1 = (ATerm) ATgetNext((ATermList) w_14);
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
      ATerm x_14 = t;
      int y_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MissingDefMod_0_0(t);
          ;
          LocalPopChoice(y_14);
        }
      else
        {
          t = x_14;
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
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_14), l_1), term_t_14), k_1), term_p_14);
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
  t = (ATerm) ATinsert(ATempty, term_a_15);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,e_2 = NULL,g_2 = NULL,h_2 = NULL;
  b_2 = t;
  if(match_cons(t, sym__2))
    {
      c_2 = ATgetArgument(t, 0);
      e_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_2;
  if(match_cons(t, sym__2))
    {
      g_2 = ATgetArgument(t, 0);
      h_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_2;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = h_2;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_2;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_15 = ATgetFirst((ATermList) t);
            ATerm h_15 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(h_15) == AT_LIST) && !(ATisEmpty(h_15))))
              {
                ATerm k_15 = ATgetFirst((ATermList) h_15);
                ATerm l_15 = (ATerm) ATgetNext((ATermList) h_15);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm m_15 = t;
          if((PushChoice() == 0))
            {
              ATerm p_0 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    ATerm x_15 = ATgetArgument(t, 0);
                    if(((ATgetType(x_15) != AT_INT) || (ATgetInt((ATermInt) x_15) != 0)))
                      _fail(t);
                    {
                      ATerm y_15 = ATgetArgument(t, 1);
                      if(((ATgetType(y_15) != AT_INT) || (ATgetInt((ATermInt) y_15) != 0)))
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
              t = m_15;
            }
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_2), (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue))));
          t = (ATerm) ATinsert(ATinsert(ATempty, c_2), term_d_16);
          t = giving_up_0_0(t);
        }
        ;
        LocalPopChoice(c_15);
      }
    else
      {
        t = b_15;
        {
          ATerm n_1 = NULL,o_1 = NULL;
          t = c_2;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm e_16 = ATgetFirst((ATermList) t);
              if(match_cons(e_16, sym__2))
                {
                  n_1 = ATgetArgument(e_16, 0);
                  o_1 = ATgetArgument(e_16, 1);
                }
              else
                _fail(t);
              {
                ATerm f_16 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(f_16) != AT_LIST) || !(ATisEmpty(f_16))))
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
ATerm Rec_2_0 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm t)
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
  t = u_96(t);
  n_2 = t;
  t = m_2;
  t = v_96(t);
  o_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, n_2, o_2), k_2);
  return(t);
}
ATerm SDefT_4_0 (ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm t)
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
  t = p_98(t);
  x_2 = t;
  t = u_2;
  t = q_98(t);
  y_2 = t;
  t = v_2;
  t = r_98(t);
  z_2 = t;
  t = w_2;
  t = s_98(t);
  a_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, x_2, y_2, z_2, a_3), s_2);
  return(t);
}
ATerm SDef_3_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,n_3 = NULL,o_3 = NULL;
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
  t = m_98(t);
  k_3 = t;
  t = i_3;
  t = n_98(t);
  l_3 = t;
  t = j_3;
  t = o_98(t);
  n_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, k_3, l_3, n_3), f_3);
  return(t);
}
ATerm Let_2_0 (ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm t)
{
  ATerm s_3 = NULL,u_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,c_4 = NULL;
  c_4 = t;
  if(match_cons(t, sym_Let_2))
    {
      u_3 = ATgetArgument(t, 0);
      w_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_4);
  s_3 = t;
  t = u_3;
  t = x_95(t);
  x_3 = t;
  t = w_3;
  t = y_95(t);
  y_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, x_3, y_3), s_3);
  return(t);
}
ATerm sboundin_3_0 (ATerm t_108 (ATerm), ATerm u_108 (ATerm), ATerm v_108 (ATerm), ATerm t)
{
  ATerm g_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(t_108, t_108, t);
      ;
      LocalPopChoice(i_16);
    }
  else
    {
      t = g_16;
      {
        ATerm j_16 = t;
        int k_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(v_108, v_108, t_108, t);
            ;
            LocalPopChoice(k_16);
          }
        else
          {
            t = j_16;
            {
              ATerm l_16 = t;
              int m_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(v_108, v_108, v_108, t_108, t);
                  ;
                  LocalPopChoice(m_16);
                }
              else
                {
                  t = l_16;
                  t = Rec_2_0(v_108, t_108, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm t_4 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      t_4 = ATgetArgument(t, 0);
      {
        ATerm n_16 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = t_4;
  {
    ATerm q_0 (ATerm t)
    {
      ATerm a_5 = NULL;
      ATerm o_16 = t;
      int q_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              a_5 = ATgetArgument(t, 0);
              {
                ATerm r_16 = ATgetArgument(t, 1);
              }
              {
                ATerm s_16 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(q_16);
          t = a_5;
        }
      else
        {
          t = o_16;
          if(match_cons(t, sym_SDefT_4))
            {
              a_5 = ATgetArgument(t, 0);
              {
                ATerm t_16 = ATgetArgument(t, 1);
              }
              {
                ATerm u_16 = ATgetArgument(t, 2);
              }
              {
                ATerm x_16 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = a_5;
        }
      return(t);
    }
    t = map_1_0(q_0, t);
  }
  return(t);
}
ATerm split_2_0 (ATerm a_113 (ATerm), ATerm b_113 (ATerm), ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL;
  s_56 = t;
  t = a_113(t);
  t_56 = t;
  t = s_56;
  t = b_113(t);
  u_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_56, u_56);
  return(t);
}
ATerm free_vars2_4_0 (ATerm w_117 (ATerm), ATerm x_117 (ATerm), ATerm y_117 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm z_117 (ATerm), ATerm t)
{
  ATerm w_5 (ATerm t)
  {
    ATerm p_1 = NULL,q_1 = NULL,r_1 = NULL;
    p_1 = t;
    {
      ATerm y_16 = t;
      int c_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_117(t);
          ;
          LocalPopChoice(c_17);
        }
      else
        {
          t = y_16;
          t = (ATerm) ATempty;
        }
      q_1 = t;
      t = p_1;
      {
        ATerm d_17 = t;
        int f_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_3 = NULL,t_3 = NULL,v_3 = NULL;
            t = p_1;
            t = x_117(t);
            h_3 = t;
            t = p_1;
            {
              ATerm t_0 (ATerm t)
              {
                ATerm x_0 (ATerm t)
                {
                  t = h_3;
                  return(t);
                }
                t = split_2_0(w_5, x_0, t);
                t = diff_1_0(z_117, t);
                return(t);
              }
              ATerm w_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = y_117(t_0, w_5, w_0, t);
              t_3 = t;
              t = SSL_explode_term(t_3);
              if(match_cons(t, sym__2))
                {
                  ATerm g_17 = ATgetArgument(t, 0);
                  v_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = v_3;
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
                    ATerm d_4 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        d_4 = ATgetArgument(t, 0);
                        if((d_4 != ATgetArgument(t, 1)))
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
            LocalPopChoice(f_17);
          }
        else
          {
            t = d_17;
            {
              ATerm f_4 = NULL;
              t = SSL_explode_term(p_1);
              if(match_cons(t, sym__2))
                {
                  ATerm l_17 = ATgetArgument(t, 0);
                  f_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_4;
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
                  t = union_1_0(g_1, t);
                  return(t);
                }
                t = foldr_3_0(e_1, f_1, w_5, t);
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
  t = w_5(t);
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL;
    if(match_cons(t, sym_CallT_3))
      {
        ATerm n_17 = ATgetArgument(t, 0);
        if(match_cons(n_17, sym_SVar_1))
          {
            f_6 = ATgetArgument(n_17, 0);
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
        t = term_q_17;
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
          ATerm r_17 = t;
          int s_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_addi(k_6, l_6);
              ;
              LocalPopChoice(s_17);
            }
          else
            {
              t = r_17;
              t = SSL_addr(k_6, l_6);
            }
        }
        return(t);
      }
      ATerm u_1 (ATerm t)
      {
        t = term_t_17;
        return(t);
      }
      t = foldr_3_0(s_1, t_1, u_1, t);
      i_6 = t;
      t = h_6;
      {
        ATerm v_1 (ATerm t)
        {
          t = term_q_17;
          return(t);
        }
        ATerm w_1 (ATerm t)
        {
          ATerm o_6 = NULL,p_6 = NULL;
          if(match_cons(t, sym__2))
            {
              o_6 = ATgetArgument(t, 0);
              p_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          {
            ATerm y_17 = t;
            int f_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_addi(o_6, p_6);
                ;
                LocalPopChoice(f_18);
              }
            else
              {
                t = y_17;
                t = SSL_addr(o_6, p_6);
              }
          }
          return(t);
        }
        ATerm x_1 (ATerm t)
        {
          t = term_t_17;
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
    ATerm j_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(k_18);
      }
    else
      {
        t = j_18;
        {
          ATerm l_7 = NULL,m_7 = NULL;
          ATerm m_18 = t;
          int n_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_SDef_3))
                {
                  ATerm o_18 = ATgetArgument(t, 0);
                  m_7 = ATgetArgument(t, 1);
                  {
                    ATerm p_18 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(n_18);
              t = m_7;
              {
                ATerm y_1 (ATerm t)
                {
                  ATerm c_8 = NULL;
                  ATerm q_18 = t;
                  int u_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_VarDec_2))
                        {
                          c_8 = ATgetArgument(t, 0);
                          {
                            ATerm v_18 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(u_18);
                      t = c_8;
                    }
                  else
                    {
                      t = q_18;
                      if(match_cons(t, sym_DefaultVarDec_1))
                        {
                          c_8 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = c_8;
                    }
                  return(t);
                }
                t = map_1_0(y_1, t);
              }
            }
          else
            {
              t = m_18;
              {
                ATerm a_19 = t;
                int b_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Rec_2))
                      {
                        l_7 = ATgetArgument(t, 0);
                        {
                          ATerm c_19 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(b_19);
                    t = (ATerm) ATinsert(ATempty, l_7);
                  }
                else
                  {
                    t = a_19;
                    {
                      ATerm h_19 = t;
                      int m_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_SDefT_4))
                            {
                              ATerm n_19 = ATgetArgument(t, 0);
                              m_7 = ATgetArgument(t, 1);
                              {
                                ATerm o_19 = ATgetArgument(t, 2);
                              }
                              {
                                ATerm p_19 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(m_19);
                          t = m_7;
                          {
                            ATerm z_1 (ATerm t)
                            {
                              ATerm r_8 = NULL;
                              ATerm r_19 = t;
                              int s_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      r_8 = ATgetArgument(t, 0);
                                      {
                                        ATerm t_19 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(s_19);
                                  t = r_8;
                                }
                              else
                                {
                                  t = r_19;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      r_8 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = r_8;
                                }
                              return(t);
                            }
                            t = map_1_0(z_1, t);
                          }
                        }
                      else
                        {
                          t = h_19;
                          if(match_cons(t, sym_RDefT_4))
                            {
                              ATerm w_19 = ATgetArgument(t, 0);
                              m_7 = ATgetArgument(t, 1);
                              {
                                ATerm b_20 = ATgetArgument(t, 2);
                              }
                              {
                                ATerm c_20 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          t = m_7;
                          {
                            ATerm a_2 (ATerm t)
                            {
                              ATerm k_9 = NULL;
                              ATerm d_20 = t;
                              int e_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      k_9 = ATgetArgument(t, 0);
                                      {
                                        ATerm i_20 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(e_20);
                                  t = k_9;
                                }
                              else
                                {
                                  t = d_20;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      k_9 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = k_9;
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
    ATerm o_9 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm j_20 = ATgetArgument(t, 0);
        if(match_cons(j_20, sym__2))
          {
            o_9 = ATgetArgument(j_20, 0);
            {
              ATerm k_20 = ATgetArgument(j_20, 1);
            }
          }
        else
          _fail(t);
        if((o_9 != ATgetArgument(t, 1)))
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
  ATerm p_10 = NULL,d_11 = NULL,l_11 = NULL,t_11 = NULL,x_11 = NULL,z_11 = NULL;
  if(match_cons(t, sym__2))
    {
      l_11 = ATgetArgument(t, 0);
      t_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_11;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_11 = ATgetFirst((ATermList) t);
      z_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_11;
  if(match_cons(t, sym__2))
    {
      p_10 = ATgetArgument(t, 0);
      d_11 = ATgetArgument(t, 1);
      {
        ATerm l_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_10;
            if((l_11 != t))
              {
                _fail(t);
              }
            t = d_11;
            ;
            LocalPopChoice(m_20);
          }
        else
          {
            t = l_20;
            t = (ATerm) ATmakeAppl(sym__2, l_11, z_11);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, l_11, z_11);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm g_111 (ATerm), ATerm t)
{
  ATerm s_14 (ATerm t)
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_111(t);
        ;
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        t = SRTS_all(s_14, t);
      }
    return(t);
  }
  t = s_14(t);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,i_15 = NULL,j_15 = NULL;
  f_15 = t;
  {
    ATerm t_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_20 = ATgetArgument(t, 0);
            ATerm c_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(u_20);
        t = f_15;
      }
    else
      {
        t = t_20;
        {
          ATerm n_15 = NULL;
          if(match_cons(t, sym__3))
            {
              g_15 = ATgetArgument(t, 0);
              i_15 = ATgetArgument(t, 1);
              j_15 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, g_15, i_15);
          {
            ATerm d_2 (ATerm t)
            {
              if(match_cons(t, sym__2))
                {
                  ATerm e_21 = ATgetArgument(t, 0);
                  if(((ATgetType(e_21) != AT_LIST) || !(ATisEmpty(e_21))))
                    _fail(t);
                  {
                    ATerm f_21 = ATgetArgument(t, 1);
                    if(((ATgetType(f_21) != AT_LIST) || !(ATisEmpty(f_21))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATempty;
              return(t);
            }
            ATerm f_2 (ATerm t)
            {
              ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
              if(match_cons(t, sym__2))
                {
                  ATerm g_21 = ATgetArgument(t, 0);
                  if(((ATgetType(g_21) == AT_LIST) && !(ATisEmpty(g_21))))
                    {
                      o_15 = ATgetFirst((ATermList) g_21);
                      q_15 = (ATerm) ATgetNext((ATermList) g_21);
                    }
                  else
                    _fail(t);
                  {
                    ATerm h_21 = ATgetArgument(t, 1);
                    if(((ATgetType(h_21) == AT_LIST) && !(ATisEmpty(h_21))))
                      {
                        p_15 = ATgetFirst((ATermList) h_21);
                        r_15 = (ATerm) ATgetNext((ATermList) h_21);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_15, p_15), (ATerm) ATmakeAppl(sym__2, q_15, r_15));
              return(t);
            }
            ATerm i_2 (ATerm t)
            {
              ATerm s_15 = NULL,t_15 = NULL;
              if(match_cons(t, sym__2))
                {
                  s_15 = ATgetArgument(t, 0);
                  t_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_15), s_15);
              return(t);
            }
            t = genzip_4_0(d_2, f_2, i_2, _id, t);
            n_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, n_15, j_15);
          }
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm x_108 (ATerm), ATerm y_108 (ATerm), ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      v_15 = ATgetArgument(t, 0);
      u_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_15;
  {
    ATerm j_2 (ATerm t)
    {
      ATerm w_4 = NULL;
      t = x_108(t);
      w_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_4, v_15);
      t = lookup_0_0(t);
      t = y_108(t);
      return(t);
    }
    t = alltd_1_0(j_2, t);
  }
  return(t);
}
ATerm VarDec_2_0 (ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm t)
{
  ATerm w_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,h_16 = NULL;
  h_16 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      z_15 = ATgetArgument(t, 0);
      a_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_16);
  w_15 = t;
  t = z_15;
  t = i_98(t);
  b_16 = t;
  t = a_16;
  t = j_98(t);
  c_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, b_16, c_16), w_15);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm w_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,m_17 = NULL,o_17 = NULL;
  w_16 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_21 = ATgetFirst((ATermList) t);
      if(match_cons(k_21, sym_SDefT_4))
        {
          z_16 = ATgetArgument(k_21, 0);
          a_17 = ATgetArgument(k_21, 1);
          b_17 = ATgetArgument(k_21, 2);
          {
            ATerm m_21 = ATgetArgument(k_21, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm l_21 = (ATerm) ATgetNext((ATermList) t);
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
    h_17 = t;
    t = b_17;
    {
      ATerm r_2 (ATerm t)
      {
        t = VarDec_2_0(new_0_0, _id, t);
        return(t);
      }
      t = map_1_0(r_2, t);
      i_17 = t;
      t = h_17;
      {
        ATerm c_3 (ATerm t)
        {
          ATerm p_17 = NULL;
          if(match_cons(t, sym_VarDec_2))
            {
              p_17 = ATgetArgument(t, 0);
              {
                ATerm s_21 = ATgetArgument(t, 1);
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
            ATerm u_17 = NULL;
            if(match_cons(t, sym_VarDec_2))
              {
                u_17 = ATgetArgument(t, 0);
                {
                  ATerm t_21 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, u_17);
            return(t);
          }
          t = map_1_0(d_3, t);
          m_17 = t;
          t = w_16;
          {
            ATerm e_3 (ATerm t)
            {
              ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  ATerm x_21 = ATgetArgument(t, 0);
                  v_17 = ATgetArgument(t, 1);
                  w_17 = ATgetArgument(t, 2);
                  x_17 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = w_17;
              {
                ATerm m_3 (ATerm t)
                {
                  ATerm c_18 = NULL;
                  if(match_cons(t, sym_VarDec_2))
                    {
                      c_18 = ATgetArgument(t, 0);
                      {
                        ATerm y_21 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = c_18;
                  return(t);
                }
                t = map_1_0(m_3, t);
                z_17 = t;
                t = v_17;
                {
                  ATerm p_3 (ATerm t)
                  {
                    ATerm d_18 = NULL;
                    if(match_cons(t, sym_VarDec_2))
                      {
                        d_18 = ATgetArgument(t, 0);
                        {
                          ATerm z_21 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = d_18;
                    return(t);
                  }
                  t = map_1_0(p_3, t);
                  a_18 = t;
                  t = (ATerm) ATmakeAppl(sym__3, a_18, j_17, x_17);
                  {
                    ATerm q_3 (ATerm t)
                    {
                      ATerm e_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL;
                      if(match_cons(t, sym_CallT_3))
                        {
                          g_18 = ATgetArgument(t, 0);
                          i_18 = ATgetArgument(t, 1);
                          e_18 = ATgetArgument(t, 2);
                          t = g_18;
                          if(match_cons(t, sym_SVar_1))
                            {
                              h_18 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = i_18;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = e_18;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = h_18;
                        }
                      else
                        {
                          if(match_cons(t, sym_Call_2))
                            {
                              g_18 = ATgetArgument(t, 0);
                              i_18 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = g_18;
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
                    t = substitute_2_0(q_3, _id, t);
                    b_18 = t;
                    t = (ATerm) ATmakeAppl(sym__3, z_17, m_17, b_18);
                    {
                      ATerm r_3 (ATerm t)
                      {
                        ATerm l_18 = NULL;
                        if(match_cons(t, sym_Var_1))
                          {
                            l_18 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = l_18;
                        return(t);
                      }
                      t = substitute_2_0(r_3, _id, t);
                    }
                  }
                }
              }
              return(t);
            }
            t = map_1_0(e_3, t);
            {
              ATerm z_3 (ATerm t)
              {
                t = term_b_22;
                return(t);
              }
              ATerm a_4 (ATerm t)
              {
                ATerm s_5 = NULL,z_5 = NULL,d_6 = NULL;
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
                          z_5 = ATgetFirst((ATermList) e_22);
                          {
                            ATerm n_22 = (ATerm) ATgetNext((ATermList) e_22);
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
                    ATerm o_22 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) o_22) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm v_22 = ATgetArgument(t, 1);
                      if(((ATgetType(v_22) == AT_LIST) && !(ATisEmpty(v_22))))
                        {
                          ATerm w_22 = ATgetFirst((ATermList) v_22);
                          ATerm d_23 = (ATerm) ATgetNext((ATermList) v_22);
                          if(((ATgetType(d_23) == AT_LIST) && !(ATisEmpty(d_23))))
                            {
                              d_6 = ATgetFirst((ATermList) d_23);
                              {
                                ATerm e_23 = (ATerm) ATgetNext((ATermList) d_23);
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
              t = foldr_2_0(z_3, a_4, t);
              o_17 = t;
              t = (ATerm) ATmakeAppl(sym_SDefT_4, z_16, h_17, i_17, o_17);
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
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
  s_18 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      t_18 = ATgetArgument(t, 0);
      r_18 = ATgetArgument(t, 1);
      {
        ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
        t = s_18;
        t = new_0_0(t);
        w_18 = t;
        t = new_0_0(t);
        x_18 = t;
        t = new_0_0(t);
        y_18 = t;
        t = new_0_0(t);
        z_18 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_18), y_18), x_18), w_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, w_18), (ATerm) ATmakeAppl(sym_Var_1, y_18))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, t_18, (ATerm)ATmakeAppl(sym_Var_1, w_18), (ATerm) ATmakeAppl(sym_Var_1, x_18)), (ATerm) ATmakeAppl(sym_BAM_3, r_18, (ATerm)ATmakeAppl(sym_Var_1, y_18), (ATerm) ATmakeAppl(sym_Var_1, z_18)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_f_23, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_18)), (ATerm) ATmakeAppl(sym_Var_1, x_18))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          t_18 = ATgetArgument(t, 0);
          {
            ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL;
            t = s_18;
            t = new_0_0(t);
            d_19 = t;
            t = t_18;
            {
              ATerm b_4 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((e_19 != NULL) && (e_19 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      e_19 = ATgetArgument(t, 0);
                    if(((f_19 != NULL) && (f_19 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      f_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, d_19);
                return(t);
              }
              t = oncetd_1_0(b_4, t);
              g_19 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_f_23, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_19)), not_null(e_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_19)), (ATerm) ATmakeAppl(sym_Build_1, g_19))));
            }
          }
        }
      else
        {
          ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,q_19 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              t_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_18;
          t = new_0_0(t);
          i_19 = t;
          t = new_0_0(t);
          j_19 = t;
          t = t_18;
          {
            ATerm e_4 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((k_19 != NULL) && (k_19 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    k_19 = ATgetArgument(t, 0);
                  if(((l_19 != NULL) && (l_19 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    l_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, i_19);
              return(t);
            }
            t = oncetd_1_0(e_4, t);
            q_19 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_19), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_19)), (ATerm) ATmakeAppl(sym_PrimT_3, term_g_23, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_19))))), (ATerm)ATmakeAppl(sym_Var_1, i_19), (ATerm) ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_19)), not_null(k_19)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL;
  u_19 = t;
  if(match_cons(t, sym_Match_1))
    {
      v_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL;
        t = u_19;
        t = new_0_0(t);
        x_19 = t;
        t = v_19;
        {
          ATerm g_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((z_19 != NULL) && (z_19 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_19 = ATgetArgument(t, 0);
                if(((y_19 != NULL) && (y_19 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  y_19 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, x_19), not_null(z_19));
            return(t);
          }
          t = pat_td_1_0(g_4, t);
          a_20 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_o_23, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, x_19))), (ATerm) ATmakeAppl(sym_Match_1, not_null(y_19))))));
        }
        ;
        LocalPopChoice(n_23);
      }
    else
      {
        t = l_23;
        {
          ATerm q_23 = t;
          int r_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
              t = u_19;
              t = new_0_0(t);
              f_20 = t;
              t = v_19;
              {
                ATerm h_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((g_20 != NULL) && (g_20 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        g_20 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, f_20);
                  return(t);
                }
                t = pat_td_1_0(h_4, t);
                h_20 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, h_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, f_20)), not_null(g_20))));
              }
              ;
              LocalPopChoice(r_23);
            }
          else
            {
              t = q_23;
              {
                ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL;
                t = u_19;
                t = new_0_0(t);
                n_20 = t;
                t = v_19;
                {
                  ATerm i_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((o_20 != NULL) && (o_20 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          o_20 = ATgetArgument(t, 0);
                        if(((p_20 != NULL) && (p_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          p_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, n_20);
                    return(t);
                  }
                  t = pat_td_1_0(i_4, t);
                  q_20 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, n_20)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_20)), not_null(o_20)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm e_93 (ATerm), ATerm f_93 (ATerm), ATerm t)
{
  ATerm r_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,a_22 = NULL,c_22 = NULL;
  c_22 = t;
  if(match_cons(t, sym_As_2))
    {
      u_21 = ATgetArgument(t, 0);
      v_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_22);
  r_21 = t;
  t = u_21;
  t = e_93(t);
  w_21 = t;
  t = v_21;
  t = f_93(t);
  a_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, w_21, a_22), r_21);
  return(t);
}
ATerm PrimT_3_0 (ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL;
  m_22 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      g_22 = ATgetArgument(t, 0);
      h_22 = ATgetArgument(t, 1);
      i_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_22);
  f_22 = t;
  t = g_22;
  t = d_97(t);
  j_22 = t;
  t = h_22;
  t = e_97(t);
  k_22 = t;
  t = i_22;
  t = f_97(t);
  l_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, j_22, k_22, l_22), f_22);
  return(t);
}
ATerm Explode_2_0 (ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
  u_22 = t;
  if(match_cons(t, sym_Explode_2))
    {
      q_22 = ATgetArgument(t, 0);
      r_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_22);
  p_22 = t;
  t = q_22;
  t = x_92(t);
  s_22 = t;
  t = r_22;
  t = y_92(t);
  t_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, s_22, t_22), p_22);
  return(t);
}
ATerm Op_2_0 (ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL;
  c_23 = t;
  if(match_cons(t, sym_Op_2))
    {
      y_22 = ATgetArgument(t, 0);
      z_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_23);
  x_22 = t;
  t = y_22;
  t = t_92(t);
  a_23 = t;
  t = z_22;
  t = u_92(t);
  b_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, a_23, b_23), x_22);
  return(t);
}
ATerm pat_td_1_0 (ATerm b_105 (ATerm), ATerm t)
{
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_105(t);
      ;
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
      {
        ATerm u_23 = t;
        int v_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_4 (ATerm t)
            {
              ATerm l_4 (ATerm t)
              {
                t = pat_td_1_0(b_105, t);
                return(t);
              }
              t = fetch_1_0(l_4, t);
              return(t);
            }
            t = Op_2_0(_id, j_4, t);
            ;
            LocalPopChoice(v_23);
          }
        else
          {
            t = u_23;
            {
              ATerm w_23 = t;
              int x_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_4 (ATerm t)
                  {
                    t = pat_td_1_0(b_105, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, m_4, t);
                  ;
                  LocalPopChoice(x_23);
                }
              else
                {
                  t = w_23;
                  {
                    ATerm y_23 = t;
                    int z_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_4 (ATerm t)
                        {
                          t = pat_td_1_0(b_105, t);
                          return(t);
                        }
                        t = Explode_2_0(n_4, _id, t);
                        ;
                        LocalPopChoice(z_23);
                      }
                    else
                      {
                        t = y_23;
                        {
                          ATerm b_24 = t;
                          int c_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_4 (ATerm t)
                              {
                                ATerm p_4 (ATerm t)
                                {
                                  t = pat_td_1_0(b_105, t);
                                  return(t);
                                }
                                t = fetch_1_0(p_4, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, o_4, t);
                              ;
                              LocalPopChoice(c_24);
                            }
                          else
                            {
                              t = b_24;
                              {
                                ATerm q_4 (ATerm t)
                                {
                                  t = pat_td_1_0(b_105, t);
                                  return(t);
                                }
                                t = As_2_0(_id, q_4, t);
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
  ATerm v_20 = NULL,w_20 = NULL;
  v_20 = t;
  if(match_cons(t, sym_Build_1))
    {
      w_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL;
        t = v_20;
        t = new_0_0(t);
        y_20 = t;
        t = w_20;
        {
          ATerm r_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
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
            t = (ATerm) ATmakeAppl(sym_Var_1, y_20);
            return(t);
          }
          t = pat_td_1_0(r_4, t);
          b_21 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_k_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_21)), not_null(z_20))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_20)))), (ATerm) ATmakeAppl(sym_Build_1, b_21)));
        }
        ;
        LocalPopChoice(j_24);
      }
    else
      {
        t = g_24;
        {
          ATerm l_24 = t;
          int m_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_21 = NULL,i_21 = NULL,j_21 = NULL;
              t = v_20;
              t = new_0_0(t);
              d_21 = t;
              t = w_20;
              {
                ATerm s_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((i_21 != NULL) && (i_21 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        i_21 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, d_21);
                  return(t);
                }
                t = pat_td_1_0(s_4, t);
                j_21 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_21), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_21)))), (ATerm) ATmakeAppl(sym_Build_1, j_21)));
              }
              ;
              LocalPopChoice(m_24);
            }
          else
            {
              t = l_24;
              {
                ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL;
                t = v_20;
                t = new_0_0(t);
                n_21 = t;
                t = w_20;
                {
                  ATerm u_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((o_21 != NULL) && (o_21 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          o_21 = ATgetArgument(t, 0);
                        if(((p_21 != NULL) && (p_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          p_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, n_21);
                    return(t);
                  }
                  t = pat_td_1_0(u_4, t);
                  q_21 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(o_21), not_null(p_21), (ATerm) ATmakeAppl(sym_Var_1, n_21))), (ATerm) ATmakeAppl(sym_Build_1, q_21)));
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
  ATerm h_23 = NULL;
  if(match_cons(t, sym_Build_1))
    {
      h_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_23 = NULL,k_23 = NULL;
        t = h_23;
        {
          ATerm v_4 (ATerm t)
          {
            if(match_cons(t, sym_RootApp_1))
              {
                ATerm p_24 = ATgetArgument(t, 0);
                if(match_cons(p_24, sym_Build_1))
                  {
                    if(((j_23 != NULL) && (j_23 != ATgetArgument(p_24, 0))))
                      _fail(ATgetArgument(p_24, 0));
                    else
                      j_23 = ATgetArgument(p_24, 0);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            t = not_null(j_23);
            return(t);
          }
          t = pat_td_1_0(v_4, t);
          k_23 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, k_23);
        }
        ;
        LocalPopChoice(o_24);
      }
    else
      {
        t = n_24;
        {
          ATerm m_23 = NULL,p_23 = NULL;
          t = h_23;
          {
            ATerm x_4 (ATerm t)
            {
              if(match_cons(t, sym_App_2))
                {
                  ATerm q_24 = ATgetArgument(t, 0);
                  if(match_cons(q_24, sym_Build_1))
                    {
                      if(((m_23 != NULL) && (m_23 != ATgetArgument(q_24, 0))))
                        _fail(ATgetArgument(q_24, 0));
                      else
                        m_23 = ATgetArgument(q_24, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm r_24 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = not_null(m_23);
              return(t);
            }
            t = pat_td_1_0(x_4, t);
            p_23 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, p_23);
          }
        }
      }
  }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm s_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm y_4 (ATerm t)
        {
          ATerm u_24 = t;
          int v_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(v_24);
            }
          else
            {
              t = u_24;
            }
          return(t);
        }
        t = Cons_2_0(_id, y_4, t);
      }
      ;
      LocalPopChoice(t_24);
    }
  else
    {
      t = s_24;
      {
        ATerm z_4 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, z_4, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm a_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,h_24 = NULL,i_24 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      h_24 = ATgetArgument(t, 0);
      i_24 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, h_24, i_24);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          h_24 = ATgetArgument(t, 0);
          t = h_24;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_24 = ATgetFirst((ATermList) t);
              d_24 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, a_24, (ATerm) ATmakeAppl(sym_LChoices_1, d_24));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_b_22;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              h_24 = ATgetArgument(t, 0);
              t = h_24;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_24 = ATgetFirst((ATermList) t);
                  d_24 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, a_24, (ATerm) ATmakeAppl(sym_Choices_1, d_24));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_b_22;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  h_24 = ATgetArgument(t, 0);
                  t = h_24;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      a_24 = ATgetFirst((ATermList) t);
                      d_24 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_24, (ATerm) ATmakeAppl(sym_Seqs_1, d_24));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_w_24;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      h_24 = ATgetArgument(t, 0);
                      i_24 = ATgetArgument(t, 1);
                      f_24 = ATgetArgument(t, 2);
                      e_24 = ATgetArgument(t, 3);
                      {
                        ATerm c_25 = NULL,d_25 = NULL;
                        t = i_24;
                        {
                          ATerm b_5 (ATerm t)
                          {
                            ATerm e_25 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                e_25 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, e_25, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_z_24), term_z_24));
                            return(t);
                          }
                          t = map1_1_0(b_5, t);
                          c_25 = t;
                          t = f_24;
                          {
                            ATerm c_5 (ATerm t)
                            {
                              ATerm a_25 = t;
                              int b_25 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm g_25 = NULL;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      g_25 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_25, term_z_24);
                                  ;
                                  LocalPopChoice(b_25);
                                }
                              else
                                {
                                  t = a_25;
                                }
                              return(t);
                            }
                            t = map1_1_0(c_5, t);
                            d_25 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, h_24, c_25, d_25, e_24);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          h_24 = ATgetArgument(t, 0);
                          i_24 = ATgetArgument(t, 1);
                          f_24 = ATgetArgument(t, 2);
                          e_24 = ATgetArgument(t, 3);
                          {
                            ATerm f_25 = t;
                            int h_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm m_25 = NULL,n_25 = NULL;
                                t = f_24;
                                {
                                  ATerm d_5 (ATerm t)
                                  {
                                    ATerm o_25 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        o_25 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, o_25, term_z_24);
                                    return(t);
                                  }
                                  t = map1_1_0(d_5, t);
                                  m_25 = t;
                                  t = i_24;
                                  {
                                    ATerm e_5 (ATerm t)
                                    {
                                      ATerm i_25 = t;
                                      int j_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm q_25 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              q_25 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, q_25, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_z_24), term_z_24));
                                          ;
                                          LocalPopChoice(j_25);
                                        }
                                      else
                                        {
                                          t = i_25;
                                        }
                                      return(t);
                                    }
                                    t = map_1_0(e_5, t);
                                    n_25 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, h_24, n_25, m_25, e_24);
                                  }
                                }
                                ;
                                LocalPopChoice(h_25);
                              }
                            else
                              {
                                t = f_25;
                                {
                                  ATerm x_25 = NULL,y_25 = NULL;
                                  t = i_24;
                                  {
                                    ATerm f_5 (ATerm t)
                                    {
                                      ATerm z_25 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          z_25 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, z_25, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_z_24), term_z_24));
                                      return(t);
                                    }
                                    t = map1_1_0(f_5, t);
                                    x_25 = t;
                                    t = f_24;
                                    {
                                      ATerm g_5 (ATerm t)
                                      {
                                        ATerm k_25 = t;
                                        int l_25 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm b_26 = NULL;
                                            if(match_cons(t, sym_DefaultVarDec_1))
                                              {
                                                b_26 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_VarDec_2, b_26, term_z_24);
                                            ;
                                            LocalPopChoice(l_25);
                                          }
                                        else
                                          {
                                            t = k_25;
                                          }
                                        return(t);
                                      }
                                      t = map_1_0(g_5, t);
                                      y_25 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, h_24, x_25, y_25, e_24);
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
                              h_24 = ATgetArgument(t, 0);
                              i_24 = ATgetArgument(t, 1);
                              f_24 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, i_24, (ATerm) ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, f_24), h_24)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  h_24 = ATgetArgument(t, 0);
                                  i_24 = ATgetArgument(t, 1);
                                  f_24 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, f_24)), h_24), (ATerm) ATmakeAppl(sym_Build_1, i_24)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      h_24 = ATgetArgument(t, 0);
                                      i_24 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_24, (ATerm) ATmakeAppl(sym_Match_1, i_24));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          h_24 = ATgetArgument(t, 0);
                                          i_24 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, h_24), i_24);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              h_24 = ATgetArgument(t, 0);
                                              i_24 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_24), h_24);
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
  ATerm y_26 (ATerm s_26, ATerm t)
  {
    ATerm u_26 = NULL;
    t = s_26;
    {
      ATerm p_25 = t;
      if((PushChoice() == 0))
        {
          t = Var_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_25;
        }
      t = new_0_0(t);
      u_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, u_26), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_26), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_26)))), (ATerm) ATmakeAppl(sym_Var_1, u_26)));
    }
    return(t);
  }
  ATerm v_26 = NULL,w_26 = NULL;
  v_26 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_26 = ATgetArgument(t, 0);
      {
        ATerm r_25 = t;
        int s_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_26(v_26, t);
            ;
            LocalPopChoice(s_25);
          }
        else
          {
            t = r_25;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_w_24, (ATerm) ATmakeAppl(sym_Var_1, w_26)));
          }
      }
    }
  else
    {
      t = y_26(v_26, t);
    }
  return(t);
}
ATerm Var_1_0 (ATerm n_92 (ATerm), ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL;
  c_27 = t;
  if(match_cons(t, sym_Var_1))
    {
      a_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_27);
  z_26 = t;
  t = a_27;
  t = n_92(t);
  b_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, b_27), z_26);
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL;
  l_29 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      m_29 = ATgetArgument(t, 0);
      n_29 = ATgetArgument(t, 1);
      k_29 = ATgetArgument(t, 2);
      {
        ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL;
        t = k_29;
        {
          ATerm h_5 (ATerm t)
          {
            ATerm t_25 = t;
            if((PushChoice() == 0))
              {
                t = Var_1_0(_id, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = t_25;
              }
            return(t);
          }
          t = fetch_1_0(h_5, t);
          t = k_29;
          {
            ATerm i_5 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_u_25;
              return(t);
            }
            ATerm j_5 (ATerm t)
            {
              ATerm x_6 = NULL,y_6 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_6 = ATgetFirst((ATermList) t);
                  y_6 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, x_6, y_6);
              return(t);
            }
            ATerm k_5 (ATerm t)
            {
              ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL,d_7 = NULL;
              if(match_cons(t, sym__2))
                {
                  ATerm v_25 = ATgetArgument(t, 0);
                  if(match_cons(v_25, sym__2))
                    {
                      z_6 = ATgetArgument(v_25, 0);
                      b_7 = ATgetArgument(v_25, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm w_25 = ATgetArgument(t, 1);
                    if(match_cons(w_25, sym__2))
                      {
                        a_7 = ATgetArgument(w_25, 0);
                        d_7 = ATgetArgument(w_25, 1);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_7), z_6), (ATerm) ATinsert(CheckATermList(d_7), b_7));
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
                  t = term_u_25;
                  return(t);
                }
                ATerm n_5 (ATerm t)
                {
                  ATerm e_7 = NULL,f_7 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      e_7 = ATgetFirst((ATermList) t);
                      f_7 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, e_7, f_7);
                  return(t);
                }
                ATerm o_5 (ATerm t)
                {
                  ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm a_26 = ATgetArgument(t, 0);
                      if(match_cons(a_26, sym__2))
                        {
                          g_7 = ATgetArgument(a_26, 0);
                          i_7 = ATgetArgument(a_26, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm c_26 = ATgetArgument(t, 1);
                        if(match_cons(c_26, sym__2))
                          {
                            h_7 = ATgetArgument(c_26, 0);
                            j_7 = ATgetArgument(c_26, 1);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_7), g_7), (ATerm) ATinsert(CheckATermList(j_7), i_7));
                  return(t);
                }
                t = genzip_4_0(m_5, n_5, o_5, _id, t);
                return(t);
              }
              t = _2_0(concat_0_0, l_5, t);
              if(match_cons(t, sym__2))
                {
                  u_6 = ATgetArgument(t, 0);
                  {
                    ATerm d_26 = ATgetArgument(t, 1);
                    if(match_cons(d_26, sym__2))
                      {
                        v_6 = ATgetArgument(d_26, 0);
                        w_6 = ATgetArgument(d_26, 1);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Scope_2, u_6, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_6), (ATerm) ATmakeAppl(sym_PrimT_3, m_29, n_29, w_6)));
            }
          }
        }
      }
    }
  else
    {
      ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          m_29 = ATgetArgument(t, 0);
          n_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_29;
      {
        ATerm p_5 (ATerm t)
        {
          ATerm e_26 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = e_26;
            }
          return(t);
        }
        t = fetch_1_0(p_5, t);
        t = n_29;
        {
          ATerm q_5 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = term_u_25;
            return(t);
          }
          ATerm t_5 (ATerm t)
          {
            ATerm z_7 = NULL,a_8 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_7 = ATgetFirst((ATermList) t);
                a_8 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, z_7, a_8);
            return(t);
          }
          ATerm u_5 (ATerm t)
          {
            ATerm b_8 = NULL,g_8 = NULL,h_8 = NULL,l_8 = NULL;
            if(match_cons(t, sym__2))
              {
                ATerm f_26 = ATgetArgument(t, 0);
                if(match_cons(f_26, sym__2))
                  {
                    b_8 = ATgetArgument(f_26, 0);
                    h_8 = ATgetArgument(f_26, 1);
                  }
                else
                  _fail(t);
                {
                  ATerm g_26 = ATgetArgument(t, 1);
                  if(match_cons(g_26, sym__2))
                    {
                      g_8 = ATgetArgument(g_26, 0);
                      l_8 = ATgetArgument(g_26, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_8), b_8), (ATerm) ATinsert(CheckATermList(l_8), h_8));
            return(t);
          }
          t = genzip_4_0(q_5, t_5, u_5, LiftPrimArg_0_0, t);
          {
            ATerm v_5 (ATerm t)
            {
              ATerm x_5 (ATerm t)
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = term_u_25;
                return(t);
              }
              ATerm y_5 (ATerm t)
              {
                ATerm m_8 = NULL,n_8 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    m_8 = ATgetFirst((ATermList) t);
                    n_8 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, m_8, n_8);
                return(t);
              }
              ATerm a_6 (ATerm t)
              {
                ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL,s_8 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm h_26 = ATgetArgument(t, 0);
                    if(match_cons(h_26, sym__2))
                      {
                        o_8 = ATgetArgument(h_26, 0);
                        q_8 = ATgetArgument(h_26, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm i_26 = ATgetArgument(t, 1);
                      if(match_cons(i_26, sym__2))
                        {
                          p_8 = ATgetArgument(i_26, 0);
                          s_8 = ATgetArgument(i_26, 1);
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_8), o_8), (ATerm) ATinsert(CheckATermList(s_8), q_8));
                return(t);
              }
              t = genzip_4_0(x_5, y_5, a_6, _id, t);
              return(t);
            }
            t = _2_0(concat_0_0, v_5, t);
            if(match_cons(t, sym__2))
              {
                w_7 = ATgetArgument(t, 0);
                {
                  ATerm j_26 = ATgetArgument(t, 1);
                  if(match_cons(j_26, sym__2))
                    {
                      x_7 = ATgetArgument(j_26, 0);
                      y_7 = ATgetArgument(j_26, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, w_7, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_7), (ATerm) ATmakeAppl(sym_PrimT_3, m_29, (ATerm)ATempty, y_7)));
          }
        }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm v_119 (ATerm), ATerm t)
{
  ATerm s_29 (ATerm t)
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_119(t);
        t = s_29(t);
        ;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
      }
    return(t);
  }
  t = s_29(t);
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm m_26 = t;
  if((PushChoice() == 0))
    {
      ATerm b_6 (ATerm t)
      {
        ATerm n_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(o_26);
          }
        else
          {
            t = n_26;
            if(!(match_cons(t, sym_Wld_0)))
              _fail(t);
          }
        return(t);
      }
      t = topdown_1_0(b_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_26;
    }
  return(t);
}
ATerm App_2_0 (ATerm b_93 (ATerm), ATerm c_93 (ATerm), ATerm t)
{
  ATerm t_29 = NULL,w_29 = NULL,y_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL;
  c_30 = t;
  if(match_cons(t, sym_App_2))
    {
      w_29 = ATgetArgument(t, 0);
      y_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_30);
  t_29 = t;
  t = w_29;
  t = b_93(t);
  a_30 = t;
  t = y_29;
  t = c_93(t);
  b_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, a_30, b_30), t_29);
  return(t);
}
ATerm Con_3_0 (ATerm n_93 (ATerm), ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm t)
{
  ATerm f_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
  n_30 = t;
  if(match_cons(t, sym_Con_3))
    {
      h_30 = ATgetArgument(t, 0);
      i_30 = ATgetArgument(t, 1);
      j_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_30);
  f_30 = t;
  t = h_30;
  t = n_93(t);
  k_30 = t;
  t = i_30;
  t = o_93(t);
  l_30 = t;
  t = j_30;
  t = p_93(t);
  m_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, k_30, l_30, m_30), f_30);
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm p_26 = t;
  if((PushChoice() == 0))
    {
      ATerm c_6 (ATerm t)
      {
        ATerm q_26 = t;
        int r_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(r_26);
          }
        else
          {
            t = q_26;
            t = App_2_0(_id, _id, t);
          }
        return(t);
      }
      t = topdown_1_0(c_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_26;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      v_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_30;
  if(match_cons(t, sym_StratRule_3))
    {
      w_30 = ATgetArgument(t, 0);
      x_30 = ATgetArgument(t, 1);
      y_30 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_30), (ATerm) ATmakeAppl(sym_Where_1, y_30)), w_30));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          w_30 = ATgetArgument(t, 0);
          x_30 = ATgetArgument(t, 1);
          y_30 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = w_30;
      t = pureterm_0_0(t);
      t = x_30;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, x_30)), (ATerm) ATmakeAppl(sym_Where_1, y_30)), (ATerm) ATmakeAppl(sym_Match_1, w_30)));
    }
  return(t);
}
ATerm Scope_2_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL;
  k_31 = t;
  if(match_cons(t, sym_Scope_2))
    {
      g_31 = ATgetArgument(t, 0);
      h_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_31);
  f_31 = t;
  t = g_31;
  t = h_96(t);
  i_31 = t;
  t = h_31;
  t = i_96(t);
  j_31 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, i_31, j_31), f_31);
  return(t);
}
ATerm oncetd_1_0 (ATerm s_110 (ATerm), ATerm t)
{
  ATerm n_31 (ATerm t)
  {
    ATerm t_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_110(t);
        ;
        LocalPopChoice(x_26);
      }
    else
      {
        t = t_26;
        t = SRTS_one(n_31, t);
      }
    return(t);
  }
  t = n_31(t);
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm d_27 = ATgetArgument(t, 0);
      if(match_cons(d_27, sym_Rule_3))
        {
          o_31 = ATgetArgument(d_27, 0);
          p_31 = ATgetArgument(d_27, 1);
          q_31 = ATgetArgument(d_27, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  r_31 = t;
  t = o_31;
  {
    ATerm e_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm e_27 = ATgetArgument(t, 0);
          if(match_cons(e_27, sym_Var_1))
            {
              if(((t_31 != NULL) && (t_31 != ATgetArgument(e_27, 0))))
                _fail(ATgetArgument(e_27, 0));
              else
                t_31 = ATgetArgument(e_27, 0);
            }
          else
            _fail(t);
          if(((s_31 != NULL) && (s_31 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            s_31 = ATgetArgument(t, 1);
          {
            ATerm f_27 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_31));
      return(t);
    }
    t = oncetd_1_0(e_6, t);
    u_31 = t;
    t = p_31;
    {
      ATerm m_6 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm g_27 = ATgetArgument(t, 0);
            if(match_cons(g_27, sym_Var_1))
              {
                if(((t_31 != NULL) && (t_31 != ATgetArgument(g_27, 0))))
                  _fail(ATgetArgument(g_27, 0));
                else
                  t_31 = ATgetArgument(g_27, 0);
              }
            else
              _fail(t);
            if(((v_31 != NULL) && (v_31 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              v_31 = ATgetArgument(t, 1);
            {
              ATerm h_27 = ATgetArgument(t, 2);
              if(match_cons(h_27, sym_CallT_3))
                {
                  if(((w_31 != NULL) && (w_31 != ATgetArgument(h_27, 0))))
                    _fail(ATgetArgument(h_27, 0));
                  else
                    w_31 = ATgetArgument(h_27, 0);
                  {
                    ATerm i_27 = ATgetArgument(h_27, 1);
                    if(((ATgetType(i_27) != AT_LIST) || !(ATisEmpty(i_27))))
                      _fail(t);
                  }
                  {
                    ATerm j_27 = ATgetArgument(h_27, 2);
                    if(((ATgetType(j_27) != AT_LIST) || !(ATisEmpty(j_27))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, r_31);
        return(t);
      }
      t = oncetd_1_0(m_6, t);
      x_31 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_31), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, u_31, x_31, (ATerm) ATmakeAppl(sym_Seq_2, q_31, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(w_31), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(s_31), not_null(v_31), term_w_24))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_31)), (ATerm) ATmakeAppl(sym_Var_1, r_31))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm k_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_27 = t;
      int n_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0_0(t);
          t = desugarRule_0_0(t);
          ;
          LocalPopChoice(n_27);
        }
      else
        {
          t = m_27;
          {
            ATerm o_27 = t;
            int p_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2_0(_id, desugarRule_0_0, t);
                ;
                LocalPopChoice(p_27);
              }
            else
              {
                t = o_27;
                t = RtoS_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(l_27);
    }
  else
    {
      t = k_27;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm o_109 (ATerm), ATerm t)
{
  t = o_109(t);
  {
    ATerm n_6 (ATerm t)
    {
      t = topdown_1_0(o_109, t);
      return(t);
    }
    t = SRTS_all(n_6, t);
  }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm q_113 (ATerm), ATerm t)
{
  ATerm e_32 = NULL;
  ATerm j_32 (ATerm t)
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_32 = NULL,h_32 = NULL,i_32 = NULL;
        f_32 = t;
        {
          ATerm q_6 (ATerm t)
          {
            ATerm v_8 = NULL,w_8 = NULL;
            v_8 = t;
            t = SSL_explode_term(v_8);
            if(match_cons(t, sym__2))
              {
                ATerm s_27 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) s_27) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm t_27 = ATgetArgument(t, 1);
                  if(((ATgetType(t_27) == AT_LIST) && !(ATisEmpty(t_27))))
                    {
                      w_8 = ATgetFirst((ATermList) t_27);
                      {
                        ATerm u_27 = (ATerm) ATgetNext((ATermList) t_27);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = w_8;
            return(t);
          }
          t = map_1_0(q_6, t);
          t = q_113(t);
          h_32 = t;
          t = f_32;
          {
            ATerm r_6 (ATerm t)
            {
              ATerm z_8 = NULL,b_9 = NULL;
              z_8 = t;
              t = SSL_explode_term(z_8);
              if(match_cons(t, sym__2))
                {
                  ATerm v_27 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) v_27) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm w_27 = ATgetArgument(t, 1);
                    if(((ATgetType(w_27) == AT_LIST) && !(ATisEmpty(w_27))))
                      {
                        ATerm x_27 = ATgetFirst((ATermList) w_27);
                        b_9 = (ATerm) ATgetNext((ATermList) w_27);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), b_9);
              return(t);
            }
            t = map_1_0(r_6, t);
            t = j_32(t);
            i_32 = t;
            t = (ATerm) ATinsert(CheckATermList(i_32), h_32);
          }
        }
        ;
        LocalPopChoice(r_27);
      }
    else
      {
        t = q_27;
        {
          ATerm s_6 (ATerm t)
          {
            if(!(match_cons(t, sym__0)))
              _fail(t);
            return(t);
          }
          t = map_1_0(s_6, t);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = j_32(t);
  e_32 = t;
  t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), e_32);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm k_32 = NULL;
  k_32 = t;
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL;
        t = k_32;
        t = new_0_0(t);
        p_32 = t;
        t = new_0_0(t);
        q_32 = t;
        t = new_0_0(t);
        r_32 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_32), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, k_32), (ATerm) ATmakeAppl(sym_Var_1, q_32))), (ATerm) ATmakeAppl(sym_Var_1, r_32)), (ATerm)ATmakeAppl(sym_VarDec_2, p_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_z_24), term_z_24)), q_32, (ATerm)ATmakeAppl(sym_Var_1, q_32), r_32, (ATerm) ATmakeAppl(sym_Var_1, r_32));
        ;
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        {
          ATerm t_32 = NULL,u_32 = NULL,w_32 = NULL;
          t = k_32;
          t = new_0_0(t);
          t_32 = t;
          t = new_0_0(t);
          u_32 = t;
          t = new_0_0(t);
          w_32 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, t_32), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, k_32), (ATerm) ATmakeAppl(sym_Var_1, u_32))), (ATerm) ATmakeAppl(sym_Var_1, w_32)), (ATerm)ATmakeAppl(sym_VarDec_2, t_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_z_24), term_z_24)), u_32, (ATerm)ATmakeAppl(sym_Var_1, u_32), w_32, (ATerm) ATmakeAppl(sym_Var_1, w_32));
        }
      }
  }
  return(t);
}
ATerm copy_1_0 (ATerm t_123 (ATerm), ATerm t)
{
  ATerm t_6 (ATerm t)
  {
    ATerm x_32 = NULL,y_32 = NULL;
    if(match_cons(t, sym__2))
      {
        x_32 = ATgetArgument(t, 0);
        y_32 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, x_32, y_32, (ATerm) ATempty);
    return(t);
  }
  ATerm c_7 (ATerm t)
  {
    ATerm z_32 = NULL;
    if(match_cons(t, sym__3))
      {
        ATerm a_28 = ATgetArgument(t, 0);
        if(((ATgetType(a_28) != AT_INT) || (ATgetInt((ATermInt) a_28) != 0)))
          _fail(t);
        {
          ATerm b_28 = ATgetArgument(t, 1);
        }
        z_32 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = z_32;
    return(t);
  }
  ATerm k_7 (ATerm t)
  {
    ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL;
    if(match_cons(t, sym__3))
      {
        a_33 = ATgetArgument(t, 0);
        b_33 = ATgetArgument(t, 1);
        c_33 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, a_33, term_t_17);
    t = geq_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, a_33, term_t_17);
    {
      ATerm c_28 = t;
      int d_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(a_33, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(d_28);
        }
      else
        {
          t = c_28;
          t = SSL_subtr(a_33, (ATerm) ATmakeInt(1));
        }
      d_33 = t;
      t = b_33;
      t = t_123(t);
      e_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, d_33, b_33, (ATerm) ATinsert(CheckATermList(c_33), e_33));
    }
    return(t);
  }
  t = for_3_0(t_6, c_7, k_7, t);
  return(t);
}
ATerm MkThreadApplication_0_0 (ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL,k_33 = NULL,l_33 = NULL,n_33 = NULL;
  if(match_cons(t, sym__2))
    {
      f_33 = ATgetArgument(t, 0);
      g_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = new_0_0(t);
  k_33 = t;
  t = new_0_0(t);
  l_33 = t;
  t = new_0_0(t);
  n_33 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_33), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_33)), (ATerm) ATmakeAppl(sym_Var_1, l_33))), (ATerm) ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_33)), (ATerm) ATmakeAppl(sym_Var_1, n_33)))), (ATerm)ATmakeAppl(sym_VarDec_2, k_33, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_z_24), term_z_24)), l_33, (ATerm)ATmakeAppl(sym_Var_1, l_33), n_33, (ATerm) ATmakeAppl(sym_Var_1, n_33));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_33 = ATgetFirst((ATermList) t);
      v_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_33;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm e_28 = t;
      int f_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_33;
          ;
          LocalPopChoice(f_28);
        }
      else
        {
          t = e_28;
          t = v_33;
          t = last_0_0(t);
        }
    }
  else
    {
      t = v_33;
      t = last_0_0(t);
    }
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm h_36 (ATerm j_34, ATerm k_34, ATerm l_34, ATerm m_34, ATerm t)
  {
    ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, k_34, term_t_17);
    {
      ATerm g_28 = t;
      int h_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(k_34, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(h_28);
        }
      else
        {
          t = g_28;
          t = SSL_addr(k_34, (ATerm) ATmakeInt(1));
        }
      q_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_34, term_b_13);
      t = copy_1_0(new_0_0, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_34 = ATgetFirst((ATermList) t);
          s_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_34;
      t = last_0_0(t);
      t_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_34), r_34), s_34);
      {
        ATerm n_7 (ATerm t)
        {
          if(match_cons(t, sym__2))
            {
              ATerm i_28 = ATgetArgument(t, 0);
              ATerm j_28 = ATgetArgument(t, 1);
              if(((ATgetType(j_28) != AT_LIST) || !(ATisEmpty(j_28))))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm o_7 (ATerm t)
        {
          ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL;
          if(match_cons(t, sym__2))
            {
              ATerm k_28 = ATgetArgument(t, 0);
              if(((ATgetType(k_28) == AT_LIST) && !(ATisEmpty(k_28))))
                {
                  b_35 = ATgetFirst((ATermList) k_28);
                  d_35 = (ATerm) ATgetNext((ATermList) k_28);
                }
              else
                _fail(t);
              {
                ATerm l_28 = ATgetArgument(t, 1);
                if(((ATgetType(l_28) == AT_LIST) && !(ATisEmpty(l_28))))
                  {
                    c_35 = ATgetFirst((ATermList) l_28);
                    e_35 = (ATerm) ATgetNext((ATermList) l_28);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_35, c_35), (ATerm) ATmakeAppl(sym__2, d_35, e_35));
          return(t);
        }
        ATerm p_7 (ATerm t)
        {
          ATerm f_35 = NULL,g_35 = NULL;
          if(match_cons(t, sym__2))
            {
              f_35 = ATgetArgument(t, 0);
              g_35 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(g_35), f_35);
          return(t);
        }
        t = genzip_4_0(n_7, o_7, p_7, MkThreadApplication_0_0, t);
        t = tuple_unzip_1_0(_id, t);
        if(match_cons(t, sym__6))
          {
            u_34 = ATgetArgument(t, 0);
            v_34 = ATgetArgument(t, 1);
            w_34 = ATgetArgument(t, 2);
            x_34 = ATgetArgument(t, 3);
            y_34 = ATgetArgument(t, 4);
            z_34 = ATgetArgument(t, 5);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_34), w_34), s_34);
        t = concat_0_0(t);
        a_35 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, j_34, term_m_28), v_34, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(a_35), r_34), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_34)), (ATerm) ATmakeAppl(sym_Op_2, j_34, x_34))), (ATerm)ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_34)), (ATerm) ATmakeAppl(sym_Op_2, j_34, z_34))), (ATerm) ATmakeAppl(sym_Seqs_1, u_34)))));
      }
    }
    return(t);
  }
  ATerm i_36 (ATerm h_35, ATerm i_35, ATerm j_35, ATerm k_35, ATerm t)
  {
    ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL;
    t = k_35;
    t = new_0_0(t);
    o_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_35, (ATerm) ATmakeAppl(sym_Var_1, o_35));
    t = copy_1_0(MkDistApplication_0_0, t);
    t = tuple_unzip_1_0(_id, t);
    if(match_cons(t, sym__6))
      {
        p_35 = ATgetArgument(t, 0);
        q_35 = ATgetArgument(t, 1);
        r_35 = ATgetArgument(t, 2);
        s_35 = ATgetArgument(t, 3);
        t_35 = ATgetArgument(t, 4);
        u_35 = ATgetArgument(t, 5);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, r_35, t_35);
    {
      ATerm n_28 = t;
      int o_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm p_28 = ATgetArgument(t, 0);
              ATerm q_28 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_35;
          {
            ATerm q_7 (ATerm t)
            {
              t = t_35;
              return(t);
            }
            t = at_end_1_0(q_7, t);
          }
          ;
          LocalPopChoice(o_28);
        }
      else
        {
          t = n_28;
          {
            ATerm j_9 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, r_35, t_35));
            if(match_cons(t, sym__2))
              {
                ATerm r_28 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) r_28) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                j_9 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = j_9;
            t = concat_0_0(t);
          }
        }
      v_35 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, h_35, term_s_28), q_35, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(v_35), o_35), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_35)), (ATerm) ATmakeAppl(sym_Op_2, h_35, s_35))), (ATerm)ATmakeAppl(sym_Op_2, h_35, u_35), (ATerm) ATmakeAppl(sym_Seqs_1, p_35)))));
    }
    return(t);
  }
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL;
  z_35 = t;
  if(match_cons(t, sym__3))
    {
      a_36 = ATgetArgument(t, 0);
      b_36 = ATgetArgument(t, 1);
      c_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_36;
  if(match_string(t, "T"))
    {
      t = c_36;
      if(match_cons(t, sym__2))
        {
          d_36 = ATgetArgument(t, 0);
          e_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_36;
      if(match_int(t, 0))
        {
          ATerm t_28 = t;
          int u_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_36(a_36, d_36, e_36, z_35, t);
              ;
              LocalPopChoice(u_28);
            }
          else
            {
              t = t_28;
              {
                ATerm g_36 = NULL;
                t = z_35;
                t = new_0_0(t);
                g_36 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, a_36, term_m_28), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_36), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_36)), (ATerm) ATmakeAppl(sym_Op_2, a_36, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_36)), (ATerm) ATmakeAppl(sym_Op_2, a_36, (ATerm) ATempty))), term_w_24))));
              }
            }
        }
      else
        {
          t = h_36(a_36, d_36, e_36, z_35, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = c_36;
      if(match_cons(t, sym__2))
        {
          d_36 = ATgetArgument(t, 0);
          e_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_36(a_36, d_36, e_36, z_35, t);
    }
  return(t);
}
ATerm CongruenceDef_0_0 (ATerm t)
{
  ATerm k_38 = NULL,o_38 = NULL,p_38 = NULL,w_38 = NULL,x_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_28 = ATgetArgument(t, 0);
      if(match_cons(v_28, sym__2))
        {
          ATerm w_28 = ATgetArgument(v_28, 0);
          if(match_cons(w_28, sym_Mod_2))
            {
              k_38 = ATgetArgument(w_28, 0);
              o_38 = ATgetArgument(w_28, 1);
            }
          else
            _fail(t);
          p_38 = ATgetArgument(v_28, 1);
        }
      else
        _fail(t);
      w_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_38, o_38, p_38);
  t = DefineCongruence_0_0(t);
  {
    ATerm r_7 (ATerm t)
    {
      ATerm x_28 = t;
      int y_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = desugarRule_0_0(t);
          ;
          LocalPopChoice(y_28);
        }
      else
        {
          t = x_28;
        }
      {
        ATerm s_7 (ATerm t)
        {
          ATerm z_28 = t;
          int a_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = LiftPrimArgs_0_0(t);
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
                    t = HL_0_0(t);
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
                              t = Bapp0_0_0(t);
                              ;
                              LocalPopChoice(g_29);
                            }
                          else
                            {
                              t = f_29;
                              {
                                ATerm h_29 = t;
                                int i_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm z_38 = NULL,k_39 = NULL,m_39 = NULL;
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        z_38 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = z_38;
                                    if(match_cons(t, sym_RootApp_1))
                                      {
                                        k_39 = ATgetArgument(t, 0);
                                        t = k_39;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_App_2))
                                          {
                                            k_39 = ATgetArgument(t, 0);
                                            m_39 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_39), k_39);
                                      }
                                    ;
                                    LocalPopChoice(i_29);
                                  }
                                else
                                  {
                                    t = h_29;
                                    t = Bapp2_0_0(t);
                                  }
                              }
                            }
                          ;
                          LocalPopChoice(e_29);
                        }
                      else
                        {
                          t = d_29;
                          {
                            ATerm j_29 = t;
                            int o_29 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm p_29 = t;
                                int q_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_9 = NULL,s_9 = NULL,u_9 = NULL;
                                    if(match_cons(t, sym_Match_1))
                                      {
                                        r_9 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = r_9;
                                    {
                                      ATerm t_7 (ATerm t)
                                      {
                                        if(match_cons(t, sym_RootApp_1))
                                          {
                                            ATerm r_29 = ATgetArgument(t, 0);
                                            if(match_cons(r_29, sym_Match_1))
                                              {
                                                if(((s_9 != NULL) && (s_9 != ATgetArgument(r_29, 0))))
                                                  _fail(ATgetArgument(r_29, 0));
                                                else
                                                  s_9 = ATgetArgument(r_29, 0);
                                              }
                                            else
                                              _fail(t);
                                          }
                                        else
                                          _fail(t);
                                        t = not_null(s_9);
                                        return(t);
                                      }
                                      t = pat_td_1_0(t_7, t);
                                      u_9 = t;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, u_9);
                                    }
                                    ;
                                    LocalPopChoice(q_29);
                                  }
                                else
                                  {
                                    t = p_29;
                                    {
                                      ATerm u_29 = t;
                                      int v_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              w_39 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = w_39;
                                          if(match_cons(t, sym_RootApp_1))
                                            {
                                              x_39 = ATgetArgument(t, 0);
                                              t = x_39;
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_App_2))
                                                {
                                                  x_39 = ATgetArgument(t, 0);
                                                  y_39 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym_BA_2, x_39, y_39);
                                            }
                                          ;
                                          LocalPopChoice(v_29);
                                        }
                                      else
                                        {
                                          t = u_29;
                                          t = Mapp2_0_0(t);
                                        }
                                    }
                                  }
                                ;
                                LocalPopChoice(o_29);
                              }
                            else
                              {
                                t = j_29;
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
        t = repeat_1_0(s_7, t);
      }
      return(t);
    }
    t = topdown_1_0(r_7, t);
    x_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_38, w_38);
  }
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm x_29 = t;
  int z_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0_0(t);
      ;
      LocalPopChoice(z_29);
    }
  else
    {
      t = x_29;
      {
        ATerm c_10 = NULL,d_10 = NULL,f_10 = NULL,g_10 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm d_30 = ATgetArgument(t, 0);
            if(match_cons(d_30, sym__2))
              {
                c_10 = ATgetArgument(d_30, 0);
                d_10 = ATgetArgument(d_30, 1);
              }
            else
              _fail(t);
            f_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_10, d_10);
        t = Definitions_0_0(t);
        g_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_10, f_10);
        {
          ATerm u_7 (ATerm t)
          {
            ATerm e_30 = t;
            int g_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_40 = NULL,s_40 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    r_40 = ATgetFirst((ATermList) t);
                    s_40 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = s_40;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = r_40;
                ;
                LocalPopChoice(g_30);
              }
            else
              {
                t = e_30;
                t = JoinDefs2_0_0(t);
              }
            return(t);
          }
          t = _2_0(u_7, _id, t);
        }
      }
    }
  return(t);
}
ATerm diff_1_0 (ATerm t_120 (ATerm), ATerm t)
{
  ATerm y_40 = NULL,j_41 = NULL;
  if(match_cons(t, sym__2))
    {
      j_41 = ATgetArgument(t, 0);
      y_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_41;
  {
    ATerm k_41 (ATerm t)
    {
      ATerm o_30 = t;
      int p_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(p_30);
        }
      else
        {
          t = o_30;
          {
            ATerm q_30 = t;
            int r_30 = stack_ptr;
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
                t = y_40;
                {
                  ATerm v_7 (ATerm t)
                  {
                    ATerm j_10 = NULL;
                    j_10 = t;
                    t = (ATerm) ATmakeAppl(sym__2, h_10, j_10);
                    t = t_120(t);
                    return(t);
                  }
                  t = fetch_1_0(v_7, t);
                  t = i_10;
                  t = k_41(t);
                }
                ;
                LocalPopChoice(r_30);
              }
            else
              {
                t = q_30;
                t = Cons_2_0(_id, k_41, t);
              }
          }
        }
      return(t);
    }
    t = k_41(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm a_114 (ATerm), ATerm b_114 (ATerm), ATerm c_114 (ATerm), ATerm d_114 (ATerm), ATerm t)
{
  ATerm l_41 (ATerm t)
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_114(t);
        ;
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
        t = b_114(t);
        t = _2_0(d_114, l_41, t);
        t = c_114(t);
      }
    return(t);
  }
  t = l_41(t);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_30 = ATgetFirst((ATermList) t);
      if(match_cons(u_30, sym__2))
        {
          o_41 = ATgetArgument(u_30, 0);
          p_41 = ATgetArgument(u_30, 1);
        }
      else
        _fail(t);
      q_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(p_41);
  if(match_cons(t, sym__2))
    {
      r_41 = ATgetArgument(t, 0);
      s_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(o_41);
  if(match_cons(t, sym__2))
    {
      if((r_41 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      t_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_41, s_41);
  {
    ATerm d_8 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm z_30 = ATgetArgument(t, 0);
          if(((ATgetType(z_30) != AT_LIST) || !(ATisEmpty(z_30))))
            _fail(t);
          {
            ATerm a_31 = ATgetArgument(t, 1);
            if(((ATgetType(a_31) != AT_LIST) || !(ATisEmpty(a_31))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm e_8 (ATerm t)
    {
      ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm b_31 = ATgetArgument(t, 0);
          if(((ATgetType(b_31) == AT_LIST) && !(ATisEmpty(b_31))))
            {
              v_41 = ATgetFirst((ATermList) b_31);
              x_41 = (ATerm) ATgetNext((ATermList) b_31);
            }
          else
            _fail(t);
          {
            ATerm c_31 = ATgetArgument(t, 1);
            if(((ATgetType(c_31) == AT_LIST) && !(ATisEmpty(c_31))))
              {
                w_41 = ATgetFirst((ATermList) c_31);
                y_41 = (ATerm) ATgetNext((ATermList) c_31);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_41, w_41), (ATerm) ATmakeAppl(sym__2, x_41, y_41));
      return(t);
    }
    ATerm f_8 (ATerm t)
    {
      ATerm z_41 = NULL,x_42 = NULL;
      if(match_cons(t, sym__2))
        {
          z_41 = ATgetArgument(t, 0);
          x_42 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(x_42), z_41);
      return(t);
    }
    t = genzip_4_0(d_8, e_8, f_8, _id, t);
    u_41 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_41, q_41);
    {
      ATerm d_31 = t;
      int e_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm l_31 = ATgetArgument(t, 0);
              ATerm m_31 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_41;
          {
            ATerm i_8 (ATerm t)
            {
              t = q_41;
              return(t);
            }
            t = at_end_1_0(i_8, t);
          }
          ;
          LocalPopChoice(e_31);
        }
      else
        {
          t = d_31;
          {
            ATerm q_10 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, u_41, q_41));
            if(match_cons(t, sym__2))
              {
                ATerm y_31 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) y_31) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                q_10 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = q_10;
            t = concat_0_0(t);
          }
        }
    }
  }
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm z_31 = t;
  int a_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_8 (ATerm t)
      {
        ATerm f_43 = NULL;
        f_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_43);
        return(t);
      }
      ATerm k_8 (ATerm t)
      {
        ATerm u_8 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, u_8, t);
        return(t);
      }
      ATerm t_8 (ATerm t)
      {
        ATerm b_32 = t;
        int c_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_8 (ATerm t)
            {
              ATerm d_32 = t;
              int g_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_43 = NULL,i_43 = NULL,r_43 = NULL,b_44 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      h_43 = ATgetFirst((ATermList) t);
                      b_44 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = h_43;
                  if(match_cons(t, sym__2))
                    {
                      i_43 = ATgetArgument(t, 0);
                      r_43 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = r_43;
                  if((i_43 != t))
                    {
                      _fail(t);
                    }
                  t = b_44;
                  ;
                  LocalPopChoice(g_32);
                }
              else
                {
                  t = d_32;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, x_8, t);
            ;
            LocalPopChoice(c_32);
          }
        else
          {
            t = b_32;
            {
              ATerm r_46 = NULL,s_46 = NULL,b_47 = NULL,c_47 = NULL;
              if(match_cons(t, sym__2))
                {
                  r_46 = ATgetArgument(t, 0);
                  s_46 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_46;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_47 = ATgetFirst((ATermList) t);
                  c_47 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_46), b_47), c_47);
            }
          }
        return(t);
      }
      t = for_3_0(j_8, k_8, t_8, t);
      ;
      LocalPopChoice(a_32);
    }
  else
    {
      t = z_31;
      {
        ATerm y_8 (ATerm t)
        {
          ATerm g_47 = NULL;
          if(match_cons(t, sym__2))
            {
              g_47 = ATgetArgument(t, 0);
              if((g_47 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(y_8, t);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm u_135 (ATerm), ATerm v_135 (ATerm), ATerm w_135 (ATerm), ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,s_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,z_47 = NULL,a_48 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm l_32 = ATgetArgument(t, 0);
      if(((ATgetType(l_32) == AT_LIST) && !(ATisEmpty(l_32))))
        {
          j_47 = ATgetFirst((ATermList) l_32);
          k_47 = (ATerm) ATgetNext((ATermList) l_32);
        }
      else
        _fail(t);
      l_47 = ATgetArgument(t, 1);
      m_47 = ATgetArgument(t, 2);
      n_47 = ATgetArgument(t, 3);
      o_47 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_47, m_47);
  t = u_135(t);
  if(match_cons(t, sym__2))
    {
      p_47 = ATgetArgument(t, 0);
      s_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_47;
  t = v_135(t);
  u_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_47, l_47);
  t = diff_0_0(t);
  v_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_47, k_47);
  {
    ATerm m_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_32 = ATgetArgument(t, 0);
            ATerm s_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_47;
        {
          ATerm a_9 (ATerm t)
          {
            t = k_47;
            return(t);
          }
          t = at_end_1_0(a_9, t);
        }
        ;
        LocalPopChoice(n_32);
      }
    else
      {
        t = m_32;
        {
          ATerm u_10 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, v_47, k_47));
          if(match_cons(t, sym__2))
            {
              ATerm v_32 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_32) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              u_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_10;
          t = concat_0_0(t);
        }
      }
    w_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_47, l_47);
    {
      ATerm h_33 = t;
      int i_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm j_33 = ATgetArgument(t, 0);
              ATerm m_33 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_47;
          {
            ATerm c_9 (ATerm t)
            {
              t = l_47;
              return(t);
            }
            t = at_end_1_0(c_9, t);
          }
          ;
          LocalPopChoice(i_33);
        }
      else
        {
          t = h_33;
          {
            ATerm y_10 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, v_47, l_47));
            if(match_cons(t, sym__2))
              {
                ATerm o_33 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) o_33) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                y_10 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = y_10;
            t = concat_0_0(t);
          }
        }
      z_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, j_47, p_47, n_47);
      t = w_135(t);
      a_48 = t;
      t = (ATerm) ATmakeAppl(sym__5, w_47, z_47, s_47, a_48, o_47);
    }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm k_120 (ATerm), ATerm l_120 (ATerm), ATerm t)
{
  ATerm m_48 (ATerm t)
  {
    ATerm p_33 = t;
    int q_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_120(t);
        ;
        LocalPopChoice(q_33);
      }
    else
      {
        t = p_33;
        t = l_120(t);
        t = m_48(t);
      }
    return(t);
  }
  t = m_48(t);
  return(t);
}
ATerm for_3_0 (ATerm n_120 (ATerm), ATerm o_120 (ATerm), ATerm p_120 (ATerm), ATerm t)
{
  t = n_120(t);
  t = while_not_2_0(o_120, p_120, t);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm d_9 (ATerm t)
  {
    ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL;
    if(match_cons(t, sym__3))
      {
        r_48 = ATgetArgument(t, 0);
        s_48 = ATgetArgument(t, 1);
        t_48 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__5, r_48, r_48, s_48, t_48, (ATerm) ATempty);
    return(t);
  }
  ATerm e_9 (ATerm t)
  {
    ATerm u_48 = NULL,v_48 = NULL;
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
        u_48 = ATgetArgument(t, 3);
        v_48 = ATgetArgument(t, 4);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, u_48, v_48);
    return(t);
  }
  ATerm f_9 (ATerm t)
  {
    ATerm w_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_9 (ATerm t)
        {
          t = svars_arity_0_0(t);
          {
            ATerm i_9 (ATerm t)
            {
              ATerm y_33 = t;
              int z_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = DefinitionExists_0_0(t);
                  ;
                  LocalPopChoice(z_33);
                }
              else
                {
                  t = y_33;
                }
              return(t);
            }
            t = map_1_0(i_9, t);
          }
          return(t);
        }
        ATerm h_9 (ATerm t)
        {
          ATerm w_48 = NULL,x_48 = NULL;
          if(match_cons(t, sym__3))
            {
              ATerm a_34 = ATgetArgument(t, 0);
              w_48 = ATgetArgument(t, 1);
              x_48 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(x_48), w_48);
          return(t);
        }
        t = GnNextChangeGraph_3_0(get_definition_0_0, g_9, h_9, t);
        ;
        LocalPopChoice(x_33);
      }
    else
      {
        t = w_33;
        {
          ATerm b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL;
          if(match_cons(t, sym__5))
            {
              b_49 = ATgetArgument(t, 0);
              e_49 = ATgetArgument(t, 1);
              f_49 = ATgetArgument(t, 2);
              g_49 = ATgetArgument(t, 3);
              h_49 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = b_49;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_49 = ATgetFirst((ATermList) t);
              d_49 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, d_49, e_49, f_49, g_49, (ATerm) ATinsert(CheckATermList(h_49), c_49));
        }
      }
    return(t);
  }
  t = for_3_0(d_9, e_9, f_9, t);
  {
    ATerm b_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_49 = NULL,q_49 = NULL;
        if(match_cons(t, sym__2))
          {
            p_49 = ATgetArgument(t, 0);
            q_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_49;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_49;
        ;
        LocalPopChoice(c_34);
      }
    else
      {
        t = b_34;
        t = MissingDefs_0_0(t);
        t = SSL_exit((ATerm) ATmakeInt(1));
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm d_136 (ATerm), ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL;
  if(match_cons(t, sym__2))
    {
      s_49 = ATgetArgument(t, 0);
      t_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_136(t);
  u_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_49, s_49, t_49);
  t = table_push_0_0(t);
  {
    ATerm d_34 = t;
    int e_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(u_49, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(e_34);
      }
    else
      {
        t = d_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_49 = ATgetFirst((ATermList) t);
        w_49 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(u_49, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(w_49), (ATerm) ATinsert(CheckATermList(v_49), s_49)));
    t = (ATerm) ATmakeAppl(sym__2, s_49, t_49);
  }
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm h_50 = NULL;
  h_50 = t;
  {
    ATerm f_34 = t;
    int g_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_11 = NULL,c_11 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue)), h_50);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_11 = ATgetFirst((ATermList) t);
            {
              ATerm h_34 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = c_11;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm i_34 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_34) != ATmakeSymbol("j_0", 0, ATtrue)))
              _fail(t);
            b_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_11;
        ;
        LocalPopChoice(g_34);
      }
    else
      {
        t = f_34;
        {
          ATerm g_11 = NULL,h_11 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue)), h_50);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_11 = ATgetFirst((ATermList) t);
              {
                ATerm n_34 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = h_11;
          if(match_cons(t, sym_Defined_2))
            {
              ATerm o_34 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) o_34) != ATmakeSymbol("e_0", 0, ATtrue)))
                _fail(t);
              g_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_11;
        }
      }
  }
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm d_51 (ATerm s_50, ATerm t)
  {
    ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL;
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue)), s_50);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_50 = ATgetFirst((ATermList) t);
        {
          ATerm p_34 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = w_50;
    if(match_cons(t, sym_Defined_3))
      {
        ATerm l_35 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) l_35) != ATmakeSymbol("c_0", 0, ATtrue)))
          _fail(t);
        u_50 = ATgetArgument(t, 1);
        v_50 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(v_50), u_50);
    return(t);
  }
  ATerm z_50 = NULL,b_51 = NULL;
  z_50 = t;
  if(match_cons(t, sym__2))
    {
      ATerm m_35 = ATgetArgument(t, 0);
      b_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_51;
  {
    ATerm n_35 = t;
    int w_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_35 = ATgetArgument(t, 0);
            ATerm y_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(w_35);
        {
          ATerm f_36 = t;
          int j_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_11 = NULL,n_11 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue)), z_50);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_11 = ATgetFirst((ATermList) t);
                  {
                    ATerm k_36 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = n_11;
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm l_36 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) l_36) != ATmakeSymbol("h_0", 0, ATtrue)))
                    _fail(t);
                  m_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_11;
              ;
              LocalPopChoice(j_36);
            }
          else
            {
              t = f_36;
              t = d_51(z_50, t);
            }
        }
      }
    else
      {
        t = n_35;
        t = d_51(z_50, t);
      }
  }
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL;
  e_51 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      f_51 = ATgetArgument(t, 0);
      g_51 = ATgetArgument(t, 1);
      h_51 = ATgetArgument(t, 2);
      {
        ATerm m_36 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  i_51 = t;
  t = g_51;
  {
    ATerm l_9 (ATerm t)
    {
      t = term_q_17;
      return(t);
    }
    ATerm m_9 (ATerm t)
    {
      ATerm o_51 = NULL,t_51 = NULL;
      if(match_cons(t, sym__2))
        {
          o_51 = ATgetArgument(t, 0);
          t_51 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm n_36 = t;
        int o_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(o_51, t_51);
            ;
            LocalPopChoice(o_36);
          }
        else
          {
            t = n_36;
            t = SSL_addr(o_51, t_51);
          }
      }
      return(t);
    }
    ATerm n_9 (ATerm t)
    {
      t = term_t_17;
      return(t);
    }
    t = foldr_3_0(l_9, m_9, n_9, t);
    j_51 = t;
    t = h_51;
    {
      ATerm p_9 (ATerm t)
      {
        t = term_q_17;
        return(t);
      }
      ATerm q_9 (ATerm t)
      {
        ATerm u_51 = NULL,v_51 = NULL;
        if(match_cons(t, sym__2))
          {
            u_51 = ATgetArgument(t, 0);
            v_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        {
          ATerm p_36 = t;
          int q_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_addi(u_51, v_51);
              ;
              LocalPopChoice(q_36);
            }
          else
            {
              t = p_36;
              t = SSL_addr(u_51, v_51);
            }
        }
        return(t);
      }
      ATerm t_9 (ATerm t)
      {
        t = term_t_17;
        return(t);
      }
      t = foldr_3_0(p_9, q_9, t_9, t);
      k_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_51, (ATerm) ATmakeAppl(sym__2, j_51, k_51));
      {
        ATerm r_36 = t;
        int s_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Definitions_0_0(t);
            ;
            LocalPopChoice(s_36);
          }
        else
          {
            t = r_36;
            t = (ATerm) ATempty;
          }
        l_51 = t;
        t = f_51;
        {
          ATerm t_36 = t;
          int u_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Arities_0_0(t);
              ;
              LocalPopChoice(u_36);
            }
          else
            {
              t = t_36;
              t = (ATerm) ATempty;
            }
          m_51 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_51, k_51)), m_51);
          {
            ATerm v_9 (ATerm t)
            {
              ATerm w_51 = NULL;
              if(match_cons(t, sym__2))
                {
                  w_51 = ATgetArgument(t, 0);
                  if((w_51 != ATgetArgument(t, 1)))
                    {
                      _fail(ATgetArgument(t, 1));
                    }
                }
              else
                _fail(t);
              return(t);
            }
            t = union_1_0(v_9, t);
            n_51 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_51, (ATerm) ATmakeAppl(sym__2, j_51, k_51)), (ATerm) ATmakeAppl(sym_Defined_2, term_v_36, (ATerm) ATinsert(CheckATermList(l_51), e_51)));
            {
              ATerm w_9 (ATerm t)
              {
                t = term_w_36;
                return(t);
              }
              t = assert_1_0(w_9, t);
              t = (ATerm) ATmakeAppl(sym__2, f_51, (ATerm) ATmakeAppl(sym_Defined_2, term_x_36, n_51));
              {
                ATerm x_9 (ATerm t)
                {
                  t = term_y_36;
                  return(t);
                }
                t = assert_1_0(x_9, t);
                t = i_51;
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
  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL,c_52 = NULL,d_52 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      x_51 = ATgetArgument(t, 0);
      y_51 = ATgetArgument(t, 1);
      z_51 = ATgetArgument(t, 2);
      {
        ATerm z_36 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = y_51;
  {
    ATerm y_9 (ATerm t)
    {
      t = term_q_17;
      return(t);
    }
    ATerm z_9 (ATerm t)
    {
      ATerm e_52 = NULL,f_52 = NULL;
      if(match_cons(t, sym__2))
        {
          e_52 = ATgetArgument(t, 0);
          f_52 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm a_37 = t;
        int b_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(e_52, f_52);
            ;
            LocalPopChoice(b_37);
          }
        else
          {
            t = a_37;
            t = SSL_addr(e_52, f_52);
          }
      }
      return(t);
    }
    ATerm a_10 (ATerm t)
    {
      t = term_t_17;
      return(t);
    }
    t = foldr_3_0(y_9, z_9, a_10, t);
    c_52 = t;
    t = z_51;
    {
      ATerm b_10 (ATerm t)
      {
        t = term_q_17;
        return(t);
      }
      ATerm e_10 (ATerm t)
      {
        ATerm g_52 = NULL,h_52 = NULL;
        if(match_cons(t, sym__2))
          {
            g_52 = ATgetArgument(t, 0);
            h_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        {
          ATerm c_37 = t;
          int d_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_addi(g_52, h_52);
              ;
              LocalPopChoice(d_37);
            }
          else
            {
              t = c_37;
              t = SSL_addr(g_52, h_52);
            }
        }
        return(t);
      }
      ATerm k_10 (ATerm t)
      {
        t = term_t_17;
        return(t);
      }
      t = foldr_3_0(b_10, e_10, k_10, t);
      d_52 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, x_51, (ATerm) ATmakeAppl(sym__2, c_52, d_52)));
    }
  }
  return(t);
}
ATerm union_1_0 (ATerm x_120 (ATerm), ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL;
  if(match_cons(t, sym__2))
    {
      n_52 = ATgetArgument(t, 0);
      m_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_52;
  {
    ATerm o_52 (ATerm t)
    {
      ATerm e_37 = t;
      int f_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = m_52;
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
                ATerm o_11 = NULL,p_11 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    o_11 = ATgetFirst((ATermList) t);
                    p_11 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = m_52;
                {
                  ATerm l_10 (ATerm t)
                  {
                    ATerm q_11 = NULL;
                    q_11 = t;
                    t = (ATerm) ATmakeAppl(sym__2, o_11, q_11);
                    t = x_120(t);
                    return(t);
                  }
                  t = fetch_1_0(l_10, t);
                  t = p_11;
                  t = o_52(t);
                }
                ;
                LocalPopChoice(h_37);
              }
            else
              {
                t = g_37;
                t = Cons_2_0(_id, o_52, t);
              }
          }
        }
      return(t);
    }
    t = o_52(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm g_123 (ATerm), ATerm h_123 (ATerm), ATerm i_123 (ATerm), ATerm t)
{
  ATerm i_37 = t;
  int j_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_123(t);
      ;
      LocalPopChoice(j_37);
    }
  else
    {
      t = i_37;
      {
        ATerm r_52 = NULL,s_52 = NULL,v_52 = NULL,w_52 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_52 = ATgetFirst((ATermList) t);
            s_52 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_52;
        t = i_123(t);
        v_52 = t;
        t = s_52;
        t = foldr_3_0(g_123, h_123, i_123, t);
        w_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_52, w_52);
        t = h_123(t);
      }
    }
  return(t);
}
ATerm all_defs_0_0 (ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL;
  x_52 = t;
  {
    ATerm m_10 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm n_10 (ATerm t)
    {
      ATerm o_10 (ATerm t)
      {
        ATerm a_53 = NULL;
        if(match_cons(t, sym__2))
          {
            a_53 = ATgetArgument(t, 0);
            if((a_53 != ATgetArgument(t, 1)))
              {
                _fail(ATgetArgument(t, 1));
              }
          }
        else
          _fail(t);
        return(t);
      }
      t = union_1_0(o_10, t);
      return(t);
    }
    t = foldr_3_0(m_10, n_10, DefinitionName_0_0, t);
    y_52 = t;
    t = x_52;
    t = map_1_0(RegisterSDefT_0_0, t);
    z_52 = t;
    t = (ATerm) ATmakeAppl(sym__3, y_52, z_52, (ATerm) ATempty);
    t = extract_needed_defs_0_0(t);
  }
  return(t);
}
ATerm Strategies_1_0 (ATerm p_91 (ATerm), ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL;
  e_53 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      c_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_53);
  b_53 = t;
  t = c_53;
  t = p_91(t);
  d_53 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, d_53), b_53);
  return(t);
}
ATerm Cons_2_0 (ATerm l_91 (ATerm), ATerm m_91 (ATerm), ATerm t)
{
  ATerm h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL;
  m_53 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_53 = ATgetFirst((ATermList) t);
      j_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_53);
  h_53 = t;
  t = i_53;
  t = l_91(t);
  k_53 = t;
  t = j_53;
  t = m_91(t);
  l_53 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(l_53), k_53), h_53);
  return(t);
}
ATerm Specification_1_0 (ATerm u_91 (ATerm), ATerm t)
{
  ATerm p_53 = NULL,s_53 = NULL,t_53 = NULL,x_53 = NULL;
  x_53 = t;
  if(match_cons(t, sym_Specification_1))
    {
      s_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_53);
  p_53 = t;
  t = s_53;
  t = u_91(t);
  t_53 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, t_53), p_53);
  return(t);
}
ATerm _2_0 (ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm t)
{
  ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL;
  i_54 = t;
  if(match_cons(t, sym__2))
    {
      e_54 = ATgetArgument(t, 0);
      f_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_54);
  d_54 = t;
  t = e_54;
  t = w_86(t);
  g_54 = t;
  t = f_54;
  t = x_86(t);
  h_54 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, g_54, h_54), d_54);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm k_128 (ATerm), ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL;
  if(match_cons(t, sym__2))
    {
      l_54 = ATgetArgument(t, 0);
      m_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_54, term_k_37);
  t = open_stream_0_0(t);
  n_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_54, m_54);
  t = k_128(t);
  t = fclose_0_0(t);
  t = m_54;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL;
  q_54 = t;
  {
    ATerm r_10 (ATerm t)
    {
      ATerm l_37 = t;
      int m_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_10 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((r_54 != NULL) && (r_54 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_54 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(s_10, t);
          ;
          LocalPopChoice(m_37);
        }
      else
        {
          t = l_37;
          t = term_n_37;
          if(((r_54 != NULL) && (r_54 != t)))
            _fail(t);
          else
            r_54 = t;
        }
      return(t);
    }
    t = _2_0(r_10, _id, t);
    t = q_54;
    {
      ATerm t_10 (ATerm t)
      {
        ATerm u_11 = NULL;
        u_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_54), u_11);
        return(t);
      }
      t = _2_0(_id, t_10, t);
      {
        ATerm o_37 = t;
        int p_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_10 (ATerm t)
            {
              ATerm x_10 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(x_10, t);
              return(t);
            }
            ATerm w_10 (ATerm t)
            {
              ATerm z_10 (ATerm t)
              {
                ATerm s_54 = NULL,u_54 = NULL,v_54 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm q_37 = ATgetArgument(t, 0);
                    if(match_cons(q_37, sym_Stream_1))
                      {
                        s_54 = ATgetArgument(q_37, 0);
                      }
                    else
                      _fail(t);
                    u_54 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(s_54, u_54);
                v_54 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, v_54);
                return(t);
              }
              t = WriteToFile_1_0(z_10, t);
              return(t);
            }
            t = _2_0(v_10, w_10, t);
            ;
            LocalPopChoice(p_37);
          }
        else
          {
            t = o_37;
            {
              ATerm a_11 (ATerm t)
              {
                ATerm e_11 (ATerm t)
                {
                  ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm r_37 = ATgetArgument(t, 0);
                      if(match_cons(r_37, sym_Stream_1))
                        {
                          x_54 = ATgetArgument(r_37, 0);
                        }
                      else
                        _fail(t);
                      y_54 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(x_54, y_54);
                  z_54 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), z_54);
                  a_55 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, a_55);
                  return(t);
                }
                t = WriteToFile_1_0(e_11, t);
                return(t);
              }
              t = _2_0(_id, a_11, t);
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
ATerm apply_strategy_1_0 (ATerm m_131 (ATerm), ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL,g_55 = NULL;
  b_55 = t;
  t = dtime_0_0(t);
  t = b_55;
  t = m_131(t);
  c_55 = t;
  t = dtime_0_0(t);
  d_55 = t;
  t = c_55;
  if(match_cons(t, sym__2))
    {
      e_55 = ATgetArgument(t, 0);
      g_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_55), (ATerm) ATmakeAppl(sym_Runtime_1, d_55)), g_55);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_55 (ATerm o_55, ATerm t)
  {
    t = SSL_fclose(o_55);
    return(t);
  }
  ATerm r_55 = NULL,u_55 = NULL;
  u_55 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_55 = ATgetArgument(t, 0);
      {
        ATerm s_37 = t;
        int t_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_55);
            ;
            LocalPopChoice(t_37);
          }
        else
          {
            t = s_37;
            t = w_55(u_55, t);
          }
      }
    }
  else
    {
      t = w_55(u_55, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_55 = NULL;
  t = SSL_stdin_stream();
  x_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_55);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_55 = NULL;
  t = SSL_stdout_stream();
  y_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_55);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_55 = NULL;
  t = SSL_stderr_stream();
  z_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_55);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_37 = ATgetArgument(t, 0);
      ATerm v_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_37 = t;
    int x_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_12 = NULL,k_12 = NULL;
        j_12 = t;
        t = SSL_explode_term(j_12);
        if(match_cons(t, sym__2))
          {
            ATerm y_37 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_37) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm z_37 = ATgetArgument(t, 1);
              if(((ATgetType(z_37) == AT_LIST) && !(ATisEmpty(z_37))))
                {
                  k_12 = ATgetFirst((ATermList) z_37);
                  {
                    ATerm a_38 = (ATerm) ATgetNext((ATermList) z_37);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = k_12;
        if(match_cons(t, sym_stderr_0))
          {
            t = k_12;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = k_12;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = k_12;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(x_37);
      }
    else
      {
        t = w_37;
        {
          ATerm b_38 = t;
          int c_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL;
              ATerm f_11 (ATerm t)
              {
                ATerm h_56 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    h_56 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = h_56;
                return(t);
              }
              t = _2_0(f_11, _id, t);
              if(match_cons(t, sym__2))
                {
                  e_56 = ATgetArgument(t, 0);
                  f_56 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(e_56, f_56);
              g_56 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, g_56);
              ;
              LocalPopChoice(c_38);
            }
          else
            {
              t = b_38;
              {
                ATerm i_56 = NULL,j_56 = NULL,k_56 = NULL;
                ATerm i_11 (ATerm t)
                {
                  ATerm l_56 = NULL;
                  l_56 = t;
                  t = SSL_is_string(l_56);
                  return(t);
                }
                t = _2_0(i_11, _id, t);
                if(match_cons(t, sym__2))
                  {
                    i_56 = ATgetArgument(t, 0);
                    j_56 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(i_56, j_56);
                k_56 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, k_56);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_56 = NULL,o_56 = NULL,p_56 = NULL;
  ATerm d_38 = t;
  int e_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_56 = NULL;
      q_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_56, term_f_38);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(e_38);
    }
  else
    {
      t = d_38;
      {
        ATerm o_12 = NULL;
        o_12 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_12), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = o_12;
        _fail(t);
      }
    }
  n_56 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(p_56);
  o_56 = t;
  t = n_56;
  t = fclose_0_0(t);
  t = o_56;
  return(t);
}
ATerm fetch_1_0 (ATerm f_106 (ATerm), ATerm t)
{
  ATerm v_56 (ATerm t)
  {
    ATerm g_38 = t;
    int h_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(f_106, _id, t);
        ;
        LocalPopChoice(h_38);
      }
    else
      {
        t = g_38;
        t = Cons_2_0(_id, v_56, t);
      }
    return(t);
  }
  t = v_56(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_38 = t;
  int j_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(j_38);
    }
  else
    {
      t = i_38;
      {
        ATerm y_56 = NULL,z_56 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_56 = ATgetFirst((ATermList) t);
            z_56 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_56;
        {
          ATerm j_11 (ATerm t)
          {
            t = z_56;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(j_11, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm l_106 (ATerm), ATerm t)
{
  ATerm f_57 (ATerm t)
  {
    ATerm l_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, f_57, t);
        ;
        LocalPopChoice(m_38);
      }
    else
      {
        t = l_38;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_106(t);
      }
    return(t);
  }
  t = f_57(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm h_57 = NULL;
  ATerm k_11 (ATerm t)
  {
    ATerm i_57 = NULL;
    i_57 = t;
    t = SSL_explode_string(i_57);
    return(t);
  }
  ATerm r_11 (ATerm t)
  {
    ATerm j_57 = NULL;
    j_57 = t;
    t = SSL_explode_string(j_57);
    return(t);
  }
  t = _2_0(k_11, r_11, t);
  {
    ATerm n_38 = t;
    int q_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_57 = NULL,m_57 = NULL;
        if(match_cons(t, sym__2))
          {
            l_57 = ATgetArgument(t, 0);
            m_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_57;
        {
          ATerm s_11 (ATerm t)
          {
            t = m_57;
            return(t);
          }
          t = at_end_1_0(s_11, t);
        }
        ;
        LocalPopChoice(q_38);
      }
    else
      {
        t = n_38;
        {
          ATerm u_12 = NULL,v_12 = NULL;
          u_12 = t;
          t = SSL_explode_term(u_12);
          if(match_cons(t, sym__2))
            {
              ATerm r_38 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) r_38) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              v_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_12;
          t = concat_0_0(t);
        }
      }
    h_57 = t;
    t = SSL_implode_string(h_57);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm s_38 = t;
  int t_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_57 = NULL;
      w_57 = t;
      t = SSL_is_string(w_57);
      ;
      LocalPopChoice(t_38);
    }
  else
    {
      t = s_38;
      {
        ATerm u_38 = t;
        int v_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_11 (ATerm t)
            {
              ATerm y_38 = t;
              int a_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(a_39);
                }
              else
                {
                  t = y_38;
                }
              return(t);
            }
            t = map_1_0(v_11, t);
            ;
            LocalPopChoice(v_38);
          }
        else
          {
            t = u_38;
            {
              ATerm a_58 = NULL,b_58 = NULL,c_58 = NULL;
              a_58 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_58 = ATgetArgument(t, 0);
                  t = b_58;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_58 = ATgetArgument(t, 0);
                      t = b_58;
                      {
                        ATerm b_39 = t;
                        int c_39 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), b_58);
                            {
                              ATerm d_39 = t;
                              int e_39 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm m_13 = NULL;
                                  t = eval_config_0_0(t);
                                  m_13 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), b_58, m_13);
                                  t = m_13;
                                  ;
                                  LocalPopChoice(e_39);
                                }
                              else
                                {
                                  t = d_39;
                                }
                            }
                            ;
                            LocalPopChoice(c_39);
                          }
                        else
                          {
                            t = b_39;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_58), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = b_58;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_58 = NULL,i_58 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_58 = ATgetArgument(t, 0);
                          c_58 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_58;
                      t = eval_config_0_0(t);
                      g_58 = t;
                      t = c_58;
                      t = eval_config_0_0(t);
                      i_58 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_58, i_58);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_129 (ATerm), ATerm t)
{
  ATerm f_39 = t;
  int g_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_58 = NULL,q_58 = NULL;
      o_58 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm h_39 = t;
        int i_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_13 = NULL;
            t = eval_config_0_0(t);
            u_13 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), u_13);
            t = u_13;
            ;
            LocalPopChoice(i_39);
          }
        else
          {
            t = h_39;
          }
        q_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_58, term_j_39);
        t = geq_0_0(t);
        t = o_58;
        t = o_129(t);
      }
      ;
      LocalPopChoice(g_39);
    }
  else
    {
      t = f_39;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm w_11 (ATerm t)
  {
    ATerm s_58 = NULL;
    s_58 = t;
    if(match_string(t, "-k"))
      {
        t = s_58;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = s_58;
      }
    return(t);
  }
  ATerm y_11 (ATerm t)
  {
    ATerm t_58 = NULL,u_58 = NULL;
    t_58 = t;
    t = SSL_string_to_int(t_58);
    u_58 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), u_58);
    t = t_58;
    return(t);
  }
  ATerm a_12 (ATerm t)
  {
    t = term_l_39;
    return(t);
  }
  t = ArgOption_3_0(w_11, y_11, a_12, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_39 = t;
  int o_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_12 (ATerm t)
      {
        ATerm w_58 = NULL;
        w_58 = t;
        if(match_string(t, "-S"))
          {
            t = w_58;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = w_58;
          }
        return(t);
      }
      ATerm c_12 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_p_39;
        return(t);
      }
      ATerm d_12 (ATerm t)
      {
        t = term_q_39;
        return(t);
      }
      t = Option_3_0(b_12, c_12, d_12, t);
      ;
      LocalPopChoice(o_39);
    }
  else
    {
      t = n_39;
      {
        ATerm r_39 = t;
        int s_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_12 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm f_12 (ATerm t)
            {
              ATerm x_58 = NULL,y_58 = NULL;
              x_58 = t;
              t = SSL_string_to_int(x_58);
              y_58 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), y_58);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, x_58);
              return(t);
            }
            ATerm g_12 (ATerm t)
            {
              t = term_t_39;
              return(t);
            }
            t = ArgOption_3_0(e_12, f_12, g_12, t);
            ;
            LocalPopChoice(s_39);
          }
        else
          {
            t = r_39;
            {
              ATerm h_12 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm i_12 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_u_39;
                return(t);
              }
              ATerm l_12 (ATerm t)
              {
                t = term_v_39;
                return(t);
              }
              t = Option_3_0(h_12, i_12, l_12, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_59 = NULL;
      t = term_b_13;
      t = d_0(t);
      d_59 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_39, term_a_40, d_59);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm g_59 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_59 = ATgetFirst((ATermList) t);
          c_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_59;
      t = a_0(t);
      t = term_b_13;
      t = b_0(t);
      g_59 = t;
      t = (ATerm) ATinsert(CheckATermList(c_59), g_59);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm m_12 (ATerm t)
  {
    ATerm i_59 = NULL;
    i_59 = t;
    if(match_string(t, "-o"))
      {
        t = i_59;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = i_59;
      }
    return(t);
  }
  ATerm n_12 (ATerm t)
  {
    ATerm j_59 = NULL;
    j_59 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), j_59);
    t = (ATerm) ATmakeAppl(sym_Output_1, j_59);
    return(t);
  }
  ATerm p_12 (ATerm t)
  {
    t = term_b_40;
    return(t);
  }
  t = ArgOption_3_0(m_12, n_12, p_12, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL;
  if(match_cons(t, sym__3))
    {
      o_59 = ATgetArgument(t, 0);
      p_59 = ATgetArgument(t, 1);
      q_59 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_59, p_59);
  {
    ATerm c_40 = t;
    int d_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_40 = ATgetArgument(t, 0);
            ATerm f_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(o_59, p_59);
        ;
        LocalPopChoice(d_40);
      }
    else
      {
        t = c_40;
        t = (ATerm) ATempty;
      }
    r_59 = t;
    t = SSL_table_put(o_59, p_59, (ATerm) ATinsert(CheckATermList(r_59), q_59));
    t = (ATerm) ATmakeAppl(sym__3, o_59, p_59, q_59);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_60 = NULL;
      t = term_b_13;
      t = m_0(t);
      d_60 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_39, term_a_40, d_60);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm h_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_59 = ATgetFirst((ATermList) t);
          a_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_60;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_60 = ATgetFirst((ATermList) t);
          c_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_59;
      t = i_0(t);
      t = b_60;
      t = k_0(t);
      h_60 = t;
      t = (ATerm) ATinsert(CheckATermList(c_60), h_60);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm q_12 (ATerm t)
  {
    ATerm j_60 = NULL;
    j_60 = t;
    if(match_string(t, "-i"))
      {
        t = j_60;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = j_60;
      }
    return(t);
  }
  ATerm r_12 (ATerm t)
  {
    ATerm k_60 = NULL;
    k_60 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), k_60);
    t = (ATerm) ATmakeAppl(sym_Input_1, k_60);
    return(t);
  }
  ATerm s_12 (ATerm t)
  {
    t = term_g_40;
    return(t);
  }
  t = ArgOption_3_0(q_12, r_12, s_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_60 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_13;
  t = whoami_0_0(t);
  l_60 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), l_60));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm h_40 = t;
    int i_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_13 = NULL;
        t = eval_config_0_0(t);
        y_13 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), y_13);
        t = y_13;
        ;
        LocalPopChoice(i_40);
      }
    else
      {
        t = h_40;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm e_123 (ATerm), ATerm f_123 (ATerm), ATerm t)
{
  ATerm j_40 = t;
  int k_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_123(t);
      ;
      LocalPopChoice(k_40);
    }
  else
    {
      t = j_40;
      {
        ATerm p_60 = NULL,q_60 = NULL,t_60 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_60 = ATgetFirst((ATermList) t);
            q_60 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_60;
        t = foldr_2_0(e_123, f_123, t);
        t_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_60, t_60);
        t = f_123(t);
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
  ATerm w_60 = NULL,z_13 = NULL,a_14 = NULL;
  t = times_0_0(t);
  z_13 = t;
  t = SSL_explode_term(z_13);
  if(match_cons(t, sym__2))
    {
      ATerm l_40 = ATgetArgument(t, 0);
      a_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_14;
  {
    ATerm t_12 (ATerm t)
    {
      t = term_q_17;
      return(t);
    }
    ATerm w_12 (ATerm t)
    {
      ATerm e_14 = NULL,f_14 = NULL;
      if(match_cons(t, sym__2))
        {
          e_14 = ATgetArgument(t, 0);
          f_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm m_40 = t;
        int n_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(e_14, f_14);
            ;
            LocalPopChoice(n_40);
          }
        else
          {
            t = m_40;
            t = SSL_addr(e_14, f_14);
          }
      }
      return(t);
    }
    t = foldr_2_0(t_12, w_12, t);
    w_60 = t;
    t = SSL_TicksToSeconds(w_60);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_61 = NULL,i_61 = NULL,j_61 = NULL;
  h_61 = t;
  if(match_cons(t, sym__2))
    {
      i_61 = ATgetArgument(t, 0);
      j_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_40 = t;
    int p_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_61;
        if((i_61 != t))
          {
            _fail(t);
          }
        t = h_61;
        ;
        LocalPopChoice(p_40);
      }
    else
      {
        t = o_40;
        t = h_61;
        {
          ATerm q_40 = t;
          int t_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_61, j_61);
              ;
              LocalPopChoice(t_40);
            }
          else
            {
              t = q_40;
              t = SSL_gtr(i_61, j_61);
            }
          t = (ATerm) ATmakeAppl(sym__2, i_61, j_61);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_129 (ATerm), ATerm t)
{
  ATerm u_40 = t;
  int v_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_61 = NULL,o_61 = NULL;
      m_61 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm w_40 = t;
        int x_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_14 = NULL;
            t = eval_config_0_0(t);
            q_14 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), q_14);
            t = q_14;
            ;
            LocalPopChoice(x_40);
          }
        else
          {
            t = w_40;
          }
        o_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_61, term_t_17);
        t = geq_0_0(t);
        t = m_61;
        t = n_129(t);
      }
      ;
      LocalPopChoice(v_40);
    }
  else
    {
      t = u_40;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm x_12 (ATerm t)
  {
    ATerm q_61 = NULL,r_61 = NULL;
    t = run_time_0_0(t);
    q_61 = t;
    t = term_b_13;
    t = whoami_0_0(t);
    r_61 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), q_61), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), r_61));
    t = (ATerm) ATmakeAppl(sym__2, term_z_40, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_41), q_61), term_a_41), r_61));
    return(t);
  }
  t = if_verbose1_1_0(x_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm k_132 (ATerm), ATerm t)
{
  ATerm c_41 = t;
  int d_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm e_41 = t;
        int f_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_14 = NULL;
            t = eval_config_0_0(t);
            v_14 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), v_14);
            t = v_14;
            ;
            LocalPopChoice(f_41);
          }
        else
          {
            t = e_41;
          }
      }
      ;
      LocalPopChoice(d_41);
    }
  else
    {
      t = c_41;
      {
        ATerm y_12 (ATerm t)
        {
          ATerm g_41 = t;
          int h_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(h_41);
            }
          else
            {
              t = g_41;
              {
                ATerm i_41 = t;
                int m_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(m_41);
                  }
                else
                  {
                    t = i_41;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(y_12, t);
      }
    }
  t = k_132(t);
  return(t);
}
ATerm map_1_0 (ATerm u_105 (ATerm), ATerm t)
{
  ATerm s_61 (ATerm t)
  {
    ATerm n_41 = t;
    int a_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(a_42);
      }
    else
      {
        t = n_41;
        t = Cons_2_0(u_105, s_61, t);
      }
    return(t);
  }
  t = s_61(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm u_61 = NULL,v_61 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_61 = ATgetFirst((ATermList) t);
      v_61 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_61 = NULL,a_62 = NULL;
        t = v_61;
        t = g_0(t);
        z_61 = t;
        t = u_61;
        t = f_0(t);
        a_62 = t;
        t = v_61;
        {
          ATerm z_12 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(z_61), a_62);
            return(t);
          }
          t = reverse_acc_2_0(f_0, z_12, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_13;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm m_100 (ATerm), ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL;
  e_62 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_62);
  b_62 = t;
  t = c_62;
  t = m_100(t);
  d_62 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, d_62), b_62);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_42 = t;
  int c_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm d_42 = t;
        int e_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_14 = NULL;
            t = eval_config_0_0(t);
            z_14 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_14);
            t = z_14;
            ;
            LocalPopChoice(e_42);
          }
        else
          {
            t = d_42;
          }
      }
      ;
      LocalPopChoice(c_42);
    }
  else
    {
      t = b_42;
      {
        ATerm a_13 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(a_13, t);
      }
    }
  t = term_f_42;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm c_13 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, c_13, t);
    {
      ATerm d_13 (ATerm t)
      {
        ATerm h_62 = NULL;
        h_62 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, h_62), term_g_42);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(d_13, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm n_100 (ATerm), ATerm t)
{
  ATerm i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL;
  l_62 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      j_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_62);
  i_62 = t;
  t = j_62;
  t = n_100(t);
  k_62 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, k_62), i_62);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_62 = NULL,q_62 = NULL;
  p_62 = t;
  {
    ATerm h_42 = t;
    int i_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_62;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_42 = ATgetFirst((ATermList) t);
                ATerm k_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_62;
          }
        ;
        LocalPopChoice(i_42);
      }
    else
      {
        t = h_42;
        t = (ATerm) ATinsert(ATempty, p_62);
      }
    q_62 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), q_62);
    t = p_62;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm l_42 = t;
    int m_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_15 = NULL;
        t = eval_config_0_0(t);
        d_15 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_15);
        t = d_15;
        ;
        LocalPopChoice(m_42);
      }
    else
      {
        t = l_42;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_42 = t;
  int o_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_13 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm f_13 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_r_42;
        return(t);
      }
      ATerm g_13 (ATerm t)
      {
        t = term_s_42;
        return(t);
      }
      t = Option_3_0(e_13, f_13, g_13, t);
      ;
      LocalPopChoice(o_42);
    }
  else
    {
      t = n_42;
      {
        ATerm h_13 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm i_13 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_t_42;
          return(t);
        }
        ATerm j_13 (ATerm t)
        {
          t = term_u_42;
          return(t);
        }
        t = Option_3_0(h_13, i_13, j_13, t);
      }
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_134 (ATerm), ATerm t)
{
  ATerm v_62 = NULL;
  v_62 = t;
  {
    ATerm v_42 = t;
    int w_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_42;
        t = n_134(t);
        ;
        LocalPopChoice(w_42);
      }
    else
      {
        t = v_42;
      }
    t = v_62;
    {
      ATerm k_13 (ATerm t)
      {
        ATerm w_62 = NULL;
        w_62 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_62);
        t = (ATerm) ATmakeAppl(sym_Program_1, w_62);
        return(t);
      }
      ATerm l_13 (ATerm t)
      {
        ATerm z_42 = t;
        int a_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_43 = t;
            int c_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(c_43);
              }
            else
              {
                t = b_43;
                t = n_134(t);
                t = Cons_2_0(_id, l_13, t);
              }
            ;
            LocalPopChoice(a_43);
          }
        else
          {
            t = z_42;
            {
              ATerm y_62 = NULL,z_62 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_62 = ATgetFirst((ATermList) t);
                  z_62 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(z_62), (ATerm) ATmakeAppl(sym_Undefined_1, y_62));
            }
          }
        return(t);
      }
      t = Cons_2_0(k_13, l_13, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm m_134 (ATerm), ATerm t)
{
  ATerm g_63 = NULL,h_63 = NULL,i_63 = NULL;
  g_63 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = g_63;
  {
    ATerm n_13 (ATerm t)
    {
      ATerm d_43 = t;
      int e_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_134(t);
          ;
          LocalPopChoice(e_43);
        }
      else
        {
          t = d_43;
          {
            ATerm g_43 = t;
            int j_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_13 (ATerm t)
                {
                  ATerm j_63 = NULL;
                  j_63 = t;
                  if(match_string(t, "--help"))
                    {
                      t = j_63;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = j_63;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = j_63;
                        }
                    }
                  return(t);
                }
                ATerm p_13 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_k_43;
                  return(t);
                }
                ATerm q_13 (ATerm t)
                {
                  t = term_l_43;
                  return(t);
                }
                t = Option_3_0(o_13, p_13, q_13, t);
                ;
                LocalPopChoice(j_43);
              }
            else
              {
                t = g_43;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_13, t);
    {
      ATerm m_43 = t;
      int n_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_63 = NULL;
          o_63 = t;
          {
            ATerm o_43 = t;
            int p_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = o_63;
                {
                  ATerm q_43 = t;
                  int s_43 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm t_43 = t;
                        int u_43 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm p_16 = NULL;
                            t = eval_config_0_0(t);
                            p_16 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), p_16);
                            t = p_16;
                            ;
                            LocalPopChoice(u_43);
                          }
                        else
                          {
                            t = t_43;
                          }
                      }
                      ;
                      LocalPopChoice(s_43);
                    }
                  else
                    {
                      t = q_43;
                      {
                        ATerm r_13 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(r_13, t);
                      }
                    }
                  t = o_63;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(p_43);
              }
            else
              {
                t = o_43;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm v_43 = t;
                  int w_43 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_16 = NULL;
                      t = eval_config_0_0(t);
                      v_16 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), v_16);
                      t = v_16;
                      ;
                      LocalPopChoice(w_43);
                    }
                  else
                    {
                      t = v_43;
                    }
                  t = o_63;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(n_43);
        }
      else
        {
          t = m_43;
          {
            ATerm x_43 = t;
            int y_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_13 (ATerm t)
                {
                  ATerm t_13 (ATerm t)
                  {
                    if(((h_63 != NULL) && (h_63 != t)))
                      _fail(t);
                    else
                      h_63 = t;
                    return(t);
                  }
                  t = Undefined_1_0(t_13, t);
                  return(t);
                }
                t = fetch_1_0(s_13, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(h_63)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_z_40, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_63)), term_z_43));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(y_43);
              }
            else
              {
                t = x_43;
              }
          }
        }
      i_63 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = i_63;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_132 (ATerm), ATerm n_132 (ATerm), ATerm o_132 (ATerm), ATerm p_132 (ATerm), ATerm t)
{
  ATerm r_63 = NULL;
  t = parse_options_1_0(m_132, t);
  r_63 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), r_63);
  t = r_63;
  t = o_132(t);
  {
    ATerm a_44 = t;
    int c_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_132, t);
        ;
        LocalPopChoice(c_44);
      }
    else
      {
        t = a_44;
        {
          ATerm d_44 = t;
          int e_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_132(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(e_44);
            }
          else
            {
              t = d_44;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm v_131 (ATerm), ATerm w_131 (ATerm), ATerm x_131 (ATerm), ATerm t)
{
  ATerm v_13 (ATerm t)
  {
    ATerm f_44 = t;
    int g_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_131(t);
        ;
        LocalPopChoice(g_44);
      }
    else
      {
        t = f_44;
        {
          ATerm h_44 = t;
          int i_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(i_44);
            }
          else
            {
              t = h_44;
              {
                ATerm j_44 = t;
                int k_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(k_44);
                  }
                else
                  {
                    t = j_44;
                    {
                      ATerm l_44 = t;
                      int m_44 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_14 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm c_14 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_n_44;
                            return(t);
                          }
                          ATerm d_14 (ATerm t)
                          {
                            t = term_o_44;
                            return(t);
                          }
                          t = Option_3_0(b_14, c_14, d_14, t);
                          ;
                          LocalPopChoice(m_44);
                        }
                      else
                        {
                          t = l_44;
                          {
                            ATerm p_44 = t;
                            int q_44 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(q_44);
                              }
                            else
                              {
                                t = p_44;
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
  ATerm w_13 (ATerm t)
  {
    ATerm g_14 (ATerm t)
    {
      ATerm s_63 = NULL,t_63 = NULL;
      s_63 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm r_44 = t;
        int s_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_17 = NULL;
            t = eval_config_0_0(t);
            e_17 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_17);
            t = e_17;
            ;
            LocalPopChoice(s_44);
          }
        else
          {
            t = r_44;
          }
        t_63 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, t_63));
        t = s_63;
      }
      return(t);
    }
    t = if_verbose2_1_0(g_14, t);
    return(t);
  }
  ATerm x_13 (ATerm t)
  {
    ATerm u_63 = NULL,v_63 = NULL,k_17 = NULL;
    u_63 = t;
    {
      ATerm t_44 = t;
      int u_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_14 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((v_63 != NULL) && (v_63 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  v_63 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(h_14, t);
          ;
          LocalPopChoice(u_44);
        }
      else
        {
          t = t_44;
          t = term_v_44;
          v_63 = t;
        }
      t = not_null(v_63);
      t = ReadFromFile_0_0(t);
      k_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_63, k_17);
      t = apply_strategy_1_0(v_131, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(v_13, x_131, w_13, x_13, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm i_14 (ATerm t)
  {
    ATerm j_14 (ATerm t)
    {
      ATerm k_14 (ATerm t)
      {
        ATerm l_14 (ATerm t)
        {
          ATerm m_14 (ATerm t)
          {
            t = Strategies_1_0(all_defs_0_0, t);
            return(t);
          }
          ATerm n_14 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = Cons_2_0(m_14, n_14, t);
          return(t);
        }
        t = Cons_2_0(_id, l_14, t);
        return(t);
      }
      t = Specification_1_0(k_14, t);
      return(t);
    }
    t = _2_0(_id, j_14, t);
    return(t);
  }
  t = iowrap_3_0(i_14, _fail, default_usage_0_0, t);
  return(t);
}
