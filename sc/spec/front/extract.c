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
ATerm term_t_41;
ATerm term_u_40;
ATerm term_q_40;
ATerm term_n_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_x_39;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_u_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_z_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_n_34;
ATerm term_l_33;
ATerm term_g_33;
ATerm term_d_33;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_b_32;
ATerm term_w_31;
ATerm term_n_30;
ATerm term_j_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_i_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_q_28;
ATerm term_s_27;
ATerm term_o_27;
ATerm term_j_23;
ATerm term_e_23;
ATerm term_b_23;
ATerm term_j_21;
ATerm term_n_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_16;
ATerm term_u_15;
ATerm term_r_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_c_14;
ATerm term_z_11;
ATerm term_o_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_m_10;
void init_constant_terms (void)
{
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("z_1", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w_1", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Op_2, term_h_17, (ATerm) ATempty);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_ConstType_1, term_i_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym__2, term_q_28, term_q_28);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym__2, term_a_29, term_b_29);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_28);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym__3, term_x_39, term_a_40, term_b_23);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm ConstructorNeeded_0_0 (ATerm);
ATerm filter_1_0 (ATerm v_117 (ATerm), ATerm);
ATerm Constructors_1_0 (ATerm p_90 (ATerm), ATerm);
ATerm Signature_1_0 (ATerm t_89 (ATerm), ATerm);
ATerm DeclareConstructorNeeded_0_0 (ATerm);
ATerm needed_constructors_0_0 (ATerm);
ATerm MissingDef_0_0 (ATerm);
ATerm MissingDefMod_0_0 (ATerm);
ATerm MissingDefs_0_0 (ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm giving_up_0_0 (ATerm);
ATerm DefinitionExists_0_0 (ATerm);
ATerm Rec_2_0 (ATerm x_94 (ATerm), ATerm y_94 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm);
ATerm Let_2_0 (ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm);
ATerm Bind7_0_0 (ATerm);
ATerm Bind5_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind2_0_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm crush_3_0 (ATerm g_114 (ATerm), ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm);
ATerm free_vars2_4_0 (ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm e_120 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm f_120 (ATerm), ATerm);
ATerm svars_arity_0_0 (ATerm);
ATerm choices_0_0 (ATerm);
ATerm tsubs_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm SubsVar_2_0 (ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm);
ATerm alltd_1_0 (ATerm j_107 (ATerm), ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm);
ATerm substitute_1_0 (ATerm c_105 (ATerm), ATerm);
ATerm ssubs_0_0 (ATerm);
ATerm VarDec_2_0 (ATerm l_96 (ATerm), ATerm m_96 (ATerm), ATerm);
ATerm JoinDefs2_0_0 (ATerm);
ATerm joindefs_0_0 (ATerm);
ATerm OverloadedDef_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm Mapp0_0_0 (ATerm);
ATerm Mapp_0_0 (ATerm);
ATerm Bapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm h_91 (ATerm), ATerm i_91 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm g_95 (ATerm), ATerm h_95 (ATerm), ATerm i_95 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm a_91 (ATerm), ATerm b_91 (ATerm), ATerm);
ATerm Op_2_0 (ATerm w_90 (ATerm), ATerm x_90 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm t_134 (ATerm), ATerm);
ATerm Bapp0_0_0 (ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm unzip_1_0 (ATerm n_110 (ATerm), ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm Var_1_0 (ATerm q_90 (ATerm), ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm b_122 (ATerm), ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm e_91 (ATerm), ATerm f_91 (ATerm), ATerm);
ATerm Con_3_0 (ATerm q_91 (ATerm), ATerm r_91 (ATerm), ATerm s_91 (ATerm), ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Scope_2_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm v_106 (ATerm), ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm r_105 (ATerm), ATerm);
ATerm desugar_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm Thd_0_0 (ATerm);
ATerm tuple_unzip_1_0 (ATerm t_109 (ATerm), ATerm);
ATerm MkDistApplication_0_0 (ATerm);
ATerm copy_1_0 (ATerm v_116 (ATerm), ATerm);
ATerm MkThreadApplication_0_0 (ATerm);
ATerm zipr_1_0 (ATerm l_110 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm DefineCongruence_0_0 (ATerm);
ATerm CongruenceDef_0_0 (ATerm);
ATerm get_definition_0_0 (ATerm);
ATerm diff_1_0 (ATerm p_113 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm);
ATerm zip_1_0 (ATerm i_110 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNextChangeGraph_3_0 (ATerm p_134 (ATerm), ATerm q_134 (ATerm), ATerm r_134 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm q_122 (ATerm), ATerm r_122 (ATerm), ATerm);
ATerm for_3_0 (ATerm t_122 (ATerm), ATerm u_122 (ATerm), ATerm v_122 (ATerm), ATerm);
ATerm graph_nodes_undef_roots_chgr_3_0 (ATerm a_134 (ATerm), ATerm b_134 (ATerm), ATerm c_134 (ATerm), ATerm);
ATerm extract_needed_defs_0_0 (ATerm);
ATerm assert_1_0 (ATerm r_117 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm x_113 (ATerm), ATerm y_113 (ATerm), ATerm);
ATerm union_1_0 (ATerm t_113 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm Arities_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm t_117 (ATerm), ATerm);
ATerm Definitions_0_0 (ATerm);
ATerm foldr_3_0 (ATerm i_116 (ATerm), ATerm j_116 (ATerm), ATerm k_116 (ATerm), ATerm);
ATerm length_0_0 (ATerm);
ATerm RegisterSDefT_0_0 (ATerm);
ATerm sort_defs_0_0 (ATerm);
ATerm needed_defs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm s_89 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm x_89 (ATerm), ATerm);
ATerm _2_0 (ATerm f_88 (ATerm), ATerm g_88 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm i_112 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm k_128 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm g_127 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm i_130 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm s_126 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm g_116 (ATerm), ATerm h_116 (ATerm), ATerm);
ATerm crush_2_0 (ATerm e_114 (ATerm), ATerm f_114 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm j_128 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm g_131 (ATerm), ATerm);
ATerm map_1_0 (ATerm s_111 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm g_102 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm h_102 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm c_112 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm g_132 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm j_108 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm l_133 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm j_133 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm i_133 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm i_131 (ATerm), ATerm j_131 (ATerm), ATerm k_131 (ATerm), ATerm l_131 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm x_130 (ATerm), ATerm y_130 (ATerm), ATerm z_130 (ATerm), ATerm a_131 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm r_130 (ATerm), ATerm s_130 (ATerm), ATerm t_130 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm p_130 (ATerm), ATerm q_130 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm m_130 (ATerm), ATerm);
ATerm extract_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm ConstructorNeeded_0_0 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL;
  c_3 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      d_3 = ATgetArgument(t, 0);
      e_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, d_3, (ATerm) ATempty);
        {
          ATerm c_0 (ATerm t)
          {
            t = term_m_10;
            return(t);
          }
          t = rewrite_1_0(c_0, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm n_10 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) n_10) != ATmakeSymbol("z_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, d_3, e_3);
        }
        ;
        LocalPopChoice(l_10);
      }
    else
      {
        t = k_10;
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, d_3, (ATerm) ATempty);
        {
          ATerm e_0 (ATerm t)
          {
            t = term_m_10;
            return(t);
          }
          t = rewrite_1_0(e_0, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm o_10 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) o_10) != ATmakeSymbol("w_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, d_3, e_3);
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm v_117 (ATerm), ATerm t)
{
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(q_10);
    }
  else
    {
      t = p_10;
      {
        ATerm r_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_0 (ATerm t)
            {
              t = filter_1_0(v_117, t);
              return(t);
            }
            t = Cons_2_0(v_117, h_0, t);
            ;
            LocalPopChoice(s_10);
          }
        else
          {
            t = r_10;
            {
              ATerm k_3 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm t_10 = ATgetFirst((ATermList) t);
                  k_3 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = k_3;
              t = filter_1_0(v_117, t);
            }
          }
      }
    }
  return(t);
}
ATerm Constructors_1_0 (ATerm p_90 (ATerm), ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL;
  p_3 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      n_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_3);
  m_3 = t;
  t = n_3;
  t = p_90(t);
  o_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Constructors_1, o_3), m_3);
  return(t);
}
ATerm Signature_1_0 (ATerm t_89 (ATerm), ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL,w_3 = NULL,y_3 = NULL;
  y_3 = t;
  if(match_cons(t, sym_Signature_1))
    {
      v_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_3);
  u_3 = t;
  t = v_3;
  t = t_89(t);
  w_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, w_3), u_3);
  return(t);
}
ATerm DeclareConstructorNeeded_0_0 (ATerm t)
{
  ATerm g_4 = NULL,j_4 = NULL;
  g_4 = t;
  {
    ATerm u_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Cong_2))
          {
            j_4 = ATgetArgument(t, 0);
            {
              ATerm w_10 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(v_10);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, j_4, (ATerm) ATempty), term_y_10);
        {
          ATerm p_0 (ATerm t)
          {
            t = term_m_10;
            return(t);
          }
          t = assert_1_0(p_0, t);
          t = g_4;
        }
      }
    else
      {
        t = u_10;
        if(match_cons(t, sym_Op_2))
          {
            j_4 = ATgetArgument(t, 0);
            {
              ATerm z_10 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, j_4, (ATerm) ATempty), term_b_11);
        {
          ATerm q_0 (ATerm t)
          {
            t = term_m_10;
            return(t);
          }
          t = assert_1_0(q_0, t);
          t = g_4;
        }
      }
  }
  return(t);
}
ATerm needed_constructors_0_0 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,h_5 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm c_11 = ATgetArgument(t, 0);
      if(((ATgetType(c_11) == AT_LIST) && !(ATisEmpty(c_11))))
        {
          e_5 = ATgetFirst((ATermList) c_11);
          {
            ATerm d_11 = (ATerm) ATgetNext((ATermList) c_11);
            if(((ATgetType(d_11) == AT_LIST) && !(ATisEmpty(d_11))))
              {
                ATerm e_11 = ATgetFirst((ATermList) d_11);
                if(match_cons(e_11, sym_Strategies_1))
                  {
                    f_5 = ATgetArgument(e_11, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm f_11 = (ATerm) ATgetNext((ATermList) d_11);
                  if(((ATgetType(f_11) != AT_LIST) || !(ATisEmpty(f_11))))
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
  t = f_5;
  {
    ATerm s_0 (ATerm t)
    {
      t = try_1_0(DeclareConstructorNeeded_0_0, t);
      return(t);
    }
    t = topdown_1_0(s_0, t);
    t = e_5;
    {
      ATerm t_0 (ATerm t)
      {
        ATerm u_0 (ATerm t)
        {
          ATerm w_0 (ATerm t)
          {
            t = filter_1_0(ConstructorNeeded_0_0, t);
            return(t);
          }
          t = Constructors_1_0(w_0, t);
          return(t);
        }
        ATerm v_0 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(u_0, v_0, t);
        return(t);
      }
      t = Signature_1_0(t_0, t);
      h_5 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, f_5)), h_5));
    }
  }
  return(t);
}
ATerm MissingDef_0_0 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL;
  if(match_cons(t, sym__2))
    {
      i_5 = ATgetArgument(t, 0);
      j_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue))), j_5), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), i_5), (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue))));
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_11), j_5), term_h_11), i_5), term_g_11);
  return(t);
}
ATerm MissingDefMod_0_0 (ATerm t)
{
  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_11 = ATgetArgument(t, 0);
      if(match_cons(j_11, sym_Mod_2))
        {
          l_5 = ATgetArgument(j_11, 0);
          m_5 = ATgetArgument(j_11, 1);
        }
      else
        _fail(t);
      n_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue))), n_5), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), m_5), (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue))), l_5), (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue))));
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_11), n_5), term_h_11), m_5), term_k_11), l_5), term_g_11);
  return(t);
}
ATerm MissingDefs_0_0 (ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL,r_5 = NULL;
  if(match_cons(t, sym__2))
    {
      o_5 = ATgetArgument(t, 0);
      {
        ATerm l_11 = ATgetArgument(t, 1);
        if(((ATgetType(l_11) == AT_LIST) && !(ATisEmpty(l_11))))
          {
            p_5 = ATgetFirst((ATermList) l_11);
            r_5 = (ATerm) ATgetNext((ATermList) l_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_5), p_5);
  {
    ATerm x_0 (ATerm t)
    {
      ATerm m_11 = t;
      int n_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MissingDefMod_0_0(t);
          ;
          LocalPopChoice(n_11);
        }
      else
        {
          t = m_11;
          t = MissingDef_0_0(t);
        }
      return(t);
    }
    t = map_1_0(x_0, t);
    t = o_5;
  }
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm s_5 = NULL;
  s_5 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), s_5);
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = s_5;
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_o_11);
  t = fatal_error_0_0(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL,s_6 = NULL,t_6 = NULL;
  n_6 = t;
  if(match_cons(t, sym__2))
    {
      o_6 = ATgetArgument(t, 0);
      p_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6;
  if(match_cons(t, sym__2))
    {
      s_6 = ATgetArgument(t, 0);
      t_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = t_6;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm p_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_6;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_11 = ATgetFirst((ATermList) t);
            ATerm s_11 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(s_11) == AT_LIST) && !(ATisEmpty(s_11))))
              {
                ATerm t_11 = ATgetFirst((ATermList) s_11);
                ATerm v_11 = (ATerm) ATgetNext((ATermList) s_11);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm w_11 = t;
          if((PushChoice() == 0))
            {
              ATerm y_0 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    ATerm x_11 = ATgetArgument(t, 0);
                    if(((ATgetType(x_11) != AT_INT) || (ATgetInt((ATermInt) x_11) != 0)))
                      _fail(t);
                    {
                      ATerm y_11 = ATgetArgument(t, 1);
                      if(((ATgetType(y_11) != AT_INT) || (ATgetInt((ATermInt) y_11) != 0)))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(y_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_11;
            }
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_6), (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue))));
          t = (ATerm) ATinsert(ATinsert(ATempty, o_6), term_z_11);
          t = giving_up_0_0(t);
        }
        ;
        LocalPopChoice(q_11);
      }
    else
      {
        t = p_11;
        {
          ATerm n_1 = NULL,o_1 = NULL;
          t = o_6;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm a_12 = ATgetFirst((ATermList) t);
              if(match_cons(a_12, sym__2))
                {
                  n_1 = ATgetArgument(a_12, 0);
                  o_1 = ATgetArgument(a_12, 1);
                }
              else
                _fail(t);
              {
                ATerm b_12 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(b_12) != AT_LIST) || !(ATisEmpty(b_12))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, o_6, (ATerm) ATmakeAppl(sym__2, n_1, o_1));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, o_6, (ATerm) ATmakeAppl(sym__2, n_1, o_1));
        }
      }
  }
  return(t);
}
ATerm Rec_2_0 (ATerm x_94 (ATerm), ATerm y_94 (ATerm), ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL,l_7 = NULL,p_9 = NULL,q_9 = NULL;
  q_9 = t;
  if(match_cons(t, sym_Rec_2))
    {
      h_7 = ATgetArgument(t, 0);
      i_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_9);
  g_7 = t;
  t = h_7;
  t = x_94(t);
  l_7 = t;
  t = i_7;
  t = y_94(t);
  p_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, l_7, p_9), g_7);
  return(t);
}
ATerm SDefT_4_0 (ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,m_12 = NULL,p_12 = NULL,q_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,d_13 = NULL,e_13 = NULL;
  e_13 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      m_12 = ATgetArgument(t, 0);
      p_12 = ATgetArgument(t, 1);
      q_12 = ATgetArgument(t, 2);
      v_12 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_13);
  u_11 = t;
  t = m_12;
  t = s_96(t);
  w_12 = t;
  t = p_12;
  t = t_96(t);
  x_12 = t;
  t = q_12;
  t = u_96(t);
  y_12 = t;
  t = v_12;
  t = v_96(t);
  d_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, w_12, x_12, y_12, d_13), u_11);
  return(t);
}
ATerm SDef_3_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm t)
{
  ATerm s_13 = NULL,d_14 = NULL,e_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,u_14 = NULL;
  u_14 = t;
  if(match_cons(t, sym_SDef_3))
    {
      d_14 = ATgetArgument(t, 0);
      e_14 = ATgetArgument(t, 1);
      j_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_14);
  s_13 = t;
  t = d_14;
  t = p_96(t);
  k_14 = t;
  t = e_14;
  t = q_96(t);
  l_14 = t;
  t = j_14;
  t = r_96(t);
  m_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, k_14, l_14, m_14), s_13);
  return(t);
}
ATerm Let_2_0 (ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,y_15 = NULL,i_16 = NULL;
  i_16 = t;
  if(match_cons(t, sym_Let_2))
    {
      o_15 = ATgetArgument(t, 0);
      p_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_16);
  k_15 = t;
  t = o_15;
  t = a_94(t);
  q_15 = t;
  t = p_15;
  t = b_94(t);
  y_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, q_15, y_15), k_15);
  return(t);
}
ATerm sboundin_3_0 (ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm t)
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(w_104, w_104, t);
      ;
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(y_104, y_104, w_104, t);
            ;
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            {
              ATerm g_12 = t;
              int h_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(y_104, y_104, y_104, w_104, t);
                  ;
                  LocalPopChoice(h_12);
                }
              else
                {
                  t = g_12;
                  t = Rec_2_0(y_104, w_104, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm t_16 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm i_12 = ATgetArgument(t, 0);
      t_16 = ATgetArgument(t, 1);
      {
        ATerm j_12 = ATgetArgument(t, 2);
      }
      {
        ATerm k_12 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = t_16;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm u_16 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm l_12 = ATgetArgument(t, 0);
      u_16 = ATgetArgument(t, 1);
      {
        ATerm n_12 = ATgetArgument(t, 2);
      }
      {
        ATerm o_12 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = u_16;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm m_17 = NULL;
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_VarDec_2))
          {
            m_17 = ATgetArgument(t, 0);
            {
              ATerm t_12 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(s_12);
        t = m_17;
      }
    else
      {
        t = r_12;
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            m_17 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = m_17;
      }
    return(t);
  }
  t = map_1_0(z_0, t);
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm p_17 = NULL;
  if(match_cons(t, sym_SDef_3))
    {
      ATerm u_12 = ATgetArgument(t, 0);
      p_17 = ATgetArgument(t, 1);
      {
        ATerm z_12 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = p_17;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm r_17 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      r_17 = ATgetArgument(t, 0);
      {
        ATerm a_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = r_17;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm t_17 = NULL;
      ATerm b_13 = t;
      int c_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              t_17 = ATgetArgument(t, 0);
              {
                ATerm f_13 = ATgetArgument(t, 1);
              }
              {
                ATerm g_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(c_13);
          t = t_17;
        }
      else
        {
          t = b_13;
          if(match_cons(t, sym_SDefT_4))
            {
              t_17 = ATgetArgument(t, 0);
              {
                ATerm h_13 = ATgetArgument(t, 1);
              }
              {
                ATerm i_13 = ATgetArgument(t, 2);
              }
              {
                ATerm j_13 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = t_17;
        }
      return(t);
    }
    t = map_1_0(a_1, t);
  }
  return(t);
}
ATerm crush_3_0 (ATerm g_114 (ATerm), ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL;
  z_17 = t;
  t = SSL_explode_term(z_17);
  if(match_cons(t, sym__2))
    {
      ATerm k_13 = ATgetArgument(t, 0);
      a_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_18;
  t = foldr_3_0(g_114, h_114, i_114, t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm e_120 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm f_120 (ATerm), ATerm t)
{
  ATerm e_18 (ATerm t)
  {
    ATerm b_1 (ATerm t)
    {
      ATerm l_13 = t;
      int m_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_120(t);
          ;
          LocalPopChoice(m_13);
        }
      else
        {
          t = l_13;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm c_1 (ATerm t)
    {
      ATerm n_13 = t;
      int o_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_18 = NULL,d_18 = NULL;
          b_18 = t;
          t = d_120(t);
          d_18 = t;
          t = b_18;
          {
            ATerm d_1 (ATerm t)
            {
              ATerm f_1 (ATerm t)
              {
                t = d_18;
                return(t);
              }
              t = split_2_0(e_18, f_1, t);
              t = diff_1_0(f_120, t);
              return(t);
            }
            ATerm e_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = e_120(d_1, e_18, e_1, t);
            {
              ATerm g_1 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3_0(g_1, union_0_0, _id, t);
            }
          }
          ;
          LocalPopChoice(o_13);
        }
      else
        {
          t = n_13;
          {
            ATerm h_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3_0(h_1, union_0_0, e_18, t);
          }
        }
      return(t);
    }
    t = split_2_0(b_1, c_1, t);
    t = union_0_0(t);
    return(t);
  }
  t = e_18(t);
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
    if(match_cons(t, sym_CallT_3))
      {
        ATerm p_13 = ATgetArgument(t, 0);
        if(match_cons(p_13, sym_SVar_1))
          {
            g_18 = ATgetArgument(p_13, 0);
          }
        else
          _fail(t);
        h_18 = ATgetArgument(t, 1);
        i_18 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = h_18;
    t = length_0_0(t);
    j_18 = t;
    t = i_18;
    t = length_0_0(t);
    k_18 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_18, (ATerm) ATmakeAppl(sym__2, j_18, k_18)));
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    ATerm q_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(r_13);
      }
    else
      {
        t = q_13;
        {
          ATerm t_13 = t;
          int u_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0_0(t);
              ;
              LocalPopChoice(u_13);
            }
          else
            {
              t = t_13;
              {
                ATerm v_13 = t;
                int w_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_18 = NULL;
                    if(match_cons(t, sym_Rec_2))
                      {
                        m_18 = ATgetArgument(t, 0);
                        {
                          ATerm x_13 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATempty, m_18);
                    ;
                    LocalPopChoice(w_13);
                  }
                else
                  {
                    t = v_13;
                    {
                      ATerm y_13 = t;
                      int z_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0_0(t);
                          ;
                          LocalPopChoice(z_13);
                        }
                      else
                        {
                          t = y_13;
                          t = Bind7_0_0(t);
                        }
                    }
                  }
              }
            }
        }
      }
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    ATerm p_18 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm a_14 = ATgetArgument(t, 0);
        if(match_cons(a_14, sym__2))
          {
            p_18 = ATgetArgument(a_14, 0);
            {
              ATerm b_14 = ATgetArgument(a_14, 1);
            }
          }
        else
          _fail(t);
        if((p_18 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = free_vars2_4_0(i_1, j_1, sboundin_3_0, k_1, t);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    t = term_c_14;
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    ATerm s_18 = NULL,s_1 = NULL,x_1 = NULL;
    s_18 = t;
    t = SSL_explode_term(s_18);
    if(match_cons(t, sym__2))
      {
        ATerm f_14 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) f_14) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        {
          ATerm g_14 = ATgetArgument(t, 1);
          if(((ATgetType(g_14) == AT_LIST) && !(ATisEmpty(g_14))))
            {
              s_1 = ATgetFirst((ATermList) g_14);
              {
                ATerm h_14 = (ATerm) ATgetNext((ATermList) g_14);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = SSL_explode_term(s_18);
    if(match_cons(t, sym__2))
      {
        ATerm i_14 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) i_14) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        {
          ATerm n_14 = ATgetArgument(t, 1);
          if(((ATgetType(n_14) == AT_LIST) && !(ATisEmpty(n_14))))
            {
              ATerm o_14 = ATgetFirst((ATermList) n_14);
              ATerm p_14 = (ATerm) ATgetNext((ATermList) n_14);
              if(((ATgetType(p_14) == AT_LIST) && !(ATisEmpty(p_14))))
                {
                  x_1 = ATgetFirst((ATermList) p_14);
                  {
                    ATerm q_14 = (ATerm) ATgetNext((ATermList) p_14);
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
    t = (ATerm) ATmakeAppl(sym_Choice_2, s_1, x_1);
    return(t);
  }
  t = foldr_2_0(l_1, m_1, t);
  return(t);
}
ATerm tsubs_0_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm v_18 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        v_18 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = v_18;
    return(t);
  }
  t = substitute_1_0(p_1, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
  if(match_cons(t, sym__2))
    {
      c_19 = ATgetArgument(t, 0);
      d_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_19;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_19 = ATgetFirst((ATermList) t);
      f_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_19;
  if(match_cons(t, sym__2))
    {
      z_18 = ATgetArgument(t, 0);
      a_19 = ATgetArgument(t, 1);
      {
        ATerm r_14 = t;
        int s_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_18;
            if((c_19 != t))
              {
                _fail(t);
              }
            t = a_19;
            ;
            LocalPopChoice(s_14);
          }
        else
          {
            t = r_14;
            t = (ATerm) ATmakeAppl(sym__2, c_19, f_19);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, c_19, f_19);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm SubsVar_2_0 (ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL;
  t = p_105(t);
  q_19 = t;
  t = q_105(t);
  r_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_19, r_19);
  t = lookup_0_0(t);
  return(t);
}
ATerm alltd_1_0 (ATerm j_107 (ATerm), ATerm t)
{
  ATerm s_19 (ATerm t)
  {
    ATerm t_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_107(t);
        ;
        LocalPopChoice(v_14);
      }
    else
      {
        t = t_14;
        t = SRTS_all(s_19, t);
      }
    return(t);
  }
  t = s_19(t);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
  u_19 = t;
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_14 = ATgetArgument(t, 0);
            ATerm z_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(x_14);
        t = u_19;
      }
    else
      {
        t = w_14;
        {
          ATerm b_20 = NULL;
          if(match_cons(t, sym__3))
            {
              v_19 = ATgetArgument(t, 0);
              w_19 = ATgetArgument(t, 1);
              x_19 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, v_19, w_19);
          t = zip_1_0(_id, t);
          b_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_20, x_19);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      d_20 = ATgetArgument(t, 0);
      c_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_20;
  {
    ATerm q_1 (ATerm t)
    {
      ATerm r_1 (ATerm t)
      {
        t = d_20;
        return(t);
      }
      t = SubsVar_2_0(a_105, r_1, t);
      t = b_105(t);
      return(t);
    }
    t = alltd_1_0(q_1, t);
  }
  return(t);
}
ATerm substitute_1_0 (ATerm c_105 (ATerm), ATerm t)
{
  t = substitute_2_0(c_105, _id, t);
  return(t);
}
ATerm ssubs_0_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    ATerm k_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL;
    if(match_cons(t, sym_CallT_3))
      {
        m_20 = ATgetArgument(t, 0);
        o_20 = ATgetArgument(t, 1);
        k_20 = ATgetArgument(t, 2);
        t = m_20;
        if(match_cons(t, sym_SVar_1))
          {
            n_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = o_20;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_20;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_20;
      }
    else
      {
        if(match_cons(t, sym_Call_2))
          {
            m_20 = ATgetArgument(t, 0);
            o_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_20;
        if(match_cons(t, sym_SVar_1))
          {
            n_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = o_20;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_20;
      }
    return(t);
  }
  t = substitute_1_0(t_1, t);
  return(t);
}
ATerm VarDec_2_0 (ATerm l_96 (ATerm), ATerm m_96 (ATerm), ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL;
  w_20 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      s_20 = ATgetArgument(t, 0);
      t_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_20);
  r_20 = t;
  t = s_20;
  t = l_96(t);
  u_20 = t;
  t = t_20;
  t = m_96(t);
  v_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, u_20, v_20), r_20);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,k_21 = NULL;
  a_21 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_15 = ATgetFirst((ATermList) t);
      if(match_cons(a_15, sym_SDefT_4))
        {
          b_21 = ATgetArgument(a_15, 0);
          c_21 = ATgetArgument(a_15, 1);
          d_21 = ATgetArgument(a_15, 2);
          {
            ATerm c_15 = ATgetArgument(a_15, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm b_15 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = c_21;
  {
    ATerm u_1 (ATerm t)
    {
      t = VarDec_2_0(new_0_0, _id, t);
      return(t);
    }
    t = map_1_0(u_1, t);
    f_21 = t;
    t = d_21;
    {
      ATerm v_1 (ATerm t)
      {
        t = VarDec_2_0(new_0_0, _id, t);
        return(t);
      }
      t = map_1_0(v_1, t);
      g_21 = t;
      t = f_21;
      {
        ATerm y_1 (ATerm t)
        {
          ATerm l_21 = NULL;
          if(match_cons(t, sym_VarDec_2))
            {
              l_21 = ATgetArgument(t, 0);
              {
                ATerm d_15 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_21), (ATerm)ATempty, (ATerm) ATempty);
          return(t);
        }
        t = map_1_0(y_1, t);
        h_21 = t;
        t = g_21;
        {
          ATerm a_2 (ATerm t)
          {
            ATerm m_21 = NULL;
            if(match_cons(t, sym_VarDec_2))
              {
                m_21 = ATgetArgument(t, 0);
                {
                  ATerm e_15 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, m_21);
            return(t);
          }
          t = map_1_0(a_2, t);
          i_21 = t;
          t = a_21;
          {
            ATerm b_2 (ATerm t)
            {
              ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  ATerm f_15 = ATgetArgument(t, 0);
                  n_21 = ATgetArgument(t, 1);
                  o_21 = ATgetArgument(t, 2);
                  p_21 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = o_21;
              {
                ATerm c_2 (ATerm t)
                {
                  ATerm u_21 = NULL;
                  if(match_cons(t, sym_VarDec_2))
                    {
                      u_21 = ATgetArgument(t, 0);
                      {
                        ATerm g_15 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = u_21;
                  return(t);
                }
                t = map_1_0(c_2, t);
                r_21 = t;
                t = n_21;
                {
                  ATerm d_2 (ATerm t)
                  {
                    ATerm v_21 = NULL;
                    if(match_cons(t, sym_VarDec_2))
                      {
                        v_21 = ATgetArgument(t, 0);
                        {
                          ATerm h_15 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = v_21;
                    return(t);
                  }
                  t = map_1_0(d_2, t);
                  s_21 = t;
                  t = (ATerm) ATmakeAppl(sym__3, s_21, h_21, p_21);
                  t = ssubs_0_0(t);
                  t_21 = t;
                  t = (ATerm) ATmakeAppl(sym__3, r_21, i_21, t_21);
                  t = tsubs_0_0(t);
                }
              }
              return(t);
            }
            t = map_1_0(b_2, t);
            t = choices_0_0(t);
            k_21 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, b_21, f_21, g_21, k_21);
          }
        }
      }
    }
  }
  return(t);
}
ATerm joindefs_0_0 (ATerm t)
{
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_21 = NULL,a_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_21 = ATgetFirst((ATermList) t);
          a_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_22;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_21;
      ;
      LocalPopChoice(j_15);
    }
  else
    {
      t = i_15;
      t = JoinDefs2_0_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0_0 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_15 = ATgetArgument(t, 0);
      if(match_cons(l_15, sym__2))
        {
          c_22 = ATgetArgument(l_15, 0);
          d_22 = ATgetArgument(l_15, 1);
        }
      else
        _fail(t);
      e_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_22, d_22);
  t = Definitions_0_0(t);
  f_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_22, e_22);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL;
  i_22 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      j_22 = ATgetArgument(t, 0);
      h_22 = ATgetArgument(t, 1);
      {
        ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL;
        t = i_22;
        t = new_0_0(t);
        m_22 = t;
        t = new_0_0(t);
        n_22 = t;
        t = new_0_0(t);
        o_22 = t;
        t = new_0_0(t);
        p_22 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_22), o_22), n_22), m_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, m_22), (ATerm) ATmakeAppl(sym_Var_1, o_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, j_22, (ATerm)ATmakeAppl(sym_Var_1, m_22), (ATerm) ATmakeAppl(sym_Var_1, n_22)), (ATerm) ATmakeAppl(sym_BAM_3, h_22, (ATerm)ATmakeAppl(sym_Var_1, o_22), (ATerm) ATmakeAppl(sym_Var_1, p_22)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_m_15, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, p_22)), (ATerm) ATmakeAppl(sym_Var_1, n_22))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          j_22 = ATgetArgument(t, 0);
          {
            ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
            t = i_22;
            t = new_0_0(t);
            r_22 = t;
            t = j_22;
            {
              ATerm e_2 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    s_22 = ATgetArgument(t, 0);
                    t_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, r_22);
                return(t);
              }
              t = oncetd_1_0(e_2, t);
              u_22 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_m_15, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_22)), not_null(s_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_22)), (ATerm) ATmakeAppl(sym_Build_1, u_22))));
            }
          }
        }
      else
        {
          ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              j_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_22;
          t = new_0_0(t);
          w_22 = t;
          t = new_0_0(t);
          x_22 = t;
          t = j_22;
          {
            ATerm f_2 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  y_22 = ATgetArgument(t, 0);
                  z_22 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, w_22);
              return(t);
            }
            t = oncetd_1_0(f_2, t);
            a_23 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_23), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_22)), (ATerm) ATmakeAppl(sym_PrimT_3, term_n_15, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, x_22))))), (ATerm)ATmakeAppl(sym_Var_1, w_22), (ATerm) ATmakeAppl(sym_Op_2, term_r_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_22)), not_null(y_22)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL;
  c_23 = t;
  if(match_cons(t, sym_Match_1))
    {
      d_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL;
        t = c_23;
        t = new_0_0(t);
        f_23 = t;
        t = d_23;
        {
          ATerm j_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                h_23 = ATgetArgument(t, 0);
                g_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, f_23), h_23);
            return(t);
          }
          t = pat_td_1_0(j_2, t);
          i_23 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_23), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_u_15, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_23))), (ATerm) ATmakeAppl(sym_Match_1, not_null(g_23))))));
        }
        ;
        LocalPopChoice(t_15);
      }
    else
      {
        t = s_15;
        {
          ATerm v_15 = t;
          int w_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
              t = c_23;
              t = new_0_0(t);
              k_23 = t;
              t = d_23;
              {
                ATerm k_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      l_23 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, k_23);
                  return(t);
                }
                t = pat_td_1_0(k_2, t);
                m_23 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, k_23)), not_null(l_23))));
              }
              ;
              LocalPopChoice(w_15);
            }
          else
            {
              t = v_15;
              {
                ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL;
                t = c_23;
                t = new_0_0(t);
                o_23 = t;
                t = d_23;
                {
                  ATerm l_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        p_23 = ATgetArgument(t, 0);
                        q_23 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, o_23);
                    return(t);
                  }
                  t = pat_td_1_0(l_2, t);
                  r_23 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, o_23)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_23)), not_null(p_23)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm Mapp0_0_0 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      s_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_23;
  {
    ATerm m_2 (ATerm t)
    {
      if(match_cons(t, sym_RootApp_1))
        {
          ATerm x_15 = ATgetArgument(t, 0);
          if(match_cons(x_15, sym_Match_1))
            {
              t_23 = ATgetArgument(x_15, 0);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      t = t_23;
      return(t);
    }
    t = pat_td_1_0(m_2, t);
    u_23 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, u_23);
  }
  return(t);
}
ATerm Mapp_0_0 (ATerm t)
{
  ATerm z_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0_0(t);
      ;
      LocalPopChoice(a_16);
    }
  else
    {
      t = z_15;
      {
        ATerm b_16 = t;
        int c_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL;
            if(match_cons(t, sym_Match_1))
              {
                y_23 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = y_23;
            if(match_cons(t, sym_RootApp_1))
              {
                z_23 = ATgetArgument(t, 0);
                t = z_23;
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    z_23 = ATgetArgument(t, 0);
                    a_24 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_BA_2, z_23, a_24);
              }
            ;
            LocalPopChoice(c_16);
          }
        else
          {
            t = b_16;
            t = Mapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0_0 (ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL;
  f_24 = t;
  if(match_cons(t, sym_Build_1))
    {
      g_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL;
        t = f_24;
        t = new_0_0(t);
        i_24 = t;
        t = g_24;
        {
          ATerm n_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                j_24 = ATgetArgument(t, 0);
                k_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, i_24);
            return(t);
          }
          t = pat_td_1_0(n_2, t);
          l_24 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_f_16, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_24)), not_null(j_24))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_24)))), (ATerm) ATmakeAppl(sym_Build_1, l_24)));
        }
        ;
        LocalPopChoice(e_16);
      }
    else
      {
        t = d_16;
        {
          ATerm g_16 = t;
          int h_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL;
              t = f_24;
              t = new_0_0(t);
              n_24 = t;
              t = g_24;
              {
                ATerm r_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      o_24 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, n_24);
                  return(t);
                }
                t = pat_td_1_0(r_2, t);
                p_24 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_24), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_24)))), (ATerm) ATmakeAppl(sym_Build_1, p_24)));
              }
              ;
              LocalPopChoice(h_16);
            }
          else
            {
              t = g_16;
              {
                ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL;
                t = f_24;
                t = new_0_0(t);
                r_24 = t;
                t = g_24;
                {
                  ATerm s_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        s_24 = ATgetArgument(t, 0);
                        t_24 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, r_24);
                    return(t);
                  }
                  t = pat_td_1_0(s_2, t);
                  u_24 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(s_24), not_null(t_24), (ATerm) ATmakeAppl(sym_Var_1, r_24))), (ATerm) ATmakeAppl(sym_Build_1, u_24)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm h_91 (ATerm), ATerm i_91 (ATerm), ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL;
  a_25 = t;
  if(match_cons(t, sym_As_2))
    {
      w_24 = ATgetArgument(t, 0);
      x_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_25);
  v_24 = t;
  t = w_24;
  t = h_91(t);
  y_24 = t;
  t = x_24;
  t = i_91(t);
  z_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, y_24, z_24), v_24);
  return(t);
}
ATerm PrimT_3_0 (ATerm g_95 (ATerm), ATerm h_95 (ATerm), ATerm i_95 (ATerm), ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL;
  l_25 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      f_25 = ATgetArgument(t, 0);
      g_25 = ATgetArgument(t, 1);
      h_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_25);
  e_25 = t;
  t = f_25;
  t = g_95(t);
  i_25 = t;
  t = g_25;
  t = h_95(t);
  j_25 = t;
  t = h_25;
  t = i_95(t);
  k_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, i_25, j_25, k_25), e_25);
  return(t);
}
ATerm Explode_2_0 (ATerm a_91 (ATerm), ATerm b_91 (ATerm), ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
  u_25 = t;
  if(match_cons(t, sym_Explode_2))
    {
      q_25 = ATgetArgument(t, 0);
      r_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_25);
  p_25 = t;
  t = q_25;
  t = a_91(t);
  s_25 = t;
  t = r_25;
  t = b_91(t);
  t_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, s_25, t_25), p_25);
  return(t);
}
ATerm Op_2_0 (ATerm w_90 (ATerm), ATerm x_90 (ATerm), ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL;
  d_26 = t;
  if(match_cons(t, sym_Op_2))
    {
      z_25 = ATgetArgument(t, 0);
      a_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_26);
  y_25 = t;
  t = z_25;
  t = w_90(t);
  b_26 = t;
  t = a_26;
  t = x_90(t);
  c_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, b_26, c_26), y_25);
  return(t);
}
ATerm pat_td_1_0 (ATerm t_134 (ATerm), ATerm t)
{
  ATerm j_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_134(t);
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
            ATerm t_2 (ATerm t)
            {
              ATerm u_2 (ATerm t)
              {
                t = pat_td_1_0(t_134, t);
                return(t);
              }
              t = fetch_1_0(u_2, t);
              return(t);
            }
            t = Op_2_0(_id, t_2, t);
            ;
            LocalPopChoice(m_16);
          }
        else
          {
            t = l_16;
            {
              ATerm n_16 = t;
              int o_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_2 (ATerm t)
                  {
                    t = pat_td_1_0(t_134, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, v_2, t);
                  ;
                  LocalPopChoice(o_16);
                }
              else
                {
                  t = n_16;
                  {
                    ATerm p_16 = t;
                    int q_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_2 (ATerm t)
                        {
                          t = pat_td_1_0(t_134, t);
                          return(t);
                        }
                        t = Explode_2_0(w_2, _id, t);
                        ;
                        LocalPopChoice(q_16);
                      }
                    else
                      {
                        t = p_16;
                        {
                          ATerm r_16 = t;
                          int s_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm x_2 (ATerm t)
                              {
                                ATerm y_2 (ATerm t)
                                {
                                  t = pat_td_1_0(t_134, t);
                                  return(t);
                                }
                                t = fetch_1_0(y_2, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, x_2, t);
                              ;
                              LocalPopChoice(s_16);
                            }
                          else
                            {
                              t = r_16;
                              {
                                ATerm z_2 (ATerm t)
                                {
                                  t = pat_td_1_0(t_134, t);
                                  return(t);
                                }
                                t = As_2_0(_id, z_2, t);
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
ATerm Bapp0_0_0 (ATerm t)
{
  ATerm j_26 = NULL;
  if(match_cons(t, sym_Build_1))
    {
      j_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_26 = NULL,m_26 = NULL;
        t = j_26;
        {
          ATerm a_3 (ATerm t)
          {
            if(match_cons(t, sym_RootApp_1))
              {
                ATerm x_16 = ATgetArgument(t, 0);
                if(match_cons(x_16, sym_Build_1))
                  {
                    l_26 = ATgetArgument(x_16, 0);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            t = l_26;
            return(t);
          }
          t = pat_td_1_0(a_3, t);
          m_26 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, m_26);
        }
        ;
        LocalPopChoice(w_16);
      }
    else
      {
        t = v_16;
        {
          ATerm o_26 = NULL,p_26 = NULL;
          t = j_26;
          {
            ATerm b_3 (ATerm t)
            {
              if(match_cons(t, sym_App_2))
                {
                  ATerm y_16 = ATgetArgument(t, 0);
                  if(match_cons(y_16, sym_Build_1))
                    {
                      o_26 = ATgetArgument(y_16, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm z_16 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = o_26;
              return(t);
            }
            t = pat_td_1_0(b_3, t);
            p_26 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, p_26);
          }
        }
      }
  }
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm a_17 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0_0(t);
      ;
      LocalPopChoice(b_17);
    }
  else
    {
      t = a_17;
      {
        ATerm c_17 = t;
        int d_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
            if(match_cons(t, sym_Build_1))
              {
                t_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = t_26;
            if(match_cons(t, sym_RootApp_1))
              {
                u_26 = ATgetArgument(t, 0);
                t = u_26;
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    u_26 = ATgetArgument(t, 0);
                    v_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, v_26), u_26);
              }
            ;
            LocalPopChoice(d_17);
          }
        else
          {
            t = c_17;
            t = Bapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm f_3 (ATerm t)
        {
          ATerm g_3 (ATerm t)
          {
            t = map1_1_0(n_0, t);
            return(t);
          }
          t = try_1_0(g_3, t);
          return(t);
        }
        t = Cons_2_0(_id, f_3, t);
      }
      ;
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
      {
        ATerm h_3 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, h_3, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,i_27 = NULL,j_27 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      i_27 = ATgetArgument(t, 0);
      j_27 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, i_27, j_27);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          i_27 = ATgetArgument(t, 0);
          t = i_27;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_27 = ATgetFirst((ATermList) t);
              e_27 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, d_27, (ATerm) ATmakeAppl(sym_LChoices_1, e_27));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_c_14;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              i_27 = ATgetArgument(t, 0);
              t = i_27;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_27 = ATgetFirst((ATermList) t);
                  e_27 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, d_27, (ATerm) ATmakeAppl(sym_Choices_1, e_27));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_c_14;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  i_27 = ATgetArgument(t, 0);
                  t = i_27;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      d_27 = ATgetFirst((ATermList) t);
                      e_27 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_27, (ATerm) ATmakeAppl(sym_Seqs_1, e_27));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_g_17;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_27 = ATgetArgument(t, 0);
                      j_27 = ATgetArgument(t, 1);
                      g_27 = ATgetArgument(t, 2);
                      f_27 = ATgetArgument(t, 3);
                      {
                        ATerm w_27 = NULL,x_27 = NULL;
                        t = j_27;
                        {
                          ATerm i_3 (ATerm t)
                          {
                            ATerm y_27 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                y_27 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, y_27, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_17), term_j_17));
                            return(t);
                          }
                          t = map1_1_0(i_3, t);
                          w_27 = t;
                          t = g_27;
                          {
                            ATerm j_3 (ATerm t)
                            {
                              ATerm l_3 (ATerm t)
                              {
                                ATerm z_27 = NULL;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    z_27 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, z_27, term_j_17);
                                return(t);
                              }
                              t = try_1_0(l_3, t);
                              return(t);
                            }
                            t = map1_1_0(j_3, t);
                            x_27 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, i_27, w_27, x_27, f_27);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          i_27 = ATgetArgument(t, 0);
                          j_27 = ATgetArgument(t, 1);
                          g_27 = ATgetArgument(t, 2);
                          f_27 = ATgetArgument(t, 3);
                          {
                            ATerm k_17 = t;
                            int l_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm e_28 = NULL,f_28 = NULL;
                                t = g_27;
                                {
                                  ATerm q_3 (ATerm t)
                                  {
                                    ATerm g_28 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        g_28 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, g_28, term_j_17);
                                    return(t);
                                  }
                                  t = map1_1_0(q_3, t);
                                  e_28 = t;
                                  t = j_27;
                                  {
                                    ATerm s_3 (ATerm t)
                                    {
                                      ATerm t_3 (ATerm t)
                                      {
                                        ATerm h_28 = NULL;
                                        if(match_cons(t, sym_DefaultVarDec_1))
                                          {
                                            h_28 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_VarDec_2, h_28, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_17), term_j_17));
                                        return(t);
                                      }
                                      t = try_1_0(t_3, t);
                                      return(t);
                                    }
                                    t = map_1_0(s_3, t);
                                    f_28 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, i_27, f_28, e_28, f_27);
                                  }
                                }
                                ;
                                LocalPopChoice(l_17);
                              }
                            else
                              {
                                t = k_17;
                                {
                                  ATerm m_28 = NULL,n_28 = NULL;
                                  t = j_27;
                                  {
                                    ATerm z_3 (ATerm t)
                                    {
                                      ATerm o_28 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          o_28 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, o_28, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_17), term_j_17));
                                      return(t);
                                    }
                                    t = map1_1_0(z_3, t);
                                    m_28 = t;
                                    t = g_27;
                                    {
                                      ATerm a_4 (ATerm t)
                                      {
                                        ATerm b_4 (ATerm t)
                                        {
                                          ATerm p_28 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              p_28 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, p_28, term_j_17);
                                          return(t);
                                        }
                                        t = try_1_0(b_4, t);
                                        return(t);
                                      }
                                      t = map_1_0(a_4, t);
                                      n_28 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, i_27, m_28, n_28, f_27);
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
                              i_27 = ATgetArgument(t, 0);
                              j_27 = ATgetArgument(t, 1);
                              g_27 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, j_27, (ATerm) ATmakeAppl(sym_Op_2, term_r_15, (ATerm) ATinsert(ATinsert(ATempty, g_27), i_27)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  i_27 = ATgetArgument(t, 0);
                                  j_27 = ATgetArgument(t, 1);
                                  g_27 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, g_27)), i_27), (ATerm) ATmakeAppl(sym_Build_1, j_27)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      i_27 = ATgetArgument(t, 0);
                                      j_27 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_27, (ATerm) ATmakeAppl(sym_Match_1, j_27));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          i_27 = ATgetArgument(t, 0);
                                          j_27 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_27), j_27);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              i_27 = ATgetArgument(t, 0);
                                              j_27 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_27), i_27);
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
ATerm unzip_1_0 (ATerm n_110 (ATerm), ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
      _fail(t);
    t = term_n_17;
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    ATerm c_29 = NULL,d_29 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_29 = ATgetFirst((ATermList) t);
        d_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, c_29, d_29);
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm o_17 = ATgetArgument(t, 0);
        if(match_cons(o_17, sym__2))
          {
            e_29 = ATgetArgument(o_17, 0);
            g_29 = ATgetArgument(o_17, 1);
          }
        else
          _fail(t);
        {
          ATerm q_17 = ATgetArgument(t, 1);
          if(match_cons(q_17, sym__2))
            {
              f_29 = ATgetArgument(q_17, 0);
              h_29 = ATgetArgument(q_17, 1);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_29), e_29), (ATerm) ATinsert(CheckATermList(h_29), g_29));
    return(t);
  }
  t = genzip_4_0(c_4, d_4, h_4, n_110, t);
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm q_29 (ATerm k_29, ATerm t)
  {
    ATerm m_29 = NULL;
    t = k_29;
    {
      ATerm s_17 = t;
      if((PushChoice() == 0))
        {
          t = Var_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = s_17;
        }
      t = new_0_0(t);
      m_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, m_29), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_29), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_29)))), (ATerm) ATmakeAppl(sym_Var_1, m_29)));
    }
    return(t);
  }
  ATerm n_29 = NULL,o_29 = NULL;
  n_29 = t;
  if(match_cons(t, sym_Var_1))
    {
      o_29 = ATgetArgument(t, 0);
      {
        ATerm u_17 = t;
        int v_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_29(n_29, t);
            ;
            LocalPopChoice(v_17);
          }
        else
          {
            t = u_17;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_g_17, (ATerm) ATmakeAppl(sym_Var_1, o_29)));
          }
      }
    }
  else
    {
      t = q_29(n_29, t);
    }
  return(t);
}
ATerm Var_1_0 (ATerm q_90 (ATerm), ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL;
  u_29 = t;
  if(match_cons(t, sym_Var_1))
    {
      s_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_29);
  r_29 = t;
  t = s_29;
  t = q_90(t);
  t_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, t_29), r_29);
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL;
  u_30 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      v_30 = ATgetArgument(t, 0);
      w_30 = ATgetArgument(t, 1);
      t_30 = ATgetArgument(t, 2);
      {
        ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL;
        t = t_30;
        {
          ATerm i_4 (ATerm t)
          {
            ATerm w_17 = t;
            if((PushChoice() == 0))
              {
                t = Var_1_0(_id, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_17;
              }
            return(t);
          }
          t = fetch_1_0(i_4, t);
          t = t_30;
          t = unzip_1_0(LiftPrimArg_0_0, t);
          {
            ATerm l_4 (ATerm t)
            {
              t = unzip_1_0(_id, t);
              return(t);
            }
            t = _2_0(concat_0_0, l_4, t);
            if(match_cons(t, sym__2))
              {
                g_2 = ATgetArgument(t, 0);
                {
                  ATerm x_17 = ATgetArgument(t, 1);
                  if(match_cons(x_17, sym__2))
                    {
                      h_2 = ATgetArgument(x_17, 0);
                      i_2 = ATgetArgument(x_17, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, g_2, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, h_2), (ATerm) ATmakeAppl(sym_PrimT_3, v_30, w_30, i_2)));
          }
        }
      }
    }
  else
    {
      ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          v_30 = ATgetArgument(t, 0);
          w_30 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_30;
      {
        ATerm m_4 (ATerm t)
        {
          ATerm y_17 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = y_17;
            }
          return(t);
        }
        t = fetch_1_0(m_4, t);
        t = w_30;
        t = unzip_1_0(LiftPrimArg_0_0, t);
        {
          ATerm n_4 (ATerm t)
          {
            t = unzip_1_0(_id, t);
            return(t);
          }
          t = _2_0(concat_0_0, n_4, t);
          if(match_cons(t, sym__2))
            {
              o_2 = ATgetArgument(t, 0);
              {
                ATerm c_18 = ATgetArgument(t, 1);
                if(match_cons(c_18, sym__2))
                  {
                    p_2 = ATgetArgument(c_18, 0);
                    q_2 = ATgetArgument(c_18, 1);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Scope_2, o_2, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_2), (ATerm) ATmakeAppl(sym_PrimT_3, v_30, (ATerm)ATempty, q_2)));
        }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm b_122 (ATerm), ATerm t)
{
  ATerm z_30 (ATerm t)
  {
    ATerm p_4 (ATerm t)
    {
      t = b_122(t);
      t = z_30(t);
      return(t);
    }
    t = try_1_0(p_4, t);
    return(t);
  }
  t = z_30(t);
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm f_18 = t;
  if((PushChoice() == 0))
    {
      ATerm q_4 (ATerm t)
      {
        ATerm l_18 = t;
        int n_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(n_18);
          }
        else
          {
            t = l_18;
            if(!(match_cons(t, sym_Wld_0)))
              _fail(t);
          }
        return(t);
      }
      t = topdown_1_0(q_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_18;
    }
  return(t);
}
ATerm App_2_0 (ATerm e_91 (ATerm), ATerm f_91 (ATerm), ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL;
  f_31 = t;
  if(match_cons(t, sym_App_2))
    {
      b_31 = ATgetArgument(t, 0);
      c_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_31);
  a_31 = t;
  t = b_31;
  t = e_91(t);
  d_31 = t;
  t = c_31;
  t = f_91(t);
  e_31 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, d_31, e_31), a_31);
  return(t);
}
ATerm Con_3_0 (ATerm q_91 (ATerm), ATerm r_91 (ATerm), ATerm s_91 (ATerm), ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL;
  q_31 = t;
  if(match_cons(t, sym_Con_3))
    {
      k_31 = ATgetArgument(t, 0);
      l_31 = ATgetArgument(t, 1);
      m_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_31);
  j_31 = t;
  t = k_31;
  t = q_91(t);
  n_31 = t;
  t = l_31;
  t = r_91(t);
  o_31 = t;
  t = m_31;
  t = s_91(t);
  p_31 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, n_31, o_31, p_31), j_31);
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm o_18 = t;
  if((PushChoice() == 0))
    {
      ATerm r_4 (ATerm t)
      {
        ATerm q_18 = t;
        int r_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(r_18);
          }
        else
          {
            t = q_18;
            t = App_2_0(_id, _id, t);
          }
        return(t);
      }
      t = topdown_1_0(r_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_18;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL;
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
      z_31 = ATgetArgument(t, 1);
      a_32 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_31), (ATerm) ATmakeAppl(sym_Where_1, a_32)), y_31));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          y_31 = ATgetArgument(t, 0);
          z_31 = ATgetArgument(t, 1);
          a_32 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = y_31;
      t = pureterm_0_0(t);
      t = z_31;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, z_31)), (ATerm) ATmakeAppl(sym_Where_1, a_32)), (ATerm) ATmakeAppl(sym_Match_1, y_31)));
    }
  return(t);
}
ATerm Scope_2_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL;
  m_32 = t;
  if(match_cons(t, sym_Scope_2))
    {
      i_32 = ATgetArgument(t, 0);
      j_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_32);
  h_32 = t;
  t = i_32;
  t = k_94(t);
  k_32 = t;
  t = j_32;
  t = l_94(t);
  l_32 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, k_32, l_32), h_32);
  return(t);
}
ATerm oncetd_1_0 (ATerm v_106 (ATerm), ATerm t)
{
  ATerm q_32 (ATerm t)
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_106(t);
        ;
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
        t = SRTS_one(q_32, t);
      }
    return(t);
  }
  t = q_32(t);
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm w_18 = ATgetArgument(t, 0);
      if(match_cons(w_18, sym_Rule_3))
        {
          r_32 = ATgetArgument(w_18, 0);
          s_32 = ATgetArgument(w_18, 1);
          t_32 = ATgetArgument(w_18, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  u_32 = t;
  t = r_32;
  {
    ATerm s_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm x_18 = ATgetArgument(t, 0);
          if(match_cons(x_18, sym_Var_1))
            {
              w_32 = ATgetArgument(x_18, 0);
            }
          else
            _fail(t);
          v_32 = ATgetArgument(t, 1);
          {
            ATerm y_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, w_32);
      return(t);
    }
    t = oncetd_1_0(s_4, t);
    x_32 = t;
    t = s_32;
    {
      ATerm t_4 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm b_19 = ATgetArgument(t, 0);
            if(match_cons(b_19, sym_Var_1))
              {
                w_32 = ATgetArgument(b_19, 0);
              }
            else
              _fail(t);
            y_32 = ATgetArgument(t, 1);
            {
              ATerm g_19 = ATgetArgument(t, 2);
              if(match_cons(g_19, sym_CallT_3))
                {
                  z_32 = ATgetArgument(g_19, 0);
                  {
                    ATerm h_19 = ATgetArgument(g_19, 1);
                    if(((ATgetType(h_19) != AT_LIST) || !(ATisEmpty(h_19))))
                      _fail(t);
                  }
                  {
                    ATerm i_19 = ATgetArgument(g_19, 2);
                    if(((ATgetType(i_19) != AT_LIST) || !(ATisEmpty(i_19))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, u_32);
        return(t);
      }
      t = oncetd_1_0(t_4, t);
      a_33 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_32), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, x_32, a_33, (ATerm) ATmakeAppl(sym_Seq_2, t_32, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(z_32), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_32), not_null(y_32), term_g_17))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_32)), (ATerm) ATmakeAppl(sym_Var_1, u_32))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0_0(t);
        t = desugarRule_0_0(t);
        ;
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
        {
          ATerm l_19 = t;
          int m_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2_0(_id, desugarRule_0_0, t);
              ;
              LocalPopChoice(m_19);
            }
          else
            {
              t = l_19;
              t = RtoS_0_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1_0(u_4, t);
  return(t);
}
ATerm topdown_1_0 (ATerm r_105 (ATerm), ATerm t)
{
  t = r_105(t);
  {
    ATerm v_4 (ATerm t)
    {
      t = topdown_1_0(r_105, t);
      return(t);
    }
    t = SRTS_all(v_4, t);
  }
  return(t);
}
ATerm desugar_0_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    t = try_1_0(desugarRule_0_0, t);
    {
      ATerm y_4 (ATerm t)
      {
        ATerm n_19 = t;
        int o_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            ;
            LocalPopChoice(o_19);
          }
        else
          {
            t = n_19;
            {
              ATerm p_19 = t;
              int t_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(t_19);
                }
              else
                {
                  t = p_19;
                  {
                    ATerm y_19 = t;
                    int z_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(z_19);
                      }
                    else
                      {
                        t = y_19;
                        {
                          ATerm a_20 = t;
                          int e_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0_0(t);
                              ;
                              LocalPopChoice(e_20);
                            }
                          else
                            {
                              t = a_20;
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
      t = repeat_1_0(y_4, t);
    }
    return(t);
  }
  t = topdown_1_0(x_4, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm Thd_0_0 (ATerm t)
{
  ATerm r_3 = NULL,x_3 = NULL;
  r_3 = t;
  t = SSL_explode_term(r_3);
  if(match_cons(t, sym__2))
    {
      ATerm f_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_20 = ATgetArgument(t, 1);
        if(((ATgetType(g_20) == AT_LIST) && !(ATisEmpty(g_20))))
          {
            x_3 = ATgetFirst((ATermList) g_20);
            {
              ATerm h_20 = (ATerm) ATgetNext((ATermList) g_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_3;
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm t_109 (ATerm), ATerm t)
{
  ATerm e_33 = NULL;
  ATerm j_33 (ATerm t)
  {
    ATerm i_20 = t;
    int j_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_33 = NULL,h_33 = NULL,i_33 = NULL;
        f_33 = t;
        t = map_1_0(Thd_0_0, t);
        t = t_109(t);
        h_33 = t;
        t = f_33;
        {
          ATerm z_4 (ATerm t)
          {
            ATerm e_4 = NULL,f_4 = NULL;
            e_4 = t;
            t = SSL_explode_term(e_4);
            if(match_cons(t, sym__2))
              {
                ATerm l_20 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) l_20) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm p_20 = ATgetArgument(t, 1);
                  if(((ATgetType(p_20) == AT_LIST) && !(ATisEmpty(p_20))))
                    {
                      ATerm q_20 = ATgetFirst((ATermList) p_20);
                      f_4 = (ATerm) ATgetNext((ATermList) p_20);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), f_4);
            return(t);
          }
          t = map_1_0(z_4, t);
          t = j_33(t);
          i_33 = t;
          t = (ATerm) ATinsert(CheckATermList(i_33), h_33);
        }
        ;
        LocalPopChoice(j_20);
      }
    else
      {
        t = i_20;
        {
          ATerm b_5 (ATerm t)
          {
            if(!(match_cons(t, sym__0)))
              _fail(t);
            return(t);
          }
          t = map_1_0(b_5, t);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = j_33(t);
  e_33 = t;
  t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), e_33);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm k_33 = NULL;
  k_33 = t;
  {
    ATerm x_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL;
        t = k_33;
        t = new_0_0(t);
        m_33 = t;
        t = new_0_0(t);
        n_33 = t;
        t = new_0_0(t);
        o_33 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_33), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_r_15, (ATerm) ATinsert(ATinsert(ATempty, k_33), (ATerm) ATmakeAppl(sym_Var_1, n_33))), (ATerm) ATmakeAppl(sym_Var_1, o_33)), (ATerm)ATmakeAppl(sym_VarDec_2, m_33, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_17), term_j_17)), n_33, (ATerm)ATmakeAppl(sym_Var_1, n_33), o_33, (ATerm) ATmakeAppl(sym_Var_1, o_33));
        ;
        LocalPopChoice(y_20);
      }
    else
      {
        t = x_20;
        {
          ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
          t = k_33;
          t = new_0_0(t);
          q_33 = t;
          t = new_0_0(t);
          r_33 = t;
          t = new_0_0(t);
          s_33 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_33), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_r_15, (ATerm) ATinsert(ATinsert(ATempty, k_33), (ATerm) ATmakeAppl(sym_Var_1, r_33))), (ATerm) ATmakeAppl(sym_Var_1, s_33)), (ATerm)ATmakeAppl(sym_VarDec_2, q_33, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_17), term_j_17)), r_33, (ATerm)ATmakeAppl(sym_Var_1, r_33), s_33, (ATerm) ATmakeAppl(sym_Var_1, s_33));
        }
      }
  }
  return(t);
}
ATerm copy_1_0 (ATerm v_116 (ATerm), ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm t_33 = NULL,u_33 = NULL;
    if(match_cons(t, sym__2))
      {
        t_33 = ATgetArgument(t, 0);
        u_33 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, t_33, u_33, (ATerm) ATempty);
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    ATerm v_33 = NULL;
    if(match_cons(t, sym__3))
      {
        ATerm z_20 = ATgetArgument(t, 0);
        if(((ATgetType(z_20) != AT_INT) || (ATgetInt((ATermInt) z_20) != 0)))
          _fail(t);
        {
          ATerm e_21 = ATgetArgument(t, 1);
        }
        v_33 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = v_33;
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL;
    if(match_cons(t, sym__3))
      {
        w_33 = ATgetArgument(t, 0);
        x_33 = ATgetArgument(t, 1);
        y_33 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, w_33, term_j_21);
    t = geq_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, w_33, term_j_21);
    {
      ATerm q_21 = t;
      int w_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(w_33, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(w_21);
        }
      else
        {
          t = q_21;
          t = SSL_subtr(w_33, (ATerm) ATmakeInt(1));
        }
      z_33 = t;
      t = x_33;
      t = v_116(t);
      a_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, z_33, x_33, (ATerm) ATinsert(CheckATermList(y_33), a_34));
    }
    return(t);
  }
  t = for_3_0(c_5, d_5, g_5, t);
  return(t);
}
ATerm MkThreadApplication_0_0 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL;
  if(match_cons(t, sym__2))
    {
      b_34 = ATgetArgument(t, 0);
      c_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = new_0_0(t);
  d_34 = t;
  t = new_0_0(t);
  e_34 = t;
  t = new_0_0(t);
  f_34 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_34), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_r_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_34)), (ATerm) ATmakeAppl(sym_Var_1, e_34))), (ATerm) ATmakeAppl(sym_Op_2, term_r_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, c_34)), (ATerm) ATmakeAppl(sym_Var_1, f_34)))), (ATerm)ATmakeAppl(sym_VarDec_2, d_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_17), term_j_17)), e_34, (ATerm)ATmakeAppl(sym_Var_1, e_34), f_34, (ATerm) ATmakeAppl(sym_Var_1, f_34));
  return(t);
}
ATerm zipr_1_0 (ATerm l_110 (ATerm), ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm x_21 = ATgetArgument(t, 0);
        ATerm y_21 = ATgetArgument(t, 1);
        if(((ATgetType(y_21) != AT_LIST) || !(ATisEmpty(y_21))))
          _fail(t);
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm b_22 = ATgetArgument(t, 0);
        if(((ATgetType(b_22) == AT_LIST) && !(ATisEmpty(b_22))))
          {
            g_34 = ATgetFirst((ATermList) b_22);
            i_34 = (ATerm) ATgetNext((ATermList) b_22);
          }
        else
          _fail(t);
        {
          ATerm g_22 = ATgetArgument(t, 1);
          if(((ATgetType(g_22) == AT_LIST) && !(ATisEmpty(g_22))))
            {
              h_34 = ATgetFirst((ATermList) g_22);
              j_34 = (ATerm) ATgetNext((ATermList) g_22);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_34, h_34), (ATerm) ATmakeAppl(sym__2, i_34, j_34));
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    ATerm k_34 = NULL,l_34 = NULL;
    if(match_cons(t, sym__2))
      {
        k_34 = ATgetArgument(t, 0);
        l_34 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(l_34), k_34);
    return(t);
  }
  t = genzip_4_0(k_5, q_5, t_5, l_110, t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_34 = ATgetFirst((ATermList) t);
      q_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_34;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm k_22 = t;
      int l_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_34;
          ;
          LocalPopChoice(l_22);
        }
      else
        {
          t = k_22;
          t = q_34;
          t = last_0_0(t);
        }
    }
  else
    {
      t = q_34;
      t = last_0_0(t);
    }
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm r_36 (ATerm c_35, ATerm d_35, ATerm e_35, ATerm f_35, ATerm t)
  {
    ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, d_35, term_j_21);
    {
      ATerm q_22 = t;
      int v_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(d_35, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(v_22);
        }
      else
        {
          t = q_22;
          t = SSL_addr(d_35, (ATerm) ATmakeInt(1));
        }
      j_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_35, term_b_23);
      t = copy_1_0(new_0_0, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_35 = ATgetFirst((ATermList) t);
          l_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_35;
      t = last_0_0(t);
      m_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_35), k_35), l_35);
      t = zipr_1_0(MkThreadApplication_0_0, t);
      t = tuple_unzip_1_0(_id, t);
      if(match_cons(t, sym__6))
        {
          n_35 = ATgetArgument(t, 0);
          o_35 = ATgetArgument(t, 1);
          p_35 = ATgetArgument(t, 2);
          q_35 = ATgetArgument(t, 3);
          r_35 = ATgetArgument(t, 4);
          s_35 = ATgetArgument(t, 5);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_35), p_35), l_35);
      t = concat_0_0(t);
      t_35 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, c_35, term_e_23), o_35, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(t_35), k_35), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_r_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, k_35)), (ATerm) ATmakeAppl(sym_Op_2, c_35, q_35))), (ATerm)ATmakeAppl(sym_Op_2, term_r_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_35)), (ATerm) ATmakeAppl(sym_Op_2, c_35, s_35))), (ATerm) ATmakeAppl(sym_Seqs_1, n_35)))));
    }
    return(t);
  }
  ATerm s_36 (ATerm u_35, ATerm v_35, ATerm w_35, ATerm x_35, ATerm t)
  {
    ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL;
    t = x_35;
    t = new_0_0(t);
    b_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_35, (ATerm) ATmakeAppl(sym_Var_1, b_36));
    t = copy_1_0(MkDistApplication_0_0, t);
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
    t = (ATerm) ATmakeAppl(sym__2, e_36, g_36);
    t = conc_0_0(t);
    i_36 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, u_35, term_j_23), d_36, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(i_36), b_36), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_r_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_36)), (ATerm) ATmakeAppl(sym_Op_2, u_35, f_36))), (ATerm)ATmakeAppl(sym_Op_2, u_35, h_36), (ATerm) ATmakeAppl(sym_Seqs_1, c_36)))));
    return(t);
  }
  ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL;
  j_36 = t;
  if(match_cons(t, sym__3))
    {
      k_36 = ATgetArgument(t, 0);
      l_36 = ATgetArgument(t, 1);
      m_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_36;
  if(match_string(t, "T"))
    {
      t = m_36;
      if(match_cons(t, sym__2))
        {
          n_36 = ATgetArgument(t, 0);
          o_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_36;
      if(match_int(t, 0))
        {
          ATerm n_23 = t;
          int v_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_36(k_36, n_36, o_36, j_36, t);
              ;
              LocalPopChoice(v_23);
            }
          else
            {
              t = n_23;
              {
                ATerm q_36 = NULL;
                t = j_36;
                t = new_0_0(t);
                q_36 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, k_36, term_e_23), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_36), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_r_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, q_36)), (ATerm) ATmakeAppl(sym_Op_2, k_36, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_r_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, q_36)), (ATerm) ATmakeAppl(sym_Op_2, k_36, (ATerm) ATempty))), term_g_17))));
              }
            }
        }
      else
        {
          t = r_36(k_36, n_36, o_36, j_36, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = m_36;
      if(match_cons(t, sym__2))
        {
          n_36 = ATgetArgument(t, 0);
          o_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_36(k_36, n_36, o_36, j_36, t);
    }
  return(t);
}
ATerm CongruenceDef_0_0 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_23 = ATgetArgument(t, 0);
      if(match_cons(w_23, sym__2))
        {
          ATerm x_23 = ATgetArgument(w_23, 0);
          if(match_cons(x_23, sym_Mod_2))
            {
              t_36 = ATgetArgument(x_23, 0);
              u_36 = ATgetArgument(x_23, 1);
            }
          else
            _fail(t);
          v_36 = ATgetArgument(w_23, 1);
        }
      else
        _fail(t);
      w_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, t_36, u_36, v_36);
  t = DefineCongruence_0_0(t);
  t = desugar_0_0(t);
  x_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_36, w_36);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm b_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0_0(t);
      ;
      LocalPopChoice(c_24);
    }
  else
    {
      t = b_24;
      t = OverloadedDef_0_0(t);
      t = _2_0(joindefs_0_0, _id, t);
    }
  return(t);
}
ATerm diff_1_0 (ATerm p_113 (ATerm), ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL;
  if(match_cons(t, sym__2))
    {
      z_36 = ATgetArgument(t, 0);
      y_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_36;
  {
    ATerm a_37 (ATerm t)
    {
      ATerm d_24 = t;
      int e_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(e_24);
        }
      else
        {
          t = d_24;
          {
            ATerm h_24 = t;
            int m_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_5 (ATerm t)
                {
                  t = y_36;
                  return(t);
                }
                t = HdMember_p__2_0(p_113, u_5, t);
                t = a_37(t);
                ;
                LocalPopChoice(m_24);
              }
            else
              {
                t = h_24;
                t = Cons_2_0(_id, a_37, t);
              }
          }
        }
      return(t);
    }
    t = a_37(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm t)
{
  ATerm b_37 (ATerm t)
  {
    ATerm q_24 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_110(t);
        ;
        LocalPopChoice(b_25);
      }
    else
      {
        t = q_24;
        t = e_110(t);
        t = _2_0(g_110, b_37, t);
        t = f_110(t);
      }
    return(t);
  }
  t = b_37(t);
  return(t);
}
ATerm zip_1_0 (ATerm i_110 (ATerm), ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm c_25 = ATgetArgument(t, 0);
        if(((ATgetType(c_25) != AT_LIST) || !(ATisEmpty(c_25))))
          _fail(t);
        {
          ATerm d_25 = ATgetArgument(t, 1);
          if(((ATgetType(d_25) != AT_LIST) || !(ATisEmpty(d_25))))
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
    ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm m_25 = ATgetArgument(t, 0);
        if(((ATgetType(m_25) == AT_LIST) && !(ATisEmpty(m_25))))
          {
            c_37 = ATgetFirst((ATermList) m_25);
            e_37 = (ATerm) ATgetNext((ATermList) m_25);
          }
        else
          _fail(t);
        {
          ATerm n_25 = ATgetArgument(t, 1);
          if(((ATgetType(n_25) == AT_LIST) && !(ATisEmpty(n_25))))
            {
              d_37 = ATgetFirst((ATermList) n_25);
              f_37 = (ATerm) ATgetNext((ATermList) n_25);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_37, d_37), (ATerm) ATmakeAppl(sym__2, e_37, f_37));
    return(t);
  }
  ATerm x_5 (ATerm t)
  {
    ATerm g_37 = NULL,h_37 = NULL;
    if(match_cons(t, sym__2))
      {
        g_37 = ATgetArgument(t, 0);
        h_37 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(h_37), g_37);
    return(t);
  }
  t = genzip_4_0(v_5, w_5, x_5, i_110, t);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_25 = ATgetFirst((ATermList) t);
      if(match_cons(o_25, sym__2))
        {
          i_37 = ATgetArgument(o_25, 0);
          j_37 = ATgetArgument(o_25, 1);
        }
      else
        _fail(t);
      k_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(j_37);
  if(match_cons(t, sym__2))
    {
      l_37 = ATgetArgument(t, 0);
      m_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(i_37);
  if(match_cons(t, sym__2))
    {
      if((l_37 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      n_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_37, m_37);
  t = zip_1_0(_id, t);
  o_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_37, k_37);
  t = conc_0_0(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm v_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_5 (ATerm t)
      {
        ATerm x_37 = NULL;
        x_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, x_37);
        return(t);
      }
      ATerm z_5 (ATerm t)
      {
        ATerm d_6 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, d_6, t);
        return(t);
      }
      ATerm c_6 (ATerm t)
      {
        ATerm x_25 = t;
        int e_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_6 (ATerm t)
            {
              ATerm f_26 = t;
              int g_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      z_37 = ATgetFirst((ATermList) t);
                      c_38 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = z_37;
                  if(match_cons(t, sym__2))
                    {
                      a_38 = ATgetArgument(t, 0);
                      b_38 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = b_38;
                  if((a_38 != t))
                    {
                      _fail(t);
                    }
                  t = c_38;
                  ;
                  LocalPopChoice(g_26);
                }
              else
                {
                  t = f_26;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, e_6, t);
            ;
            LocalPopChoice(e_26);
          }
        else
          {
            t = x_25;
            {
              ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL;
              if(match_cons(t, sym__2))
                {
                  g_38 = ATgetArgument(t, 0);
                  h_38 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_38;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_38 = ATgetFirst((ATermList) t);
                  j_38 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_38), i_38), j_38);
            }
          }
        return(t);
      }
      t = for_3_0(y_5, z_5, c_6, t);
      ;
      LocalPopChoice(w_25);
    }
  else
    {
      t = v_25;
      {
        ATerm f_6 (ATerm t)
        {
          ATerm o_38 = NULL;
          if(match_cons(t, sym__2))
            {
              o_38 = ATgetArgument(t, 0);
              if((o_38 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(f_6, t);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm p_134 (ATerm), ATerm q_134 (ATerm), ATerm r_134 (ATerm), ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm h_26 = ATgetArgument(t, 0);
      if(((ATgetType(h_26) == AT_LIST) && !(ATisEmpty(h_26))))
        {
          q_38 = ATgetFirst((ATermList) h_26);
          r_38 = (ATerm) ATgetNext((ATermList) h_26);
        }
      else
        _fail(t);
      s_38 = ATgetArgument(t, 1);
      t_38 = ATgetArgument(t, 2);
      u_38 = ATgetArgument(t, 3);
      v_38 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_38, t_38);
  t = p_134(t);
  if(match_cons(t, sym__2))
    {
      x_38 = ATgetArgument(t, 0);
      y_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_38;
  t = q_134(t);
  z_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_38, s_38);
  t = diff_0_0(t);
  a_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_39, r_38);
  t = conc_0_0(t);
  b_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_39, s_38);
  t = conc_0_0(t);
  c_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_38, x_38, u_38);
  t = r_134(t);
  d_39 = t;
  t = (ATerm) ATmakeAppl(sym__5, b_39, c_39, y_38, d_39, v_38);
  return(t);
}
ATerm while_not_2_0 (ATerm q_122 (ATerm), ATerm r_122 (ATerm), ATerm t)
{
  ATerm f_39 (ATerm t)
  {
    ATerm i_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_122(t);
        ;
        LocalPopChoice(k_26);
      }
    else
      {
        t = i_26;
        t = r_122(t);
        t = f_39(t);
      }
    return(t);
  }
  t = f_39(t);
  return(t);
}
ATerm for_3_0 (ATerm t_122 (ATerm), ATerm u_122 (ATerm), ATerm v_122 (ATerm), ATerm t)
{
  t = t_122(t);
  t = while_not_2_0(u_122, v_122, t);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3_0 (ATerm a_134 (ATerm), ATerm b_134 (ATerm), ATerm c_134 (ATerm), ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL;
    if(match_cons(t, sym__3))
      {
        i_39 = ATgetArgument(t, 0);
        j_39 = ATgetArgument(t, 1);
        k_39 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__5, i_39, i_39, j_39, k_39, (ATerm) ATempty);
    return(t);
  }
  ATerm h_6 (ATerm t)
  {
    ATerm l_39 = NULL,m_39 = NULL;
    if(match_cons(t, sym__5))
      {
        ATerm n_26 = ATgetArgument(t, 0);
        if(((ATgetType(n_26) != AT_LIST) || !(ATisEmpty(n_26))))
          _fail(t);
        {
          ATerm q_26 = ATgetArgument(t, 1);
        }
        {
          ATerm r_26 = ATgetArgument(t, 2);
        }
        l_39 = ATgetArgument(t, 3);
        m_39 = ATgetArgument(t, 4);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, l_39, m_39);
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    ATerm s_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3_0(a_134, b_134, c_134, t);
        ;
        LocalPopChoice(w_26);
      }
    else
      {
        t = s_26;
        {
          ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL,t_39 = NULL,u_39 = NULL,y_39 = NULL,z_39 = NULL;
          if(match_cons(t, sym__5))
            {
              o_39 = ATgetArgument(t, 0);
              t_39 = ATgetArgument(t, 1);
              u_39 = ATgetArgument(t, 2);
              y_39 = ATgetArgument(t, 3);
              z_39 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = o_39;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_39 = ATgetFirst((ATermList) t);
              q_39 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, q_39, t_39, u_39, y_39, (ATerm) ATinsert(CheckATermList(z_39), p_39));
        }
      }
    return(t);
  }
  t = for_3_0(g_6, h_6, i_6, t);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    t = svars_arity_0_0(t);
    {
      ATerm l_6 (ATerm t)
      {
        t = try_1_0(DefinitionExists_0_0, t);
        return(t);
      }
      t = map_1_0(l_6, t);
    }
    return(t);
  }
  ATerm k_6 (ATerm t)
  {
    ATerm l_40 = NULL,m_40 = NULL;
    if(match_cons(t, sym__3))
      {
        ATerm x_26 = ATgetArgument(t, 0);
        l_40 = ATgetArgument(t, 1);
        m_40 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(m_40), l_40);
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3_0(get_definition_0_0, j_6, k_6, t);
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_40 = NULL,p_40 = NULL;
        if(match_cons(t, sym__2))
          {
            o_40 = ATgetArgument(t, 0);
            p_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_40;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_40;
        ;
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        t = MissingDefs_0_0(t);
        t = SSL_exit((ATerm) ATmakeInt(1));
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm r_117 (ATerm), ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL,v_40 = NULL,w_40 = NULL;
  if(match_cons(t, sym__2))
    {
      r_40 = ATgetArgument(t, 0);
      s_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_117(t);
  t_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_40, r_40, s_40);
  t = table_push_0_0(t);
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(t_40, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(b_27);
      }
    else
      {
        t = a_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_40 = ATgetFirst((ATermList) t);
        w_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(t_40, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(w_40), (ATerm) ATinsert(CheckATermList(v_40), r_40)));
    t = (ATerm) ATmakeAppl(sym__2, r_40, s_40);
  }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm x_113 (ATerm), ATerm y_113 (ATerm), ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_40 = ATgetFirst((ATermList) t);
      z_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_113(t);
  {
    ATerm m_6 (ATerm t)
    {
      ATerm a_41 = NULL;
      a_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_40, a_41);
      t = x_113(t);
      return(t);
    }
    t = fetch_1_0(m_6, t);
    t = z_40;
  }
  return(t);
}
ATerm union_1_0 (ATerm t_113 (ATerm), ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL;
  if(match_cons(t, sym__2))
    {
      c_41 = ATgetArgument(t, 0);
      b_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_41;
  {
    ATerm d_41 (ATerm t)
    {
      ATerm c_27 = t;
      int h_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = b_41;
          ;
          LocalPopChoice(h_27);
        }
      else
        {
          t = c_27;
          {
            ATerm k_27 = t;
            int l_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_6 (ATerm t)
                {
                  t = b_41;
                  return(t);
                }
                t = HdMember_p__2_0(t_113, q_6, t);
                t = d_41(t);
                ;
                LocalPopChoice(l_27);
              }
            else
              {
                t = k_27;
                t = Cons_2_0(_id, d_41, t);
              }
          }
        }
      return(t);
    }
    t = d_41(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm r_6 (ATerm t)
  {
    ATerm e_41 = NULL;
    if(match_cons(t, sym__2))
      {
        e_41 = ATgetArgument(t, 0);
        if((e_41 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(r_6, t);
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm o_41 = NULL;
  o_41 = t;
  {
    ATerm m_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_4 = NULL;
        t = o_41;
        {
          ATerm u_6 (ATerm t)
          {
            t = term_o_27;
            return(t);
          }
          t = rewrite_1_0(u_6, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm p_27 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) p_27) != ATmakeSymbol("r_0", 0, ATtrue)))
                _fail(t);
              k_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_4;
        }
        ;
        LocalPopChoice(n_27);
      }
    else
      {
        t = m_27;
        {
          ATerm o_4 = NULL;
          t = o_41;
          {
            ATerm v_6 (ATerm t)
            {
              t = term_o_27;
              return(t);
            }
            t = rewrite_1_0(v_6, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm q_27 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) q_27) != ATmakeSymbol("l_0", 0, ATtrue)))
                  _fail(t);
                o_4 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_4;
          }
        }
      }
  }
  return(t);
}
ATerm rewrite_1_0 (ATerm t_117 (ATerm), ATerm t)
{
  ATerm u_41 = NULL,v_41 = NULL,w_4 = NULL;
  u_41 = t;
  t = term_b_23;
  t = t_117(t);
  v_41 = t;
  t = SSL_table_get(v_41, u_41);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_4 = ATgetFirst((ATermList) t);
      {
        ATerm r_27 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_4;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm n_42 (ATerm d_42, ATerm t)
  {
    ATerm f_42 = NULL,g_42 = NULL;
    t = d_42;
    {
      ATerm w_6 (ATerm t)
      {
        t = term_s_27;
        return(t);
      }
      t = rewrite_1_0(w_6, t);
      if(match_cons(t, sym_Defined_3))
        {
          ATerm t_27 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) t_27) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
          f_42 = ATgetArgument(t, 1);
          g_42 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(g_42), f_42);
    }
    return(t);
  }
  ATerm j_42 = NULL,l_42 = NULL;
  j_42 = t;
  if(match_cons(t, sym__2))
    {
      ATerm u_27 = ATgetArgument(t, 0);
      l_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_42;
  {
    ATerm v_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_28 = ATgetArgument(t, 0);
            ATerm c_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(a_28);
        {
          ATerm d_28 = t;
          int i_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_5 = NULL;
              t = j_42;
              {
                ATerm x_6 (ATerm t)
                {
                  t = term_s_27;
                  return(t);
                }
                t = rewrite_1_0(x_6, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm j_28 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) j_28) != ATmakeSymbol("o_0", 0, ATtrue)))
                      _fail(t);
                    a_5 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = a_5;
              }
              ;
              LocalPopChoice(i_28);
            }
          else
            {
              t = d_28;
              t = n_42(j_42, t);
            }
        }
      }
    else
      {
        t = v_27;
        t = n_42(j_42, t);
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm i_116 (ATerm), ATerm j_116 (ATerm), ATerm k_116 (ATerm), ATerm t)
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_116(t);
      ;
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
      {
        ATerm q_42 = NULL,r_42 = NULL,u_42 = NULL,v_42 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_42 = ATgetFirst((ATermList) t);
            r_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_42;
        t = k_116(t);
        u_42 = t;
        t = r_42;
        t = foldr_3_0(i_116, j_116, k_116, t);
        v_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_42, v_42);
        t = j_116(t);
      }
    }
  return(t);
}
ATerm length_0_0 (ATerm t)
{
  ATerm y_6 (ATerm t)
  {
    t = term_q_28;
    return(t);
  }
  ATerm z_6 (ATerm t)
  {
    ATerm w_42 = NULL,x_42 = NULL;
    if(match_cons(t, sym__2))
      {
        w_42 = ATgetArgument(t, 0);
        x_42 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm r_28 = t;
      int s_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(w_42, x_42);
          ;
          LocalPopChoice(s_28);
        }
      else
        {
          t = r_28;
          t = SSL_addr(w_42, x_42);
        }
    }
    return(t);
  }
  ATerm a_7 (ATerm t)
  {
    t = term_j_21;
    return(t);
  }
  t = foldr_3_0(y_6, z_6, a_7, t);
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL;
  y_42 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      z_42 = ATgetArgument(t, 0);
      a_43 = ATgetArgument(t, 1);
      b_43 = ATgetArgument(t, 2);
      {
        ATerm t_28 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  c_43 = t;
  t = a_43;
  t = length_0_0(t);
  d_43 = t;
  t = b_43;
  t = length_0_0(t);
  e_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_42, (ATerm) ATmakeAppl(sym__2, d_43, e_43));
  {
    ATerm u_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        ;
        LocalPopChoice(v_28);
      }
    else
      {
        t = u_28;
        t = (ATerm) ATempty;
      }
    f_43 = t;
    t = z_42;
    {
      ATerm w_28 = t;
      int x_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arities_0_0(t);
          ;
          LocalPopChoice(x_28);
        }
      else
        {
          t = w_28;
          t = (ATerm) ATempty;
        }
      g_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, d_43, e_43)), g_43);
      t = union_0_0(t);
      h_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_42, (ATerm) ATmakeAppl(sym__2, d_43, e_43)), (ATerm) ATmakeAppl(sym_Defined_2, term_y_28, (ATerm) ATinsert(CheckATermList(f_43), y_42)));
      {
        ATerm b_7 (ATerm t)
        {
          t = term_s_27;
          return(t);
        }
        t = assert_1_0(b_7, t);
        t = (ATerm) ATmakeAppl(sym__2, z_42, (ATerm) ATmakeAppl(sym_Defined_2, term_z_28, h_43));
        {
          ATerm c_7 (ATerm t)
          {
            t = term_o_27;
            return(t);
          }
          t = assert_1_0(c_7, t);
          t = c_43;
        }
      }
    }
  }
  return(t);
}
ATerm sort_defs_0_0 (ATerm t)
{
  t = map_1_0(RegisterSDefT_0_0, t);
  return(t);
}
ATerm needed_defs_0_0 (ATerm t)
{
  ATerm i_43 = NULL;
  t = sort_defs_0_0(t);
  i_43 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_i_29), i_43, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm s_89 (ATerm), ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL;
  m_43 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      k_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_43);
  j_43 = t;
  t = k_43;
  t = s_89(t);
  l_43 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, l_43), j_43);
  return(t);
}
ATerm Cons_2_0 (ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL;
  v_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_43 = ATgetFirst((ATermList) t);
      s_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_43);
  q_43 = t;
  t = r_43;
  t = o_89(t);
  t_43 = t;
  t = s_43;
  t = p_89(t);
  u_43 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(u_43), t_43), q_43);
  return(t);
}
ATerm Specification_1_0 (ATerm x_89 (ATerm), ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL;
  c_44 = t;
  if(match_cons(t, sym_Specification_1))
    {
      a_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_44);
  z_43 = t;
  t = a_44;
  t = x_89(t);
  b_44 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, b_44), z_43);
  return(t);
}
ATerm _2_0 (ATerm f_88 (ATerm), ATerm g_88 (ATerm), ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL;
  l_44 = t;
  if(match_cons(t, sym__2))
    {
      h_44 = ATgetArgument(t, 0);
      i_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_44);
  g_44 = t;
  t = h_44;
  t = f_88(t);
  j_44 = t;
  t = i_44;
  t = g_88(t);
  k_44 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, j_44, k_44), g_44);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL;
  p_44 = t;
  t = term_b_23;
  t = whoami_0_0(t);
  q_44 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), q_44), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = p_44;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_29 = t;
  int l_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_29);
    }
  else
    {
      t = j_29;
      {
        ATerm y_44 = NULL,z_44 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_44 = ATgetFirst((ATermList) t);
            z_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_44;
        {
          ATerm d_7 (ATerm t)
          {
            t = z_44;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(d_7, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL;
  d_45 = t;
  t = SSL_explode_term(d_45);
  if(match_cons(t, sym__2))
    {
      ATerm p_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_45;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm i_112 (ATerm), ATerm t)
{
  ATerm f_45 (ATerm t)
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, f_45, t);
        ;
        LocalPopChoice(w_29);
      }
    else
      {
        t = v_29;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_112(t);
      }
    return(t);
  }
  t = f_45(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL;
  if(match_cons(t, sym__2))
    {
      h_45 = ATgetArgument(t, 0);
      g_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_45;
  {
    ATerm e_7 (ATerm t)
    {
      t = g_45;
      return(t);
    }
    t = at_end_1_0(e_7, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_29 = t;
  int y_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(y_29);
    }
  else
    {
      t = x_29;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm i_45 = NULL;
  ATerm f_7 (ATerm t)
  {
    ATerm j_45 = NULL;
    j_45 = t;
    t = SSL_explode_string(j_45);
    return(t);
  }
  ATerm j_7 (ATerm t)
  {
    ATerm k_45 = NULL;
    k_45 = t;
    t = SSL_explode_string(k_45);
    return(t);
  }
  t = _2_0(f_7, j_7, t);
  t = conc_0_0(t);
  i_45 = t;
  t = SSL_implode_string(i_45);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm z_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_45 = NULL;
      s_45 = t;
      t = SSL_is_string(s_45);
      ;
      LocalPopChoice(a_30);
    }
  else
    {
      t = z_29;
      {
        ATerm b_30 = t;
        int c_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_7 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(k_7, t);
            ;
            LocalPopChoice(c_30);
          }
        else
          {
            t = b_30;
            {
              ATerm w_45 = NULL,b_46 = NULL,c_46 = NULL;
              w_45 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_46 = ATgetArgument(t, 0);
                  t = b_46;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_46 = ATgetArgument(t, 0);
                      t = b_46;
                      {
                        ATerm d_30 = t;
                        int e_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(e_30);
                          }
                        else
                          {
                            t = d_30;
                            {
                              ATerm m_7 (ATerm t)
                              {
                                t = term_f_30;
                                return(t);
                              }
                              t = debug_1_0(m_7, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm l_46 = NULL,m_46 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_46 = ATgetArgument(t, 0);
                          c_46 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_46;
                      t = eval_config_0_0(t);
                      l_46 = t;
                      t = c_46;
                      t = eval_config_0_0(t);
                      m_46 = t;
                      t = (ATerm) ATmakeAppl(sym__2, l_46, m_46);
                      t = conc_strings_0_0(t);
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
  ATerm p_46 = NULL;
  p_46 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), p_46);
  {
    ATerm n_7 (ATerm t)
    {
      ATerm q_46 = NULL;
      t = eval_config_0_0(t);
      q_46 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), p_46, q_46);
      t = q_46;
      return(t);
    }
    t = try_1_0(n_7, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm k_128 (ATerm), ATerm t)
{
  ATerm o_7 (ATerm t)
  {
    ATerm r_46 = NULL,s_46 = NULL;
    r_46 = t;
    t = term_g_30;
    t = get_config_0_0(t);
    s_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_46, term_h_30);
    t = geq_0_0(t);
    t = r_46;
    t = k_128(t);
    return(t);
  }
  t = try_1_0(o_7, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm p_7 (ATerm t)
  {
    ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm i_30 = ATgetArgument(t, 0);
        if(match_cons(i_30, sym_Stream_1))
          {
            t_46 = ATgetArgument(i_30, 0);
          }
        else
          _fail(t);
        u_46 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(t_46, u_46);
    v_46 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), v_46);
    w_46 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, w_46);
    return(t);
  }
  t = WriteToFile_1_0(p_7, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm g_127 (ATerm), ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL;
  if(match_cons(t, sym__2))
    {
      x_46 = ATgetArgument(t, 0);
      y_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_46, term_j_30);
  t = open_stream_0_0(t);
  z_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_46, y_46);
  t = g_127(t);
  t = fclose_0_0(t);
  t = y_46;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm q_7 (ATerm t)
  {
    ATerm a_47 = NULL,b_47 = NULL,c_47 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm k_30 = ATgetArgument(t, 0);
        if(match_cons(k_30, sym_Stream_1))
          {
            a_47 = ATgetArgument(k_30, 0);
          }
        else
          _fail(t);
        b_47 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(a_47, b_47);
    c_47 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, c_47);
    return(t);
  }
  t = WriteToFile_1_0(q_7, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL;
  d_47 = t;
  {
    ATerm r_7 (ATerm t)
    {
      ATerm l_30 = t;
      int m_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_7 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                e_47 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(s_7, t);
          ;
          LocalPopChoice(m_30);
        }
      else
        {
          t = l_30;
          t = term_n_30;
          e_47 = t;
        }
      return(t);
    }
    t = _2_0(r_7, _id, t);
    t = d_47;
    {
      ATerm t_7 (ATerm t)
      {
        ATerm u_7 (ATerm t)
        {
          t = not_null(e_47);
          return(t);
        }
        t = split_2_0(u_7, _id, t);
        return(t);
      }
      t = _2_0(_id, t_7, t);
      {
        ATerm o_30 = t;
        int p_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_7 (ATerm t)
            {
              ATerm w_7 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(w_7, t);
              return(t);
            }
            t = _2_0(v_7, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(p_30);
          }
        else
          {
            t = o_30;
            t = _2_0(_id, WriteToTextFile_0_0, t);
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
ATerm apply_strategy_1_0 (ATerm i_130 (ATerm), ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,n_47 = NULL;
  f_47 = t;
  t = dtime_0_0(t);
  t = f_47;
  t = i_130(t);
  g_47 = t;
  t = dtime_0_0(t);
  h_47 = t;
  t = g_47;
  if(match_cons(t, sym__2))
    {
      i_47 = ATgetArgument(t, 0);
      n_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_47), (ATerm) ATmakeAppl(sym_Runtime_1, h_47)), n_47);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_48 (ATerm v_47, ATerm t)
  {
    t = SSL_fclose(v_47);
    return(t);
  }
  ATerm e_48 = NULL,f_48 = NULL;
  f_48 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_48 = ATgetArgument(t, 0);
      {
        ATerm q_30 = t;
        int r_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_48);
            ;
            LocalPopChoice(r_30);
          }
        else
          {
            t = q_30;
            t = h_48(f_48, t);
          }
      }
    }
  else
    {
      t = h_48(f_48, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm s_126 (ATerm), ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL;
  i_48 = t;
  t = s_126(t);
  j_48 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_48), j_48));
  t = i_48;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_48 = NULL;
  t = SSL_stdin_stream();
  k_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_48);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_48 = NULL;
  t = SSL_stdout_stream();
  l_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_48);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_48 = NULL;
  t = SSL_stderr_stream();
  m_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_48);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm o_48 = NULL;
  o_48 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = o_48;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_48;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_48;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_30 = ATgetArgument(t, 0);
      ATerm x_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_30 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_6 = NULL,b_6 = NULL;
        a_6 = t;
        t = SSL_explode_term(a_6);
        if(match_cons(t, sym__2))
          {
            ATerm h_31 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_31) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm i_31 = ATgetArgument(t, 1);
              if(((ATgetType(i_31) == AT_LIST) && !(ATisEmpty(i_31))))
                {
                  b_6 = ATgetFirst((ATermList) i_31);
                  {
                    ATerm r_31 = (ATerm) ATgetNext((ATermList) i_31);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_6;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(g_31);
      }
    else
      {
        t = y_30;
        {
          ATerm s_31 = t;
          int t_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL;
              ATerm x_7 (ATerm t)
              {
                ATerm u_48 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    u_48 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = u_48;
                return(t);
              }
              t = _2_0(x_7, _id, t);
              if(match_cons(t, sym__2))
                {
                  r_48 = ATgetArgument(t, 0);
                  s_48 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(r_48, s_48);
              t_48 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, t_48);
              ;
              LocalPopChoice(t_31);
            }
          else
            {
              t = s_31;
              {
                ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL;
                ATerm y_7 (ATerm t)
                {
                  ATerm y_48 = NULL;
                  y_48 = t;
                  t = SSL_is_string(y_48);
                  return(t);
                }
                t = _2_0(y_7, _id, t);
                if(match_cons(t, sym__2))
                  {
                    v_48 = ATgetArgument(t, 0);
                    w_48 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(v_48, w_48);
                x_48 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, x_48);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL;
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_49 = NULL;
      c_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_49, term_w_31);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(v_31);
    }
  else
    {
      t = u_31;
      {
        ATerm z_7 (ATerm t)
        {
          t = term_b_32;
          return(t);
        }
        t = debug_1_0(z_7, t);
        _fail(t);
      }
    }
  z_48 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(b_49);
  a_49 = t;
  t = z_48;
  t = fclose_0_0(t);
  t = a_49;
  return(t);
}
ATerm split_2_0 (ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL;
  e_49 = t;
  t = d_109(t);
  f_49 = t;
  t = e_49;
  t = e_109(t);
  g_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_49, g_49);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL;
  h_49 = t;
  {
    ATerm c_32 = t;
    int d_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_8 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              i_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(a_8, t);
        ;
        LocalPopChoice(d_32);
      }
    else
      {
        t = c_32;
        t = term_e_32;
        i_49 = t;
      }
    t = h_49;
    {
      ATerm b_8 (ATerm t)
      {
        t = not_null(i_49);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, b_8, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm c_8 (ATerm t)
  {
    ATerm k_49 = NULL;
    k_49 = t;
    if(match_string(t, "-k"))
      {
        t = k_49;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = k_49;
      }
    return(t);
  }
  ATerm d_8 (ATerm t)
  {
    ATerm l_49 = NULL,m_49 = NULL;
    l_49 = t;
    t = SSL_string_to_int(l_49);
    m_49 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), m_49);
    t = l_49;
    return(t);
  }
  ATerm e_8 (ATerm t)
  {
    t = term_f_32;
    return(t);
  }
  t = ArgOption_3_0(c_8, d_8, e_8, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_32 = t;
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_8 (ATerm t)
      {
        ATerm o_49 = NULL;
        o_49 = t;
        if(match_string(t, "-S"))
          {
            t = o_49;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = o_49;
          }
        return(t);
      }
      ATerm g_8 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_o_32;
        return(t);
      }
      ATerm h_8 (ATerm t)
      {
        t = term_p_32;
        return(t);
      }
      t = Option_3_0(f_8, g_8, h_8, t);
      ;
      LocalPopChoice(n_32);
    }
  else
    {
      t = g_32;
      {
        ATerm b_33 = t;
        int c_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_8 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm j_8 (ATerm t)
            {
              ATerm p_49 = NULL,q_49 = NULL;
              p_49 = t;
              t = SSL_string_to_int(p_49);
              q_49 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), q_49);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, p_49);
              return(t);
            }
            ATerm k_8 (ATerm t)
            {
              t = term_d_33;
              return(t);
            }
            t = ArgOption_3_0(i_8, j_8, k_8, t);
            ;
            LocalPopChoice(c_33);
          }
        else
          {
            t = b_33;
            {
              ATerm l_8 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm m_8 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_g_33;
                return(t);
              }
              ATerm n_8 (ATerm t)
              {
                t = term_l_33;
                return(t);
              }
              t = Option_3_0(l_8, m_8, n_8, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm p_33 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(m_34);
    }
  else
    {
      t = p_33;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm o_8 (ATerm t)
  {
    ATerm s_49 = NULL;
    s_49 = t;
    if(match_string(t, "-o"))
      {
        t = s_49;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = s_49;
      }
    return(t);
  }
  ATerm p_8 (ATerm t)
  {
    ATerm t_49 = NULL;
    t_49 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), t_49);
    t = (ATerm) ATmakeAppl(sym_Output_1, t_49);
    return(t);
  }
  ATerm q_8 (ATerm t)
  {
    t = term_n_34;
    return(t);
  }
  t = ArgOption_3_0(o_8, p_8, q_8, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm o_34 = t;
  int r_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(r_34);
    }
  else
    {
      t = o_34;
      {
        ATerm r_8 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm s_8 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_s_34;
          return(t);
        }
        ATerm t_8 (ATerm t)
        {
          t = term_t_34;
          return(t);
        }
        t = Option_3_0(r_8, s_8, t_8, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL;
  w_49 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = w_49;
      t = register_usage_1_0(m_0, t);
    }
  else
    {
      ATerm e_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_49 = ATgetFirst((ATermList) t);
          y_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_49 = ATgetFirst((ATermList) t);
          a_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_49;
      t = i_0(t);
      t = z_49;
      t = k_0(t);
      e_50 = t;
      t = (ATerm) ATinsert(CheckATermList(a_50), e_50);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm u_8 (ATerm t)
  {
    ATerm g_50 = NULL;
    g_50 = t;
    if(match_string(t, "-i"))
      {
        t = g_50;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = g_50;
      }
    return(t);
  }
  ATerm v_8 (ATerm t)
  {
    ATerm h_50 = NULL;
    h_50 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), h_50);
    t = (ATerm) ATmakeAppl(sym_Input_1, h_50);
    return(t);
  }
  ATerm w_8 (ATerm t)
  {
    t = term_u_34;
    return(t);
  }
  t = ArgOption_3_0(u_8, v_8, w_8, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm v_34 = t;
  int w_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(w_34);
    }
  else
    {
      t = v_34;
      {
        ATerm x_34 = t;
        int y_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(y_34);
          }
        else
          {
            t = x_34;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_23;
  t = whoami_0_0(t);
  i_50 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), i_50));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_34;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm g_116 (ATerm), ATerm h_116 (ATerm), ATerm t)
{
  ATerm a_35 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_116(t);
      ;
      LocalPopChoice(b_35);
    }
  else
    {
      t = a_35;
      {
        ATerm l_50 = NULL,m_50 = NULL,p_50 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_50 = ATgetFirst((ATermList) t);
            m_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_50;
        t = foldr_2_0(g_116, h_116, t);
        p_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_50, p_50);
        t = h_116(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm e_114 (ATerm), ATerm f_114 (ATerm), ATerm t)
{
  ATerm q_50 = NULL,r_50 = NULL;
  q_50 = t;
  t = SSL_explode_term(q_50);
  if(match_cons(t, sym__2))
    {
      ATerm g_35 = ATgetArgument(t, 0);
      r_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_50;
  t = foldr_2_0(e_114, f_114, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_50 = NULL;
  t = times_0_0(t);
  {
    ATerm x_8 (ATerm t)
    {
      t = term_q_28;
      return(t);
    }
    ATerm y_8 (ATerm t)
    {
      ATerm t_50 = NULL,v_50 = NULL;
      if(match_cons(t, sym__2))
        {
          t_50 = ATgetArgument(t, 0);
          v_50 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm h_35 = t;
        int i_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(t_50, v_50);
            ;
            LocalPopChoice(i_35);
          }
        else
          {
            t = h_35;
            t = SSL_addr(t_50, v_50);
          }
      }
      return(t);
    }
    t = crush_2_0(x_8, y_8, t);
    s_50 = t;
    t = SSL_TicksToSeconds(s_50);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL;
  n_51 = t;
  if(match_cons(t, sym__2))
    {
      o_51 = ATgetArgument(t, 0);
      p_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_51;
        if((o_51 != t))
          {
            _fail(t);
          }
        t = n_51;
        ;
        LocalPopChoice(z_35);
      }
    else
      {
        t = y_35;
        t = n_51;
        {
          ATerm a_36 = t;
          int p_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_51, p_51);
              ;
              LocalPopChoice(p_36);
            }
          else
            {
              t = a_36;
              t = SSL_gtr(o_51, p_51);
            }
          t = (ATerm) ATmakeAppl(sym__2, o_51, p_51);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_128 (ATerm), ATerm t)
{
  ATerm z_8 (ATerm t)
  {
    ATerm u_51 = NULL,v_51 = NULL;
    u_51 = t;
    t = term_g_30;
    t = get_config_0_0(t);
    v_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_51, term_j_21);
    t = geq_0_0(t);
    t = u_51;
    t = j_128(t);
    return(t);
  }
  t = try_1_0(z_8, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm a_9 (ATerm t)
  {
    ATerm x_51 = NULL,y_51 = NULL;
    t = run_time_0_0(t);
    x_51 = t;
    t = term_b_23;
    t = whoami_0_0(t);
    y_51 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), x_51), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), y_51));
    t = (ATerm) ATmakeAppl(sym__2, term_p_37, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_37), x_51), term_q_37), y_51));
    return(t);
  }
  t = if_verbose1_1_0(a_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm g_131 (ATerm), ATerm t)
{
  ATerm s_37 = t;
  int t_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_37;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_37);
    }
  else
    {
      t = s_37;
      {
        ATerm b_9 (ATerm t)
        {
          ATerm v_37 = t;
          int w_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(w_37);
            }
          else
            {
              t = v_37;
              {
                ATerm y_37 = t;
                int d_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(d_38);
                  }
                else
                  {
                    t = y_37;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(b_9, t);
      }
    }
  t = g_131(t);
  return(t);
}
ATerm map_1_0 (ATerm s_111 (ATerm), ATerm t)
{
  ATerm a_52 (ATerm t)
  {
    ATerm e_38 = t;
    int f_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(f_38);
      }
    else
      {
        t = e_38;
        t = Cons_2_0(s_111, a_52, t);
      }
    return(t);
  }
  t = a_52(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_52 = ATgetFirst((ATermList) t);
      d_52 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_52 = NULL,i_52 = NULL;
        t = d_52;
        t = g_0(t);
        h_52 = t;
        t = c_52;
        t = f_0(t);
        i_52 = t;
        t = d_52;
        {
          ATerm d_9 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(h_52), i_52);
            return(t);
          }
          t = reverse_acc_2_0(f_0, d_9, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_23;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm e_9 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, e_9, t);
  return(t);
}
ATerm Program_1_0 (ATerm g_102 (ATerm), ATerm t)
{
  ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL;
  m_52 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_52);
  j_52 = t;
  t = k_52;
  t = g_102(t);
  l_52 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, l_52), j_52);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_38 = t;
  int l_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_34;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_38);
    }
  else
    {
      t = k_38;
      {
        ATerm f_9 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(f_9, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_m_38;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm g_9 (ATerm t)
    {
      ATerm q_52 = NULL;
      q_52 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, q_52), term_n_38);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(g_9, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm h_102 (ATerm), ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL;
  u_52 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      s_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_52);
  r_52 = t;
  t = s_52;
  t = h_102(t);
  t_52 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, t_52), r_52);
  return(t);
}
ATerm fetch_1_0 (ATerm c_112 (ATerm), ATerm t)
{
  ATerm y_52 (ATerm t)
  {
    ATerm p_38 = t;
    int w_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(c_112, _id, t);
        ;
        LocalPopChoice(w_38);
      }
    else
      {
        t = p_38;
        t = Cons_2_0(_id, y_52, t);
      }
    return(t);
  }
  t = y_52(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm g_132 (ATerm), ATerm t)
{
  t = fetch_1_0(g_132, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL;
  a_53 = t;
  {
    ATerm e_39 = t;
    int g_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_53;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_39 = ATgetFirst((ATermList) t);
                ATerm n_39 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_53;
          }
        ;
        LocalPopChoice(g_39);
      }
    else
      {
        t = e_39;
        t = (ATerm) ATinsert(ATempty, a_53);
      }
    b_53 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), b_53);
    t = a_53;
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
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm j_108 (ATerm), ATerm t)
{
  ATerm r_39 = t;
  int s_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_108(t);
      ;
      LocalPopChoice(s_39);
    }
  else
    {
      t = r_39;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_39 = t;
  int w_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_9 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm i_9 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_b_40;
        return(t);
      }
      ATerm j_9 (ATerm t)
      {
        t = term_c_40;
        return(t);
      }
      t = Option_3_0(h_9, i_9, j_9, t);
      ;
      LocalPopChoice(w_39);
    }
  else
    {
      t = v_39;
      {
        ATerm k_9 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm l_9 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_d_40;
          return(t);
        }
        ATerm m_9 (ATerm t)
        {
          t = term_e_40;
          return(t);
        }
        t = Option_3_0(k_9, l_9, m_9, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL;
  if(match_cons(t, sym__3))
    {
      h_53 = ATgetArgument(t, 0);
      i_53 = ATgetArgument(t, 1);
      j_53 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_53, i_53);
  {
    ATerm f_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_40 = ATgetArgument(t, 0);
            ATerm i_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(h_53, i_53);
        ;
        LocalPopChoice(g_40);
      }
    else
      {
        t = f_40;
        t = (ATerm) ATempty;
      }
    k_53 = t;
    t = SSL_table_put(h_53, i_53, (ATerm) ATinsert(CheckATermList(k_53), j_53));
    t = (ATerm) ATmakeAppl(sym__3, h_53, i_53, j_53);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm l_133 (ATerm), ATerm t)
{
  ATerm p_53 = NULL;
  t = term_b_23;
  t = l_133(t);
  p_53 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_40, term_k_40, p_53);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL;
  r_53 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = r_53;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm w_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_53 = ATgetFirst((ATermList) t);
          t_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_53;
      t = a_0(t);
      t = term_b_23;
      t = b_0(t);
      w_53 = t;
      t = (ATerm) ATinsert(CheckATermList(t_53), w_53);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm n_9 (ATerm t)
  {
    ATerm y_53 = NULL;
    y_53 = t;
    if(match_string(t, "--help"))
      {
        t = y_53;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = y_53;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = y_53;
          }
      }
    return(t);
  }
  ATerm o_9 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_n_40;
    return(t);
  }
  ATerm r_9 (ATerm t)
  {
    t = term_q_40;
    return(t);
  }
  t = Option_3_0(n_9, o_9, r_9, t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_133 (ATerm), ATerm t)
{
  ATerm c_54 = NULL;
  c_54 = t;
  {
    ATerm s_9 (ATerm t)
    {
      t = term_u_40;
      t = j_133(t);
      return(t);
    }
    t = try_1_0(s_9, t);
    t = c_54;
    {
      ATerm t_9 (ATerm t)
      {
        ATerm d_54 = NULL;
        d_54 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_54);
        t = (ATerm) ATmakeAppl(sym_Program_1, d_54);
        return(t);
      }
      ATerm u_9 (ATerm t)
      {
        ATerm x_40 = t;
        int f_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_41 = t;
            int h_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(h_41);
              }
            else
              {
                t = g_41;
                t = j_133(t);
                t = Cons_2_0(_id, u_9, t);
              }
            ;
            LocalPopChoice(f_41);
          }
        else
          {
            t = x_40;
            {
              ATerm f_54 = NULL,g_54 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_54 = ATgetFirst((ATermList) t);
                  g_54 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(g_54), (ATerm) ATmakeAppl(sym_Undefined_1, f_54));
            }
          }
        return(t);
      }
      t = Cons_2_0(t_9, u_9, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm i_133 (ATerm), ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL;
  m_54 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = m_54;
  {
    ATerm v_9 (ATerm t)
    {
      ATerm i_41 = t;
      int j_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_133(t);
          ;
          LocalPopChoice(j_41);
        }
      else
        {
          t = i_41;
          {
            ATerm k_41 = t;
            int l_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(l_41);
              }
            else
              {
                t = k_41;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_9, t);
    {
      ATerm w_9 (ATerm t)
      {
        ATerm m_41 = t;
        int n_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_54 = NULL;
            t_54 = t;
            {
              ATerm p_41 = t;
              int q_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_54;
                  {
                    ATerm r_41 = t;
                    int s_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_u_37;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(s_41);
                      }
                    else
                      {
                        t = r_41;
                        {
                          ATerm x_9 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(x_9, t);
                        }
                      }
                    t = t_54;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(q_41);
                }
              else
                {
                  t = p_41;
                  t = term_a_40;
                  t = get_config_0_0(t);
                  t = t_54;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(n_41);
          }
        else
          {
            t = m_41;
            {
              ATerm y_9 (ATerm t)
              {
                ATerm z_9 (ATerm t)
                {
                  n_54 = t;
                  return(t);
                }
                t = Undefined_1_0(z_9, t);
                return(t);
              }
              t = option_defined_1_0(y_9, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(n_54)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_p_37, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_54)), term_t_41));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(w_9, t);
      o_54 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = o_54;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_131 (ATerm), ATerm j_131 (ATerm), ATerm k_131 (ATerm), ATerm l_131 (ATerm), ATerm t)
{
  ATerm c_9 = NULL;
  t = parse_options_1_0(i_131, t);
  c_9 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), c_9);
  t = c_9;
  t = k_131(t);
  {
    ATerm w_41 = t;
    int x_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_131, t);
        ;
        LocalPopChoice(x_41);
      }
    else
      {
        t = w_41;
        {
          ATerm y_41 = t;
          int z_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_131(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(z_41);
            }
          else
            {
              t = y_41;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm x_130 (ATerm), ATerm y_130 (ATerm), ATerm z_130 (ATerm), ATerm a_131 (ATerm), ATerm t)
{
  ATerm a_10 (ATerm t)
  {
    ATerm a_42 = t;
    int b_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_130(t);
        ;
        LocalPopChoice(b_42);
      }
    else
      {
        t = a_42;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm b_10 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(x_130, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(a_10, z_130, a_131, b_10, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm r_130 (ATerm), ATerm s_130 (ATerm), ATerm t_130 (ATerm), ATerm t)
{
  ATerm c_10 (ATerm t)
  {
    ATerm d_10 (ATerm t)
    {
      ATerm w_54 = NULL,x_54 = NULL;
      w_54 = t;
      t = term_z_34;
      t = get_config_0_0(t);
      x_54 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, x_54));
      t = w_54;
      return(t);
    }
    t = if_verbose2_1_0(d_10, t);
    return(t);
  }
  t = iowrap_4_0(r_130, s_130, t_130, c_10, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm p_130 (ATerm), ATerm q_130 (ATerm), ATerm t)
{
  t = iowrap_3_0(p_130, q_130, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm m_130 (ATerm), ATerm t)
{
  ATerm e_10 (ATerm t)
  {
    t = _2_0(_id, m_130, t);
    return(t);
  }
  t = iowrap_2_0(e_10, _fail, t);
  return(t);
}
ATerm extract_0_0 (ATerm t)
{
  ATerm f_10 (ATerm t)
  {
    ATerm g_10 (ATerm t)
    {
      ATerm h_10 (ATerm t)
      {
        ATerm i_10 (ATerm t)
        {
          t = Strategies_1_0(needed_defs_0_0, t);
          return(t);
        }
        ATerm j_10 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(i_10, j_10, t);
        return(t);
      }
      t = Cons_2_0(_id, h_10, t);
      return(t);
    }
    t = Specification_1_0(g_10, t);
    t = needed_constructors_0_0(t);
    return(t);
  }
  t = iowrap_1_0(f_10, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = extract_0_0(t);
  return(t);
}
