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
ATerm term_b_53;
ATerm term_d_52;
ATerm term_b_52;
ATerm term_u_51;
ATerm term_g_50;
ATerm term_f_50;
ATerm term_a_50;
ATerm term_p_49;
ATerm term_d_49;
ATerm term_c_49;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_v_48;
ATerm term_m_48;
ATerm term_d_48;
ATerm term_o_46;
ATerm term_n_46;
ATerm term_l_46;
ATerm term_q_45;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_i_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_t_44;
ATerm term_q_44;
ATerm term_p_44;
ATerm term_o_44;
ATerm term_n_44;
ATerm term_n_42;
ATerm term_n_41;
ATerm term_c_41;
ATerm term_u_40;
ATerm term_p_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_c_32;
ATerm term_w_31;
ATerm term_i_27;
ATerm term_y_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_r_25;
ATerm term_o_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_z_21;
ATerm term_s_19;
ATerm term_j_19;
ATerm term_w_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_d_16;
ATerm term_u_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_l_15;
ATerm term_t_14;
void init_constant_terms (void)
{
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("z_1", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w_1", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_15);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_Op_2, term_c_26, (ATerm) ATempty);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_ConstType_1, term_d_26);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(sym__2, term_j_19, term_j_19);
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(sym__2, term_m_40, term_p_40);
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_19);
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(sym__3, term_v_48, term_x_48, term_t_14);
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm ConstructorNeeded_0_0 (ATerm);
ATerm filter_1_0 (ATerm l_123 (ATerm), ATerm);
ATerm Constructors_1_0 (ATerm w_96 (ATerm), ATerm);
ATerm Signature_1_0 (ATerm a_96 (ATerm), ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm DeclareConstructorNeeded_0_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm needed_constructors_0_0 (ATerm);
ATerm MissingDef_0_0 (ATerm);
ATerm MissingDefMod_0_0 (ATerm);
ATerm giving_up_0_0 (ATerm);
ATerm x_0 (ATerm);
ATerm DefinitionExists_0_0 (ATerm);
ATerm Rec_2_0 (ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm);
ATerm Let_2_0 (ATerm h_100 (ATerm), ATerm i_100 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm);
ATerm y_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm split_2_0 (ATerm s_114 (ATerm), ATerm t_114 (ATerm), ATerm);
ATerm a_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm free_vars2_4_0 (ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm u_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm v_125 (ATerm), ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm y_1 (ATerm);
ATerm e_2 (ATerm);
ATerm svars_arity_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm alltd_1_0 (ATerm y_112 (ATerm), ATerm);
ATerm f_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm p_110 (ATerm), ATerm q_110 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm v_2 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm JoinDefs2_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm n_100 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm h_97 (ATerm), ATerm i_97 (ATerm), ATerm);
ATerm Op_2_0 (ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm m_140 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm o_5 (ATerm);
ATerm LiftCallArgs_0_0 (ATerm);
ATerm u_30 (ATerm o_30, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm Var_1_0 (ATerm x_96 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm z_5 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm j_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm w_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm r_127 (ATerm), ATerm);
ATerm a_7 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm);
ATerm Con_3_0 (ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm);
ATerm b_7 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Scope_2_0 (ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm k_112 (ATerm), ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm g_111 (ATerm), ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm j_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm tuple_unzip_1_0 (ATerm i_115 (ATerm), ATerm);
ATerm MkDistApplication_0_0 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm copy_1_0 (ATerm l_122 (ATerm), ATerm);
ATerm MkThreadApplication_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm z_39 (ATerm z_37, ATerm a_38, ATerm c_38, ATerm e_38, ATerm);
ATerm a_40 (ATerm z_38, ATerm a_39, ATerm b_39, ATerm c_39, ATerm);
ATerm r_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm DefineCongruence_0_0 (ATerm);
ATerm CongruenceDef_0_0 (ATerm);
ATerm w_7 (ATerm);
ATerm get_definition_0_0 (ATerm);
ATerm diff_1_0 (ATerm f_119 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm s_115 (ATerm), ATerm t_115 (ATerm), ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm l_8 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNextChangeGraph_3_0 (ATerm i_140 (ATerm), ATerm j_140 (ATerm), ATerm k_140 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm g_128 (ATerm), ATerm h_128 (ATerm), ATerm);
ATerm for_3_0 (ATerm j_128 (ATerm), ATerm k_128 (ATerm), ATerm l_128 (ATerm), ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm x_8 (ATerm);
ATerm z_8 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm e_9 (ATerm);
ATerm extract_needed_defs_0_0 (ATerm);
ATerm assert_1_0 (ATerm h_123 (ATerm), ATerm);
ATerm union_1_0 (ATerm k_119 (ATerm), ATerm);
ATerm Arities_0_0 (ATerm);
ATerm m_46 (ATerm c_46, ATerm);
ATerm Definitions_0_0 (ATerm);
ATerm foldr_3_0 (ATerm y_121 (ATerm), ATerm z_121 (ATerm), ATerm a_122 (ATerm), ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm r_9 (ATerm);
ATerm s_9 (ATerm);
ATerm w_9 (ATerm);
ATerm RegisterSDefT_0_0 (ATerm);
ATerm needed_defs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm z_95 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm e_96 (ATerm), ATerm);
ATerm _2_0 (ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm z_132 (ATerm), ATerm);
ATerm j_10 (ATerm);
ATerm k_10 (ATerm);
ATerm l_10 (ATerm);
ATerm m_10 (ATerm);
ATerm o_10 (ATerm);
ATerm p_10 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm b_136 (ATerm), ATerm);
ATerm u_50 (ATerm i_50, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm q_10 (ATerm);
ATerm s_10 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm s_117 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm y_117 (ATerm), ATerm);
ATerm u_10 (ATerm);
ATerm v_10 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm x_10 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm k_134 (ATerm), ATerm);
ATerm y_10 (ATerm);
ATerm z_10 (ATerm);
ATerm a_11 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm q_11 (ATerm);
ATerm r_11 (ATerm);
ATerm s_11 (ATerm);
ATerm t_11 (ATerm);
ATerm u_11 (ATerm);
ATerm v_11 (ATerm);
ATerm w_11 (ATerm);
ATerm y_11 (ATerm);
ATerm a_12 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm c_12 (ATerm);
ATerm e_12 (ATerm);
ATerm f_12 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm i_12 (ATerm);
ATerm k_12 (ATerm);
ATerm l_12 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm w_121 (ATerm), ATerm x_121 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm o_12 (ATerm);
ATerm p_12 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm j_134 (ATerm), ATerm);
ATerm q_12 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm r_12 (ATerm);
ATerm need_help_1_0 (ATerm z_136 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_117 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm n_108 (ATerm), ATerm);
ATerm u_12 (ATerm);
ATerm v_12 (ATerm);
ATerm w_12 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm o_108 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm x_12 (ATerm);
ATerm y_12 (ATerm);
ATerm z_12 (ATerm);
ATerm a_13 (ATerm);
ATerm i_13 (ATerm);
ATerm j_13 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm m_13 (ATerm);
ATerm parse_options_p__1_0 (ATerm c_139 (ATerm), ATerm);
ATerm q_13 (ATerm);
ATerm s_13 (ATerm);
ATerm t_13 (ATerm);
ATerm u_13 (ATerm);
ATerm parse_options_1_0 (ATerm b_139 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm b_137 (ATerm), ATerm c_137 (ATerm), ATerm d_137 (ATerm), ATerm e_137 (ATerm), ATerm);
ATerm a_14 (ATerm);
ATerm c_14 (ATerm);
ATerm e_14 (ATerm);
ATerm k_14 (ATerm);
ATerm l_14 (ATerm);
ATerm iowrap_3_0 (ATerm k_136 (ATerm), ATerm l_136 (ATerm), ATerm m_136 (ATerm), ATerm);
ATerm n_14 (ATerm);
ATerm o_14 (ATerm);
ATerm p_14 (ATerm);
ATerm q_14 (ATerm);
ATerm r_14 (ATerm);
ATerm s_14 (ATerm);
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
  t = term_t_14;
  t = whoami_0_0(t);
  e_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), e_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = c_0;
  return(t);
}
ATerm ConstructorNeeded_0_0 (ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL,q_1 = NULL;
  m_1 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      n_1 = ATgetArgument(t, 0);
      q_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_2 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue)), (ATerm) ATmakeAppl(sym_OpDecl_2, n_1, (ATerm) ATempty));
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_2 = ATgetFirst((ATermList) t);
            {
              ATerm y_14 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = u_2;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm z_14 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_14) != ATmakeSymbol("z_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, n_1, q_1);
        ;
        LocalPopChoice(w_14);
      }
    else
      {
        t = v_14;
        {
          ATerm y_4 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue)), (ATerm) ATmakeAppl(sym_OpDecl_2, n_1, (ATerm) ATempty));
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_4 = ATgetFirst((ATermList) t);
              {
                ATerm a_15 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = y_4;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm c_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) c_15) != ATmakeSymbol("w_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, n_1, q_1);
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm l_123 (ATerm), ATerm t)
{
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(e_15);
    }
  else
    {
      t = d_15;
      {
        ATerm h_15 = t;
        int i_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_0 (ATerm t)
            {
              t = filter_1_0(l_123, t);
              return(t);
            }
            t = Cons_2_0(l_123, h_0, t);
            ;
            LocalPopChoice(i_15);
          }
        else
          {
            t = h_15;
            {
              ATerm x_1 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm j_15 = ATgetFirst((ATermList) t);
                  x_1 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = x_1;
              t = filter_1_0(l_123, t);
            }
          }
      }
    }
  return(t);
}
ATerm Constructors_1_0 (ATerm w_96 (ATerm), ATerm t)
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
  t = w_96(t);
  c_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Constructors_1, c_2), a_2);
  return(t);
}
ATerm Signature_1_0 (ATerm a_96 (ATerm), ATerm t)
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
  t = a_96(t);
  i_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, i_2), g_2);
  return(t);
}
ATerm p_0 (ATerm t)
{
  t = term_l_15;
  return(t);
}
ATerm q_0 (ATerm t)
{
  t = term_l_15;
  return(t);
}
ATerm DeclareConstructorNeeded_0_0 (ATerm t)
{
  ATerm n_2 = NULL,o_2 = NULL;
  n_2 = t;
  {
    ATerm m_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Cong_2))
          {
            o_2 = ATgetArgument(t, 0);
            {
              ATerm o_15 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(n_15);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, o_2, (ATerm) ATempty), term_q_15);
        t = assert_1_0(p_0, t);
        t = n_2;
      }
    else
      {
        t = m_15;
        if(match_cons(t, sym_Op_2))
          {
            o_2 = ATgetArgument(t, 0);
            {
              ATerm r_15 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, o_2, (ATerm) ATempty), term_u_15);
        t = assert_1_0(q_0, t);
        t = n_2;
      }
  }
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm v_15 = t;
  int w_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareConstructorNeeded_0_0(t);
      ;
      LocalPopChoice(w_15);
    }
  else
    {
      t = v_15;
    }
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = Cons_2_0(u_0, v_0, t);
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = Constructors_1_0(w_0, t);
  return(t);
}
ATerm v_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = filter_1_0(ConstructorNeeded_0_0, t);
  return(t);
}
ATerm needed_constructors_0_0 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm y_15 = ATgetArgument(t, 0);
      if(((ATgetType(y_15) == AT_LIST) && !(ATisEmpty(y_15))))
        {
          w_2 = ATgetFirst((ATermList) y_15);
          {
            ATerm z_15 = (ATerm) ATgetNext((ATermList) y_15);
            if(((ATgetType(z_15) == AT_LIST) && !(ATisEmpty(z_15))))
              {
                ATerm a_16 = ATgetFirst((ATermList) z_15);
                if(match_cons(a_16, sym_Strategies_1))
                  {
                    x_2 = ATgetArgument(a_16, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm c_16 = (ATerm) ATgetNext((ATermList) z_15);
                  if(((ATgetType(c_16) != AT_LIST) || !(ATisEmpty(c_16))))
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
  t = topdown_1_0(s_0, t);
  t = w_2;
  t = Signature_1_0(t_0, t);
  y_2 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, x_2)), y_2));
  return(t);
}
ATerm MissingDef_0_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL;
  if(match_cons(t, sym__2))
    {
      z_2 = ATgetArgument(t, 0);
      a_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue))), a_3), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), z_2), (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue))));
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_16), a_3), term_f_16), z_2), term_d_16);
  return(t);
}
ATerm MissingDefMod_0_0 (ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_16 = ATgetArgument(t, 0);
      if(match_cons(h_16, sym_Mod_2))
        {
          b_3 = ATgetArgument(h_16, 0);
          c_3 = ATgetArgument(h_16, 1);
        }
      else
        _fail(t);
      d_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue))), d_3), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), c_3), (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue))), b_3), (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue))));
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_16), d_3), term_f_16), c_3), term_i_16), b_3), term_d_16);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = (ATerm) ATinsert(ATempty, term_j_16);
  return(t);
}
ATerm x_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_16 = ATgetArgument(t, 0);
      if(((ATgetType(k_16) != AT_INT) || (ATgetInt((ATermInt) k_16) != 0)))
        _fail(t);
      {
        ATerm l_16 = ATgetArgument(t, 1);
        if(((ATgetType(l_16) != AT_INT) || (ATgetInt((ATermInt) l_16) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL;
  v_3 = t;
  if(match_cons(t, sym__2))
    {
      w_3 = ATgetArgument(t, 0);
      x_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_3;
  if(match_cons(t, sym__2))
    {
      y_3 = ATgetArgument(t, 0);
      z_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = z_3;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_3;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_16 = ATgetFirst((ATermList) t);
            ATerm p_16 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(p_16) == AT_LIST) && !(ATisEmpty(p_16))))
              {
                ATerm q_16 = ATgetFirst((ATermList) p_16);
                ATerm r_16 = (ATerm) ATgetNext((ATermList) p_16);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm v_16 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(x_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_16;
            }
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_3), (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue))));
          t = (ATerm) ATinsert(ATinsert(ATempty, w_3), term_w_16);
          t = giving_up_0_0(t);
        }
        ;
        LocalPopChoice(n_16);
      }
    else
      {
        t = m_16;
        {
          ATerm m_5 = NULL,n_5 = NULL;
          t = w_3;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm x_16 = ATgetFirst((ATermList) t);
              if(match_cons(x_16, sym__2))
                {
                  m_5 = ATgetArgument(x_16, 0);
                  n_5 = ATgetArgument(x_16, 1);
                }
              else
                _fail(t);
              {
                ATerm y_16 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(y_16) != AT_LIST) || !(ATisEmpty(y_16))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, w_3, (ATerm) ATmakeAppl(sym__2, m_5, n_5));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, w_3, (ATerm) ATmakeAppl(sym__2, m_5, n_5));
        }
      }
  }
  return(t);
}
ATerm Rec_2_0 (ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL;
  i_4 = t;
  if(match_cons(t, sym_Rec_2))
    {
      d_4 = ATgetArgument(t, 0);
      e_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_4);
  c_4 = t;
  t = d_4;
  t = e_101(t);
  g_4 = t;
  t = e_4;
  t = f_101(t);
  h_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, g_4, h_4), c_4);
  return(t);
}
ATerm SDefT_4_0 (ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,b_5 = NULL;
  b_5 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      n_4 = ATgetArgument(t, 0);
      o_4 = ATgetArgument(t, 1);
      p_4 = ATgetArgument(t, 2);
      q_4 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_5);
  m_4 = t;
  t = n_4;
  t = z_102(t);
  s_4 = t;
  t = o_4;
  t = a_103(t);
  t_4 = t;
  t = p_4;
  t = b_103(t);
  u_4 = t;
  t = q_4;
  t = c_103(t);
  v_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, s_4, t_4, u_4, v_4), m_4);
  return(t);
}
ATerm SDef_3_0 (ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm t)
{
  ATerm l_5 = NULL,q_5 = NULL,u_5 = NULL,x_5 = NULL,y_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL;
  c_6 = t;
  if(match_cons(t, sym_SDef_3))
    {
      q_5 = ATgetArgument(t, 0);
      u_5 = ATgetArgument(t, 1);
      x_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_6);
  l_5 = t;
  t = q_5;
  t = w_102(t);
  y_5 = t;
  t = u_5;
  t = x_102(t);
  a_6 = t;
  t = x_5;
  t = y_102(t);
  b_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, y_5, a_6, b_6), l_5);
  return(t);
}
ATerm Let_2_0 (ATerm h_100 (ATerm), ATerm i_100 (ATerm), ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL;
  n_6 = t;
  if(match_cons(t, sym_Let_2))
    {
      i_6 = ATgetArgument(t, 0);
      k_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_6);
  h_6 = t;
  t = i_6;
  t = h_100(t);
  l_6 = t;
  t = k_6;
  t = i_100(t);
  m_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, l_6, m_6), h_6);
  return(t);
}
ATerm sboundin_3_0 (ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm t)
{
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(l_110, l_110, t);
      ;
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
        ATerm d_17 = t;
        int e_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(n_110, n_110, l_110, t);
            ;
            LocalPopChoice(e_17);
          }
        else
          {
            t = d_17;
            {
              ATerm f_17 = t;
              int g_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(n_110, n_110, n_110, l_110, t);
                  ;
                  LocalPopChoice(g_17);
                }
              else
                {
                  t = f_17;
                  t = Rec_2_0(n_110, l_110, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm x_6 = NULL;
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          x_6 = ATgetArgument(t, 0);
          {
            ATerm j_17 = ATgetArgument(t, 1);
          }
          {
            ATerm k_17 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_17);
      t = x_6;
    }
  else
    {
      t = h_17;
      if(match_cons(t, sym_SDefT_4))
        {
          x_6 = ATgetArgument(t, 0);
          {
            ATerm l_17 = ATgetArgument(t, 1);
          }
          {
            ATerm m_17 = ATgetArgument(t, 2);
          }
          {
            ATerm n_17 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = x_6;
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm v_6 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      v_6 = ATgetArgument(t, 0);
      {
        ATerm o_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = v_6;
  t = map_1_0(y_0, t);
  return(t);
}
ATerm split_2_0 (ATerm s_114 (ATerm), ATerm t_114 (ATerm), ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL;
  p_51 = t;
  t = s_114(t);
  q_51 = t;
  t = p_51;
  t = t_114(t);
  r_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_51, r_51);
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = (ATerm) ATempty;
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
  ATerm d_7 = NULL;
  if(match_cons(t, sym__2))
    {
      d_7 = ATgetArgument(t, 0);
      if((d_7 != ATgetArgument(t, 1)))
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
ATerm g_1 (ATerm t)
{
  t = union_1_0(h_1, t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm s_7 = NULL;
  if(match_cons(t, sym__2))
    {
      s_7 = ATgetArgument(t, 0);
      if((s_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm q_7 = NULL;
  if(match_cons(t, sym__2))
    {
      q_7 = ATgetArgument(t, 0);
      if((q_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm u_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm v_125 (ATerm), ATerm t)
{
  ATerm c_8 (ATerm t)
  {
    ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL;
    r_5 = t;
    {
      ATerm p_17 = t;
      int q_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_125(t);
          ;
          LocalPopChoice(q_17);
        }
      else
        {
          t = p_17;
          t = (ATerm) ATempty;
        }
      s_5 = t;
      t = r_5;
      {
        ATerm r_17 = t;
        int s_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_6 = NULL,r_6 = NULL,s_6 = NULL;
            t = r_5;
            t = t_125(t);
            g_6 = t;
            t = r_5;
            {
              ATerm z_0 (ATerm t)
              {
                ATerm b_1 (ATerm t)
                {
                  t = g_6;
                  return(t);
                }
                t = split_2_0(c_8, b_1, t);
                t = diff_1_0(v_125, t);
                return(t);
              }
              t = u_125(z_0, c_8, a_1, t);
              r_6 = t;
              t = SSL_explode_term(r_6);
              if(match_cons(t, sym__2))
                {
                  ATerm t_17 = ATgetArgument(t, 0);
                  s_6 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_6;
              t = foldr_3_0(c_1, d_1, _id, t);
            }
            ;
            LocalPopChoice(s_17);
          }
        else
          {
            t = r_17;
            {
              ATerm k_7 = NULL;
              t = SSL_explode_term(r_5);
              if(match_cons(t, sym__2))
                {
                  ATerm u_17 = ATgetArgument(t, 0);
                  k_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = k_7;
              t = foldr_3_0(f_1, g_1, c_8, t);
            }
          }
        t_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_5, t_5);
        t = union_1_0(i_1, t);
      }
    }
    return(t);
  }
  t = c_8(t);
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm v_17 = ATgetArgument(t, 0);
      if(match_cons(v_17, sym_SVar_1))
        {
          j_8 = ATgetArgument(v_17, 0);
        }
      else
        _fail(t);
      k_8 = ATgetArgument(t, 1);
      o_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_8;
  t = foldr_3_0(o_1, p_1, r_1, t);
  p_8 = t;
  t = o_8;
  t = foldr_3_0(s_1, t_1, u_1, t);
  q_8 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_8, (ATerm) ATmakeAppl(sym__2, p_8, q_8)));
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind1_0_0(t);
      ;
      LocalPopChoice(y_17);
    }
  else
    {
      t = x_17;
      {
        ATerm m_9 = NULL,q_9 = NULL;
        ATerm z_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDef_3))
              {
                ATerm b_18 = ATgetArgument(t, 0);
                q_9 = ATgetArgument(t, 1);
                {
                  ATerm c_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(a_18);
            t = q_9;
            t = map_1_0(v_1, t);
          }
        else
          {
            t = z_17;
            {
              ATerm d_18 = t;
              int e_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      m_9 = ATgetArgument(t, 0);
                      {
                        ATerm g_18 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(e_18);
                  t = (ATerm) ATinsert(ATempty, m_9);
                }
              else
                {
                  t = d_18;
                  {
                    ATerm i_18 = t;
                    int k_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm l_18 = ATgetArgument(t, 0);
                            q_9 = ATgetArgument(t, 1);
                            {
                              ATerm p_18 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm r_18 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(k_18);
                        t = q_9;
                        t = map_1_0(y_1, t);
                      }
                    else
                      {
                        t = i_18;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm s_18 = ATgetArgument(t, 0);
                            q_9 = ATgetArgument(t, 1);
                            {
                              ATerm t_18 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm x_18 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = q_9;
                        t = map_1_0(e_2, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm j_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_18 = ATgetArgument(t, 0);
      if(match_cons(y_18, sym__2))
        {
          j_12 = ATgetArgument(y_18, 0);
          {
            ATerm i_19 = ATgetArgument(y_18, 1);
          }
        }
      else
        _fail(t);
      if((j_12 != ATgetArgument(t, 1)))
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
  t = term_j_19;
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL;
  if(match_cons(t, sym__2))
    {
      u_8 = ATgetArgument(t, 0);
      v_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(u_8, v_8);
        ;
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
        t = SSL_addr(u_8, v_8);
      }
  }
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_s_19;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_j_19;
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm w_8 = NULL,a_9 = NULL;
  if(match_cons(t, sym__2))
    {
      w_8 = ATgetArgument(t, 0);
      a_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_19 = t;
    int u_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(w_8, a_9);
        ;
        LocalPopChoice(u_19);
      }
    else
      {
        t = t_19;
        t = SSL_addr(w_8, a_9);
      }
  }
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_s_19;
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm z_9 = NULL;
  ATerm w_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_9 = ATgetArgument(t, 0);
          {
            ATerm y_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_19);
      t = z_9;
    }
  else
    {
      t = w_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_9;
    }
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm r_10 = NULL;
  ATerm z_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_10 = ATgetArgument(t, 0);
          {
            ATerm b_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_20);
      t = r_10;
    }
  else
    {
      t = z_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_10;
    }
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm b_12 = NULL;
  ATerm c_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_12 = ATgetArgument(t, 0);
          {
            ATerm m_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_20);
      t = b_12;
    }
  else
    {
      t = c_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_12;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(j_1, k_1, sboundin_3_0, l_1, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,o_13 = NULL,d_14 = NULL,u_14 = NULL,g_15 = NULL;
  if(match_cons(t, sym__2))
    {
      o_13 = ATgetArgument(t, 0);
      d_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_14;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_14 = ATgetFirst((ATermList) t);
      g_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_14;
  if(match_cons(t, sym__2))
    {
      k_13 = ATgetArgument(t, 0);
      l_13 = ATgetArgument(t, 1);
      {
        ATerm o_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_13;
            if((o_13 != t))
              {
                _fail(t);
              }
            t = l_13;
            ;
            LocalPopChoice(p_20);
          }
        else
          {
            t = o_20;
            t = (ATerm) ATmakeAppl(sym__2, o_13, g_15);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, o_13, g_15);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm y_112 (ATerm), ATerm t)
{
  ATerm f_18 (ATerm t)
  {
    ATerm w_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_112(t);
        ;
        LocalPopChoice(y_20);
      }
    else
      {
        t = w_20;
        t = SRTS_all(f_18, t);
      }
    return(t);
  }
  t = f_18(t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_21 = ATgetArgument(t, 0);
      if(((ATgetType(a_21) != AT_LIST) || !(ATisEmpty(a_21))))
        _fail(t);
      {
        ATerm b_21 = ATgetArgument(t, 1);
        if(((ATgetType(b_21) != AT_LIST) || !(ATisEmpty(b_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,e_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_21 = ATgetArgument(t, 0);
      if(((ATgetType(e_21) == AT_LIST) && !(ATisEmpty(e_21))))
        {
          z_18 = ATgetFirst((ATermList) e_21);
          b_19 = (ATerm) ATgetNext((ATermList) e_21);
        }
      else
        _fail(t);
      {
        ATerm j_21 = ATgetArgument(t, 1);
        if(((ATgetType(j_21) == AT_LIST) && !(ATisEmpty(j_21))))
          {
            a_19 = ATgetFirst((ATermList) j_21);
            e_19 = (ATerm) ATgetNext((ATermList) j_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_18, a_19), (ATerm) ATmakeAppl(sym__2, b_19, e_19));
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL;
  if(match_cons(t, sym__2))
    {
      f_19 = ATgetArgument(t, 0);
      g_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_19), f_19);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm h_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL;
  h_18 = t;
  {
    ATerm n_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_21 = ATgetArgument(t, 0);
            ATerm r_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(o_21);
        t = h_18;
      }
    else
      {
        t = n_21;
        {
          ATerm u_18 = NULL;
          if(match_cons(t, sym__3))
            {
              m_18 = ATgetArgument(t, 0);
              n_18 = ATgetArgument(t, 1);
              o_18 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, m_18, n_18);
          t = genzip_4_0(f_2, k_2, l_2, _id, t);
          u_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_18, o_18);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm p_110 (ATerm), ATerm q_110 (ATerm), ATerm t)
{
  ATerm h_19 = NULL,m_19 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      m_19 = ATgetArgument(t, 0);
      h_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_19;
  {
    ATerm m_2 (ATerm t)
    {
      ATerm d_8 = NULL;
      t = p_110(t);
      d_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_8, m_19);
      t = lookup_0_0(t);
      t = q_110(t);
      return(t);
    }
    t = alltd_1_0(m_2, t);
  }
  return(t);
}
ATerm VarDec_2_0 (ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,v_19 = NULL;
  v_19 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      o_19 = ATgetArgument(t, 0);
      p_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_19);
  n_19 = t;
  t = o_19;
  t = s_102(t);
  q_19 = t;
  t = p_19;
  t = t_102(t);
  r_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, q_19, r_19), n_19);
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = VarDec_2_0(new_0_0, _id, t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = VarDec_2_0(new_0_0, _id, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm r_20 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      r_20 = ATgetArgument(t, 0);
      {
        ATerm s_21 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_20), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm s_20 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      s_20 = ATgetArgument(t, 0);
      {
        ATerm t_21 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, s_20);
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm g_21 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      g_21 = ATgetArgument(t, 0);
      {
        ATerm u_21 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = g_21;
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm h_21 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      h_21 = ATgetArgument(t, 0);
      {
        ATerm v_21 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = h_21;
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm i_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      k_21 = ATgetArgument(t, 0);
      m_21 = ATgetArgument(t, 1);
      i_21 = ATgetArgument(t, 2);
      t = k_21;
      if(match_cons(t, sym_SVar_1))
        {
          l_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_21;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_21;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_21;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          k_21 = ATgetArgument(t, 0);
          m_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_21;
      if(match_cons(t, sym_SVar_1))
        {
          l_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_21;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_21;
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm q_21 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_21;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm m_8 = NULL,y_8 = NULL,d_9 = NULL;
  m_8 = t;
  t = SSL_explode_term(m_8);
  if(match_cons(t, sym__2))
    {
      ATerm a_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_22 = ATgetArgument(t, 1);
        if(((ATgetType(f_22) == AT_LIST) && !(ATisEmpty(f_22))))
          {
            y_8 = ATgetFirst((ATermList) f_22);
            {
              ATerm h_22 = (ATerm) ATgetNext((ATermList) f_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(m_8);
  if(match_cons(t, sym__2))
    {
      ATerm j_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_22 = ATgetArgument(t, 1);
        if(((ATgetType(k_22) == AT_LIST) && !(ATisEmpty(k_22))))
          {
            ATerm n_22 = ATgetFirst((ATermList) k_22);
            ATerm o_22 = (ATerm) ATgetNext((ATermList) k_22);
            if(((ATgetType(o_22) == AT_LIST) && !(ATisEmpty(o_22))))
              {
                d_9 = ATgetFirst((ATermList) o_22);
                {
                  ATerm q_22 = (ATerm) ATgetNext((ATermList) o_22);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, y_8, d_9);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,n_20 = NULL,q_20 = NULL;
  e_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_22 = ATgetFirst((ATermList) t);
      if(match_cons(w_22, sym_SDefT_4))
        {
          f_20 = ATgetArgument(w_22, 0);
          g_20 = ATgetArgument(w_22, 1);
          h_20 = ATgetArgument(w_22, 2);
          {
            ATerm a_23 = ATgetArgument(w_22, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm z_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_20;
  t = map_1_0(p_2, t);
  j_20 = t;
  t = h_20;
  t = map_1_0(q_2, t);
  k_20 = t;
  t = j_20;
  t = map_1_0(r_2, t);
  l_20 = t;
  t = k_20;
  t = map_1_0(s_2, t);
  n_20 = t;
  t = e_20;
  {
    ATerm t_2 (ATerm t)
    {
      ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL,x_20 = NULL,c_21 = NULL,d_21 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm b_23 = ATgetArgument(t, 0);
          t_20 = ATgetArgument(t, 1);
          u_20 = ATgetArgument(t, 2);
          v_20 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = u_20;
      t = map_1_0(v_2, t);
      x_20 = t;
      t = t_20;
      t = map_1_0(e_3, t);
      c_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, c_21, l_20, v_20);
      t = substitute_2_0(f_3, _id, t);
      d_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, x_20, n_20, d_21);
      t = substitute_2_0(g_3, _id, t);
      return(t);
    }
    t = map_1_0(t_2, t);
    t = foldr_2_0(h_3, i_3, t);
    q_20 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, f_20, j_20, k_20, q_20);
  }
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  x_21 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      y_21 = ATgetArgument(t, 0);
      w_21 = ATgetArgument(t, 1);
      {
        ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL;
        t = x_21;
        t = new_0_0(t);
        b_22 = t;
        t = new_0_0(t);
        c_22 = t;
        t = new_0_0(t);
        d_22 = t;
        t = new_0_0(t);
        e_22 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_22), d_22), c_22), b_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, b_22), (ATerm) ATmakeAppl(sym_Var_1, d_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, y_21, (ATerm)ATmakeAppl(sym_Var_1, b_22), (ATerm) ATmakeAppl(sym_Var_1, c_22)), (ATerm) ATmakeAppl(sym_BAM_3, w_21, (ATerm)ATmakeAppl(sym_Var_1, d_22), (ATerm) ATmakeAppl(sym_Var_1, e_22)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_e_23, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_22)), (ATerm) ATmakeAppl(sym_Var_1, c_22))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          y_21 = ATgetArgument(t, 0);
          {
            ATerm g_22 = NULL,l_22 = NULL,m_22 = NULL,p_22 = NULL;
            t = x_21;
            t = new_0_0(t);
            g_22 = t;
            t = y_21;
            {
              ATerm j_3 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((l_22 != NULL) && (l_22 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      l_22 = ATgetArgument(t, 0);
                    if(((m_22 != NULL) && (m_22 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      m_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, g_22);
                return(t);
              }
              t = oncetd_1_0(j_3, t);
              p_22 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_e_23, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_22)), not_null(l_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_22)), (ATerm) ATmakeAppl(sym_Build_1, p_22))));
            }
          }
        }
      else
        {
          ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              y_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_21;
          t = new_0_0(t);
          r_22 = t;
          t = new_0_0(t);
          s_22 = t;
          t = y_21;
          {
            ATerm k_3 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((t_22 != NULL) && (t_22 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    t_22 = ATgetArgument(t, 0);
                  if(((u_22 != NULL) && (u_22 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    u_22 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, r_22);
              return(t);
            }
            t = oncetd_1_0(k_3, t);
            v_22 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_22), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_22)), (ATerm) ATmakeAppl(sym_PrimT_3, term_f_23, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_22))))), (ATerm)ATmakeAppl(sym_Var_1, r_22), (ATerm) ATmakeAppl(sym_Op_2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_22)), not_null(t_22)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL;
  x_22 = t;
  if(match_cons(t, sym_Match_1))
    {
      y_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_23 = NULL,d_23 = NULL,h_23 = NULL,j_23 = NULL;
        t = x_22;
        t = new_0_0(t);
        c_23 = t;
        t = y_22;
        {
          ATerm l_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((h_23 != NULL) && (h_23 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_23 = ATgetArgument(t, 0);
                if(((d_23 != NULL) && (d_23 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  d_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, c_23), not_null(h_23));
            return(t);
          }
          t = pat_td_1_0(l_3, t);
          j_23 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_23), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_o_23, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, c_23))), (ATerm) ATmakeAppl(sym_Match_1, not_null(d_23))))));
        }
        ;
        LocalPopChoice(k_23);
      }
    else
      {
        t = i_23;
        {
          ATerm t_23 = t;
          int u_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
              t = x_22;
              t = new_0_0(t);
              l_23 = t;
              t = y_22;
              {
                ATerm m_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((m_23 != NULL) && (m_23 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        m_23 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, l_23);
                  return(t);
                }
                t = pat_td_1_0(m_3, t);
                n_23 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, l_23)), not_null(m_23))));
              }
              ;
              LocalPopChoice(u_23);
            }
          else
            {
              t = t_23;
              {
                ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL;
                t = x_22;
                t = new_0_0(t);
                p_23 = t;
                t = y_22;
                {
                  ATerm n_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((q_23 != NULL) && (q_23 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          q_23 = ATgetArgument(t, 0);
                        if(((r_23 != NULL) && (r_23 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          r_23 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, p_23);
                    return(t);
                  }
                  t = pat_td_1_0(n_3, t);
                  s_23 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, p_23)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_23)), not_null(q_23)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL;
  b_24 = t;
  if(match_cons(t, sym_As_2))
    {
      x_23 = ATgetArgument(t, 0);
      y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_24);
  w_23 = t;
  t = x_23;
  t = o_97(t);
  z_23 = t;
  t = y_23;
  t = p_97(t);
  a_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, z_23, a_24), w_23);
  return(t);
}
ATerm CallT_3_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm n_100 (ATerm), ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL;
  l_24 = t;
  if(match_cons(t, sym_CallT_3))
    {
      f_24 = ATgetArgument(t, 0);
      g_24 = ATgetArgument(t, 1);
      h_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_24);
  e_24 = t;
  t = f_24;
  t = l_100(t);
  i_24 = t;
  t = g_24;
  t = m_100(t);
  j_24 = t;
  t = h_24;
  t = n_100(t);
  k_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, i_24, j_24, k_24), e_24);
  return(t);
}
ATerm PrimT_3_0 (ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL;
  v_24 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      p_24 = ATgetArgument(t, 0);
      q_24 = ATgetArgument(t, 1);
      r_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_24);
  o_24 = t;
  t = p_24;
  t = n_101(t);
  s_24 = t;
  t = q_24;
  t = o_101(t);
  t_24 = t;
  t = r_24;
  t = p_101(t);
  u_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, s_24, t_24, u_24), o_24);
  return(t);
}
ATerm Explode_2_0 (ATerm h_97 (ATerm), ATerm i_97 (ATerm), ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,e_25 = NULL,f_25 = NULL;
  f_25 = t;
  if(match_cons(t, sym_Explode_2))
    {
      z_24 = ATgetArgument(t, 0);
      a_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_25);
  y_24 = t;
  t = z_24;
  t = h_97(t);
  b_25 = t;
  t = a_25;
  t = i_97(t);
  e_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, b_25, e_25), y_24);
  return(t);
}
ATerm Op_2_0 (ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,s_25 = NULL;
  s_25 = t;
  if(match_cons(t, sym_Op_2))
    {
      m_25 = ATgetArgument(t, 0);
      n_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_25);
  l_25 = t;
  t = m_25;
  t = d_97(t);
  o_25 = t;
  t = n_25;
  t = e_97(t);
  p_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, o_25, p_25), l_25);
  return(t);
}
ATerm pat_td_1_0 (ATerm m_140 (ATerm), ATerm t)
{
  ATerm v_23 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_140(t);
      ;
      LocalPopChoice(c_24);
    }
  else
    {
      t = v_23;
      {
        ATerm d_24 = t;
        int m_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_3 (ATerm t)
            {
              ATerm p_3 (ATerm t)
              {
                t = pat_td_1_0(m_140, t);
                return(t);
              }
              t = fetch_1_0(p_3, t);
              return(t);
            }
            t = Op_2_0(_id, o_3, t);
            ;
            LocalPopChoice(m_24);
          }
        else
          {
            t = d_24;
            {
              ATerm n_24 = t;
              int w_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_3 (ATerm t)
                  {
                    t = pat_td_1_0(m_140, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, q_3, t);
                  ;
                  LocalPopChoice(w_24);
                }
              else
                {
                  t = n_24;
                  {
                    ATerm x_24 = t;
                    int c_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_3 (ATerm t)
                        {
                          t = pat_td_1_0(m_140, t);
                          return(t);
                        }
                        t = Explode_2_0(r_3, _id, t);
                        ;
                        LocalPopChoice(c_25);
                      }
                    else
                      {
                        t = x_24;
                        {
                          ATerm d_25 = t;
                          int g_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm s_3 (ATerm t)
                              {
                                ATerm t_3 (ATerm t)
                                {
                                  t = pat_td_1_0(m_140, t);
                                  return(t);
                                }
                                t = fetch_1_0(t_3, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, s_3, t);
                              ;
                              LocalPopChoice(g_25);
                            }
                          else
                            {
                              t = d_25;
                              {
                                ATerm h_25 = t;
                                int j_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_3 (ATerm t)
                                    {
                                      ATerm a_4 (ATerm t)
                                      {
                                        t = pat_td_1_0(m_140, t);
                                        return(t);
                                      }
                                      t = fetch_1_0(a_4, t);
                                      return(t);
                                    }
                                    t = CallT_3_0(_id, _id, u_3, t);
                                    ;
                                    LocalPopChoice(j_25);
                                  }
                                else
                                  {
                                    t = h_25;
                                    {
                                      ATerm b_4 (ATerm t)
                                      {
                                        t = pat_td_1_0(m_140, t);
                                        return(t);
                                      }
                                      t = As_2_0(_id, b_4, t);
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
  ATerm w_25 = NULL,x_25 = NULL;
  w_25 = t;
  if(match_cons(t, sym_Build_1))
    {
      x_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL;
        t = w_25;
        t = new_0_0(t);
        f_26 = t;
        t = x_25;
        {
          ATerm f_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((h_26 != NULL) && (h_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_26 = ATgetArgument(t, 0);
                if(((i_26 != NULL) && (i_26 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  i_26 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, f_26);
            return(t);
          }
          t = pat_td_1_0(f_4, t);
          j_26 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_r_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_26)), not_null(h_26))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_26)))), (ATerm) ATmakeAppl(sym_Build_1, j_26)));
        }
        ;
        LocalPopChoice(q_25);
      }
    else
      {
        t = k_25;
        {
          ATerm t_25 = t;
          int u_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL;
              t = w_25;
              t = new_0_0(t);
              l_26 = t;
              t = x_25;
              {
                ATerm j_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((m_26 != NULL) && (m_26 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        m_26 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, l_26);
                  return(t);
                }
                t = pat_td_1_0(j_4, t);
                n_26 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_26), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_26)))), (ATerm) ATmakeAppl(sym_Build_1, n_26)));
              }
              ;
              LocalPopChoice(u_25);
            }
          else
            {
              t = t_25;
              {
                ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL;
                t = w_25;
                t = new_0_0(t);
                p_26 = t;
                t = x_25;
                {
                  ATerm k_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((q_26 != NULL) && (q_26 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          q_26 = ATgetArgument(t, 0);
                        if(((r_26 != NULL) && (r_26 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          r_26 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, p_26);
                    return(t);
                  }
                  t = pat_td_1_0(k_4, t);
                  s_26 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(q_26), not_null(r_26), (ATerm) ATmakeAppl(sym_Var_1, p_26))), (ATerm) ATmakeAppl(sym_Build_1, s_26)));
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
  ATerm v_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm l_4 (ATerm t)
        {
          ATerm z_25 = t;
          int a_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(a_26);
            }
          else
            {
              t = z_25;
            }
          return(t);
        }
        t = Cons_2_0(_id, l_4, t);
      }
      ;
      LocalPopChoice(y_25);
    }
  else
    {
      t = v_25;
      {
        ATerm r_4 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, r_4, t);
      }
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm b_28 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, b_28, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_26), term_e_26));
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm k_26 = t;
  int o_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_28 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, d_28, term_e_26);
      ;
      LocalPopChoice(o_26);
    }
  else
    {
      t = k_26;
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm l_28 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      l_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, l_28, term_e_26);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_28 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, n_28, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_26), term_e_26));
      ;
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm x_28 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      x_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_28, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_26), term_e_26));
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm w_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_29 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, b_29, term_e_26);
      ;
      LocalPopChoice(x_26);
    }
  else
    {
      t = w_26;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,f_27 = NULL,g_27 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      f_27 = ATgetArgument(t, 0);
      g_27 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, f_27, g_27);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          f_27 = ATgetArgument(t, 0);
          t = f_27;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_27 = ATgetFirst((ATermList) t);
              b_27 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, a_27, (ATerm) ATmakeAppl(sym_LChoices_1, b_27));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_z_21;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              f_27 = ATgetArgument(t, 0);
              t = f_27;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_27 = ATgetFirst((ATermList) t);
                  b_27 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, a_27, (ATerm) ATmakeAppl(sym_Choices_1, b_27));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_z_21;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  f_27 = ATgetArgument(t, 0);
                  t = f_27;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      a_27 = ATgetFirst((ATermList) t);
                      b_27 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_27, (ATerm) ATmakeAppl(sym_Seqs_1, b_27));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_y_26;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_27 = ATgetArgument(t, 0);
                      g_27 = ATgetArgument(t, 1);
                      d_27 = ATgetArgument(t, 2);
                      c_27 = ATgetArgument(t, 3);
                      {
                        ATerm w_27 = NULL,z_27 = NULL;
                        t = g_27;
                        t = map1_1_0(w_4, t);
                        w_27 = t;
                        t = d_27;
                        t = map1_1_0(x_4, t);
                        z_27 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, f_27, w_27, z_27, c_27);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          f_27 = ATgetArgument(t, 0);
                          g_27 = ATgetArgument(t, 1);
                          d_27 = ATgetArgument(t, 2);
                          c_27 = ATgetArgument(t, 3);
                          {
                            ATerm z_26 = t;
                            int e_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm j_28 = NULL,k_28 = NULL;
                                t = d_27;
                                t = map1_1_0(z_4, t);
                                j_28 = t;
                                t = g_27;
                                t = map_1_0(a_5, t);
                                k_28 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, f_27, k_28, j_28, c_27);
                                ;
                                LocalPopChoice(e_27);
                              }
                            else
                              {
                                t = z_26;
                                {
                                  ATerm v_28 = NULL,w_28 = NULL;
                                  t = g_27;
                                  t = map1_1_0(c_5, t);
                                  v_28 = t;
                                  t = d_27;
                                  t = map_1_0(d_5, t);
                                  w_28 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, f_27, v_28, w_28, c_27);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              f_27 = ATgetArgument(t, 0);
                              g_27 = ATgetArgument(t, 1);
                              d_27 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, g_27, (ATerm) ATmakeAppl(sym_Op_2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, d_27), f_27)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  f_27 = ATgetArgument(t, 0);
                                  g_27 = ATgetArgument(t, 1);
                                  d_27 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, d_27)), f_27), (ATerm) ATmakeAppl(sym_Build_1, g_27)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      f_27 = ATgetArgument(t, 0);
                                      g_27 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_27, (ATerm) ATmakeAppl(sym_Match_1, g_27));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          f_27 = ATgetArgument(t, 0);
                                          g_27 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_27), g_27);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              f_27 = ATgetArgument(t, 0);
                                              g_27 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_27), f_27);
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
ATerm e_5 (ATerm t)
{
  ATerm h_27 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_27;
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_i_27;
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm y_29 = NULL,a_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_29 = ATgetFirst((ATermList) t);
      a_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_29, a_30);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_27 = ATgetArgument(t, 0);
      if(match_cons(j_27, sym__2))
        {
          c_30 = ATgetArgument(j_27, 0);
          e_30 = ATgetArgument(j_27, 1);
        }
      else
        _fail(t);
      {
        ATerm k_27 = ATgetArgument(t, 1);
        if(match_cons(k_27, sym__2))
          {
            d_30 = ATgetArgument(k_27, 0);
            f_30 = ATgetArgument(k_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_30), c_30), (ATerm) ATinsert(CheckATermList(f_30), e_30));
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = genzip_4_0(j_5, k_5, o_5, _id, t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_i_27;
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_30 = ATgetFirst((ATermList) t);
      h_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_30, h_30);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_27 = ATgetArgument(t, 0);
      if(match_cons(l_27, sym__2))
        {
          i_30 = ATgetArgument(l_27, 0);
          k_30 = ATgetArgument(l_27, 1);
        }
      else
        _fail(t);
      {
        ATerm m_27 = ATgetArgument(t, 1);
        if(match_cons(m_27, sym__2))
          {
            j_30 = ATgetArgument(m_27, 0);
            l_30 = ATgetArgument(m_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_30), i_30), (ATerm) ATinsert(CheckATermList(l_30), k_30));
  return(t);
}
ATerm LiftCallArgs_0_0 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      s_29 = ATgetArgument(t, 0);
      t_29 = ATgetArgument(t, 1);
      u_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_29;
  t = fetch_1_0(e_5, t);
  t = u_29;
  t = genzip_4_0(f_5, g_5, h_5, LiftPrimArg_0_0, t);
  t = _2_0(concat_0_0, i_5, t);
  if(match_cons(t, sym__2))
    {
      v_29 = ATgetArgument(t, 0);
      {
        ATerm n_27 = ATgetArgument(t, 1);
        if(match_cons(n_27, sym__2))
          {
            w_29 = ATgetArgument(n_27, 0);
            x_29 = ATgetArgument(n_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, v_29, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_29), (ATerm) ATmakeAppl(sym_CallT_3, s_29, t_29, x_29)));
  return(t);
}
ATerm u_30 (ATerm o_30, ATerm t)
{
  ATerm q_30 = NULL;
  t = o_30;
  {
    ATerm o_27 = t;
    if((PushChoice() == 0))
      {
        t = Var_1_0(_id, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_27;
      }
    t = new_0_0(t);
    q_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, q_30), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_30), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_30)))), (ATerm) ATmakeAppl(sym_Var_1, q_30)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  r_30 = t;
  if(match_cons(t, sym_Var_1))
    {
      s_30 = ATgetArgument(t, 0);
      {
        ATerm p_27 = t;
        int q_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_30(r_30, t);
            ;
            LocalPopChoice(q_27);
          }
        else
          {
            t = p_27;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_y_26, (ATerm) ATmakeAppl(sym_Var_1, s_30)));
          }
      }
    }
  else
    {
      t = u_30(r_30, t);
    }
  return(t);
}
ATerm Var_1_0 (ATerm x_96 (ATerm), ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL;
  y_30 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_30);
  v_30 = t;
  t = w_30;
  t = x_96(t);
  x_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, x_30), v_30);
  return(t);
}
ATerm p_5 (ATerm t)
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
  return(t);
}
ATerm v_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_i_27;
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_9 = ATgetFirst((ATermList) t);
      u_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_9, u_9);
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm v_9 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_27 = ATgetArgument(t, 0);
      if(match_cons(s_27, sym__2))
        {
          v_9 = ATgetArgument(s_27, 0);
          c_10 = ATgetArgument(s_27, 1);
        }
      else
        _fail(t);
      {
        ATerm t_27 = ATgetArgument(t, 1);
        if(match_cons(t_27, sym__2))
          {
            b_10 = ATgetArgument(t_27, 0);
            d_10 = ATgetArgument(t_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_10), v_9), (ATerm) ATinsert(CheckATermList(d_10), c_10));
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = genzip_4_0(e_6, f_6, j_6, _id, t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_i_27;
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_10 = ATgetFirst((ATermList) t);
      f_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_10, f_10);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL,n_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_27 = ATgetArgument(t, 0);
      if(match_cons(u_27, sym__2))
        {
          g_10 = ATgetArgument(u_27, 0);
          i_10 = ATgetArgument(u_27, 1);
        }
      else
        _fail(t);
      {
        ATerm v_27 = ATgetArgument(t, 1);
        if(match_cons(v_27, sym__2))
          {
            h_10 = ATgetArgument(v_27, 0);
            n_10 = ATgetArgument(v_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_10), g_10), (ATerm) ATinsert(CheckATermList(n_10), i_10));
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm x_27 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_27;
    }
  return(t);
}
ATerm p_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_i_27;
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_11 = ATgetFirst((ATermList) t);
      f_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_11, f_11);
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_27 = ATgetArgument(t, 0);
      if(match_cons(y_27, sym__2))
        {
          g_11 = ATgetArgument(y_27, 0);
          i_11 = ATgetArgument(y_27, 1);
        }
      else
        _fail(t);
      {
        ATerm a_28 = ATgetArgument(t, 1);
        if(match_cons(a_28, sym__2))
          {
            h_11 = ATgetArgument(a_28, 0);
            j_11 = ATgetArgument(a_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_11), g_11), (ATerm) ATinsert(CheckATermList(j_11), i_11));
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = genzip_4_0(w_6, y_6, z_6, _id, t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_i_27;
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_11 = ATgetFirst((ATermList) t);
      l_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_11, l_11);
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_28 = ATgetArgument(t, 0);
      if(match_cons(c_28, sym__2))
        {
          m_11 = ATgetArgument(c_28, 0);
          o_11 = ATgetArgument(c_28, 1);
        }
      else
        _fail(t);
      {
        ATerm e_28 = ATgetArgument(t, 1);
        if(match_cons(e_28, sym__2))
          {
            n_11 = ATgetArgument(e_28, 0);
            p_11 = ATgetArgument(e_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_11), m_11), (ATerm) ATinsert(CheckATermList(p_11), o_11));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL;
  k_33 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      l_33 = ATgetArgument(t, 0);
      m_33 = ATgetArgument(t, 1);
      j_33 = ATgetArgument(t, 2);
      {
        ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
        t = j_33;
        t = fetch_1_0(p_5, t);
        t = j_33;
        t = genzip_4_0(v_5, w_5, z_5, LiftPrimArg_0_0, t);
        t = _2_0(concat_0_0, d_6, t);
        if(match_cons(t, sym__2))
          {
            n_9 = ATgetArgument(t, 0);
            {
              ATerm f_28 = ATgetArgument(t, 1);
              if(match_cons(f_28, sym__2))
                {
                  o_9 = ATgetArgument(f_28, 0);
                  p_9 = ATgetArgument(f_28, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, n_9, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_9), (ATerm) ATmakeAppl(sym_PrimT_3, l_33, m_33, p_9)));
      }
    }
  else
    {
      ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          l_33 = ATgetArgument(t, 0);
          m_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_33;
      t = fetch_1_0(o_6, t);
      t = m_33;
      t = genzip_4_0(p_6, q_6, t_6, LiftPrimArg_0_0, t);
      t = _2_0(concat_0_0, u_6, t);
      if(match_cons(t, sym__2))
        {
          b_11 = ATgetArgument(t, 0);
          {
            ATerm g_28 = ATgetArgument(t, 1);
            if(match_cons(g_28, sym__2))
              {
                c_11 = ATgetArgument(g_28, 0);
                d_11 = ATgetArgument(g_28, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, b_11, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_11), (ATerm) ATmakeAppl(sym_PrimT_3, l_33, (ATerm)ATempty, d_11)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm r_127 (ATerm), ATerm t)
{
  ATerm p_33 (ATerm t)
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_127(t);
        t = p_33(t);
        ;
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
      }
    return(t);
  }
  t = p_33(t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm m_28 = t;
  int o_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(o_28);
    }
  else
    {
      t = m_28;
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm p_28 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(a_7, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_28;
    }
  return(t);
}
ATerm App_2_0 (ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL;
  v_33 = t;
  if(match_cons(t, sym_App_2))
    {
      r_33 = ATgetArgument(t, 0);
      s_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_33);
  q_33 = t;
  t = r_33;
  t = l_97(t);
  t_33 = t;
  t = s_33;
  t = m_97(t);
  u_33 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, t_33, u_33), q_33);
  return(t);
}
ATerm Con_3_0 (ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL;
  f_34 = t;
  if(match_cons(t, sym_Con_3))
    {
      z_33 = ATgetArgument(t, 0);
      a_34 = ATgetArgument(t, 1);
      b_34 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_34);
  y_33 = t;
  t = z_33;
  t = x_97(t);
  c_34 = t;
  t = a_34;
  t = y_97(t);
  d_34 = t;
  t = b_34;
  t = z_97(t);
  e_34 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, c_34, d_34, e_34), y_33);
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(r_28);
    }
  else
    {
      t = q_28;
      t = App_2_0(_id, _id, t);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm s_28 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(b_7, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_28;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      l_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_34;
  if(match_cons(t, sym_StratRule_3))
    {
      m_34 = ATgetArgument(t, 0);
      n_34 = ATgetArgument(t, 1);
      o_34 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_34), (ATerm) ATmakeAppl(sym_Where_1, o_34)), m_34));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          m_34 = ATgetArgument(t, 0);
          n_34 = ATgetArgument(t, 1);
          o_34 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_34;
      t = pureterm_0_0(t);
      t = n_34;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, n_34)), (ATerm) ATmakeAppl(sym_Where_1, o_34)), (ATerm) ATmakeAppl(sym_Match_1, m_34)));
    }
  return(t);
}
ATerm Scope_2_0 (ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL;
  a_35 = t;
  if(match_cons(t, sym_Scope_2))
    {
      w_34 = ATgetArgument(t, 0);
      x_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_35);
  v_34 = t;
  t = w_34;
  t = r_100(t);
  y_34 = t;
  t = x_34;
  t = s_100(t);
  z_34 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, y_34, z_34), v_34);
  return(t);
}
ATerm oncetd_1_0 (ATerm k_112 (ATerm), ATerm t)
{
  ATerm d_35 (ATerm t)
  {
    ATerm t_28 = t;
    int u_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_112(t);
        ;
        LocalPopChoice(u_28);
      }
    else
      {
        t = t_28;
        t = SRTS_one(d_35, t);
      }
    return(t);
  }
  t = d_35(t);
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm y_28 = ATgetArgument(t, 0);
      if(match_cons(y_28, sym_Rule_3))
        {
          e_35 = ATgetArgument(y_28, 0);
          f_35 = ATgetArgument(y_28, 1);
          g_35 = ATgetArgument(y_28, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  h_35 = t;
  t = e_35;
  {
    ATerm c_7 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm z_28 = ATgetArgument(t, 0);
          if(match_cons(z_28, sym_Var_1))
            {
              if(((j_35 != NULL) && (j_35 != ATgetArgument(z_28, 0))))
                _fail(ATgetArgument(z_28, 0));
              else
                j_35 = ATgetArgument(z_28, 0);
            }
          else
            _fail(t);
          if(((i_35 != NULL) && (i_35 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            i_35 = ATgetArgument(t, 1);
          {
            ATerm a_29 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_35));
      return(t);
    }
    t = oncetd_1_0(c_7, t);
    k_35 = t;
    t = f_35;
    {
      ATerm e_7 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm c_29 = ATgetArgument(t, 0);
            if(match_cons(c_29, sym_Var_1))
              {
                if(((j_35 != NULL) && (j_35 != ATgetArgument(c_29, 0))))
                  _fail(ATgetArgument(c_29, 0));
                else
                  j_35 = ATgetArgument(c_29, 0);
              }
            else
              _fail(t);
            if(((l_35 != NULL) && (l_35 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              l_35 = ATgetArgument(t, 1);
            {
              ATerm d_29 = ATgetArgument(t, 2);
              if(match_cons(d_29, sym_CallT_3))
                {
                  if(((m_35 != NULL) && (m_35 != ATgetArgument(d_29, 0))))
                    _fail(ATgetArgument(d_29, 0));
                  else
                    m_35 = ATgetArgument(d_29, 0);
                  {
                    ATerm e_29 = ATgetArgument(d_29, 1);
                    if(((ATgetType(e_29) != AT_LIST) || !(ATisEmpty(e_29))))
                      _fail(t);
                  }
                  {
                    ATerm f_29 = ATgetArgument(d_29, 2);
                    if(((ATgetType(f_29) != AT_LIST) || !(ATisEmpty(f_29))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, h_35);
        return(t);
      }
      t = oncetd_1_0(e_7, t);
      n_35 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_35), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, k_35, n_35, (ATerm) ATmakeAppl(sym_Seq_2, g_35, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(m_35), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(i_35), not_null(l_35), term_y_26))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_35)), (ATerm) ATmakeAppl(sym_Var_1, h_35))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm g_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_29 = t;
      int j_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0_0(t);
          t = desugarRule_0_0(t);
          ;
          LocalPopChoice(j_29);
        }
      else
        {
          t = i_29;
          {
            ATerm k_29 = t;
            int l_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2_0(_id, desugarRule_0_0, t);
                ;
                LocalPopChoice(l_29);
              }
            else
              {
                t = k_29;
                t = RtoS_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(h_29);
    }
  else
    {
      t = g_29;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm g_111 (ATerm), ATerm t)
{
  t = g_111(t);
  {
    ATerm f_7 (ATerm t)
    {
      t = topdown_1_0(g_111, t);
      return(t);
    }
    t = SRTS_all(f_7, t);
  }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(n_29);
    }
  else
    {
      t = m_29;
    }
  t = repeat_1_0(h_7, t);
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm o_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(p_29);
    }
  else
    {
      t = o_29;
      {
        ATerm q_29 = t;
        int r_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftCallArgs_0_0(t);
            ;
            LocalPopChoice(r_29);
          }
        else
          {
            t = q_29;
            {
              ATerm z_29 = t;
              int b_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(b_30);
                }
              else
                {
                  t = z_29;
                  {
                    ATerm m_30 = t;
                    int n_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(n_30);
                      }
                    else
                      {
                        t = m_30;
                        {
                          ATerm p_30 = t;
                          int t_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_30 = t;
                              int a_31 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm x_11 = NULL,z_11 = NULL,d_12 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      x_11 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = x_11;
                                  {
                                    ATerm i_7 (ATerm t)
                                    {
                                      if(match_cons(t, sym_RootApp_1))
                                        {
                                          ATerm b_31 = ATgetArgument(t, 0);
                                          if(match_cons(b_31, sym_Match_1))
                                            {
                                              if(((z_11 != NULL) && (z_11 != ATgetArgument(b_31, 0))))
                                                _fail(ATgetArgument(b_31, 0));
                                              else
                                                z_11 = ATgetArgument(b_31, 0);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                      t = not_null(z_11);
                                      return(t);
                                    }
                                    t = pat_td_1_0(i_7, t);
                                    d_12 = t;
                                    t = (ATerm) ATmakeAppl(sym_Match_1, d_12);
                                  }
                                  ;
                                  LocalPopChoice(a_31);
                                }
                              else
                                {
                                  t = z_30;
                                  {
                                    ATerm c_31 = t;
                                    int d_31 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL;
                                        if(match_cons(t, sym_Match_1))
                                          {
                                            s_35 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = s_35;
                                        if(match_cons(t, sym_RootApp_1))
                                          {
                                            t_35 = ATgetArgument(t, 0);
                                            t = t_35;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_App_2))
                                              {
                                                t_35 = ATgetArgument(t, 0);
                                                u_35 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_BA_2, t_35, u_35);
                                          }
                                        ;
                                        LocalPopChoice(d_31);
                                      }
                                    else
                                      {
                                        t = c_31;
                                        t = Mapp2_0_0(t);
                                      }
                                  }
                                }
                              ;
                              LocalPopChoice(t_30);
                            }
                          else
                            {
                              t = p_30;
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
  t = topdown_1_0(g_7, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL;
  g_12 = t;
  t = SSL_explode_term(g_12);
  if(match_cons(t, sym__2))
    {
      ATerm e_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_31 = ATgetArgument(t, 1);
        if(((ATgetType(f_31) == AT_LIST) && !(ATisEmpty(f_31))))
          {
            h_12 = ATgetFirst((ATermList) f_31);
            {
              ATerm g_31 = (ATerm) ATgetNext((ATermList) f_31);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_12;
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL;
  m_12 = t;
  t = SSL_explode_term(m_12);
  if(match_cons(t, sym__2))
    {
      ATerm h_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_31 = ATgetArgument(t, 1);
        if(((ATgetType(i_31) == AT_LIST) && !(ATisEmpty(i_31))))
          {
            ATerm j_31 = ATgetFirst((ATermList) i_31);
            n_12 = (ATerm) ATgetNext((ATermList) i_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), n_12);
  return(t);
}
ATerm m_7 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm i_115 (ATerm), ATerm t)
{
  ATerm a_36 = NULL;
  ATerm g_36 (ATerm t)
  {
    ATerm k_31 = t;
    int l_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_36 = NULL,d_36 = NULL,f_36 = NULL;
        b_36 = t;
        t = map_1_0(j_7, t);
        t = i_115(t);
        d_36 = t;
        t = b_36;
        t = map_1_0(l_7, t);
        t = g_36(t);
        f_36 = t;
        t = (ATerm) ATinsert(CheckATermList(f_36), d_36);
        ;
        LocalPopChoice(l_31);
      }
    else
      {
        t = k_31;
        t = map_1_0(m_7, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = g_36(t);
  a_36 = t;
  t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), a_36);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm h_36 = NULL;
  h_36 = t;
  {
    ATerm m_31 = t;
    int n_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL;
        t = h_36;
        t = new_0_0(t);
        j_36 = t;
        t = new_0_0(t);
        k_36 = t;
        t = new_0_0(t);
        l_36 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_36), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, h_36), (ATerm) ATmakeAppl(sym_Var_1, k_36))), (ATerm) ATmakeAppl(sym_Var_1, l_36)), (ATerm)ATmakeAppl(sym_VarDec_2, j_36, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_26), term_e_26)), k_36, (ATerm)ATmakeAppl(sym_Var_1, k_36), l_36, (ATerm) ATmakeAppl(sym_Var_1, l_36));
        ;
        LocalPopChoice(n_31);
      }
    else
      {
        t = m_31;
        {
          ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
          t = h_36;
          t = new_0_0(t);
          n_36 = t;
          t = new_0_0(t);
          o_36 = t;
          t = new_0_0(t);
          p_36 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_36), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, h_36), (ATerm) ATmakeAppl(sym_Var_1, o_36))), (ATerm) ATmakeAppl(sym_Var_1, p_36)), (ATerm)ATmakeAppl(sym_VarDec_2, n_36, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_26), term_e_26)), o_36, (ATerm)ATmakeAppl(sym_Var_1, o_36), p_36, (ATerm) ATmakeAppl(sym_Var_1, p_36));
        }
      }
  }
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL;
  if(match_cons(t, sym__2))
    {
      q_36 = ATgetArgument(t, 0);
      r_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, q_36, r_36, (ATerm) ATempty);
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm s_36 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm o_31 = ATgetArgument(t, 0);
      if(((ATgetType(o_31) != AT_INT) || (ATgetInt((ATermInt) o_31) != 0)))
        _fail(t);
      {
        ATerm p_31 = ATgetArgument(t, 1);
      }
      s_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_36;
  return(t);
}
ATerm copy_1_0 (ATerm l_122 (ATerm), ATerm t)
{
  ATerm p_7 (ATerm t)
  {
    ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL;
    if(match_cons(t, sym__3))
      {
        t_36 = ATgetArgument(t, 0);
        u_36 = ATgetArgument(t, 1);
        v_36 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, t_36, term_s_19);
    t = geq_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, t_36, term_s_19);
    {
      ATerm q_31 = t;
      int r_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(t_36, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(r_31);
        }
      else
        {
          t = q_31;
          t = SSL_subtr(t_36, (ATerm) ATmakeInt(1));
        }
      w_36 = t;
      t = u_36;
      t = l_122(t);
      x_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, w_36, u_36, (ATerm) ATinsert(CheckATermList(v_36), x_36));
    }
    return(t);
  }
  t = for_3_0(n_7, o_7, p_7, t);
  return(t);
}
ATerm MkThreadApplication_0_0 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL;
  if(match_cons(t, sym__2))
    {
      y_36 = ATgetArgument(t, 0);
      z_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = new_0_0(t);
  a_37 = t;
  t = new_0_0(t);
  b_37 = t;
  t = new_0_0(t);
  c_37 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_37), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_36)), (ATerm) ATmakeAppl(sym_Var_1, b_37))), (ATerm) ATmakeAppl(sym_Op_2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_36)), (ATerm) ATmakeAppl(sym_Var_1, c_37)))), (ATerm)ATmakeAppl(sym_VarDec_2, a_37, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_26), term_e_26)), b_37, (ATerm)ATmakeAppl(sym_Var_1, b_37), c_37, (ATerm) ATmakeAppl(sym_Var_1, c_37));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_37 = ATgetFirst((ATermList) t);
      h_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_37;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm s_31 = t;
      int t_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_37;
          ;
          LocalPopChoice(t_31);
        }
      else
        {
          t = s_31;
          t = h_37;
          t = last_0_0(t);
        }
    }
  else
    {
      t = h_37;
      t = last_0_0(t);
    }
  return(t);
}
ATerm z_39 (ATerm z_37, ATerm a_38, ATerm c_38, ATerm e_38, ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_38, term_s_19);
  {
    ATerm u_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(a_38, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(v_31);
      }
    else
      {
        t = u_31;
        t = SSL_addr(a_38, (ATerm) ATmakeInt(1));
      }
    i_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_38, term_t_14);
    t = copy_1_0(new_0_0, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_38 = ATgetFirst((ATermList) t);
        k_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = k_38;
    t = last_0_0(t);
    l_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_38), j_38), k_38);
    t = genzip_4_0(r_7, t_7, u_7, MkThreadApplication_0_0, t);
    t = tuple_unzip_1_0(_id, t);
    if(match_cons(t, sym__6))
      {
        m_38 = ATgetArgument(t, 0);
        n_38 = ATgetArgument(t, 1);
        o_38 = ATgetArgument(t, 2);
        p_38 = ATgetArgument(t, 3);
        q_38 = ATgetArgument(t, 4);
        r_38 = ATgetArgument(t, 5);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_38), o_38), k_38);
    t = concat_0_0(t);
    s_38 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, z_37, term_w_31), n_38, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(s_38), j_38), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_38)), (ATerm) ATmakeAppl(sym_Op_2, z_37, p_38))), (ATerm)ATmakeAppl(sym_Op_2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_38)), (ATerm) ATmakeAppl(sym_Op_2, z_37, r_38))), (ATerm) ATmakeAppl(sym_Seqs_1, m_38)))));
  }
  return(t);
}
ATerm a_40 (ATerm z_38, ATerm a_39, ATerm b_39, ATerm c_39, ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL;
  t = c_39;
  t = new_0_0(t);
  g_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_39, (ATerm) ATmakeAppl(sym_Var_1, g_39));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      h_39 = ATgetArgument(t, 0);
      i_39 = ATgetArgument(t, 1);
      j_39 = ATgetArgument(t, 2);
      k_39 = ATgetArgument(t, 3);
      l_39 = ATgetArgument(t, 4);
      m_39 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_39, l_39);
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_7 (ATerm t)
        {
          t = l_39;
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm z_31 = ATgetArgument(t, 0);
            ATerm a_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_39;
        t = at_end_1_0(v_7, t);
        ;
        LocalPopChoice(y_31);
      }
    else
      {
        t = x_31;
        {
          ATerm s_12 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, j_39, l_39));
          if(match_cons(t, sym__2))
            {
              ATerm b_32 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) b_32) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              s_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_12;
          t = concat_0_0(t);
        }
      }
    n_39 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, z_38, term_c_32), i_39, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(n_39), g_39), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_39)), (ATerm) ATmakeAppl(sym_Op_2, z_38, k_39))), (ATerm)ATmakeAppl(sym_Op_2, z_38, m_39), (ATerm) ATmakeAppl(sym_Seqs_1, h_39)))));
  }
  return(t);
}
ATerm r_7 (ATerm t)
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
ATerm t_7 (ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_32 = ATgetArgument(t, 0);
      if(((ATgetType(f_32) == AT_LIST) && !(ATisEmpty(f_32))))
        {
          t_38 = ATgetFirst((ATermList) f_32);
          v_38 = (ATerm) ATgetNext((ATermList) f_32);
        }
      else
        _fail(t);
      {
        ATerm g_32 = ATgetArgument(t, 1);
        if(((ATgetType(g_32) == AT_LIST) && !(ATisEmpty(g_32))))
          {
            u_38 = ATgetFirst((ATermList) g_32);
            w_38 = (ATerm) ATgetNext((ATermList) g_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_38, u_38), (ATerm) ATmakeAppl(sym__2, v_38, w_38));
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL;
  if(match_cons(t, sym__2))
    {
      x_38 = ATgetArgument(t, 0);
      y_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_38), x_38);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL;
  r_39 = t;
  if(match_cons(t, sym__3))
    {
      s_39 = ATgetArgument(t, 0);
      t_39 = ATgetArgument(t, 1);
      u_39 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_39;
  if(match_string(t, "T"))
    {
      t = u_39;
      if(match_cons(t, sym__2))
        {
          v_39 = ATgetArgument(t, 0);
          w_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_39;
      if(match_int(t, 0))
        {
          ATerm h_32 = t;
          int i_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_39(s_39, v_39, w_39, r_39, t);
              ;
              LocalPopChoice(i_32);
            }
          else
            {
              t = h_32;
              {
                ATerm y_39 = NULL;
                t = r_39;
                t = new_0_0(t);
                y_39 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, s_39, term_w_31), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_39), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_39)), (ATerm) ATmakeAppl(sym_Op_2, s_39, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_39)), (ATerm) ATmakeAppl(sym_Op_2, s_39, (ATerm) ATempty))), term_y_26))));
              }
            }
        }
      else
        {
          t = z_39(s_39, v_39, w_39, r_39, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = u_39;
      if(match_cons(t, sym__2))
        {
          v_39 = ATgetArgument(t, 0);
          w_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_40(s_39, v_39, w_39, r_39, t);
    }
  return(t);
}
ATerm CongruenceDef_0_0 (ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_32 = ATgetArgument(t, 0);
      if(match_cons(j_32, sym__2))
        {
          ATerm k_32 = ATgetArgument(j_32, 0);
          if(match_cons(k_32, sym_Mod_2))
            {
              b_40 = ATgetArgument(k_32, 0);
              c_40 = ATgetArgument(k_32, 1);
            }
          else
            _fail(t);
          d_40 = ATgetArgument(j_32, 1);
        }
      else
        _fail(t);
      e_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, b_40, c_40, d_40);
  t = DefineCongruence_0_0(t);
  t = desugar_0_0(t);
  f_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_40, e_40);
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_40 = NULL,o_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_40 = ATgetFirst((ATermList) t);
          o_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_40;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_40;
      ;
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      t = JoinDefs2_0_0(t);
    }
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm n_32 = t;
  int o_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0_0(t);
      ;
      LocalPopChoice(o_32);
    }
  else
    {
      t = n_32;
      {
        ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm p_32 = ATgetArgument(t, 0);
            if(match_cons(p_32, sym__2))
              {
                b_13 = ATgetArgument(p_32, 0);
                c_13 = ATgetArgument(p_32, 1);
              }
            else
              _fail(t);
            d_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_13, c_13);
        t = Definitions_0_0(t);
        e_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_13, d_13);
        t = _2_0(w_7, _id, t);
      }
    }
  return(t);
}
ATerm diff_1_0 (ATerm f_119 (ATerm), ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL;
  if(match_cons(t, sym__2))
    {
      q_40 = ATgetArgument(t, 0);
      r_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_40;
  {
    ATerm s_40 (ATerm t)
    {
      ATerm q_32 = t;
      int r_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(r_32);
        }
      else
        {
          t = q_32;
          {
            ATerm s_32 = t;
            int t_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_13 = NULL,g_13 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    f_13 = ATgetFirst((ATermList) t);
                    g_13 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = r_40;
                {
                  ATerm x_7 (ATerm t)
                  {
                    ATerm h_13 = NULL;
                    h_13 = t;
                    t = (ATerm) ATmakeAppl(sym__2, f_13, h_13);
                    t = f_119(t);
                    return(t);
                  }
                  t = fetch_1_0(x_7, t);
                  t = g_13;
                  t = s_40(t);
                }
                ;
                LocalPopChoice(t_32);
              }
            else
              {
                t = s_32;
                t = Cons_2_0(_id, s_40, t);
              }
          }
        }
      return(t);
    }
    t = s_40(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm s_115 (ATerm), ATerm t_115 (ATerm), ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm t)
{
  ATerm t_40 (ATerm t)
  {
    ATerm u_32 = t;
    int v_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_115(t);
        ;
        LocalPopChoice(v_32);
      }
    else
      {
        t = u_32;
        t = t_115(t);
        t = _2_0(v_115, t_40, t);
        t = u_115(t);
      }
    return(t);
  }
  t = t_40(t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_32 = ATgetArgument(t, 0);
      if(((ATgetType(w_32) != AT_LIST) || !(ATisEmpty(w_32))))
        _fail(t);
      {
        ATerm x_32 = ATgetArgument(t, 1);
        if(((ATgetType(x_32) != AT_LIST) || !(ATisEmpty(x_32))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_32 = ATgetArgument(t, 0);
      if(((ATgetType(y_32) == AT_LIST) && !(ATisEmpty(y_32))))
        {
          d_41 = ATgetFirst((ATermList) y_32);
          f_41 = (ATerm) ATgetNext((ATermList) y_32);
        }
      else
        _fail(t);
      {
        ATerm z_32 = ATgetArgument(t, 1);
        if(((ATgetType(z_32) == AT_LIST) && !(ATisEmpty(z_32))))
          {
            e_41 = ATgetFirst((ATermList) z_32);
            g_41 = (ATerm) ATgetNext((ATermList) z_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_41, e_41), (ATerm) ATmakeAppl(sym__2, f_41, g_41));
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL;
  if(match_cons(t, sym__2))
    {
      h_41 = ATgetArgument(t, 0);
      i_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_41), h_41);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_33 = ATgetFirst((ATermList) t);
      if(match_cons(a_33, sym__2))
        {
          v_40 = ATgetArgument(a_33, 0);
          w_40 = ATgetArgument(a_33, 1);
        }
      else
        _fail(t);
      x_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(w_40);
  if(match_cons(t, sym__2))
    {
      y_40 = ATgetArgument(t, 0);
      z_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(v_40);
  if(match_cons(t, sym__2))
    {
      if((y_40 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      a_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_41, z_40);
  t = genzip_4_0(y_7, z_7, a_8, _id, t);
  b_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_41, x_40);
  {
    ATerm b_33 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_33 = ATgetArgument(t, 0);
            ATerm e_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_41;
        {
          ATerm b_8 (ATerm t)
          {
            t = x_40;
            return(t);
          }
          t = at_end_1_0(b_8, t);
        }
        ;
        LocalPopChoice(c_33);
      }
    else
      {
        t = b_33;
        {
          ATerm r_13 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, b_41, x_40));
          if(match_cons(t, sym__2))
            {
              ATerm f_33 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) f_33) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              r_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_13;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm q_41 = NULL;
  q_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, q_41);
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = _2_0(_id, h_8, t);
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm g_33 = t;
  int h_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, i_8, t);
      ;
      LocalPopChoice(h_33);
    }
  else
    {
      t = g_33;
      {
        ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL;
        if(match_cons(t, sym__2))
          {
            z_41 = ATgetArgument(t, 0);
            a_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_42;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_42 = ATgetFirst((ATermList) t);
            c_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_41), b_42), c_42);
      }
    }
  return(t);
}
ATerm h_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm i_33 = t;
  int n_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_41 = ATgetFirst((ATermList) t);
          v_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_41;
      if(match_cons(t, sym__2))
        {
          t_41 = ATgetArgument(t, 0);
          u_41 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_41;
      if((t_41 != t))
        {
          _fail(t);
        }
      t = v_41;
      ;
      LocalPopChoice(n_33);
    }
  else
    {
      t = i_33;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm g_42 = NULL;
  if(match_cons(t, sym__2))
    {
      g_42 = ATgetArgument(t, 0);
      if((g_42 != ATgetArgument(t, 1)))
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
  ATerm o_33 = t;
  int w_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(e_8, f_8, g_8, t);
      ;
      LocalPopChoice(w_33);
    }
  else
    {
      t = o_33;
      t = diff_1_0(l_8, t);
    }
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm i_140 (ATerm), ATerm j_140 (ATerm), ATerm k_140 (ATerm), ATerm t)
{
  ATerm p_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm x_33 = ATgetArgument(t, 0);
      if(((ATgetType(x_33) == AT_LIST) && !(ATisEmpty(x_33))))
        {
          p_42 = ATgetFirst((ATermList) x_33);
          t_42 = (ATerm) ATgetNext((ATermList) x_33);
        }
      else
        _fail(t);
      u_42 = ATgetArgument(t, 1);
      v_42 = ATgetArgument(t, 2);
      w_42 = ATgetArgument(t, 3);
      x_42 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_42, v_42);
  t = i_140(t);
  if(match_cons(t, sym__2))
    {
      y_42 = ATgetArgument(t, 0);
      z_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_42;
  t = j_140(t);
  a_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_43, u_42);
  t = diff_0_0(t);
  b_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_43, t_42);
  {
    ATerm g_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_34 = ATgetArgument(t, 0);
            ATerm j_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_43;
        {
          ATerm n_8 (ATerm t)
          {
            t = t_42;
            return(t);
          }
          t = at_end_1_0(n_8, t);
        }
        ;
        LocalPopChoice(h_34);
      }
    else
      {
        t = g_34;
        {
          ATerm v_13 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, b_43, t_42));
          if(match_cons(t, sym__2))
            {
              ATerm k_34 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) k_34) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              v_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_13;
          t = concat_0_0(t);
        }
      }
    c_43 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_43, u_42);
    {
      ATerm p_34 = t;
      int q_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm r_34 = ATgetArgument(t, 0);
              ATerm s_34 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_43;
          {
            ATerm r_8 (ATerm t)
            {
              t = u_42;
              return(t);
            }
            t = at_end_1_0(r_8, t);
          }
          ;
          LocalPopChoice(q_34);
        }
      else
        {
          t = p_34;
          {
            ATerm z_13 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, b_43, u_42));
            if(match_cons(t, sym__2))
              {
                ATerm t_34 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) t_34) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                z_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = z_13;
            t = concat_0_0(t);
          }
        }
      d_43 = t;
      t = (ATerm) ATmakeAppl(sym__3, p_42, y_42, w_42);
      t = k_140(t);
      e_43 = t;
      t = (ATerm) ATmakeAppl(sym__5, c_43, d_43, z_42, e_43, x_42);
    }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm g_128 (ATerm), ATerm h_128 (ATerm), ATerm t)
{
  ATerm m_43 (ATerm t)
  {
    ATerm u_34 = t;
    int b_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_128(t);
        ;
        LocalPopChoice(b_35);
      }
    else
      {
        t = u_34;
        t = h_128(t);
        t = m_43(t);
      }
    return(t);
  }
  t = m_43(t);
  return(t);
}
ATerm for_3_0 (ATerm j_128 (ATerm), ATerm k_128 (ATerm), ATerm l_128 (ATerm), ATerm t)
{
  t = j_128(t);
  t = while_not_2_0(k_128, l_128, t);
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL;
  if(match_cons(t, sym__3))
    {
      s_43 = ATgetArgument(t, 0);
      t_43 = ATgetArgument(t, 1);
      u_43 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, s_43, s_43, t_43, u_43, (ATerm) ATempty);
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm v_43 = NULL,x_43 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm c_35 = ATgetArgument(t, 0);
      if(((ATgetType(c_35) != AT_LIST) || !(ATisEmpty(c_35))))
        _fail(t);
      {
        ATerm o_35 = ATgetArgument(t, 1);
      }
      {
        ATerm p_35 = ATgetArgument(t, 2);
      }
      v_43 = ATgetArgument(t, 3);
      x_43 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_43, x_43);
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm q_35 = t;
  int r_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, z_8, b_9, t);
      ;
      LocalPopChoice(r_35);
    }
  else
    {
      t = q_35;
      {
        ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL;
        if(match_cons(t, sym__5))
          {
            b_44 = ATgetArgument(t, 0);
            e_44 = ATgetArgument(t, 1);
            f_44 = ATgetArgument(t, 2);
            g_44 = ATgetArgument(t, 3);
            h_44 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = b_44;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_44 = ATgetFirst((ATermList) t);
            d_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, d_44, e_44, f_44, g_44, (ATerm) ATinsert(CheckATermList(h_44), c_44));
      }
    }
  return(t);
}
ATerm z_8 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(c_9, t);
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm v_35 = ATgetArgument(t, 0);
      y_43 = ATgetArgument(t, 1);
      z_43 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_43), y_43);
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm w_35 = t;
  int x_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      ;
      LocalPopChoice(x_35);
    }
  else
    {
      t = w_35;
    }
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm y_35 = t;
  int z_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MissingDefMod_0_0(t);
      ;
      LocalPopChoice(z_35);
    }
  else
    {
      t = y_35;
      t = MissingDef_0_0(t);
    }
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  t = for_3_0(s_8, t_8, x_8, t);
  {
    ATerm c_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_44 = NULL,s_44 = NULL;
        if(match_cons(t, sym__2))
          {
            r_44 = ATgetArgument(t, 0);
            s_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_44;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_44;
        ;
        LocalPopChoice(e_36);
      }
    else
      {
        t = c_36;
        {
          ATerm f_14 = NULL,g_14 = NULL;
          if(match_cons(t, sym__2))
            {
              ATerm i_36 = ATgetArgument(t, 0);
              ATerm m_36 = ATgetArgument(t, 1);
              if(((ATgetType(m_36) == AT_LIST) && !(ATisEmpty(m_36))))
                {
                  f_14 = ATgetFirst((ATermList) m_36);
                  g_14 = (ATerm) ATgetNext((ATermList) m_36);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(g_14), f_14);
          t = map_1_0(e_9, t);
          t = SSL_exit((ATerm) ATmakeInt(1));
        }
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm h_123 (ATerm), ATerm t)
{
  ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL;
  if(match_cons(t, sym__2))
    {
      u_44 = ATgetArgument(t, 0);
      v_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_123(t);
  w_44 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_44, u_44, v_44);
  t = table_push_0_0(t);
  {
    ATerm d_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(w_44, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(e_37);
      }
    else
      {
        t = d_37;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_44 = ATgetFirst((ATermList) t);
        y_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(w_44, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(y_44), (ATerm) ATinsert(CheckATermList(x_44), u_44)));
    t = (ATerm) ATmakeAppl(sym__2, u_44, v_44);
  }
  return(t);
}
ATerm union_1_0 (ATerm k_119 (ATerm), ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL;
  if(match_cons(t, sym__2))
    {
      c_45 = ATgetArgument(t, 0);
      d_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_45;
  {
    ATerm e_45 (ATerm t)
    {
      ATerm f_37 = t;
      int i_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = d_45;
          ;
          LocalPopChoice(i_37);
        }
      else
        {
          t = f_37;
          {
            ATerm j_37 = t;
            int k_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_14 = NULL,i_14 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    h_14 = ATgetFirst((ATermList) t);
                    i_14 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = d_45;
                {
                  ATerm f_9 (ATerm t)
                  {
                    ATerm j_14 = NULL;
                    j_14 = t;
                    t = (ATerm) ATmakeAppl(sym__2, h_14, j_14);
                    t = k_119(t);
                    return(t);
                  }
                  t = fetch_1_0(f_9, t);
                  t = i_14;
                  t = e_45(t);
                }
                ;
                LocalPopChoice(k_37);
              }
            else
              {
                t = j_37;
                t = Cons_2_0(_id, e_45, t);
              }
          }
        }
      return(t);
    }
    t = e_45(t);
  }
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm p_45 = NULL;
  p_45 = t;
  {
    ATerm l_37 = t;
    int m_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_14 = NULL,b_15 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue)), p_45);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_15 = ATgetFirst((ATermList) t);
            {
              ATerm n_37 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = b_15;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm o_37 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_37) != ATmakeSymbol("r_0", 0, ATtrue)))
              _fail(t);
            x_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_14;
        ;
        LocalPopChoice(m_37);
      }
    else
      {
        t = l_37;
        {
          ATerm f_15 = NULL,k_15 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue)), p_45);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_15 = ATgetFirst((ATermList) t);
              {
                ATerm p_37 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = k_15;
          if(match_cons(t, sym_Defined_2))
            {
              ATerm q_37 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) q_37) != ATmakeSymbol("l_0", 0, ATtrue)))
                _fail(t);
              f_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_15;
        }
      }
  }
  return(t);
}
ATerm m_46 (ATerm c_46, ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL,t_15 = NULL;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue)), c_46);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_15 = ATgetFirst((ATermList) t);
      {
        ATerm r_37 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_15;
  if(match_cons(t, sym_Defined_3))
    {
      ATerm s_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_37) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
      e_46 = ATgetArgument(t, 1);
      f_46 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_46), e_46);
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm i_46 = NULL,k_46 = NULL;
  i_46 = t;
  if(match_cons(t, sym__2))
    {
      ATerm t_37 = ATgetArgument(t, 0);
      k_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_46;
  {
    ATerm u_37 = t;
    int v_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_37 = ATgetArgument(t, 0);
            ATerm x_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(v_37);
        {
          ATerm y_37 = t;
          int b_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_15 = NULL,b_16 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue)), i_46);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_16 = ATgetFirst((ATermList) t);
                  {
                    ATerm d_38 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = b_16;
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm f_38 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) f_38) != ATmakeSymbol("o_0", 0, ATtrue)))
                    _fail(t);
                  x_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_15;
              ;
              LocalPopChoice(b_38);
            }
          else
            {
              t = y_37;
              t = m_46(i_46, t);
            }
        }
      }
    else
      {
        t = u_37;
        t = m_46(i_46, t);
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm y_121 (ATerm), ATerm z_121 (ATerm), ATerm a_122 (ATerm), ATerm t)
{
  ATerm g_38 = t;
  int h_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_121(t);
      ;
      LocalPopChoice(h_38);
    }
  else
    {
      t = g_38;
      {
        ATerm q_46 = NULL,r_46 = NULL,u_46 = NULL,v_46 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_46 = ATgetFirst((ATermList) t);
            r_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_46;
        t = a_122(t);
        u_46 = t;
        t = r_46;
        t = foldr_3_0(y_121, z_121, a_122, t);
        v_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_46, v_46);
        t = z_121(t);
      }
    }
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = term_j_19;
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm g_47 = NULL,h_47 = NULL;
  if(match_cons(t, sym__2))
    {
      g_47 = ATgetArgument(t, 0);
      h_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_39 = t;
    int e_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(g_47, h_47);
        ;
        LocalPopChoice(e_39);
      }
    else
      {
        t = d_39;
        t = SSL_addr(g_47, h_47);
      }
  }
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = term_s_19;
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = term_j_19;
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL;
  if(match_cons(t, sym__2))
    {
      i_47 = ATgetArgument(t, 0);
      j_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_39 = t;
    int o_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(i_47, j_47);
        ;
        LocalPopChoice(o_39);
      }
    else
      {
        t = f_39;
        t = SSL_addr(i_47, j_47);
      }
  }
  return(t);
}
ATerm l_9 (ATerm t)
{
  t = term_s_19;
  return(t);
}
ATerm r_9 (ATerm t)
{
  ATerm n_47 = NULL;
  if(match_cons(t, sym__2))
    {
      n_47 = ATgetArgument(t, 0);
      if((n_47 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm s_9 (ATerm t)
{
  t = term_p_39;
  return(t);
}
ATerm w_9 (ATerm t)
{
  t = term_q_39;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL;
  w_46 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      x_46 = ATgetArgument(t, 0);
      y_46 = ATgetArgument(t, 1);
      z_46 = ATgetArgument(t, 2);
      {
        ATerm x_39 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  a_47 = t;
  t = y_46;
  t = foldr_3_0(g_9, h_9, i_9, t);
  b_47 = t;
  t = z_46;
  t = foldr_3_0(j_9, k_9, l_9, t);
  c_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_46, (ATerm) ATmakeAppl(sym__2, b_47, c_47));
  {
    ATerm g_40 = t;
    int h_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        ;
        LocalPopChoice(h_40);
      }
    else
      {
        t = g_40;
        t = (ATerm) ATempty;
      }
    d_47 = t;
    t = x_46;
    {
      ATerm i_40 = t;
      int j_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arities_0_0(t);
          ;
          LocalPopChoice(j_40);
        }
      else
        {
          t = i_40;
          t = (ATerm) ATempty;
        }
      e_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, b_47, c_47)), e_47);
      t = union_1_0(r_9, t);
      f_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_46, (ATerm) ATmakeAppl(sym__2, b_47, c_47)), (ATerm) ATmakeAppl(sym_Defined_2, term_k_40, (ATerm) ATinsert(CheckATermList(d_47), w_46)));
      t = assert_1_0(s_9, t);
      t = (ATerm) ATmakeAppl(sym__2, x_46, (ATerm) ATmakeAppl(sym_Defined_2, term_l_40, f_47));
      t = assert_1_0(w_9, t);
      t = a_47;
    }
  }
  return(t);
}
ATerm needed_defs_0_0 (ATerm t)
{
  ATerm o_47 = NULL;
  t = map_1_0(RegisterSDefT_0_0, t);
  o_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_u_40), o_47, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm z_95 (ATerm), ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL;
  s_47 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      q_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_47);
  p_47 = t;
  t = q_47;
  t = z_95(t);
  r_47 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, r_47), p_47);
  return(t);
}
ATerm Cons_2_0 (ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm t)
{
  ATerm v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL;
  a_48 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_47 = ATgetFirst((ATermList) t);
      x_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_48);
  v_47 = t;
  t = w_47;
  t = v_95(t);
  y_47 = t;
  t = x_47;
  t = w_95(t);
  z_47 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(z_47), y_47), v_47);
  return(t);
}
ATerm Specification_1_0 (ATerm e_96 (ATerm), ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL,i_48 = NULL,k_48 = NULL;
  k_48 = t;
  if(match_cons(t, sym_Specification_1))
    {
      g_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_48);
  f_48 = t;
  t = g_48;
  t = e_96(t);
  i_48 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, i_48), f_48);
  return(t);
}
ATerm _2_0 (ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL,w_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL;
  b_49 = t;
  if(match_cons(t, sym__2))
    {
      s_48 = ATgetArgument(t, 0);
      w_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_49);
  r_48 = t;
  t = s_48;
  t = g_91(t);
  z_48 = t;
  t = w_48;
  t = h_91(t);
  a_49 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, z_48, a_49), r_48);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm z_132 (ATerm), ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL;
  if(match_cons(t, sym__2))
    {
      e_49 = ATgetArgument(t, 0);
      f_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_49, term_c_41);
  t = open_stream_0_0(t);
  g_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_49, f_49);
  t = z_132(t);
  t = fclose_0_0(t);
  t = f_49;
  return(t);
}
ATerm j_10 (ATerm t)
{
  t = fetch_1_0(l_10, t);
  return(t);
}
ATerm k_10 (ATerm t)
{
  t = WriteToFile_1_0(m_10, t);
  return(t);
}
ATerm l_10 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_41 = ATgetArgument(t, 0);
      if(match_cons(j_41, sym_Stream_1))
        {
          j_49 = ATgetArgument(j_41, 0);
        }
      else
        _fail(t);
      k_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(j_49, k_49);
  l_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_49);
  return(t);
}
ATerm o_10 (ATerm t)
{
  t = WriteToFile_1_0(p_10, t);
  return(t);
}
ATerm p_10 (ATerm t)
{
  ATerm m_49 = NULL,n_49 = NULL,o_49 = NULL,q_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_41 = ATgetArgument(t, 0);
      if(match_cons(k_41, sym_Stream_1))
        {
          m_49 = ATgetArgument(k_41, 0);
        }
      else
        _fail(t);
      n_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(m_49, n_49);
  o_49 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), o_49);
  q_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_49);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL;
  h_49 = t;
  {
    ATerm x_9 (ATerm t)
    {
      ATerm l_41 = t;
      int m_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_9 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((i_49 != NULL) && (i_49 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_49 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(y_9, t);
          ;
          LocalPopChoice(m_41);
        }
      else
        {
          t = l_41;
          t = term_n_41;
          if(((i_49 != NULL) && (i_49 != t)))
            _fail(t);
          else
            i_49 = t;
        }
      return(t);
    }
    t = _2_0(x_9, _id, t);
    t = h_49;
    {
      ATerm a_10 (ATerm t)
      {
        ATerm e_16 = NULL;
        e_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_49), e_16);
        return(t);
      }
      t = _2_0(_id, a_10, t);
      {
        ATerm o_41 = t;
        int p_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(j_10, k_10, t);
            ;
            LocalPopChoice(p_41);
          }
        else
          {
            t = o_41;
            t = _2_0(_id, o_10, t);
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
ATerm apply_strategy_1_0 (ATerm b_136 (ATerm), ATerm t)
{
  ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL,v_49 = NULL,w_49 = NULL;
  r_49 = t;
  t = dtime_0_0(t);
  t = r_49;
  t = b_136(t);
  s_49 = t;
  t = dtime_0_0(t);
  t_49 = t;
  t = s_49;
  if(match_cons(t, sym__2))
    {
      v_49 = ATgetArgument(t, 0);
      w_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_49), (ATerm) ATmakeAppl(sym_Runtime_1, t_49)), w_49);
  return(t);
}
ATerm u_50 (ATerm i_50, ATerm t)
{
  t = SSL_fclose(i_50);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL;
  m_50 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_50 = ATgetArgument(t, 0);
      {
        ATerm r_41 = t;
        int w_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_50);
            ;
            LocalPopChoice(w_41);
          }
        else
          {
            t = r_41;
            t = u_50(m_50, t);
          }
      }
    }
  else
    {
      t = u_50(m_50, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_50 = NULL;
  t = SSL_stdin_stream();
  v_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_50);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm w_50 = NULL;
  t = SSL_stdout_stream();
  w_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_50);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_50 = NULL;
  t = SSL_stderr_stream();
  x_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_50);
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm f_51 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      f_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_51;
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm j_51 = NULL;
  j_51 = t;
  t = SSL_is_string(j_51);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_41 = ATgetArgument(t, 0);
      ATerm y_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_42 = t;
    int e_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_16 = NULL,t_16 = NULL;
        s_16 = t;
        t = SSL_explode_term(s_16);
        if(match_cons(t, sym__2))
          {
            ATerm f_42 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_42) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm h_42 = ATgetArgument(t, 1);
              if(((ATgetType(h_42) == AT_LIST) && !(ATisEmpty(h_42))))
                {
                  t_16 = ATgetFirst((ATermList) h_42);
                  {
                    ATerm i_42 = (ATerm) ATgetNext((ATermList) h_42);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = t_16;
        if(match_cons(t, sym_stderr_0))
          {
            t = t_16;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = t_16;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = t_16;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(e_42);
      }
    else
      {
        t = d_42;
        {
          ATerm j_42 = t;
          int k_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL;
              t = _2_0(q_10, _id, t);
              if(match_cons(t, sym__2))
                {
                  c_51 = ATgetArgument(t, 0);
                  d_51 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(c_51, d_51);
              e_51 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, e_51);
              ;
              LocalPopChoice(k_42);
            }
          else
            {
              t = j_42;
              {
                ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL;
                t = _2_0(s_10, _id, t);
                if(match_cons(t, sym__2))
                  {
                    g_51 = ATgetArgument(t, 0);
                    h_51 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(g_51, h_51);
                i_51 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, i_51);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL;
  ATerm l_42 = t;
  int m_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_51 = NULL;
      n_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_51, term_n_42);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_42);
    }
  else
    {
      t = l_42;
      {
        ATerm u_16 = NULL;
        u_16 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_16), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = u_16;
        _fail(t);
      }
    }
  k_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(m_51);
  l_51 = t;
  t = k_51;
  t = fclose_0_0(t);
  t = l_51;
  return(t);
}
ATerm fetch_1_0 (ATerm s_117 (ATerm), ATerm t)
{
  ATerm s_51 (ATerm t)
  {
    ATerm o_42 = t;
    int q_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_117, _id, t);
        ;
        LocalPopChoice(q_42);
      }
    else
      {
        t = o_42;
        t = Cons_2_0(_id, s_51, t);
      }
    return(t);
  }
  t = s_51(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_42 = t;
  int s_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(s_42);
    }
  else
    {
      t = r_42;
      {
        ATerm v_51 = NULL,w_51 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_51 = ATgetFirst((ATermList) t);
            w_51 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_51;
        {
          ATerm t_10 (ATerm t)
          {
            t = w_51;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(t_10, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm y_117 (ATerm), ATerm t)
{
  ATerm c_52 (ATerm t)
  {
    ATerm f_43 = t;
    int g_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, c_52, t);
        ;
        LocalPopChoice(g_43);
      }
    else
      {
        t = f_43;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_117(t);
      }
    return(t);
  }
  t = c_52(t);
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm f_52 = NULL;
  f_52 = t;
  t = SSL_explode_string(f_52);
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm g_52 = NULL;
  g_52 = t;
  t = SSL_explode_string(g_52);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm e_52 = NULL;
  t = _2_0(u_10, v_10, t);
  {
    ATerm h_43 = t;
    int i_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_52 = NULL,j_52 = NULL;
        if(match_cons(t, sym__2))
          {
            i_52 = ATgetArgument(t, 0);
            j_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_52;
        {
          ATerm w_10 (ATerm t)
          {
            t = j_52;
            return(t);
          }
          t = at_end_1_0(w_10, t);
        }
        ;
        LocalPopChoice(i_43);
      }
    else
      {
        t = h_43;
        {
          ATerm z_16 = NULL,a_17 = NULL;
          z_16 = t;
          t = SSL_explode_term(z_16);
          if(match_cons(t, sym__2))
            {
              ATerm j_43 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) j_43) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              a_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_17;
          t = concat_0_0(t);
        }
      }
    e_52 = t;
    t = SSL_implode_string(e_52);
  }
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm k_43 = t;
  int l_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(l_43);
    }
  else
    {
      t = k_43;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm n_43 = t;
  int o_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_52 = NULL;
      t_52 = t;
      t = SSL_is_string(t_52);
      ;
      LocalPopChoice(o_43);
    }
  else
    {
      t = n_43;
      {
        ATerm p_43 = t;
        int q_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(x_10, t);
            ;
            LocalPopChoice(q_43);
          }
        else
          {
            t = p_43;
            {
              ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL;
              x_52 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_52 = ATgetArgument(t, 0);
                  t = y_52;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_52 = ATgetArgument(t, 0);
                      t = y_52;
                      {
                        ATerm r_43 = t;
                        int w_43 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_52);
                            {
                              ATerm a_44 = t;
                              int i_44 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm w_17 = NULL;
                                  t = eval_config_0_0(t);
                                  w_17 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_52, w_17);
                                  t = w_17;
                                  ;
                                  LocalPopChoice(i_44);
                                }
                              else
                                {
                                  t = a_44;
                                }
                            }
                            ;
                            LocalPopChoice(w_43);
                          }
                        else
                          {
                            t = r_43;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_52), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = y_52;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_53 = NULL,e_53 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_52 = ATgetArgument(t, 0);
                          z_52 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_52;
                      t = eval_config_0_0(t);
                      d_53 = t;
                      t = z_52;
                      t = eval_config_0_0(t);
                      e_53 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_53, e_53);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm k_134 (ATerm), ATerm t)
{
  ATerm j_44 = t;
  int k_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_53 = NULL,m_53 = NULL;
      k_53 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm l_44 = t;
        int m_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_18 = NULL;
            t = eval_config_0_0(t);
            j_18 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), j_18);
            t = j_18;
            ;
            LocalPopChoice(m_44);
          }
        else
          {
            t = l_44;
          }
        m_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_53, term_n_44);
        t = geq_0_0(t);
        t = k_53;
        t = k_134(t);
      }
      ;
      LocalPopChoice(k_44);
    }
  else
    {
      t = j_44;
    }
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm o_53 = NULL;
  o_53 = t;
  if(match_string(t, "-k"))
    {
      t = o_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_53;
    }
  return(t);
}
ATerm z_10 (ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL;
  u_53 = t;
  t = SSL_string_to_int(u_53);
  v_53 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), v_53);
  t = u_53;
  return(t);
}
ATerm a_11 (ATerm t)
{
  t = term_o_44;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_10, z_10, a_11, t);
  return(t);
}
ATerm q_11 (ATerm t)
{
  ATerm b_54 = NULL;
  b_54 = t;
  if(match_string(t, "-S"))
    {
      t = b_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_54;
    }
  return(t);
}
ATerm r_11 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_p_44;
  return(t);
}
ATerm s_11 (ATerm t)
{
  t = term_q_44;
  return(t);
}
ATerm t_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_11 (ATerm t)
{
  ATerm c_54 = NULL,d_54 = NULL;
  c_54 = t;
  t = SSL_string_to_int(c_54);
  d_54 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), d_54);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_54);
  return(t);
}
ATerm v_11 (ATerm t)
{
  t = term_t_44;
  return(t);
}
ATerm w_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_11 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_z_44;
  return(t);
}
ATerm a_12 (ATerm t)
{
  t = term_a_45;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_45 = t;
  int f_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_11, r_11, s_11, t);
      ;
      LocalPopChoice(f_45);
    }
  else
    {
      t = b_45;
      {
        ATerm g_45 = t;
        int h_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_11, u_11, v_11, t);
            ;
            LocalPopChoice(h_45);
          }
        else
          {
            t = g_45;
            t = Option_3_0(w_11, y_11, a_12, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_54 = NULL;
      t = term_t_14;
      t = d_0(t);
      i_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_45, term_j_45, i_54);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm l_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_54 = ATgetFirst((ATermList) t);
          h_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_54;
      t = a_0(t);
      t = term_t_14;
      t = b_0(t);
      l_54 = t;
      t = (ATerm) ATinsert(CheckATermList(h_54), l_54);
    }
  return(t);
}
ATerm c_12 (ATerm t)
{
  ATerm n_54 = NULL;
  n_54 = t;
  if(match_string(t, "-o"))
    {
      t = n_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_54;
    }
  return(t);
}
ATerm e_12 (ATerm t)
{
  ATerm o_54 = NULL;
  o_54 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), o_54);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_54);
  return(t);
}
ATerm f_12 (ATerm t)
{
  t = term_k_45;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_12, e_12, f_12, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL;
  if(match_cons(t, sym__3))
    {
      r_54 = ATgetArgument(t, 0);
      s_54 = ATgetArgument(t, 1);
      t_54 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_54, s_54);
  {
    ATerm l_45 = t;
    int m_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_45 = ATgetArgument(t, 0);
            ATerm o_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(r_54, s_54);
        ;
        LocalPopChoice(m_45);
      }
    else
      {
        t = l_45;
        t = (ATerm) ATempty;
      }
    u_54 = t;
    t = SSL_table_put(r_54, s_54, (ATerm) ATinsert(CheckATermList(u_54), t_54));
    t = (ATerm) ATmakeAppl(sym__3, r_54, s_54, t_54);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_55 = NULL;
      t = term_t_14;
      t = m_0(t);
      g_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_45, term_j_45, g_55);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm k_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_55 = ATgetFirst((ATermList) t);
          d_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_55;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_55 = ATgetFirst((ATermList) t);
          f_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_55;
      t = i_0(t);
      t = e_55;
      t = k_0(t);
      k_55 = t;
      t = (ATerm) ATinsert(CheckATermList(f_55), k_55);
    }
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm m_55 = NULL;
  m_55 = t;
  if(match_string(t, "-i"))
    {
      t = m_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_55;
    }
  return(t);
}
ATerm k_12 (ATerm t)
{
  ATerm n_55 = NULL;
  n_55 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), n_55);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_55);
  return(t);
}
ATerm l_12 (ATerm t)
{
  t = term_q_45;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_12, k_12, l_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_14;
  t = whoami_0_0(t);
  o_55 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), o_55));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm r_45 = t;
    int s_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_18 = NULL;
        t = eval_config_0_0(t);
        q_18 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_18);
        t = q_18;
        ;
        LocalPopChoice(s_45);
      }
    else
      {
        t = r_45;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm w_121 (ATerm), ATerm x_121 (ATerm), ATerm t)
{
  ATerm t_45 = t;
  int u_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_121(t);
      ;
      LocalPopChoice(u_45);
    }
  else
    {
      t = t_45;
      {
        ATerm r_55 = NULL,s_55 = NULL,v_55 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_55 = ATgetFirst((ATermList) t);
            s_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_55;
        t = foldr_2_0(w_121, x_121, t);
        v_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_55, v_55);
        t = x_121(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm o_12 (ATerm t)
{
  t = term_j_19;
  return(t);
}
ATerm p_12 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL;
  if(match_cons(t, sym__2))
    {
      c_19 = ATgetArgument(t, 0);
      d_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_45 = t;
    int w_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(c_19, d_19);
        ;
        LocalPopChoice(w_45);
      }
    else
      {
        t = v_45;
        t = SSL_addr(c_19, d_19);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_55 = NULL,v_18 = NULL,w_18 = NULL;
  t = times_0_0(t);
  v_18 = t;
  t = SSL_explode_term(v_18);
  if(match_cons(t, sym__2))
    {
      ATerm x_45 = ATgetArgument(t, 0);
      w_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_18;
  t = foldr_2_0(o_12, p_12, t);
  y_55 = t;
  t = SSL_TicksToSeconds(y_55);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL;
  j_56 = t;
  if(match_cons(t, sym__2))
    {
      k_56 = ATgetArgument(t, 0);
      l_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_45 = t;
    int z_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_56;
        if((k_56 != t))
          {
            _fail(t);
          }
        t = j_56;
        ;
        LocalPopChoice(z_45);
      }
    else
      {
        t = y_45;
        t = j_56;
        {
          ATerm a_46 = t;
          int b_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_56, l_56);
              ;
              LocalPopChoice(b_46);
            }
          else
            {
              t = a_46;
              t = SSL_gtr(k_56, l_56);
            }
          t = (ATerm) ATmakeAppl(sym__2, k_56, l_56);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_134 (ATerm), ATerm t)
{
  ATerm d_46 = t;
  int g_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_56 = NULL,q_56 = NULL;
      o_56 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm h_46 = t;
        int j_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_20 = NULL;
            t = eval_config_0_0(t);
            d_20 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), d_20);
            t = d_20;
            ;
            LocalPopChoice(j_46);
          }
        else
          {
            t = h_46;
          }
        q_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_56, term_s_19);
        t = geq_0_0(t);
        t = o_56;
        t = j_134(t);
      }
      ;
      LocalPopChoice(g_46);
    }
  else
    {
      t = d_46;
    }
  return(t);
}
ATerm q_12 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL;
  t = run_time_0_0(t);
  s_56 = t;
  t = term_t_14;
  t = whoami_0_0(t);
  t_56 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), s_56), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), t_56));
  t = (ATerm) ATmakeAppl(sym__2, term_l_46, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_46), s_56), term_n_46), t_56));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm r_12 (ATerm t)
{
  ATerm p_46 = t;
  int s_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(s_46);
    }
  else
    {
      t = p_46;
      {
        ATerm t_46 = t;
        int k_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(k_47);
          }
        else
          {
            t = t_46;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm z_136 (ATerm), ATerm t)
{
  ATerm l_47 = t;
  int m_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm t_47 = t;
        int u_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_20 = NULL;
            t = eval_config_0_0(t);
            z_20 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), z_20);
            t = z_20;
            ;
            LocalPopChoice(u_47);
          }
        else
          {
            t = t_47;
          }
      }
      ;
      LocalPopChoice(m_47);
    }
  else
    {
      t = l_47;
      t = fetch_1_0(r_12, t);
    }
  t = z_136(t);
  return(t);
}
ATerm map_1_0 (ATerm h_117 (ATerm), ATerm t)
{
  ATerm u_56 (ATerm t)
  {
    ATerm b_48 = t;
    int c_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(c_48);
      }
    else
      {
        t = b_48;
        t = Cons_2_0(h_117, u_56, t);
      }
    return(t);
  }
  t = u_56(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_56 = ATgetFirst((ATermList) t);
      x_56 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_57 = NULL,c_57 = NULL;
        t = x_56;
        t = g_0(t);
        b_57 = t;
        t = w_56;
        t = f_0(t);
        c_57 = t;
        t = x_56;
        {
          ATerm t_12 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(b_57), c_57);
            return(t);
          }
          t = reverse_acc_2_0(f_0, t_12, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_14;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm n_108 (ATerm), ATerm t)
{
  ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL;
  g_57 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_57);
  d_57 = t;
  t = e_57;
  t = n_108(t);
  f_57 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, f_57), d_57);
  return(t);
}
ATerm u_12 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm v_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_12 (ATerm t)
{
  ATerm j_57 = NULL;
  j_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_57), term_d_48);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_48 = t;
  int h_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm j_48 = t;
        int l_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_21 = NULL;
            t = eval_config_0_0(t);
            f_21 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_21);
            t = f_21;
            ;
            LocalPopChoice(l_48);
          }
        else
          {
            t = j_48;
          }
      }
      ;
      LocalPopChoice(h_48);
    }
  else
    {
      t = e_48;
      t = fetch_1_0(u_12, t);
    }
  t = term_m_48;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, v_12, t);
  t = map_1_0(w_12, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm o_108 (ATerm), ATerm t)
{
  ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL,o_57 = NULL;
  o_57 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      l_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_57);
  k_57 = t;
  t = l_57;
  t = o_108(t);
  m_57 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, m_57), k_57);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_57 = NULL,t_57 = NULL;
  s_57 = t;
  {
    ATerm n_48 = t;
    int o_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_57;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_48 = ATgetFirst((ATermList) t);
                ATerm q_48 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_57;
          }
        ;
        LocalPopChoice(o_48);
      }
    else
      {
        t = n_48;
        t = (ATerm) ATinsert(ATempty, s_57);
      }
    t_57 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), t_57);
    t = s_57;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm t_48 = t;
    int u_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_22 = NULL;
        t = eval_config_0_0(t);
        i_22 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_22);
        t = i_22;
        ;
        LocalPopChoice(u_48);
      }
    else
      {
        t = t_48;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm x_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_12 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_y_48;
  return(t);
}
ATerm z_12 (ATerm t)
{
  t = term_c_49;
  return(t);
}
ATerm a_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_13 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_d_49;
  return(t);
}
ATerm j_13 (ATerm t)
{
  t = term_p_49;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_49 = t;
  int x_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_12, y_12, z_12, t);
      ;
      LocalPopChoice(x_49);
    }
  else
    {
      t = u_49;
      t = Option_3_0(a_13, i_13, j_13, t);
    }
  return(t);
}
ATerm m_13 (ATerm t)
{
  ATerm z_57 = NULL;
  z_57 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_57);
  t = (ATerm) ATmakeAppl(sym_Program_1, z_57);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_139 (ATerm), ATerm t)
{
  ATerm y_57 = NULL;
  y_57 = t;
  {
    ATerm y_49 = t;
    int z_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_50;
        t = c_139(t);
        ;
        LocalPopChoice(z_49);
      }
    else
      {
        t = y_49;
      }
    t = y_57;
    {
      ATerm n_13 (ATerm t)
      {
        ATerm b_50 = t;
        int c_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_50 = t;
            int e_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(e_50);
              }
            else
              {
                t = d_50;
                t = c_139(t);
                t = Cons_2_0(_id, n_13, t);
              }
            ;
            LocalPopChoice(c_50);
          }
        else
          {
            t = b_50;
            {
              ATerm b_58 = NULL,c_58 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_58 = ATgetFirst((ATermList) t);
                  c_58 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(c_58), (ATerm) ATmakeAppl(sym_Undefined_1, b_58));
            }
          }
        return(t);
      }
      t = Cons_2_0(m_13, n_13, t);
    }
  }
  return(t);
}
ATerm q_13 (ATerm t)
{
  ATerm m_58 = NULL;
  m_58 = t;
  if(match_string(t, "--help"))
    {
      t = m_58;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_58;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_58;
        }
    }
  return(t);
}
ATerm s_13 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_50;
  return(t);
}
ATerm t_13 (ATerm t)
{
  t = term_g_50;
  return(t);
}
ATerm u_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_139 (ATerm), ATerm t)
{
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL;
  j_58 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = j_58;
  {
    ATerm p_13 (ATerm t)
    {
      ATerm h_50 = t;
      int j_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_139(t);
          ;
          LocalPopChoice(j_50);
        }
      else
        {
          t = h_50;
          {
            ATerm k_50 = t;
            int n_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_13, s_13, t_13, t);
                ;
                LocalPopChoice(n_50);
              }
            else
              {
                t = k_50;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_13, t);
    {
      ATerm o_50 = t;
      int p_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_58 = NULL;
          r_58 = t;
          {
            ATerm q_50 = t;
            int r_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = r_58;
                {
                  ATerm s_50 = t;
                  int t_50 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm y_50 = t;
                        int z_50 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm i_25 = NULL;
                            t = eval_config_0_0(t);
                            i_25 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), i_25);
                            t = i_25;
                            ;
                            LocalPopChoice(z_50);
                          }
                        else
                          {
                            t = y_50;
                          }
                      }
                      ;
                      LocalPopChoice(t_50);
                    }
                  else
                    {
                      t = s_50;
                      t = fetch_1_0(u_13, t);
                    }
                  t = r_58;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(r_50);
              }
            else
              {
                t = q_50;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm a_51 = t;
                  int b_51 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_26 = NULL;
                      t = eval_config_0_0(t);
                      b_26 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), b_26);
                      t = b_26;
                      ;
                      LocalPopChoice(b_51);
                    }
                  else
                    {
                      t = a_51;
                    }
                  t = r_58;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(p_50);
        }
      else
        {
          t = o_50;
          {
            ATerm o_51 = t;
            int t_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_13 (ATerm t)
                {
                  ATerm x_13 (ATerm t)
                  {
                    if(((k_58 != NULL) && (k_58 != t)))
                      _fail(t);
                    else
                      k_58 = t;
                    return(t);
                  }
                  t = Undefined_1_0(x_13, t);
                  return(t);
                }
                t = fetch_1_0(w_13, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(k_58)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_l_46, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_58)), term_u_51));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(t_51);
              }
            else
              {
                t = o_51;
              }
          }
        }
      l_58 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = l_58;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_137 (ATerm), ATerm c_137 (ATerm), ATerm d_137 (ATerm), ATerm e_137 (ATerm), ATerm t)
{
  ATerm u_58 = NULL;
  t = parse_options_1_0(b_137, t);
  u_58 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), u_58);
  t = u_58;
  t = d_137(t);
  {
    ATerm x_51 = t;
    int y_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_137, t);
        ;
        LocalPopChoice(y_51);
      }
    else
      {
        t = x_51;
        {
          ATerm z_51 = t;
          int a_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_137(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(a_52);
            }
          else
            {
              t = z_51;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm a_14 (ATerm t)
{
  t = if_verbose2_1_0(l_14, t);
  return(t);
}
ATerm c_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_14 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_b_52;
  return(t);
}
ATerm k_14 (ATerm t)
{
  t = term_d_52;
  return(t);
}
ATerm l_14 (ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL;
  v_58 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm h_52 = t;
    int k_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_26 = NULL;
        t = eval_config_0_0(t);
        g_26 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_26);
        t = g_26;
        ;
        LocalPopChoice(k_52);
      }
    else
      {
        t = h_52;
      }
    w_58 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, w_58));
    t = v_58;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm k_136 (ATerm), ATerm l_136 (ATerm), ATerm m_136 (ATerm), ATerm t)
{
  ATerm y_13 (ATerm t)
  {
    ATerm l_52 = t;
    int m_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_136(t);
        ;
        LocalPopChoice(m_52);
      }
    else
      {
        t = l_52;
        {
          ATerm n_52 = t;
          int o_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(o_52);
            }
          else
            {
              t = n_52;
              {
                ATerm p_52 = t;
                int q_52 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(q_52);
                  }
                else
                  {
                    t = p_52;
                    {
                      ATerm r_52 = t;
                      int s_52 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(c_14, e_14, k_14, t);
                          ;
                          LocalPopChoice(s_52);
                        }
                      else
                        {
                          t = r_52;
                          {
                            ATerm u_52 = t;
                            int v_52 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(v_52);
                              }
                            else
                              {
                                t = u_52;
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
  ATerm b_14 (ATerm t)
  {
    ATerm x_58 = NULL,y_58 = NULL,v_26 = NULL;
    x_58 = t;
    {
      ATerm w_52 = t;
      int a_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_14 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((y_58 != NULL) && (y_58 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_58 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(m_14, t);
          ;
          LocalPopChoice(a_53);
        }
      else
        {
          t = w_52;
          t = term_b_53;
          y_58 = t;
        }
      t = not_null(y_58);
      t = ReadFromFile_0_0(t);
      v_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_58, v_26);
      t = apply_strategy_1_0(k_136, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(y_13, m_136, a_14, b_14, t);
  return(t);
}
ATerm n_14 (ATerm t)
{
  t = _2_0(_id, o_14, t);
  return(t);
}
ATerm o_14 (ATerm t)
{
  t = Specification_1_0(p_14, t);
  t = needed_constructors_0_0(t);
  return(t);
}
ATerm p_14 (ATerm t)
{
  t = Cons_2_0(_id, q_14, t);
  return(t);
}
ATerm q_14 (ATerm t)
{
  t = Cons_2_0(r_14, s_14, t);
  return(t);
}
ATerm r_14 (ATerm t)
{
  t = Strategies_1_0(needed_defs_0_0, t);
  return(t);
}
ATerm s_14 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(n_14, _fail, default_usage_0_0, t);
  return(t);
}
