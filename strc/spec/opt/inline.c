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
Symbol sym_Cong_2;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_App_2;
Symbol sym_As_2;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_DynamicRules_1;
Symbol sym_LRule_1;
Symbol sym_Choice_2;
Symbol sym_AM_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_Not_1;
Symbol sym_Where_1;
Symbol sym_Test_1;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_Some_1;
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
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
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
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
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
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_h_61;
ATerm term_t_60;
ATerm term_m_60;
ATerm term_l_60;
ATerm term_k_60;
ATerm term_f_60;
ATerm term_e_60;
ATerm term_d_60;
ATerm term_o_59;
ATerm term_n_59;
ATerm term_l_59;
ATerm term_f_59;
ATerm term_z_58;
ATerm term_y_58;
ATerm term_x_58;
ATerm term_w_58;
ATerm term_v_58;
ATerm term_u_58;
ATerm term_s_58;
ATerm term_n_58;
ATerm term_m_58;
ATerm term_j_58;
ATerm term_i_58;
ATerm term_e_58;
ATerm term_d_58;
ATerm term_l_57;
ATerm term_k_57;
ATerm term_j_57;
ATerm term_i_57;
ATerm term_d_57;
ATerm term_c_57;
ATerm term_b_57;
ATerm term_a_57;
ATerm term_u_56;
ATerm term_t_56;
ATerm term_s_56;
ATerm term_r_56;
ATerm term_q_56;
ATerm term_p_56;
ATerm term_o_56;
ATerm term_m_56;
ATerm term_l_56;
ATerm term_h_56;
ATerm term_g_56;
ATerm term_f_56;
ATerm term_h_55;
ATerm term_s_54;
ATerm term_j_54;
ATerm term_g_54;
ATerm term_z_52;
ATerm term_w_52;
ATerm term_n_52;
ATerm term_f_46;
ATerm term_j_45;
ATerm term_h_45;
ATerm term_q_44;
ATerm term_h_44;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_x_42;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_p_34;
ATerm term_w_33;
ATerm term_v_32;
ATerm term_p_17;
ATerm term_j_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_r_16;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
void init_constant_terms (void)
{
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Sort_2, term_r_16, (ATerm) ATempty);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_ConstType_1, term_b_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeInt(50);
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_54));
  term_s_54 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_56));
  term_h_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_56));
  term_l_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(sym__2, term_f_56, term_l_43);
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_43);
  ATprotect(&(term_p_56));
  term_p_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_56));
  term_q_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(sym__2, term_r_56, term_g_15);
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_58));
  term_d_58 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_58));
  term_e_58 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_58));
  term_i_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_58));
  term_j_58 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_58));
  term_m_58 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_58));
  term_n_58 = (ATerm) ATmakeAppl(sym__2, term_a_57, term_b_57);
  ATprotect(&(term_s_58));
  term_s_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_58));
  term_u_58 = (ATerm) ATmakeAppl(sym__2, term_s_58, term_g_15);
  ATprotect(&(term_v_58));
  term_v_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(sym__2, term_w_58, term_g_15);
  ATprotect(&(term_y_58));
  term_y_58 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_58));
  term_z_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_59));
  term_f_59 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_59));
  term_l_59 = (ATerm) ATmakeAppl(sym__2, term_i_58, term_g_15);
  ATprotect(&(term_n_59));
  term_n_59 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_59));
  term_o_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_60));
  term_d_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_60));
  term_e_60 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_60));
  term_f_60 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_60));
  term_l_60 = (ATerm) ATmakeAppl(sym__2, term_k_60, term_g_15);
  ATprotect(&(term_m_60));
  term_m_60 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_60));
  term_t_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_61));
  term_h_61 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm z_6 (ATerm u_37, ATerm v_37, ATerm);
ATerm bottomup_1_0 (ATerm u_96 (ATerm), ATerm);
ATerm w_0 (ATerm);
ATerm y_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm simplify_0_0 (ATerm);
ATerm SubsArgCall2_0_0 (ATerm);
ATerm SubsArgCall1_0_0 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm substitute_arg_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm z_1 (ATerm);
ATerm b_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm h_2 (ATerm);
ATerm substitute_args_0_0 (ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm spaste_1_0 (ATerm x_95 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm y_95 (ATerm), ATerm z_95 (ATerm), ATerm a_96 (ATerm), ATerm);
ATerm k_3 (ATerm);
ATerm p_13 (ATerm v_22, ATerm u_22, ATerm);
ATerm SVar_1_0 (ATerm e_85 (ATerm), ATerm);
ATerm b_14 (ATerm i_110 (ATerm), ATerm j_110 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm w_39, ATerm v_39, ATerm u_39, ATerm);
ATerm new_0_0 (ATerm);
ATerm p_3 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm c_14 (ATerm c_110 (ATerm), ATerm d_110 (ATerm (ATerm), ATerm), ATerm o_39, ATerm r_39, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm q_110 (ATerm), ATerm);
ATerm rename_4_0 (ATerm x_109 (ATerm (ATerm), ATerm), ATerm y_109 (ATerm), ATerm z_109 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm a_110 (ATerm (ATerm), ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm tpaste_1_0 (ATerm t_95 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm v_13 (ATerm h_105 (ATerm), ATerm e_31, ATerm d_31, ATerm);
ATerm w_13 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm i_31, ATerm h_31, ATerm);
ATerm x_13 (ATerm c_105 (ATerm), ATerm c_31, ATerm b_31, ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm z_13 (ATerm w_547, ATerm b_548, ATerm z_53, ATerm);
ATerm while_not_2_0 (ATerm l_114 (ATerm), ATerm m_114 (ATerm), ATerm);
ATerm for_3_0 (ATerm o_114 (ATerm), ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm);
ATerm j_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_104 (ATerm b_103, ATerm c_103, ATerm d_103, ATerm);
ATerm n_5 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm free_vars_3_0 (ATerm a_112 (ATerm), ATerm b_112 (ATerm), ATerm c_112 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm b_6 (ATerm);
ATerm d_6 (ATerm);
ATerm h_6 (ATerm);
ATerm k_6 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm v_81 (ATerm), ATerm);
ATerm o_6 (ATerm);
ATerm t_6 (ATerm);
ATerm w_6 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm i_7 (ATerm);
ATerm r_7 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm x_7 (ATerm);
ATerm e_8 (ATerm);
ATerm g_8 (ATerm);
ATerm j_8 (ATerm);
ATerm InlineCall_0_0 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm occurrences_1_0 (ATerm o_105 (ATerm), ATerm);
ATerm h_14 (ATerm y_94 (ATerm), ATerm y_21, ATerm x_21, ATerm);
ATerm k_14 (ATerm o_37, ATerm p_37, ATerm);
ATerm end_scope_1_0 (ATerm e_109 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm d_109 (ATerm), ATerm);
ATerm scope_2_0 (ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm);
ATerm s_8 (ATerm);
ATerm v_8 (ATerm);
ATerm y_8 (ATerm);
ATerm inline_sdef_0_0 (ATerm);
ATerm l_14 (ATerm h_109 (ATerm), ATerm b_37, ATerm z_36, ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm AddSDef_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm foldr_3_0 (ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm z_107 (ATerm), ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm j_9 (ATerm);
ATerm term_size_0_0 (ATerm);
ATerm Seq_2_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm);
ATerm k_9 (ATerm);
ATerm body_to_inline_0_0 (ATerm);
ATerm inlineable_0_0 (ATerm);
ATerm topdown_1_0 (ATerm t_96 (ATerm), ATerm);
ATerm p_9 (ATerm);
ATerm o_14 (ATerm l_67, ATerm k_67, ATerm);
ATerm MatchBuildIdemVar_0_0 (ATerm);
ATerm BuildMatchIdem_0_0 (ATerm);
ATerm MatchIdem_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildBuild_0_0 (ATerm);
ATerm genzip_4_0 (ATerm f_101 (ATerm), ATerm g_101 (ATerm), ATerm h_101 (ATerm), ATerm i_101 (ATerm), ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm s_9 (ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm w_9 (ATerm);
ATerm x_9 (ATerm);
ATerm y_9 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm x_97 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm k_103 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm u_131 (ATerm m_131, ATerm);
ATerm conc_0_0 (ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm v_0 (ATerm), ATerm);
ATerm f_10 (ATerm);
ATerm g_10 (ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm j_10 (ATerm);
ATerm k_10 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm m_10 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm w_113 (ATerm), ATerm);
ATerm downup_1_0 (ATerm v_96 (ATerm), ATerm);
ATerm p_10 (ATerm);
ATerm r_10 (ATerm);
ATerm inline_sdefs_0_0 (ATerm);
ATerm Cons_2_0 (ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm);
ATerm x_15 (ATerm w_71, ATerm x_71, ATerm);
ATerm y_15 (ATerm v_74, ATerm w_74, ATerm);
ATerm b_16 (ATerm h_124 (ATerm), ATerm e_723, ATerm z_74, ATerm);
ATerm z_15 (ATerm r_74, ATerm s_74, ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm d_11 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm c_119 (ATerm), ATerm);
ATerm x_144 (ATerm r_144, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm c_16 (ATerm x_74, ATerm);
ATerm d_16 (ATerm y_71, ATerm z_71, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm i_146 (ATerm h_145, ATerm);
ATerm j_146 (ATerm l_145, ATerm m_145, ATerm n_145, ATerm);
ATerm k_146 (ATerm v_145, ATerm w_145, ATerm x_145, ATerm);
ATerm e_16 (ATerm);
ATerm h_11 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm e_103 (ATerm), ATerm);
ATerm w_15 (ATerm t_45, ATerm u_45, ATerm);
ATerm debug_1_0 (ATerm f_124 (ATerm), ATerm);
ATerm i_11 (ATerm);
ATerm j_11 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm q_117 (ATerm), ATerm);
ATerm k_11 (ATerm);
ATerm p_11 (ATerm);
ATerm q_11 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm s_11 (ATerm);
ATerm t_11 (ATerm);
ATerm u_11 (ATerm);
ATerm w_11 (ATerm);
ATerm x_11 (ATerm);
ATerm y_11 (ATerm);
ATerm b_12 (ATerm);
ATerm c_12 (ATerm);
ATerm d_12 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm k_16 (ATerm z_47, ATerm a_48, ATerm);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm e_12 (ATerm);
ATerm f_12 (ATerm);
ATerm g_12 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm i_16 (ATerm j_37, ATerm k_37, ATerm i_37, ATerm);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm s_0 (ATerm), ATerm);
ATerm h_12 (ATerm);
ATerm i_12 (ATerm);
ATerm j_12 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm f_16 (ATerm k_35, ATerm l_35, ATerm);
ATerm foldr_2_0 (ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm l_12 (ATerm);
ATerm m_12 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm p_117 (ATerm), ATerm);
ATerm o_12 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm p_12 (ATerm);
ATerm need_help_1_0 (ATerm a_120 (ATerm), ATerm);
ATerm map_1_0 (ATerm u_102 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm h_16 (ATerm a_39, ATerm b_39, ATerm);
ATerm r_12 (ATerm);
ATerm s_12 (ATerm);
ATerm w_12 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm x_12 (ATerm);
ATerm z_12 (ATerm);
ATerm a_13 (ATerm);
ATerm b_13 (ATerm);
ATerm c_13 (ATerm);
ATerm d_13 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm d_122 (ATerm), ATerm);
ATerm g_13 (ATerm);
ATerm i_13 (ATerm);
ATerm y_13 (ATerm);
ATerm a_14 (ATerm);
ATerm parse_options_1_0 (ATerm c_122 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm);
ATerm w_14 (ATerm);
ATerm y_14 (ATerm);
ATerm z_14 (ATerm);
ATerm a_15 (ATerm);
ATerm b_15 (ATerm);
ATerm iowrap_3_0 (ATerm l_119 (ATerm), ATerm m_119 (ATerm), ATerm n_119 (ATerm), ATerm);
ATerm d_15 (ATerm);
ATerm e_15 (ATerm);
ATerm f_15 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,c_0 = NULL,e_0 = NULL,o_0 = NULL,p_0 = NULL;
  a_0 = t;
  t = term_g_15;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_h_15;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_15), c_0), term_i_15);
  p_0 = t;
  t = SSL_printnl(o_0, p_0);
  t = term_k_15;
  e_0 = t;
  t = SSL_exit(e_0);
  t = a_0;
  return(t);
}
ATerm z_6 (ATerm u_37, ATerm v_37, ATerm t)
{
  ATerm q_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_37, v_37);
  t = h_16(u_37, v_37, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_0 = ATgetFirst((ATermList) t);
      {
        ATerm l_15 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_0;
  return(t);
}
ATerm bottomup_1_0 (ATerm u_96 (ATerm), ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    t = bottomup_1_0(u_96, t);
    return(t);
  }
  t = SRTS_all(r_0, t);
  t = u_96(t);
  return(t);
}
ATerm w_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_15 = ATgetArgument(t, 0);
      if(((ATgetType(m_15) != AT_LIST) || !(ATisEmpty(m_15))))
        _fail(t);
      {
        ATerm n_15 = ATgetArgument(t, 1);
        if(((ATgetType(n_15) != AT_LIST) || !(ATisEmpty(n_15))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_15 = ATgetArgument(t, 0);
      if(((ATgetType(o_15) == AT_LIST) && !(ATisEmpty(o_15))))
        {
          t_16 = ATgetFirst((ATermList) o_15);
          u_16 = (ATerm) ATgetNext((ATermList) o_15);
        }
      else
        _fail(t);
      {
        ATerm p_15 = ATgetArgument(t, 1);
        if(((ATgetType(p_15) == AT_LIST) && !(ATisEmpty(p_15))))
          {
            v_16 = ATgetFirst((ATermList) p_15);
            w_16 = (ATerm) ATgetNext((ATermList) p_15);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_16, v_16), (ATerm) ATmakeAppl(sym__2, u_16, w_16));
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL;
  if(match_cons(t, sym__2))
    {
      x_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_16), x_16);
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL;
  if(match_cons(t, sym__2))
    {
      z_16 = ATgetArgument(t, 0);
      a_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_16), (ATerm) ATmakeAppl(sym_Match_1, a_17));
  return(t);
}
ATerm c_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_15 = ATgetArgument(t, 0);
      if(((ATgetType(q_15) != AT_LIST) || !(ATisEmpty(q_15))))
        _fail(t);
      {
        ATerm r_15 = ATgetArgument(t, 1);
        if(((ATgetType(r_15) != AT_LIST) || !(ATisEmpty(r_15))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,y_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_15 = ATgetArgument(t, 0);
      if(((ATgetType(s_15) == AT_LIST) && !(ATisEmpty(s_15))))
        {
          t_26 = ATgetFirst((ATermList) s_15);
          u_26 = (ATerm) ATgetNext((ATermList) s_15);
        }
      else
        _fail(t);
      {
        ATerm t_15 = ATgetArgument(t, 1);
        if(((ATgetType(t_15) == AT_LIST) && !(ATisEmpty(t_15))))
          {
            v_26 = ATgetFirst((ATermList) t_15);
            y_26 = (ATerm) ATgetNext((ATermList) t_15);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_26, v_26), (ATerm) ATmakeAppl(sym__2, u_26, y_26));
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL;
  if(match_cons(t, sym__2))
    {
      z_26 = ATgetArgument(t, 0);
      a_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_27), z_26);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm b_27 = NULL,f_27 = NULL;
  if(match_cons(t, sym__2))
    {
      b_27 = ATgetArgument(t, 0);
      f_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_27), (ATerm) ATmakeAppl(sym_Match_1, f_27));
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm u_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm a_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(v_15);
      {
        ATerm a_44 = NULL,b_44 = NULL;
        a_44 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm g_16 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        b_44 = t;
        t = SSLgetAnnotations(a_44);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_16 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) j_16) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm m_16 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(m_16) != AT_LIST) || !(ATisEmpty(m_16))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_44;
      }
    }
  else
    {
      t = u_15;
      {
        ATerm n_16 = t;
        int o_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm p_16 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) p_16) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm q_16 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(o_16);
            _fail(t);
          }
        else
          {
            t = n_16;
          }
      }
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm n_62 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_62, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_17), term_c_17));
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm o_62 = NULL,p_62 = NULL;
  p_62 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      o_62 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, o_62, term_c_17);
    }
  else
    {
      t = p_62;
    }
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm k_63 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_63, term_c_17);
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm l_63 = NULL,m_63 = NULL;
  m_63 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      l_63 = ATgetArgument(t, 0);
      {
        ATerm e_17 = t;
        int f_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, l_63, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_17), term_c_17));
            ;
            LocalPopChoice(f_17);
          }
        else
          {
            t = e_17;
            t = m_63;
          }
      }
    }
  else
    {
      t = m_63;
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm c_64 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      c_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, c_64, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_17), term_c_17));
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm f_64 = NULL,i_64 = NULL;
  i_64 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      f_64 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, f_64, term_c_17);
    }
  else
    {
      t = i_64;
    }
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    ATerm c_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,i_6 = NULL,j_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,u_6 = NULL,v_6 = NULL,x_6 = NULL,y_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL;
    e_7 = t;
    if(match_cons(t, sym_Test_1))
      {
        d_7 = ATgetArgument(t, 0);
        t = d_7;
        if(match_cons(t, sym_Id_0))
          {
            ATerm g_17 = t;
            int i_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_j_17;
                t = u_0(t);
                ;
                LocalPopChoice(i_17);
              }
            else
              {
                t = g_17;
                {
                  ATerm k_17 = t;
                  int m_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,s_7 = NULL,n_8 = NULL,u_8 = NULL,b_9 = NULL,l_10 = NULL;
                      t = e_7;
                      t = new_0_0(t);
                      j_7 = t;
                      t = bottomup_1_0(u_0, t);
                      b_9 = t;
                      t = (ATerm) ATempty;
                      t = u_0(t);
                      l_10 = t;
                      t = (ATerm) ATinsert(CheckATermList(l_10), b_9);
                      t = u_0(t);
                      k_7 = t;
                      t = j_7;
                      t = bottomup_1_0(u_0, t);
                      u_8 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, u_8);
                      t = u_0(t);
                      n_8 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, n_8);
                      t = u_0(t);
                      m_7 = t;
                      t = d_7;
                      t = bottomup_1_0(u_0, t);
                      o_7 = t;
                      t = j_7;
                      t = bottomup_1_0(u_0, t);
                      s_7 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, s_7);
                      t = u_0(t);
                      q_7 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, q_7);
                      t = u_0(t);
                      p_7 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_7, p_7);
                      t = u_0(t);
                      n_7 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_7, n_7);
                      t = u_0(t);
                      l_7 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, k_7, l_7);
                      t = u_0(t);
                      ;
                      LocalPopChoice(m_17);
                    }
                  else
                    {
                      t = k_17;
                      t = e_7;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm n_17 = t;
                int o_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_p_17;
                    t = u_0(t);
                    ;
                    LocalPopChoice(o_17);
                  }
                else
                  {
                    t = n_17;
                    {
                      ATerm r_17 = t;
                      int s_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm q_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,y_10 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,r_11 = NULL;
                          t = e_7;
                          t = new_0_0(t);
                          q_10 = t;
                          t = bottomup_1_0(u_0, t);
                          o_11 = t;
                          t = (ATerm) ATempty;
                          t = u_0(t);
                          r_11 = t;
                          t = (ATerm) ATinsert(CheckATermList(r_11), o_11);
                          t = u_0(t);
                          t_10 = t;
                          t = q_10;
                          t = bottomup_1_0(u_0, t);
                          n_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, n_11);
                          t = u_0(t);
                          m_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, m_11);
                          t = u_0(t);
                          v_10 = t;
                          t = d_7;
                          t = bottomup_1_0(u_0, t);
                          e_11 = t;
                          t = q_10;
                          t = bottomup_1_0(u_0, t);
                          l_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, l_11);
                          t = u_0(t);
                          g_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, g_11);
                          t = u_0(t);
                          f_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_11, f_11);
                          t = u_0(t);
                          y_10 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_10, y_10);
                          t = u_0(t);
                          u_10 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, t_10, u_10);
                          t = u_0(t);
                          ;
                          LocalPopChoice(s_17);
                        }
                      else
                        {
                          t = r_17;
                          t = e_7;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    a_7 = ATgetArgument(t, 0);
                    {
                      ATerm t_17 = t;
                      int u_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, a_7);
                          t = u_0(t);
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
                                ATerm n_12 = NULL,y_12 = NULL,h_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL;
                                t = e_7;
                                t = new_0_0(t);
                                n_12 = t;
                                t = bottomup_1_0(u_0, t);
                                t_13 = t;
                                t = (ATerm) ATempty;
                                t = u_0(t);
                                u_13 = t;
                                t = (ATerm) ATinsert(CheckATermList(u_13), t_13);
                                t = u_0(t);
                                y_12 = t;
                                t = n_12;
                                t = bottomup_1_0(u_0, t);
                                s_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, s_13);
                                t = u_0(t);
                                r_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, r_13);
                                t = u_0(t);
                                k_13 = t;
                                t = d_7;
                                t = bottomup_1_0(u_0, t);
                                m_13 = t;
                                t = n_12;
                                t = bottomup_1_0(u_0, t);
                                q_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, q_13);
                                t = u_0(t);
                                o_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, o_13);
                                t = u_0(t);
                                n_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, m_13, n_13);
                                t = u_0(t);
                                l_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, k_13, l_13);
                                t = u_0(t);
                                h_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, y_12, h_13);
                                t = u_0(t);
                                ;
                                LocalPopChoice(w_17);
                              }
                            else
                              {
                                t = v_17;
                                t = e_7;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm x_17 = t;
                    int y_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,i_14 = NULL,j_14 = NULL,m_14 = NULL,n_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL;
                        t = e_7;
                        t = new_0_0(t);
                        d_14 = t;
                        t = bottomup_1_0(u_0, t);
                        s_14 = t;
                        t = (ATerm) ATempty;
                        t = u_0(t);
                        t_14 = t;
                        t = (ATerm) ATinsert(CheckATermList(t_14), s_14);
                        t = u_0(t);
                        e_14 = t;
                        t = d_14;
                        t = bottomup_1_0(u_0, t);
                        r_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, r_14);
                        t = u_0(t);
                        q_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, q_14);
                        t = u_0(t);
                        g_14 = t;
                        t = d_7;
                        t = bottomup_1_0(u_0, t);
                        j_14 = t;
                        t = d_14;
                        t = bottomup_1_0(u_0, t);
                        p_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, p_14);
                        t = u_0(t);
                        n_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, n_14);
                        t = u_0(t);
                        m_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, j_14, m_14);
                        t = u_0(t);
                        i_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, i_14);
                        t = u_0(t);
                        f_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, e_14, f_14);
                        t = u_0(t);
                        ;
                        LocalPopChoice(y_17);
                      }
                    else
                      {
                        t = x_17;
                        t = e_7;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            d_7 = ATgetArgument(t, 0);
            t = d_7;
            if(match_cons(t, sym_Id_0))
              {
                ATerm a_18 = t;
                int b_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_p_17;
                    t = u_0(t);
                    ;
                    LocalPopChoice(b_18);
                  }
                else
                  {
                    t = a_18;
                    t = e_7;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm c_18 = t;
                    int d_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_j_17;
                        t = u_0(t);
                        ;
                        LocalPopChoice(d_18);
                      }
                    else
                      {
                        t = c_18;
                        t = e_7;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        a_7 = ATgetArgument(t, 0);
                        {
                          ATerm e_18 = t;
                          int f_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, a_7);
                              t = u_0(t);
                              ;
                              LocalPopChoice(f_18);
                            }
                          else
                            {
                              t = e_18;
                              t = e_7;
                            }
                        }
                      }
                    else
                      {
                        t = e_7;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                d_7 = ATgetArgument(t, 0);
                c_7 = ATgetArgument(t, 1);
                t = c_7;
                if(match_cons(t, sym_Id_0))
                  {
                    t = d_7;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = c_7;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = d_7;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                a_7 = ATgetArgument(t, 0);
                                b_7 = ATgetArgument(t, 1);
                                t = d_7;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    a_7 = ATgetArgument(t, 0);
                                    b_7 = ATgetArgument(t, 1);
                                    t = d_7;
                                  }
                                else
                                  {
                                    t = d_7;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        x_6 = ATgetArgument(t, 0);
                        y_6 = ATgetArgument(t, 1);
                        t = x_6;
                        if(match_cons(t, sym_Match_1))
                          {
                            v_6 = ATgetArgument(t, 0);
                            t = v_6;
                            if(match_cons(t, sym_Op_2))
                              {
                                s_6 = ATgetArgument(t, 0);
                                m_6 = ATgetArgument(t, 1);
                                t = d_7;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = c_7;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm g_18 = t;
                                        int h_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_p_17;
                                            t = u_0(t);
                                            ;
                                            LocalPopChoice(h_18);
                                          }
                                        else
                                          {
                                            t = g_18;
                                            t = e_7;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            a_7 = ATgetArgument(t, 0);
                                            b_7 = ATgetArgument(t, 1);
                                            {
                                              ATerm i_18 = t;
                                              int k_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm l_16 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                  t = u_0(t);
                                                  l_16 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, l_16);
                                                  t = u_0(t);
                                                  ;
                                                  LocalPopChoice(k_18);
                                                }
                                              else
                                                {
                                                  t = i_18;
                                                  t = e_7;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                a_7 = ATgetArgument(t, 0);
                                                t = a_7;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    u_6 = ATgetArgument(t, 0);
                                                    n_6 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm l_18 = t;
                                                      int m_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, u_6, s_6);
                                                          {
                                                            ATerm n_18 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm z_0 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    z_0 = ATgetArgument(t, 0);
                                                                    if((z_0 != ATgetArgument(t, 1)))
                                                                      {
                                                                        _fail(ATgetArgument(t, 1));
                                                                      }
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                PopChoice();
                                                                _fail(t);
                                                              }
                                                            else
                                                              {
                                                                t = n_18;
                                                              }
                                                            t = term_p_17;
                                                            t = bottomup_1_0(u_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(m_18);
                                                        }
                                                      else
                                                        {
                                                          t = l_18;
                                                          {
                                                            ATerm o_18 = t;
                                                            int q_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm s_16 = NULL;
                                                                t = s_6;
                                                                if((u_6 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, n_6, m_6);
                                                                t = genzip_4_0(w_0, y_0, a_1, b_1, t);
                                                                s_16 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_16), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, u_6, n_6)), y_6));
                                                                t = bottomup_1_0(u_0, t);
                                                                ;
                                                                LocalPopChoice(q_18);
                                                              }
                                                            else
                                                              {
                                                                t = o_18;
                                                                {
                                                                  ATerm s_18 = t;
                                                                  int t_18 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm d_17 = NULL;
                                                                      t = v_6;
                                                                      if((a_7 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, a_7);
                                                                      t = u_0(t);
                                                                      d_17 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_17, y_6);
                                                                      t = u_0(t);
                                                                      ;
                                                                      LocalPopChoice(t_18);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = s_18;
                                                                      t = e_7;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm u_18 = t;
                                                    int v_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm h_17 = NULL;
                                                        t = v_6;
                                                        if((a_7 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, a_7);
                                                        t = u_0(t);
                                                        h_17 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, h_17, y_6);
                                                        t = u_0(t);
                                                        ;
                                                        LocalPopChoice(v_18);
                                                      }
                                                    else
                                                      {
                                                        t = u_18;
                                                        t = e_7;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    a_7 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm w_18 = t;
                                                      int y_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm l_17 = NULL;
                                                          t = v_6;
                                                          if((a_7 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, a_7);
                                                          t = u_0(t);
                                                          l_17 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, l_17, y_6);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(y_18);
                                                        }
                                                      else
                                                        {
                                                          t = w_18;
                                                          t = e_7;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        a_7 = ATgetArgument(t, 0);
                                                        b_7 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm z_18 = t;
                                                          int a_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_17 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                              t = u_0(t);
                                                              q_17 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, q_17);
                                                              t = u_0(t);
                                                              ;
                                                              LocalPopChoice(a_19);
                                                            }
                                                          else
                                                            {
                                                              t = z_18;
                                                              t = e_7;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = e_7;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = d_7;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = c_7;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm b_19 = t;
                                        int e_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_p_17;
                                            t = u_0(t);
                                            ;
                                            LocalPopChoice(e_19);
                                          }
                                        else
                                          {
                                            t = b_19;
                                            t = e_7;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            a_7 = ATgetArgument(t, 0);
                                            b_7 = ATgetArgument(t, 1);
                                            {
                                              ATerm g_19 = t;
                                              int m_19 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm z_17 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                  t = u_0(t);
                                                  z_17 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, z_17);
                                                  t = u_0(t);
                                                  ;
                                                  LocalPopChoice(m_19);
                                                }
                                              else
                                                {
                                                  t = g_19;
                                                  t = e_7;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                a_7 = ATgetArgument(t, 0);
                                                {
                                                  ATerm n_19 = t;
                                                  int o_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm j_18 = NULL;
                                                      t = v_6;
                                                      if((a_7 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, a_7);
                                                      t = u_0(t);
                                                      j_18 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_18, y_6);
                                                      t = u_0(t);
                                                      ;
                                                      LocalPopChoice(o_19);
                                                    }
                                                  else
                                                    {
                                                      t = n_19;
                                                      t = e_7;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    a_7 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm p_19 = t;
                                                      int q_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm p_18 = NULL;
                                                          t = v_6;
                                                          if((a_7 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, a_7);
                                                          t = u_0(t);
                                                          p_18 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_18, y_6);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(q_19);
                                                        }
                                                      else
                                                        {
                                                          t = p_19;
                                                          t = e_7;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        a_7 = ATgetArgument(t, 0);
                                                        b_7 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm s_19 = t;
                                                          int t_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm x_18 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                              t = u_0(t);
                                                              x_18 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, x_18);
                                                              t = u_0(t);
                                                              ;
                                                              LocalPopChoice(t_19);
                                                            }
                                                          else
                                                            {
                                                              t = s_19;
                                                              t = e_7;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = e_7;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Build_1))
                              {
                                v_6 = ATgetArgument(t, 0);
                                t = v_6;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    s_6 = ATgetArgument(t, 0);
                                    t = d_7;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = c_7;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm u_19 = t;
                                            int w_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_p_17;
                                                t = u_0(t);
                                                ;
                                                LocalPopChoice(w_19);
                                              }
                                            else
                                              {
                                                t = u_19;
                                                t = e_7;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                a_7 = ATgetArgument(t, 0);
                                                b_7 = ATgetArgument(t, 1);
                                                {
                                                  ATerm y_19 = t;
                                                  int z_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm r_19 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                      t = u_0(t);
                                                      r_19 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, r_19);
                                                      t = u_0(t);
                                                      ;
                                                      LocalPopChoice(z_19);
                                                    }
                                                  else
                                                    {
                                                      t = y_19;
                                                      t = e_7;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm a_20 = t;
                                                int b_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm f_20 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(b_20);
                                                    {
                                                      ATerm h_20 = t;
                                                      int i_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm x_19 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, v_6);
                                                          t = u_0(t);
                                                          x_19 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_19, y_6);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(i_20);
                                                        }
                                                      else
                                                        {
                                                          t = h_20;
                                                          t = e_7;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = a_20;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        a_7 = ATgetArgument(t, 0);
                                                        t = a_7;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            u_6 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm j_20 = t;
                                                              int k_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm d_20 = NULL,e_20 = NULL;
                                                                  t = s_6;
                                                                  if((u_6 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, u_6);
                                                                  t = u_0(t);
                                                                  e_20 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, e_20);
                                                                  t = u_0(t);
                                                                  d_20 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, d_20, y_6);
                                                                  t = u_0(t);
                                                                  ;
                                                                  LocalPopChoice(k_20);
                                                                }
                                                              else
                                                                {
                                                                  t = j_20;
                                                                  t = e_7;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = e_7;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            a_7 = ATgetArgument(t, 0);
                                                            b_7 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm l_20 = t;
                                                              int m_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm y_20 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                                  t = u_0(t);
                                                                  y_20 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, y_20);
                                                                  t = u_0(t);
                                                                  ;
                                                                  LocalPopChoice(m_20);
                                                                }
                                                              else
                                                                {
                                                                  t = l_20;
                                                                  t = e_7;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = e_7;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = d_7;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = c_7;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm n_20 = t;
                                            int o_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_p_17;
                                                t = u_0(t);
                                                ;
                                                LocalPopChoice(o_20);
                                              }
                                            else
                                              {
                                                t = n_20;
                                                t = e_7;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                a_7 = ATgetArgument(t, 0);
                                                b_7 = ATgetArgument(t, 1);
                                                {
                                                  ATerm p_20 = t;
                                                  int q_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm k_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                      t = u_0(t);
                                                      k_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, k_22);
                                                      t = u_0(t);
                                                      ;
                                                      LocalPopChoice(q_20);
                                                    }
                                                  else
                                                    {
                                                      t = p_20;
                                                      t = e_7;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm r_20 = t;
                                                int s_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm t_20 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(s_20);
                                                    {
                                                      ATerm u_20 = t;
                                                      int v_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm r_22 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, v_6);
                                                          t = u_0(t);
                                                          r_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, r_22, y_6);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(v_20);
                                                        }
                                                      else
                                                        {
                                                          t = u_20;
                                                          t = e_7;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = r_20;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        a_7 = ATgetArgument(t, 0);
                                                        b_7 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm w_20 = t;
                                                          int x_20 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                              t = u_0(t);
                                                              f_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, f_23);
                                                              t = u_0(t);
                                                              ;
                                                              LocalPopChoice(x_20);
                                                            }
                                                          else
                                                            {
                                                              t = w_20;
                                                              t = e_7;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = e_7;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_PrimT_3))
                                  {
                                    v_6 = ATgetArgument(t, 0);
                                    p_6 = ATgetArgument(t, 1);
                                    q_6 = ATgetArgument(t, 2);
                                    t = d_7;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = c_7;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm z_20 = t;
                                            int b_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_p_17;
                                                t = u_0(t);
                                                ;
                                                LocalPopChoice(b_21);
                                              }
                                            else
                                              {
                                                t = z_20;
                                                t = e_7;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                a_7 = ATgetArgument(t, 0);
                                                b_7 = ATgetArgument(t, 1);
                                                {
                                                  ATerm c_21 = t;
                                                  int d_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm s_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                      t = u_0(t);
                                                      s_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, s_23);
                                                      t = u_0(t);
                                                      ;
                                                      LocalPopChoice(d_21);
                                                    }
                                                  else
                                                    {
                                                      t = c_21;
                                                      t = e_7;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm e_21 = t;
                                                int f_21 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm i_21 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(f_21);
                                                    {
                                                      ATerm m_21 = t;
                                                      int q_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm a_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, v_6, p_6, q_6);
                                                          t = u_0(t);
                                                          a_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_24, y_6);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(q_21);
                                                        }
                                                      else
                                                        {
                                                          t = m_21;
                                                          t = e_7;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = e_21;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        a_7 = ATgetArgument(t, 0);
                                                        b_7 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm r_21 = t;
                                                          int t_21 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_24 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                              t = u_0(t);
                                                              h_24 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, h_24);
                                                              t = u_0(t);
                                                              ;
                                                              LocalPopChoice(t_21);
                                                            }
                                                          else
                                                            {
                                                              t = r_21;
                                                              t = e_7;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = e_7;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = d_7;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = c_7;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm w_21 = t;
                                            int z_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_p_17;
                                                t = u_0(t);
                                                ;
                                                LocalPopChoice(z_21);
                                              }
                                            else
                                              {
                                                t = w_21;
                                                t = e_7;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                a_7 = ATgetArgument(t, 0);
                                                b_7 = ATgetArgument(t, 1);
                                                {
                                                  ATerm a_22 = t;
                                                  int b_22 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm w_24 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                      t = u_0(t);
                                                      w_24 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, w_24);
                                                      t = u_0(t);
                                                      ;
                                                      LocalPopChoice(b_22);
                                                    }
                                                  else
                                                    {
                                                      t = a_22;
                                                      t = e_7;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    a_7 = ATgetArgument(t, 0);
                                                    b_7 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm c_22 = t;
                                                      int d_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm f_25 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                          t = u_0(t);
                                                          f_25 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, f_25);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(d_22);
                                                        }
                                                      else
                                                        {
                                                          t = c_22;
                                                          t = e_7;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = e_7;
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            x_6 = ATgetArgument(t, 0);
                            t = x_6;
                            if(match_cons(t, sym_Op_2))
                              {
                                v_6 = ATgetArgument(t, 0);
                                p_6 = ATgetArgument(t, 1);
                                t = d_7;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = c_7;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm e_22 = t;
                                        int f_22 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_p_17;
                                            t = u_0(t);
                                            ;
                                            LocalPopChoice(f_22);
                                          }
                                        else
                                          {
                                            t = e_22;
                                            t = e_7;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            a_7 = ATgetArgument(t, 0);
                                            b_7 = ATgetArgument(t, 1);
                                            {
                                              ATerm g_22 = t;
                                              int h_22 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm n_26 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                  t = u_0(t);
                                                  n_26 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, n_26);
                                                  t = u_0(t);
                                                  ;
                                                  LocalPopChoice(h_22);
                                                }
                                              else
                                                {
                                                  t = g_22;
                                                  t = e_7;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                a_7 = ATgetArgument(t, 0);
                                                t = a_7;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    u_6 = ATgetArgument(t, 0);
                                                    n_6 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm i_22 = t;
                                                      int j_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, u_6, v_6);
                                                          {
                                                            ATerm l_22 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm g_1 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    g_1 = ATgetArgument(t, 0);
                                                                    if((g_1 != ATgetArgument(t, 1)))
                                                                      {
                                                                        _fail(ATgetArgument(t, 1));
                                                                      }
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                PopChoice();
                                                                _fail(t);
                                                              }
                                                            else
                                                              {
                                                                t = l_22;
                                                              }
                                                            t = term_p_17;
                                                            t = bottomup_1_0(u_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(j_22);
                                                        }
                                                      else
                                                        {
                                                          t = i_22;
                                                          {
                                                            ATerm m_22 = t;
                                                            int n_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm s_26 = NULL;
                                                                t = v_6;
                                                                if((u_6 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, n_6, p_6);
                                                                t = genzip_4_0(c_1, d_1, e_1, f_1, t);
                                                                s_26 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_26), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, u_6, n_6)));
                                                                t = bottomup_1_0(u_0, t);
                                                                ;
                                                                LocalPopChoice(n_22);
                                                              }
                                                            else
                                                              {
                                                                t = m_22;
                                                                {
                                                                  ATerm o_22 = t;
                                                                  int p_22 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = x_6;
                                                                      if((a_7 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, a_7);
                                                                      t = u_0(t);
                                                                      ;
                                                                      LocalPopChoice(p_22);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = o_22;
                                                                      t = e_7;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm q_22 = t;
                                                    int s_22 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = x_6;
                                                        if((a_7 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, a_7);
                                                        t = u_0(t);
                                                        ;
                                                        LocalPopChoice(s_22);
                                                      }
                                                    else
                                                      {
                                                        t = q_22;
                                                        t = e_7;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    a_7 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm w_22 = t;
                                                      int x_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = x_6;
                                                          if((a_7 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, a_7);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(x_22);
                                                        }
                                                      else
                                                        {
                                                          t = w_22;
                                                          t = e_7;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        a_7 = ATgetArgument(t, 0);
                                                        b_7 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm a_23 = t;
                                                          int b_23 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm c_28 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                              t = u_0(t);
                                                              c_28 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, c_28);
                                                              t = u_0(t);
                                                              ;
                                                              LocalPopChoice(b_23);
                                                            }
                                                          else
                                                            {
                                                              t = a_23;
                                                              t = e_7;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = e_7;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = d_7;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = c_7;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm c_23 = t;
                                        int d_23 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_p_17;
                                            t = u_0(t);
                                            ;
                                            LocalPopChoice(d_23);
                                          }
                                        else
                                          {
                                            t = c_23;
                                            t = e_7;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            a_7 = ATgetArgument(t, 0);
                                            b_7 = ATgetArgument(t, 1);
                                            {
                                              ATerm e_23 = t;
                                              int g_23 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm o_28 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                  t = u_0(t);
                                                  o_28 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, o_28);
                                                  t = u_0(t);
                                                  ;
                                                  LocalPopChoice(g_23);
                                                }
                                              else
                                                {
                                                  t = e_23;
                                                  t = e_7;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                a_7 = ATgetArgument(t, 0);
                                                {
                                                  ATerm h_23 = t;
                                                  int i_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = x_6;
                                                      if((a_7 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, a_7);
                                                      t = u_0(t);
                                                      ;
                                                      LocalPopChoice(i_23);
                                                    }
                                                  else
                                                    {
                                                      t = h_23;
                                                      t = e_7;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    a_7 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm j_23 = t;
                                                      int k_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = x_6;
                                                          if((a_7 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, a_7);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(k_23);
                                                        }
                                                      else
                                                        {
                                                          t = j_23;
                                                          t = e_7;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        a_7 = ATgetArgument(t, 0);
                                                        b_7 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm l_23 = t;
                                                          int m_23 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                              t = u_0(t);
                                                              n_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, n_29);
                                                              t = u_0(t);
                                                              ;
                                                              LocalPopChoice(m_23);
                                                            }
                                                          else
                                                            {
                                                              t = l_23;
                                                              t = e_7;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = e_7;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Build_1))
                              {
                                x_6 = ATgetArgument(t, 0);
                                t = x_6;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    v_6 = ATgetArgument(t, 0);
                                    t = d_7;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = c_7;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm n_23 = t;
                                            int o_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_p_17;
                                                t = u_0(t);
                                                ;
                                                LocalPopChoice(o_23);
                                              }
                                            else
                                              {
                                                t = n_23;
                                                t = e_7;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                a_7 = ATgetArgument(t, 0);
                                                b_7 = ATgetArgument(t, 1);
                                                {
                                                  ATerm p_23 = t;
                                                  int q_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm a_30 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                      t = u_0(t);
                                                      a_30 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, a_30);
                                                      t = u_0(t);
                                                      ;
                                                      LocalPopChoice(q_23);
                                                    }
                                                  else
                                                    {
                                                      t = p_23;
                                                      t = e_7;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm r_23 = t;
                                                int t_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm u_23 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(t_23);
                                                    {
                                                      ATerm v_23 = t;
                                                      int w_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, x_6);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(w_23);
                                                        }
                                                      else
                                                        {
                                                          t = v_23;
                                                          t = e_7;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = r_23;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        a_7 = ATgetArgument(t, 0);
                                                        t = a_7;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            u_6 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm x_23 = t;
                                                              int y_23 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm g_30 = NULL;
                                                                  t = v_6;
                                                                  if((u_6 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, u_6);
                                                                  t = u_0(t);
                                                                  g_30 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, g_30);
                                                                  t = u_0(t);
                                                                  ;
                                                                  LocalPopChoice(y_23);
                                                                }
                                                              else
                                                                {
                                                                  t = x_23;
                                                                  t = e_7;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = e_7;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            a_7 = ATgetArgument(t, 0);
                                                            b_7 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm z_23 = t;
                                                              int b_24 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm o_30 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                                  t = u_0(t);
                                                                  o_30 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, o_30);
                                                                  t = u_0(t);
                                                                  ;
                                                                  LocalPopChoice(b_24);
                                                                }
                                                              else
                                                                {
                                                                  t = z_23;
                                                                  t = e_7;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = e_7;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = d_7;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = c_7;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm c_24 = t;
                                            int d_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_p_17;
                                                t = u_0(t);
                                                ;
                                                LocalPopChoice(d_24);
                                              }
                                            else
                                              {
                                                t = c_24;
                                                t = e_7;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                a_7 = ATgetArgument(t, 0);
                                                b_7 = ATgetArgument(t, 1);
                                                {
                                                  ATerm e_24 = t;
                                                  int f_24 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm n_31 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                      t = u_0(t);
                                                      n_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, n_31);
                                                      t = u_0(t);
                                                      ;
                                                      LocalPopChoice(f_24);
                                                    }
                                                  else
                                                    {
                                                      t = e_24;
                                                      t = e_7;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm i_24 = t;
                                                int j_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm k_24 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(j_24);
                                                    {
                                                      ATerm l_24 = t;
                                                      int m_24 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, x_6);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(m_24);
                                                        }
                                                      else
                                                        {
                                                          t = l_24;
                                                          t = e_7;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = i_24;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        a_7 = ATgetArgument(t, 0);
                                                        b_7 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm n_24 = t;
                                                          int o_24 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm w_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                              t = u_0(t);
                                                              w_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, w_31);
                                                              t = u_0(t);
                                                              ;
                                                              LocalPopChoice(o_24);
                                                            }
                                                          else
                                                            {
                                                              t = n_24;
                                                              t = e_7;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = e_7;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_PrimT_3))
                                  {
                                    x_6 = ATgetArgument(t, 0);
                                    y_6 = ATgetArgument(t, 1);
                                    r_6 = ATgetArgument(t, 2);
                                    t = d_7;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = c_7;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm r_24 = t;
                                            int s_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_p_17;
                                                t = u_0(t);
                                                ;
                                                LocalPopChoice(s_24);
                                              }
                                            else
                                              {
                                                t = r_24;
                                                t = e_7;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                a_7 = ATgetArgument(t, 0);
                                                b_7 = ATgetArgument(t, 1);
                                                {
                                                  ATerm t_24 = t;
                                                  int u_24 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_32 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                      t = u_0(t);
                                                      p_32 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, p_32);
                                                      t = u_0(t);
                                                      ;
                                                      LocalPopChoice(u_24);
                                                    }
                                                  else
                                                    {
                                                      t = t_24;
                                                      t = e_7;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm v_24 = t;
                                                int x_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm y_24 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(x_24);
                                                    {
                                                      ATerm a_25 = t;
                                                      int c_25 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, x_6, y_6, r_6);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(c_25);
                                                        }
                                                      else
                                                        {
                                                          t = a_25;
                                                          t = e_7;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = v_24;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        a_7 = ATgetArgument(t, 0);
                                                        b_7 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm d_25 = t;
                                                          int e_25 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                              t = u_0(t);
                                                              r_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, r_33);
                                                              t = u_0(t);
                                                              ;
                                                              LocalPopChoice(e_25);
                                                            }
                                                          else
                                                            {
                                                              t = d_25;
                                                              t = e_7;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = e_7;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Let_2))
                                      {
                                        x_6 = ATgetArgument(t, 0);
                                        y_6 = ATgetArgument(t, 1);
                                        t = d_7;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = c_7;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm g_25 = t;
                                                int h_25 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_p_17;
                                                    t = u_0(t);
                                                    ;
                                                    LocalPopChoice(h_25);
                                                  }
                                                else
                                                  {
                                                    t = g_25;
                                                    {
                                                      ATerm i_25 = t;
                                                      int j_25 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm h_35 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_7, y_6);
                                                          t = u_0(t);
                                                          h_35 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, x_6, h_35);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(j_25);
                                                        }
                                                      else
                                                        {
                                                          t = i_25;
                                                          t = e_7;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    a_7 = ATgetArgument(t, 0);
                                                    b_7 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm k_25 = t;
                                                      int l_25 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm o_35 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                          t = u_0(t);
                                                          o_35 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, o_35);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(l_25);
                                                        }
                                                      else
                                                        {
                                                          t = k_25;
                                                          {
                                                            ATerm m_25 = t;
                                                            int n_25 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm x_35 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, d_7, y_6);
                                                                t = u_0(t);
                                                                x_35 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, x_6, x_35);
                                                                t = u_0(t);
                                                                ;
                                                                LocalPopChoice(n_25);
                                                              }
                                                            else
                                                              {
                                                                t = m_25;
                                                                t = e_7;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        a_7 = ATgetArgument(t, 0);
                                                        b_7 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm o_25 = t;
                                                          int p_25 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_36 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_7, y_6);
                                                              t = u_0(t);
                                                              h_36 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, x_6, h_36);
                                                              t = u_0(t);
                                                              ;
                                                              LocalPopChoice(p_25);
                                                            }
                                                          else
                                                            {
                                                              t = o_25;
                                                              {
                                                                ATerm q_25 = t;
                                                                int r_25 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm l_36 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                                    t = u_0(t);
                                                                    l_36 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, l_36);
                                                                    t = u_0(t);
                                                                    ;
                                                                    LocalPopChoice(r_25);
                                                                  }
                                                                else
                                                                  {
                                                                    t = q_25;
                                                                    t = e_7;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm t_25 = t;
                                                        int u_25 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm m_37 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, d_7, y_6);
                                                            t = u_0(t);
                                                            m_37 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, x_6, m_37);
                                                            t = u_0(t);
                                                            ;
                                                            LocalPopChoice(u_25);
                                                          }
                                                        else
                                                          {
                                                            t = t_25;
                                                            t = e_7;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Scope_2))
                                          {
                                            x_6 = ATgetArgument(t, 0);
                                            y_6 = ATgetArgument(t, 1);
                                            t = d_7;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = c_7;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm v_25 = t;
                                                    int w_25 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_p_17;
                                                        t = u_0(t);
                                                        ;
                                                        LocalPopChoice(w_25);
                                                      }
                                                    else
                                                      {
                                                        t = v_25;
                                                        {
                                                          ATerm x_25 = t;
                                                          int y_25 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm j_38 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_7, y_6);
                                                              t = u_0(t);
                                                              j_38 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, x_6, j_38);
                                                              t = u_0(t);
                                                              ;
                                                              LocalPopChoice(y_25);
                                                            }
                                                          else
                                                            {
                                                              t = x_25;
                                                              t = e_7;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        a_7 = ATgetArgument(t, 0);
                                                        b_7 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm z_25 = t;
                                                          int a_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm t_38 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                              t = u_0(t);
                                                              t_38 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, t_38);
                                                              t = u_0(t);
                                                              ;
                                                              LocalPopChoice(a_26);
                                                            }
                                                          else
                                                            {
                                                              t = z_25;
                                                              {
                                                                ATerm b_26 = t;
                                                                int g_26 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm f_39 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, d_7, y_6);
                                                                    t = u_0(t);
                                                                    f_39 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, x_6, f_39);
                                                                    t = u_0(t);
                                                                    ;
                                                                    LocalPopChoice(g_26);
                                                                  }
                                                                else
                                                                  {
                                                                    t = b_26;
                                                                    t = e_7;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            a_7 = ATgetArgument(t, 0);
                                                            b_7 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm h_26 = t;
                                                              int i_26 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm m_39 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, d_7, y_6);
                                                                  t = u_0(t);
                                                                  m_39 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, x_6, m_39);
                                                                  t = u_0(t);
                                                                  ;
                                                                  LocalPopChoice(i_26);
                                                                }
                                                              else
                                                                {
                                                                  t = h_26;
                                                                  {
                                                                    ATerm j_26 = t;
                                                                    int k_26 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm c_40 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                                        t = u_0(t);
                                                                        c_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, c_40);
                                                                        t = u_0(t);
                                                                        ;
                                                                        LocalPopChoice(k_26);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = j_26;
                                                                        t = e_7;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm l_26 = t;
                                                            int m_26 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm j_40 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, d_7, y_6);
                                                                t = u_0(t);
                                                                j_40 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, x_6, j_40);
                                                                t = u_0(t);
                                                                ;
                                                                LocalPopChoice(m_26);
                                                              }
                                                            else
                                                              {
                                                                t = l_26;
                                                                t = e_7;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = d_7;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = c_7;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm o_26 = t;
                                                    int p_26 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_p_17;
                                                        t = u_0(t);
                                                        ;
                                                        LocalPopChoice(p_26);
                                                      }
                                                    else
                                                      {
                                                        t = o_26;
                                                        t = e_7;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        a_7 = ATgetArgument(t, 0);
                                                        b_7 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm q_26 = t;
                                                          int r_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_41 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                              t = u_0(t);
                                                              a_41 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, a_41);
                                                              t = u_0(t);
                                                              ;
                                                              LocalPopChoice(r_26);
                                                            }
                                                          else
                                                            {
                                                              t = q_26;
                                                              t = e_7;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            a_7 = ATgetArgument(t, 0);
                                                            b_7 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm w_26 = t;
                                                              int c_27 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm g_41 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                                  t = u_0(t);
                                                                  g_41 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, g_41);
                                                                  t = u_0(t);
                                                                  ;
                                                                  LocalPopChoice(c_27);
                                                                }
                                                              else
                                                                {
                                                                  t = w_26;
                                                                  t = e_7;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = e_7;
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
            else
              {
                if(match_cons(t, sym_LChoice_2))
                  {
                    d_7 = ATgetArgument(t, 0);
                    c_7 = ATgetArgument(t, 1);
                    t = c_7;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = d_7;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm e_27 = t;
                            int g_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_j_17;
                                t = u_0(t);
                                ;
                                LocalPopChoice(g_27);
                              }
                            else
                              {
                                t = e_27;
                                t = d_7;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = c_7;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    a_7 = ATgetArgument(t, 0);
                                    b_7 = ATgetArgument(t, 1);
                                    t = d_7;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        a_7 = ATgetArgument(t, 0);
                                        t = d_7;
                                      }
                                    else
                                      {
                                        t = d_7;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = d_7;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm h_27 = t;
                            int i_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_j_17;
                                t = u_0(t);
                                ;
                                LocalPopChoice(i_27);
                              }
                            else
                              {
                                t = h_27;
                                {
                                  ATerm j_27 = t;
                                  int k_27 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = c_7;
                                      if((d_7 != t))
                                        {
                                          _fail(t);
                                        }
                                      ;
                                      LocalPopChoice(k_27);
                                    }
                                  else
                                    {
                                      t = j_27;
                                      t = e_7;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = c_7;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    a_7 = ATgetArgument(t, 0);
                                    b_7 = ATgetArgument(t, 1);
                                    {
                                      ATerm l_27 = t;
                                      int m_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm p_43 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, b_7, c_7);
                                          t = u_0(t);
                                          p_43 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, a_7, p_43);
                                          t = u_0(t);
                                          ;
                                          LocalPopChoice(m_27);
                                        }
                                      else
                                        {
                                          t = l_27;
                                          {
                                            ATerm o_27 = t;
                                            int p_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = c_7;
                                                if((d_7 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                ;
                                                LocalPopChoice(p_27);
                                              }
                                            else
                                              {
                                                t = o_27;
                                                t = e_7;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        a_7 = ATgetArgument(t, 0);
                                        {
                                          ATerm q_27 = t;
                                          int r_27 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = c_7;
                                              if((d_7 != t))
                                                {
                                                  _fail(t);
                                                }
                                              ;
                                              LocalPopChoice(r_27);
                                            }
                                          else
                                            {
                                              t = q_27;
                                              {
                                                ATerm t_27 = t;
                                                int u_27 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = a_7;
                                                    t = topdown_1_0(h_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, a_7);
                                                    t = bottomup_1_0(u_0, t);
                                                    ;
                                                    LocalPopChoice(u_27);
                                                  }
                                                else
                                                  {
                                                    t = t_27;
                                                    t = e_7;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm v_27 = t;
                                        int w_27 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = c_7;
                                            if((d_7 != t))
                                              {
                                                _fail(t);
                                              }
                                            ;
                                            LocalPopChoice(w_27);
                                          }
                                        else
                                          {
                                            t = v_27;
                                            t = e_7;
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        d_7 = ATgetArgument(t, 0);
                        c_7 = ATgetArgument(t, 1);
                        t = c_7;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = d_7;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm x_27 = t;
                                int y_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_j_17;
                                    t = u_0(t);
                                    ;
                                    LocalPopChoice(y_27);
                                  }
                                else
                                  {
                                    t = x_27;
                                    t = c_7;
                                  }
                              }
                            else
                              {
                                ATerm z_27 = t;
                                int a_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_j_17;
                                    t = u_0(t);
                                    ;
                                    LocalPopChoice(a_28);
                                  }
                                else
                                  {
                                    t = z_27;
                                    t = e_7;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = d_7;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm b_28 = t;
                                    int d_28 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_p_17;
                                        t = u_0(t);
                                        ;
                                        LocalPopChoice(d_28);
                                      }
                                    else
                                      {
                                        t = b_28;
                                        t = c_7;
                                      }
                                  }
                                else
                                  {
                                    ATerm e_28 = t;
                                    int f_28 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_p_17;
                                        t = u_0(t);
                                        ;
                                        LocalPopChoice(f_28);
                                      }
                                    else
                                      {
                                        t = e_28;
                                        t = e_7;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    x_6 = ATgetArgument(t, 0);
                                    y_6 = ATgetArgument(t, 1);
                                    t = d_7;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = c_7;
                                      }
                                    else
                                      {
                                        ATerm g_28 = t;
                                        int h_28 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm n_45 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, d_7, x_6);
                                            t = conc_0_0(t);
                                            n_45 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, n_45, y_6);
                                            t = bottomup_1_0(u_0, t);
                                            ;
                                            LocalPopChoice(h_28);
                                          }
                                        else
                                          {
                                            t = g_28;
                                            t = e_7;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = d_7;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = c_7;
                                      }
                                    else
                                      {
                                        t = e_7;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm i_28 = t;
                        int j_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm k_28 = ATgetArgument(t, 0);
                                c_7 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(j_28);
                            t = c_7;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm l_28 = t;
                                int m_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_j_17;
                                    t = u_0(t);
                                    ;
                                    LocalPopChoice(m_28);
                                  }
                                else
                                  {
                                    t = l_28;
                                    t = e_7;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm n_28 = t;
                                    int q_28 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_p_17;
                                        t = u_0(t);
                                        ;
                                        LocalPopChoice(q_28);
                                      }
                                    else
                                      {
                                        t = n_28;
                                        t = e_7;
                                      }
                                  }
                                else
                                  {
                                    t = e_7;
                                  }
                              }
                          }
                        else
                          {
                            t = i_28;
                            if(match_cons(t, sym_All_1))
                              {
                                d_7 = ATgetArgument(t, 0);
                                t = d_7;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm r_28 = t;
                                    int t_28 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_j_17;
                                        t = u_0(t);
                                        ;
                                        LocalPopChoice(t_28);
                                      }
                                    else
                                      {
                                        t = r_28;
                                        t = e_7;
                                      }
                                  }
                                else
                                  {
                                    t = e_7;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    d_7 = ATgetArgument(t, 0);
                                    t = d_7;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm u_28 = t;
                                        int v_28 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_j_17;
                                            t = u_0(t);
                                            ;
                                            LocalPopChoice(v_28);
                                          }
                                        else
                                          {
                                            t = u_28;
                                            {
                                              ATerm w_28 = t;
                                              int x_28 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm m_46 = NULL,r_46 = NULL,w_46 = NULL,f_47 = NULL,r_47 = NULL,s_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,b_48 = NULL,e_48 = NULL;
                                                  t = e_7;
                                                  t = new_0_0(t);
                                                  m_46 = t;
                                                  t = bottomup_1_0(u_0, t);
                                                  b_48 = t;
                                                  t = (ATerm) ATempty;
                                                  t = u_0(t);
                                                  e_48 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(e_48), b_48);
                                                  t = u_0(t);
                                                  r_46 = t;
                                                  t = m_46;
                                                  t = bottomup_1_0(u_0, t);
                                                  y_47 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, y_47);
                                                  t = u_0(t);
                                                  x_47 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, x_47);
                                                  t = u_0(t);
                                                  f_47 = t;
                                                  t = d_7;
                                                  t = bottomup_1_0(u_0, t);
                                                  s_47 = t;
                                                  t = m_46;
                                                  t = bottomup_1_0(u_0, t);
                                                  w_47 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, w_47);
                                                  t = u_0(t);
                                                  v_47 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, v_47);
                                                  t = u_0(t);
                                                  u_47 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, s_47, u_47);
                                                  t = u_0(t);
                                                  r_47 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_47, r_47);
                                                  t = u_0(t);
                                                  w_46 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, r_46, w_46);
                                                  t = u_0(t);
                                                  ;
                                                  LocalPopChoice(x_28);
                                                }
                                              else
                                                {
                                                  t = w_28;
                                                  t = e_7;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm y_28 = t;
                                            int z_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_p_17;
                                                t = u_0(t);
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
                                                      ATerm h_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,u_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,d_49 = NULL,j_49 = NULL;
                                                      t = e_7;
                                                      t = new_0_0(t);
                                                      h_48 = t;
                                                      t = bottomup_1_0(u_0, t);
                                                      d_49 = t;
                                                      t = (ATerm) ATempty;
                                                      t = u_0(t);
                                                      j_49 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(j_49), d_49);
                                                      t = u_0(t);
                                                      n_48 = t;
                                                      t = h_48;
                                                      t = bottomup_1_0(u_0, t);
                                                      b_49 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, b_49);
                                                      t = u_0(t);
                                                      a_49 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, a_49);
                                                      t = u_0(t);
                                                      p_48 = t;
                                                      t = d_7;
                                                      t = bottomup_1_0(u_0, t);
                                                      u_48 = t;
                                                      t = h_48;
                                                      t = bottomup_1_0(u_0, t);
                                                      z_48 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, z_48);
                                                      t = u_0(t);
                                                      y_48 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, y_48);
                                                      t = u_0(t);
                                                      x_48 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_48, x_48);
                                                      t = u_0(t);
                                                      q_48 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_48, q_48);
                                                      t = u_0(t);
                                                      o_48 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, n_48, o_48);
                                                      t = u_0(t);
                                                      ;
                                                      LocalPopChoice(b_29);
                                                    }
                                                  else
                                                    {
                                                      t = a_29;
                                                      t = e_7;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                a_7 = ATgetArgument(t, 0);
                                                b_7 = ATgetArgument(t, 1);
                                                t = b_7;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    f_6 = ATgetArgument(t, 0);
                                                    i_6 = ATgetArgument(t, 1);
                                                    t = f_6;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        g_6 = ATgetArgument(t, 0);
                                                        t = a_7;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            u_6 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm g_29 = t;
                                                              int l_29 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm o_49 = NULL,u_49 = NULL,v_49 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, g_6);
                                                                  t = u_0(t);
                                                                  v_49 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_49, i_6);
                                                                  t = u_0(t);
                                                                  u_49 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_6, u_49);
                                                                  t = u_0(t);
                                                                  o_49 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, o_49);
                                                                  t = u_0(t);
                                                                  ;
                                                                  LocalPopChoice(l_29);
                                                                }
                                                              else
                                                                {
                                                                  t = g_29;
                                                                  {
                                                                    ATerm m_29 = t;
                                                                    int o_29 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm z_49 = NULL,c_50 = NULL,d_50 = NULL,f_50 = NULL,g_50 = NULL,j_50 = NULL,n_50 = NULL,q_50 = NULL,r_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL;
                                                                        t = e_7;
                                                                        t = new_0_0(t);
                                                                        z_49 = t;
                                                                        t = bottomup_1_0(u_0, t);
                                                                        v_50 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = u_0(t);
                                                                        w_50 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(w_50), v_50);
                                                                        t = u_0(t);
                                                                        c_50 = t;
                                                                        t = z_49;
                                                                        t = bottomup_1_0(u_0, t);
                                                                        u_50 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, u_50);
                                                                        t = u_0(t);
                                                                        t_50 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, t_50);
                                                                        t = u_0(t);
                                                                        f_50 = t;
                                                                        t = d_7;
                                                                        t = bottomup_1_0(u_0, t);
                                                                        j_50 = t;
                                                                        t = z_49;
                                                                        t = bottomup_1_0(u_0, t);
                                                                        r_50 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, r_50);
                                                                        t = u_0(t);
                                                                        q_50 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, q_50);
                                                                        t = u_0(t);
                                                                        n_50 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, j_50, n_50);
                                                                        t = u_0(t);
                                                                        g_50 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, f_50, g_50);
                                                                        t = u_0(t);
                                                                        d_50 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, c_50, d_50);
                                                                        t = u_0(t);
                                                                        ;
                                                                        LocalPopChoice(o_29);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = m_29;
                                                                        t = e_7;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm p_29 = t;
                                                            int q_29 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL;
                                                                t = e_7;
                                                                t = new_0_0(t);
                                                                d_51 = t;
                                                                t = bottomup_1_0(u_0, t);
                                                                u_51 = t;
                                                                t = (ATerm) ATempty;
                                                                t = u_0(t);
                                                                v_51 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(v_51), u_51);
                                                                t = u_0(t);
                                                                e_51 = t;
                                                                t = d_51;
                                                                t = bottomup_1_0(u_0, t);
                                                                t_51 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, t_51);
                                                                t = u_0(t);
                                                                s_51 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, s_51);
                                                                t = u_0(t);
                                                                g_51 = t;
                                                                t = d_7;
                                                                t = bottomup_1_0(u_0, t);
                                                                i_51 = t;
                                                                t = d_51;
                                                                t = bottomup_1_0(u_0, t);
                                                                r_51 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, r_51);
                                                                t = u_0(t);
                                                                k_51 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, k_51);
                                                                t = u_0(t);
                                                                j_51 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_51, j_51);
                                                                t = u_0(t);
                                                                h_51 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, g_51, h_51);
                                                                t = u_0(t);
                                                                f_51 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, e_51, f_51);
                                                                t = u_0(t);
                                                                ;
                                                                LocalPopChoice(q_29);
                                                              }
                                                            else
                                                              {
                                                                t = p_29;
                                                                t = e_7;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = a_7;
                                                        {
                                                          ATerm r_29 = t;
                                                          int s_29 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL,l_52 = NULL,m_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL,u_52 = NULL;
                                                              t = e_7;
                                                              t = new_0_0(t);
                                                              y_51 = t;
                                                              t = bottomup_1_0(u_0, t);
                                                              s_52 = t;
                                                              t = (ATerm) ATempty;
                                                              t = u_0(t);
                                                              u_52 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(u_52), s_52);
                                                              t = u_0(t);
                                                              z_51 = t;
                                                              t = y_51;
                                                              t = bottomup_1_0(u_0, t);
                                                              r_52 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, r_52);
                                                              t = u_0(t);
                                                              q_52 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, q_52);
                                                              t = u_0(t);
                                                              b_52 = t;
                                                              t = d_7;
                                                              t = bottomup_1_0(u_0, t);
                                                              l_52 = t;
                                                              t = y_51;
                                                              t = bottomup_1_0(u_0, t);
                                                              p_52 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, p_52);
                                                              t = u_0(t);
                                                              o_52 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, o_52);
                                                              t = u_0(t);
                                                              m_52 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, l_52, m_52);
                                                              t = u_0(t);
                                                              c_52 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_52, c_52);
                                                              t = u_0(t);
                                                              a_52 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, z_51, a_52);
                                                              t = u_0(t);
                                                              ;
                                                              LocalPopChoice(s_29);
                                                            }
                                                          else
                                                            {
                                                              t = r_29;
                                                              t = e_7;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = a_7;
                                                    {
                                                      ATerm t_29 = t;
                                                      int u_29 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL;
                                                          t = e_7;
                                                          t = new_0_0(t);
                                                          b_53 = t;
                                                          t = bottomup_1_0(u_0, t);
                                                          r_53 = t;
                                                          t = (ATerm) ATempty;
                                                          t = u_0(t);
                                                          s_53 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(s_53), r_53);
                                                          t = u_0(t);
                                                          c_53 = t;
                                                          t = b_53;
                                                          t = bottomup_1_0(u_0, t);
                                                          q_53 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, q_53);
                                                          t = u_0(t);
                                                          k_53 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, k_53);
                                                          t = u_0(t);
                                                          e_53 = t;
                                                          t = d_7;
                                                          t = bottomup_1_0(u_0, t);
                                                          g_53 = t;
                                                          t = b_53;
                                                          t = bottomup_1_0(u_0, t);
                                                          j_53 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, j_53);
                                                          t = u_0(t);
                                                          i_53 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, i_53);
                                                          t = u_0(t);
                                                          h_53 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_53, h_53);
                                                          t = u_0(t);
                                                          f_53 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_53, f_53);
                                                          t = u_0(t);
                                                          d_53 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, c_53, d_53);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(u_29);
                                                        }
                                                      else
                                                        {
                                                          t = t_29;
                                                          t = e_7;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    a_7 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm w_29 = t;
                                                      int x_29 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, a_7);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(x_29);
                                                        }
                                                      else
                                                        {
                                                          t = w_29;
                                                          {
                                                            ATerm z_29 = t;
                                                            int b_30 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL,e_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL;
                                                                t = e_7;
                                                                t = new_0_0(t);
                                                                l_54 = t;
                                                                t = bottomup_1_0(u_0, t);
                                                                k_55 = t;
                                                                t = (ATerm) ATempty;
                                                                t = u_0(t);
                                                                l_55 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(l_55), k_55);
                                                                t = u_0(t);
                                                                m_54 = t;
                                                                t = l_54;
                                                                t = bottomup_1_0(u_0, t);
                                                                j_55 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, j_55);
                                                                t = u_0(t);
                                                                e_55 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, e_55);
                                                                t = u_0(t);
                                                                w_54 = t;
                                                                t = d_7;
                                                                t = bottomup_1_0(u_0, t);
                                                                y_54 = t;
                                                                t = l_54;
                                                                t = bottomup_1_0(u_0, t);
                                                                b_55 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, b_55);
                                                                t = u_0(t);
                                                                a_55 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, a_55);
                                                                t = u_0(t);
                                                                z_54 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, y_54, z_54);
                                                                t = u_0(t);
                                                                x_54 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, w_54, x_54);
                                                                t = u_0(t);
                                                                n_54 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, m_54, n_54);
                                                                t = u_0(t);
                                                                ;
                                                                LocalPopChoice(b_30);
                                                              }
                                                            else
                                                              {
                                                                t = z_29;
                                                                t = e_7;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm c_30 = t;
                                                    int d_30 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL,s_55 = NULL,u_55 = NULL,w_55 = NULL,x_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL;
                                                        t = e_7;
                                                        t = new_0_0(t);
                                                        o_55 = t;
                                                        t = bottomup_1_0(u_0, t);
                                                        d_56 = t;
                                                        t = (ATerm) ATempty;
                                                        t = u_0(t);
                                                        e_56 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(e_56), d_56);
                                                        t = u_0(t);
                                                        p_55 = t;
                                                        t = o_55;
                                                        t = bottomup_1_0(u_0, t);
                                                        c_56 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, c_56);
                                                        t = u_0(t);
                                                        b_56 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, b_56);
                                                        t = u_0(t);
                                                        s_55 = t;
                                                        t = d_7;
                                                        t = bottomup_1_0(u_0, t);
                                                        w_55 = t;
                                                        t = o_55;
                                                        t = bottomup_1_0(u_0, t);
                                                        a_56 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, a_56);
                                                        t = u_0(t);
                                                        z_55 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, z_55);
                                                        t = u_0(t);
                                                        x_55 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, w_55, x_55);
                                                        t = u_0(t);
                                                        u_55 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, s_55, u_55);
                                                        t = u_0(t);
                                                        q_55 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, p_55, q_55);
                                                        t = u_0(t);
                                                        ;
                                                        LocalPopChoice(d_30);
                                                      }
                                                    else
                                                      {
                                                        t = c_30;
                                                        t = e_7;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Match_1))
                                      {
                                        d_7 = ATgetArgument(t, 0);
                                        t = d_7;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm e_30 = t;
                                            int f_30 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_j_17;
                                                t = u_0(t);
                                                ;
                                                LocalPopChoice(f_30);
                                              }
                                            else
                                              {
                                                t = e_30;
                                                t = e_7;
                                              }
                                          }
                                        else
                                          {
                                            t = e_7;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            d_7 = ATgetArgument(t, 0);
                                            t = d_7;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm h_30 = t;
                                                int j_30 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_p_17;
                                                    t = u_0(t);
                                                    ;
                                                    LocalPopChoice(j_30);
                                                  }
                                                else
                                                  {
                                                    t = h_30;
                                                    t = e_7;
                                                  }
                                              }
                                            else
                                              {
                                                t = e_7;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                d_7 = ATgetArgument(t, 0);
                                                t = d_7;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm k_30 = t;
                                                    int l_30 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_p_17;
                                                        t = u_0(t);
                                                        ;
                                                        LocalPopChoice(l_30);
                                                      }
                                                    else
                                                      {
                                                        t = k_30;
                                                        t = e_7;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = e_7;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm m_30 = t;
                                                int n_30 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm q_30 = ATgetArgument(t, 0);
                                                        c_7 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(n_30);
                                                    t = c_7;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm r_30 = t;
                                                        int s_30 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_p_17;
                                                            t = u_0(t);
                                                            ;
                                                            LocalPopChoice(s_30);
                                                          }
                                                        else
                                                          {
                                                            t = r_30;
                                                            t = e_7;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = e_7;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = m_30;
                                                    {
                                                      ATerm y_30 = t;
                                                      int z_30 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm a_31 = ATgetArgument(t, 0);
                                                              c_7 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(z_30);
                                                          {
                                                            ATerm f_31 = t;
                                                            int g_31 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = c_7;
                                                                t = fetch_1_0(i_1, t);
                                                                t = term_p_17;
                                                                t = bottomup_1_0(u_0, t);
                                                                ;
                                                                LocalPopChoice(g_31);
                                                              }
                                                            else
                                                              {
                                                                t = f_31;
                                                                t = e_7;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = y_30;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              d_7 = ATgetArgument(t, 0);
                                                              c_7 = ATgetArgument(t, 1);
                                                              t = c_7;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = d_7;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = c_7;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          a_7 = ATgetArgument(t, 0);
                                                                          b_7 = ATgetArgument(t, 1);
                                                                          t = d_7;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = d_7;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = d_7;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = c_7;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          a_7 = ATgetArgument(t, 0);
                                                                          b_7 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm j_31 = t;
                                                                            int k_31 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm c_58 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, b_7, c_7);
                                                                                t = u_0(t);
                                                                                c_58 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, a_7, c_58);
                                                                                t = u_0(t);
                                                                                ;
                                                                                LocalPopChoice(k_31);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = j_31;
                                                                                {
                                                                                  ATerm l_31 = t;
                                                                                  int m_31 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = c_7;
                                                                                      if((d_7 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      ;
                                                                                      LocalPopChoice(m_31);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = l_31;
                                                                                      t = e_7;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm o_31 = t;
                                                                          int p_31 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = c_7;
                                                                              if((d_7 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              ;
                                                                              LocalPopChoice(p_31);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = o_31;
                                                                              t = e_7;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  d_7 = ATgetArgument(t, 0);
                                                                  c_7 = ATgetArgument(t, 1);
                                                                  e_6 = ATgetArgument(t, 2);
                                                                  t = e_6;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm r_31 = t;
                                                                      int s_31 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_7, c_7);
                                                                          t = u_0(t);
                                                                          ;
                                                                          LocalPopChoice(s_31);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = r_31;
                                                                          t = e_7;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = e_7;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      d_7 = ATgetArgument(t, 0);
                                                                      c_7 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm t_31 = t;
                                                                        int u_31 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, d_7, c_7);
                                                                            t = u_0(t);
                                                                            ;
                                                                            LocalPopChoice(u_31);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = t_31;
                                                                            t = e_7;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          d_7 = ATgetArgument(t, 0);
                                                                          t = d_7;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              a_7 = ATgetFirst((ATermList) t);
                                                                              b_7 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm v_31 = t;
                                                                                int x_31 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm t_58 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, b_7);
                                                                                    t = u_0(t);
                                                                                    t_58 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, a_7, t_58);
                                                                                    t = u_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(x_31);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = v_31;
                                                                                    t = e_7;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm z_31 = t;
                                                                                  int a_32 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_p_17;
                                                                                      t = u_0(t);
                                                                                      ;
                                                                                      LocalPopChoice(a_32);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = z_31;
                                                                                      t = e_7;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = e_7;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              d_7 = ATgetArgument(t, 0);
                                                                              t = d_7;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  a_7 = ATgetFirst((ATermList) t);
                                                                                  b_7 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm b_32 = t;
                                                                                    int c_32 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm c_59 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, b_7);
                                                                                        t = u_0(t);
                                                                                        c_59 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, a_7, c_59);
                                                                                        t = u_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(c_32);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = b_32;
                                                                                        t = e_7;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm d_32 = t;
                                                                                      int e_32 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_p_17;
                                                                                          t = u_0(t);
                                                                                          ;
                                                                                          LocalPopChoice(e_32);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = d_32;
                                                                                          t = e_7;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = e_7;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  d_7 = ATgetArgument(t, 0);
                                                                                  t = d_7;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      a_7 = ATgetFirst((ATermList) t);
                                                                                      b_7 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm f_32 = t;
                                                                                        int g_32 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm n_61 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, b_7);
                                                                                            t = u_0(t);
                                                                                            n_61 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, n_61);
                                                                                            t = u_0(t);
                                                                                            ;
                                                                                            LocalPopChoice(g_32);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = f_32;
                                                                                            t = e_7;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm h_32 = t;
                                                                                          int i_32 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_j_17;
                                                                                              t = u_0(t);
                                                                                              ;
                                                                                              LocalPopChoice(i_32);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = h_32;
                                                                                              t = e_7;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = e_7;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_RDefT_4))
                                                                                    {
                                                                                      d_7 = ATgetArgument(t, 0);
                                                                                      c_7 = ATgetArgument(t, 1);
                                                                                      e_6 = ATgetArgument(t, 2);
                                                                                      c_6 = ATgetArgument(t, 3);
                                                                                      {
                                                                                        ATerm j_32 = t;
                                                                                        int k_32 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm k_62 = NULL,m_62 = NULL;
                                                                                            t = c_7;
                                                                                            t = map1_1_0(j_1, t);
                                                                                            k_62 = t;
                                                                                            t = e_6;
                                                                                            t = map1_1_0(k_1, t);
                                                                                            m_62 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, d_7, k_62, m_62, c_6);
                                                                                            t = bottomup_1_0(u_0, t);
                                                                                            ;
                                                                                            LocalPopChoice(k_32);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = j_32;
                                                                                            t = e_7;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_SDefT_4))
                                                                                        {
                                                                                          d_7 = ATgetArgument(t, 0);
                                                                                          c_7 = ATgetArgument(t, 1);
                                                                                          e_6 = ATgetArgument(t, 2);
                                                                                          c_6 = ATgetArgument(t, 3);
                                                                                          {
                                                                                            ATerm l_32 = t;
                                                                                            int q_32 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm h_63 = NULL,j_63 = NULL;
                                                                                                t = e_6;
                                                                                                t = map1_1_0(l_1, t);
                                                                                                h_63 = t;
                                                                                                t = c_7;
                                                                                                t = map_1_0(m_1, t);
                                                                                                j_63 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_SDefT_4, d_7, j_63, h_63, c_6);
                                                                                                t = bottomup_1_0(u_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(q_32);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = l_32;
                                                                                                {
                                                                                                  ATerm r_32 = t;
                                                                                                  int s_32 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm z_63 = NULL,b_64 = NULL;
                                                                                                      t = c_7;
                                                                                                      t = map1_1_0(n_1, t);
                                                                                                      z_63 = t;
                                                                                                      t = e_6;
                                                                                                      t = map_1_0(o_1, t);
                                                                                                      b_64 = t;
                                                                                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, d_7, z_63, b_64, c_6);
                                                                                                      t = bottomup_1_0(u_0, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(s_32);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = r_32;
                                                                                                      t = e_7;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_InfixApp_3))
                                                                                            {
                                                                                              d_7 = ATgetArgument(t, 0);
                                                                                              c_7 = ATgetArgument(t, 1);
                                                                                              e_6 = ATgetArgument(t, 2);
                                                                                              {
                                                                                                ATerm t_32 = t;
                                                                                                int u_32 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm x_64 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL;
                                                                                                    t = term_v_32;
                                                                                                    t = bottomup_1_0(u_0, t);
                                                                                                    c_65 = t;
                                                                                                    t = (ATerm) ATempty;
                                                                                                    t = u_0(t);
                                                                                                    f_65 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(f_65), e_6);
                                                                                                    t = u_0(t);
                                                                                                    e_65 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(e_65), d_7);
                                                                                                    t = u_0(t);
                                                                                                    d_65 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Op_2, c_65, d_65);
                                                                                                    t = u_0(t);
                                                                                                    x_64 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_App_2, c_7, x_64);
                                                                                                    t = u_0(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(u_32);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = t_32;
                                                                                                    t = e_7;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_BAM_3))
                                                                                                {
                                                                                                  d_7 = ATgetArgument(t, 0);
                                                                                                  c_7 = ATgetArgument(t, 1);
                                                                                                  e_6 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm z_32 = t;
                                                                                                    int a_33 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm w_65 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, c_7);
                                                                                                        t = u_0(t);
                                                                                                        f_66 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, e_6);
                                                                                                        t = u_0(t);
                                                                                                        i_66 = t;
                                                                                                        t = (ATerm) ATempty;
                                                                                                        t = u_0(t);
                                                                                                        j_66 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(j_66), i_66);
                                                                                                        t = u_0(t);
                                                                                                        h_66 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(h_66), d_7);
                                                                                                        t = u_0(t);
                                                                                                        g_66 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(g_66), f_66);
                                                                                                        t = u_0(t);
                                                                                                        w_65 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, w_65);
                                                                                                        t = u_0(t);
                                                                                                        ;
                                                                                                        LocalPopChoice(a_33);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = z_32;
                                                                                                        t = e_7;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_AM_2))
                                                                                                    {
                                                                                                      d_7 = ATgetArgument(t, 0);
                                                                                                      c_7 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm b_33 = t;
                                                                                                        int c_33 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm n_66 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Match_1, c_7);
                                                                                                            t = u_0(t);
                                                                                                            n_66 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, d_7, n_66);
                                                                                                            t = u_0(t);
                                                                                                            ;
                                                                                                            LocalPopChoice(c_33);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = b_33;
                                                                                                            t = e_7;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_MA_2))
                                                                                                        {
                                                                                                          d_7 = ATgetArgument(t, 0);
                                                                                                          c_7 = ATgetArgument(t, 1);
                                                                                                          {
                                                                                                            ATerm d_33 = t;
                                                                                                            int e_33 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                ATerm r_66 = NULL;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, d_7);
                                                                                                                t = u_0(t);
                                                                                                                r_66 = t;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, r_66, c_7);
                                                                                                                t = u_0(t);
                                                                                                                ;
                                                                                                                LocalPopChoice(e_33);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = d_33;
                                                                                                                t = e_7;
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_BA_2))
                                                                                                            {
                                                                                                              d_7 = ATgetArgument(t, 0);
                                                                                                              c_7 = ATgetArgument(t, 1);
                                                                                                              {
                                                                                                                ATerm f_33 = t;
                                                                                                                int g_33 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    ATerm c_67 = NULL;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Build_1, c_7);
                                                                                                                    t = u_0(t);
                                                                                                                    c_67 = t;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, c_67, d_7);
                                                                                                                    t = u_0(t);
                                                                                                                    ;
                                                                                                                    LocalPopChoice(g_33);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = f_33;
                                                                                                                    t = e_7;
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_Let_2))
                                                                                                                {
                                                                                                                  d_7 = ATgetArgument(t, 0);
                                                                                                                  c_7 = ATgetArgument(t, 1);
                                                                                                                  t = c_7;
                                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                                    {
                                                                                                                      x_6 = ATgetArgument(t, 0);
                                                                                                                      y_6 = ATgetArgument(t, 1);
                                                                                                                      t = d_7;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = c_7;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          ATerm j_33 = t;
                                                                                                                          int m_33 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm x_67 = NULL;
                                                                                                                              t = (ATerm) ATmakeAppl(sym__2, d_7, x_6);
                                                                                                                              t = conc_0_0(t);
                                                                                                                              x_67 = t;
                                                                                                                              t = (ATerm) ATmakeAppl(sym_Let_2, x_67, y_6);
                                                                                                                              t = bottomup_1_0(u_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(m_33);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = j_33;
                                                                                                                              t = e_7;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_CallT_3))
                                                                                                                        {
                                                                                                                          x_6 = ATgetArgument(t, 0);
                                                                                                                          y_6 = ATgetArgument(t, 1);
                                                                                                                          r_6 = ATgetArgument(t, 2);
                                                                                                                          t = r_6;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = y_6;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = x_6;
                                                                                                                                  if(match_cons(t, sym_SVar_1))
                                                                                                                                    {
                                                                                                                                      v_6 = ATgetArgument(t, 0);
                                                                                                                                      t = d_7;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = c_7;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                            {
                                                                                                                                              a_7 = ATgetFirst((ATermList) t);
                                                                                                                                              b_7 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                              t = b_7;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = a_7;
                                                                                                                                                  if(match_cons(t, sym_SDefT_4))
                                                                                                                                                    {
                                                                                                                                                      u_6 = ATgetArgument(t, 0);
                                                                                                                                                      n_6 = ATgetArgument(t, 1);
                                                                                                                                                      j_6 = ATgetArgument(t, 2);
                                                                                                                                                      l_6 = ATgetArgument(t, 3);
                                                                                                                                                      t = j_6;
                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                        {
                                                                                                                                                          t = n_6;
                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                            {
                                                                                                                                                              ATerm n_33 = t;
                                                                                                                                                              int o_33 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  t = v_6;
                                                                                                                                                                  if((u_6 != t))
                                                                                                                                                                    {
                                                                                                                                                                      _fail(t);
                                                                                                                                                                    }
                                                                                                                                                                  t = l_6;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm p_33 = t;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        ATerm p_1 (ATerm t)
                                                                                                                                                                        {
                                                                                                                                                                          if(match_cons(t, sym_CallT_3))
                                                                                                                                                                            {
                                                                                                                                                                              ATerm s_33 = ATgetArgument(t, 0);
                                                                                                                                                                              if(match_cons(s_33, sym_SVar_1))
                                                                                                                                                                                {
                                                                                                                                                                                  if((u_6 != ATgetArgument(s_33, 0)))
                                                                                                                                                                                    {
                                                                                                                                                                                      _fail(ATgetArgument(s_33, 0));
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              {
                                                                                                                                                                                ATerm t_33 = ATgetArgument(t, 1);
                                                                                                                                                                                if(((ATgetType(t_33) != AT_LIST) || !(ATisEmpty(t_33))))
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                              }
                                                                                                                                                                              {
                                                                                                                                                                                ATerm u_33 = ATgetArgument(t, 2);
                                                                                                                                                                                if(((ATgetType(u_33) != AT_LIST) || !(ATisEmpty(u_33))))
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                              }
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          return(t);
                                                                                                                                                                        }
                                                                                                                                                                        t = oncetd_1_0(p_1, t);
                                                                                                                                                                        PopChoice();
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = p_33;
                                                                                                                                                                      }
                                                                                                                                                                    t = l_6;
                                                                                                                                                                    t = bottomup_1_0(u_0, t);
                                                                                                                                                                  }
                                                                                                                                                                  ;
                                                                                                                                                                  LocalPopChoice(o_33);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = n_33;
                                                                                                                                                                  t = e_7;
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = e_7;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = e_7;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = e_7;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = e_7;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = e_7;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = d_7;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = c_7;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = e_7;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = d_7;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                    {
                                                                                                                                      t = c_7;
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = e_7;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = d_7;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = c_7;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = e_7;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = d_7;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = c_7;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = e_7;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_As_2))
                                                                                                                    {
                                                                                                                      d_7 = ATgetArgument(t, 0);
                                                                                                                      c_7 = ATgetArgument(t, 1);
                                                                                                                      t = d_7;
                                                                                                                      if(match_cons(t, sym_Wld_0))
                                                                                                                        {
                                                                                                                          t = c_7;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = e_7;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = e_7;
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
                      }
                  }
              }
          }
      }
    return(t);
  }
  t = bottomup_1_0(u_0, t);
  return(t);
}
ATerm SubsArgCall2_0_0 (ATerm t)
{
  ATerm t_70 = NULL,x_70 = NULL,y_70 = NULL,a_71 = NULL,t_1 = NULL,u_1 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm v_33 = ATgetArgument(t, 0);
      if(match_cons(v_33, sym_SVar_1))
        {
          y_70 = ATgetArgument(v_33, 0);
        }
      else
        _fail(t);
      t_70 = ATgetArgument(t, 1);
      x_70 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_70), (ATerm)ATempty, (ATerm) ATempty);
  t_1 = t;
  t = term_w_33;
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_33, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_70), (ATerm)ATempty, (ATerm) ATempty));
  t = z_6(u_1, t_1, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm x_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_33) != ATmakeSymbol("n_0", 0, ATtrue)))
        _fail(t);
      a_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_71), t_70, x_70);
  return(t);
}
ATerm SubsArgCall1_0_0 (ATerm t)
{
  ATerm b_71 = NULL,h_71 = NULL,x_1 = NULL;
  b_71 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm z_33 = ATgetArgument(t, 0);
      if(match_cons(z_33, sym_SVar_1))
        {
          ATerm o_34 = ATgetArgument(z_33, 0);
        }
      else
        _fail(t);
      {
        ATerm a_34 = ATgetArgument(t, 1);
        if(((ATgetType(a_34) != AT_LIST) || !(ATisEmpty(a_34))))
          _fail(t);
      }
      {
        ATerm e_34 = ATgetArgument(t, 2);
        if(((ATgetType(e_34) != AT_LIST) || !(ATisEmpty(e_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_p_34;
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_34, b_71);
  t = z_6(x_1, b_71, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm q_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_34) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      h_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_71;
  t = strename_0_0(t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_w_33;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_p_34;
  return(t);
}
ATerm substitute_arg_0_0 (ATerm t)
{
  ATerm v_71 = NULL,c_72 = NULL,d_72 = NULL,f_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,o_72 = NULL,u_72 = NULL;
  h_72 = t;
  if(match_cons(t, sym__2))
    {
      i_72 = ATgetArgument(t, 0);
      u_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_72;
  if(match_cons(t, sym_VarDec_2))
    {
      j_72 = ATgetArgument(t, 0);
      k_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_72;
  if(match_cons(t, sym_FunType_2))
    {
      l_72 = ATgetArgument(t, 0);
      {
        ATerm r_34 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = l_72;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_34 = ATgetFirst((ATermList) t);
      o_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_72;
  {
    ATerm v_34 = t;
    int w_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm x_34 = ATgetFirst((ATermList) t);
            ATerm y_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(w_34);
        {
          ATerm e_73 = NULL,f_73 = NULL;
          t = u_72;
          if(match_cons(t, sym_CallT_3))
            {
              v_71 = ATgetArgument(t, 0);
              d_72 = ATgetArgument(t, 1);
              f_72 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = v_71;
          if(match_cons(t, sym_SVar_1))
            {
              c_72 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_72;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = f_72;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_72), (ATerm)ATempty, (ATerm) ATempty);
          e_73 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_34, c_72);
          f_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_72), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_z_34, c_72));
          t = l_14(q_1, e_73, f_73, t);
          t = h_72;
        }
      }
    else
      {
        t = v_34;
        {
          ATerm m_73 = NULL,n_73 = NULL;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_72), (ATerm)ATempty, (ATerm) ATempty);
          m_73 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_35, u_72);
          n_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_72), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_a_35, u_72));
          t = l_14(r_1, m_73, n_73, t);
          t = h_72;
        }
      }
  }
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_p_34;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_w_33;
  return(t);
}
ATerm b_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_35 = ATgetArgument(t, 0);
      if(((ATgetType(b_35) != AT_LIST) || !(ATisEmpty(b_35))))
        _fail(t);
      {
        ATerm e_35 = ATgetArgument(t, 1);
        if(((ATgetType(e_35) != AT_LIST) || !(ATisEmpty(e_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_35 = ATgetArgument(t, 0);
      if(((ATgetType(f_35) == AT_LIST) && !(ATisEmpty(f_35))))
        {
          e_74 = ATgetFirst((ATermList) f_35);
          f_74 = (ATerm) ATgetNext((ATermList) f_35);
        }
      else
        _fail(t);
      {
        ATerm g_35 = ATgetArgument(t, 1);
        if(((ATgetType(g_35) == AT_LIST) && !(ATisEmpty(g_35))))
          {
            g_74 = ATgetFirst((ATermList) g_35);
            h_74 = (ATerm) ATgetNext((ATermList) g_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_74, g_74), (ATerm) ATmakeAppl(sym__2, f_74, h_74));
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm m_74 = NULL,o_74 = NULL;
  if(match_cons(t, sym__2))
    {
      m_74 = ATgetArgument(t, 0);
      o_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_74), m_74);
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm i_35 = t;
  int j_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_35 = t;
      int n_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SubsArgCall1_0_0(t);
          ;
          LocalPopChoice(n_35);
        }
      else
        {
          t = m_35;
          t = SubsArgCall2_0_0(t);
        }
      ;
      LocalPopChoice(j_35);
    }
  else
    {
      t = i_35;
    }
  return(t);
}
ATerm substitute_args_0_0 (ATerm t)
{
  ATerm s_73 = NULL,u_73 = NULL,d_74 = NULL;
  ATerm w_1 (ATerm t)
  {
    ATerm a_2 (ATerm t)
    {
      if(match_cons(t, sym__3))
        {
          if(((s_73 != NULL) && (s_73 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            s_73 = ATgetArgument(t, 0);
          if(((u_73 != NULL) && (u_73 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            u_73 = ATgetArgument(t, 1);
          if(((d_74 != NULL) && (d_74 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            d_74 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, s_73, u_73);
      t = genzip_4_0(b_2, d_2, e_2, substitute_arg_0_0, t);
      t = d_74;
      t = topdown_1_0(h_2, t);
      return(t);
    }
    t = scope_2_0(z_1, a_2, t);
    return(t);
  }
  t = scope_2_0(s_1, w_1, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_35 = ATgetArgument(t, 0);
      if(((ATgetType(p_35) != AT_LIST) || !(ATisEmpty(p_35))))
        _fail(t);
      {
        ATerm q_35 = ATgetArgument(t, 1);
        if(((ATgetType(q_35) != AT_LIST) || !(ATisEmpty(q_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_35 = ATgetArgument(t, 0);
      if(((ATgetType(s_35) == AT_LIST) && !(ATisEmpty(s_35))))
        {
          i_2 = ATgetFirst((ATermList) s_35);
          j_2 = (ATerm) ATgetNext((ATermList) s_35);
        }
      else
        _fail(t);
      {
        ATerm u_35 = ATgetArgument(t, 1);
        if(((ATgetType(u_35) == AT_LIST) && !(ATisEmpty(u_35))))
          {
            k_2 = ATgetFirst((ATermList) u_35);
            l_2 = (ATerm) ATgetNext((ATermList) u_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_2, k_2), (ATerm) ATmakeAppl(sym__2, j_2, l_2));
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL;
  if(match_cons(t, sym__2))
    {
      m_2 = ATgetArgument(t, 0);
      n_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_2), m_2);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm p_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL;
  if(match_cons(t, sym__2))
    {
      p_2 = ATgetArgument(t, 0);
      u_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_2;
  {
    ATerm v_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm z_35 = ATgetArgument(t, 0);
            r_2 = ATgetArgument(t, 1);
            s_2 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(y_35);
        t = (ATerm) ATmakeAppl(sym_SDef_3, u_2, r_2, s_2);
      }
    else
      {
        t = v_35;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm c_36 = ATgetArgument(t, 0);
            r_2 = ATgetArgument(t, 1);
            s_2 = ATgetArgument(t, 2);
            t_2 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, u_2, r_2, s_2, t_2);
      }
  }
  return(t);
}
ATerm x_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_36 = ATgetArgument(t, 0);
      if(((ATgetType(e_36) != AT_LIST) || !(ATisEmpty(e_36))))
        _fail(t);
      {
        ATerm g_36 = ATgetArgument(t, 1);
        if(((ATgetType(g_36) != AT_LIST) || !(ATisEmpty(g_36))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_36 = ATgetArgument(t, 0);
      if(((ATgetType(i_36) == AT_LIST) && !(ATisEmpty(i_36))))
        {
          q_3 = ATgetFirst((ATermList) i_36);
          r_3 = (ATerm) ATgetNext((ATermList) i_36);
        }
      else
        _fail(t);
      {
        ATerm j_36 = ATgetArgument(t, 1);
        if(((ATgetType(j_36) == AT_LIST) && !(ATisEmpty(j_36))))
          {
            s_3 = ATgetFirst((ATermList) j_36);
            t_3 = (ATerm) ATgetNext((ATermList) j_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_3, s_3), (ATerm) ATmakeAppl(sym__2, r_3, t_3));
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL;
  if(match_cons(t, sym__2))
    {
      u_3 = ATgetArgument(t, 0);
      v_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_3), u_3);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm x_3 = NULL,z_3 = NULL,a_4 = NULL;
  if(match_cons(t, sym__2))
    {
      x_3 = ATgetArgument(t, 0);
      a_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_3;
  {
    ATerm k_36 = t;
    int m_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm q_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_36);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, a_4);
      }
    else
      {
        t = k_36;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm r_36 = ATgetArgument(t, 0);
            z_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, a_4, z_3);
      }
  }
  return(t);
}
ATerm b_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_37 = ATgetArgument(t, 0);
      if(((ATgetType(c_37) != AT_LIST) || !(ATisEmpty(c_37))))
        _fail(t);
      {
        ATerm d_37 = ATgetArgument(t, 1);
        if(((ATgetType(d_37) != AT_LIST) || !(ATisEmpty(d_37))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_37 = ATgetArgument(t, 0);
      if(((ATgetType(e_37) == AT_LIST) && !(ATisEmpty(e_37))))
        {
          v_4 = ATgetFirst((ATermList) e_37);
          w_4 = (ATerm) ATgetNext((ATermList) e_37);
        }
      else
        _fail(t);
      {
        ATerm f_37 = ATgetArgument(t, 1);
        if(((ATgetType(f_37) == AT_LIST) && !(ATisEmpty(f_37))))
          {
            x_4 = ATgetFirst((ATermList) f_37);
            y_4 = (ATerm) ATgetNext((ATermList) f_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_4, x_4), (ATerm) ATmakeAppl(sym__2, w_4, y_4));
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL;
  if(match_cons(t, sym__2))
    {
      z_4 = ATgetArgument(t, 0);
      a_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_5), z_4);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm c_5 = NULL,e_5 = NULL,f_5 = NULL;
  if(match_cons(t, sym__2))
    {
      c_5 = ATgetArgument(t, 0);
      f_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5;
  {
    ATerm g_37 = t;
    int l_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm n_37 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(l_37);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, f_5);
      }
    else
      {
        t = g_37;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm q_37 = ATgetArgument(t, 0);
            e_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, f_5, e_5);
      }
  }
  return(t);
}
ATerm f_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_37 = ATgetArgument(t, 0);
      if(((ATgetType(r_37) != AT_LIST) || !(ATisEmpty(r_37))))
        _fail(t);
      {
        ATerm t_37 = ATgetArgument(t, 1);
        if(((ATgetType(t_37) != AT_LIST) || !(ATisEmpty(t_37))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_37 = ATgetArgument(t, 0);
      if(((ATgetType(w_37) == AT_LIST) && !(ATisEmpty(w_37))))
        {
          y_7 = ATgetFirst((ATermList) w_37);
          z_7 = (ATerm) ATgetNext((ATermList) w_37);
        }
      else
        _fail(t);
      {
        ATerm x_37 = ATgetArgument(t, 1);
        if(((ATgetType(x_37) == AT_LIST) && !(ATisEmpty(x_37))))
          {
            a_8 = ATgetFirst((ATermList) x_37);
            b_8 = (ATerm) ATgetNext((ATermList) x_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_7, a_8), (ATerm) ATmakeAppl(sym__2, z_7, b_8));
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL;
  if(match_cons(t, sym__2))
    {
      c_8 = ATgetArgument(t, 0);
      d_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_8), c_8);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm f_8 = NULL,h_8 = NULL,i_8 = NULL;
  if(match_cons(t, sym__2))
    {
      f_8 = ATgetArgument(t, 0);
      i_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_8;
  {
    ATerm y_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm c_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(z_37);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_8);
      }
    else
      {
        t = y_37;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm d_38 = ATgetArgument(t, 0);
            h_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, i_8, h_8);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm x_95 (ATerm), ATerm t)
{
  ATerm s_82 = NULL,t_82 = NULL,v_82 = NULL,w_82 = NULL,y_82 = NULL;
  v_82 = t;
  if(match_cons(t, sym_Let_2))
    {
      w_82 = ATgetArgument(t, 0);
      y_82 = ATgetArgument(t, 1);
      {
        ATerm c_2 = NULL,f_2 = NULL,g_2 = NULL,t_0 = NULL;
        t = SSLgetAnnotations(v_82);
        c_2 = t;
        t = w_82;
        t = x_95(t);
        g_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_82, g_2);
        t = genzip_4_0(o_2, q_2, v_2, w_2, t);
        f_2 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, f_2, y_82);
        t_0 = t;
        t = SSLsetAnnotations(t_0, c_2);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          w_82 = ATgetArgument(t, 0);
          y_82 = ATgetArgument(t, 1);
          s_82 = ATgetArgument(t, 2);
          {
            ATerm j_3 = NULL,n_3 = NULL,o_3 = NULL,x_0 = NULL;
            t = SSLgetAnnotations(v_82);
            j_3 = t;
            t = y_82;
            t = x_95(t);
            o_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_82, o_3);
            t = genzip_4_0(x_2, y_2, z_2, a_3, t);
            n_3 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, w_82, n_3, s_82);
            x_0 = t;
            t = SSLsetAnnotations(x_0, j_3);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              w_82 = ATgetArgument(t, 0);
              y_82 = ATgetArgument(t, 1);
              s_82 = ATgetArgument(t, 2);
              t_82 = ATgetArgument(t, 3);
              {
                ATerm n_4 = NULL,s_4 = NULL,t_4 = NULL,v_1 = NULL;
                t = SSLgetAnnotations(v_82);
                n_4 = t;
                t = y_82;
                t = x_95(t);
                t_4 = t;
                t = (ATerm) ATmakeAppl(sym__2, y_82, t_4);
                t = genzip_4_0(b_3, c_3, d_3, e_3, t);
                s_4 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, w_82, s_4, s_82, t_82);
                v_1 = t;
                t = SSLsetAnnotations(v_1, n_4);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  w_82 = ATgetArgument(t, 0);
                  y_82 = ATgetArgument(t, 1);
                  s_82 = ATgetArgument(t, 2);
                  t_82 = ATgetArgument(t, 3);
                  {
                    ATerm h_7 = NULL,v_7 = NULL,w_7 = NULL,y_1 = NULL;
                    t = SSLgetAnnotations(v_82);
                    h_7 = t;
                    t = y_82;
                    t = x_95(t);
                    w_7 = t;
                    t = (ATerm) ATmakeAppl(sym__2, y_82, w_7);
                    t = genzip_4_0(f_3, g_3, h_3, i_3, t);
                    v_7 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, w_82, v_7, s_82, t_82);
                    y_1 = t;
                    t = SSLsetAnnotations(y_1, h_7);
                  }
                }
              else
                {
                  ATerm w_8 = NULL,z_8 = NULL,k_5 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      w_82 = ATgetArgument(t, 0);
                      y_82 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_82);
                  w_8 = t;
                  t = w_82;
                  t = x_95(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      z_8 = ATgetFirst((ATermList) t);
                      {
                        ATerm e_38 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, z_8, y_82);
                  k_5 = t;
                  t = SSLsetAnnotations(k_5, w_8);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm y_95 (ATerm), ATerm z_95 (ATerm), ATerm a_96 (ATerm), ATerm t)
{
  ATerm q_85 = NULL,s_85 = NULL,v_85 = NULL,w_85 = NULL,x_85 = NULL;
  v_85 = t;
  if(match_cons(t, sym_Let_2))
    {
      w_85 = ATgetArgument(t, 0);
      x_85 = ATgetArgument(t, 1);
      {
        ATerm i_9 = NULL,l_9 = NULL,m_9 = NULL,r_5 = NULL;
        t = SSLgetAnnotations(v_85);
        i_9 = t;
        t = w_85;
        t = y_95(t);
        l_9 = t;
        t = x_85;
        t = y_95(t);
        m_9 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, l_9, m_9);
        r_5 = t;
        t = SSLsetAnnotations(r_5, i_9);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          w_85 = ATgetArgument(t, 0);
          x_85 = ATgetArgument(t, 1);
          q_85 = ATgetArgument(t, 2);
          {
            ATerm v_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,s_5 = NULL;
            t = SSLgetAnnotations(v_85);
            v_9 = t;
            t = w_85;
            t = a_96(t);
            z_9 = t;
            t = x_85;
            t = a_96(t);
            a_10 = t;
            t = q_85;
            t = y_95(t);
            b_10 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, z_9, a_10, b_10);
            s_5 = t;
            t = SSLsetAnnotations(s_5, v_9);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              w_85 = ATgetArgument(t, 0);
              x_85 = ATgetArgument(t, 1);
              q_85 = ATgetArgument(t, 2);
              s_85 = ATgetArgument(t, 3);
              {
                ATerm n_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,t_5 = NULL;
                t = SSLgetAnnotations(v_85);
                n_10 = t;
                t = w_85;
                t = a_96(t);
                z_10 = t;
                t = x_85;
                t = a_96(t);
                a_11 = t;
                t = q_85;
                t = a_96(t);
                b_11 = t;
                t = s_85;
                t = y_95(t);
                c_11 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, z_10, a_11, b_11, c_11);
                t_5 = t;
                t = SSLsetAnnotations(t_5, n_10);
              }
            }
          else
            {
              ATerm v_11 = NULL,z_11 = NULL,a_12 = NULL,u_5 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  w_85 = ATgetArgument(t, 0);
                  x_85 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(v_85);
              v_11 = t;
              t = w_85;
              t = a_96(t);
              z_11 = t;
              t = x_85;
              t = y_95(t);
              a_12 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, z_11, a_12);
              u_5 = t;
              t = SSLsetAnnotations(u_5, v_11);
            }
        }
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm f_86 = NULL;
  ATerm f_38 = t;
  int g_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          f_86 = ATgetArgument(t, 0);
          {
            ATerm h_38 = ATgetArgument(t, 1);
          }
          {
            ATerm i_38 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_38);
      t = f_86;
    }
  else
    {
      t = f_38;
      if(match_cons(t, sym_SDefT_4))
        {
          f_86 = ATgetArgument(t, 0);
          {
            ATerm k_38 = ATgetArgument(t, 1);
          }
          {
            ATerm l_38 = ATgetArgument(t, 2);
          }
          {
            ATerm m_38 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = f_86;
    }
  return(t);
}
ATerm p_13 (ATerm v_22, ATerm u_22, ATerm t)
{
  t = v_22;
  t = map_1_0(k_3, t);
  return(t);
}
ATerm SVar_1_0 (ATerm e_85 (ATerm), ATerm t)
{
  ATerm p_86 = NULL,q_86 = NULL,r_86 = NULL,s_86 = NULL,a_6 = NULL;
  s_86 = t;
  if(match_cons(t, sym_SVar_1))
    {
      q_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_86);
  p_86 = t;
  t = q_86;
  t = e_85(t);
  r_86 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, r_86);
  a_6 = t;
  t = SSLsetAnnotations(a_6, p_86);
  return(t);
}
ATerm b_14 (ATerm i_110 (ATerm), ATerm j_110 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm w_39, ATerm v_39, ATerm u_39, ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    ATerm u_86 = NULL;
    u_86 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_86, u_39);
    t = i_110(t);
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    ATerm v_86 = NULL;
    v_86 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_86, v_39);
    t = i_110(t);
    return(t);
  }
  t = w_39;
  t = j_110(l_3, m_3, _id, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm p_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_38 = ATgetArgument(t, 0);
      if(((ATgetType(n_38) != AT_LIST) || !(ATisEmpty(n_38))))
        _fail(t);
      {
        ATerm o_38 = ATgetArgument(t, 1);
        if(((ATgetType(o_38) != AT_LIST) || !(ATisEmpty(o_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm h_87 = NULL,i_87 = NULL,j_87 = NULL,k_87 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_38 = ATgetArgument(t, 0);
      if(((ATgetType(p_38) == AT_LIST) && !(ATisEmpty(p_38))))
        {
          h_87 = ATgetFirst((ATermList) p_38);
          i_87 = (ATerm) ATgetNext((ATermList) p_38);
        }
      else
        _fail(t);
      {
        ATerm q_38 = ATgetArgument(t, 1);
        if(((ATgetType(q_38) == AT_LIST) && !(ATisEmpty(q_38))))
          {
            j_87 = ATgetFirst((ATermList) q_38);
            k_87 = (ATerm) ATgetNext((ATermList) q_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_87, j_87), (ATerm) ATmakeAppl(sym__2, i_87, k_87));
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm l_87 = NULL,m_87 = NULL;
  if(match_cons(t, sym__2))
    {
      l_87 = ATgetArgument(t, 0);
      m_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_87), l_87);
  return(t);
}
ATerm c_14 (ATerm c_110 (ATerm), ATerm d_110 (ATerm (ATerm), ATerm), ATerm o_39, ATerm r_39, ATerm t)
{
  ATerm y_86 = NULL,z_86 = NULL,a_87 = NULL,d_87 = NULL,f_87 = NULL;
  t = o_39;
  t = c_110(t);
  y_86 = t;
  t = map_1_0(new_0_0, t);
  z_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_86, z_86);
  t = genzip_4_0(p_3, w_3, y_3, _id, t);
  f_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_87, r_39);
  t = conc_0_0(t);
  a_87 = t;
  t = o_39;
  {
    ATerm b_4 (ATerm t)
    {
      t = z_86;
      return(t);
    }
    t = d_110(b_4, t);
    d_87 = t;
    t = (ATerm) ATmakeAppl(sym__3, d_87, r_39, a_87);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm t_87 = NULL,u_87 = NULL,v_87 = NULL,w_87 = NULL,x_87 = NULL,y_87 = NULL,z_87 = NULL;
  v_87 = t;
  if(match_cons(t, sym__2))
    {
      w_87 = ATgetArgument(t, 0);
      x_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_87;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_87 = ATgetFirst((ATermList) t);
      z_87 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_87;
  if(match_cons(t, sym__2))
    {
      t_87 = ATgetArgument(t, 0);
      u_87 = ATgetArgument(t, 1);
      {
        ATerm r_38 = t;
        int s_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_87;
            if((w_87 != t))
              {
                _fail(t);
              }
            t = u_87;
            ;
            LocalPopChoice(s_38);
          }
        else
          {
            t = r_38;
            t = (ATerm) ATmakeAppl(sym__2, w_87, z_87);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, w_87, z_87);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm q_110 (ATerm), ATerm t)
{
  ATerm z_88 (ATerm t)
  {
    ATerm u_38 = t;
    int v_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_110(t);
        ;
        LocalPopChoice(v_38);
      }
    else
      {
        t = u_38;
        {
          ATerm w_88 = NULL,x_88 = NULL,y_88 = NULL;
          ATerm c_4 (ATerm t)
          {
            ATerm k_12 = NULL;
            k_12 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_12, not_null(y_88));
            t = z_88(t);
            return(t);
          }
          w_88 = t;
          if(match_cons(t, sym__2))
            {
              x_88 = ATgetArgument(t, 0);
              if(((y_88 != NULL) && (y_88 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                y_88 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_88;
          t = SRTS_all(c_4, t);
        }
      }
    return(t);
  }
  t = z_88(t);
  return(t);
}
ATerm rename_4_0 (ATerm x_109 (ATerm (ATerm), ATerm), ATerm y_109 (ATerm), ATerm z_109 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm a_110 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm d_89 = NULL;
  ATerm w_89 (ATerm t)
  {
    ATerm d_4 (ATerm t)
    {
      ATerm m_89 = NULL,n_89 = NULL,o_89 = NULL;
      m_89 = t;
      if(match_cons(t, sym__2))
        {
          n_89 = ATgetArgument(t, 0);
          o_89 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm w_38 = t;
        int y_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_4 (ATerm t)
            {
              ATerm t_89 = NULL;
              t_89 = t;
              t = (ATerm) ATmakeAppl(sym__2, t_89, o_89);
              t = lookup_0_0(t);
              return(t);
            }
            t = n_89;
            t = x_109(e_4, t);
            ;
            LocalPopChoice(y_38);
          }
        else
          {
            t = w_38;
            {
              ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
              t = m_89;
              t = c_14(y_109, a_110, n_89, o_89, t);
              if(match_cons(t, sym__3))
                {
                  t_12 = ATgetArgument(t, 0);
                  u_12 = ATgetArgument(t, 1);
                  v_12 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = b_14(w_89, z_109, t_12, u_12, v_12, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(d_4, t);
    return(t);
  }
  d_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_89, (ATerm) ATempty);
  t = w_89(t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_38 = ATgetArgument(t, 0);
      if(((ATgetType(z_38) != AT_LIST) || !(ATisEmpty(z_38))))
        _fail(t);
      {
        ATerm c_39 = ATgetArgument(t, 1);
        if(((ATgetType(c_39) != AT_LIST) || !(ATisEmpty(c_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm f_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_39 = ATgetArgument(t, 0);
      if(((ATgetType(e_39) == AT_LIST) && !(ATisEmpty(e_39))))
        {
          f_19 = ATgetFirst((ATermList) e_39);
          h_19 = (ATerm) ATgetNext((ATermList) e_39);
        }
      else
        _fail(t);
      {
        ATerm g_39 = ATgetArgument(t, 1);
        if(((ATgetType(g_39) == AT_LIST) && !(ATisEmpty(g_39))))
          {
            i_19 = ATgetFirst((ATermList) g_39);
            j_19 = (ATerm) ATgetNext((ATermList) g_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_19, i_19), (ATerm) ATmakeAppl(sym__2, h_19, j_19));
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL;
  if(match_cons(t, sym__2))
    {
      k_19 = ATgetArgument(t, 0);
      l_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_19), k_19);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm v_19 = NULL,c_20 = NULL,g_20 = NULL;
  if(match_cons(t, sym__2))
    {
      v_19 = ATgetArgument(t, 0);
      g_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_19;
  {
    ATerm j_39 = t;
    int k_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm l_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(k_39);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_20);
      }
    else
      {
        t = j_39;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm n_39 = ATgetArgument(t, 0);
            c_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, g_20, c_20);
      }
  }
  return(t);
}
ATerm j_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_39 = ATgetArgument(t, 0);
      if(((ATgetType(p_39) != AT_LIST) || !(ATisEmpty(p_39))))
        _fail(t);
      {
        ATerm q_39 = ATgetArgument(t, 1);
        if(((ATgetType(q_39) != AT_LIST) || !(ATisEmpty(q_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,n_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_39 = ATgetArgument(t, 0);
      if(((ATgetType(s_39) == AT_LIST) && !(ATisEmpty(s_39))))
        {
          j_21 = ATgetFirst((ATermList) s_39);
          k_21 = (ATerm) ATgetNext((ATermList) s_39);
        }
      else
        _fail(t);
      {
        ATerm t_39 = ATgetArgument(t, 1);
        if(((ATgetType(t_39) == AT_LIST) && !(ATisEmpty(t_39))))
          {
            l_21 = ATgetFirst((ATermList) t_39);
            n_21 = (ATerm) ATgetNext((ATermList) t_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_21, l_21), (ATerm) ATmakeAppl(sym__2, k_21, n_21));
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL;
  if(match_cons(t, sym__2))
    {
      o_21 = ATgetArgument(t, 0);
      p_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_21), o_21);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm s_21 = NULL,u_21 = NULL,v_21 = NULL;
  if(match_cons(t, sym__2))
    {
      s_21 = ATgetArgument(t, 0);
      v_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_21;
  {
    ATerm x_39 = t;
    int y_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm z_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_39);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, v_21);
      }
    else
      {
        t = x_39;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm a_40 = ATgetArgument(t, 0);
            u_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, v_21, u_21);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm t_95 (ATerm), ATerm t)
{
  ATerm f_94 = NULL,g_94 = NULL,h_94 = NULL,i_94 = NULL,j_94 = NULL;
  f_94 = t;
  if(match_cons(t, sym_Scope_2))
    {
      g_94 = ATgetArgument(t, 0);
      h_94 = ATgetArgument(t, 1);
      {
        ATerm f_13 = NULL,j_13 = NULL,e_29 = NULL;
        t = SSLgetAnnotations(f_94);
        f_13 = t;
        t = g_94;
        t = t_95(t);
        j_13 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, j_13, h_94);
        e_29 = t;
        t = SSLsetAnnotations(e_29, f_13);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          g_94 = ATgetArgument(t, 0);
          h_94 = ATgetArgument(t, 1);
          i_94 = ATgetArgument(t, 2);
          j_94 = ATgetArgument(t, 3);
          {
            ATerm r_18 = NULL,c_19 = NULL,d_19 = NULL,f_29 = NULL;
            t = SSLgetAnnotations(f_94);
            r_18 = t;
            t = i_94;
            t = t_95(t);
            d_19 = t;
            t = (ATerm) ATmakeAppl(sym__2, i_94, d_19);
            t = genzip_4_0(f_4, g_4, h_4, i_4, t);
            c_19 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, g_94, h_94, c_19, j_94);
            f_29 = t;
            t = SSLsetAnnotations(f_29, r_18);
          }
        }
      else
        {
          ATerm a_21 = NULL,g_21 = NULL,h_21 = NULL,h_29 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              g_94 = ATgetArgument(t, 0);
              h_94 = ATgetArgument(t, 1);
              i_94 = ATgetArgument(t, 2);
              j_94 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_94);
          a_21 = t;
          t = i_94;
          t = t_95(t);
          h_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_94, h_21);
          t = genzip_4_0(j_4, k_4, l_4, m_4, t);
          g_21 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, g_94, h_94, g_21, j_94);
          h_29 = t;
          t = SSLsetAnnotations(h_29, a_21);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm t)
{
  ATerm u_97 = NULL,a_98 = NULL,d_98 = NULL,g_98 = NULL,j_98 = NULL;
  g_98 = t;
  if(match_cons(t, sym_Scope_2))
    {
      j_98 = ATgetArgument(t, 0);
      u_97 = ATgetArgument(t, 1);
      {
        ATerm t_22 = NULL,y_22 = NULL,z_22 = NULL,u_30 = NULL;
        t = SSLgetAnnotations(g_98);
        t_22 = t;
        t = j_98;
        t = w_95(t);
        y_22 = t;
        t = u_97;
        t = u_95(t);
        z_22 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, y_22, z_22);
        u_30 = t;
        t = SSLsetAnnotations(u_30, t_22);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          j_98 = ATgetArgument(t, 0);
          u_97 = ATgetArgument(t, 1);
          a_98 = ATgetArgument(t, 2);
          d_98 = ATgetArgument(t, 3);
          {
            ATerm g_24 = NULL,p_24 = NULL,q_24 = NULL,z_24 = NULL,b_25 = NULL,v_30 = NULL;
            t = SSLgetAnnotations(g_98);
            g_24 = t;
            t = j_98;
            t = w_95(t);
            p_24 = t;
            t = u_97;
            t = w_95(t);
            q_24 = t;
            t = a_98;
            t = w_95(t);
            z_24 = t;
            t = d_98;
            t = u_95(t);
            b_25 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, p_24, q_24, z_24, b_25);
            v_30 = t;
            t = SSLsetAnnotations(v_30, g_24);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              j_98 = ATgetArgument(t, 0);
              u_97 = ATgetArgument(t, 1);
              a_98 = ATgetArgument(t, 2);
              d_98 = ATgetArgument(t, 3);
              {
                ATerm s_25 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,w_30 = NULL;
                t = SSLgetAnnotations(g_98);
                s_25 = t;
                t = j_98;
                t = w_95(t);
                c_26 = t;
                t = u_97;
                t = w_95(t);
                d_26 = t;
                t = a_98;
                t = w_95(t);
                e_26 = t;
                t = d_98;
                t = u_95(t);
                f_26 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, c_26, d_26, e_26, f_26);
                w_30 = t;
                t = SSLsetAnnotations(w_30, s_25);
              }
            }
          else
            {
              ATerm x_26 = NULL,d_27 = NULL,x_30 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  j_98 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(g_98);
              x_26 = t;
              t = j_98;
              t = u_95(t);
              d_27 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, d_27);
              x_30 = t;
              t = SSLsetAnnotations(x_30, x_26);
            }
        }
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm w_98 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_98);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm b_40 = t;
  int e_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(e_40);
    }
  else
    {
      t = b_40;
      {
        ATerm b_99 = NULL,c_99 = NULL,d_99 = NULL,e_99 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            b_99 = ATgetArgument(t, 0);
            t = b_99;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                b_99 = ATgetArgument(t, 0);
                c_99 = ATgetArgument(t, 1);
                d_99 = ATgetArgument(t, 2);
                e_99 = ATgetArgument(t, 3);
                t = d_99;
                t = map_1_0(q_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    b_99 = ATgetArgument(t, 0);
                    c_99 = ATgetArgument(t, 1);
                    d_99 = ATgetArgument(t, 2);
                    e_99 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = d_99;
                t = map_1_0(r_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm n_99 = NULL;
  ATerm f_40 = t;
  int g_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_99 = ATgetArgument(t, 0);
          {
            ATerm h_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_40);
      t = n_99;
    }
  else
    {
      t = f_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_99 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_99;
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm y_99 = NULL;
  ATerm i_40 = t;
  int k_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_99 = ATgetArgument(t, 0);
          {
            ATerm l_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_40);
      t = y_99;
    }
  else
    {
      t = i_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_99 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_99;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(o_4, p_4, tboundin_3_0, t);
  return(t);
}
ATerm v_13 (ATerm h_105 (ATerm), ATerm e_31, ATerm d_31, ATerm t)
{
  ATerm z_100 (ATerm t)
  {
    ATerm u_100 = NULL,v_100 = NULL,w_100 = NULL;
    u_100 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_31;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_100 = ATgetFirst((ATermList) t);
            w_100 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm m_40 = t;
          int n_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_100;
              {
                ATerm u_4 (ATerm t)
                {
                  t = d_31;
                  return(t);
                }
                t = w_13(h_105, u_4, v_100, w_100, t);
                t = z_100(t);
              }
              ;
              LocalPopChoice(n_40);
            }
          else
            {
              t = m_40;
              {
                ATerm n_27 = NULL,s_27 = NULL,q_31 = NULL;
                t = SSLgetAnnotations(u_100);
                n_27 = t;
                t = w_100;
                t = z_100(t);
                s_27 = t;
                t = (ATerm) ATinsert(CheckATermList(s_27), v_100);
                q_31 = t;
                t = SSLsetAnnotations(q_31, n_27);
              }
            }
        }
      }
    return(t);
  }
  t = e_31;
  t = z_100(t);
  return(t);
}
ATerm w_13 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm i_31, ATerm h_31, ATerm t)
{
  t = l_105(t);
  {
    ATerm b_5 (ATerm t)
    {
      ATerm b_101 = NULL;
      b_101 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_31, b_101);
      t = k_105(t);
      return(t);
    }
    t = fetch_1_0(b_5, t);
    t = h_31;
  }
  return(t);
}
ATerm x_13 (ATerm c_105 (ATerm), ATerm c_31, ATerm b_31, ATerm t)
{
  ATerm x_101 (ATerm t)
  {
    ATerm r_101 = NULL,s_101 = NULL,t_101 = NULL;
    r_101 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_101;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_101 = ATgetFirst((ATermList) t);
            t_101 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm o_40 = t;
          int p_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_101;
              {
                ATerm d_5 (ATerm t)
                {
                  t = b_31;
                  return(t);
                }
                t = w_13(c_105, d_5, s_101, t_101, t);
                t = x_101(t);
              }
              ;
              LocalPopChoice(p_40);
            }
          else
            {
              t = o_40;
              {
                ATerm p_28 = NULL,s_28 = NULL,y_31 = NULL;
                t = SSLgetAnnotations(r_101);
                p_28 = t;
                t = t_101;
                t = x_101(t);
                s_28 = t;
                t = (ATerm) ATinsert(CheckATermList(s_28), s_101);
                y_31 = t;
                t = SSLsetAnnotations(y_31, p_28);
              }
            }
        }
      }
    return(t);
  }
  t = c_31;
  t = x_101(t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_40 = ATgetArgument(t, 0);
      if(((ATgetType(q_40) != AT_LIST) || !(ATisEmpty(q_40))))
        _fail(t);
      {
        ATerm r_40 = ATgetArgument(t, 1);
        if(((ATgetType(r_40) != AT_LIST) || !(ATisEmpty(r_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm f_102 = NULL,g_102 = NULL,h_102 = NULL,i_102 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_40 = ATgetArgument(t, 0);
      if(((ATgetType(s_40) == AT_LIST) && !(ATisEmpty(s_40))))
        {
          f_102 = ATgetFirst((ATermList) s_40);
          g_102 = (ATerm) ATgetNext((ATermList) s_40);
        }
      else
        _fail(t);
      {
        ATerm u_40 = ATgetArgument(t, 1);
        if(((ATgetType(u_40) == AT_LIST) && !(ATisEmpty(u_40))))
          {
            h_102 = ATgetFirst((ATermList) u_40);
            i_102 = (ATerm) ATgetNext((ATermList) u_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_102, h_102), (ATerm) ATmakeAppl(sym__2, g_102, i_102));
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm j_102 = NULL,k_102 = NULL;
  if(match_cons(t, sym__2))
    {
      j_102 = ATgetArgument(t, 0);
      k_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_102), j_102);
  return(t);
}
ATerm z_13 (ATerm w_547, ATerm b_548, ATerm z_53, ATerm t)
{
  ATerm a_102 = NULL,b_102 = NULL,c_102 = NULL,d_102 = NULL;
  t = SSL_explode_term(b_548);
  if(match_cons(t, sym__2))
    {
      a_102 = ATgetArgument(t, 0);
      c_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(w_547);
  if(match_cons(t, sym__2))
    {
      if((a_102 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      b_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_102, c_102);
  t = genzip_4_0(g_5, h_5, i_5, _id, t);
  d_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_102, z_53);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm l_114 (ATerm), ATerm m_114 (ATerm), ATerm t)
{
  ATerm m_102 (ATerm t)
  {
    ATerm v_40 = t;
    int w_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_114(t);
        ;
        LocalPopChoice(w_40);
      }
    else
      {
        t = v_40;
        t = m_114(t);
        t = m_102(t);
      }
    return(t);
  }
  t = m_102(t);
  return(t);
}
ATerm for_3_0 (ATerm o_114 (ATerm), ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm t)
{
  t = o_114(t);
  t = while_not_2_0(p_114, q_114, t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm w_102 = NULL;
  w_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, w_102);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm x_102 = NULL,y_102 = NULL,z_102 = NULL,a_103 = NULL,o_32 = NULL;
  a_103 = t;
  if(match_cons(t, sym__2))
    {
      y_102 = ATgetArgument(t, 0);
      z_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_103);
  x_102 = t;
  t = z_102;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_102, z_102);
  o_32 = t;
  t = SSLsetAnnotations(o_32, x_102);
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm x_103 = NULL,y_103 = NULL,z_103 = NULL,a_104 = NULL,b_104 = NULL;
  x_103 = t;
  if(match_cons(t, sym__2))
    {
      y_103 = ATgetArgument(t, 0);
      z_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_103;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_104 = ATgetFirst((ATermList) t);
      b_104 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_40 = t;
        int y_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_104(y_103, z_103, x_103, t);
            ;
            LocalPopChoice(y_40);
          }
        else
          {
            t = x_40;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_103), a_104), b_104);
          }
      }
    }
  else
    {
      t = n_104(y_103, z_103, x_103, t);
    }
  return(t);
}
ATerm n_104 (ATerm b_103, ATerm c_103, ATerm d_103, ATerm t)
{
  ATerm g_103 = NULL,j_103 = NULL,y_32 = NULL,o_103 = NULL,p_103 = NULL,q_103 = NULL,r_103 = NULL;
  t = SSLgetAnnotations(d_103);
  g_103 = t;
  t = c_103;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_103 = ATgetFirst((ATermList) t);
      r_103 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_103;
  if(match_cons(t, sym__2))
    {
      p_103 = ATgetArgument(t, 0);
      q_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_40 = t;
    int b_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_103;
        if((p_103 != t))
          {
            _fail(t);
          }
        t = r_103;
        ;
        LocalPopChoice(b_41);
      }
    else
      {
        t = z_40;
        t = c_103;
        t = z_13(p_103, q_103, r_103, t);
      }
    j_103 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_103, j_103);
    y_32 = t;
    t = SSLsetAnnotations(y_32, g_103);
  }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm m_104 = NULL;
  if(match_cons(t, sym__2))
    {
      m_104 = ATgetArgument(t, 0);
      if((m_104 != ATgetArgument(t, 1)))
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
  ATerm c_41 = t;
  int d_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(j_5, l_5, m_5, t);
      ;
      LocalPopChoice(d_41);
    }
  else
    {
      t = c_41;
      {
        ATerm h_104 = NULL,i_104 = NULL,j_104 = NULL;
        h_104 = t;
        if(match_cons(t, sym__2))
          {
            i_104 = ATgetArgument(t, 0);
            j_104 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_104;
        t = x_13(n_5, i_104, j_104, t);
      }
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL;
  if(match_cons(t, sym__2))
    {
      i_29 = ATgetArgument(t, 0);
      j_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_13(w_5, i_29, j_29, t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm k_29 = NULL;
  if(match_cons(t, sym__2))
    {
      k_29 = ATgetArgument(t, 0);
      if((k_29 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm i_30 = NULL,p_30 = NULL;
  if(match_cons(t, sym__2))
    {
      i_30 = ATgetArgument(t, 0);
      p_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_13(z_5, i_30, p_30, t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm t_30 = NULL;
  if(match_cons(t, sym__2))
    {
      t_30 = ATgetArgument(t, 0);
      if((t_30 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm a_112 (ATerm), ATerm b_112 (ATerm), ATerm c_112 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm b_105 (ATerm t)
  {
    ATerm e_41 = t;
    int f_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_112(t);
        ;
        LocalPopChoice(f_41);
      }
    else
      {
        t = e_41;
        {
          ATerm h_41 = t;
          int i_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_104 = NULL,q_104 = NULL,c_29 = NULL,d_29 = NULL;
              p_104 = t;
              t = b_112(t);
              q_104 = t;
              t = p_104;
              {
                ATerm o_5 (ATerm t)
                {
                  ATerm s_104 = NULL;
                  t = b_105(t);
                  s_104 = t;
                  t = (ATerm) ATmakeAppl(sym__2, s_104, q_104);
                  t = diff_0_0(t);
                  return(t);
                }
                t = c_112(o_5, b_105, p_5, t);
                d_29 = t;
                t = SSL_explode_term(d_29);
                if(match_cons(t, sym__2))
                  {
                    ATerm j_41 = ATgetArgument(t, 0);
                    c_29 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_29;
                t = foldr_3_0(q_5, v_5, _id, t);
              }
              ;
              LocalPopChoice(i_41);
            }
          else
            {
              t = h_41;
              {
                ATerm v_29 = NULL,y_29 = NULL;
                y_29 = t;
                t = SSL_explode_term(y_29);
                if(match_cons(t, sym__2))
                  {
                    ATerm k_41 = ATgetArgument(t, 0);
                    v_29 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = v_29;
                t = foldr_3_0(x_5, y_5, b_105, t);
              }
            }
        }
      }
    return(t);
  }
  t = b_105(t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm a_106 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_106);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm l_41 = t;
  int m_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(m_41);
    }
  else
    {
      t = l_41;
      {
        ATerm c_106 = NULL,d_106 = NULL,e_106 = NULL,f_106 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            c_106 = ATgetArgument(t, 0);
            t = c_106;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                c_106 = ATgetArgument(t, 0);
                d_106 = ATgetArgument(t, 1);
                e_106 = ATgetArgument(t, 2);
                f_106 = ATgetArgument(t, 3);
                t = e_106;
                t = map_1_0(h_6, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    c_106 = ATgetArgument(t, 0);
                    d_106 = ATgetArgument(t, 1);
                    e_106 = ATgetArgument(t, 2);
                    f_106 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = e_106;
                t = map_1_0(k_6, t);
              }
          }
      }
    }
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm o_106 = NULL;
  ATerm n_41 = t;
  int o_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_106 = ATgetArgument(t, 0);
          {
            ATerm p_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_41);
      t = o_106;
    }
  else
    {
      t = n_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_106 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_106;
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm x_106 = NULL;
  ATerm q_41 = t;
  int s_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_106 = ATgetArgument(t, 0);
          {
            ATerm t_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_41);
      t = x_106;
    }
  else
    {
      t = q_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_106 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_106;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm n_105 = NULL,x_105 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      x_105 = ATgetArgument(t, 0);
      t = x_105;
      if(match_cons(t, sym_Rule_3))
        {
          n_105 = ATgetArgument(t, 0);
          {
            ATerm x_41 = ATgetArgument(t, 1);
          }
          {
            ATerm y_41 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = n_105;
      t = free_vars_3_0(b_6, d_6, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          x_105 = ATgetArgument(t, 0);
          {
            ATerm z_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = x_105;
    }
  return(t);
}
ATerm Var_1_0 (ATerm v_81 (ATerm), ATerm t)
{
  ATerm b_107 = NULL,c_107 = NULL,d_107 = NULL,e_107 = NULL,t_35 = NULL;
  e_107 = t;
  if(match_cons(t, sym_Var_1))
    {
      c_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_107);
  b_107 = t;
  t = c_107;
  t = v_81(t);
  d_107 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, d_107);
  t_35 = t;
  t = SSLsetAnnotations(t_35, b_107);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm a_42 = t;
  int b_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(b_42);
    }
  else
    {
      t = a_42;
      {
        ATerm o_107 = NULL,p_107 = NULL,q_107 = NULL,r_107 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            o_107 = ATgetArgument(t, 0);
            p_107 = ATgetArgument(t, 1);
            q_107 = ATgetArgument(t, 2);
            r_107 = ATgetArgument(t, 3);
            t = q_107;
            t = map_1_0(t_6, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                o_107 = ATgetArgument(t, 0);
                p_107 = ATgetArgument(t, 1);
                q_107 = ATgetArgument(t, 2);
                r_107 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = q_107;
            t = map_1_0(w_6, t);
          }
      }
    }
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm d_108 = NULL;
  ATerm c_42 = t;
  int d_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_108 = ATgetArgument(t, 0);
          {
            ATerm e_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_42);
      t = d_108;
    }
  else
    {
      t = c_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_108 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_108;
    }
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm m_108 = NULL;
  ATerm f_42 = t;
  int g_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_108 = ATgetArgument(t, 0);
          {
            ATerm h_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_42);
      t = m_108;
    }
  else
    {
      t = f_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_108 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_108;
    }
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm p_108 = NULL,q_108 = NULL,r_108 = NULL,s_108 = NULL,t_108 = NULL;
  p_108 = t;
  if(match_cons(t, sym_Let_2))
    {
      q_108 = ATgetArgument(t, 0);
      r_108 = ATgetArgument(t, 1);
      t = p_108;
      t = p_13(q_108, r_108, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          q_108 = ATgetArgument(t, 0);
          r_108 = ATgetArgument(t, 1);
          s_108 = ATgetArgument(t, 2);
          t = r_108;
          t = map_1_0(g_7, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              q_108 = ATgetArgument(t, 0);
              r_108 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, q_108);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  q_108 = ATgetArgument(t, 0);
                  r_108 = ATgetArgument(t, 1);
                  s_108 = ATgetArgument(t, 2);
                  t_108 = ATgetArgument(t, 3);
                  t = r_108;
                  t = map_1_0(i_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_108 = ATgetArgument(t, 0);
                      r_108 = ATgetArgument(t, 1);
                      s_108 = ATgetArgument(t, 2);
                      t_108 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_108;
                  t = map_1_0(r_7, t);
                }
            }
        }
    }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm b_109 = NULL;
  ATerm i_42 = t;
  int j_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_109 = ATgetArgument(t, 0);
          {
            ATerm k_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_42);
      t = b_109;
    }
  else
    {
      t = i_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_109 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_109;
    }
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm s_109 = NULL;
  ATerm l_42 = t;
  int m_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_109 = ATgetArgument(t, 0);
          {
            ATerm o_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_42);
      t = s_109;
    }
  else
    {
      t = l_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_109 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_109;
    }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm k_110 = NULL;
  ATerm p_42 = t;
  int q_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_110 = ATgetArgument(t, 0);
          {
            ATerm r_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_42);
      t = k_110;
    }
  else
    {
      t = p_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_110;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, o_6, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, f_7, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm f_34 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      f_34 = ATgetArgument(t, 0);
      {
        ATerm s_42 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = f_34;
  return(t);
}
ATerm u_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_42 = ATgetArgument(t, 0);
      if(((ATgetType(t_42) != AT_LIST) || !(ATisEmpty(t_42))))
        _fail(t);
      {
        ATerm u_42 = ATgetArgument(t, 1);
        if(((ATgetType(u_42) != AT_LIST) || !(ATisEmpty(u_42))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_42 = ATgetArgument(t, 0);
      if(((ATgetType(v_42) == AT_LIST) && !(ATisEmpty(v_42))))
        {
          g_34 = ATgetFirst((ATermList) v_42);
          h_34 = (ATerm) ATgetNext((ATermList) v_42);
        }
      else
        _fail(t);
      {
        ATerm w_42 = ATgetArgument(t, 1);
        if(((ATgetType(w_42) == AT_LIST) && !(ATisEmpty(w_42))))
          {
            i_34 = ATgetFirst((ATermList) w_42);
            j_34 = (ATerm) ATgetNext((ATermList) w_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_34, i_34), (ATerm) ATmakeAppl(sym__2, h_34, j_34));
  return(t);
}
ATerm e_8 (ATerm t)
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
ATerm g_8 (ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL;
  if(match_cons(t, sym__2))
    {
      m_34 = ATgetArgument(t, 0);
      n_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_34), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_34))));
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = term_x_42;
  return(t);
}
ATerm InlineCall_0_0 (ATerm t)
{
  ATerm j_112 = NULL,k_112 = NULL,l_112 = NULL,m_112 = NULL,n_112 = NULL;
  j_112 = t;
  if(match_cons(t, sym_CallT_3))
    {
      k_112 = ATgetArgument(t, 0);
      m_112 = ATgetArgument(t, 1);
      n_112 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_112;
  if(match_cons(t, sym_SVar_1))
    {
      l_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_42 = t;
    int b_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_32 = NULL,n_32 = NULL;
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_112), (ATerm)ATempty, (ATerm) ATempty);
        m_32 = t;
        t = term_x_42;
        n_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_42, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_112), (ATerm)ATempty, (ATerm) ATempty));
        t = z_6(n_32, m_32, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(b_43);
      }
    else
      {
        t = z_42;
        {
          ATerm c_43 = t;
          int d_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_32 = NULL,x_32 = NULL;
              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_112), (ATerm)ATempty, (ATerm) ATempty);
              w_32 = t;
              t = term_x_42;
              x_32 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_x_42, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_112), (ATerm)ATempty, (ATerm) ATempty));
              t = z_6(x_32, w_32, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(d_43);
            }
          else
            {
              t = c_43;
              {
                ATerm e_43 = t;
                int h_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_33 = NULL,i_33 = NULL,k_33 = NULL,l_33 = NULL,q_33 = NULL,y_33 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,t_34 = NULL,u_34 = NULL;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_112), (ATerm)ATempty, (ATerm) ATempty);
                    t_34 = t;
                    t = term_x_42;
                    u_34 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_x_42, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_112), (ATerm)ATempty, (ATerm) ATempty));
                    t = z_6(u_34, t_34, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm j_43 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) j_43) != ATmakeSymbol("d_0", 0, ATtrue)))
                          _fail(t);
                        h_33 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = h_33;
                    t = strename_0_0(t);
                    if(match_cons(t, sym_SDefT_4))
                      {
                        if((l_112 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        i_33 = ATgetArgument(t, 1);
                        l_33 = ATgetArgument(t, 2);
                        k_33 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__3, i_33, m_112, k_33);
                    t = substitute_args_0_0(t);
                    y_33 = t;
                    t = l_33;
                    t = map_1_0(t_7, t);
                    q_33 = t;
                    t = (ATerm) ATmakeAppl(sym__2, n_112, q_33);
                    t = genzip_4_0(u_7, x_7, e_8, g_8, t);
                    b_34 = t;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_112), (ATerm)ATempty, (ATerm) ATempty);
                    c_34 = t;
                    t = term_k_43;
                    d_34 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_112), (ATerm)ATempty, (ATerm) ATempty), term_k_43);
                    t = l_14(j_8, c_34, d_34, t);
                    t = (ATerm) ATmakeAppl(sym_Scope_2, q_33, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_34), y_33));
                    t = simplify_0_0(t);
                    ;
                    LocalPopChoice(h_43);
                  }
                else
                  {
                    t = e_43;
                    {
                      ATerm c_35 = NULL,d_35 = NULL;
                      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_112), (ATerm)ATempty, (ATerm) ATempty);
                      c_35 = t;
                      t = term_x_42;
                      d_35 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_x_42, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_112), (ATerm)ATempty, (ATerm) ATempty));
                      t = z_6(d_35, c_35, t);
                      if(!(match_cons(t, sym_Undefined_0)))
                        _fail(t);
                      _fail(t);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_l_43;
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL;
  if(match_cons(t, sym__2))
    {
      a_36 = ATgetArgument(t, 0);
      b_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_16(a_36, b_36, t);
  return(t);
}
ATerm occurrences_1_0 (ATerm o_105 (ATerm), ATerm t)
{
  ATerm s_112 = NULL,t_112 = NULL,u_112 = NULL,r_35 = NULL;
  u_112 = t;
  {
    ATerm m_43 = t;
    int n_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_105(t);
        t = term_k_15;
        ;
        LocalPopChoice(n_43);
      }
    else
      {
        t = m_43;
        t = term_l_43;
      }
    s_112 = t;
    t = SSL_explode_term(u_112);
    if(match_cons(t, sym__2))
      {
        ATerm q_43 = ATgetArgument(t, 0);
        r_35 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = r_35;
    {
      ATerm m_8 (ATerm t)
      {
        t = occurrences_1_0(o_105, t);
        return(t);
      }
      t = foldr_3_0(k_8, l_8, m_8, t);
      t_112 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_112, t_112);
      t = f_16(s_112, t_112, t);
    }
  }
  return(t);
}
ATerm h_14 (ATerm y_94 (ATerm), ATerm y_21, ATerm x_21, ATerm t)
{
  ATerm x_112 = NULL,y_112 = NULL;
  x_112 = t;
  t = x_21;
  {
    ATerm s_43 = t;
    if((PushChoice() == 0))
      {
        ATerm o_8 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm u_43 = ATgetArgument(t, 0);
              if(match_cons(u_43, sym_SVar_1))
                {
                  if((y_21 != ATgetArgument(u_43, 0)))
                    {
                      _fail(ATgetArgument(u_43, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm v_43 = ATgetArgument(t, 1);
              }
              {
                ATerm w_43 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(o_8, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_43;
      }
    t = y_94(t);
    {
      ATerm p_8 (ATerm t)
      {
        if(match_cons(t, sym_CallT_3))
          {
            ATerm x_43 = ATgetArgument(t, 0);
            if(match_cons(x_43, sym_SVar_1))
              {
                if((y_21 != ATgetArgument(x_43, 0)))
                  {
                    _fail(ATgetArgument(x_43, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm y_43 = ATgetArgument(t, 1);
            }
            {
              ATerm z_43 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        return(t);
      }
      t = occurrences_1_0(p_8, t);
      y_112 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_112, term_k_15);
      t = leq_0_0(t);
      t = x_112;
    }
  }
  return(t);
}
ATerm k_14 (ATerm o_37, ATerm p_37, ATerm t)
{
  ATerm z_112 = NULL,a_113 = NULL;
  a_113 = t;
  {
    ATerm c_44 = t;
    int d_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
        t = h_16(o_37, p_37, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_44 = ATgetFirst((ATermList) t);
            z_112 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(d_44);
        t = SSL_table_put(o_37, p_37, z_112);
        t = (ATerm) ATmakeAppl(sym__3, o_37, p_37, z_112);
      }
    else
      {
        t = c_44;
        t = SSL_table_remove(o_37, p_37);
        t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
      }
    t = a_113;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm e_109 (ATerm), ATerm t)
{
  ATerm b_113 = NULL,c_113 = NULL,d_113 = NULL,e_113 = NULL,f_113 = NULL;
  e_113 = t;
  t = e_109(t);
  d_113 = t;
  {
    ATerm f_44 = t;
    int g_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_113 = NULL;
        t = term_h_44;
        g_113 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_113, term_h_44);
        t = h_16(d_113, g_113, t);
        ;
        LocalPopChoice(g_44);
      }
    else
      {
        t = f_44;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_113 = ATgetFirst((ATermList) t);
        b_113 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_h_44;
    f_113 = t;
    t = SSL_table_put(d_113, f_113, b_113);
    t = c_113;
    {
      ATerm q_8 (ATerm t)
      {
        ATerm h_113 = NULL;
        h_113 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_113, h_113);
        t = k_14(d_113, h_113, t);
        return(t);
      }
      t = map_1_0(q_8, t);
      t = e_113;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm t)
{
  ATerm i_44 = t;
  int k_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_100(t);
      t = b_100(t);
      ;
      LocalPopChoice(k_44);
    }
  else
    {
      t = i_44;
      t = b_100(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm d_109 (ATerm), ATerm t)
{
  ATerm j_113 = NULL,k_113 = NULL,l_113 = NULL,m_113 = NULL,n_113 = NULL;
  k_113 = t;
  t = d_109(t);
  j_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_113, term_h_44);
  {
    ATerm l_44 = t;
    int m_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_113 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_44 = ATgetArgument(t, 0);
            ATerm p_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_h_44;
        r_113 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_113, term_h_44);
        t = h_16(j_113, r_113, t);
        ;
        LocalPopChoice(m_44);
      }
    else
      {
        t = l_44;
        t = (ATerm) ATempty;
      }
    l_113 = t;
    t = term_h_44;
    m_113 = t;
    t = (ATerm) ATinsert(CheckATermList(l_113), (ATerm) ATempty);
    n_113 = t;
    t = SSL_table_put(j_113, m_113, n_113);
    t = k_113;
  }
  return(t);
}
ATerm scope_2_0 (ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm t)
{
  ATerm r_8 (ATerm t)
  {
    t = end_scope_1_0(f_109, t);
    return(t);
  }
  t = begin_scope_1_0(f_109, t);
  t = restore_always_2_0(g_109, r_8, t);
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = term_x_42;
  return(t);
}
ATerm v_8 (ATerm t)
{
  t = term_q_44;
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_x_42;
  return(t);
}
ATerm inline_sdef_0_0 (ATerm t)
{
  ATerm t_8 (ATerm t)
  {
    ATerm x_8 (ATerm t)
    {
      ATerm r_44 = t;
      int s_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_113 = NULL,y_113 = NULL,z_113 = NULL;
          v_113 = t;
          {
            ATerm v_44 = t;
            int w_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    y_113 = ATgetArgument(t, 0);
                    {
                      ATerm x_44 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm y_44 = ATgetArgument(t, 2);
                    }
                    {
                      ATerm z_44 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(w_44);
                {
                  ATerm c_114 = NULL,d_114 = NULL;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_113), (ATerm)ATempty, (ATerm) ATempty);
                  c_114 = t;
                  t = term_k_43;
                  d_114 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_113), (ATerm)ATempty, (ATerm) ATempty), term_k_43);
                  t = l_14(y_8, c_114, d_114, t);
                  t = v_113;
                }
              }
            else
              {
                t = v_44;
                if(match_cons(t, sym_Let_2))
                  {
                    y_113 = ATgetArgument(t, 0);
                    z_113 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_113;
                {
                  ATerm a_9 (ATerm t)
                  {
                    ATerm g_114 = NULL,h_114 = NULL;
                    if(match_cons(t, sym_SDefT_4))
                      {
                        g_114 = ATgetArgument(t, 0);
                        {
                          ATerm a_45 = ATgetArgument(t, 1);
                        }
                        {
                          ATerm b_45 = ATgetArgument(t, 2);
                        }
                        h_114 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    {
                      ATerm c_9 (ATerm t)
                      {
                        t = z_113;
                        return(t);
                      }
                      t = h_14(c_9, g_114, h_114, t);
                      t = AddSDef_0_0(t);
                    }
                    return(t);
                  }
                  t = map_1_0(a_9, t);
                  t = (ATerm) ATmakeAppl(sym_Let_2, y_113, z_113);
                }
              }
          }
          ;
          LocalPopChoice(s_44);
        }
      else
        {
          t = r_44;
          t = repeat_1_0(InlineCall_0_0, t);
        }
      t = SRTS_all(inline_sdef_0_0, t);
      return(t);
    }
    t = scope_2_0(v_8, x_8, t);
    return(t);
  }
  t = scope_2_0(s_8, t_8, t);
  return(t);
}
ATerm l_14 (ATerm h_109 (ATerm), ATerm b_37, ATerm z_36, ATerm t)
{
  ATerm j_114 = NULL,k_114 = NULL,r_114 = NULL,s_114 = NULL,t_114 = NULL,u_114 = NULL;
  s_114 = t;
  t = h_109(t);
  j_114 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_114, b_37, z_36);
  t = i_16(j_114, b_37, z_36, t);
  {
    ATerm c_45 = t;
    int d_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_114 = NULL;
        t = term_h_44;
        v_114 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_114, term_h_44);
        t = h_16(j_114, v_114, t);
        ;
        LocalPopChoice(d_45);
      }
    else
      {
        t = c_45;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_114 = ATgetFirst((ATermList) t);
        r_114 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_h_44;
    t_114 = t;
    t = (ATerm) ATinsert(CheckATermList(r_114), (ATerm) ATinsert(CheckATermList(k_114), b_37));
    u_114 = t;
    t = SSL_table_put(j_114, t_114, u_114);
    t = s_114;
  }
  return(t);
}
ATerm d_9 (ATerm t)
{
  t = term_x_42;
  return(t);
}
ATerm e_9 (ATerm t)
{
  t = term_q_44;
  return(t);
}
ATerm AddSDef_0_0 (ATerm t)
{
  ATerm w_114 = NULL,x_114 = NULL,y_114 = NULL,z_114 = NULL,a_115 = NULL,b_115 = NULL,c_115 = NULL;
  x_114 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      w_114 = ATgetArgument(t, 0);
      {
        ATerm e_45 = ATgetArgument(t, 1);
      }
      {
        ATerm f_45 = ATgetArgument(t, 2);
      }
      {
        ATerm g_45 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  y_114 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, w_114), (ATerm)ATempty, (ATerm) ATempty);
  b_115 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_45, x_114);
  c_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, w_114), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_h_45, x_114));
  t = l_14(d_9, b_115, c_115, t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, w_114), (ATerm)ATempty, (ATerm) ATempty);
  z_114 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_45, x_114);
  a_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, w_114), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_j_45, x_114));
  t = l_14(e_9, z_114, a_115, t);
  t = y_114;
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm k_45 = t;
  if((PushChoice() == 0))
    {
      ATerm d_115 = NULL,f_115 = NULL;
      if(match_cons(t, sym__2))
        {
          d_115 = ATgetArgument(t, 0);
          f_115 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, d_115, f_115);
      {
        ATerm l_45 = t;
        int m_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(d_115, f_115);
            ;
            LocalPopChoice(m_45);
          }
        else
          {
            t = l_45;
            t = SSL_gtr(d_115, f_115);
          }
        t = (ATerm) ATmakeAppl(sym__2, d_115, f_115);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_45;
    }
  return(t);
}
ATerm foldr_3_0 (ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm z_107 (ATerm), ATerm t)
{
  ATerm h_115 = NULL,i_115 = NULL,j_115 = NULL;
  h_115 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_115;
      t = x_107(t);
    }
  else
    {
      ATerm m_115 = NULL,n_115 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_115 = ATgetFirst((ATermList) t);
          j_115 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_115;
      t = z_107(t);
      m_115 = t;
      t = j_115;
      t = foldr_3_0(x_107, y_107, z_107, t);
      n_115 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_115, n_115);
      t = y_107(t);
    }
  return(t);
}
ATerm f_9 (ATerm t)
{
  t = term_k_15;
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm p_36 = NULL,s_36 = NULL;
  if(match_cons(t, sym__2))
    {
      p_36 = ATgetArgument(t, 0);
      s_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_16(p_36, s_36, t);
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = term_k_15;
  return(t);
}
ATerm j_9 (ATerm t)
{
  ATerm y_36 = NULL,a_37 = NULL;
  if(match_cons(t, sym__2))
    {
      y_36 = ATgetArgument(t, 0);
      a_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_16(y_36, a_37, t);
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  ATerm o_45 = t;
  int p_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_36 = NULL,f_36 = NULL;
      f_36 = t;
      t = SSL_explode_term(f_36);
      if(match_cons(t, sym__2))
        {
          ATerm q_45 = ATgetArgument(t, 0);
          d_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_36;
      t = foldr_3_0(f_9, g_9, term_size_0_0, t);
      ;
      LocalPopChoice(p_45);
    }
  else
    {
      t = o_45;
      {
        ATerm u_115 (ATerm t)
        {
          ATerm t_36 = NULL,u_36 = NULL;
          u_36 = t;
          t = SSL_explode_term(u_36);
          if(match_cons(t, sym__2))
            {
              ATerm s_45 = ATgetArgument(t, 0);
              t_36 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_36;
          t = foldr_3_0(h_9, j_9, u_115, t);
          return(t);
        }
        t = u_115(t);
      }
    }
  return(t);
}
ATerm Seq_2_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm t)
{
  ATerm v_115 = NULL,w_115 = NULL,x_115 = NULL,y_115 = NULL,z_115 = NULL,a_116 = NULL,w_35 = NULL;
  a_116 = t;
  if(match_cons(t, sym_Seq_2))
    {
      w_115 = ATgetArgument(t, 0);
      x_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_116);
  v_115 = t;
  t = w_115;
  t = t_85(t);
  y_115 = t;
  t = x_115;
  t = u_85(t);
  z_115 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, y_115, z_115);
  w_35 = t;
  t = SSLsetAnnotations(w_35, v_115);
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm o_43 = NULL,r_43 = NULL,t_43 = NULL,u_62 = NULL;
  t_43 = t;
  if(match_cons(t, sym_Match_1))
    {
      r_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_43);
  o_43 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, r_43);
  u_62 = t;
  t = SSLsetAnnotations(u_62, o_43);
  return(t);
}
ATerm body_to_inline_0_0 (ATerm t)
{
  ATerm q_116 = NULL,r_116 = NULL;
  ATerm j_122 (ATerm t)
  {
    ATerm f_122 = NULL,g_122 = NULL,h_122 = NULL,i_122 = NULL;
    g_122 = t;
    if(match_cons(t, sym_Id_0))
      {
        t = g_122;
      }
    else
      {
        if(match_cons(t, sym_Fail_0))
          {
            t = g_122;
          }
        else
          {
            if(match_cons(t, sym_CallT_3))
              {
                h_122 = ATgetArgument(t, 0);
                i_122 = ATgetArgument(t, 1);
                f_122 = ATgetArgument(t, 2);
                {
                  ATerm h_37 = NULL,s_37 = NULL,a_38 = NULL,b_38 = NULL,o_36 = NULL,n_36 = NULL;
                  t = SSLgetAnnotations(g_122);
                  h_37 = t;
                  t = h_122;
                  if(match_cons(t, sym_SVar_1))
                    {
                      a_38 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(h_122);
                  s_37 = t;
                  t = (ATerm) ATmakeAppl(sym_SVar_1, a_38);
                  n_36 = t;
                  t = SSLsetAnnotations(n_36, s_37);
                  b_38 = t;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, b_38, i_122, f_122);
                  o_36 = t;
                  t = SSLsetAnnotations(o_36, h_37);
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    h_122 = ATgetArgument(t, 0);
                    i_122 = ATgetArgument(t, 1);
                    f_122 = ATgetArgument(t, 2);
                    {
                      ATerm x_38 = NULL,d_39 = NULL,h_39 = NULL,i_39 = NULL,w_36 = NULL,v_36 = NULL;
                      t = SSLgetAnnotations(g_122);
                      x_38 = t;
                      t = h_122;
                      if(match_cons(t, sym_SVar_1))
                        {
                          h_39 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(h_122);
                      d_39 = t;
                      t = (ATerm) ATmakeAppl(sym_SVar_1, h_39);
                      v_36 = t;
                      t = SSLsetAnnotations(v_36, d_39);
                      i_39 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, i_39, i_122, f_122);
                      w_36 = t;
                      t = SSLsetAnnotations(w_36, x_38);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Build_1))
                      {
                        h_122 = ATgetArgument(t, 0);
                        {
                          ATerm d_40 = NULL,x_36 = NULL;
                          t = SSLgetAnnotations(g_122);
                          d_40 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, h_122);
                          x_36 = t;
                          t = SSLsetAnnotations(x_36, d_40);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            h_122 = ATgetArgument(t, 0);
                            {
                              ATerm t_40 = NULL,p_60 = NULL;
                              t = SSLgetAnnotations(g_122);
                              t_40 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, h_122);
                              p_60 = t;
                              t = SSLsetAnnotations(p_60, t_40);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                h_122 = ATgetArgument(t, 0);
                                i_122 = ATgetArgument(t, 1);
                                {
                                  ATerm w_45 = t;
                                  int a_46 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm r_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,t_62 = NULL,q_60 = NULL;
                                      t = SSLgetAnnotations(g_122);
                                      r_41 = t;
                                      t = h_122;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          v_41 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(h_122);
                                      u_41 = t;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, v_41);
                                      q_60 = t;
                                      t = SSLsetAnnotations(q_60, u_41);
                                      w_41 = t;
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_41, i_122);
                                      t_62 = t;
                                      t = SSLsetAnnotations(t_62, r_41);
                                      ;
                                      LocalPopChoice(a_46);
                                    }
                                  else
                                    {
                                      t = w_45;
                                      {
                                        ATerm n_42 = NULL,y_42 = NULL,a_43 = NULL,f_43 = NULL,g_43 = NULL,i_43 = NULL,w_62 = NULL,v_62 = NULL;
                                        t = SSLgetAnnotations(g_122);
                                        n_42 = t;
                                        t = h_122;
                                        if(match_cons(t, sym_Scope_2))
                                          {
                                            a_43 = ATgetArgument(t, 0);
                                            f_43 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = SSLgetAnnotations(h_122);
                                        y_42 = t;
                                        t = f_43;
                                        t = Seq_2_0(k_9, _id, t);
                                        g_43 = t;
                                        t = (ATerm) ATmakeAppl(sym_Scope_2, a_43, g_43);
                                        v_62 = t;
                                        t = SSLsetAnnotations(v_62, y_42);
                                        i_43 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, i_43, i_122);
                                        w_62 = t;
                                        t = SSLsetAnnotations(w_62, n_42);
                                      }
                                    }
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    h_122 = ATgetArgument(t, 0);
                                    i_122 = ATgetArgument(t, 1);
                                    {
                                      ATerm c_46 = t;
                                      int d_46 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm j_44 = NULL,o_44 = NULL,t_44 = NULL,u_44 = NULL,a_63 = NULL,z_62 = NULL;
                                          t = SSLgetAnnotations(g_122);
                                          j_44 = t;
                                          t = i_122;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              t_44 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = SSLgetAnnotations(i_122);
                                          o_44 = t;
                                          t = (ATerm) ATmakeAppl(sym_Match_1, t_44);
                                          z_62 = t;
                                          t = SSLsetAnnotations(z_62, o_44);
                                          u_44 = t;
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, h_122, u_44);
                                          a_63 = t;
                                          t = SSLsetAnnotations(a_63, j_44);
                                          ;
                                          LocalPopChoice(d_46);
                                        }
                                      else
                                        {
                                          t = c_46;
                                          {
                                            ATerm i_45 = NULL,r_45 = NULL,v_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,b_46 = NULL,e_46 = NULL,n_63 = NULL,c_63 = NULL,b_63 = NULL;
                                            t = SSLgetAnnotations(g_122);
                                            i_45 = t;
                                            t = i_122;
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                v_45 = ATgetArgument(t, 0);
                                                x_45 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(i_122);
                                            r_45 = t;
                                            t = v_45;
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                b_46 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(v_45);
                                            z_45 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, b_46);
                                            b_63 = t;
                                            t = SSLsetAnnotations(b_63, z_45);
                                            e_46 = t;
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, e_46, x_45);
                                            c_63 = t;
                                            t = SSLsetAnnotations(c_63, r_45);
                                            y_45 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, h_122, y_45);
                                            n_63 = t;
                                            t = SSLsetAnnotations(n_63, i_45);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Choice_2))
                                      {
                                        h_122 = ATgetArgument(t, 0);
                                        i_122 = ATgetArgument(t, 1);
                                        {
                                          ATerm q_46 = NULL,u_46 = NULL,v_46 = NULL,o_63 = NULL;
                                          t = SSLgetAnnotations(g_122);
                                          q_46 = t;
                                          t = h_122;
                                          t = j_122(t);
                                          u_46 = t;
                                          t = i_122;
                                          t = j_122(t);
                                          v_46 = t;
                                          t = (ATerm) ATmakeAppl(sym_Choice_2, u_46, v_46);
                                          o_63 = t;
                                          t = SSLsetAnnotations(o_63, q_46);
                                        }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_LChoice_2))
                                          {
                                            h_122 = ATgetArgument(t, 0);
                                            i_122 = ATgetArgument(t, 1);
                                            {
                                              ATerm e_47 = NULL,i_47 = NULL,j_47 = NULL,p_63 = NULL;
                                              t = SSLgetAnnotations(g_122);
                                              e_47 = t;
                                              t = h_122;
                                              t = j_122(t);
                                              i_47 = t;
                                              t = i_122;
                                              t = j_122(t);
                                              j_47 = t;
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, i_47, j_47);
                                              p_63 = t;
                                              t = SSLsetAnnotations(p_63, e_47);
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_GuardedLChoice_3))
                                              {
                                                h_122 = ATgetArgument(t, 0);
                                                i_122 = ATgetArgument(t, 1);
                                                f_122 = ATgetArgument(t, 2);
                                                {
                                                  ATerm c_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,q_63 = NULL;
                                                  t = SSLgetAnnotations(g_122);
                                                  c_48 = t;
                                                  t = h_122;
                                                  t = j_122(t);
                                                  k_48 = t;
                                                  t = i_122;
                                                  t = j_122(t);
                                                  l_48 = t;
                                                  t = f_122;
                                                  t = j_122(t);
                                                  m_48 = t;
                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, k_48, l_48, m_48);
                                                  q_63 = t;
                                                  t = SSLsetAnnotations(q_63, c_48);
                                                }
                                              }
                                            else
                                              {
                                                ATerm g_49 = NULL,r_63 = NULL;
                                                if(match_cons(t, sym_Cong_2))
                                                  {
                                                    h_122 = ATgetArgument(t, 0);
                                                    i_122 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSLgetAnnotations(g_122);
                                                g_49 = t;
                                                t = (ATerm) ATmakeAppl(sym_Cong_2, h_122, i_122);
                                                r_63 = t;
                                                t = SSLsetAnnotations(r_63, g_49);
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
  t = j_122(t);
  q_116 = t;
  t = term_size_0_0(t);
  r_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_116, term_f_46);
  t = leq_0_0(t);
  t = q_116;
  return(t);
}
ATerm inlineable_0_0 (ATerm t)
{
  ATerm z_122 = NULL,a_123 = NULL,b_123 = NULL,c_123 = NULL,d_123 = NULL,e_123 = NULL,f_123 = NULL,g_123 = NULL,k_65 = NULL;
  g_123 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      b_123 = ATgetArgument(t, 0);
      c_123 = ATgetArgument(t, 1);
      d_123 = ATgetArgument(t, 2);
      e_123 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_123);
  a_123 = t;
  t = b_123;
  {
    ATerm g_46 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_46;
      }
    z_122 = t;
    t = e_123;
    {
      ATerm h_46 = t;
      if((PushChoice() == 0))
        {
          ATerm n_9 (ATerm t)
          {
            if(match_cons(t, sym_CallT_3))
              {
                ATerm i_46 = ATgetArgument(t, 0);
                if(match_cons(i_46, sym_SVar_1))
                  {
                    if((z_122 != ATgetArgument(i_46, 0)))
                      {
                        _fail(ATgetArgument(i_46, 0));
                      }
                  }
                else
                  _fail(t);
                {
                  ATerm j_46 = ATgetArgument(t, 1);
                }
                {
                  ATerm k_46 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(n_9, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = h_46;
        }
      t = e_123;
      t = body_to_inline_0_0(t);
      f_123 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, z_122, c_123, d_123, f_123);
      k_65 = t;
      t = SSLsetAnnotations(k_65, a_123);
    }
  }
  return(t);
}
ATerm topdown_1_0 (ATerm t_96 (ATerm), ATerm t)
{
  ATerm o_9 (ATerm t)
  {
    t = topdown_1_0(t_96, t);
    return(t);
  }
  t = t_96(t);
  t = SRTS_all(o_9, t);
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm l_46 = t;
  int n_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm o_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(n_46);
      {
        ATerm i_123 = NULL,j_123 = NULL;
        i_123 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm p_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        j_123 = t;
        t = SSLgetAnnotations(i_123);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_46 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) s_46) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm t_46 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(t_46) != AT_LIST) || !(ATisEmpty(t_46))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = j_123;
      }
    }
  else
    {
      t = l_46;
      {
        ATerm x_46 = t;
        int y_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm z_46 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) z_46) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm a_47 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(y_46);
            _fail(t);
          }
        else
          {
            t = x_46;
          }
      }
    }
  return(t);
}
ATerm o_14 (ATerm l_67, ATerm k_67, ATerm t)
{
  t = l_67;
  t = topdown_1_0(p_9, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, l_67);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm s_123 = NULL,t_123 = NULL,v_123 = NULL,w_123 = NULL,x_123 = NULL,y_123 = NULL,z_123 = NULL,a_124 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      v_123 = ATgetArgument(t, 0);
      y_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_123;
  if(match_cons(t, sym_Match_1))
    {
      w_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_123;
  if(match_cons(t, sym_Var_1))
    {
      x_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_123;
  if(match_cons(t, sym_Seq_2))
    {
      z_123 = ATgetArgument(t, 0);
      t_123 = ATgetArgument(t, 1);
      t = z_123;
      if(match_cons(t, sym_Build_1))
        {
          a_124 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_124;
      if(match_cons(t, sym_Var_1))
        {
          s_123 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_123;
      if((x_123 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_123)), t_123);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          z_123 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_123;
      if(match_cons(t, sym_Var_1))
        {
          a_124 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_124;
      if((x_123 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_123));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm k_124 = NULL,l_124 = NULL,n_124 = NULL,o_124 = NULL,p_124 = NULL,q_124 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      n_124 = ATgetArgument(t, 0);
      p_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_124;
  if(match_cons(t, sym_Build_1))
    {
      o_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_124;
  if(match_cons(t, sym_Seq_2))
    {
      q_124 = ATgetArgument(t, 0);
      l_124 = ATgetArgument(t, 1);
      t = q_124;
      if(match_cons(t, sym_Match_1))
        {
          k_124 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_124;
      if((o_124 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_124), l_124);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          q_124 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_124;
      if((o_124 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, o_124);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm y_124 = NULL,z_124 = NULL,b_125 = NULL,c_125 = NULL,d_125 = NULL,e_125 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      b_125 = ATgetArgument(t, 0);
      d_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_125;
  if(match_cons(t, sym_Match_1))
    {
      c_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_125;
  if(match_cons(t, sym_Seq_2))
    {
      e_125 = ATgetArgument(t, 0);
      z_124 = ATgetArgument(t, 1);
      t = e_125;
      if(match_cons(t, sym_Match_1))
        {
          y_124 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_124;
      if((c_125 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_125), z_124);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          e_125 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_125;
      if((c_125 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, c_125);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm m_125 = NULL,n_125 = NULL,o_125 = NULL,q_125 = NULL,s_125 = NULL,t_125 = NULL,u_125 = NULL,v_125 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      q_125 = ATgetArgument(t, 0);
      s_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_125;
  if(match_cons(t, sym_Build_1))
    {
      ATerm b_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_125;
  if(match_cons(t, sym_Seq_2))
    {
      t_125 = ATgetArgument(t, 0);
      u_125 = ATgetArgument(t, 1);
      t = t_125;
      if(match_cons(t, sym_PrimT_3))
        {
          m_125 = ATgetArgument(t, 0);
          n_125 = ATgetArgument(t, 1);
          o_125 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, m_125, n_125, o_125), u_125);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          t_125 = ATgetArgument(t, 0);
          u_125 = ATgetArgument(t, 1);
          v_125 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, t_125, u_125, v_125);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm j_126 = NULL,k_126 = NULL,n_126 = NULL,p_126 = NULL,q_126 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      n_126 = ATgetArgument(t, 0);
      p_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_126;
  if(match_cons(t, sym_Build_1))
    {
      ATerm c_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_126;
  if(match_cons(t, sym_Seq_2))
    {
      q_126 = ATgetArgument(t, 0);
      k_126 = ATgetArgument(t, 1);
      t = q_126;
      if(match_cons(t, sym_Build_1))
        {
          j_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_126), k_126);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          q_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, q_126);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm f_101 (ATerm), ATerm g_101 (ATerm), ATerm h_101 (ATerm), ATerm i_101 (ATerm), ATerm t)
{
  ATerm a_127 (ATerm t)
  {
    ATerm d_47 = t;
    int g_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_101(t);
        ;
        LocalPopChoice(g_47);
      }
    else
      {
        t = d_47;
        {
          ATerm u_126 = NULL,v_126 = NULL,w_126 = NULL,x_126 = NULL,y_126 = NULL,z_126 = NULL,m_65 = NULL;
          t = g_101(t);
          z_126 = t;
          if(match_cons(t, sym__2))
            {
              v_126 = ATgetArgument(t, 0);
              w_126 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_126);
          u_126 = t;
          t = v_126;
          t = i_101(t);
          x_126 = t;
          t = w_126;
          t = a_127(t);
          y_126 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_126, y_126);
          m_65 = t;
          t = SSLsetAnnotations(m_65, u_126);
          t = h_101(t);
        }
      }
    return(t);
  }
  t = a_127(t);
  return(t);
}
ATerm q_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_47 = ATgetArgument(t, 0);
      if(((ATgetType(h_47) != AT_LIST) || !(ATisEmpty(h_47))))
        _fail(t);
      {
        ATerm k_47 = ATgetArgument(t, 1);
        if(((ATgetType(k_47) != AT_LIST) || !(ATisEmpty(k_47))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_9 (ATerm t)
{
  ATerm e_128 = NULL,f_128 = NULL,g_128 = NULL,h_128 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_47 = ATgetArgument(t, 0);
      if(((ATgetType(l_47) == AT_LIST) && !(ATisEmpty(l_47))))
        {
          e_128 = ATgetFirst((ATermList) l_47);
          f_128 = (ATerm) ATgetNext((ATermList) l_47);
        }
      else
        _fail(t);
      {
        ATerm m_47 = ATgetArgument(t, 1);
        if(((ATgetType(m_47) == AT_LIST) && !(ATisEmpty(m_47))))
          {
            g_128 = ATgetFirst((ATermList) m_47);
            h_128 = (ATerm) ATgetNext((ATermList) m_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_128, g_128), (ATerm) ATmakeAppl(sym__2, f_128, h_128));
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm i_128 = NULL,j_128 = NULL;
  if(match_cons(t, sym__2))
    {
      i_128 = ATgetArgument(t, 0);
      j_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_128), i_128);
  return(t);
}
ATerm t_9 (ATerm t)
{
  ATerm k_128 = NULL,l_128 = NULL;
  if(match_cons(t, sym__2))
    {
      k_128 = ATgetArgument(t, 0);
      l_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_128), (ATerm) ATmakeAppl(sym_Match_1, l_128));
  return(t);
}
ATerm u_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_47 = ATgetArgument(t, 0);
      if(((ATgetType(n_47) != AT_LIST) || !(ATisEmpty(n_47))))
        _fail(t);
      {
        ATerm o_47 = ATgetArgument(t, 1);
        if(((ATgetType(o_47) != AT_LIST) || !(ATisEmpty(o_47))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm r_128 = NULL,s_128 = NULL,t_128 = NULL,u_128 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_47 = ATgetArgument(t, 0);
      if(((ATgetType(p_47) == AT_LIST) && !(ATisEmpty(p_47))))
        {
          r_128 = ATgetFirst((ATermList) p_47);
          s_128 = (ATerm) ATgetNext((ATermList) p_47);
        }
      else
        _fail(t);
      {
        ATerm q_47 = ATgetArgument(t, 1);
        if(((ATgetType(q_47) == AT_LIST) && !(ATisEmpty(q_47))))
          {
            t_128 = ATgetFirst((ATermList) q_47);
            u_128 = (ATerm) ATgetNext((ATermList) q_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_128, t_128), (ATerm) ATmakeAppl(sym__2, s_128, u_128));
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm v_128 = NULL,x_128 = NULL;
  if(match_cons(t, sym__2))
    {
      v_128 = ATgetArgument(t, 0);
      x_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_128), v_128);
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm y_128 = NULL,a_129 = NULL;
  if(match_cons(t, sym__2))
    {
      y_128 = ATgetArgument(t, 0);
      a_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, y_128), (ATerm) ATmakeAppl(sym_Match_1, a_129));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm j_127 = NULL,l_127 = NULL,m_127 = NULL,p_127 = NULL,r_127 = NULL,s_127 = NULL,t_127 = NULL,u_127 = NULL,v_127 = NULL,w_127 = NULL,x_127 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      p_127 = ATgetArgument(t, 0);
      u_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_127;
  if(match_cons(t, sym_Build_1))
    {
      r_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_127;
  if(match_cons(t, sym_Op_2))
    {
      s_127 = ATgetArgument(t, 0);
      t_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_127;
  if(match_cons(t, sym_Seq_2))
    {
      v_127 = ATgetArgument(t, 0);
      m_127 = ATgetArgument(t, 1);
      {
        ATerm d_128 = NULL;
        t = v_127;
        if(match_cons(t, sym_Match_1))
          {
            w_127 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_127;
        if(match_cons(t, sym_Op_2))
          {
            j_127 = ATgetArgument(t, 0);
            l_127 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_127;
        if((s_127 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, t_127, l_127);
        t = genzip_4_0(q_9, r_9, s_9, t_9, t);
        d_128 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, d_128), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, s_127, t_127)), m_127));
      }
    }
  else
    {
      ATerm q_128 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          v_127 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_127;
      if(match_cons(t, sym_Op_2))
        {
          w_127 = ATgetArgument(t, 0);
          x_127 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_127;
      if((s_127 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, t_127, x_127);
      t = genzip_4_0(u_9, w_9, x_9, y_9, t);
      q_128 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, q_128), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, s_127, t_127)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm z_129 = NULL,c_130 = NULL,d_130 = NULL,e_130 = NULL,f_130 = NULL,h_130 = NULL,i_130 = NULL,j_130 = NULL;
  c_130 = t;
  if(match_cons(t, sym_Seq_2))
    {
      d_130 = ATgetArgument(t, 0);
      h_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_130;
  if(match_cons(t, sym_Build_1))
    {
      e_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_130;
  if(match_cons(t, sym_Op_2))
    {
      f_130 = ATgetArgument(t, 0);
      {
        ATerm t_47 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = h_130;
  {
    ATerm d_48 = t;
    int f_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            i_130 = ATgetArgument(t, 0);
            {
              ATerm g_48 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(f_48);
        t = i_130;
        if(match_cons(t, sym_Match_1))
          {
            j_130 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_130;
        if(match_cons(t, sym_Op_2))
          {
            z_129 = ATgetArgument(t, 0);
            {
              ATerm i_48 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_130, z_129);
        {
          ATerm j_48 = t;
          if((PushChoice() == 0))
            {
              ATerm e_50 = NULL;
              if(match_cons(t, sym__2))
                {
                  e_50 = ATgetArgument(t, 0);
                  if((e_50 != ATgetArgument(t, 1)))
                    {
                      _fail(ATgetArgument(t, 1));
                    }
                }
              else
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_48;
            }
          t = term_p_17;
        }
      }
    else
      {
        t = d_48;
        if(match_cons(t, sym_Match_1))
          {
            i_130 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_130;
        if(match_cons(t, sym_Op_2))
          {
            j_130 = ATgetArgument(t, 0);
            {
              ATerm r_48 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_130, j_130);
        {
          ATerm s_48 = t;
          if((PushChoice() == 0))
            {
              ATerm x_50 = NULL;
              if(match_cons(t, sym__2))
                {
                  x_50 = ATgetArgument(t, 0);
                  if((x_50 != ATgetArgument(t, 1)))
                    {
                      _fail(ATgetArgument(t, 1));
                    }
                }
              else
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_48;
            }
          t = term_p_17;
        }
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm x_97 (ATerm), ATerm t)
{
  ATerm n_130 (ATerm t)
  {
    ATerm t_48 = t;
    int v_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_97(t);
        ;
        LocalPopChoice(v_48);
      }
    else
      {
        t = t_48;
        t = SRTS_one(n_130, t);
      }
    return(t);
  }
  t = n_130(t);
  return(t);
}
ATerm at_end_1_0 (ATerm k_103 (ATerm), ATerm t)
{
  ATerm i_131 (ATerm t)
  {
    ATerm f_131 = NULL,g_131 = NULL,h_131 = NULL;
    h_131 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_131 = ATgetFirst((ATermList) t);
        g_131 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_51 = NULL,d_52 = NULL,r_65 = NULL;
          t = SSLgetAnnotations(h_131);
          o_51 = t;
          t = g_131;
          t = i_131(t);
          d_52 = t;
          t = (ATerm) ATinsert(CheckATermList(d_52), f_131);
          r_65 = t;
          t = SSLsetAnnotations(r_65, o_51);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_131;
        t = k_103(t);
      }
    return(t);
  }
  t = i_131(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_130 = NULL,q_130 = NULL,r_130 = NULL;
  p_130 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_130;
    }
  else
    {
      ATerm c_10 (ATerm t)
      {
        t = not_null(r_130);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_130 = ATgetFirst((ATermList) t);
          if(((r_130 != NULL) && (r_130 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_130 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_130;
      t = at_end_1_0(c_10, t);
    }
  return(t);
}
ATerm u_131 (ATerm m_131, ATerm t)
{
  ATerm n_131 = NULL;
  t = SSL_explode_term(m_131);
  if(match_cons(t, sym__2))
    {
      ATerm w_48 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_48) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      n_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_131;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_131 = NULL,q_131 = NULL,r_131 = NULL;
  r_131 = t;
  if(match_cons(t, sym__2))
    {
      p_131 = ATgetArgument(t, 0);
      q_131 = ATgetArgument(t, 1);
      {
        ATerm c_49 = t;
        int e_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_10 (ATerm t)
            {
              t = q_131;
              return(t);
            }
            t = p_131;
            t = at_end_1_0(d_10, t);
            ;
            LocalPopChoice(e_49);
          }
        else
          {
            t = c_49;
            t = u_131(r_131, t);
          }
      }
    }
  else
    {
      t = u_131(r_131, t);
    }
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm n_132 = NULL,o_132 = NULL,p_132 = NULL,q_132 = NULL,r_132 = NULL,s_132 = NULL,t_132 = NULL,u_132 = NULL,v_132 = NULL,w_132 = NULL,x_132 = NULL,y_132 = NULL,z_132 = NULL;
  n_132 = t;
  if(match_cons(t, sym_Let_2))
    {
      o_132 = ATgetArgument(t, 0);
      v_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_132;
  if(match_cons(t, sym_Let_2))
    {
      w_132 = ATgetArgument(t, 0);
      y_132 = ATgetArgument(t, 1);
      {
        ATerm d_133 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, o_132, w_132);
        t = conc_0_0(t);
        d_133 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, d_133, y_132);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          w_132 = ATgetArgument(t, 0);
          y_132 = ATgetArgument(t, 1);
          z_132 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = o_132;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_132 = ATgetFirst((ATermList) t);
          u_132 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_132;
      if(match_cons(t, sym_SDefT_4))
        {
          q_132 = ATgetArgument(t, 0);
          r_132 = ATgetArgument(t, 1);
          s_132 = ATgetArgument(t, 2);
          t_132 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = r_132;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_132;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_132;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_132;
      if(match_cons(t, sym_SVar_1))
        {
          x_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_132;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_132;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_132;
      if((q_132 != t))
        {
          _fail(t);
        }
      t = t_132;
      {
        ATerm f_49 = t;
        if((PushChoice() == 0))
          {
            ATerm e_10 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm h_49 = ATgetArgument(t, 0);
                  if(match_cons(h_49, sym_SVar_1))
                    {
                      if((q_132 != ATgetArgument(h_49, 0)))
                        {
                          _fail(ATgetArgument(h_49, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm i_49 = ATgetArgument(t, 1);
                    if(((ATgetType(i_49) != AT_LIST) || !(ATisEmpty(i_49))))
                      _fail(t);
                  }
                  {
                    ATerm k_49 = ATgetArgument(t, 2);
                    if(((ATgetType(k_49) != AT_LIST) || !(ATisEmpty(k_49))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(e_10, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = f_49;
          }
        t = t_132;
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm m_133 = NULL,n_133 = NULL,o_133 = NULL,p_133 = NULL,q_133 = NULL,r_133 = NULL,t_133 = NULL,u_133 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      t_133 = ATgetArgument(t, 0);
      t = t_133;
      if(match_cons(t, sym_Seq_2))
        {
          r_133 = ATgetArgument(t, 0);
          n_133 = ATgetArgument(t, 1);
          t = r_133;
          if(match_cons(t, sym_Where_1))
            {
              m_133 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_133;
          if(match_cons(t, sym_Seq_2))
            {
              o_133 = ATgetArgument(t, 0);
              q_133 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_133;
          if(match_cons(t, sym_Build_1))
            {
              p_133 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, m_133, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_133), q_133)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              r_133 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, r_133);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          t_133 = ATgetArgument(t, 0);
          t = t_133;
          if(match_cons(t, sym_Test_1))
            {
              r_133 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, r_133);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              t_133 = ATgetArgument(t, 0);
              t = t_133;
              if(match_cons(t, sym_Not_1))
                {
                  r_133 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, r_133);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  t_133 = ATgetArgument(t, 0);
                  u_133 = ATgetArgument(t, 1);
                  t = u_133;
                  if((t_133 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      t_133 = ATgetArgument(t, 0);
                      u_133 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = u_133;
                  if((t_133 != t))
                    {
                      _fail(t);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm AssociateR_0_0 (ATerm t)
{
  ATerm i_134 = NULL,j_134 = NULL,k_134 = NULL,l_134 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      i_134 = ATgetArgument(t, 0);
      l_134 = ATgetArgument(t, 1);
      t = i_134;
      if(match_cons(t, sym_LChoice_2))
        {
          j_134 = ATgetArgument(t, 0);
          k_134 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, j_134, (ATerm) ATmakeAppl(sym_LChoice_2, k_134, l_134));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          i_134 = ATgetArgument(t, 0);
          l_134 = ATgetArgument(t, 1);
          t = i_134;
          if(match_cons(t, sym_Seq_2))
            {
              j_134 = ATgetArgument(t, 0);
              k_134 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, j_134, (ATerm) ATmakeAppl(sym_Seq_2, k_134, l_134));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              i_134 = ATgetArgument(t, 0);
              l_134 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_134;
          if(match_cons(t, sym_Choice_2))
            {
              j_134 = ATgetArgument(t, 0);
              k_134 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, j_134, (ATerm) ATmakeAppl(sym_Choice_2, k_134, l_134));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  ATerm w_135 = NULL,x_135 = NULL,y_135 = NULL;
  w_135 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_135 = ATgetFirst((ATermList) t);
      y_135 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm l_49 = t;
    int m_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_53 = NULL,t_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL,d_54 = NULL,e_54 = NULL,v_65 = NULL,t_65 = NULL;
        t = SSLgetAnnotations(w_135);
        y_53 = t;
        t = x_135;
        t = v_0(t);
        d_54 = t;
        t = (ATerm) ATinsert(CheckATermList(y_135), d_54);
        t_65 = t;
        t = SSLsetAnnotations(t_65, y_53);
        e_54 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_53 = ATgetFirst((ATermList) t);
            w_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_54);
        p_53 = t;
        t = w_53;
        {
          ATerm n_49 = t;
          int p_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(v_0, t);
              ;
              LocalPopChoice(p_49);
            }
          else
            {
              t = n_49;
            }
          x_53 = t;
          t = (ATerm) ATinsert(CheckATermList(x_53), t_53);
          v_65 = t;
          t = SSLsetAnnotations(v_65, p_53);
        }
        ;
        LocalPopChoice(m_49);
      }
    else
      {
        t = l_49;
        {
          ATerm r_54 = NULL,u_54 = NULL,x_65 = NULL;
          t = SSLgetAnnotations(w_135);
          r_54 = t;
          t = y_135;
          t = map1_1_0(v_0, t);
          u_54 = t;
          t = (ATerm) ATinsert(CheckATermList(u_54), x_135);
          x_65 = t;
          t = SSLsetAnnotations(x_65, r_54);
        }
      }
  }
  return(t);
}
ATerm f_10 (ATerm t)
{
  ATerm g_137 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      g_137 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_137, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_17), term_c_17));
  return(t);
}
ATerm g_10 (ATerm t)
{
  ATerm h_137 = NULL,i_137 = NULL;
  i_137 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_137 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, h_137, term_c_17);
    }
  else
    {
      t = i_137;
    }
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm s_137 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      s_137 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, s_137, term_c_17);
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm t_137 = NULL,u_137 = NULL;
  u_137 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      t_137 = ATgetArgument(t, 0);
      {
        ATerm q_49 = t;
        int r_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, t_137, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_17), term_c_17));
            ;
            LocalPopChoice(r_49);
          }
        else
          {
            t = q_49;
            t = u_137;
          }
      }
    }
  else
    {
      t = u_137;
    }
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm e_138 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_138 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, e_138, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_17), term_c_17));
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm f_138 = NULL,g_138 = NULL;
  g_138 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      f_138 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, f_138, term_c_17);
    }
  else
    {
      t = g_138;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm l_136 = NULL,m_136 = NULL,n_136 = NULL,o_136 = NULL,q_136 = NULL,r_136 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      q_136 = ATgetArgument(t, 0);
      r_136 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, q_136, r_136);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          q_136 = ATgetArgument(t, 0);
          t = q_136;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_136 = ATgetFirst((ATermList) t);
              m_136 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, l_136, (ATerm) ATmakeAppl(sym_LChoices_1, m_136));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_p_17;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              q_136 = ATgetArgument(t, 0);
              t = q_136;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_136 = ATgetFirst((ATermList) t);
                  m_136 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, l_136, (ATerm) ATmakeAppl(sym_Choices_1, m_136));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_p_17;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  q_136 = ATgetArgument(t, 0);
                  t = q_136;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      l_136 = ATgetFirst((ATermList) t);
                      m_136 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_136, (ATerm) ATmakeAppl(sym_Seqs_1, m_136));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_j_17;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_136 = ATgetArgument(t, 0);
                      r_136 = ATgetArgument(t, 1);
                      o_136 = ATgetArgument(t, 2);
                      n_136 = ATgetArgument(t, 3);
                      {
                        ATerm d_137 = NULL,f_137 = NULL;
                        t = r_136;
                        t = map1_1_0(f_10, t);
                        d_137 = t;
                        t = o_136;
                        t = map1_1_0(g_10, t);
                        f_137 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, q_136, d_137, f_137, n_136);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          q_136 = ATgetArgument(t, 0);
                          r_136 = ATgetArgument(t, 1);
                          o_136 = ATgetArgument(t, 2);
                          n_136 = ATgetArgument(t, 3);
                          {
                            ATerm s_49 = t;
                            int t_49 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm p_137 = NULL,r_137 = NULL;
                                t = o_136;
                                t = map1_1_0(h_10, t);
                                p_137 = t;
                                t = r_136;
                                t = map_1_0(i_10, t);
                                r_137 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, q_136, r_137, p_137, n_136);
                                ;
                                LocalPopChoice(t_49);
                              }
                            else
                              {
                                t = s_49;
                                {
                                  ATerm b_138 = NULL,d_138 = NULL;
                                  t = r_136;
                                  t = map1_1_0(j_10, t);
                                  b_138 = t;
                                  t = o_136;
                                  t = map_1_0(k_10, t);
                                  d_138 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, q_136, b_138, d_138, n_136);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              q_136 = ATgetArgument(t, 0);
                              r_136 = ATgetArgument(t, 1);
                              o_136 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, r_136, (ATerm) ATmakeAppl(sym_Op_2, term_v_32, (ATerm) ATinsert(ATinsert(ATempty, o_136), q_136)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  q_136 = ATgetArgument(t, 0);
                                  r_136 = ATgetArgument(t, 1);
                                  o_136 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, o_136)), q_136), (ATerm) ATmakeAppl(sym_Build_1, r_136)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      q_136 = ATgetArgument(t, 0);
                                      r_136 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_136, (ATerm) ATmakeAppl(sym_Match_1, r_136));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          q_136 = ATgetArgument(t, 0);
                                          r_136 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_136), r_136);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              q_136 = ATgetArgument(t, 0);
                                              r_136 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, r_136), q_136);
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
ATerm m_10 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm o_139 = NULL,p_139 = NULL,q_139 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      o_139 = ATgetArgument(t, 0);
      t = o_139;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_p_17;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          o_139 = ATgetArgument(t, 0);
          t = o_139;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_j_17;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              o_139 = ATgetArgument(t, 0);
              p_139 = ATgetArgument(t, 1);
              t = o_139;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_p_17;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  o_139 = ATgetArgument(t, 0);
                  p_139 = ATgetArgument(t, 1);
                  t = p_139;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_p_17;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      o_139 = ATgetArgument(t, 0);
                      p_139 = ATgetArgument(t, 1);
                      t = p_139;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_p_17;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          o_139 = ATgetArgument(t, 0);
                          t = o_139;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_p_17;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              o_139 = ATgetArgument(t, 0);
                              t = o_139;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_p_17;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  o_139 = ATgetArgument(t, 0);
                                  p_139 = ATgetArgument(t, 1);
                                  t = p_139;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_p_17;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      o_139 = ATgetArgument(t, 0);
                                      p_139 = ATgetArgument(t, 1);
                                      t = p_139;
                                      t = fetch_1_0(m_10, t);
                                      t = term_p_17;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          o_139 = ATgetArgument(t, 0);
                                          p_139 = ATgetArgument(t, 1);
                                          t = p_139;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = o_139;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = p_139;
                                                }
                                              else
                                                {
                                                  t = o_139;
                                                }
                                            }
                                          else
                                            {
                                              t = o_139;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = p_139;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              o_139 = ATgetArgument(t, 0);
                                              p_139 = ATgetArgument(t, 1);
                                              t = p_139;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = o_139;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = p_139;
                                                    }
                                                  else
                                                    {
                                                      t = o_139;
                                                    }
                                                }
                                              else
                                                {
                                                  t = o_139;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = p_139;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  o_139 = ATgetArgument(t, 0);
                                                  t = o_139;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_p_17;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      o_139 = ATgetArgument(t, 0);
                                                      p_139 = ATgetArgument(t, 1);
                                                      q_139 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = q_139;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, o_139, p_139);
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
ATerm ElimId_0_0 (ATerm t)
{
  ATerm u_140 = NULL,w_140 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      w_140 = ATgetArgument(t, 0);
      t = w_140;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_j_17;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          w_140 = ATgetArgument(t, 0);
          t = w_140;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_p_17;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              w_140 = ATgetArgument(t, 0);
              u_140 = ATgetArgument(t, 1);
              t = u_140;
              if(match_cons(t, sym_Id_0))
                {
                  t = w_140;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = u_140;
                    }
                  else
                    {
                      t = w_140;
                    }
                }
              else
                {
                  t = w_140;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = u_140;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  w_140 = ATgetArgument(t, 0);
                  u_140 = ATgetArgument(t, 1);
                  t = w_140;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_j_17;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      w_140 = ATgetArgument(t, 0);
                      u_140 = ATgetArgument(t, 1);
                      t = u_140;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_j_17;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          w_140 = ATgetArgument(t, 0);
                          u_140 = ATgetArgument(t, 1);
                          t = u_140;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_j_17;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              w_140 = ATgetArgument(t, 0);
                              t = w_140;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_j_17;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  w_140 = ATgetArgument(t, 0);
                                  t = w_140;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_j_17;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      w_140 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = w_140;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_j_17;
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
ATerm Simplify_0_0 (ATerm t)
{
  ATerm w_49 = t;
  int x_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(x_49);
    }
  else
    {
      t = w_49;
      {
        ATerm y_49 = t;
        int a_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(a_50);
          }
        else
          {
            t = y_49;
            {
              ATerm b_50 = t;
              int h_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(h_50);
                }
              else
                {
                  t = b_50;
                  {
                    ATerm i_50 = t;
                    int k_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(k_50);
                      }
                    else
                      {
                        t = i_50;
                        {
                          ATerm l_50 = t;
                          int m_50 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(m_50);
                            }
                          else
                            {
                              t = l_50;
                              {
                                ATerm o_50 = t;
                                int p_50 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm l_141 = NULL,m_141 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        l_141 = ATgetArgument(t, 0);
                                        m_141 = ATgetArgument(t, 1);
                                        t = l_141;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = m_141;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            l_141 = ATgetArgument(t, 0);
                                            m_141 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = l_141;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = m_141;
                                      }
                                    ;
                                    LocalPopChoice(p_50);
                                  }
                                else
                                  {
                                    t = o_50;
                                    {
                                      ATerm s_50 = t;
                                      int y_50 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(y_50);
                                        }
                                      else
                                        {
                                          t = s_50;
                                          {
                                            ATerm z_50 = t;
                                            int a_51 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                ;
                                                LocalPopChoice(a_51);
                                              }
                                            else
                                              {
                                                t = z_50;
                                                {
                                                  ATerm b_51 = t;
                                                  int c_51 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      ;
                                                      LocalPopChoice(c_51);
                                                    }
                                                  else
                                                    {
                                                      t = b_51;
                                                      {
                                                        ATerm l_51 = t;
                                                        int m_51 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            ;
                                                            LocalPopChoice(m_51);
                                                          }
                                                        else
                                                          {
                                                            t = l_51;
                                                            {
                                                              ATerm n_51 = t;
                                                              int p_51 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  ;
                                                                  LocalPopChoice(p_51);
                                                                }
                                                              else
                                                                {
                                                                  t = n_51;
                                                                  {
                                                                    ATerm q_51 = t;
                                                                    int w_51 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        ;
                                                                        LocalPopChoice(w_51);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_51;
                                                                        {
                                                                          ATerm x_51 = t;
                                                                          int e_52 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              ;
                                                                              LocalPopChoice(e_52);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = x_51;
                                                                              {
                                                                                ATerm f_52 = t;
                                                                                int g_52 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(g_52);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = f_52;
                                                                                    {
                                                                                      ATerm p_141 = NULL,q_141 = NULL,r_141 = NULL,t_141 = NULL;
                                                                                      q_141 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          r_141 = ATgetArgument(t, 0);
                                                                                          t_141 = ATgetArgument(t, 1);
                                                                                          t = r_141;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              p_141 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = q_141;
                                                                                          t = o_14(p_141, t_141, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              r_141 = ATgetArgument(t, 0);
                                                                                              t_141 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = r_141;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = t_141;
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
                }
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm w_113 (ATerm), ATerm t)
{
  ATerm a_142 (ATerm t)
  {
    ATerm h_52 = t;
    int i_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_113(t);
        t = a_142(t);
        ;
        LocalPopChoice(i_52);
      }
    else
      {
        t = h_52;
      }
    return(t);
  }
  t = a_142(t);
  return(t);
}
ATerm downup_1_0 (ATerm v_96 (ATerm), ATerm t)
{
  t = v_96(t);
  {
    ATerm o_10 (ATerm t)
    {
      t = downup_1_0(v_96, t);
      return(t);
    }
    t = SRTS_all(o_10, t);
    t = v_96(t);
  }
  return(t);
}
ATerm p_10 (ATerm t)
{
  t = downup_1_0(r_10, t);
  {
    ATerm j_52 = t;
    int k_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        ;
        LocalPopChoice(k_52);
      }
    else
      {
        t = j_52;
      }
  }
  return(t);
}
ATerm r_10 (ATerm t)
{
  t = repeat_1_0(Simplify_0_0, t);
  return(t);
}
ATerm inline_sdefs_0_0 (ATerm t)
{
  t = map_1_0(p_10, t);
  t = map_1_0(inline_sdef_0_0, t);
  return(t);
}
ATerm Cons_2_0 (ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm t)
{
  ATerm e_142 = NULL,f_142 = NULL,g_142 = NULL,h_142 = NULL,i_142 = NULL,j_142 = NULL,b_66 = NULL;
  j_142 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_142 = ATgetFirst((ATermList) t);
      g_142 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_142);
  e_142 = t;
  t = f_142;
  t = m_80(t);
  h_142 = t;
  t = g_142;
  t = n_80(t);
  i_142 = t;
  t = (ATerm) ATinsert(CheckATermList(i_142), h_142);
  b_66 = t;
  t = SSLsetAnnotations(b_66, e_142);
  return(t);
}
ATerm x_15 (ATerm w_71, ATerm x_71, ATerm t)
{
  ATerm k_142 = NULL;
  t = SSL_fputc(w_71, x_71);
  k_142 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_142);
  return(t);
}
ATerm y_15 (ATerm v_74, ATerm w_74, ATerm t)
{
  ATerm l_142 = NULL;
  t = SSL_write_term_to_stream_text(v_74, w_74);
  l_142 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_142);
  return(t);
}
ATerm b_16 (ATerm h_124 (ATerm), ATerm e_723, ATerm z_74, ATerm t)
{
  ATerm m_142 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_723, term_n_52);
  t = e_16(t);
  m_142 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_142, z_74);
  t = h_124(t);
  t = fclose_0_0(t);
  t = z_74;
  return(t);
}
ATerm z_15 (ATerm r_74, ATerm s_74, ATerm t)
{
  ATerm n_142 = NULL;
  t = SSL_write_term_to_stream_baf(r_74, s_74);
  n_142 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_142);
  return(t);
}
ATerm w_10 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm k_56 = NULL,n_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_52 = ATgetArgument(t, 0);
      if(match_cons(t_52, sym_Stream_1))
        {
          k_56 = ATgetArgument(t_52, 0);
        }
      else
        _fail(t);
      n_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_15(k_56, n_56, t);
  return(t);
}
ATerm d_11 (ATerm t)
{
  ATerm y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,h_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_52 = ATgetArgument(t, 0);
      if(match_cons(v_52, sym_Stream_1))
        {
          b_58 = ATgetArgument(v_52, 0);
        }
      else
        _fail(t);
      h_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_15(b_58, h_58, t);
  y_57 = t;
  t = term_w_52;
  z_57 = t;
  t = y_57;
  if(match_cons(t, sym_Stream_1))
    {
      a_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_w_52, y_57);
  t = x_15(z_57, a_58, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm r_142 = NULL,s_142 = NULL,t_142 = NULL,u_142 = NULL,v_142 = NULL,x_142 = NULL,y_142 = NULL,z_142 = NULL,a_143 = NULL,b_143 = NULL,b_144 = NULL,c_144 = NULL,e_66 = NULL,d_66 = NULL;
  s_142 = t;
  if(match_cons(t, sym__2))
    {
      z_142 = ATgetArgument(t, 0);
      a_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_142);
  y_142 = t;
  t = z_142;
  {
    ATerm x_52 = t;
    int y_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_10 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((r_142 != NULL) && (r_142 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_142 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(s_10, t);
        ;
        LocalPopChoice(y_52);
      }
    else
      {
        t = x_52;
        t = term_z_52;
        r_142 = t;
      }
    b_143 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_143, a_143);
    d_66 = t;
    t = SSLsetAnnotations(d_66, y_142);
    t = s_142;
    if(match_cons(t, sym__2))
      {
        u_142 = ATgetArgument(t, 0);
        v_142 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_142);
    t_142 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_142, (ATerm) ATmakeAppl(sym__2, not_null(r_142), v_142));
    e_66 = t;
    t = SSLsetAnnotations(e_66, t_142);
    x_142 = t;
    if(match_cons(t, sym__2))
      {
        b_144 = ATgetArgument(t, 0);
        c_144 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm a_53 = t;
      int l_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_55 = NULL,v_55 = NULL,y_55 = NULL,i_56 = NULL,j_56 = NULL,s_66 = NULL;
          t = SSLgetAnnotations(x_142);
          i_55 = t;
          t = b_144;
          t = fetch_1_0(w_10, t);
          v_55 = t;
          t = c_144;
          if(match_cons(t, sym__2))
            {
              i_56 = ATgetArgument(t, 0);
              j_56 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_16(x_10, i_56, j_56, t);
          y_55 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_55, y_55);
          s_66 = t;
          t = SSLsetAnnotations(s_66, i_55);
          ;
          LocalPopChoice(l_53);
        }
      else
        {
          t = a_53;
          {
            ATerm v_56 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL,t_66 = NULL;
            t = SSLgetAnnotations(x_142);
            v_56 = t;
            t = c_144;
            if(match_cons(t, sym__2))
              {
                t_57 = ATgetArgument(t, 0);
                u_57 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = b_16(d_11, t_57, u_57, t);
            s_57 = t;
            t = (ATerm) ATmakeAppl(sym__2, b_144, s_57);
            t_66 = t;
            t = SSLsetAnnotations(t_66, v_56);
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
ATerm apply_strategy_1_0 (ATerm c_119 (ATerm), ATerm t)
{
  ATerm f_144 = NULL,g_144 = NULL,h_144 = NULL,i_144 = NULL,j_144 = NULL;
  j_144 = t;
  t = dtime_0_0(t);
  t = j_144;
  t = c_119(t);
  i_144 = t;
  t = dtime_0_0(t);
  f_144 = t;
  t = i_144;
  if(match_cons(t, sym__2))
    {
      g_144 = ATgetArgument(t, 0);
      h_144 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_144), (ATerm) ATmakeAppl(sym_Runtime_1, f_144)), h_144);
  return(t);
}
ATerm x_144 (ATerm r_144, ATerm t)
{
  t = SSL_fclose(r_144);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_144 = NULL,v_144 = NULL;
  v_144 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_144 = ATgetArgument(t, 0);
      {
        ATerm m_53 = t;
        int n_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_144);
            ;
            LocalPopChoice(n_53);
          }
        else
          {
            t = m_53;
            t = x_144(v_144, t);
          }
      }
    }
  else
    {
      t = x_144(v_144, t);
    }
  return(t);
}
ATerm c_16 (ATerm x_74, ATerm t)
{
  t = SSL_read_term_from_stream(x_74);
  return(t);
}
ATerm d_16 (ATerm y_71, ATerm z_71, ATerm t)
{
  ATerm y_144 = NULL;
  t = SSL_fopen(y_71, z_71);
  y_144 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_144);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_144 = NULL;
  t = SSL_stdin_stream();
  z_144 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_144);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_145 = NULL;
  t = SSL_stdout_stream();
  a_145 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_145);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_145 = NULL;
  t = SSL_stderr_stream();
  b_145 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_145);
  return(t);
}
ATerm i_146 (ATerm h_145, ATerm t)
{
  ATerm i_145 = NULL;
  t = SSL_explode_term(h_145);
  if(match_cons(t, sym__2))
    {
      ATerm o_53 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_53) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_53 = ATgetArgument(t, 1);
        if(((ATgetType(u_53) == AT_LIST) && !(ATisEmpty(u_53))))
          {
            i_145 = ATgetFirst((ATermList) u_53);
            {
              ATerm v_53 = (ATerm) ATgetNext((ATermList) u_53);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_145;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_145;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_145;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_145;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm j_146 (ATerm l_145, ATerm m_145, ATerm n_145, ATerm t)
{
  ATerm o_145 = NULL,p_145 = NULL,q_145 = NULL,t_145 = NULL,y_66 = NULL;
  t = SSLgetAnnotations(n_145);
  q_145 = t;
  t = l_145;
  if(match_cons(t, sym_Path_1))
    {
      t_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_145, m_145);
  y_66 = t;
  t = SSLsetAnnotations(y_66, q_145);
  if(match_cons(t, sym__2))
    {
      o_145 = ATgetArgument(t, 0);
      p_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_16(o_145, p_145, t);
  return(t);
}
ATerm k_146 (ATerm v_145, ATerm w_145, ATerm x_145, ATerm t)
{
  ATerm y_145 = NULL,z_145 = NULL,a_146 = NULL,d_146 = NULL,j_67 = NULL;
  t = SSLgetAnnotations(x_145);
  a_146 = t;
  t = SSL_is_string(v_145);
  d_146 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_146, w_145);
  j_67 = t;
  t = SSLsetAnnotations(j_67, a_146);
  if(match_cons(t, sym__2))
    {
      y_145 = ATgetArgument(t, 0);
      z_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_16(y_145, z_145, t);
  return(t);
}
ATerm e_16 (ATerm t)
{
  ATerm f_146 = NULL,g_146 = NULL,h_146 = NULL;
  f_146 = t;
  if(match_cons(t, sym__2))
    {
      g_146 = ATgetArgument(t, 0);
      h_146 = ATgetArgument(t, 1);
      {
        ATerm a_54 = t;
        int b_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_146(f_146, t);
            ;
            LocalPopChoice(b_54);
          }
        else
          {
            t = a_54;
            {
              ATerm c_54 = t;
              int f_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_146(g_146, h_146, f_146, t);
                  ;
                  LocalPopChoice(f_54);
                }
              else
                {
                  t = c_54;
                  t = k_146(g_146, h_146, f_146, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_146(f_146, t);
    }
  return(t);
}
ATerm h_11 (ATerm t)
{
  t = term_g_54;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_146 = NULL,m_146 = NULL,n_146 = NULL;
  ATerm h_54 = t;
  int i_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_146 = NULL;
      o_146 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_146, term_j_54);
      t = e_16(t);
      ;
      LocalPopChoice(i_54);
    }
  else
    {
      t = h_54;
      t = debug_1_0(h_11, t);
      _fail(t);
    }
  m_146 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_146 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_16(n_146, t);
  l_146 = t;
  t = m_146;
  t = fclose_0_0(t);
  t = l_146;
  return(t);
}
ATerm fetch_1_0 (ATerm e_103 (ATerm), ATerm t)
{
  ATerm m_147 (ATerm t)
  {
    ATerm j_147 = NULL,k_147 = NULL,l_147 = NULL;
    j_147 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_147 = ATgetFirst((ATermList) t);
        l_147 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm k_54 = t;
      int o_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_59 = NULL,m_59 = NULL,o_67 = NULL;
          t = SSLgetAnnotations(j_147);
          j_59 = t;
          t = k_147;
          t = e_103(t);
          m_59 = t;
          t = (ATerm) ATinsert(CheckATermList(l_147), m_59);
          o_67 = t;
          t = SSLsetAnnotations(o_67, j_59);
          ;
          LocalPopChoice(o_54);
        }
      else
        {
          t = k_54;
          {
            ATerm x_59 = NULL,a_60 = NULL,p_67 = NULL;
            t = SSLgetAnnotations(j_147);
            x_59 = t;
            t = l_147;
            t = m_147(t);
            a_60 = t;
            t = (ATerm) ATinsert(CheckATermList(a_60), k_147);
            p_67 = t;
            t = SSLsetAnnotations(p_67, x_59);
          }
        }
    }
    return(t);
  }
  t = m_147(t);
  return(t);
}
ATerm w_15 (ATerm t_45, ATerm u_45, ATerm t)
{
  t = SSL_strcat(t_45, u_45);
  return(t);
}
ATerm debug_1_0 (ATerm f_124 (ATerm), ATerm t)
{
  ATerm q_147 = NULL,r_147 = NULL,s_147 = NULL,t_147 = NULL;
  q_147 = t;
  t = f_124(t);
  r_147 = t;
  t = term_h_15;
  s_147 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_147), r_147);
  t_147 = t;
  t = SSL_printnl(s_147, t_147);
  t = q_147;
  return(t);
}
ATerm i_11 (ATerm t)
{
  ATerm p_54 = t;
  int q_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(q_54);
    }
  else
    {
      t = p_54;
    }
  return(t);
}
ATerm j_11 (ATerm t)
{
  t = term_s_54;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_54 = t;
  int v_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_148 = NULL;
      b_148 = t;
      t = SSL_is_string(b_148);
      ;
      LocalPopChoice(v_54);
    }
  else
    {
      t = t_54;
      {
        ATerm c_55 = t;
        int d_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_11, t);
            ;
            LocalPopChoice(d_55);
          }
        else
          {
            t = c_55;
            {
              ATerm h_148 = NULL,i_148 = NULL,j_148 = NULL;
              h_148 = t;
              if(match_cons(t, sym_Path_1))
                {
                  i_148 = ATgetArgument(t, 0);
                  t = i_148;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_148 = ATgetArgument(t, 0);
                      t = i_148;
                      {
                        ATerm f_55 = t;
                        int g_55 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(g_55);
                          }
                        else
                          {
                            t = f_55;
                            t = debug_1_0(j_11, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm n_148 = NULL,o_148 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_148 = ATgetArgument(t, 0);
                          j_148 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_148;
                      t = eval_config_0_0(t);
                      n_148 = t;
                      t = j_148;
                      t = eval_config_0_0(t);
                      o_148 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_148, o_148);
                      t = w_15(n_148, o_148, t);
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
  ATerm s_148 = NULL,t_148 = NULL;
  s_148 = t;
  t = term_h_55;
  t_148 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_55, s_148);
  t = h_16(t_148, s_148, t);
  {
    ATerm m_55 = t;
    int n_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_148 = NULL,v_148 = NULL;
        t = eval_config_0_0(t);
        u_148 = t;
        t = term_h_55;
        v_148 = t;
        t = SSL_table_put(v_148, s_148, u_148);
        t = u_148;
        ;
        LocalPopChoice(n_55);
      }
    else
      {
        t = m_55;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm q_117 (ATerm), ATerm t)
{
  ATerm z_148 = NULL;
  z_148 = t;
  {
    ATerm r_55 = t;
    int t_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_149 = NULL;
        t = term_f_56;
        t = get_config_0_0(t);
        b_149 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_149, term_g_56);
        t = geq_0_0(t);
        t = z_148;
        t = q_117(t);
        ;
        LocalPopChoice(t_55);
      }
    else
      {
        t = r_55;
        t = z_148;
      }
  }
  return(t);
}
ATerm k_11 (ATerm t)
{
  ATerm e_149 = NULL;
  e_149 = t;
  if(match_string(t, "-k"))
    {
      t = e_149;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_149;
    }
  return(t);
}
ATerm p_11 (ATerm t)
{
  ATerm f_149 = NULL,g_149 = NULL,h_149 = NULL;
  f_149 = t;
  t = SSL_string_to_int(f_149);
  g_149 = t;
  t = term_h_56;
  h_149 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_56, g_149);
  t = k_16(h_149, g_149, t);
  t = f_149;
  return(t);
}
ATerm q_11 (ATerm t)
{
  t = term_l_56;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_11, p_11, q_11, t);
  return(t);
}
ATerm s_11 (ATerm t)
{
  ATerm j_149 = NULL;
  j_149 = t;
  if(match_string(t, "-S"))
    {
      t = j_149;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_149;
    }
  return(t);
}
ATerm t_11 (ATerm t)
{
  ATerm k_149 = NULL,l_149 = NULL;
  t = term_f_56;
  k_149 = t;
  t = term_l_43;
  l_149 = t;
  t = term_m_56;
  t = k_16(k_149, l_149, t);
  t = term_o_56;
  return(t);
}
ATerm u_11 (ATerm t)
{
  t = term_p_56;
  return(t);
}
ATerm w_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_11 (ATerm t)
{
  ATerm m_149 = NULL,n_149 = NULL,o_149 = NULL;
  m_149 = t;
  t = SSL_string_to_int(m_149);
  n_149 = t;
  t = term_f_56;
  o_149 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_56, n_149);
  t = k_16(o_149, n_149, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_149);
  return(t);
}
ATerm y_11 (ATerm t)
{
  t = term_q_56;
  return(t);
}
ATerm b_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_12 (ATerm t)
{
  ATerm p_149 = NULL,q_149 = NULL;
  t = term_r_56;
  p_149 = t;
  t = term_g_15;
  q_149 = t;
  t = term_s_56;
  t = k_16(p_149, q_149, t);
  t = term_t_56;
  return(t);
}
ATerm d_12 (ATerm t)
{
  t = term_u_56;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_56 = t;
  int x_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_11, t_11, u_11, t);
      ;
      LocalPopChoice(x_56);
    }
  else
    {
      t = w_56;
      {
        ATerm y_56 = t;
        int z_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_11, x_11, y_11, t);
            ;
            LocalPopChoice(z_56);
          }
        else
          {
            t = y_56;
            t = Option_3_0(b_12, c_12, d_12, t);
          }
      }
    }
  return(t);
}
ATerm k_16 (ATerm z_47, ATerm a_48, ATerm t)
{
  ATerm r_149 = NULL;
  t = term_h_55;
  r_149 = t;
  t = SSL_table_put(r_149, z_47, a_48);
  t = (ATerm) ATmakeAppl(sym__3, term_h_55, z_47, a_48);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm u_149 = NULL,v_149 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_149 = NULL,x_149 = NULL,y_149 = NULL;
      t = term_g_15;
      t = h_0(t);
      w_149 = t;
      t = term_a_57;
      x_149 = t;
      t = term_b_57;
      y_149 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_57, term_b_57, w_149);
      t = i_16(x_149, y_149, w_149, t);
      _fail(t);
    }
  else
    {
      ATerm b_150 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_149 = ATgetFirst((ATermList) t);
          v_149 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_149;
      t = b_0(t);
      t = term_g_15;
      t = f_0(t);
      b_150 = t;
      t = (ATerm) ATinsert(CheckATermList(v_149), b_150);
    }
  return(t);
}
ATerm e_12 (ATerm t)
{
  ATerm d_150 = NULL;
  d_150 = t;
  if(match_string(t, "-o"))
    {
      t = d_150;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_150;
    }
  return(t);
}
ATerm f_12 (ATerm t)
{
  ATerm e_150 = NULL,f_150 = NULL;
  e_150 = t;
  t = term_c_57;
  f_150 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_57, e_150);
  t = k_16(f_150, e_150, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_150);
  return(t);
}
ATerm g_12 (ATerm t)
{
  t = term_d_57;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_12, f_12, g_12, t);
  return(t);
}
ATerm i_16 (ATerm j_37, ATerm k_37, ATerm i_37, ATerm t)
{
  ATerm h_150 = NULL,i_150 = NULL,j_150 = NULL;
  h_150 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_37, k_37);
  {
    ATerm e_57 = t;
    int f_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_57 = ATgetArgument(t, 0);
            ATerm h_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_37, k_37);
        t = h_16(j_37, k_37, t);
        ;
        LocalPopChoice(f_57);
      }
    else
      {
        t = e_57;
        t = (ATerm) ATempty;
      }
    i_150 = t;
    t = (ATerm) ATinsert(CheckATermList(i_150), i_37);
    j_150 = t;
    t = SSL_table_put(j_37, k_37, j_150);
    t = h_150;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm s_0 (ATerm), ATerm t)
{
  ATerm q_150 = NULL,r_150 = NULL,s_150 = NULL,t_150 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_150 = NULL,v_150 = NULL,w_150 = NULL;
      t = term_g_15;
      t = s_0(t);
      u_150 = t;
      t = term_a_57;
      v_150 = t;
      t = term_b_57;
      w_150 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_57, term_b_57, u_150);
      t = i_16(v_150, w_150, u_150, t);
      _fail(t);
    }
  else
    {
      ATerm a_151 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_150 = ATgetFirst((ATermList) t);
          r_150 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_150;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_150 = ATgetFirst((ATermList) t);
          t_150 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_150;
      t = l_0(t);
      t = s_150;
      t = m_0(t);
      a_151 = t;
      t = (ATerm) ATinsert(CheckATermList(t_150), a_151);
    }
  return(t);
}
ATerm h_12 (ATerm t)
{
  ATerm c_151 = NULL;
  c_151 = t;
  if(match_string(t, "-i"))
    {
      t = c_151;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_151;
    }
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm d_151 = NULL,e_151 = NULL;
  d_151 = t;
  t = term_i_57;
  e_151 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_57, d_151);
  t = k_16(e_151, d_151, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, d_151);
  return(t);
}
ATerm j_12 (ATerm t)
{
  t = term_j_57;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_12, i_12, j_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_151 = NULL,g_151 = NULL,h_151 = NULL,i_151 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_15;
  t = whoami_0_0(t);
  f_151 = t;
  t = term_h_15;
  h_151 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_57), f_151);
  i_151 = t;
  t = SSL_printnl(h_151, i_151);
  t = term_k_15;
  g_151 = t;
  t = SSL_exit(g_151);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_l_57;
  t = get_config_0_0(t);
  return(t);
}
ATerm f_16 (ATerm k_35, ATerm l_35, ATerm t)
{
  ATerm m_57 = t;
  int n_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_35, l_35);
      ;
      LocalPopChoice(n_57);
    }
  else
    {
      t = m_57;
      t = SSL_addr(k_35, l_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm t)
{
  ATerm k_151 = NULL,l_151 = NULL,m_151 = NULL;
  k_151 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_151;
      t = v_107(t);
    }
  else
    {
      ATerm p_151 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_151 = ATgetFirst((ATermList) t);
          m_151 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_151;
      t = foldr_2_0(v_107, w_107, t);
      p_151 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_151, p_151);
      t = w_107(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm l_12 (ATerm t)
{
  t = term_l_43;
  return(t);
}
ATerm m_12 (ATerm t)
{
  ATerm r_60 = NULL,s_60 = NULL;
  if(match_cons(t, sym__2))
    {
      r_60 = ATgetArgument(t, 0);
      s_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_16(r_60, s_60, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_151 = NULL,n_60 = NULL,o_60 = NULL;
  t = times_0_0(t);
  o_60 = t;
  t = SSL_explode_term(o_60);
  if(match_cons(t, sym__2))
    {
      ATerm o_57 = ATgetArgument(t, 0);
      n_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_60;
  t = foldr_2_0(l_12, m_12, t);
  s_151 = t;
  t = SSL_TicksToSeconds(s_151);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_152 = NULL,e_152 = NULL,f_152 = NULL;
  d_152 = t;
  if(match_cons(t, sym__2))
    {
      e_152 = ATgetArgument(t, 0);
      f_152 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_57 = t;
    int q_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_152;
        if((e_152 != t))
          {
            _fail(t);
          }
        t = d_152;
        ;
        LocalPopChoice(q_57);
      }
    else
      {
        t = p_57;
        t = (ATerm) ATmakeAppl(sym__2, e_152, f_152);
        {
          ATerm r_57 = t;
          int v_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_152, f_152);
              ;
              LocalPopChoice(v_57);
            }
          else
            {
              t = r_57;
              t = SSL_gtr(e_152, f_152);
            }
          t = (ATerm) ATmakeAppl(sym__2, e_152, f_152);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_117 (ATerm), ATerm t)
{
  ATerm j_152 = NULL;
  j_152 = t;
  {
    ATerm w_57 = t;
    int x_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_152 = NULL;
        t = term_f_56;
        t = get_config_0_0(t);
        l_152 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_152, term_k_15);
        t = geq_0_0(t);
        t = j_152;
        t = p_117(t);
        ;
        LocalPopChoice(x_57);
      }
    else
      {
        t = w_57;
        t = j_152;
      }
  }
  return(t);
}
ATerm o_12 (ATerm t)
{
  ATerm n_152 = NULL,o_152 = NULL,q_152 = NULL,r_152 = NULL;
  t = run_time_0_0(t);
  n_152 = t;
  t = term_g_15;
  t = whoami_0_0(t);
  o_152 = t;
  t = term_h_15;
  q_152 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_58), n_152), term_d_58), o_152);
  r_152 = t;
  t = SSL_printnl(q_152, r_152);
  t = (ATerm) ATmakeAppl(sym__2, term_h_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_58), n_152), term_d_58), o_152));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_152 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_43;
  s_152 = t;
  t = SSL_exit(s_152);
  return(t);
}
ATerm p_12 (ATerm t)
{
  ATerm a_153 = NULL,b_153 = NULL;
  b_153 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_153;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_153 = ATgetArgument(t, 0);
          {
            ATerm e_61 = NULL,w_67 = NULL;
            t = SSLgetAnnotations(b_153);
            e_61 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_153);
            w_67 = t;
            t = SSLsetAnnotations(w_67, e_61);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_153;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_120 (ATerm), ATerm t)
{
  ATerm f_58 = t;
  int g_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_58;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_58);
    }
  else
    {
      t = f_58;
      t = fetch_1_0(p_12, t);
    }
  t = a_120(t);
  return(t);
}
ATerm map_1_0 (ATerm u_102 (ATerm), ATerm t)
{
  ATerm r_153 (ATerm t)
  {
    ATerm o_153 = NULL,p_153 = NULL,q_153 = NULL;
    o_153 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_153;
      }
    else
      {
        ATerm q_61 = NULL,u_61 = NULL,v_61 = NULL,a_68 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_153 = ATgetFirst((ATermList) t);
            q_153 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_153);
        q_61 = t;
        t = p_153;
        t = u_102(t);
        u_61 = t;
        t = q_153;
        t = r_153(t);
        v_61 = t;
        t = (ATerm) ATinsert(CheckATermList(v_61), u_61);
        a_68 = t;
        t = SSLsetAnnotations(a_68, q_61);
      }
    return(t);
  }
  t = r_153(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm u_153 = NULL,v_153 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_153 = ATgetFirst((ATermList) t);
      v_153 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_153 = NULL,a_154 = NULL;
        ATerm q_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_153)), not_null(a_154));
          return(t);
        }
        t = v_153;
        t = j_0(t);
        if(((z_153 != NULL) && (z_153 != t)))
          _fail(t);
        else
          z_153 = t;
        t = u_153;
        t = i_0(t);
        if(((a_154 != NULL) && (a_154 != t)))
          _fail(t);
        else
          a_154 = t;
        t = v_153;
        t = reverse_acc_2_0(i_0, q_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_15;
      t = j_0(t);
    }
  return(t);
}
ATerm h_16 (ATerm a_39, ATerm b_39, ATerm t)
{
  t = SSL_table_get(a_39, b_39);
  return(t);
}
ATerm r_12 (ATerm t)
{
  ATerm e_154 = NULL,f_154 = NULL,g_154 = NULL,c_68 = NULL;
  g_154 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_154 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_154);
  e_154 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_154);
  c_68 = t;
  t = SSLsetAnnotations(c_68, e_154);
  return(t);
}
ATerm s_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_12 (ATerm t)
{
  ATerm i_154 = NULL;
  i_154 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_154), term_j_58);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_154 = NULL,d_154 = NULL;
  ATerm k_58 = t;
  int l_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_57;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_58);
    }
  else
    {
      t = k_58;
      t = fetch_1_0(r_12, t);
    }
  t = term_m_58;
  t = echo_0_0(t);
  t = term_a_57;
  c_154 = t;
  t = term_b_57;
  d_154 = t;
  t = term_n_58;
  t = h_16(c_154, d_154, t);
  t = reverse_acc_2_0(_id, s_12, t);
  t = map_1_0(w_12, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_154 = NULL,l_154 = NULL,m_154 = NULL;
  k_154 = t;
  {
    ATerm o_58 = t;
    int p_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_154;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_58 = ATgetFirst((ATermList) t);
                ATerm r_58 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_154;
          }
        ;
        LocalPopChoice(p_58);
      }
    else
      {
        t = o_58;
        t = (ATerm) ATinsert(ATempty, k_154);
      }
    l_154 = t;
    t = term_z_52;
    m_154 = t;
    t = SSL_printnl(m_154, l_154);
    t = k_154;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_l_57;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm x_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_12 (ATerm t)
{
  ATerm q_154 = NULL,r_154 = NULL;
  t = term_s_58;
  q_154 = t;
  t = term_g_15;
  r_154 = t;
  t = term_u_58;
  t = k_16(q_154, r_154, t);
  return(t);
}
ATerm a_13 (ATerm t)
{
  t = term_v_58;
  return(t);
}
ATerm b_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_13 (ATerm t)
{
  ATerm s_154 = NULL,t_154 = NULL,u_154 = NULL,v_154 = NULL;
  t = term_s_58;
  u_154 = t;
  t = term_g_15;
  v_154 = t;
  t = term_u_58;
  t = k_16(u_154, v_154, t);
  t = term_w_58;
  s_154 = t;
  t = term_g_15;
  t_154 = t;
  t = term_x_58;
  t = k_16(s_154, t_154, t);
  t = term_y_58;
  return(t);
}
ATerm d_13 (ATerm t)
{
  t = term_z_58;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_59 = t;
  int b_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_12, z_12, a_13, t);
      ;
      LocalPopChoice(b_59);
    }
  else
    {
      t = a_59;
      t = Option_3_0(b_13, c_13, d_13, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_122 (ATerm), ATerm t)
{
  ATerm a_155 = NULL,b_155 = NULL,c_155 = NULL,d_155 = NULL,f_155 = NULL,g_155 = NULL,g_68 = NULL;
  a_155 = t;
  {
    ATerm d_59 = t;
    int e_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_59;
        t = d_122(t);
        ;
        LocalPopChoice(e_59);
      }
    else
      {
        t = d_59;
      }
    t = a_155;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_155 = ATgetFirst((ATermList) t);
        d_155 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_155);
    b_155 = t;
    t = term_l_57;
    g_155 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_l_57, c_155);
    t = k_16(g_155, c_155, t);
    t = d_155;
    {
      ATerm q_155 (ATerm t)
      {
        ATerm g_59 = t;
        int h_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_59 = t;
            int k_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_155 = NULL;
                j_155 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = j_155;
                ;
                LocalPopChoice(k_59);
              }
            else
              {
                t = i_59;
                t = d_122(t);
                t = Cons_2_0(_id, q_155, t);
              }
            ;
            LocalPopChoice(h_59);
          }
        else
          {
            t = g_59;
            {
              ATerm m_155 = NULL,n_155 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_155 = ATgetFirst((ATermList) t);
                  n_155 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(n_155), (ATerm) ATmakeAppl(sym_Undefined_1, m_155));
            }
          }
        return(t);
      }
      t = q_155(t);
      f_155 = t;
      t = (ATerm) ATinsert(CheckATermList(f_155), (ATerm) ATmakeAppl(sym_Program_1, c_155));
      g_68 = t;
      t = SSLsetAnnotations(g_68, b_155);
    }
  }
  return(t);
}
ATerm g_13 (ATerm t)
{
  ATerm c_156 = NULL;
  c_156 = t;
  if(match_string(t, "--help"))
    {
      t = c_156;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_156;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_156;
        }
    }
  return(t);
}
ATerm i_13 (ATerm t)
{
  ATerm d_156 = NULL,e_156 = NULL;
  t = term_i_58;
  d_156 = t;
  t = term_g_15;
  e_156 = t;
  t = term_l_59;
  t = k_16(d_156, e_156, t);
  t = term_n_59;
  return(t);
}
ATerm y_13 (ATerm t)
{
  t = term_o_59;
  return(t);
}
ATerm a_14 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_122 (ATerm), ATerm t)
{
  ATerm v_155 = NULL,w_155 = NULL,x_155 = NULL,y_155 = NULL,z_155 = NULL,a_156 = NULL,b_156 = NULL;
  x_155 = t;
  t = term_a_57;
  z_155 = t;
  t = term_b_57;
  a_156 = t;
  t = (ATerm) ATempty;
  b_156 = t;
  t = SSL_table_put(z_155, a_156, b_156);
  t = x_155;
  {
    ATerm e_13 (ATerm t)
    {
      ATerm p_59 = t;
      int q_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_122(t);
          ;
          LocalPopChoice(q_59);
        }
      else
        {
          t = p_59;
          {
            ATerm r_59 = t;
            int s_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(g_13, i_13, y_13, t);
                ;
                LocalPopChoice(s_59);
              }
            else
              {
                t = r_59;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_13, t);
    {
      ATerm t_59 = t;
      int u_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_156 = NULL;
          l_156 = t;
          {
            ATerm v_59 = t;
            int w_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_62 = NULL;
                t = l_156;
                {
                  ATerm y_59 = t;
                  int z_59 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_i_58;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(z_59);
                    }
                  else
                    {
                      t = y_59;
                      t = fetch_1_0(a_14, t);
                    }
                  t = l_156;
                  t = default_system_usage_0_0(t);
                  t = term_l_43;
                  f_62 = t;
                  t = SSL_exit(f_62);
                }
                ;
                LocalPopChoice(w_59);
              }
            else
              {
                t = v_59;
                {
                  ATerm r_62 = NULL;
                  t = term_s_58;
                  t = get_config_0_0(t);
                  t = l_156;
                  t = default_system_about_0_0(t);
                  t = term_l_43;
                  r_62 = t;
                  t = SSL_exit(r_62);
                }
              }
          }
          ;
          LocalPopChoice(u_59);
        }
      else
        {
          t = t_59;
          {
            ATerm b_60 = t;
            int c_60 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_156 = NULL,n_156 = NULL,o_156 = NULL;
                ATerm u_14 (ATerm t)
                {
                  ATerm p_156 = NULL,q_156 = NULL,r_156 = NULL,i_68 = NULL;
                  r_156 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      q_156 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_156);
                  p_156 = t;
                  t = q_156;
                  if(((v_155 != NULL) && (v_155 != t)))
                    _fail(t);
                  else
                    v_155 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, q_156);
                  i_68 = t;
                  t = SSLsetAnnotations(i_68, p_156);
                  return(t);
                }
                t = fetch_1_0(u_14, t);
                t = term_h_15;
                n_156 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_155)), term_d_60);
                o_156 = t;
                t = SSL_printnl(n_156, o_156);
                t = (ATerm) ATmakeAppl(sym__2, term_h_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_155)), term_d_60));
                t = default_system_usage_0_0(t);
                t = term_k_15;
                m_156 = t;
                t = SSL_exit(m_156);
                ;
                LocalPopChoice(c_60);
              }
            else
              {
                t = b_60;
              }
          }
        }
      w_155 = t;
      t = term_a_57;
      y_155 = t;
      t = SSL_table_destroy(y_155);
      t = w_155;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm t)
{
  ATerm w_156 = NULL,x_156 = NULL,y_156 = NULL,z_156 = NULL;
  t = parse_options_1_0(c_120, t);
  w_156 = t;
  t = term_e_60;
  z_156 = t;
  t = SSL_table_create(z_156);
  t = term_e_60;
  x_156 = t;
  t = term_f_60;
  y_156 = t;
  t = SSL_table_put(x_156, y_156, w_156);
  t = w_156;
  t = e_120(t);
  {
    ATerm g_60 = t;
    int h_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_120, t);
        ;
        LocalPopChoice(h_60);
      }
    else
      {
        t = g_60;
        {
          ATerm i_60 = t;
          int j_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_120(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(j_60);
            }
          else
            {
              t = i_60;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm w_14 (ATerm t)
{
  t = if_verbose2_1_0(b_15, t);
  return(t);
}
ATerm y_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_14 (ATerm t)
{
  ATerm a_157 = NULL,b_157 = NULL;
  t = term_k_60;
  a_157 = t;
  t = term_g_15;
  b_157 = t;
  t = term_l_60;
  t = k_16(a_157, b_157, t);
  t = term_m_60;
  return(t);
}
ATerm a_15 (ATerm t)
{
  t = term_t_60;
  return(t);
}
ATerm b_15 (ATerm t)
{
  ATerm c_157 = NULL,d_157 = NULL,e_157 = NULL,f_157 = NULL;
  c_157 = t;
  t = term_l_57;
  t = get_config_0_0(t);
  d_157 = t;
  t = term_h_15;
  e_157 = t;
  t = (ATerm) ATinsert(ATempty, d_157);
  f_157 = t;
  t = SSL_printnl(e_157, f_157);
  t = c_157;
  return(t);
}
ATerm iowrap_3_0 (ATerm l_119 (ATerm), ATerm m_119 (ATerm), ATerm n_119 (ATerm), ATerm t)
{
  ATerm v_14 (ATerm t)
  {
    ATerm u_60 = t;
    int v_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_119(t);
        ;
        LocalPopChoice(v_60);
      }
    else
      {
        t = u_60;
        {
          ATerm w_60 = t;
          int x_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(x_60);
            }
          else
            {
              t = w_60;
              {
                ATerm y_60 = t;
                int z_60 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(z_60);
                  }
                else
                  {
                    t = y_60;
                    {
                      ATerm a_61 = t;
                      int b_61 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(y_14, z_14, a_15, t);
                          ;
                          LocalPopChoice(b_61);
                        }
                      else
                        {
                          t = a_61;
                          {
                            ATerm c_61 = t;
                            int d_61 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(d_61);
                              }
                            else
                              {
                                t = c_61;
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
  ATerm x_14 (ATerm t)
  {
    ATerm g_157 = NULL,h_157 = NULL,i_157 = NULL;
    h_157 = t;
    {
      ATerm f_61 = t;
      int g_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_15 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((g_157 != NULL) && (g_157 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_157 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(c_15, t);
          ;
          LocalPopChoice(g_61);
        }
      else
        {
          t = f_61;
          t = term_h_61;
          g_157 = t;
        }
      t = not_null(g_157);
      t = ReadFromFile_0_0(t);
      i_157 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_157, i_157);
      t = apply_strategy_1_0(l_119, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(v_14, n_119, w_14, x_14, t);
  return(t);
}
ATerm d_15 (ATerm t)
{
  ATerm j_157 = NULL,k_157 = NULL,l_157 = NULL,m_157 = NULL,n_157 = NULL,o_157 = NULL,p_157 = NULL,q_157 = NULL,r_157 = NULL,s_157 = NULL,t_157 = NULL,u_157 = NULL,s_68 = NULL,q_68 = NULL,p_68 = NULL;
  u_157 = t;
  if(match_cons(t, sym__2))
    {
      k_157 = ATgetArgument(t, 0);
      l_157 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_157);
  j_157 = t;
  t = l_157;
  if(match_cons(t, sym_Specification_1))
    {
      n_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_157);
  m_157 = t;
  t = n_157;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_157 = ATgetFirst((ATermList) t);
      r_157 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_157);
  p_157 = t;
  t = r_157;
  t = Cons_2_0(e_15, f_15, t);
  s_157 = t;
  t = (ATerm) ATinsert(CheckATermList(s_157), q_157);
  p_68 = t;
  t = SSLsetAnnotations(p_68, p_157);
  t_157 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, t_157);
  q_68 = t;
  t = SSLsetAnnotations(q_68, m_157);
  o_157 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_157, o_157);
  s_68 = t;
  t = SSLsetAnnotations(s_68, j_157);
  return(t);
}
ATerm e_15 (ATerm t)
{
  ATerm v_157 = NULL,w_157 = NULL,x_157 = NULL,y_157 = NULL,n_68 = NULL;
  y_157 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      w_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_157);
  v_157 = t;
  t = w_157;
  t = inline_sdefs_0_0(t);
  x_157 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, x_157);
  n_68 = t;
  t = SSLsetAnnotations(n_68, v_157);
  return(t);
}
ATerm f_15 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(d_15, _fail, default_usage_0_0, t);
  return(t);
}
