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
ATerm term_e_53;
ATerm term_r_52;
ATerm term_o_52;
ATerm term_f_51;
ATerm term_n_50;
ATerm term_c_50;
ATerm term_g_49;
ATerm term_x_48;
ATerm term_w_48;
ATerm term_v_48;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_n_47;
ATerm term_m_47;
ATerm term_o_46;
ATerm term_n_46;
ATerm term_m_46;
ATerm term_s_45;
ATerm term_g_45;
ATerm term_f_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_c_45;
ATerm term_b_45;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_j_42;
ATerm term_j_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_d_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_v_39;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_n_32;
ATerm term_h_32;
ATerm term_f_27;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_k_26;
ATerm term_p_25;
ATerm term_v_23;
ATerm term_s_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_y_22;
ATerm term_b_19;
ATerm term_y_18;
ATerm term_j_17;
ATerm term_w_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_f_16;
ATerm term_d_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_c_15;
void init_constant_terms (void)
{
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("z_1", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w_1", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_Op_2, term_m_26, (ATerm) ATempty);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_ConstType_1, term_p_26);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_y_18);
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(sym__2, term_a_40, term_d_40);
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_18);
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(sym__3, term_s_48, term_t_48, term_c_15);
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm ConstructorNeeded_0_0 (ATerm);
ATerm filter_1_0 (ATerm m_123 (ATerm), ATerm);
ATerm Constructors_1_0 (ATerm x_96 (ATerm), ATerm);
ATerm Signature_1_0 (ATerm b_96 (ATerm), ATerm);
ATerm DeclareConstructorNeeded_0_0 (ATerm);
ATerm needed_constructors_0_0 (ATerm);
ATerm MissingDefMod_0_0 (ATerm);
ATerm MissingDefs_0_0 (ATerm);
ATerm giving_up_0_0 (ATerm);
ATerm DefinitionExists_0_0 (ATerm);
ATerm Rec_2_0 (ATerm f_101 (ATerm), ATerm g_101 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm);
ATerm Let_2_0 (ATerm i_100 (ATerm), ATerm j_100 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm split_2_0 (ATerm t_114 (ATerm), ATerm u_114 (ATerm), ATerm);
ATerm free_vars2_4_0 (ATerm t_125 (ATerm), ATerm u_125 (ATerm), ATerm v_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm w_125 (ATerm), ATerm);
ATerm svars_arity_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm alltd_1_0 (ATerm z_112 (ATerm), ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm);
ATerm JoinDefs2_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm);
ATerm Op_2_0 (ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm n_140 (ATerm), ATerm);
ATerm Bapp2_0_0 (ATerm);
ATerm Bapp0_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm LiftCallArgs_0_0 (ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm Var_1_0 (ATerm y_96 (ATerm), ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm s_127 (ATerm), ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm);
ATerm Con_3_0 (ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Scope_2_0 (ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm l_112 (ATerm), ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm h_111 (ATerm), ATerm);
ATerm desugar_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm tuple_unzip_1_0 (ATerm j_115 (ATerm), ATerm);
ATerm MkDistApplication_0_0 (ATerm);
ATerm copy_1_0 (ATerm m_122 (ATerm), ATerm);
ATerm MkThreadApplication_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm DefineCongruence_0_0 (ATerm);
ATerm CongruenceDef_0_0 (ATerm);
ATerm get_definition_0_0 (ATerm);
ATerm diff_1_0 (ATerm g_119 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm t_115 (ATerm), ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm w_115 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNextChangeGraph_3_0 (ATerm j_140 (ATerm), ATerm k_140 (ATerm), ATerm l_140 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm h_128 (ATerm), ATerm i_128 (ATerm), ATerm);
ATerm for_3_0 (ATerm k_128 (ATerm), ATerm l_128 (ATerm), ATerm m_128 (ATerm), ATerm);
ATerm extract_needed_defs_0_0 (ATerm);
ATerm assert_1_0 (ATerm i_123 (ATerm), ATerm);
ATerm union_1_0 (ATerm k_119 (ATerm), ATerm);
ATerm Arities_0_0 (ATerm);
ATerm Definitions_0_0 (ATerm);
ATerm foldr_3_0 (ATerm z_121 (ATerm), ATerm a_122 (ATerm), ATerm b_122 (ATerm), ATerm);
ATerm RegisterSDefT_0_0 (ATerm);
ATerm needed_defs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm a_96 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm w_95 (ATerm), ATerm x_95 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm f_96 (ATerm), ATerm);
ATerm _2_0 (ATerm h_91 (ATerm), ATerm i_91 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm a_133 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm c_136 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm t_117 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm z_117 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm e_134 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm x_121 (ATerm), ATerm y_121 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_134 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm a_137 (ATerm), ATerm);
ATerm map_1_0 (ATerm i_117 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm o_108 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm p_108 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm d_139 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm c_139 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm c_137 (ATerm), ATerm d_137 (ATerm), ATerm e_137 (ATerm), ATerm f_137 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm l_136 (ATerm), ATerm m_136 (ATerm), ATerm n_136 (ATerm), ATerm);
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
  t = term_c_15;
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
    ATerm g_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue)), (ATerm) ATmakeAppl(sym_OpDecl_2, p_1, (ATerm) ATempty));
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_0 = ATgetFirst((ATermList) t);
            {
              ATerm k_15 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = u_0;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm l_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_15) != ATmakeSymbol("z_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, p_1, q_1);
        ;
        LocalPopChoice(h_15);
      }
    else
      {
        t = g_15;
        {
          ATerm g_1 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue)), (ATerm) ATmakeAppl(sym_OpDecl_2, p_1, (ATerm) ATempty));
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_1 = ATgetFirst((ATermList) t);
              {
                ATerm m_15 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = g_1;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm n_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) n_15) != ATmakeSymbol("w_1", 0, ATtrue)))
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
ATerm filter_1_0 (ATerm m_123 (ATerm), ATerm t)
{
  ATerm o_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(p_15);
    }
  else
    {
      t = o_15;
      {
        ATerm q_15 = t;
        int r_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_0 (ATerm t)
            {
              t = filter_1_0(m_123, t);
              return(t);
            }
            t = Cons_2_0(m_123, h_0, t);
            ;
            LocalPopChoice(r_15);
          }
        else
          {
            t = q_15;
            {
              ATerm x_1 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm s_15 = ATgetFirst((ATermList) t);
                  x_1 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = x_1;
              t = filter_1_0(m_123, t);
            }
          }
      }
    }
  return(t);
}
ATerm Constructors_1_0 (ATerm x_96 (ATerm), ATerm t)
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
  t = x_96(t);
  c_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Constructors_1, c_2), a_2);
  return(t);
}
ATerm Signature_1_0 (ATerm b_96 (ATerm), ATerm t)
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
  t = b_96(t);
  i_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, i_2), g_2);
  return(t);
}
ATerm DeclareConstructorNeeded_0_0 (ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL;
  p_2 = t;
  {
    ATerm t_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Cong_2))
          {
            q_2 = ATgetArgument(t, 0);
            {
              ATerm w_15 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(u_15);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, q_2, (ATerm) ATempty), term_y_15);
        {
          ATerm p_0 (ATerm t)
          {
            t = term_a_16;
            return(t);
          }
          t = assert_1_0(p_0, t);
          t = p_2;
        }
      }
    else
      {
        t = t_15;
        if(match_cons(t, sym_Op_2))
          {
            q_2 = ATgetArgument(t, 0);
            {
              ATerm c_16 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, q_2, (ATerm) ATempty), term_f_16);
        {
          ATerm q_0 (ATerm t)
          {
            t = term_a_16;
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
      ATerm g_16 = ATgetArgument(t, 0);
      if(((ATgetType(g_16) == AT_LIST) && !(ATisEmpty(g_16))))
        {
          w_2 = ATgetFirst((ATermList) g_16);
          {
            ATerm h_16 = (ATerm) ATgetNext((ATermList) g_16);
            if(((ATgetType(h_16) == AT_LIST) && !(ATisEmpty(h_16))))
              {
                ATerm j_16 = ATgetFirst((ATermList) h_16);
                if(match_cons(j_16, sym_Strategies_1))
                  {
                    x_2 = ATgetArgument(j_16, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm k_16 = (ATerm) ATgetNext((ATermList) h_16);
                  if(((ATgetType(k_16) != AT_LIST) || !(ATisEmpty(k_16))))
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
      ATerm l_16 = t;
      int m_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DeclareConstructorNeeded_0_0(t);
          ;
          LocalPopChoice(m_16);
        }
      else
        {
          t = l_16;
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
      ATerm n_16 = ATgetArgument(t, 0);
      if(match_cons(n_16, sym_Mod_2))
        {
          z_2 = ATgetArgument(n_16, 0);
          a_3 = ATgetArgument(n_16, 1);
        }
      else
        _fail(t);
      b_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue))), b_3), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), a_3), (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue))), z_2), (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue))));
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_16), b_3), term_r_16), a_3), term_p_16), z_2), term_o_16);
  return(t);
}
ATerm MissingDefs_0_0 (ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL;
  if(match_cons(t, sym__2))
    {
      e_3 = ATgetArgument(t, 0);
      {
        ATerm t_16 = ATgetArgument(t, 1);
        if(((ATgetType(t_16) == AT_LIST) && !(ATisEmpty(t_16))))
          {
            f_3 = ATgetFirst((ATermList) t_16);
            g_3 = (ATerm) ATgetNext((ATermList) t_16);
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
      ATerm u_16 = t;
      int v_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MissingDefMod_0_0(t);
          ;
          LocalPopChoice(v_16);
        }
      else
        {
          t = u_16;
          {
            ATerm m_3 = NULL,o_3 = NULL;
            if(match_cons(t, sym__2))
              {
                m_3 = ATgetArgument(t, 0);
                o_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue))), o_3), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), m_3), (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue))));
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_16), o_3), term_r_16), m_3), term_o_16);
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
  t = (ATerm) ATinsert(ATempty, term_w_16);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL,y_4 = NULL,c_5 = NULL,f_5 = NULL;
  t_4 = t;
  if(match_cons(t, sym__2))
    {
      u_4 = ATgetArgument(t, 0);
      y_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_4;
  if(match_cons(t, sym__2))
    {
      c_5 = ATgetArgument(t, 0);
      f_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = f_5;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm x_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_4;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_16 = ATgetFirst((ATermList) t);
            ATerm a_17 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(a_17) == AT_LIST) && !(ATisEmpty(a_17))))
              {
                ATerm b_17 = ATgetFirst((ATermList) a_17);
                ATerm c_17 = (ATerm) ATgetNext((ATermList) a_17);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm d_17 = t;
          if((PushChoice() == 0))
            {
              ATerm z_0 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    ATerm g_17 = ATgetArgument(t, 0);
                    if(((ATgetType(g_17) != AT_INT) || (ATgetInt((ATermInt) g_17) != 0)))
                      _fail(t);
                    {
                      ATerm h_17 = ATgetArgument(t, 1);
                      if(((ATgetType(h_17) != AT_INT) || (ATgetInt((ATermInt) h_17) != 0)))
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
              t = d_17;
            }
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_4), (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue))));
          t = (ATerm) ATinsert(ATinsert(ATempty, u_4), term_j_17);
          t = giving_up_0_0(t);
        }
        ;
        LocalPopChoice(y_16);
      }
    else
      {
        t = x_16;
        {
          ATerm s_3 = NULL,t_3 = NULL;
          t = u_4;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm m_17 = ATgetFirst((ATermList) t);
              if(match_cons(m_17, sym__2))
                {
                  s_3 = ATgetArgument(m_17, 0);
                  t_3 = ATgetArgument(m_17, 1);
                }
              else
                _fail(t);
              {
                ATerm n_17 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(n_17) != AT_LIST) || !(ATisEmpty(n_17))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, u_4, (ATerm) ATmakeAppl(sym__2, s_3, t_3));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, u_4, (ATerm) ATmakeAppl(sym__2, s_3, t_3));
        }
      }
  }
  return(t);
}
ATerm Rec_2_0 (ATerm f_101 (ATerm), ATerm g_101 (ATerm), ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,m_5 = NULL,n_5 = NULL,p_5 = NULL,q_5 = NULL;
  q_5 = t;
  if(match_cons(t, sym_Rec_2))
    {
      k_5 = ATgetArgument(t, 0);
      m_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_5);
  j_5 = t;
  t = k_5;
  t = f_101(t);
  n_5 = t;
  t = m_5;
  t = g_101(t);
  p_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, n_5, p_5), j_5);
  return(t);
}
ATerm SDefT_4_0 (ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,b_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL;
  l_6 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      v_5 = ATgetArgument(t, 0);
      w_5 = ATgetArgument(t, 1);
      b_6 = ATgetArgument(t, 2);
      d_6 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_6);
  u_5 = t;
  t = v_5;
  t = a_103(t);
  e_6 = t;
  t = w_5;
  t = b_103(t);
  f_6 = t;
  t = b_6;
  t = c_103(t);
  j_6 = t;
  t = d_6;
  t = d_103(t);
  k_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, e_6, f_6, j_6, k_6), u_5);
  return(t);
}
ATerm SDef_3_0 (ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL;
  e_7 = t;
  if(match_cons(t, sym_SDef_3))
    {
      q_6 = ATgetArgument(t, 0);
      t_6 = ATgetArgument(t, 1);
      u_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_7);
  p_6 = t;
  t = q_6;
  t = x_102(t);
  v_6 = t;
  t = t_6;
  t = y_102(t);
  c_7 = t;
  t = u_6;
  t = z_102(t);
  d_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, v_6, c_7, d_7), p_6);
  return(t);
}
ATerm Let_2_0 (ATerm i_100 (ATerm), ATerm j_100 (ATerm), ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL,v_7 = NULL;
  v_7 = t;
  if(match_cons(t, sym_Let_2))
    {
      n_7 = ATgetArgument(t, 0);
      q_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_7);
  m_7 = t;
  t = n_7;
  t = i_100(t);
  r_7 = t;
  t = q_7;
  t = j_100(t);
  s_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, r_7, s_7), m_7);
  return(t);
}
ATerm sboundin_3_0 (ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm t)
{
  ATerm o_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(m_110, m_110, t);
      ;
      LocalPopChoice(s_17);
    }
  else
    {
      t = o_17;
      {
        ATerm t_17 = t;
        int u_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(o_110, o_110, m_110, t);
            ;
            LocalPopChoice(u_17);
          }
        else
          {
            t = t_17;
            {
              ATerm v_17 = t;
              int w_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(o_110, o_110, o_110, m_110, t);
                  ;
                  LocalPopChoice(w_17);
                }
              else
                {
                  t = v_17;
                  t = Rec_2_0(o_110, m_110, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm b_8 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      b_8 = ATgetArgument(t, 0);
      {
        ATerm x_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = b_8;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm u_8 = NULL;
      ATerm y_17 = t;
      int z_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              u_8 = ATgetArgument(t, 0);
              {
                ATerm a_18 = ATgetArgument(t, 1);
              }
              {
                ATerm b_18 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(z_17);
          t = u_8;
        }
      else
        {
          t = y_17;
          if(match_cons(t, sym_SDefT_4))
            {
              u_8 = ATgetArgument(t, 0);
              {
                ATerm d_18 = ATgetArgument(t, 1);
              }
              {
                ATerm f_18 = ATgetArgument(t, 2);
              }
              {
                ATerm g_18 = ATgetArgument(t, 3);
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
ATerm split_2_0 (ATerm t_114 (ATerm), ATerm u_114 (ATerm), ATerm t)
{
  ATerm h_52 = NULL,i_52 = NULL,k_52 = NULL;
  h_52 = t;
  t = t_114(t);
  i_52 = t;
  t = h_52;
  t = u_114(t);
  k_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_52, k_52);
  return(t);
}
ATerm free_vars2_4_0 (ATerm t_125 (ATerm), ATerm u_125 (ATerm), ATerm v_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm w_125 (ATerm), ATerm t)
{
  ATerm a_10 (ATerm t)
  {
    ATerm u_3 = NULL,v_3 = NULL,w_3 = NULL;
    u_3 = t;
    {
      ATerm k_18 = t;
      int m_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_125(t);
          ;
          LocalPopChoice(m_18);
        }
      else
        {
          t = k_18;
          t = (ATerm) ATempty;
        }
      v_3 = t;
      t = u_3;
      {
        ATerm n_18 = t;
        int p_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_4 = NULL,k_4 = NULL,l_4 = NULL;
            t = u_3;
            t = u_125(t);
            h_4 = t;
            t = u_3;
            {
              ATerm b_1 (ATerm t)
              {
                ATerm d_1 (ATerm t)
                {
                  t = h_4;
                  return(t);
                }
                t = split_2_0(a_10, d_1, t);
                t = diff_1_0(w_125, t);
                return(t);
              }
              ATerm c_1 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = v_125(b_1, a_10, c_1, t);
              k_4 = t;
              t = SSL_explode_term(k_4);
              if(match_cons(t, sym__2))
                {
                  ATerm q_18 = ATgetArgument(t, 0);
                  l_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = l_4;
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
                  t = union_1_0(h_1, t);
                  return(t);
                }
                t = foldr_3_0(e_1, f_1, _id, t);
              }
            }
            ;
            LocalPopChoice(p_18);
          }
        else
          {
            t = n_18;
            {
              ATerm v_4 = NULL;
              t = SSL_explode_term(u_3);
              if(match_cons(t, sym__2))
                {
                  ATerm s_18 = ATgetArgument(t, 0);
                  v_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = v_4;
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
                    ATerm a_5 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        a_5 = ATgetArgument(t, 0);
                        if((a_5 != ATgetArgument(t, 1)))
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
                t = foldr_3_0(i_1, j_1, a_10, t);
              }
            }
          }
        w_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_3, w_3);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm s_9 = NULL;
            if(match_cons(t, sym__2))
              {
                s_9 = ATgetArgument(t, 0);
                if((s_9 != ATgetArgument(t, 1)))
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
  t = a_10(t);
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm p_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,w_10 = NULL;
    if(match_cons(t, sym_CallT_3))
      {
        ATerm t_18 = ATgetArgument(t, 0);
        if(match_cons(t_18, sym_SVar_1))
          {
            p_10 = ATgetArgument(t_18, 0);
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
        t = term_y_18;
        return(t);
      }
      ATerm t_1 (ATerm t)
      {
        ATerm c_11 = NULL,g_11 = NULL;
        if(match_cons(t, sym__2))
          {
            c_11 = ATgetArgument(t, 0);
            g_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        {
          ATerm z_18 = t;
          int a_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_addi(c_11, g_11);
              ;
              LocalPopChoice(a_19);
            }
          else
            {
              t = z_18;
              t = SSL_addr(c_11, g_11);
            }
        }
        return(t);
      }
      ATerm u_1 (ATerm t)
      {
        t = term_b_19;
        return(t);
      }
      t = foldr_3_0(s_1, t_1, u_1, t);
      u_10 = t;
      t = t_10;
      {
        ATerm v_1 (ATerm t)
        {
          t = term_y_18;
          return(t);
        }
        ATerm y_1 (ATerm t)
        {
          ATerm h_11 = NULL,i_11 = NULL;
          if(match_cons(t, sym__2))
            {
              h_11 = ATgetArgument(t, 0);
              i_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          {
            ATerm f_19 = t;
            int g_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_addi(h_11, i_11);
                ;
                LocalPopChoice(g_19);
              }
            else
              {
                t = f_19;
                t = SSL_addr(h_11, i_11);
              }
          }
          return(t);
        }
        ATerm e_2 (ATerm t)
        {
          t = term_b_19;
          return(t);
        }
        t = foldr_3_0(v_1, y_1, e_2, t);
        w_10 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_10, (ATerm) ATmakeAppl(sym__2, u_10, w_10)));
      }
    }
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        {
          ATerm n_11 = NULL,o_11 = NULL;
          ATerm n_19 = t;
          int o_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_SDef_3))
                {
                  ATerm s_19 = ATgetArgument(t, 0);
                  o_11 = ATgetArgument(t, 1);
                  {
                    ATerm t_19 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(o_19);
              t = o_11;
              {
                ATerm f_2 (ATerm t)
                {
                  ATerm b_13 = NULL;
                  ATerm u_19 = t;
                  int v_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_VarDec_2))
                        {
                          b_13 = ATgetArgument(t, 0);
                          {
                            ATerm w_19 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(v_19);
                      t = b_13;
                    }
                  else
                    {
                      t = u_19;
                      if(match_cons(t, sym_DefaultVarDec_1))
                        {
                          b_13 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = b_13;
                    }
                  return(t);
                }
                t = map_1_0(f_2, t);
              }
            }
          else
            {
              t = n_19;
              {
                ATerm x_19 = t;
                int y_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Rec_2))
                      {
                        n_11 = ATgetArgument(t, 0);
                        {
                          ATerm z_19 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(y_19);
                    t = (ATerm) ATinsert(ATempty, n_11);
                  }
                else
                  {
                    t = x_19;
                    {
                      ATerm a_20 = t;
                      int b_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_SDefT_4))
                            {
                              ATerm c_20 = ATgetArgument(t, 0);
                              o_11 = ATgetArgument(t, 1);
                              {
                                ATerm d_20 = ATgetArgument(t, 2);
                              }
                              {
                                ATerm e_20 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(b_20);
                          t = o_11;
                          {
                            ATerm k_2 (ATerm t)
                            {
                              ATerm v_13 = NULL;
                              ATerm f_20 = t;
                              int i_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      v_13 = ATgetArgument(t, 0);
                                      {
                                        ATerm j_20 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(i_20);
                                  t = v_13;
                                }
                              else
                                {
                                  t = f_20;
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
                            t = map_1_0(k_2, t);
                          }
                        }
                      else
                        {
                          t = a_20;
                          if(match_cons(t, sym_RDefT_4))
                            {
                              ATerm k_20 = ATgetArgument(t, 0);
                              o_11 = ATgetArgument(t, 1);
                              {
                                ATerm n_20 = ATgetArgument(t, 2);
                              }
                              {
                                ATerm o_20 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          t = o_11;
                          {
                            ATerm l_2 (ATerm t)
                            {
                              ATerm b_16 = NULL;
                              ATerm p_20 = t;
                              int q_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      b_16 = ATgetArgument(t, 0);
                                      {
                                        ATerm v_20 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(q_20);
                                  t = b_16;
                                }
                              else
                                {
                                  t = p_20;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      b_16 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = b_16;
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
        ATerm c_21 = ATgetArgument(t, 0);
        if(match_cons(c_21, sym__2))
          {
            q_16 = ATgetArgument(c_21, 0);
            {
              ATerm i_21 = ATgetArgument(c_21, 1);
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
  ATerm f_17 = NULL,i_17 = NULL,k_17 = NULL,l_17 = NULL,q_17 = NULL,r_17 = NULL;
  if(match_cons(t, sym__2))
    {
      k_17 = ATgetArgument(t, 0);
      l_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_17 = ATgetFirst((ATermList) t);
      r_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_17;
  if(match_cons(t, sym__2))
    {
      f_17 = ATgetArgument(t, 0);
      i_17 = ATgetArgument(t, 1);
      {
        ATerm k_21 = t;
        int l_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_17;
            if((k_17 != t))
              {
                _fail(t);
              }
            t = i_17;
            ;
            LocalPopChoice(l_21);
          }
        else
          {
            t = k_21;
            t = (ATerm) ATmakeAppl(sym__2, k_17, r_17);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, k_17, r_17);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm z_112 (ATerm), ATerm t)
{
  ATerm c_18 (ATerm t)
  {
    ATerm p_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_112(t);
        ;
        LocalPopChoice(q_21);
      }
    else
      {
        t = p_21;
        t = SRTS_all(c_18, t);
      }
    return(t);
  }
  t = c_18(t);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm e_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL;
  e_18 = t;
  {
    ATerm s_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_21 = ATgetArgument(t, 0);
            ATerm v_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(t_21);
        t = e_18;
      }
    else
      {
        t = s_21;
        {
          ATerm r_18 = NULL;
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
                  ATerm w_21 = ATgetArgument(t, 0);
                  if(((ATgetType(w_21) != AT_LIST) || !(ATisEmpty(w_21))))
                    _fail(t);
                  {
                    ATerm x_21 = ATgetArgument(t, 1);
                    if(((ATgetType(x_21) != AT_LIST) || !(ATisEmpty(x_21))))
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
              ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL;
              if(match_cons(t, sym__2))
                {
                  ATerm y_21 = ATgetArgument(t, 0);
                  if(((ATgetType(y_21) == AT_LIST) && !(ATisEmpty(y_21))))
                    {
                      u_18 = ATgetFirst((ATermList) y_21);
                      w_18 = (ATerm) ATgetNext((ATermList) y_21);
                    }
                  else
                    _fail(t);
                  {
                    ATerm z_21 = ATgetArgument(t, 1);
                    if(((ATgetType(z_21) == AT_LIST) && !(ATisEmpty(z_21))))
                      {
                        v_18 = ATgetFirst((ATermList) z_21);
                        x_18 = (ATerm) ATgetNext((ATermList) z_21);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_18, v_18), (ATerm) ATmakeAppl(sym__2, w_18, x_18));
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
            r_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, r_18, j_18);
          }
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm t)
{
  ATerm e_19 = NULL,h_19 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      h_19 = ATgetArgument(t, 0);
      e_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_19;
  {
    ATerm r_2 (ATerm t)
    {
      ATerm z_5 = NULL;
      t = q_110(t);
      z_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_5, h_19);
      t = lookup_0_0(t);
      t = r_110(t);
      return(t);
    }
    t = alltd_1_0(r_2, t);
  }
  return(t);
}
ATerm VarDec_2_0 (ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
  r_19 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      j_19 = ATgetArgument(t, 0);
      k_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_19);
  i_19 = t;
  t = j_19;
  t = t_102(t);
  p_19 = t;
  t = k_19;
  t = u_102(t);
  q_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, p_19, q_19), i_19);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,l_20 = NULL,m_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,w_20 = NULL;
  g_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_22 = ATgetFirst((ATermList) t);
      if(match_cons(a_22, sym_SDefT_4))
        {
          h_20 = ATgetArgument(a_22, 0);
          l_20 = ATgetArgument(a_22, 1);
          m_20 = ATgetArgument(a_22, 2);
          {
            ATerm c_22 = ATgetArgument(a_22, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm b_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_20;
  {
    ATerm s_2 (ATerm t)
    {
      t = VarDec_2_0(new_0_0, _id, t);
      return(t);
    }
    t = map_1_0(s_2, t);
    r_20 = t;
    t = m_20;
    {
      ATerm t_2 (ATerm t)
      {
        t = VarDec_2_0(new_0_0, _id, t);
        return(t);
      }
      t = map_1_0(t_2, t);
      s_20 = t;
      t = r_20;
      {
        ATerm u_2 (ATerm t)
        {
          ATerm x_20 = NULL;
          if(match_cons(t, sym_VarDec_2))
            {
              x_20 = ATgetArgument(t, 0);
              {
                ATerm g_22 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_20), (ATerm)ATempty, (ATerm) ATempty);
          return(t);
        }
        t = map_1_0(u_2, t);
        t_20 = t;
        t = s_20;
        {
          ATerm v_2 (ATerm t)
          {
            ATerm y_20 = NULL;
            if(match_cons(t, sym_VarDec_2))
              {
                y_20 = ATgetArgument(t, 0);
                {
                  ATerm h_22 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, y_20);
            return(t);
          }
          t = map_1_0(v_2, t);
          u_20 = t;
          t = g_20;
          {
            ATerm c_3 (ATerm t)
            {
              ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  ATerm i_22 = ATgetArgument(t, 0);
                  z_20 = ATgetArgument(t, 1);
                  a_21 = ATgetArgument(t, 2);
                  b_21 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = a_21;
              {
                ATerm d_3 (ATerm t)
                {
                  ATerm g_21 = NULL;
                  if(match_cons(t, sym_VarDec_2))
                    {
                      g_21 = ATgetArgument(t, 0);
                      {
                        ATerm n_22 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = g_21;
                  return(t);
                }
                t = map_1_0(d_3, t);
                d_21 = t;
                t = z_20;
                {
                  ATerm h_3 (ATerm t)
                  {
                    ATerm h_21 = NULL;
                    if(match_cons(t, sym_VarDec_2))
                      {
                        h_21 = ATgetArgument(t, 0);
                        {
                          ATerm s_22 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = h_21;
                    return(t);
                  }
                  t = map_1_0(h_3, t);
                  e_21 = t;
                  t = (ATerm) ATmakeAppl(sym__3, e_21, t_20, b_21);
                  {
                    ATerm i_3 (ATerm t)
                    {
                      ATerm j_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL;
                      if(match_cons(t, sym_CallT_3))
                        {
                          m_21 = ATgetArgument(t, 0);
                          o_21 = ATgetArgument(t, 1);
                          j_21 = ATgetArgument(t, 2);
                          t = m_21;
                          if(match_cons(t, sym_SVar_1))
                            {
                              n_21 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = o_21;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = j_21;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = n_21;
                        }
                      else
                        {
                          if(match_cons(t, sym_Call_2))
                            {
                              m_21 = ATgetArgument(t, 0);
                              o_21 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = m_21;
                          if(match_cons(t, sym_SVar_1))
                            {
                              n_21 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = o_21;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = n_21;
                        }
                      return(t);
                    }
                    t = substitute_2_0(i_3, _id, t);
                    f_21 = t;
                    t = (ATerm) ATmakeAppl(sym__3, d_21, u_20, f_21);
                    {
                      ATerm j_3 (ATerm t)
                      {
                        ATerm r_21 = NULL;
                        if(match_cons(t, sym_Var_1))
                          {
                            r_21 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = r_21;
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
                t = term_y_22;
                return(t);
              }
              ATerm l_3 (ATerm t)
              {
                ATerm r_6 = NULL,a_7 = NULL,h_7 = NULL;
                r_6 = t;
                t = SSL_explode_term(r_6);
                if(match_cons(t, sym__2))
                  {
                    ATerm z_22 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) z_22) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm a_23 = ATgetArgument(t, 1);
                      if(((ATgetType(a_23) == AT_LIST) && !(ATisEmpty(a_23))))
                        {
                          a_7 = ATgetFirst((ATermList) a_23);
                          {
                            ATerm b_23 = (ATerm) ATgetNext((ATermList) a_23);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(r_6);
                if(match_cons(t, sym__2))
                  {
                    ATerm c_23 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) c_23) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm f_23 = ATgetArgument(t, 1);
                      if(((ATgetType(f_23) == AT_LIST) && !(ATisEmpty(f_23))))
                        {
                          ATerm g_23 = ATgetFirst((ATermList) f_23);
                          ATerm h_23 = (ATerm) ATgetNext((ATermList) f_23);
                          if(((ATgetType(h_23) == AT_LIST) && !(ATisEmpty(h_23))))
                            {
                              h_7 = ATgetFirst((ATermList) h_23);
                              {
                                ATerm m_23 = (ATerm) ATgetNext((ATermList) h_23);
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
                t = (ATerm) ATmakeAppl(sym_Choice_2, a_7, h_7);
                return(t);
              }
              t = foldr_2_0(k_3, l_3, t);
              w_20 = t;
              t = (ATerm) ATmakeAppl(sym_SDefT_4, h_20, r_20, s_20, w_20);
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
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL;
  e_22 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      f_22 = ATgetArgument(t, 0);
      d_22 = ATgetArgument(t, 1);
      {
        ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL;
        t = e_22;
        t = new_0_0(t);
        j_22 = t;
        t = new_0_0(t);
        k_22 = t;
        t = new_0_0(t);
        l_22 = t;
        t = new_0_0(t);
        m_22 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_22), l_22), k_22), j_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, j_22), (ATerm) ATmakeAppl(sym_Var_1, l_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, f_22, (ATerm)ATmakeAppl(sym_Var_1, j_22), (ATerm) ATmakeAppl(sym_Var_1, k_22)), (ATerm) ATmakeAppl(sym_BAM_3, d_22, (ATerm)ATmakeAppl(sym_Var_1, l_22), (ATerm) ATmakeAppl(sym_Var_1, m_22)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_n_23, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_22)), (ATerm) ATmakeAppl(sym_Var_1, k_22))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          f_22 = ATgetArgument(t, 0);
          {
            ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL;
            t = e_22;
            t = new_0_0(t);
            o_22 = t;
            t = f_22;
            {
              ATerm n_3 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((p_22 != NULL) && (p_22 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      p_22 = ATgetArgument(t, 0);
                    if(((q_22 != NULL) && (q_22 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      q_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, o_22);
                return(t);
              }
              t = oncetd_1_0(n_3, t);
              r_22 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_n_23, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_22)), not_null(p_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_22)), (ATerm) ATmakeAppl(sym_Build_1, r_22))));
            }
          }
        }
      else
        {
          ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              f_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_22;
          t = new_0_0(t);
          t_22 = t;
          t = new_0_0(t);
          u_22 = t;
          t = f_22;
          {
            ATerm p_3 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((v_22 != NULL) && (v_22 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    v_22 = ATgetArgument(t, 0);
                  if(((w_22 != NULL) && (w_22 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    w_22 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, t_22);
              return(t);
            }
            t = oncetd_1_0(p_3, t);
            x_22 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_22), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_22)), (ATerm) ATmakeAppl(sym_PrimT_3, term_o_23, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_22))))), (ATerm)ATmakeAppl(sym_Var_1, t_22), (ATerm) ATmakeAppl(sym_Op_2, term_s_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_22)), not_null(v_22)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL;
  d_23 = t;
  if(match_cons(t, sym_Match_1))
    {
      e_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL;
        t = d_23;
        t = new_0_0(t);
        i_23 = t;
        t = e_23;
        {
          ATerm q_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((k_23 != NULL) && (k_23 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_23 = ATgetArgument(t, 0);
                if(((j_23 != NULL) && (j_23 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  j_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, i_23), not_null(k_23));
            return(t);
          }
          t = pat_td_1_0(q_3, t);
          l_23 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_23), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_v_23, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, i_23))), (ATerm) ATmakeAppl(sym_Match_1, not_null(j_23))))));
        }
        ;
        LocalPopChoice(u_23);
      }
    else
      {
        t = t_23;
        {
          ATerm w_23 = t;
          int b_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
              t = d_23;
              t = new_0_0(t);
              p_23 = t;
              t = e_23;
              {
                ATerm r_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((q_23 != NULL) && (q_23 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        q_23 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, p_23);
                  return(t);
                }
                t = pat_td_1_0(r_3, t);
                r_23 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, p_23)), not_null(q_23))));
              }
              ;
              LocalPopChoice(b_24);
            }
          else
            {
              t = w_23;
              {
                ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL;
                t = d_23;
                t = new_0_0(t);
                x_23 = t;
                t = e_23;
                {
                  ATerm x_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((y_23 != NULL) && (y_23 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          y_23 = ATgetArgument(t, 0);
                        if(((z_23 != NULL) && (z_23 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          z_23 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, x_23);
                    return(t);
                  }
                  t = pat_td_1_0(x_3, t);
                  a_24 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, x_23)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_23)), not_null(y_23)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm t)
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
  t = p_97(t);
  y_24 = t;
  t = x_24;
  t = q_97(t);
  z_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, y_24, z_24), v_24);
  return(t);
}
ATerm PrimT_3_0 (ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
  m_25 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      e_25 = ATgetArgument(t, 0);
      f_25 = ATgetArgument(t, 1);
      g_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_25);
  d_25 = t;
  t = e_25;
  t = o_101(t);
  h_25 = t;
  t = f_25;
  t = p_101(t);
  k_25 = t;
  t = g_25;
  t = q_101(t);
  l_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, h_25, k_25, l_25), d_25);
  return(t);
}
ATerm Explode_2_0 (ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,y_25 = NULL,z_25 = NULL;
  z_25 = t;
  if(match_cons(t, sym_Explode_2))
    {
      t_25 = ATgetArgument(t, 0);
      u_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_25);
  s_25 = t;
  t = t_25;
  t = i_97(t);
  v_25 = t;
  t = u_25;
  t = j_97(t);
  y_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, v_25, y_25), s_25);
  return(t);
}
ATerm Op_2_0 (ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,l_26 = NULL,n_26 = NULL,o_26 = NULL;
  o_26 = t;
  if(match_cons(t, sym_Op_2))
    {
      d_26 = ATgetArgument(t, 0);
      e_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_26);
  c_26 = t;
  t = d_26;
  t = e_97(t);
  l_26 = t;
  t = e_26;
  t = f_97(t);
  n_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, l_26, n_26), c_26);
  return(t);
}
ATerm pat_td_1_0 (ATerm n_140 (ATerm), ATerm t)
{
  ATerm c_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_140(t);
      ;
      LocalPopChoice(d_24);
    }
  else
    {
      t = c_24;
      {
        ATerm e_24 = t;
        int h_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_3 (ATerm t)
            {
              ATerm z_3 (ATerm t)
              {
                t = pat_td_1_0(n_140, t);
                return(t);
              }
              t = fetch_1_0(z_3, t);
              return(t);
            }
            t = Op_2_0(_id, y_3, t);
            ;
            LocalPopChoice(h_24);
          }
        else
          {
            t = e_24;
            {
              ATerm m_24 = t;
              int q_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_4 (ATerm t)
                  {
                    t = pat_td_1_0(n_140, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, a_4, t);
                  ;
                  LocalPopChoice(q_24);
                }
              else
                {
                  t = m_24;
                  {
                    ATerm b_25 = t;
                    int c_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_4 (ATerm t)
                        {
                          t = pat_td_1_0(n_140, t);
                          return(t);
                        }
                        t = Explode_2_0(b_4, _id, t);
                        ;
                        LocalPopChoice(c_25);
                      }
                    else
                      {
                        t = b_25;
                        {
                          ATerm i_25 = t;
                          int j_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_4 (ATerm t)
                              {
                                ATerm d_4 (ATerm t)
                                {
                                  t = pat_td_1_0(n_140, t);
                                  return(t);
                                }
                                t = fetch_1_0(d_4, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, c_4, t);
                              ;
                              LocalPopChoice(j_25);
                            }
                          else
                            {
                              t = i_25;
                              {
                                ATerm e_4 (ATerm t)
                                {
                                  t = pat_td_1_0(n_140, t);
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
  ATerm f_24 = NULL,g_24 = NULL;
  f_24 = t;
  if(match_cons(t, sym_Build_1))
    {
      g_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL;
        t = f_24;
        t = new_0_0(t);
        i_24 = t;
        t = g_24;
        {
          ATerm f_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((j_24 != NULL) && (j_24 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_24 = ATgetArgument(t, 0);
                if(((k_24 != NULL) && (k_24 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  k_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, i_24);
            return(t);
          }
          t = pat_td_1_0(f_4, t);
          l_24 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_p_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_24)), not_null(j_24))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_24)))), (ATerm) ATmakeAppl(sym_Build_1, l_24)));
        }
        ;
        LocalPopChoice(o_25);
      }
    else
      {
        t = n_25;
        {
          ATerm q_25 = t;
          int r_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL;
              t = f_24;
              t = new_0_0(t);
              n_24 = t;
              t = g_24;
              {
                ATerm g_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((o_24 != NULL) && (o_24 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        o_24 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, n_24);
                  return(t);
                }
                t = pat_td_1_0(g_4, t);
                p_24 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_24), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_24)))), (ATerm) ATmakeAppl(sym_Build_1, p_24)));
              }
              ;
              LocalPopChoice(r_25);
            }
          else
            {
              t = q_25;
              {
                ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL;
                t = f_24;
                t = new_0_0(t);
                r_24 = t;
                t = g_24;
                {
                  ATerm i_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((s_24 != NULL) && (s_24 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          s_24 = ATgetArgument(t, 0);
                        if(((t_24 != NULL) && (t_24 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          t_24 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, r_24);
                    return(t);
                  }
                  t = pat_td_1_0(i_4, t);
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
ATerm Bapp0_0_0 (ATerm t)
{
  ATerm t_26 = NULL;
  if(match_cons(t, sym_Build_1))
    {
      t_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_26 = NULL,w_26 = NULL;
        t = t_26;
        {
          ATerm j_4 (ATerm t)
          {
            if(match_cons(t, sym_RootApp_1))
              {
                ATerm a_26 = ATgetArgument(t, 0);
                if(match_cons(a_26, sym_Build_1))
                  {
                    if(((v_26 != NULL) && (v_26 != ATgetArgument(a_26, 0))))
                      _fail(ATgetArgument(a_26, 0));
                    else
                      v_26 = ATgetArgument(a_26, 0);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            t = not_null(v_26);
            return(t);
          }
          t = pat_td_1_0(j_4, t);
          w_26 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, w_26);
        }
        ;
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
        {
          ATerm y_26 = NULL,z_26 = NULL;
          t = t_26;
          {
            ATerm m_4 (ATerm t)
            {
              if(match_cons(t, sym_App_2))
                {
                  ATerm b_26 = ATgetArgument(t, 0);
                  if(match_cons(b_26, sym_Build_1))
                    {
                      if(((y_26 != NULL) && (y_26 != ATgetArgument(b_26, 0))))
                        _fail(ATgetArgument(b_26, 0));
                      else
                        y_26 = ATgetArgument(b_26, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm f_26 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = not_null(y_26);
              return(t);
            }
            t = pat_td_1_0(m_4, t);
            z_26 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, z_26);
          }
        }
      }
  }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm n_4 (ATerm t)
        {
          ATerm i_26 = t;
          int j_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(j_26);
            }
          else
            {
              t = i_26;
            }
          return(t);
        }
        t = Cons_2_0(_id, n_4, t);
      }
      ;
      LocalPopChoice(h_26);
    }
  else
    {
      t = g_26;
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
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,m_27 = NULL,n_27 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      m_27 = ATgetArgument(t, 0);
      n_27 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, m_27, n_27);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          m_27 = ATgetArgument(t, 0);
          t = m_27;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_27 = ATgetFirst((ATermList) t);
              i_27 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, h_27, (ATerm) ATmakeAppl(sym_LChoices_1, i_27));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_y_22;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              m_27 = ATgetArgument(t, 0);
              t = m_27;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_27 = ATgetFirst((ATermList) t);
                  i_27 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, h_27, (ATerm) ATmakeAppl(sym_Choices_1, i_27));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_y_22;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  m_27 = ATgetArgument(t, 0);
                  t = m_27;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      h_27 = ATgetFirst((ATermList) t);
                      i_27 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_27, (ATerm) ATmakeAppl(sym_Seqs_1, i_27));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_k_26;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      m_27 = ATgetArgument(t, 0);
                      n_27 = ATgetArgument(t, 1);
                      k_27 = ATgetArgument(t, 2);
                      j_27 = ATgetArgument(t, 3);
                      {
                        ATerm b_28 = NULL,c_28 = NULL;
                        t = n_27;
                        {
                          ATerm p_4 (ATerm t)
                          {
                            ATerm d_28 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                d_28 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, d_28, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_26), term_q_26));
                            return(t);
                          }
                          t = map1_1_0(p_4, t);
                          b_28 = t;
                          t = k_27;
                          {
                            ATerm r_4 (ATerm t)
                            {
                              ATerm r_26 = t;
                              int s_26 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm g_28 = NULL;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      g_28 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_28, term_q_26);
                                  ;
                                  LocalPopChoice(s_26);
                                }
                              else
                                {
                                  t = r_26;
                                }
                              return(t);
                            }
                            t = map1_1_0(r_4, t);
                            c_28 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, m_27, b_28, c_28, j_27);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          m_27 = ATgetArgument(t, 0);
                          n_27 = ATgetArgument(t, 1);
                          k_27 = ATgetArgument(t, 2);
                          j_27 = ATgetArgument(t, 3);
                          {
                            ATerm u_26 = t;
                            int x_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm m_28 = NULL,n_28 = NULL;
                                t = k_27;
                                {
                                  ATerm s_4 (ATerm t)
                                  {
                                    ATerm o_28 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        o_28 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, o_28, term_q_26);
                                    return(t);
                                  }
                                  t = map1_1_0(s_4, t);
                                  m_28 = t;
                                  t = n_27;
                                  {
                                    ATerm w_4 (ATerm t)
                                    {
                                      ATerm a_27 = t;
                                      int b_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm q_28 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              q_28 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, q_28, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_26), term_q_26));
                                          ;
                                          LocalPopChoice(b_27);
                                        }
                                      else
                                        {
                                          t = a_27;
                                        }
                                      return(t);
                                    }
                                    t = map_1_0(w_4, t);
                                    n_28 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, m_27, n_28, m_28, j_27);
                                  }
                                }
                                ;
                                LocalPopChoice(x_26);
                              }
                            else
                              {
                                t = u_26;
                                {
                                  ATerm w_28 = NULL,x_28 = NULL;
                                  t = n_27;
                                  {
                                    ATerm x_4 (ATerm t)
                                    {
                                      ATerm y_28 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          y_28 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, y_28, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_26), term_q_26));
                                      return(t);
                                    }
                                    t = map1_1_0(x_4, t);
                                    w_28 = t;
                                    t = k_27;
                                    {
                                      ATerm z_4 (ATerm t)
                                      {
                                        ATerm c_27 = t;
                                        int d_27 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm a_29 = NULL;
                                            if(match_cons(t, sym_DefaultVarDec_1))
                                              {
                                                a_29 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_VarDec_2, a_29, term_q_26);
                                            ;
                                            LocalPopChoice(d_27);
                                          }
                                        else
                                          {
                                            t = c_27;
                                          }
                                        return(t);
                                      }
                                      t = map_1_0(z_4, t);
                                      x_28 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, m_27, w_28, x_28, j_27);
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
                              m_27 = ATgetArgument(t, 0);
                              n_27 = ATgetArgument(t, 1);
                              k_27 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, n_27, (ATerm) ATmakeAppl(sym_Op_2, term_s_23, (ATerm) ATinsert(ATinsert(ATempty, k_27), m_27)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  m_27 = ATgetArgument(t, 0);
                                  n_27 = ATgetArgument(t, 1);
                                  k_27 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, k_27)), m_27), (ATerm) ATmakeAppl(sym_Build_1, n_27)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      m_27 = ATgetArgument(t, 0);
                                      n_27 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_27, (ATerm) ATmakeAppl(sym_Match_1, n_27));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          m_27 = ATgetArgument(t, 0);
                                          n_27 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_27), n_27);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              m_27 = ATgetArgument(t, 0);
                                              n_27 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_27), m_27);
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
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      p_29 = ATgetArgument(t, 0);
      q_29 = ATgetArgument(t, 1);
      r_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = r_29;
  {
    ATerm b_5 (ATerm t)
    {
      ATerm e_27 = t;
      if((PushChoice() == 0))
        {
          t = Var_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = e_27;
        }
      return(t);
    }
    t = fetch_1_0(b_5, t);
    t = r_29;
    {
      ATerm d_5 (ATerm t)
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = term_f_27;
        return(t);
      }
      ATerm e_5 (ATerm t)
      {
        ATerm v_29 = NULL,x_29 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_29 = ATgetFirst((ATermList) t);
            x_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_29, x_29);
        return(t);
      }
      ATerm g_5 (ATerm t)
      {
        ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm g_27 = ATgetArgument(t, 0);
            if(match_cons(g_27, sym__2))
              {
                y_29 = ATgetArgument(g_27, 0);
                a_30 = ATgetArgument(g_27, 1);
              }
            else
              _fail(t);
            {
              ATerm l_27 = ATgetArgument(t, 1);
              if(match_cons(l_27, sym__2))
                {
                  z_29 = ATgetArgument(l_27, 0);
                  b_30 = ATgetArgument(l_27, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_29), y_29), (ATerm) ATinsert(CheckATermList(b_30), a_30));
        return(t);
      }
      t = genzip_4_0(d_5, e_5, g_5, LiftPrimArg_0_0, t);
      {
        ATerm h_5 (ATerm t)
        {
          ATerm i_5 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = term_f_27;
            return(t);
          }
          ATerm l_5 (ATerm t)
          {
            ATerm c_30 = NULL,f_30 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_30 = ATgetFirst((ATermList) t);
                f_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, c_30, f_30);
            return(t);
          }
          ATerm o_5 (ATerm t)
          {
            ATerm g_30 = NULL,j_30 = NULL,l_30 = NULL,m_30 = NULL;
            if(match_cons(t, sym__2))
              {
                ATerm o_27 = ATgetArgument(t, 0);
                if(match_cons(o_27, sym__2))
                  {
                    g_30 = ATgetArgument(o_27, 0);
                    l_30 = ATgetArgument(o_27, 1);
                  }
                else
                  _fail(t);
                {
                  ATerm p_27 = ATgetArgument(t, 1);
                  if(match_cons(p_27, sym__2))
                    {
                      j_30 = ATgetArgument(p_27, 0);
                      m_30 = ATgetArgument(p_27, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_30), g_30), (ATerm) ATinsert(CheckATermList(m_30), l_30));
            return(t);
          }
          t = genzip_4_0(i_5, l_5, o_5, _id, t);
          return(t);
        }
        t = _2_0(concat_0_0, h_5, t);
        if(match_cons(t, sym__2))
          {
            s_29 = ATgetArgument(t, 0);
            {
              ATerm q_27 = ATgetArgument(t, 1);
              if(match_cons(q_27, sym__2))
                {
                  t_29 = ATgetArgument(q_27, 0);
                  u_29 = ATgetArgument(q_27, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, s_29, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_29), (ATerm) ATmakeAppl(sym_CallT_3, p_29, q_29, u_29)));
      }
    }
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm v_30 (ATerm p_30, ATerm t)
  {
    ATerm r_30 = NULL;
    t = p_30;
    {
      ATerm r_27 = t;
      if((PushChoice() == 0))
        {
          t = Var_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = r_27;
        }
      t = new_0_0(t);
      r_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, r_30), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_30), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_30)))), (ATerm) ATmakeAppl(sym_Var_1, r_30)));
    }
    return(t);
  }
  ATerm s_30 = NULL,t_30 = NULL;
  s_30 = t;
  if(match_cons(t, sym_Var_1))
    {
      t_30 = ATgetArgument(t, 0);
      {
        ATerm s_27 = t;
        int t_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_30(s_30, t);
            ;
            LocalPopChoice(t_27);
          }
        else
          {
            t = s_27;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_k_26, (ATerm) ATmakeAppl(sym_Var_1, t_30)));
          }
      }
    }
  else
    {
      t = v_30(s_30, t);
    }
  return(t);
}
ATerm Var_1_0 (ATerm y_96 (ATerm), ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,z_30 = NULL,b_31 = NULL;
  b_31 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_31);
  w_30 = t;
  t = x_30;
  t = y_96(t);
  z_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, z_30), w_30);
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL;
  f_33 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      g_33 = ATgetArgument(t, 0);
      h_33 = ATgetArgument(t, 1);
      e_33 = ATgetArgument(t, 2);
      {
        ATerm z_7 = NULL,a_8 = NULL,c_8 = NULL;
        t = e_33;
        {
          ATerm r_5 (ATerm t)
          {
            ATerm u_27 = t;
            if((PushChoice() == 0))
              {
                t = Var_1_0(_id, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_27;
              }
            return(t);
          }
          t = fetch_1_0(r_5, t);
          t = e_33;
          {
            ATerm s_5 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_f_27;
              return(t);
            }
            ATerm t_5 (ATerm t)
            {
              ATerm d_8 = NULL,e_8 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_8 = ATgetFirst((ATermList) t);
                  e_8 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, d_8, e_8);
              return(t);
            }
            ATerm x_5 (ATerm t)
            {
              ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL;
              if(match_cons(t, sym__2))
                {
                  ATerm v_27 = ATgetArgument(t, 0);
                  if(match_cons(v_27, sym__2))
                    {
                      f_8 = ATgetArgument(v_27, 0);
                      h_8 = ATgetArgument(v_27, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm w_27 = ATgetArgument(t, 1);
                    if(match_cons(w_27, sym__2))
                      {
                        g_8 = ATgetArgument(w_27, 0);
                        i_8 = ATgetArgument(w_27, 1);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_8), f_8), (ATerm) ATinsert(CheckATermList(i_8), h_8));
              return(t);
            }
            t = genzip_4_0(s_5, t_5, x_5, LiftPrimArg_0_0, t);
            {
              ATerm y_5 (ATerm t)
              {
                ATerm a_6 (ATerm t)
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_f_27;
                  return(t);
                }
                ATerm c_6 (ATerm t)
                {
                  ATerm j_8 = NULL,k_8 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      j_8 = ATgetFirst((ATermList) t);
                      k_8 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, j_8, k_8);
                  return(t);
                }
                ATerm g_6 (ATerm t)
                {
                  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm x_27 = ATgetArgument(t, 0);
                      if(match_cons(x_27, sym__2))
                        {
                          m_8 = ATgetArgument(x_27, 0);
                          o_8 = ATgetArgument(x_27, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm y_27 = ATgetArgument(t, 1);
                        if(match_cons(y_27, sym__2))
                          {
                            n_8 = ATgetArgument(y_27, 0);
                            p_8 = ATgetArgument(y_27, 1);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_8), m_8), (ATerm) ATinsert(CheckATermList(p_8), o_8));
                  return(t);
                }
                t = genzip_4_0(a_6, c_6, g_6, _id, t);
                return(t);
              }
              t = _2_0(concat_0_0, y_5, t);
              if(match_cons(t, sym__2))
                {
                  z_7 = ATgetArgument(t, 0);
                  {
                    ATerm z_27 = ATgetArgument(t, 1);
                    if(match_cons(z_27, sym__2))
                      {
                        a_8 = ATgetArgument(z_27, 0);
                        c_8 = ATgetArgument(z_27, 1);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Scope_2, z_7, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, a_8), (ATerm) ATmakeAppl(sym_PrimT_3, g_33, h_33, c_8)));
            }
          }
        }
      }
    }
  else
    {
      ATerm z_8 = NULL,d_9 = NULL,e_9 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          g_33 = ATgetArgument(t, 0);
          h_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_33;
      {
        ATerm h_6 (ATerm t)
        {
          ATerm a_28 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_28;
            }
          return(t);
        }
        t = fetch_1_0(h_6, t);
        t = h_33;
        {
          ATerm i_6 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = term_f_27;
            return(t);
          }
          ATerm m_6 (ATerm t)
          {
            ATerm f_9 = NULL,g_9 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_9 = ATgetFirst((ATermList) t);
                g_9 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, f_9, g_9);
            return(t);
          }
          ATerm n_6 (ATerm t)
          {
            ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL,n_9 = NULL;
            if(match_cons(t, sym__2))
              {
                ATerm e_28 = ATgetArgument(t, 0);
                if(match_cons(e_28, sym__2))
                  {
                    h_9 = ATgetArgument(e_28, 0);
                    j_9 = ATgetArgument(e_28, 1);
                  }
                else
                  _fail(t);
                {
                  ATerm f_28 = ATgetArgument(t, 1);
                  if(match_cons(f_28, sym__2))
                    {
                      i_9 = ATgetArgument(f_28, 0);
                      n_9 = ATgetArgument(f_28, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_9), h_9), (ATerm) ATinsert(CheckATermList(n_9), j_9));
            return(t);
          }
          t = genzip_4_0(i_6, m_6, n_6, LiftPrimArg_0_0, t);
          {
            ATerm o_6 (ATerm t)
            {
              ATerm s_6 (ATerm t)
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = term_f_27;
                return(t);
              }
              ATerm w_6 (ATerm t)
              {
                ATerm p_9 = NULL,t_9 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    p_9 = ATgetFirst((ATermList) t);
                    t_9 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, p_9, t_9);
                return(t);
              }
              ATerm x_6 (ATerm t)
              {
                ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm h_28 = ATgetArgument(t, 0);
                    if(match_cons(h_28, sym__2))
                      {
                        u_9 = ATgetArgument(h_28, 0);
                        w_9 = ATgetArgument(h_28, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm i_28 = ATgetArgument(t, 1);
                      if(match_cons(i_28, sym__2))
                        {
                          v_9 = ATgetArgument(i_28, 0);
                          x_9 = ATgetArgument(i_28, 1);
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_9), u_9), (ATerm) ATinsert(CheckATermList(x_9), w_9));
                return(t);
              }
              t = genzip_4_0(s_6, w_6, x_6, _id, t);
              return(t);
            }
            t = _2_0(concat_0_0, o_6, t);
            if(match_cons(t, sym__2))
              {
                z_8 = ATgetArgument(t, 0);
                {
                  ATerm j_28 = ATgetArgument(t, 1);
                  if(match_cons(j_28, sym__2))
                    {
                      d_9 = ATgetArgument(j_28, 0);
                      e_9 = ATgetArgument(j_28, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, z_8, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, d_9), (ATerm) ATmakeAppl(sym_PrimT_3, g_33, (ATerm)ATempty, e_9)));
          }
        }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm s_127 (ATerm), ATerm t)
{
  ATerm n_33 (ATerm t)
  {
    ATerm k_28 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_127(t);
        t = n_33(t);
        ;
        LocalPopChoice(l_28);
      }
    else
      {
        t = k_28;
      }
    return(t);
  }
  t = n_33(t);
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm p_28 = t;
  if((PushChoice() == 0))
    {
      ATerm y_6 (ATerm t)
      {
        ATerm r_28 = t;
        int s_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(s_28);
          }
        else
          {
            t = r_28;
            if(!(match_cons(t, sym_Wld_0)))
              _fail(t);
          }
        return(t);
      }
      t = topdown_1_0(y_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_28;
    }
  return(t);
}
ATerm App_2_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL;
  t_33 = t;
  if(match_cons(t, sym_App_2))
    {
      p_33 = ATgetArgument(t, 0);
      q_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_33);
  o_33 = t;
  t = p_33;
  t = m_97(t);
  r_33 = t;
  t = q_33;
  t = n_97(t);
  s_33 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, r_33, s_33), o_33);
  return(t);
}
ATerm Con_3_0 (ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL;
  h_34 = t;
  if(match_cons(t, sym_Con_3))
    {
      a_34 = ATgetArgument(t, 0);
      b_34 = ATgetArgument(t, 1);
      c_34 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_34);
  z_33 = t;
  t = a_34;
  t = y_97(t);
  d_34 = t;
  t = b_34;
  t = z_97(t);
  f_34 = t;
  t = c_34;
  t = a_98(t);
  g_34 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, d_34, f_34, g_34), z_33);
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm t_28 = t;
  if((PushChoice() == 0))
    {
      ATerm z_6 (ATerm t)
      {
        ATerm u_28 = t;
        int v_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(v_28);
          }
        else
          {
            t = u_28;
            t = App_2_0(_id, _id, t);
          }
        return(t);
      }
      t = topdown_1_0(z_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_28;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL,t_34 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      n_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_34;
  if(match_cons(t, sym_StratRule_3))
    {
      o_34 = ATgetArgument(t, 0);
      p_34 = ATgetArgument(t, 1);
      t_34 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_34), (ATerm) ATmakeAppl(sym_Where_1, t_34)), o_34));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          o_34 = ATgetArgument(t, 0);
          p_34 = ATgetArgument(t, 1);
          t_34 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = o_34;
      t = pureterm_0_0(t);
      t = p_34;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, p_34)), (ATerm) ATmakeAppl(sym_Where_1, t_34)), (ATerm) ATmakeAppl(sym_Match_1, o_34)));
    }
  return(t);
}
ATerm Scope_2_0 (ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm t)
{
  ATerm e_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL;
  k_35 = t;
  if(match_cons(t, sym_Scope_2))
    {
      g_35 = ATgetArgument(t, 0);
      h_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_35);
  e_35 = t;
  t = g_35;
  t = s_100(t);
  i_35 = t;
  t = h_35;
  t = t_100(t);
  j_35 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, i_35, j_35), e_35);
  return(t);
}
ATerm oncetd_1_0 (ATerm l_112 (ATerm), ATerm t)
{
  ATerm n_35 (ATerm t)
  {
    ATerm z_28 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_112(t);
        ;
        LocalPopChoice(b_29);
      }
    else
      {
        t = z_28;
        t = SRTS_one(n_35, t);
      }
    return(t);
  }
  t = n_35(t);
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm c_29 = ATgetArgument(t, 0);
      if(match_cons(c_29, sym_Rule_3))
        {
          o_35 = ATgetArgument(c_29, 0);
          p_35 = ATgetArgument(c_29, 1);
          q_35 = ATgetArgument(c_29, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  r_35 = t;
  t = o_35;
  {
    ATerm b_7 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm d_29 = ATgetArgument(t, 0);
          if(match_cons(d_29, sym_Var_1))
            {
              if(((t_35 != NULL) && (t_35 != ATgetArgument(d_29, 0))))
                _fail(ATgetArgument(d_29, 0));
              else
                t_35 = ATgetArgument(d_29, 0);
            }
          else
            _fail(t);
          if(((s_35 != NULL) && (s_35 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            s_35 = ATgetArgument(t, 1);
          {
            ATerm e_29 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_35));
      return(t);
    }
    t = oncetd_1_0(b_7, t);
    u_35 = t;
    t = p_35;
    {
      ATerm f_7 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm f_29 = ATgetArgument(t, 0);
            if(match_cons(f_29, sym_Var_1))
              {
                if(((t_35 != NULL) && (t_35 != ATgetArgument(f_29, 0))))
                  _fail(ATgetArgument(f_29, 0));
                else
                  t_35 = ATgetArgument(f_29, 0);
              }
            else
              _fail(t);
            if(((v_35 != NULL) && (v_35 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              v_35 = ATgetArgument(t, 1);
            {
              ATerm g_29 = ATgetArgument(t, 2);
              if(match_cons(g_29, sym_CallT_3))
                {
                  if(((w_35 != NULL) && (w_35 != ATgetArgument(g_29, 0))))
                    _fail(ATgetArgument(g_29, 0));
                  else
                    w_35 = ATgetArgument(g_29, 0);
                  {
                    ATerm h_29 = ATgetArgument(g_29, 1);
                    if(((ATgetType(h_29) != AT_LIST) || !(ATisEmpty(h_29))))
                      _fail(t);
                  }
                  {
                    ATerm i_29 = ATgetArgument(g_29, 2);
                    if(((ATgetType(i_29) != AT_LIST) || !(ATisEmpty(i_29))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, r_35);
        return(t);
      }
      t = oncetd_1_0(f_7, t);
      x_35 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_35), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, u_35, x_35, (ATerm) ATmakeAppl(sym_Seq_2, q_35, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(w_35), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(s_35), not_null(v_35), term_k_26))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_35)), (ATerm) ATmakeAppl(sym_Var_1, r_35))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_29 = t;
      int m_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0_0(t);
          t = desugarRule_0_0(t);
          ;
          LocalPopChoice(m_29);
        }
      else
        {
          t = l_29;
          {
            ATerm n_29 = t;
            int o_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2_0(_id, desugarRule_0_0, t);
                ;
                LocalPopChoice(o_29);
              }
            else
              {
                t = n_29;
                t = RtoS_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(k_29);
    }
  else
    {
      t = j_29;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm h_111 (ATerm), ATerm t)
{
  t = h_111(t);
  {
    ATerm g_7 (ATerm t)
    {
      t = topdown_1_0(h_111, t);
      return(t);
    }
    t = SRTS_all(g_7, t);
  }
  return(t);
}
ATerm desugar_0_0 (ATerm t)
{
  ATerm i_7 (ATerm t)
  {
    ATerm w_29 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = desugarRule_0_0(t);
        ;
        LocalPopChoice(d_30);
      }
    else
      {
        t = w_29;
      }
    {
      ATerm j_7 (ATerm t)
      {
        ATerm e_30 = t;
        int h_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            ;
            LocalPopChoice(h_30);
          }
        else
          {
            t = e_30;
            {
              ATerm i_30 = t;
              int k_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = LiftCallArgs_0_0(t);
                  ;
                  LocalPopChoice(k_30);
                }
              else
                {
                  t = i_30;
                  {
                    ATerm n_30 = t;
                    int o_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = HL_0_0(t);
                        ;
                        LocalPopChoice(o_30);
                      }
                    else
                      {
                        t = n_30;
                        {
                          ATerm q_30 = t;
                          int u_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_30 = t;
                              int a_31 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Bapp0_0_0(t);
                                  ;
                                  LocalPopChoice(a_31);
                                }
                              else
                                {
                                  t = y_30;
                                  {
                                    ATerm c_31 = t;
                                    int d_31 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL;
                                        if(match_cons(t, sym_Build_1))
                                          {
                                            e_36 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = e_36;
                                        if(match_cons(t, sym_RootApp_1))
                                          {
                                            f_36 = ATgetArgument(t, 0);
                                            t = f_36;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_App_2))
                                              {
                                                f_36 = ATgetArgument(t, 0);
                                                g_36 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_36), f_36);
                                          }
                                        ;
                                        LocalPopChoice(d_31);
                                      }
                                    else
                                      {
                                        t = c_31;
                                        t = Bapp2_0_0(t);
                                      }
                                  }
                                }
                              ;
                              LocalPopChoice(u_30);
                            }
                          else
                            {
                              t = q_30;
                              {
                                ATerm e_31 = t;
                                int f_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm g_31 = t;
                                    int h_31 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL;
                                        if(match_cons(t, sym_Match_1))
                                          {
                                            c_10 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = c_10;
                                        {
                                          ATerm k_7 (ATerm t)
                                          {
                                            if(match_cons(t, sym_RootApp_1))
                                              {
                                                ATerm i_31 = ATgetArgument(t, 0);
                                                if(match_cons(i_31, sym_Match_1))
                                                  {
                                                    if(((d_10 != NULL) && (d_10 != ATgetArgument(i_31, 0))))
                                                      _fail(ATgetArgument(i_31, 0));
                                                    else
                                                      d_10 = ATgetArgument(i_31, 0);
                                                  }
                                                else
                                                  _fail(t);
                                              }
                                            else
                                              _fail(t);
                                            t = not_null(d_10);
                                            return(t);
                                          }
                                          t = pat_td_1_0(k_7, t);
                                          e_10 = t;
                                          t = (ATerm) ATmakeAppl(sym_Match_1, e_10);
                                        }
                                        ;
                                        LocalPopChoice(h_31);
                                      }
                                    else
                                      {
                                        t = g_31;
                                        {
                                          ATerm j_31 = t;
                                          int k_31 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
                                              if(match_cons(t, sym_Match_1))
                                                {
                                                  l_36 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = l_36;
                                              if(match_cons(t, sym_RootApp_1))
                                                {
                                                  m_36 = ATgetArgument(t, 0);
                                                  t = m_36;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_App_2))
                                                    {
                                                      m_36 = ATgetArgument(t, 0);
                                                      n_36 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_BA_2, m_36, n_36);
                                                }
                                              ;
                                              LocalPopChoice(k_31);
                                            }
                                          else
                                            {
                                              t = j_31;
                                              t = Mapp2_0_0(t);
                                            }
                                        }
                                      }
                                    ;
                                    LocalPopChoice(f_31);
                                  }
                                else
                                  {
                                    t = e_31;
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
      t = repeat_1_0(j_7, t);
    }
    return(t);
  }
  t = topdown_1_0(i_7, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm j_115 (ATerm), ATerm t)
{
  ATerm t_36 = NULL;
  ATerm y_36 (ATerm t)
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_36 = NULL,w_36 = NULL,x_36 = NULL;
        u_36 = t;
        {
          ATerm l_7 (ATerm t)
          {
            ATerm h_10 = NULL,i_10 = NULL;
            h_10 = t;
            t = SSL_explode_term(h_10);
            if(match_cons(t, sym__2))
              {
                ATerm n_31 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) n_31) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm o_31 = ATgetArgument(t, 1);
                  if(((ATgetType(o_31) == AT_LIST) && !(ATisEmpty(o_31))))
                    {
                      i_10 = ATgetFirst((ATermList) o_31);
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
            t = i_10;
            return(t);
          }
          t = map_1_0(l_7, t);
          t = j_115(t);
          w_36 = t;
          t = u_36;
          {
            ATerm o_7 (ATerm t)
            {
              ATerm l_10 = NULL,m_10 = NULL;
              l_10 = t;
              t = SSL_explode_term(l_10);
              if(match_cons(t, sym__2))
                {
                  ATerm q_31 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) q_31) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm r_31 = ATgetArgument(t, 1);
                    if(((ATgetType(r_31) == AT_LIST) && !(ATisEmpty(r_31))))
                      {
                        ATerm s_31 = ATgetFirst((ATermList) r_31);
                        m_10 = (ATerm) ATgetNext((ATermList) r_31);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), m_10);
              return(t);
            }
            t = map_1_0(o_7, t);
            t = y_36(t);
            x_36 = t;
            t = (ATerm) ATinsert(CheckATermList(x_36), w_36);
          }
        }
        ;
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
        {
          ATerm p_7 (ATerm t)
          {
            if(!(match_cons(t, sym__0)))
              _fail(t);
            return(t);
          }
          t = map_1_0(p_7, t);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = y_36(t);
  t_36 = t;
  t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), t_36);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm z_36 = NULL;
  z_36 = t;
  {
    ATerm t_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL;
        t = z_36;
        t = new_0_0(t);
        b_37 = t;
        t = new_0_0(t);
        c_37 = t;
        t = new_0_0(t);
        d_37 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_37), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_s_23, (ATerm) ATinsert(ATinsert(ATempty, z_36), (ATerm) ATmakeAppl(sym_Var_1, c_37))), (ATerm) ATmakeAppl(sym_Var_1, d_37)), (ATerm)ATmakeAppl(sym_VarDec_2, b_37, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_26), term_q_26)), c_37, (ATerm)ATmakeAppl(sym_Var_1, c_37), d_37, (ATerm) ATmakeAppl(sym_Var_1, d_37));
        ;
        LocalPopChoice(u_31);
      }
    else
      {
        t = t_31;
        {
          ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
          t = z_36;
          t = new_0_0(t);
          f_37 = t;
          t = new_0_0(t);
          g_37 = t;
          t = new_0_0(t);
          h_37 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_37), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_s_23, (ATerm) ATinsert(ATinsert(ATempty, z_36), (ATerm) ATmakeAppl(sym_Var_1, g_37))), (ATerm) ATmakeAppl(sym_Var_1, h_37)), (ATerm)ATmakeAppl(sym_VarDec_2, f_37, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_26), term_q_26)), g_37, (ATerm)ATmakeAppl(sym_Var_1, g_37), h_37, (ATerm) ATmakeAppl(sym_Var_1, h_37));
        }
      }
  }
  return(t);
}
ATerm copy_1_0 (ATerm m_122 (ATerm), ATerm t)
{
  ATerm t_7 (ATerm t)
  {
    ATerm i_37 = NULL,j_37 = NULL;
    if(match_cons(t, sym__2))
      {
        i_37 = ATgetArgument(t, 0);
        j_37 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, i_37, j_37, (ATerm) ATempty);
    return(t);
  }
  ATerm u_7 (ATerm t)
  {
    ATerm k_37 = NULL;
    if(match_cons(t, sym__3))
      {
        ATerm v_31 = ATgetArgument(t, 0);
        if(((ATgetType(v_31) != AT_INT) || (ATgetInt((ATermInt) v_31) != 0)))
          _fail(t);
        {
          ATerm w_31 = ATgetArgument(t, 1);
        }
        k_37 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = k_37;
    return(t);
  }
  ATerm w_7 (ATerm t)
  {
    ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL;
    if(match_cons(t, sym__3))
      {
        l_37 = ATgetArgument(t, 0);
        m_37 = ATgetArgument(t, 1);
        n_37 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, l_37, term_b_19);
    t = geq_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, l_37, term_b_19);
    {
      ATerm x_31 = t;
      int y_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(l_37, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(y_31);
        }
      else
        {
          t = x_31;
          t = SSL_subtr(l_37, (ATerm) ATmakeInt(1));
        }
      o_37 = t;
      t = m_37;
      t = m_122(t);
      p_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, o_37, m_37, (ATerm) ATinsert(CheckATermList(n_37), p_37));
    }
    return(t);
  }
  t = for_3_0(t_7, u_7, w_7, t);
  return(t);
}
ATerm MkThreadApplication_0_0 (ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL;
  if(match_cons(t, sym__2))
    {
      q_37 = ATgetArgument(t, 0);
      r_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = new_0_0(t);
  s_37 = t;
  t = new_0_0(t);
  t_37 = t;
  t = new_0_0(t);
  u_37 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_37), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_s_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, q_37)), (ATerm) ATmakeAppl(sym_Var_1, t_37))), (ATerm) ATmakeAppl(sym_Op_2, term_s_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_37)), (ATerm) ATmakeAppl(sym_Var_1, u_37)))), (ATerm)ATmakeAppl(sym_VarDec_2, s_37, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_26), term_q_26)), t_37, (ATerm)ATmakeAppl(sym_Var_1, t_37), u_37, (ATerm) ATmakeAppl(sym_Var_1, u_37));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_37 = ATgetFirst((ATermList) t);
      z_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_37;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm z_31 = t;
      int a_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_37;
          ;
          LocalPopChoice(a_32);
        }
      else
        {
          t = z_31;
          t = z_37;
          t = last_0_0(t);
        }
    }
  else
    {
      t = z_37;
      t = last_0_0(t);
    }
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm w_40 (ATerm n_38, ATerm o_38, ATerm p_38, ATerm q_38, ATerm t)
  {
    ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, o_38, term_b_19);
    {
      ATerm b_32 = t;
      int c_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(o_38, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(c_32);
        }
      else
        {
          t = b_32;
          t = SSL_addr(o_38, (ATerm) ATmakeInt(1));
        }
      u_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_38, term_c_15);
      t = copy_1_0(new_0_0, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_38 = ATgetFirst((ATermList) t);
          w_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_38;
      t = last_0_0(t);
      x_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_38), v_38), w_38);
      {
        ATerm x_7 (ATerm t)
        {
          if(match_cons(t, sym__2))
            {
              ATerm d_32 = ATgetArgument(t, 0);
              ATerm e_32 = ATgetArgument(t, 1);
              if(((ATgetType(e_32) != AT_LIST) || !(ATisEmpty(e_32))))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm y_7 (ATerm t)
        {
          ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL;
          if(match_cons(t, sym__2))
            {
              ATerm f_32 = ATgetArgument(t, 0);
              if(((ATgetType(f_32) == AT_LIST) && !(ATisEmpty(f_32))))
                {
                  f_39 = ATgetFirst((ATermList) f_32);
                  h_39 = (ATerm) ATgetNext((ATermList) f_32);
                }
              else
                _fail(t);
              {
                ATerm g_32 = ATgetArgument(t, 1);
                if(((ATgetType(g_32) == AT_LIST) && !(ATisEmpty(g_32))))
                  {
                    g_39 = ATgetFirst((ATermList) g_32);
                    i_39 = (ATerm) ATgetNext((ATermList) g_32);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_39, g_39), (ATerm) ATmakeAppl(sym__2, h_39, i_39));
          return(t);
        }
        ATerm l_8 (ATerm t)
        {
          ATerm j_39 = NULL,k_39 = NULL;
          if(match_cons(t, sym__2))
            {
              j_39 = ATgetArgument(t, 0);
              k_39 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(k_39), j_39);
          return(t);
        }
        t = genzip_4_0(x_7, y_7, l_8, MkThreadApplication_0_0, t);
        t = tuple_unzip_1_0(_id, t);
        if(match_cons(t, sym__6))
          {
            y_38 = ATgetArgument(t, 0);
            z_38 = ATgetArgument(t, 1);
            a_39 = ATgetArgument(t, 2);
            b_39 = ATgetArgument(t, 3);
            c_39 = ATgetArgument(t, 4);
            d_39 = ATgetArgument(t, 5);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_39), a_39), w_38);
        t = concat_0_0(t);
        e_39 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, n_38, term_h_32), z_38, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(e_39), v_38), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_s_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_38)), (ATerm) ATmakeAppl(sym_Op_2, n_38, b_39))), (ATerm)ATmakeAppl(sym_Op_2, term_s_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, x_38)), (ATerm) ATmakeAppl(sym_Op_2, n_38, d_39))), (ATerm) ATmakeAppl(sym_Seqs_1, y_38)))));
      }
    }
    return(t);
  }
  ATerm x_40 (ATerm l_39, ATerm m_39, ATerm n_39, ATerm o_39, ATerm t)
  {
    ATerm u_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,b_40 = NULL,c_40 = NULL,e_40 = NULL,k_40 = NULL;
    t = o_39;
    t = new_0_0(t);
    u_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_39, (ATerm) ATmakeAppl(sym_Var_1, u_39));
    t = copy_1_0(MkDistApplication_0_0, t);
    t = tuple_unzip_1_0(_id, t);
    if(match_cons(t, sym__6))
      {
        w_39 = ATgetArgument(t, 0);
        x_39 = ATgetArgument(t, 1);
        y_39 = ATgetArgument(t, 2);
        b_40 = ATgetArgument(t, 3);
        c_40 = ATgetArgument(t, 4);
        e_40 = ATgetArgument(t, 5);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, y_39, c_40);
    {
      ATerm i_32 = t;
      int j_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm k_32 = ATgetArgument(t, 0);
              ATerm l_32 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_39;
          {
            ATerm q_8 (ATerm t)
            {
              t = c_40;
              return(t);
            }
            t = at_end_1_0(q_8, t);
          }
          ;
          LocalPopChoice(j_32);
        }
      else
        {
          t = i_32;
          {
            ATerm r_10 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, y_39, c_40));
            if(match_cons(t, sym__2))
              {
                ATerm m_32 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) m_32) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                r_10 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_10;
            t = concat_0_0(t);
          }
        }
      k_40 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, l_39, term_n_32), x_39, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(k_40), u_39), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_s_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_39)), (ATerm) ATmakeAppl(sym_Op_2, l_39, b_40))), (ATerm)ATmakeAppl(sym_Op_2, l_39, e_40), (ATerm) ATmakeAppl(sym_Seqs_1, w_39)))));
    }
    return(t);
  }
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL;
  o_40 = t;
  if(match_cons(t, sym__3))
    {
      p_40 = ATgetArgument(t, 0);
      q_40 = ATgetArgument(t, 1);
      r_40 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_40;
  if(match_string(t, "T"))
    {
      t = r_40;
      if(match_cons(t, sym__2))
        {
          s_40 = ATgetArgument(t, 0);
          t_40 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_40;
      if(match_int(t, 0))
        {
          ATerm o_32 = t;
          int p_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_40(p_40, s_40, t_40, o_40, t);
              ;
              LocalPopChoice(p_32);
            }
          else
            {
              t = o_32;
              {
                ATerm v_40 = NULL;
                t = o_40;
                t = new_0_0(t);
                v_40 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, p_40, term_h_32), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_40), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_s_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_40)), (ATerm) ATmakeAppl(sym_Op_2, p_40, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_s_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_40)), (ATerm) ATmakeAppl(sym_Op_2, p_40, (ATerm) ATempty))), term_k_26))));
              }
            }
        }
      else
        {
          t = w_40(p_40, s_40, t_40, o_40, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = r_40;
      if(match_cons(t, sym__2))
        {
          s_40 = ATgetArgument(t, 0);
          t_40 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_40(p_40, s_40, t_40, o_40, t);
    }
  return(t);
}
ATerm CongruenceDef_0_0 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,d_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_32 = ATgetArgument(t, 0);
      if(match_cons(q_32, sym__2))
        {
          ATerm r_32 = ATgetArgument(q_32, 0);
          if(match_cons(r_32, sym_Mod_2))
            {
              y_40 = ATgetArgument(r_32, 0);
              z_40 = ATgetArgument(r_32, 1);
            }
          else
            _fail(t);
          a_41 = ATgetArgument(q_32, 1);
        }
      else
        _fail(t);
      b_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, y_40, z_40, a_41);
  t = DefineCongruence_0_0(t);
  t = desugar_0_0(t);
  d_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_41, b_41);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm s_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0_0(t);
      ;
      LocalPopChoice(t_32);
    }
  else
    {
      t = s_32;
      {
        ATerm a_11 = NULL,b_11 = NULL,d_11 = NULL,e_11 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_32 = ATgetArgument(t, 0);
            if(match_cons(u_32, sym__2))
              {
                a_11 = ATgetArgument(u_32, 0);
                b_11 = ATgetArgument(u_32, 1);
              }
            else
              _fail(t);
            d_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_11, b_11);
        t = Definitions_0_0(t);
        e_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_11, d_11);
        {
          ATerm r_8 (ATerm t)
          {
            ATerm v_32 = t;
            int w_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_41 = NULL,i_41 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    h_41 = ATgetFirst((ATermList) t);
                    i_41 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = i_41;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = h_41;
                ;
                LocalPopChoice(w_32);
              }
            else
              {
                t = v_32;
                t = JoinDefs2_0_0(t);
              }
            return(t);
          }
          t = _2_0(r_8, _id, t);
        }
      }
    }
  return(t);
}
ATerm diff_1_0 (ATerm g_119 (ATerm), ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL;
  if(match_cons(t, sym__2))
    {
      l_41 = ATgetArgument(t, 0);
      k_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_41;
  {
    ATerm m_41 (ATerm t)
    {
      ATerm x_32 = t;
      int y_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(y_32);
        }
      else
        {
          t = x_32;
          {
            ATerm z_32 = t;
            int a_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_11 = NULL,j_11 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    f_11 = ATgetFirst((ATermList) t);
                    j_11 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = k_41;
                {
                  ATerm s_8 (ATerm t)
                  {
                    ATerm k_11 = NULL;
                    k_11 = t;
                    t = (ATerm) ATmakeAppl(sym__2, f_11, k_11);
                    t = g_119(t);
                    return(t);
                  }
                  t = fetch_1_0(s_8, t);
                  t = j_11;
                  t = m_41(t);
                }
                ;
                LocalPopChoice(a_33);
              }
            else
              {
                t = z_32;
                t = Cons_2_0(_id, m_41, t);
              }
          }
        }
      return(t);
    }
    t = m_41(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm t_115 (ATerm), ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm w_115 (ATerm), ATerm t)
{
  ATerm n_41 (ATerm t)
  {
    ATerm b_33 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_115(t);
        ;
        LocalPopChoice(c_33);
      }
    else
      {
        t = b_33;
        t = u_115(t);
        t = _2_0(w_115, n_41, t);
        t = v_115(t);
      }
    return(t);
  }
  t = n_41(t);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_33 = ATgetFirst((ATermList) t);
      if(match_cons(d_33, sym__2))
        {
          p_41 = ATgetArgument(d_33, 0);
          q_41 = ATgetArgument(d_33, 1);
        }
      else
        _fail(t);
      r_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(q_41);
  if(match_cons(t, sym__2))
    {
      s_41 = ATgetArgument(t, 0);
      t_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(p_41);
  if(match_cons(t, sym__2))
    {
      if((s_41 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      u_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_41, t_41);
  {
    ATerm t_8 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm i_33 = ATgetArgument(t, 0);
          if(((ATgetType(i_33) != AT_LIST) || !(ATisEmpty(i_33))))
            _fail(t);
          {
            ATerm j_33 = ATgetArgument(t, 1);
            if(((ATgetType(j_33) != AT_LIST) || !(ATisEmpty(j_33))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm v_8 (ATerm t)
    {
      ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm k_33 = ATgetArgument(t, 0);
          if(((ATgetType(k_33) == AT_LIST) && !(ATisEmpty(k_33))))
            {
              w_41 = ATgetFirst((ATermList) k_33);
              y_41 = (ATerm) ATgetNext((ATermList) k_33);
            }
          else
            _fail(t);
          {
            ATerm l_33 = ATgetArgument(t, 1);
            if(((ATgetType(l_33) == AT_LIST) && !(ATisEmpty(l_33))))
              {
                x_41 = ATgetFirst((ATermList) l_33);
                z_41 = (ATerm) ATgetNext((ATermList) l_33);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_41, x_41), (ATerm) ATmakeAppl(sym__2, y_41, z_41));
      return(t);
    }
    ATerm w_8 (ATerm t)
    {
      ATerm a_42 = NULL,b_42 = NULL;
      if(match_cons(t, sym__2))
        {
          a_42 = ATgetArgument(t, 0);
          b_42 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(b_42), a_42);
      return(t);
    }
    t = genzip_4_0(t_8, v_8, w_8, _id, t);
    v_41 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_41, r_41);
    {
      ATerm m_33 = t;
      int u_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm v_33 = ATgetArgument(t, 0);
              ATerm w_33 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_41;
          {
            ATerm x_8 (ATerm t)
            {
              t = r_41;
              return(t);
            }
            t = at_end_1_0(x_8, t);
          }
          ;
          LocalPopChoice(u_33);
        }
      else
        {
          t = m_33;
          {
            ATerm u_11 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, v_41, r_41));
            if(match_cons(t, sym__2))
              {
                ATerm x_33 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) x_33) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                u_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = u_11;
            t = concat_0_0(t);
          }
        }
    }
  }
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm y_33 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_8 (ATerm t)
      {
        ATerm o_42 = NULL;
        o_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, o_42);
        return(t);
      }
      ATerm a_9 (ATerm t)
      {
        ATerm c_9 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, c_9, t);
        return(t);
      }
      ATerm b_9 (ATerm t)
      {
        ATerm i_34 = t;
        int j_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_9 (ATerm t)
            {
              ATerm k_34 = t;
              int l_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      t_42 = ATgetFirst((ATermList) t);
                      w_42 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = t_42;
                  if(match_cons(t, sym__2))
                    {
                      u_42 = ATgetArgument(t, 0);
                      v_42 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = v_42;
                  if((u_42 != t))
                    {
                      _fail(t);
                    }
                  t = w_42;
                  ;
                  LocalPopChoice(l_34);
                }
              else
                {
                  t = k_34;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, k_9, t);
            ;
            LocalPopChoice(j_34);
          }
        else
          {
            t = i_34;
            {
              ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL;
              if(match_cons(t, sym__2))
                {
                  a_43 = ATgetArgument(t, 0);
                  b_43 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_43;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_43 = ATgetFirst((ATermList) t);
                  d_43 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_43), c_43), d_43);
            }
          }
        return(t);
      }
      t = for_3_0(y_8, a_9, b_9, t);
      ;
      LocalPopChoice(e_34);
    }
  else
    {
      t = y_33;
      {
        ATerm l_9 (ATerm t)
        {
          ATerm h_43 = NULL;
          if(match_cons(t, sym__2))
            {
              h_43 = ATgetArgument(t, 0);
              if((h_43 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(l_9, t);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm j_140 (ATerm), ATerm k_140 (ATerm), ATerm l_140 (ATerm), ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm m_34 = ATgetArgument(t, 0);
      if(((ATgetType(m_34) == AT_LIST) && !(ATisEmpty(m_34))))
        {
          l_43 = ATgetFirst((ATermList) m_34);
          m_43 = (ATerm) ATgetNext((ATermList) m_34);
        }
      else
        _fail(t);
      o_43 = ATgetArgument(t, 1);
      p_43 = ATgetArgument(t, 2);
      q_43 = ATgetArgument(t, 3);
      r_43 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_43, p_43);
  t = j_140(t);
  if(match_cons(t, sym__2))
    {
      s_43 = ATgetArgument(t, 0);
      t_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_43;
  t = k_140(t);
  u_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_43, o_43);
  t = diff_0_0(t);
  v_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_43, m_43);
  {
    ATerm q_34 = t;
    int r_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_34 = ATgetArgument(t, 0);
            ATerm u_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_43;
        {
          ATerm m_9 (ATerm t)
          {
            t = m_43;
            return(t);
          }
          t = at_end_1_0(m_9, t);
        }
        ;
        LocalPopChoice(r_34);
      }
    else
      {
        t = q_34;
        {
          ATerm z_11 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, v_43, m_43));
          if(match_cons(t, sym__2))
            {
              ATerm v_34 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_34) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              z_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_11;
          t = concat_0_0(t);
        }
      }
    x_43 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_43, o_43);
    {
      ATerm w_34 = t;
      int x_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm y_34 = ATgetArgument(t, 0);
              ATerm z_34 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_43;
          {
            ATerm o_9 (ATerm t)
            {
              t = o_43;
              return(t);
            }
            t = at_end_1_0(o_9, t);
          }
          ;
          LocalPopChoice(x_34);
        }
      else
        {
          t = w_34;
          {
            ATerm d_12 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, v_43, o_43));
            if(match_cons(t, sym__2))
              {
                ATerm a_35 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) a_35) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                d_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = d_12;
            t = concat_0_0(t);
          }
        }
      y_43 = t;
      t = (ATerm) ATmakeAppl(sym__3, l_43, s_43, q_43);
      t = l_140(t);
      z_43 = t;
      t = (ATerm) ATmakeAppl(sym__5, x_43, y_43, t_43, z_43, r_43);
    }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm h_128 (ATerm), ATerm i_128 (ATerm), ATerm t)
{
  ATerm g_44 (ATerm t)
  {
    ATerm b_35 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_128(t);
        ;
        LocalPopChoice(c_35);
      }
    else
      {
        t = b_35;
        t = i_128(t);
        t = g_44(t);
      }
    return(t);
  }
  t = g_44(t);
  return(t);
}
ATerm for_3_0 (ATerm k_128 (ATerm), ATerm l_128 (ATerm), ATerm m_128 (ATerm), ATerm t)
{
  t = k_128(t);
  t = while_not_2_0(l_128, m_128, t);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm q_9 (ATerm t)
  {
    ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL;
    if(match_cons(t, sym__3))
      {
        l_44 = ATgetArgument(t, 0);
        m_44 = ATgetArgument(t, 1);
        n_44 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__5, l_44, l_44, m_44, n_44, (ATerm) ATempty);
    return(t);
  }
  ATerm r_9 (ATerm t)
  {
    ATerm o_44 = NULL,p_44 = NULL;
    if(match_cons(t, sym__5))
      {
        ATerm d_35 = ATgetArgument(t, 0);
        if(((ATgetType(d_35) != AT_LIST) || !(ATisEmpty(d_35))))
          _fail(t);
        {
          ATerm f_35 = ATgetArgument(t, 1);
        }
        {
          ATerm l_35 = ATgetArgument(t, 2);
        }
        o_44 = ATgetArgument(t, 3);
        p_44 = ATgetArgument(t, 4);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, o_44, p_44);
    return(t);
  }
  ATerm y_9 (ATerm t)
  {
    ATerm m_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_9 (ATerm t)
        {
          t = svars_arity_0_0(t);
          {
            ATerm f_10 (ATerm t)
            {
              ATerm z_35 = t;
              int a_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = DefinitionExists_0_0(t);
                  ;
                  LocalPopChoice(a_36);
                }
              else
                {
                  t = z_35;
                }
              return(t);
            }
            t = map_1_0(f_10, t);
          }
          return(t);
        }
        ATerm b_10 (ATerm t)
        {
          ATerm q_44 = NULL,r_44 = NULL;
          if(match_cons(t, sym__3))
            {
              ATerm b_36 = ATgetArgument(t, 0);
              q_44 = ATgetArgument(t, 1);
              r_44 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(r_44), q_44);
          return(t);
        }
        t = GnNextChangeGraph_3_0(get_definition_0_0, z_9, b_10, t);
        ;
        LocalPopChoice(y_35);
      }
    else
      {
        t = m_35;
        {
          ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL;
          if(match_cons(t, sym__5))
            {
              t_44 = ATgetArgument(t, 0);
              w_44 = ATgetArgument(t, 1);
              x_44 = ATgetArgument(t, 2);
              y_44 = ATgetArgument(t, 3);
              z_44 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = t_44;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_44 = ATgetFirst((ATermList) t);
              v_44 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, v_44, w_44, x_44, y_44, (ATerm) ATinsert(CheckATermList(z_44), u_44));
        }
      }
    return(t);
  }
  t = for_3_0(q_9, r_9, y_9, t);
  {
    ATerm c_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_45 = NULL,j_45 = NULL;
        if(match_cons(t, sym__2))
          {
            i_45 = ATgetArgument(t, 0);
            j_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_45;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_45;
        ;
        LocalPopChoice(d_36);
      }
    else
      {
        t = c_36;
        t = MissingDefs_0_0(t);
        t = SSL_exit((ATerm) ATmakeInt(1));
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm i_123 (ATerm), ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL;
  if(match_cons(t, sym__2))
    {
      l_45 = ATgetArgument(t, 0);
      m_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_123(t);
  n_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_45, l_45, m_45);
  t = table_push_0_0(t);
  {
    ATerm h_36 = t;
    int i_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(n_45, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(i_36);
      }
    else
      {
        t = h_36;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_45 = ATgetFirst((ATermList) t);
        p_45 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(n_45, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(p_45), (ATerm) ATinsert(CheckATermList(o_45), l_45)));
    t = (ATerm) ATmakeAppl(sym__2, l_45, m_45);
  }
  return(t);
}
ATerm union_1_0 (ATerm k_119 (ATerm), ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL;
  if(match_cons(t, sym__2))
    {
      u_45 = ATgetArgument(t, 0);
      t_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_45;
  {
    ATerm v_45 (ATerm t)
    {
      ATerm j_36 = t;
      int k_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = t_45;
          ;
          LocalPopChoice(k_36);
        }
      else
        {
          t = j_36;
          {
            ATerm o_36 = t;
            int p_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_12 = NULL,f_12 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    e_12 = ATgetFirst((ATermList) t);
                    f_12 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = t_45;
                {
                  ATerm g_10 (ATerm t)
                  {
                    ATerm g_12 = NULL;
                    g_12 = t;
                    t = (ATerm) ATmakeAppl(sym__2, e_12, g_12);
                    t = k_119(t);
                    return(t);
                  }
                  t = fetch_1_0(g_10, t);
                  t = f_12;
                  t = v_45(t);
                }
                ;
                LocalPopChoice(p_36);
              }
            else
              {
                t = o_36;
                t = Cons_2_0(_id, v_45, t);
              }
          }
        }
      return(t);
    }
    t = v_45(t);
  }
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm g_46 = NULL;
  g_46 = t;
  {
    ATerm q_36 = t;
    int r_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_12 = NULL,n_12 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue)), g_46);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_12 = ATgetFirst((ATermList) t);
            {
              ATerm s_36 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = n_12;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm v_36 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_36) != ATmakeSymbol("r_0", 0, ATtrue)))
              _fail(t);
            l_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_12;
        ;
        LocalPopChoice(r_36);
      }
    else
      {
        t = q_36;
        {
          ATerm q_12 = NULL,r_12 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue)), g_46);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_12 = ATgetFirst((ATermList) t);
              {
                ATerm a_37 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = r_12;
          if(match_cons(t, sym_Defined_2))
            {
              ATerm e_37 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) e_37) != ATmakeSymbol("l_0", 0, ATtrue)))
                _fail(t);
              q_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_12;
        }
      }
  }
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm e_47 (ATerm r_46, ATerm t)
  {
    ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL;
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue)), r_46);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_46 = ATgetFirst((ATermList) t);
        {
          ATerm v_37 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = v_46;
    if(match_cons(t, sym_Defined_3))
      {
        ATerm w_37 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) w_37) != ATmakeSymbol("j_0", 0, ATtrue)))
          _fail(t);
        t_46 = ATgetArgument(t, 1);
        u_46 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(u_46), t_46);
    return(t);
  }
  ATerm a_47 = NULL,c_47 = NULL;
  a_47 = t;
  if(match_cons(t, sym__2))
    {
      ATerm x_37 = ATgetArgument(t, 0);
      c_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_47;
  {
    ATerm a_38 = t;
    int b_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_38 = ATgetArgument(t, 0);
            ATerm d_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(b_38);
        {
          ATerm e_38 = t;
          int f_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_12 = NULL,x_12 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue)), a_47);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_12 = ATgetFirst((ATermList) t);
                  {
                    ATerm g_38 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = x_12;
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm h_38 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) h_38) != ATmakeSymbol("o_0", 0, ATtrue)))
                    _fail(t);
                  w_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_12;
              ;
              LocalPopChoice(f_38);
            }
          else
            {
              t = e_38;
              t = e_47(a_47, t);
            }
        }
      }
    else
      {
        t = a_38;
        t = e_47(a_47, t);
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm z_121 (ATerm), ATerm a_122 (ATerm), ATerm b_122 (ATerm), ATerm t)
{
  ATerm i_38 = t;
  int j_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_121(t);
      ;
      LocalPopChoice(j_38);
    }
  else
    {
      t = i_38;
      {
        ATerm h_47 = NULL,i_47 = NULL,o_47 = NULL,p_47 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_47 = ATgetFirst((ATermList) t);
            i_47 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_47;
        t = b_122(t);
        o_47 = t;
        t = i_47;
        t = foldr_3_0(z_121, a_122, b_122, t);
        p_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_47, p_47);
        t = a_122(t);
      }
    }
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL;
  q_47 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      r_47 = ATgetArgument(t, 0);
      s_47 = ATgetArgument(t, 1);
      t_47 = ATgetArgument(t, 2);
      {
        ATerm k_38 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  u_47 = t;
  t = s_47;
  {
    ATerm j_10 (ATerm t)
    {
      t = term_y_18;
      return(t);
    }
    ATerm k_10 (ATerm t)
    {
      ATerm d_48 = NULL,e_48 = NULL;
      if(match_cons(t, sym__2))
        {
          d_48 = ATgetArgument(t, 0);
          e_48 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm l_38 = t;
        int m_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(d_48, e_48);
            ;
            LocalPopChoice(m_38);
          }
        else
          {
            t = l_38;
            t = SSL_addr(d_48, e_48);
          }
      }
      return(t);
    }
    ATerm n_10 (ATerm t)
    {
      t = term_b_19;
      return(t);
    }
    t = foldr_3_0(j_10, k_10, n_10, t);
    v_47 = t;
    t = t_47;
    {
      ATerm o_10 (ATerm t)
      {
        t = term_y_18;
        return(t);
      }
      ATerm q_10 (ATerm t)
      {
        ATerm f_48 = NULL,g_48 = NULL;
        if(match_cons(t, sym__2))
          {
            f_48 = ATgetArgument(t, 0);
            g_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        {
          ATerm r_38 = t;
          int s_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_addi(f_48, g_48);
              ;
              LocalPopChoice(s_38);
            }
          else
            {
              t = r_38;
              t = SSL_addr(f_48, g_48);
            }
        }
        return(t);
      }
      ATerm v_10 (ATerm t)
      {
        t = term_b_19;
        return(t);
      }
      t = foldr_3_0(o_10, q_10, v_10, t);
      w_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_47, (ATerm) ATmakeAppl(sym__2, v_47, w_47));
      {
        ATerm t_38 = t;
        int p_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Definitions_0_0(t);
            ;
            LocalPopChoice(p_39);
          }
        else
          {
            t = t_38;
            t = (ATerm) ATempty;
          }
        x_47 = t;
        t = r_47;
        {
          ATerm q_39 = t;
          int r_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Arities_0_0(t);
              ;
              LocalPopChoice(r_39);
            }
          else
            {
              t = q_39;
              t = (ATerm) ATempty;
            }
          y_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, v_47, w_47)), y_47);
          {
            ATerm x_10 (ATerm t)
            {
              ATerm i_48 = NULL;
              if(match_cons(t, sym__2))
                {
                  i_48 = ATgetArgument(t, 0);
                  if((i_48 != ATgetArgument(t, 1)))
                    {
                      _fail(ATgetArgument(t, 1));
                    }
                }
              else
                _fail(t);
              return(t);
            }
            t = union_1_0(x_10, t);
            z_47 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_47, (ATerm) ATmakeAppl(sym__2, v_47, w_47)), (ATerm) ATmakeAppl(sym_Defined_2, term_s_39, (ATerm) ATinsert(CheckATermList(x_47), q_47)));
            {
              ATerm y_10 (ATerm t)
              {
                t = term_t_39;
                return(t);
              }
              t = assert_1_0(y_10, t);
              t = (ATerm) ATmakeAppl(sym__2, r_47, (ATerm) ATmakeAppl(sym_Defined_2, term_v_39, z_47));
              {
                ATerm z_10 (ATerm t)
                {
                  t = term_z_39;
                  return(t);
                }
                t = assert_1_0(z_10, t);
                t = u_47;
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
  ATerm j_48 = NULL;
  t = map_1_0(RegisterSDefT_0_0, t);
  j_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_f_40), j_48, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm a_96 (ATerm), ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL,r_48 = NULL;
  r_48 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      l_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_48);
  k_48 = t;
  t = l_48;
  t = a_96(t);
  m_48 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, m_48), k_48);
  return(t);
}
ATerm Cons_2_0 (ATerm w_95 (ATerm), ATerm x_95 (ATerm), ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL;
  e_49 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_49 = ATgetFirst((ATermList) t);
      b_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_49);
  z_48 = t;
  t = a_49;
  t = w_95(t);
  c_49 = t;
  t = b_49;
  t = x_95(t);
  d_49 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(d_49), c_49), z_48);
  return(t);
}
ATerm Specification_1_0 (ATerm f_96 (ATerm), ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL,k_49 = NULL,l_49 = NULL;
  l_49 = t;
  if(match_cons(t, sym_Specification_1))
    {
      i_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_49);
  h_49 = t;
  t = i_49;
  t = f_96(t);
  k_49 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, k_49), h_49);
  return(t);
}
ATerm _2_0 (ATerm h_91 (ATerm), ATerm i_91 (ATerm), ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL;
  t_49 = t;
  if(match_cons(t, sym__2))
    {
      p_49 = ATgetArgument(t, 0);
      q_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_49);
  o_49 = t;
  t = p_49;
  t = h_91(t);
  r_49 = t;
  t = q_49;
  t = i_91(t);
  s_49 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, r_49, s_49), o_49);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm a_133 (ATerm), ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL;
  if(match_cons(t, sym__2))
    {
      w_49 = ATgetArgument(t, 0);
      x_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_49, term_g_40);
  t = open_stream_0_0(t);
  y_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_49, x_49);
  t = a_133(t);
  t = fclose_0_0(t);
  t = x_49;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL;
  d_50 = t;
  {
    ATerm l_11 (ATerm t)
    {
      ATerm h_40 = t;
      int i_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_11 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((e_50 != NULL) && (e_50 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_50 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(m_11, t);
          ;
          LocalPopChoice(i_40);
        }
      else
        {
          t = h_40;
          t = term_j_40;
          if(((e_50 != NULL) && (e_50 != t)))
            _fail(t);
          else
            e_50 = t;
        }
      return(t);
    }
    t = _2_0(l_11, _id, t);
    t = d_50;
    {
      ATerm p_11 (ATerm t)
      {
        ATerm y_12 = NULL;
        y_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_50), y_12);
        return(t);
      }
      t = _2_0(_id, p_11, t);
      {
        ATerm l_40 = t;
        int m_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_11 (ATerm t)
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
            ATerm r_11 (ATerm t)
            {
              ATerm t_11 (ATerm t)
              {
                ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm n_40 = ATgetArgument(t, 0);
                    if(match_cons(n_40, sym_Stream_1))
                      {
                        f_50 = ATgetArgument(n_40, 0);
                      }
                    else
                      _fail(t);
                    g_50 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(f_50, g_50);
                h_50 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, h_50);
                return(t);
              }
              t = WriteToFile_1_0(t_11, t);
              return(t);
            }
            t = _2_0(q_11, r_11, t);
            ;
            LocalPopChoice(m_40);
          }
        else
          {
            t = l_40;
            {
              ATerm v_11 (ATerm t)
              {
                ATerm w_11 (ATerm t)
                {
                  ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm u_40 = ATgetArgument(t, 0);
                      if(match_cons(u_40, sym_Stream_1))
                        {
                          i_50 = ATgetArgument(u_40, 0);
                        }
                      else
                        _fail(t);
                      j_50 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(i_50, j_50);
                  k_50 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), k_50);
                  l_50 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, l_50);
                  return(t);
                }
                t = WriteToFile_1_0(w_11, t);
                return(t);
              }
              t = _2_0(_id, v_11, t);
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
ATerm apply_strategy_1_0 (ATerm c_136 (ATerm), ATerm t)
{
  ATerm m_50 = NULL,p_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL;
  m_50 = t;
  t = dtime_0_0(t);
  t = m_50;
  t = c_136(t);
  p_50 = t;
  t = dtime_0_0(t);
  u_50 = t;
  t = p_50;
  if(match_cons(t, sym__2))
    {
      v_50 = ATgetArgument(t, 0);
      w_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_50), (ATerm) ATmakeAppl(sym_Runtime_1, u_50)), w_50);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_51 (ATerm e_51, ATerm t)
  {
    t = SSL_fclose(e_51);
    return(t);
  }
  ATerm i_51 = NULL,k_51 = NULL;
  k_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_51 = ATgetArgument(t, 0);
      {
        ATerm c_41 = t;
        int e_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_51);
            ;
            LocalPopChoice(e_41);
          }
        else
          {
            t = c_41;
            t = m_51(k_51, t);
          }
      }
    }
  else
    {
      t = m_51(k_51, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_51 = NULL;
  t = SSL_stdin_stream();
  n_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_51);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_51 = NULL;
  t = SSL_stdout_stream();
  o_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_51);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_51 = NULL;
  t = SSL_stderr_stream();
  p_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_51);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_41 = ATgetArgument(t, 0);
      ATerm g_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_41 = t;
    int o_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_13 = NULL,p_13 = NULL;
        o_13 = t;
        t = SSL_explode_term(o_13);
        if(match_cons(t, sym__2))
          {
            ATerm c_42 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_42) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm d_42 = ATgetArgument(t, 1);
              if(((ATgetType(d_42) == AT_LIST) && !(ATisEmpty(d_42))))
                {
                  p_13 = ATgetFirst((ATermList) d_42);
                  {
                    ATerm e_42 = (ATerm) ATgetNext((ATermList) d_42);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = p_13;
        if(match_cons(t, sym_stderr_0))
          {
            t = p_13;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = p_13;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = p_13;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(o_41);
      }
    else
      {
        t = j_41;
        {
          ATerm f_42 = t;
          int g_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL;
              ATerm x_11 (ATerm t)
              {
                ATerm x_51 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    x_51 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = x_51;
                return(t);
              }
              t = _2_0(x_11, _id, t);
              if(match_cons(t, sym__2))
                {
                  u_51 = ATgetArgument(t, 0);
                  v_51 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(u_51, v_51);
              w_51 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, w_51);
              ;
              LocalPopChoice(g_42);
            }
          else
            {
              t = f_42;
              {
                ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL;
                ATerm y_11 (ATerm t)
                {
                  ATerm b_52 = NULL;
                  b_52 = t;
                  t = SSL_is_string(b_52);
                  return(t);
                }
                t = _2_0(y_11, _id, t);
                if(match_cons(t, sym__2))
                  {
                    y_51 = ATgetArgument(t, 0);
                    z_51 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(y_51, z_51);
                a_52 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, a_52);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL;
  ATerm h_42 = t;
  int i_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_52 = NULL;
      f_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_52, term_j_42);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(i_42);
    }
  else
    {
      t = h_42;
      {
        ATerm q_13 = NULL;
        q_13 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_13), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = q_13;
        _fail(t);
      }
    }
  c_52 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(e_52);
  d_52 = t;
  t = c_52;
  t = fclose_0_0(t);
  t = d_52;
  return(t);
}
ATerm fetch_1_0 (ATerm t_117 (ATerm), ATerm t)
{
  ATerm l_52 (ATerm t)
  {
    ATerm k_42 = t;
    int l_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(t_117, _id, t);
        ;
        LocalPopChoice(l_42);
      }
    else
      {
        t = k_42;
        t = Cons_2_0(_id, l_52, t);
      }
    return(t);
  }
  t = l_52(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm m_42 = t;
  int n_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(n_42);
    }
  else
    {
      t = m_42;
      {
        ATerm p_52 = NULL,q_52 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_52 = ATgetFirst((ATermList) t);
            q_52 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_52;
        {
          ATerm a_12 (ATerm t)
          {
            t = q_52;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(a_12, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm z_117 (ATerm), ATerm t)
{
  ATerm w_52 (ATerm t)
  {
    ATerm p_42 = t;
    int q_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, w_52, t);
        ;
        LocalPopChoice(q_42);
      }
    else
      {
        t = p_42;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_117(t);
      }
    return(t);
  }
  t = w_52(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm y_52 = NULL;
  ATerm b_12 (ATerm t)
  {
    ATerm z_52 = NULL;
    z_52 = t;
    t = SSL_explode_string(z_52);
    return(t);
  }
  ATerm c_12 (ATerm t)
  {
    ATerm a_53 = NULL;
    a_53 = t;
    t = SSL_explode_string(a_53);
    return(t);
  }
  t = _2_0(b_12, c_12, t);
  {
    ATerm r_42 = t;
    int s_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_53 = NULL,d_53 = NULL;
        if(match_cons(t, sym__2))
          {
            c_53 = ATgetArgument(t, 0);
            d_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_53;
        {
          ATerm h_12 (ATerm t)
          {
            t = d_53;
            return(t);
          }
          t = at_end_1_0(h_12, t);
        }
        ;
        LocalPopChoice(s_42);
      }
    else
      {
        t = r_42;
        {
          ATerm y_13 = NULL,z_13 = NULL;
          y_13 = t;
          t = SSL_explode_term(y_13);
          if(match_cons(t, sym__2))
            {
              ATerm x_42 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) x_42) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              z_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_13;
          t = concat_0_0(t);
        }
      }
    y_52 = t;
    t = SSL_implode_string(y_52);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm y_42 = t;
  int z_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_53 = NULL;
      o_53 = t;
      t = SSL_is_string(o_53);
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
            ATerm i_12 (ATerm t)
            {
              ATerm g_43 = t;
              int i_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(i_43);
                }
              else
                {
                  t = g_43;
                }
              return(t);
            }
            t = map_1_0(i_12, t);
            ;
            LocalPopChoice(f_43);
          }
        else
          {
            t = e_43;
            {
              ATerm x_53 = NULL,y_53 = NULL,c_54 = NULL;
              x_53 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_53 = ATgetArgument(t, 0);
                  t = y_53;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_53 = ATgetArgument(t, 0);
                      t = y_53;
                      {
                        ATerm j_43 = t;
                        int k_43 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_53);
                            {
                              ATerm n_43 = t;
                              int w_43 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm r_14 = NULL;
                                  t = eval_config_0_0(t);
                                  r_14 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_53, r_14);
                                  t = r_14;
                                  ;
                                  LocalPopChoice(w_43);
                                }
                              else
                                {
                                  t = n_43;
                                }
                            }
                            ;
                            LocalPopChoice(k_43);
                          }
                        else
                          {
                            t = j_43;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_53), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = y_53;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_54 = NULL,h_54 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_53 = ATgetArgument(t, 0);
                          c_54 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_53;
                      t = eval_config_0_0(t);
                      g_54 = t;
                      t = c_54;
                      t = eval_config_0_0(t);
                      h_54 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_54, h_54);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_134 (ATerm), ATerm t)
{
  ATerm a_44 = t;
  int b_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_54 = NULL,o_54 = NULL;
      m_54 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm c_44 = t;
        int d_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_14 = NULL;
            t = eval_config_0_0(t);
            y_14 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), y_14);
            t = y_14;
            ;
            LocalPopChoice(d_44);
          }
        else
          {
            t = c_44;
          }
        o_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_54, term_e_44);
        t = geq_0_0(t);
        t = m_54;
        t = e_134(t);
      }
      ;
      LocalPopChoice(b_44);
    }
  else
    {
      t = a_44;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm j_12 (ATerm t)
  {
    ATerm q_54 = NULL;
    q_54 = t;
    if(match_string(t, "-k"))
      {
        t = q_54;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = q_54;
      }
    return(t);
  }
  ATerm k_12 (ATerm t)
  {
    ATerm r_54 = NULL,s_54 = NULL;
    r_54 = t;
    t = SSL_string_to_int(r_54);
    s_54 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), s_54);
    t = r_54;
    return(t);
  }
  ATerm m_12 (ATerm t)
  {
    t = term_f_44;
    return(t);
  }
  t = ArgOption_3_0(j_12, k_12, m_12, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_44 = t;
  int i_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_12 (ATerm t)
      {
        ATerm u_54 = NULL;
        u_54 = t;
        if(match_string(t, "-S"))
          {
            t = u_54;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = u_54;
          }
        return(t);
      }
      ATerm p_12 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_j_44;
        return(t);
      }
      ATerm s_12 (ATerm t)
      {
        t = term_k_44;
        return(t);
      }
      t = Option_3_0(o_12, p_12, s_12, t);
      ;
      LocalPopChoice(i_44);
    }
  else
    {
      t = h_44;
      {
        ATerm s_44 = t;
        int a_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_12 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm u_12 (ATerm t)
            {
              ATerm v_54 = NULL,w_54 = NULL;
              v_54 = t;
              t = SSL_string_to_int(v_54);
              w_54 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), w_54);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, v_54);
              return(t);
            }
            ATerm v_12 (ATerm t)
            {
              t = term_b_45;
              return(t);
            }
            t = ArgOption_3_0(t_12, u_12, v_12, t);
            ;
            LocalPopChoice(a_45);
          }
        else
          {
            t = s_44;
            {
              ATerm z_12 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm a_13 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_c_45;
                return(t);
              }
              ATerm c_13 (ATerm t)
              {
                t = term_d_45;
                return(t);
              }
              t = Option_3_0(z_12, a_13, c_13, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm z_54 = NULL,a_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_55 = NULL;
      t = term_c_15;
      t = d_0(t);
      b_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_45, term_f_45, b_55);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm e_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_54 = ATgetFirst((ATermList) t);
          a_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_54;
      t = a_0(t);
      t = term_c_15;
      t = b_0(t);
      e_55 = t;
      t = (ATerm) ATinsert(CheckATermList(a_55), e_55);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm d_13 (ATerm t)
  {
    ATerm g_55 = NULL;
    g_55 = t;
    if(match_string(t, "-o"))
      {
        t = g_55;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = g_55;
      }
    return(t);
  }
  ATerm e_13 (ATerm t)
  {
    ATerm h_55 = NULL;
    h_55 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), h_55);
    t = (ATerm) ATmakeAppl(sym_Output_1, h_55);
    return(t);
  }
  ATerm f_13 (ATerm t)
  {
    t = term_g_45;
    return(t);
  }
  t = ArgOption_3_0(d_13, e_13, f_13, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm k_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL;
  if(match_cons(t, sym__3))
    {
      k_55 = ATgetArgument(t, 0);
      l_55 = ATgetArgument(t, 1);
      m_55 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_55, l_55);
  {
    ATerm h_45 = t;
    int k_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_45 = ATgetArgument(t, 0);
            ATerm r_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(k_55, l_55);
        ;
        LocalPopChoice(k_45);
      }
    else
      {
        t = h_45;
        t = (ATerm) ATempty;
      }
    n_55 = t;
    t = SSL_table_put(k_55, l_55, (ATerm) ATinsert(CheckATermList(n_55), m_55));
    t = (ATerm) ATmakeAppl(sym__3, k_55, l_55, m_55);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_55 = NULL;
      t = term_c_15;
      t = m_0(t);
      z_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_45, term_f_45, z_55);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm d_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_55 = ATgetFirst((ATermList) t);
          w_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_55;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_55 = ATgetFirst((ATermList) t);
          y_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_55;
      t = i_0(t);
      t = x_55;
      t = k_0(t);
      d_56 = t;
      t = (ATerm) ATinsert(CheckATermList(y_55), d_56);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm g_13 (ATerm t)
  {
    ATerm f_56 = NULL;
    f_56 = t;
    if(match_string(t, "-i"))
      {
        t = f_56;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = f_56;
      }
    return(t);
  }
  ATerm h_13 (ATerm t)
  {
    ATerm g_56 = NULL;
    g_56 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), g_56);
    t = (ATerm) ATmakeAppl(sym_Input_1, g_56);
    return(t);
  }
  ATerm i_13 (ATerm t)
  {
    t = term_s_45;
    return(t);
  }
  t = ArgOption_3_0(g_13, h_13, i_13, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_15;
  t = whoami_0_0(t);
  h_56 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), h_56));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm w_45 = t;
    int x_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_15 = NULL;
        t = eval_config_0_0(t);
        d_15 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_15);
        t = d_15;
        ;
        LocalPopChoice(x_45);
      }
    else
      {
        t = w_45;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm x_121 (ATerm), ATerm y_121 (ATerm), ATerm t)
{
  ATerm y_45 = t;
  int z_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_121(t);
      ;
      LocalPopChoice(z_45);
    }
  else
    {
      t = y_45;
      {
        ATerm k_56 = NULL,l_56 = NULL,o_56 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_56 = ATgetFirst((ATermList) t);
            l_56 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_56;
        t = foldr_2_0(x_121, y_121, t);
        o_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_56, o_56);
        t = y_121(t);
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
  ATerm r_56 = NULL,e_15 = NULL,f_15 = NULL;
  t = times_0_0(t);
  e_15 = t;
  t = SSL_explode_term(e_15);
  if(match_cons(t, sym__2))
    {
      ATerm a_46 = ATgetArgument(t, 0);
      f_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_15;
  {
    ATerm j_13 (ATerm t)
    {
      t = term_y_18;
      return(t);
    }
    ATerm k_13 (ATerm t)
    {
      ATerm i_15 = NULL,j_15 = NULL;
      if(match_cons(t, sym__2))
        {
          i_15 = ATgetArgument(t, 0);
          j_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm b_46 = t;
        int c_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(i_15, j_15);
            ;
            LocalPopChoice(c_46);
          }
        else
          {
            t = b_46;
            t = SSL_addr(i_15, j_15);
          }
      }
      return(t);
    }
    t = foldr_2_0(j_13, k_13, t);
    r_56 = t;
    t = SSL_TicksToSeconds(r_56);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL;
  c_57 = t;
  if(match_cons(t, sym__2))
    {
      d_57 = ATgetArgument(t, 0);
      e_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_46 = t;
    int e_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_57;
        if((d_57 != t))
          {
            _fail(t);
          }
        t = c_57;
        ;
        LocalPopChoice(e_46);
      }
    else
      {
        t = d_46;
        t = c_57;
        {
          ATerm f_46 = t;
          int h_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_57, e_57);
              ;
              LocalPopChoice(h_46);
            }
          else
            {
              t = f_46;
              t = SSL_gtr(d_57, e_57);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_57, e_57);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_134 (ATerm), ATerm t)
{
  ATerm i_46 = t;
  int j_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_57 = NULL,j_57 = NULL;
      h_57 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm k_46 = t;
        int l_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_15 = NULL;
            t = eval_config_0_0(t);
            v_15 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), v_15);
            t = v_15;
            ;
            LocalPopChoice(l_46);
          }
        else
          {
            t = k_46;
          }
        j_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_57, term_b_19);
        t = geq_0_0(t);
        t = h_57;
        t = d_134(t);
      }
      ;
      LocalPopChoice(j_46);
    }
  else
    {
      t = i_46;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm l_13 (ATerm t)
  {
    ATerm l_57 = NULL,m_57 = NULL;
    t = run_time_0_0(t);
    l_57 = t;
    t = term_c_15;
    t = whoami_0_0(t);
    m_57 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), l_57), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), m_57));
    t = (ATerm) ATmakeAppl(sym__2, term_m_46, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_46), l_57), term_n_46), m_57));
    return(t);
  }
  t = if_verbose1_1_0(l_13, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm a_137 (ATerm), ATerm t)
{
  ATerm p_46 = t;
  int q_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm s_46 = t;
        int w_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_15 = NULL;
            t = eval_config_0_0(t);
            z_15 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), z_15);
            t = z_15;
            ;
            LocalPopChoice(w_46);
          }
        else
          {
            t = s_46;
          }
      }
      ;
      LocalPopChoice(q_46);
    }
  else
    {
      t = p_46;
      {
        ATerm m_13 (ATerm t)
        {
          ATerm x_46 = t;
          int y_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(y_46);
            }
          else
            {
              t = x_46;
              {
                ATerm z_46 = t;
                int b_47 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(b_47);
                  }
                else
                  {
                    t = z_46;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(m_13, t);
      }
    }
  t = a_137(t);
  return(t);
}
ATerm map_1_0 (ATerm i_117 (ATerm), ATerm t)
{
  ATerm n_57 (ATerm t)
  {
    ATerm d_47 = t;
    int f_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(f_47);
      }
    else
      {
        t = d_47;
        t = Cons_2_0(i_117, n_57, t);
      }
    return(t);
  }
  t = n_57(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm q_57 = NULL,r_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_57 = ATgetFirst((ATermList) t);
      r_57 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_57 = NULL,w_57 = NULL;
        t = r_57;
        t = g_0(t);
        v_57 = t;
        t = q_57;
        t = f_0(t);
        w_57 = t;
        t = r_57;
        {
          ATerm n_13 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(v_57), w_57);
            return(t);
          }
          t = reverse_acc_2_0(f_0, n_13, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_15;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm o_108 (ATerm), ATerm t)
{
  ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL;
  a_58 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_58);
  x_57 = t;
  t = y_57;
  t = o_108(t);
  z_57 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, z_57), x_57);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_47 = t;
  int j_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm k_47 = t;
        int l_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_16 = NULL;
            t = eval_config_0_0(t);
            e_16 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_16);
            t = e_16;
            ;
            LocalPopChoice(l_47);
          }
        else
          {
            t = k_47;
          }
      }
      ;
      LocalPopChoice(j_47);
    }
  else
    {
      t = g_47;
      {
        ATerm r_13 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(r_13, t);
      }
    }
  t = term_m_47;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm s_13 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, s_13, t);
    {
      ATerm t_13 (ATerm t)
      {
        ATerm d_58 = NULL;
        d_58 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, d_58), term_n_47);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(t_13, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm p_108 (ATerm), ATerm t)
{
  ATerm e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL;
  h_58 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      f_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_58);
  e_58 = t;
  t = f_58;
  t = p_108(t);
  g_58 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, g_58), e_58);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_58 = NULL,m_58 = NULL;
  l_58 = t;
  {
    ATerm a_48 = t;
    int b_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_58;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_48 = ATgetFirst((ATermList) t);
                ATerm h_48 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_58;
          }
        ;
        LocalPopChoice(b_48);
      }
    else
      {
        t = a_48;
        t = (ATerm) ATinsert(ATempty, l_58);
      }
    m_58 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), m_58);
    t = l_58;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm n_48 = t;
    int o_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_16 = NULL;
        t = eval_config_0_0(t);
        i_16 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_16);
        t = i_16;
        ;
        LocalPopChoice(o_48);
      }
    else
      {
        t = n_48;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_48 = t;
  int q_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_13 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm w_13 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_u_48;
        return(t);
      }
      ATerm x_13 (ATerm t)
      {
        t = term_v_48;
        return(t);
      }
      t = Option_3_0(u_13, w_13, x_13, t);
      ;
      LocalPopChoice(q_48);
    }
  else
    {
      t = p_48;
      {
        ATerm a_14 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm b_14 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_w_48;
          return(t);
        }
        ATerm c_14 (ATerm t)
        {
          t = term_x_48;
          return(t);
        }
        t = Option_3_0(a_14, b_14, c_14, t);
      }
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_139 (ATerm), ATerm t)
{
  ATerm r_58 = NULL;
  r_58 = t;
  {
    ATerm y_48 = t;
    int f_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_49;
        t = d_139(t);
        ;
        LocalPopChoice(f_49);
      }
    else
      {
        t = y_48;
      }
    t = r_58;
    {
      ATerm d_14 (ATerm t)
      {
        ATerm s_58 = NULL;
        s_58 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), s_58);
        t = (ATerm) ATmakeAppl(sym_Program_1, s_58);
        return(t);
      }
      ATerm e_14 (ATerm t)
      {
        ATerm j_49 = t;
        int m_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_49 = t;
            int u_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(u_49);
              }
            else
              {
                t = n_49;
                t = d_139(t);
                t = Cons_2_0(_id, e_14, t);
              }
            ;
            LocalPopChoice(m_49);
          }
        else
          {
            t = j_49;
            {
              ATerm u_58 = NULL,v_58 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_58 = ATgetFirst((ATermList) t);
                  v_58 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(v_58), (ATerm) ATmakeAppl(sym_Undefined_1, u_58));
            }
          }
        return(t);
      }
      t = Cons_2_0(d_14, e_14, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm c_139 (ATerm), ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL;
  c_59 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = c_59;
  {
    ATerm f_14 (ATerm t)
    {
      ATerm v_49 = t;
      int z_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_139(t);
          ;
          LocalPopChoice(z_49);
        }
      else
        {
          t = v_49;
          {
            ATerm a_50 = t;
            int b_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_14 (ATerm t)
                {
                  ATerm f_59 = NULL;
                  f_59 = t;
                  if(match_string(t, "--help"))
                    {
                      t = f_59;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = f_59;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = f_59;
                        }
                    }
                  return(t);
                }
                ATerm h_14 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_c_50;
                  return(t);
                }
                ATerm i_14 (ATerm t)
                {
                  t = term_n_50;
                  return(t);
                }
                t = Option_3_0(g_14, h_14, i_14, t);
                ;
                LocalPopChoice(b_50);
              }
            else
              {
                t = a_50;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_14, t);
    {
      ATerm o_50 = t;
      int q_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_59 = NULL;
          k_59 = t;
          {
            ATerm r_50 = t;
            int s_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = k_59;
                {
                  ATerm t_50 = t;
                  int x_50 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm y_50 = t;
                        int z_50 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm e_17 = NULL;
                            t = eval_config_0_0(t);
                            e_17 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), e_17);
                            t = e_17;
                            ;
                            LocalPopChoice(z_50);
                          }
                        else
                          {
                            t = y_50;
                          }
                      }
                      ;
                      LocalPopChoice(x_50);
                    }
                  else
                    {
                      t = t_50;
                      {
                        ATerm j_14 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(j_14, t);
                      }
                    }
                  t = k_59;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(s_50);
              }
            else
              {
                t = r_50;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm a_51 = t;
                  int b_51 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_17 = NULL;
                      t = eval_config_0_0(t);
                      p_17 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), p_17);
                      t = p_17;
                      ;
                      LocalPopChoice(b_51);
                    }
                  else
                    {
                      t = a_51;
                    }
                  t = k_59;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(q_50);
        }
      else
        {
          t = o_50;
          {
            ATerm c_51 = t;
            int d_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_14 (ATerm t)
                {
                  ATerm l_14 (ATerm t)
                  {
                    if(((d_59 != NULL) && (d_59 != t)))
                      _fail(t);
                    else
                      d_59 = t;
                    return(t);
                  }
                  t = Undefined_1_0(l_14, t);
                  return(t);
                }
                t = fetch_1_0(k_14, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(d_59)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_m_46, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_59)), term_f_51));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(d_51);
              }
            else
              {
                t = c_51;
              }
          }
        }
      e_59 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = e_59;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_137 (ATerm), ATerm d_137 (ATerm), ATerm e_137 (ATerm), ATerm f_137 (ATerm), ATerm t)
{
  ATerm n_59 = NULL;
  t = parse_options_1_0(c_137, t);
  n_59 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), n_59);
  t = n_59;
  t = e_137(t);
  {
    ATerm g_51 = t;
    int h_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_137, t);
        ;
        LocalPopChoice(h_51);
      }
    else
      {
        t = g_51;
        {
          ATerm j_51 = t;
          int l_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_137(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(l_51);
            }
          else
            {
              t = j_51;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm l_136 (ATerm), ATerm m_136 (ATerm), ATerm n_136 (ATerm), ATerm t)
{
  ATerm m_14 (ATerm t)
  {
    ATerm q_51 = t;
    int r_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_136(t);
        ;
        LocalPopChoice(r_51);
      }
    else
      {
        t = q_51;
        {
          ATerm s_51 = t;
          int t_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(t_51);
            }
          else
            {
              t = s_51;
              {
                ATerm g_52 = t;
                int j_52 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(j_52);
                  }
                else
                  {
                    t = g_52;
                    {
                      ATerm m_52 = t;
                      int n_52 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm p_14 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm q_14 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_o_52;
                            return(t);
                          }
                          ATerm s_14 (ATerm t)
                          {
                            t = term_r_52;
                            return(t);
                          }
                          t = Option_3_0(p_14, q_14, s_14, t);
                          ;
                          LocalPopChoice(n_52);
                        }
                      else
                        {
                          t = m_52;
                          {
                            ATerm s_52 = t;
                            int t_52 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(t_52);
                              }
                            else
                              {
                                t = s_52;
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
  ATerm n_14 (ATerm t)
  {
    ATerm t_14 (ATerm t)
    {
      ATerm o_59 = NULL,p_59 = NULL;
      o_59 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm u_52 = t;
        int v_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_18 = NULL;
            t = eval_config_0_0(t);
            l_18 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_18);
            t = l_18;
            ;
            LocalPopChoice(v_52);
          }
        else
          {
            t = u_52;
          }
        p_59 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, p_59));
        t = o_59;
      }
      return(t);
    }
    t = if_verbose2_1_0(t_14, t);
    return(t);
  }
  ATerm o_14 (ATerm t)
  {
    ATerm q_59 = NULL,r_59 = NULL,o_18 = NULL;
    q_59 = t;
    {
      ATerm x_52 = t;
      int b_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_14 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((r_59 != NULL) && (r_59 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_59 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(u_14, t);
          ;
          LocalPopChoice(b_53);
        }
      else
        {
          t = x_52;
          t = term_e_53;
          r_59 = t;
        }
      t = not_null(r_59);
      t = ReadFromFile_0_0(t);
      o_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_59, o_18);
      t = apply_strategy_1_0(l_136, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(m_14, n_136, n_14, o_14, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm v_14 (ATerm t)
  {
    ATerm w_14 (ATerm t)
    {
      ATerm x_14 (ATerm t)
      {
        ATerm z_14 (ATerm t)
        {
          ATerm a_15 (ATerm t)
          {
            t = Strategies_1_0(needed_defs_0_0, t);
            return(t);
          }
          ATerm b_15 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = Cons_2_0(a_15, b_15, t);
          return(t);
        }
        t = Cons_2_0(_id, z_14, t);
        return(t);
      }
      t = Specification_1_0(x_14, t);
      t = needed_constructors_0_0(t);
      return(t);
    }
    t = _2_0(_id, w_14, t);
    return(t);
  }
  t = iowrap_3_0(v_14, _fail, default_usage_0_0, t);
  return(t);
}
