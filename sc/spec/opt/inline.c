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
ATerm term_y_60;
ATerm term_b_60;
ATerm term_a_60;
ATerm term_z_59;
ATerm term_y_59;
ATerm term_m_59;
ATerm term_l_59;
ATerm term_k_59;
ATerm term_s_58;
ATerm term_r_58;
ATerm term_q_58;
ATerm term_c_58;
ATerm term_u_57;
ATerm term_t_57;
ATerm term_s_57;
ATerm term_r_57;
ATerm term_p_57;
ATerm term_n_57;
ATerm term_m_57;
ATerm term_h_57;
ATerm term_g_57;
ATerm term_d_57;
ATerm term_c_57;
ATerm term_z_56;
ATerm term_y_56;
ATerm term_n_56;
ATerm term_m_56;
ATerm term_k_56;
ATerm term_j_56;
ATerm term_e_56;
ATerm term_b_56;
ATerm term_a_56;
ATerm term_z_55;
ATerm term_u_55;
ATerm term_t_55;
ATerm term_s_55;
ATerm term_q_55;
ATerm term_p_55;
ATerm term_o_55;
ATerm term_n_55;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_k_55;
ATerm term_j_55;
ATerm term_i_55;
ATerm term_c_55;
ATerm term_q_54;
ATerm term_c_54;
ATerm term_z_53;
ATerm term_g_53;
ATerm term_c_53;
ATerm term_w_52;
ATerm term_c_45;
ATerm term_p_44;
ATerm term_o_44;
ATerm term_s_43;
ATerm term_l_43;
ATerm term_r_42;
ATerm term_q_42;
ATerm term_g_42;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_q_33;
ATerm term_g_33;
ATerm term_i_32;
ATerm term_o_17;
ATerm term_i_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
void init_constant_terms (void)
{
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Sort_2, term_a_17, (ATerm) ATempty);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_ConstType_1, term_b_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeInt(50);
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(sym__2, term_i_55, term_r_42);
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_42);
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(sym__2, term_q_55, term_k_16);
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_55));
  term_u_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_56));
  term_k_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_56));
  term_y_56 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_56));
  term_z_56 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(sym__2, term_z_55, term_a_56);
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(sym__2, term_m_57, term_k_16);
  ATprotect(&(term_p_57));
  term_p_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_57));
  term_r_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(sym__2, term_r_57, term_k_16);
  ATprotect(&(term_t_57));
  term_t_57 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_58));
  term_c_58 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_58));
  term_q_58 = (ATerm) ATmakeAppl(sym__2, term_c_57, term_k_16);
  ATprotect(&(term_r_58));
  term_r_58 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_58));
  term_s_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_59));
  term_k_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_59));
  term_l_59 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_59));
  term_m_59 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_59));
  term_y_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(sym__2, term_y_59, term_k_16);
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_60));
  term_y_60 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm b_7 (ATerm j_58, ATerm k_58, ATerm);
ATerm bottomup_1_0 (ATerm k_119 (ATerm), ATerm);
ATerm w_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm simplify_0_0 (ATerm);
ATerm SubsArgCall2_0_0 (ATerm);
ATerm SubsArgCall1_0_0 (ATerm);
ATerm topdown_1_0 (ATerm j_119 (ATerm), ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm substitute_arg_0_0 (ATerm);
ATerm w_1 (ATerm);
ATerm y_1 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm substitute_args_0_0 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm q_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm b_3 (ATerm);
ATerm spaste_1_0 (ATerm n_118 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm o_118 (ATerm), ATerm p_118 (ATerm), ATerm q_118 (ATerm), ATerm);
ATerm i_3 (ATerm);
ATerm p_13 (ATerm g_44, ATerm f_44, ATerm);
ATerm SVar_1_0 (ATerm v_107 (ATerm), ATerm);
ATerm b_14 (ATerm x_132 (ATerm), ATerm y_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_60, ATerm k_60, ATerm j_60, ATerm);
ATerm new_0_0 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm c_14 (ATerm r_132 (ATerm), ATerm s_132 (ATerm (ATerm), ATerm), ATerm d_60, ATerm g_60, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm f_133 (ATerm), ATerm);
ATerm rename_4_0 (ATerm m_132 (ATerm (ATerm), ATerm), ATerm n_132 (ATerm), ATerm o_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm p_132 (ATerm (ATerm), ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm tpaste_1_0 (ATerm j_118 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm k_118 (ATerm), ATerm l_118 (ATerm), ATerm m_118 (ATerm), ATerm);
ATerm g_4 (ATerm);
ATerm j_4 (ATerm);
ATerm q_4 (ATerm);
ATerm s_4 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm v_13 (ATerm x_127 (ATerm), ATerm p_52, ATerm o_52, ATerm);
ATerm w_13 (ATerm a_128 (ATerm), ATerm b_128 (ATerm), ATerm t_52, ATerm s_52, ATerm);
ATerm x_13 (ATerm s_127 (ATerm), ATerm n_52, ATerm m_52, ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm z_13 (ATerm h_586, ATerm m_586, ATerm l_74, ATerm);
ATerm while_not_2_0 (ATerm v_136 (ATerm), ATerm w_136 (ATerm), ATerm);
ATerm for_3_0 (ATerm y_136 (ATerm), ATerm z_136 (ATerm), ATerm a_137 (ATerm), ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm c_105 (ATerm v_103, ATerm w_103, ATerm x_103, ATerm);
ATerm e_5 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm g_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm o_5 (ATerm);
ATerm q_5 (ATerm);
ATerm free_vars_3_0 (ATerm p_134 (ATerm), ATerm q_134 (ATerm), ATerm r_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm r_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm m_104 (ATerm), ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm s_6 (ATerm);
ATerm v_6 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm InlineCall_0_0 (ATerm);
ATerm t_7 (ATerm);
ATerm v_7 (ATerm);
ATerm occurrences_1_0 (ATerm e_128 (ATerm), ATerm);
ATerm h_14 (ATerm o_117 (ATerm), ATerm j_43, ATerm i_43, ATerm);
ATerm k_14 (ATerm d_58, ATerm e_58, ATerm);
ATerm end_scope_1_0 (ATerm t_131 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm q_122 (ATerm), ATerm r_122 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm s_131 (ATerm), ATerm);
ATerm scope_2_0 (ATerm u_131 (ATerm), ATerm v_131 (ATerm), ATerm);
ATerm b_8 (ATerm);
ATerm d_8 (ATerm);
ATerm f_8 (ATerm);
ATerm inline_sdef_0_0 (ATerm);
ATerm l_14 (ATerm w_131 (ATerm), ATerm q_57, ATerm o_57, ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm AddSDef_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm foldr_3_0 (ATerm n_130 (ATerm), ATerm o_130 (ATerm), ATerm p_130 (ATerm), ATerm);
ATerm l_8 (ATerm);
ATerm o_8 (ATerm);
ATerm x_8 (ATerm);
ATerm z_8 (ATerm);
ATerm term_size_0_0 (ATerm);
ATerm Seq_2_0 (ATerm k_108 (ATerm), ATerm l_108 (ATerm), ATerm);
ATerm c_9 (ATerm);
ATerm body_to_inline_0_0 (ATerm);
ATerm inlineable_0_0 (ATerm);
ATerm Anno__Cong_____2_0 (ATerm j_117 (ATerm), ATerm k_117 (ATerm), ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm o_14 (ATerm c_90, ATerm b_90, ATerm);
ATerm MatchBuildIdemVar_0_0 (ATerm);
ATerm BuildMatchIdem_0_0 (ATerm);
ATerm MatchIdem_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildBuild_0_0 (ATerm);
ATerm genzip_4_0 (ATerm v_123 (ATerm), ATerm w_123 (ATerm), ATerm x_123 (ATerm), ATerm y_123 (ATerm), ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm p_9 (ATerm);
ATerm q_9 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm n_120 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm a_126 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm u_133 (ATerm m_133, ATerm);
ATerm conc_0_0 (ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm v_9 (ATerm);
ATerm w_9 (ATerm);
ATerm x_9 (ATerm);
ATerm y_9 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm e_10 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm g_136 (ATerm), ATerm);
ATerm downup_1_0 (ATerm l_119 (ATerm), ATerm);
ATerm g_10 (ATerm);
ATerm h_10 (ATerm);
ATerm inline_sdefs_0_0 (ATerm);
ATerm Cons_2_0 (ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm);
ATerm m_15 (ATerm n_94, ATerm o_94, ATerm);
ATerm n_15 (ATerm m_97, ATerm n_97, ATerm);
ATerm p_15 (ATerm x_146 (ATerm), ATerm a_779, ATerm q_97, ATerm);
ATerm o_15 (ATerm i_97, ATerm j_97, ATerm);
ATerm j_10 (ATerm);
ATerm k_10 (ATerm);
ATerm l_10 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm m_141 (ATerm), ATerm);
ATerm w_147 (ATerm q_147, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm q_15 (ATerm o_97, ATerm);
ATerm r_15 (ATerm p_94, ATerm q_94, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm i_149 (ATerm h_148, ATerm);
ATerm j_149 (ATerm l_148, ATerm m_148, ATerm n_148, ATerm);
ATerm k_149 (ATerm v_148, ATerm w_148, ATerm x_148, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm o_10 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm u_125 (ATerm), ATerm);
ATerm l_15 (ATerm f_66, ATerm g_66, ATerm);
ATerm debug_1_0 (ATerm v_146 (ATerm), ATerm);
ATerm p_10 (ATerm);
ATerm t_10 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm a_140 (ATerm), ATerm);
ATerm b_11 (ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm e_11 (ATerm);
ATerm f_11 (ATerm);
ATerm j_11 (ATerm);
ATerm k_11 (ATerm);
ATerm l_11 (ATerm);
ATerm m_11 (ATerm);
ATerm r_11 (ATerm);
ATerm t_11 (ATerm);
ATerm u_11 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm x_15 (ATerm l_68, ATerm m_68, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm w_11 (ATerm);
ATerm x_11 (ATerm);
ATerm y_11 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm v_15 (ATerm y_57, ATerm z_57, ATerm x_57, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm e_12 (ATerm);
ATerm f_12 (ATerm);
ATerm g_12 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm s_15 (ATerm c_56, ATerm d_56, ATerm);
ATerm foldr_2_0 (ATerm l_130 (ATerm), ATerm m_130 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm h_12 (ATerm);
ATerm i_12 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_139 (ATerm), ATerm);
ATerm j_12 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm k_12 (ATerm);
ATerm need_help_1_0 (ATerm k_142 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_125 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm u_15 (ATerm p_59, ATerm q_59, ATerm);
ATerm m_12 (ATerm);
ATerm q_12 (ATerm);
ATerm r_12 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm u_12 (ATerm);
ATerm v_12 (ATerm);
ATerm w_12 (ATerm);
ATerm x_12 (ATerm);
ATerm z_12 (ATerm);
ATerm a_13 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm n_144 (ATerm), ATerm);
ATerm c_13 (ATerm);
ATerm d_13 (ATerm);
ATerm f_13 (ATerm);
ATerm g_13 (ATerm);
ATerm parse_options_1_0 (ATerm m_144 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm m_142 (ATerm), ATerm n_142 (ATerm), ATerm o_142 (ATerm), ATerm p_142 (ATerm), ATerm);
ATerm s_13 (ATerm);
ATerm r_14 (ATerm);
ATerm s_14 (ATerm);
ATerm t_14 (ATerm);
ATerm h_15 (ATerm);
ATerm iowrap_3_0 (ATerm v_141 (ATerm), ATerm w_141 (ATerm), ATerm x_141 (ATerm), ATerm);
ATerm b_16 (ATerm);
ATerm i_16 (ATerm);
ATerm j_16 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL,r_0 = NULL;
  m_0 = t;
  t = term_k_16;
  t = whoami_0_0(t);
  o_0 = t;
  t = term_l_16;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_16), o_0), term_m_16);
  r_0 = t;
  t = SSL_printnl(q_0, r_0);
  t = term_o_16;
  p_0 = t;
  t = SSL_exit(p_0);
  t = m_0;
  return(t);
}
ATerm b_7 (ATerm j_58, ATerm k_58, ATerm t)
{
  ATerm s_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_58, k_58);
  t = u_15(j_58, k_58, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_0 = ATgetFirst((ATermList) t);
      {
        ATerm p_16 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_0;
  return(t);
}
ATerm bottomup_1_0 (ATerm k_119 (ATerm), ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    t = bottomup_1_0(k_119, t);
    return(t);
  }
  t = SRTS_all(t_0, t);
  t = k_119(t);
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm q_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_6 = NULL,w_6 = NULL,x_6 = NULL,y_0 = NULL,u_0 = NULL;
      u_6 = t;
      if(match_cons(t, sym_Op_2))
        {
          w_6 = ATgetArgument(t, 0);
          x_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_6);
      y_0 = t;
      t = w_6;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Op_2, w_6, x_6);
      u_0 = t;
      t = SSLsetAnnotations(u_0, y_0);
      ;
      LocalPopChoice(r_16);
    }
  else
    {
      t = q_16;
      t = Anno__Cong_____2_0(z_0, a_1, t);
    }
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL,c_7 = NULL,x_0 = NULL;
  c_7 = t;
  if(match_cons(t, sym_Var_1))
    {
      a_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_7);
  z_6 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, a_7);
  x_0 = t;
  t = SSLsetAnnotations(x_0, z_6);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL;
  n_7 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_7;
    }
  else
    {
      ATerm i_1 = NULL,p_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_7 = ATgetFirst((ATermList) t);
          p_7 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_7);
      i_1 = t;
      t = o_7;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      t = p_7;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(p_7), o_7);
      p_2 = t;
      t = SSLsetAnnotations(p_2, i_1);
    }
  return(t);
}
ATerm b_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_16 = ATgetArgument(t, 0);
      if(((ATgetType(s_16) != AT_LIST) || !(ATisEmpty(s_16))))
        _fail(t);
      {
        ATerm t_16 = ATgetArgument(t, 1);
        if(((ATgetType(t_16) != AT_LIST) || !(ATisEmpty(t_16))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,z_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_16 = ATgetArgument(t, 0);
      if(((ATgetType(u_16) == AT_LIST) && !(ATisEmpty(u_16))))
        {
          v_17 = ATgetFirst((ATermList) u_16);
          w_17 = (ATerm) ATgetNext((ATermList) u_16);
        }
      else
        _fail(t);
      {
        ATerm v_16 = ATgetArgument(t, 1);
        if(((ATgetType(v_16) == AT_LIST) && !(ATisEmpty(v_16))))
          {
            x_17 = ATgetFirst((ATermList) v_16);
            z_17 = (ATerm) ATgetNext((ATermList) v_16);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_17, x_17), (ATerm) ATmakeAppl(sym__2, w_17, z_17));
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm a_18 = NULL,c_18 = NULL;
  if(match_cons(t, sym__2))
    {
      a_18 = ATgetArgument(t, 0);
      c_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_18), a_18);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL;
  if(match_cons(t, sym__2))
    {
      d_18 = ATgetArgument(t, 0);
      e_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_18), (ATerm) ATmakeAppl(sym_Match_1, e_18));
  return(t);
}
ATerm f_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_16 = ATgetArgument(t, 0);
      if(((ATgetType(w_16) != AT_LIST) || !(ATisEmpty(w_16))))
        _fail(t);
      {
        ATerm x_16 = ATgetArgument(t, 1);
        if(((ATgetType(x_16) != AT_LIST) || !(ATisEmpty(x_16))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm g_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_16 = ATgetArgument(t, 0);
      if(((ATgetType(y_16) == AT_LIST) && !(ATisEmpty(y_16))))
        {
          g_26 = ATgetFirst((ATermList) y_16);
          i_26 = (ATerm) ATgetNext((ATermList) y_16);
        }
      else
        _fail(t);
      {
        ATerm z_16 = ATgetArgument(t, 1);
        if(((ATgetType(z_16) == AT_LIST) && !(ATisEmpty(z_16))))
          {
            j_26 = ATgetFirst((ATermList) z_16);
            k_26 = (ATerm) ATgetNext((ATermList) z_16);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_26, j_26), (ATerm) ATmakeAppl(sym__2, i_26, k_26));
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm n_26 = NULL,s_26 = NULL;
  if(match_cons(t, sym__2))
    {
      n_26 = ATgetArgument(t, 0);
      s_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_26), n_26);
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL;
  if(match_cons(t, sym__2))
    {
      t_26 = ATgetArgument(t, 0);
      u_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_26), (ATerm) ATmakeAppl(sym_Match_1, u_26));
  return(t);
}
ATerm k_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm s_59 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      s_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, s_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_17), term_c_17));
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL;
  u_59 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      t_59 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, t_59, term_c_17);
    }
  else
    {
      t = u_59;
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm v_60 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      v_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, v_60, term_c_17);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL;
  e_61 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      d_61 = ATgetArgument(t, 0);
      {
        ATerm d_17 = t;
        int e_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, d_61, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_17), term_c_17));
            ;
            LocalPopChoice(e_17);
          }
        else
          {
            t = d_17;
            t = e_61;
          }
      }
    }
  else
    {
      t = e_61;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm v_61 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      v_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, v_61, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_17), term_c_17));
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm x_61 = NULL,y_61 = NULL;
  y_61 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      x_61 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, x_61, term_c_17);
    }
  else
    {
      t = y_61;
    }
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    ATerm y_66 (ATerm i_6, ATerm t)
    {
      t = i_6;
      {
        ATerm f_17 = t;
        if((PushChoice() == 0))
          {
            t = oncetd_1_0(w_0, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = f_17;
          }
        t = (ATerm) ATmakeAppl(sym_Build_1, i_6);
        t = bottomup_1_0(v_0, t);
      }
      return(t);
    }
    ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL,u_7 = NULL,p_8 = NULL,w_8 = NULL,d_9 = NULL,n_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,a_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
    q_11 = t;
    if(match_cons(t, sym_Test_1))
      {
        p_11 = ATgetArgument(t, 0);
        t = p_11;
        if(match_cons(t, sym_Id_0))
          {
            ATerm g_17 = t;
            int h_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_i_17;
                t = v_0(t);
                ;
                LocalPopChoice(h_17);
              }
            else
              {
                t = g_17;
                {
                  ATerm j_17 = t;
                  int k_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_11 = NULL,a_12 = NULL,n_12 = NULL,p_12 = NULL,y_12 = NULL,h_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,q_13 = NULL,r_13 = NULL;
                      t = q_11;
                      t = new_0_0(t);
                      v_11 = t;
                      t = bottomup_1_0(v_0, t);
                      q_13 = t;
                      t = (ATerm) ATempty;
                      t = v_0(t);
                      r_13 = t;
                      t = (ATerm) ATinsert(CheckATermList(r_13), q_13);
                      t = v_0(t);
                      a_12 = t;
                      t = v_11;
                      t = bottomup_1_0(v_0, t);
                      o_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, o_13);
                      t = v_0(t);
                      n_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, n_13);
                      t = v_0(t);
                      p_12 = t;
                      t = p_11;
                      t = bottomup_1_0(v_0, t);
                      h_13 = t;
                      t = v_11;
                      t = bottomup_1_0(v_0, t);
                      m_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, m_13);
                      t = v_0(t);
                      l_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, l_13);
                      t = v_0(t);
                      k_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_13, k_13);
                      t = v_0(t);
                      y_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_12, y_12);
                      t = v_0(t);
                      n_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, a_12, n_12);
                      t = v_0(t);
                      ;
                      LocalPopChoice(k_17);
                    }
                  else
                    {
                      t = j_17;
                      t = q_11;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm l_17 = t;
                int m_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_o_17;
                    t = v_0(t);
                    ;
                    LocalPopChoice(m_17);
                  }
                else
                  {
                    t = l_17;
                    {
                      ATerm p_17 = t;
                      int q_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm u_13 = NULL,y_13 = NULL,a_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,i_14 = NULL,j_14 = NULL,m_14 = NULL,n_14 = NULL,p_14 = NULL,q_14 = NULL;
                          t = q_11;
                          t = new_0_0(t);
                          u_13 = t;
                          t = bottomup_1_0(v_0, t);
                          p_14 = t;
                          t = (ATerm) ATempty;
                          t = v_0(t);
                          q_14 = t;
                          t = (ATerm) ATinsert(CheckATermList(q_14), p_14);
                          t = v_0(t);
                          y_13 = t;
                          t = u_13;
                          t = bottomup_1_0(v_0, t);
                          n_14 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, n_14);
                          t = v_0(t);
                          m_14 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, m_14);
                          t = v_0(t);
                          d_14 = t;
                          t = p_11;
                          t = bottomup_1_0(v_0, t);
                          f_14 = t;
                          t = u_13;
                          t = bottomup_1_0(v_0, t);
                          j_14 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, j_14);
                          t = v_0(t);
                          i_14 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, i_14);
                          t = v_0(t);
                          g_14 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_14, g_14);
                          t = v_0(t);
                          e_14 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_14, e_14);
                          t = v_0(t);
                          a_14 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, y_13, a_14);
                          t = v_0(t);
                          ;
                          LocalPopChoice(q_17);
                        }
                      else
                        {
                          t = p_17;
                          t = q_11;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    i_11 = ATgetArgument(t, 0);
                    {
                      ATerm r_17 = t;
                      int s_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, i_11);
                          t = v_0(t);
                          ;
                          LocalPopChoice(s_17);
                        }
                      else
                        {
                          t = r_17;
                          {
                            ATerm u_17 = t;
                            int g_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL;
                                t = q_11;
                                t = new_0_0(t);
                                u_14 = t;
                                t = bottomup_1_0(v_0, t);
                                f_15 = t;
                                t = (ATerm) ATempty;
                                t = v_0(t);
                                g_15 = t;
                                t = (ATerm) ATinsert(CheckATermList(g_15), f_15);
                                t = v_0(t);
                                v_14 = t;
                                t = u_14;
                                t = bottomup_1_0(v_0, t);
                                e_15 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, e_15);
                                t = v_0(t);
                                d_15 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, d_15);
                                t = v_0(t);
                                x_14 = t;
                                t = p_11;
                                t = bottomup_1_0(v_0, t);
                                z_14 = t;
                                t = u_14;
                                t = bottomup_1_0(v_0, t);
                                c_15 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, c_15);
                                t = v_0(t);
                                b_15 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, b_15);
                                t = v_0(t);
                                a_15 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, z_14, a_15);
                                t = v_0(t);
                                y_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, x_14, y_14);
                                t = v_0(t);
                                w_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, v_14, w_14);
                                t = v_0(t);
                                ;
                                LocalPopChoice(g_18);
                              }
                            else
                              {
                                t = u_17;
                                t = q_11;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm h_18 = t;
                    int i_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm j_15 = NULL,k_15 = NULL,t_15 = NULL,w_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL;
                        t = q_11;
                        t = new_0_0(t);
                        j_15 = t;
                        t = bottomup_1_0(v_0, t);
                        g_16 = t;
                        t = (ATerm) ATempty;
                        t = v_0(t);
                        h_16 = t;
                        t = (ATerm) ATinsert(CheckATermList(h_16), g_16);
                        t = v_0(t);
                        k_15 = t;
                        t = j_15;
                        t = bottomup_1_0(v_0, t);
                        f_16 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, f_16);
                        t = v_0(t);
                        e_16 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, e_16);
                        t = v_0(t);
                        w_15 = t;
                        t = p_11;
                        t = bottomup_1_0(v_0, t);
                        z_15 = t;
                        t = j_15;
                        t = bottomup_1_0(v_0, t);
                        d_16 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, d_16);
                        t = v_0(t);
                        c_16 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, c_16);
                        t = v_0(t);
                        a_16 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, z_15, a_16);
                        t = v_0(t);
                        y_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, w_15, y_15);
                        t = v_0(t);
                        t_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, k_15, t_15);
                        t = v_0(t);
                        ;
                        LocalPopChoice(i_18);
                      }
                    else
                      {
                        t = h_18;
                        t = q_11;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            p_11 = ATgetArgument(t, 0);
            t = p_11;
            if(match_cons(t, sym_Id_0))
              {
                ATerm k_18 = t;
                int l_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_o_17;
                    t = v_0(t);
                    ;
                    LocalPopChoice(l_18);
                  }
                else
                  {
                    t = k_18;
                    t = q_11;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm m_18 = t;
                    int n_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_i_17;
                        t = v_0(t);
                        ;
                        LocalPopChoice(n_18);
                      }
                    else
                      {
                        t = m_18;
                        t = q_11;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        i_11 = ATgetArgument(t, 0);
                        {
                          ATerm p_18 = t;
                          int q_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, i_11);
                              t = v_0(t);
                              ;
                              LocalPopChoice(q_18);
                            }
                          else
                            {
                              t = p_18;
                              t = q_11;
                            }
                        }
                      }
                    else
                      {
                        t = q_11;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                p_11 = ATgetArgument(t, 0);
                o_11 = ATgetArgument(t, 1);
                t = o_11;
                if(match_cons(t, sym_Id_0))
                  {
                    t = p_11;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = o_11;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = p_11;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                i_11 = ATgetArgument(t, 0);
                                n_11 = ATgetArgument(t, 1);
                                t = p_11;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    i_11 = ATgetArgument(t, 0);
                                    n_11 = ATgetArgument(t, 1);
                                    t = p_11;
                                  }
                                else
                                  {
                                    t = p_11;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        g_11 = ATgetArgument(t, 0);
                        h_11 = ATgetArgument(t, 1);
                        t = g_11;
                        if(match_cons(t, sym_Match_1))
                          {
                            a_11 = ATgetArgument(t, 0);
                            t = a_11;
                            if(match_cons(t, sym_Op_2))
                              {
                                w_10 = ATgetArgument(t, 0);
                                n_10 = ATgetArgument(t, 1);
                                t = p_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_11;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm r_18 = t;
                                        int s_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_o_17;
                                            t = v_0(t);
                                            ;
                                            LocalPopChoice(s_18);
                                          }
                                        else
                                          {
                                            t = r_18;
                                            t = q_11;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            i_11 = ATgetArgument(t, 0);
                                            n_11 = ATgetArgument(t, 1);
                                            {
                                              ATerm t_18 = t;
                                              int u_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm n_17 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                  t = v_0(t);
                                                  n_17 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_11, n_17);
                                                  t = v_0(t);
                                                  ;
                                                  LocalPopChoice(u_18);
                                                }
                                              else
                                                {
                                                  t = t_18;
                                                  t = q_11;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                i_11 = ATgetArgument(t, 0);
                                                t = i_11;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    x_10 = ATgetArgument(t, 0);
                                                    q_10 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm v_18 = t;
                                                      int w_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, x_10, w_10);
                                                          {
                                                            ATerm y_18 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm t_1 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    t_1 = ATgetArgument(t, 0);
                                                                    if((t_1 != ATgetArgument(t, 1)))
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
                                                                t = y_18;
                                                              }
                                                            t = term_o_17;
                                                            t = bottomup_1_0(v_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(w_18);
                                                        }
                                                      else
                                                        {
                                                          t = v_18;
                                                          {
                                                            ATerm z_18 = t;
                                                            int b_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm t_17 = NULL;
                                                                t = w_10;
                                                                if((x_10 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, q_10, n_10);
                                                                t = genzip_4_0(b_1, c_1, d_1, e_1, t);
                                                                t_17 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_17), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, x_10, q_10)), h_11));
                                                                t = bottomup_1_0(v_0, t);
                                                                ;
                                                                LocalPopChoice(b_19);
                                                              }
                                                            else
                                                              {
                                                                t = z_18;
                                                                {
                                                                  ATerm c_19 = t;
                                                                  int d_19 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm j_18 = NULL;
                                                                      t = a_11;
                                                                      if((i_11 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, i_11);
                                                                      t = v_0(t);
                                                                      j_18 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_18, h_11);
                                                                      t = v_0(t);
                                                                      ;
                                                                      LocalPopChoice(d_19);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = c_19;
                                                                      t = q_11;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm e_19 = t;
                                                    int g_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm o_18 = NULL;
                                                        t = a_11;
                                                        if((i_11 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, i_11);
                                                        t = v_0(t);
                                                        o_18 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, o_18, h_11);
                                                        t = v_0(t);
                                                        ;
                                                        LocalPopChoice(g_19);
                                                      }
                                                    else
                                                      {
                                                        t = e_19;
                                                        t = q_11;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    i_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm h_19 = t;
                                                      int i_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm a_19 = NULL;
                                                          t = a_11;
                                                          if((i_11 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, i_11);
                                                          t = v_0(t);
                                                          a_19 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_19, h_11);
                                                          t = v_0(t);
                                                          ;
                                                          LocalPopChoice(i_19);
                                                        }
                                                      else
                                                        {
                                                          t = h_19;
                                                          t = q_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_11 = ATgetArgument(t, 0);
                                                        n_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm k_19 = t;
                                                          int l_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_19 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                              t = v_0(t);
                                                              f_19 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_11, f_19);
                                                              t = v_0(t);
                                                              ;
                                                              LocalPopChoice(l_19);
                                                            }
                                                          else
                                                            {
                                                              t = k_19;
                                                              t = q_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_11;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = p_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_11;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm m_19 = t;
                                        int n_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_o_17;
                                            t = v_0(t);
                                            ;
                                            LocalPopChoice(n_19);
                                          }
                                        else
                                          {
                                            t = m_19;
                                            t = q_11;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            i_11 = ATgetArgument(t, 0);
                                            n_11 = ATgetArgument(t, 1);
                                            {
                                              ATerm o_19 = t;
                                              int p_19 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm w_19 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                  t = v_0(t);
                                                  w_19 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_11, w_19);
                                                  t = v_0(t);
                                                  ;
                                                  LocalPopChoice(p_19);
                                                }
                                              else
                                                {
                                                  t = o_19;
                                                  t = q_11;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                i_11 = ATgetArgument(t, 0);
                                                {
                                                  ATerm q_19 = t;
                                                  int r_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm a_20 = NULL;
                                                      t = a_11;
                                                      if((i_11 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, i_11);
                                                      t = v_0(t);
                                                      a_20 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_20, h_11);
                                                      t = v_0(t);
                                                      ;
                                                      LocalPopChoice(r_19);
                                                    }
                                                  else
                                                    {
                                                      t = q_19;
                                                      t = q_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    i_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm s_19 = t;
                                                      int t_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm g_20 = NULL;
                                                          t = a_11;
                                                          if((i_11 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, i_11);
                                                          t = v_0(t);
                                                          g_20 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_20, h_11);
                                                          t = v_0(t);
                                                          ;
                                                          LocalPopChoice(t_19);
                                                        }
                                                      else
                                                        {
                                                          t = s_19;
                                                          t = q_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_11 = ATgetArgument(t, 0);
                                                        n_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm u_19 = t;
                                                          int v_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm l_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                              t = v_0(t);
                                                              l_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_11, l_20);
                                                              t = v_0(t);
                                                              ;
                                                              LocalPopChoice(v_19);
                                                            }
                                                          else
                                                            {
                                                              t = u_19;
                                                              t = q_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_11;
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
                                a_11 = ATgetArgument(t, 0);
                                t = a_11;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    w_10 = ATgetArgument(t, 0);
                                    t = p_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm x_19 = t;
                                            int y_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_17;
                                                t = v_0(t);
                                                ;
                                                LocalPopChoice(y_19);
                                              }
                                            else
                                              {
                                                t = x_19;
                                                t = q_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                i_11 = ATgetArgument(t, 0);
                                                n_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm z_19 = t;
                                                  int b_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm f_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                      t = v_0(t);
                                                      f_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_11, f_21);
                                                      t = v_0(t);
                                                      ;
                                                      LocalPopChoice(b_20);
                                                    }
                                                  else
                                                    {
                                                      t = z_19;
                                                      t = q_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm c_20 = t;
                                                int d_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm e_20 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(d_20);
                                                    {
                                                      ATerm f_20 = t;
                                                      int h_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm l_21 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, a_11);
                                                          t = v_0(t);
                                                          l_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, l_21, h_11);
                                                          t = v_0(t);
                                                          ;
                                                          LocalPopChoice(h_20);
                                                        }
                                                      else
                                                        {
                                                          t = f_20;
                                                          t = q_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = c_20;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        i_11 = ATgetArgument(t, 0);
                                                        t = i_11;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            x_10 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm i_20 = t;
                                                              int j_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm q_21 = NULL,r_21 = NULL;
                                                                  t = w_10;
                                                                  if((x_10 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, x_10);
                                                                  t = v_0(t);
                                                                  r_21 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, r_21);
                                                                  t = v_0(t);
                                                                  q_21 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_21, h_11);
                                                                  t = v_0(t);
                                                                  ;
                                                                  LocalPopChoice(j_20);
                                                                }
                                                              else
                                                                {
                                                                  t = i_20;
                                                                  t = q_11;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = q_11;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            i_11 = ATgetArgument(t, 0);
                                                            n_11 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm k_20 = t;
                                                              int m_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm a_22 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                                  t = v_0(t);
                                                                  a_22 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, i_11, a_22);
                                                                  t = v_0(t);
                                                                  ;
                                                                  LocalPopChoice(m_20);
                                                                }
                                                              else
                                                                {
                                                                  t = k_20;
                                                                  t = q_11;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = q_11;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = p_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm n_20 = t;
                                            int p_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_17;
                                                t = v_0(t);
                                                ;
                                                LocalPopChoice(p_20);
                                              }
                                            else
                                              {
                                                t = n_20;
                                                t = q_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                i_11 = ATgetArgument(t, 0);
                                                n_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm q_20 = t;
                                                  int r_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                      t = v_0(t);
                                                      x_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_11, x_22);
                                                      t = v_0(t);
                                                      ;
                                                      LocalPopChoice(r_20);
                                                    }
                                                  else
                                                    {
                                                      t = q_20;
                                                      t = q_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm s_20 = t;
                                                int u_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm v_20 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(u_20);
                                                    {
                                                      ATerm w_20 = t;
                                                      int y_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm b_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, a_11);
                                                          t = v_0(t);
                                                          b_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_23, h_11);
                                                          t = v_0(t);
                                                          ;
                                                          LocalPopChoice(y_20);
                                                        }
                                                      else
                                                        {
                                                          t = w_20;
                                                          t = q_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = s_20;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_11 = ATgetArgument(t, 0);
                                                        n_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_21 = t;
                                                          int c_21 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                              t = v_0(t);
                                                              i_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_11, i_23);
                                                              t = v_0(t);
                                                              ;
                                                              LocalPopChoice(c_21);
                                                            }
                                                          else
                                                            {
                                                              t = b_21;
                                                              t = q_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_11;
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
                                    a_11 = ATgetArgument(t, 0);
                                    r_10 = ATgetArgument(t, 1);
                                    s_10 = ATgetArgument(t, 2);
                                    t = p_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm d_21 = t;
                                            int e_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_17;
                                                t = v_0(t);
                                                ;
                                                LocalPopChoice(e_21);
                                              }
                                            else
                                              {
                                                t = d_21;
                                                t = q_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                i_11 = ATgetArgument(t, 0);
                                                n_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm g_21 = t;
                                                  int h_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm y_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                      t = v_0(t);
                                                      y_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_11, y_23);
                                                      t = v_0(t);
                                                      ;
                                                      LocalPopChoice(h_21);
                                                    }
                                                  else
                                                    {
                                                      t = g_21;
                                                      t = q_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm i_21 = t;
                                                int m_21 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm n_21 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(m_21);
                                                    {
                                                      ATerm o_21 = t;
                                                      int s_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm e_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, a_11, r_10, s_10);
                                                          t = v_0(t);
                                                          e_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_24, h_11);
                                                          t = v_0(t);
                                                          ;
                                                          LocalPopChoice(s_21);
                                                        }
                                                      else
                                                        {
                                                          t = o_21;
                                                          t = q_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = i_21;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_11 = ATgetArgument(t, 0);
                                                        n_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_21 = t;
                                                          int u_21 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm l_24 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                              t = v_0(t);
                                                              l_24 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_11, l_24);
                                                              t = v_0(t);
                                                              ;
                                                              LocalPopChoice(u_21);
                                                            }
                                                          else
                                                            {
                                                              t = t_21;
                                                              t = q_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_11;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = p_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm w_21 = t;
                                            int x_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_17;
                                                t = v_0(t);
                                                ;
                                                LocalPopChoice(x_21);
                                              }
                                            else
                                              {
                                                t = w_21;
                                                t = q_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                i_11 = ATgetArgument(t, 0);
                                                n_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm z_21 = t;
                                                  int b_22 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_24 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                      t = v_0(t);
                                                      x_24 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_11, x_24);
                                                      t = v_0(t);
                                                      ;
                                                      LocalPopChoice(b_22);
                                                    }
                                                  else
                                                    {
                                                      t = z_21;
                                                      t = q_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    i_11 = ATgetArgument(t, 0);
                                                    n_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm c_22 = t;
                                                      int d_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm j_25 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                          t = v_0(t);
                                                          j_25 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, i_11, j_25);
                                                          t = v_0(t);
                                                          ;
                                                          LocalPopChoice(d_22);
                                                        }
                                                      else
                                                        {
                                                          t = c_22;
                                                          t = q_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = q_11;
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
                            g_11 = ATgetArgument(t, 0);
                            t = g_11;
                            if(match_cons(t, sym_Op_2))
                              {
                                a_11 = ATgetArgument(t, 0);
                                r_10 = ATgetArgument(t, 1);
                                t = p_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_11;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm e_22 = t;
                                        int f_22 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_o_17;
                                            t = v_0(t);
                                            ;
                                            LocalPopChoice(f_22);
                                          }
                                        else
                                          {
                                            t = e_22;
                                            t = q_11;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            i_11 = ATgetArgument(t, 0);
                                            n_11 = ATgetArgument(t, 1);
                                            {
                                              ATerm g_22 = t;
                                              int j_22 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm u_25 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                  t = v_0(t);
                                                  u_25 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_11, u_25);
                                                  t = v_0(t);
                                                  ;
                                                  LocalPopChoice(j_22);
                                                }
                                              else
                                                {
                                                  t = g_22;
                                                  t = q_11;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                i_11 = ATgetArgument(t, 0);
                                                t = i_11;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    x_10 = ATgetArgument(t, 0);
                                                    q_10 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm k_22 = t;
                                                      int l_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, x_10, a_11);
                                                          {
                                                            ATerm m_22 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm a_2 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    a_2 = ATgetArgument(t, 0);
                                                                    if((a_2 != ATgetArgument(t, 1)))
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
                                                                t = m_22;
                                                              }
                                                            t = term_o_17;
                                                            t = bottomup_1_0(v_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(l_22);
                                                        }
                                                      else
                                                        {
                                                          t = k_22;
                                                          {
                                                            ATerm n_22 = t;
                                                            int o_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm e_26 = NULL;
                                                                t = a_11;
                                                                if((x_10 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, q_10, r_10);
                                                                t = genzip_4_0(f_1, g_1, h_1, j_1, t);
                                                                e_26 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, e_26), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, x_10, q_10)));
                                                                t = bottomup_1_0(v_0, t);
                                                                ;
                                                                LocalPopChoice(o_22);
                                                              }
                                                            else
                                                              {
                                                                t = n_22;
                                                                {
                                                                  ATerm p_22 = t;
                                                                  int q_22 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = g_11;
                                                                      if((i_11 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, i_11);
                                                                      t = v_0(t);
                                                                      ;
                                                                      LocalPopChoice(q_22);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = p_22;
                                                                      t = q_11;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm r_22 = t;
                                                    int s_22 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = g_11;
                                                        if((i_11 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, i_11);
                                                        t = v_0(t);
                                                        ;
                                                        LocalPopChoice(s_22);
                                                      }
                                                    else
                                                      {
                                                        t = r_22;
                                                        t = q_11;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    i_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm t_22 = t;
                                                      int u_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = g_11;
                                                          if((i_11 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, i_11);
                                                          t = v_0(t);
                                                          ;
                                                          LocalPopChoice(u_22);
                                                        }
                                                      else
                                                        {
                                                          t = t_22;
                                                          t = q_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_11 = ATgetArgument(t, 0);
                                                        n_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm v_22 = t;
                                                          int w_22 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                              t = v_0(t);
                                                              g_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_11, g_27);
                                                              t = v_0(t);
                                                              ;
                                                              LocalPopChoice(w_22);
                                                            }
                                                          else
                                                            {
                                                              t = v_22;
                                                              t = q_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_11;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = p_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_11;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm y_22 = t;
                                        int z_22 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_o_17;
                                            t = v_0(t);
                                            ;
                                            LocalPopChoice(z_22);
                                          }
                                        else
                                          {
                                            t = y_22;
                                            t = q_11;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            i_11 = ATgetArgument(t, 0);
                                            n_11 = ATgetArgument(t, 1);
                                            {
                                              ATerm a_23 = t;
                                              int c_23 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm c_28 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                  t = v_0(t);
                                                  c_28 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_11, c_28);
                                                  t = v_0(t);
                                                  ;
                                                  LocalPopChoice(c_23);
                                                }
                                              else
                                                {
                                                  t = a_23;
                                                  t = q_11;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                i_11 = ATgetArgument(t, 0);
                                                {
                                                  ATerm d_23 = t;
                                                  int e_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = g_11;
                                                      if((i_11 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, i_11);
                                                      t = v_0(t);
                                                      ;
                                                      LocalPopChoice(e_23);
                                                    }
                                                  else
                                                    {
                                                      t = d_23;
                                                      t = q_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    i_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm f_23 = t;
                                                      int g_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = g_11;
                                                          if((i_11 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, i_11);
                                                          t = v_0(t);
                                                          ;
                                                          LocalPopChoice(g_23);
                                                        }
                                                      else
                                                        {
                                                          t = f_23;
                                                          t = q_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_11 = ATgetArgument(t, 0);
                                                        n_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_23 = t;
                                                          int j_23 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm x_28 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                              t = v_0(t);
                                                              x_28 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_11, x_28);
                                                              t = v_0(t);
                                                              ;
                                                              LocalPopChoice(j_23);
                                                            }
                                                          else
                                                            {
                                                              t = h_23;
                                                              t = q_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_11;
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
                                g_11 = ATgetArgument(t, 0);
                                t = g_11;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    a_11 = ATgetArgument(t, 0);
                                    t = p_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm l_23 = t;
                                            int m_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_17;
                                                t = v_0(t);
                                                ;
                                                LocalPopChoice(m_23);
                                              }
                                            else
                                              {
                                                t = l_23;
                                                t = q_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                i_11 = ATgetArgument(t, 0);
                                                n_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm n_23 = t;
                                                  int o_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm h_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                      t = v_0(t);
                                                      h_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_11, h_29);
                                                      t = v_0(t);
                                                      ;
                                                      LocalPopChoice(o_23);
                                                    }
                                                  else
                                                    {
                                                      t = n_23;
                                                      t = q_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm p_23 = t;
                                                int q_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm r_23 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(q_23);
                                                    {
                                                      ATerm s_23 = t;
                                                      int t_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, g_11);
                                                          t = v_0(t);
                                                          ;
                                                          LocalPopChoice(t_23);
                                                        }
                                                      else
                                                        {
                                                          t = s_23;
                                                          t = q_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = p_23;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        i_11 = ATgetArgument(t, 0);
                                                        t = i_11;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            x_10 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm u_23 = t;
                                                              int v_23 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm k_30 = NULL;
                                                                  t = a_11;
                                                                  if((x_10 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, x_10);
                                                                  t = v_0(t);
                                                                  k_30 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, k_30);
                                                                  t = v_0(t);
                                                                  ;
                                                                  LocalPopChoice(v_23);
                                                                }
                                                              else
                                                                {
                                                                  t = u_23;
                                                                  t = q_11;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = q_11;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            i_11 = ATgetArgument(t, 0);
                                                            n_11 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm z_23 = t;
                                                              int a_24 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm w_30 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                                  t = v_0(t);
                                                                  w_30 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, i_11, w_30);
                                                                  t = v_0(t);
                                                                  ;
                                                                  LocalPopChoice(a_24);
                                                                }
                                                              else
                                                                {
                                                                  t = z_23;
                                                                  t = q_11;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = q_11;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = p_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm b_24 = t;
                                            int c_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_17;
                                                t = v_0(t);
                                                ;
                                                LocalPopChoice(c_24);
                                              }
                                            else
                                              {
                                                t = b_24;
                                                t = q_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                i_11 = ATgetArgument(t, 0);
                                                n_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm d_24 = t;
                                                  int f_24 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm n_31 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                      t = v_0(t);
                                                      n_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_11, n_31);
                                                      t = v_0(t);
                                                      ;
                                                      LocalPopChoice(f_24);
                                                    }
                                                  else
                                                    {
                                                      t = d_24;
                                                      t = q_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm g_24 = t;
                                                int h_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm j_24 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(h_24);
                                                    {
                                                      ATerm k_24 = t;
                                                      int m_24 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, g_11);
                                                          t = v_0(t);
                                                          ;
                                                          LocalPopChoice(m_24);
                                                        }
                                                      else
                                                        {
                                                          t = k_24;
                                                          t = q_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = g_24;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_11 = ATgetArgument(t, 0);
                                                        n_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm n_24 = t;
                                                          int p_24 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                              t = v_0(t);
                                                              g_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_11, g_32);
                                                              t = v_0(t);
                                                              ;
                                                              LocalPopChoice(p_24);
                                                            }
                                                          else
                                                            {
                                                              t = n_24;
                                                              t = q_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_11;
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
                                    g_11 = ATgetArgument(t, 0);
                                    h_11 = ATgetArgument(t, 1);
                                    v_10 = ATgetArgument(t, 2);
                                    t = p_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_11;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm s_24 = t;
                                            int t_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_17;
                                                t = v_0(t);
                                                ;
                                                LocalPopChoice(t_24);
                                              }
                                            else
                                              {
                                                t = s_24;
                                                t = q_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                i_11 = ATgetArgument(t, 0);
                                                n_11 = ATgetArgument(t, 1);
                                                {
                                                  ATerm u_24 = t;
                                                  int v_24 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm v_32 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                      t = v_0(t);
                                                      v_32 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_11, v_32);
                                                      t = v_0(t);
                                                      ;
                                                      LocalPopChoice(v_24);
                                                    }
                                                  else
                                                    {
                                                      t = u_24;
                                                      t = q_11;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm w_24 = t;
                                                int z_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm a_25 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(z_24);
                                                    {
                                                      ATerm b_25 = t;
                                                      int d_25 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, g_11, h_11, v_10);
                                                          t = v_0(t);
                                                          ;
                                                          LocalPopChoice(d_25);
                                                        }
                                                      else
                                                        {
                                                          t = b_25;
                                                          t = q_11;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = w_24;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_11 = ATgetArgument(t, 0);
                                                        n_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm f_25 = t;
                                                          int i_25 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                              t = v_0(t);
                                                              h_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_11, h_33);
                                                              t = v_0(t);
                                                              ;
                                                              LocalPopChoice(i_25);
                                                            }
                                                          else
                                                            {
                                                              t = f_25;
                                                              t = q_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_11;
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
                                        g_11 = ATgetArgument(t, 0);
                                        h_11 = ATgetArgument(t, 1);
                                        t = p_11;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = o_11;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm k_25 = t;
                                                int l_25 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_o_17;
                                                    t = v_0(t);
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
                                                          ATerm d_34 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_11, h_11);
                                                          t = v_0(t);
                                                          d_34 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, g_11, d_34);
                                                          t = v_0(t);
                                                          ;
                                                          LocalPopChoice(n_25);
                                                        }
                                                      else
                                                        {
                                                          t = m_25;
                                                          t = q_11;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    i_11 = ATgetArgument(t, 0);
                                                    n_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm o_25 = t;
                                                      int p_25 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm i_34 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                          t = v_0(t);
                                                          i_34 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_11, i_34);
                                                          t = v_0(t);
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
                                                                ATerm o_34 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, p_11, h_11);
                                                                t = v_0(t);
                                                                o_34 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, g_11, o_34);
                                                                t = v_0(t);
                                                                ;
                                                                LocalPopChoice(r_25);
                                                              }
                                                            else
                                                              {
                                                                t = q_25;
                                                                t = q_11;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_11 = ATgetArgument(t, 0);
                                                        n_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm s_25 = t;
                                                          int t_25 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm w_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_11, h_11);
                                                              t = v_0(t);
                                                              w_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, g_11, w_34);
                                                              t = v_0(t);
                                                              ;
                                                              LocalPopChoice(t_25);
                                                            }
                                                          else
                                                            {
                                                              t = s_25;
                                                              {
                                                                ATerm v_25 = t;
                                                                int w_25 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm r_35 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                                    t = v_0(t);
                                                                    r_35 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, i_11, r_35);
                                                                    t = v_0(t);
                                                                    ;
                                                                    LocalPopChoice(w_25);
                                                                  }
                                                                else
                                                                  {
                                                                    t = v_25;
                                                                    t = q_11;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm x_25 = t;
                                                        int y_25 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm k_36 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, p_11, h_11);
                                                            t = v_0(t);
                                                            k_36 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, g_11, k_36);
                                                            t = v_0(t);
                                                            ;
                                                            LocalPopChoice(y_25);
                                                          }
                                                        else
                                                          {
                                                            t = x_25;
                                                            t = q_11;
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
                                            g_11 = ATgetArgument(t, 0);
                                            h_11 = ATgetArgument(t, 1);
                                            t = p_11;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = o_11;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm z_25 = t;
                                                    int a_26 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_o_17;
                                                        t = v_0(t);
                                                        ;
                                                        LocalPopChoice(a_26);
                                                      }
                                                    else
                                                      {
                                                        t = z_25;
                                                        {
                                                          ATerm b_26 = t;
                                                          int c_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm c_37 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_11, h_11);
                                                              t = v_0(t);
                                                              c_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, g_11, c_37);
                                                              t = v_0(t);
                                                              ;
                                                              LocalPopChoice(c_26);
                                                            }
                                                          else
                                                            {
                                                              t = b_26;
                                                              t = q_11;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        i_11 = ATgetArgument(t, 0);
                                                        n_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm d_26 = t;
                                                          int f_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm l_37 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                              t = v_0(t);
                                                              l_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_11, l_37);
                                                              t = v_0(t);
                                                              ;
                                                              LocalPopChoice(f_26);
                                                            }
                                                          else
                                                            {
                                                              t = d_26;
                                                              {
                                                                ATerm h_26 = t;
                                                                int l_26 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm s_37 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, p_11, h_11);
                                                                    t = v_0(t);
                                                                    s_37 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, g_11, s_37);
                                                                    t = v_0(t);
                                                                    ;
                                                                    LocalPopChoice(l_26);
                                                                  }
                                                                else
                                                                  {
                                                                    t = h_26;
                                                                    t = q_11;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            i_11 = ATgetArgument(t, 0);
                                                            n_11 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm m_26 = t;
                                                              int p_26 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm d_38 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_11, h_11);
                                                                  t = v_0(t);
                                                                  d_38 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, g_11, d_38);
                                                                  t = v_0(t);
                                                                  ;
                                                                  LocalPopChoice(p_26);
                                                                }
                                                              else
                                                                {
                                                                  t = m_26;
                                                                  {
                                                                    ATerm q_26 = t;
                                                                    int v_26 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm l_38 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                                        t = v_0(t);
                                                                        l_38 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, i_11, l_38);
                                                                        t = v_0(t);
                                                                        ;
                                                                        LocalPopChoice(v_26);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_26;
                                                                        t = q_11;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm w_26 = t;
                                                            int x_26 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm w_38 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, p_11, h_11);
                                                                t = v_0(t);
                                                                w_38 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, g_11, w_38);
                                                                t = v_0(t);
                                                                ;
                                                                LocalPopChoice(x_26);
                                                              }
                                                            else
                                                              {
                                                                t = w_26;
                                                                t = q_11;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = p_11;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = o_11;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm y_26 = t;
                                                    int z_26 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_o_17;
                                                        t = v_0(t);
                                                        ;
                                                        LocalPopChoice(z_26);
                                                      }
                                                    else
                                                      {
                                                        t = y_26;
                                                        t = q_11;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        i_11 = ATgetArgument(t, 0);
                                                        n_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_27 = t;
                                                          int c_27 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm l_39 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                              t = v_0(t);
                                                              l_39 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_11, l_39);
                                                              t = v_0(t);
                                                              ;
                                                              LocalPopChoice(c_27);
                                                            }
                                                          else
                                                            {
                                                              t = b_27;
                                                              t = q_11;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            i_11 = ATgetArgument(t, 0);
                                                            n_11 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm d_27 = t;
                                                              int e_27 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm t_39 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_11, o_11);
                                                                  t = v_0(t);
                                                                  t_39 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, i_11, t_39);
                                                                  t = v_0(t);
                                                                  ;
                                                                  LocalPopChoice(e_27);
                                                                }
                                                              else
                                                                {
                                                                  t = d_27;
                                                                  t = q_11;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = q_11;
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
                    p_11 = ATgetArgument(t, 0);
                    o_11 = ATgetArgument(t, 1);
                    t = o_11;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = p_11;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm f_27 = t;
                            int h_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_i_17;
                                t = v_0(t);
                                ;
                                LocalPopChoice(h_27);
                              }
                            else
                              {
                                t = f_27;
                                t = p_11;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = o_11;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    i_11 = ATgetArgument(t, 0);
                                    n_11 = ATgetArgument(t, 1);
                                    t = p_11;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        i_11 = ATgetArgument(t, 0);
                                        t = p_11;
                                      }
                                    else
                                      {
                                        t = p_11;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = p_11;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm i_27 = t;
                            int j_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_i_17;
                                t = v_0(t);
                                ;
                                LocalPopChoice(j_27);
                              }
                            else
                              {
                                t = i_27;
                                {
                                  ATerm k_27 = t;
                                  int l_27 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = o_11;
                                      if((p_11 != t))
                                        {
                                          _fail(t);
                                        }
                                      ;
                                      LocalPopChoice(l_27);
                                    }
                                  else
                                    {
                                      t = k_27;
                                      t = q_11;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = o_11;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    i_11 = ATgetArgument(t, 0);
                                    n_11 = ATgetArgument(t, 1);
                                    {
                                      ATerm m_27 = t;
                                      int n_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm h_42 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, n_11, o_11);
                                          t = v_0(t);
                                          h_42 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, i_11, h_42);
                                          t = v_0(t);
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
                                                t = o_11;
                                                if((p_11 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                ;
                                                LocalPopChoice(p_27);
                                              }
                                            else
                                              {
                                                t = o_27;
                                                t = q_11;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        i_11 = ATgetArgument(t, 0);
                                        {
                                          ATerm q_27 = t;
                                          int r_27 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = o_11;
                                              if((p_11 != t))
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
                                                ATerm s_27 = t;
                                                int t_27 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = y_66(i_11, t);
                                                    ;
                                                    LocalPopChoice(t_27);
                                                  }
                                                else
                                                  {
                                                    t = s_27;
                                                    t = q_11;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm u_27 = t;
                                        int v_27 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = o_11;
                                            if((p_11 != t))
                                              {
                                                _fail(t);
                                              }
                                            ;
                                            LocalPopChoice(v_27);
                                          }
                                        else
                                          {
                                            t = u_27;
                                            t = q_11;
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
                        p_11 = ATgetArgument(t, 0);
                        o_11 = ATgetArgument(t, 1);
                        t = o_11;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = p_11;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm w_27 = t;
                                int y_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_i_17;
                                    t = v_0(t);
                                    ;
                                    LocalPopChoice(y_27);
                                  }
                                else
                                  {
                                    t = w_27;
                                    t = o_11;
                                  }
                              }
                            else
                              {
                                ATerm z_27 = t;
                                int a_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_i_17;
                                    t = v_0(t);
                                    ;
                                    LocalPopChoice(a_28);
                                  }
                                else
                                  {
                                    t = z_27;
                                    t = q_11;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = p_11;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm b_28 = t;
                                    int e_28 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_o_17;
                                        t = v_0(t);
                                        ;
                                        LocalPopChoice(e_28);
                                      }
                                    else
                                      {
                                        t = b_28;
                                        t = o_11;
                                      }
                                  }
                                else
                                  {
                                    ATerm f_28 = t;
                                    int h_28 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_o_17;
                                        t = v_0(t);
                                        ;
                                        LocalPopChoice(h_28);
                                      }
                                    else
                                      {
                                        t = f_28;
                                        t = q_11;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    g_11 = ATgetArgument(t, 0);
                                    h_11 = ATgetArgument(t, 1);
                                    t = p_11;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = o_11;
                                      }
                                    else
                                      {
                                        ATerm k_28 = t;
                                        int l_28 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm l_44 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, p_11, g_11);
                                            t = conc_0_0(t);
                                            l_44 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, l_44, h_11);
                                            t = bottomup_1_0(v_0, t);
                                            ;
                                            LocalPopChoice(l_28);
                                          }
                                        else
                                          {
                                            t = k_28;
                                            t = q_11;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = p_11;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = o_11;
                                      }
                                    else
                                      {
                                        t = q_11;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm m_28 = t;
                        int n_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm o_28 = ATgetArgument(t, 0);
                                o_11 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(n_28);
                            t = o_11;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm p_28 = t;
                                int q_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_i_17;
                                    t = v_0(t);
                                    ;
                                    LocalPopChoice(q_28);
                                  }
                                else
                                  {
                                    t = p_28;
                                    t = q_11;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm r_28 = t;
                                    int s_28 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_o_17;
                                        t = v_0(t);
                                        ;
                                        LocalPopChoice(s_28);
                                      }
                                    else
                                      {
                                        t = r_28;
                                        t = q_11;
                                      }
                                  }
                                else
                                  {
                                    t = q_11;
                                  }
                              }
                          }
                        else
                          {
                            t = m_28;
                            if(match_cons(t, sym_All_1))
                              {
                                p_11 = ATgetArgument(t, 0);
                                t = p_11;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm t_28 = t;
                                    int u_28 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_i_17;
                                        t = v_0(t);
                                        ;
                                        LocalPopChoice(u_28);
                                      }
                                    else
                                      {
                                        t = t_28;
                                        t = q_11;
                                      }
                                  }
                                else
                                  {
                                    t = q_11;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    p_11 = ATgetArgument(t, 0);
                                    t = p_11;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm v_28 = t;
                                        int w_28 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_i_17;
                                            t = v_0(t);
                                            ;
                                            LocalPopChoice(w_28);
                                          }
                                        else
                                          {
                                            t = v_28;
                                            {
                                              ATerm y_28 = t;
                                              int z_28 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm d_45 = NULL,e_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL;
                                                  t = q_11;
                                                  t = new_0_0(t);
                                                  d_45 = t;
                                                  t = bottomup_1_0(v_0, t);
                                                  a_46 = t;
                                                  t = (ATerm) ATempty;
                                                  t = v_0(t);
                                                  b_46 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(b_46), a_46);
                                                  t = v_0(t);
                                                  e_45 = t;
                                                  t = d_45;
                                                  t = bottomup_1_0(v_0, t);
                                                  z_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, z_45);
                                                  t = v_0(t);
                                                  s_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, s_45);
                                                  t = v_0(t);
                                                  m_45 = t;
                                                  t = p_11;
                                                  t = bottomup_1_0(v_0, t);
                                                  o_45 = t;
                                                  t = d_45;
                                                  t = bottomup_1_0(v_0, t);
                                                  r_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, r_45);
                                                  t = v_0(t);
                                                  q_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, q_45);
                                                  t = v_0(t);
                                                  p_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, o_45, p_45);
                                                  t = v_0(t);
                                                  n_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_45, n_45);
                                                  t = v_0(t);
                                                  l_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, e_45, l_45);
                                                  t = v_0(t);
                                                  ;
                                                  LocalPopChoice(z_28);
                                                }
                                              else
                                                {
                                                  t = y_28;
                                                  t = q_11;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm a_29 = t;
                                            int b_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_17;
                                                t = v_0(t);
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
                                                      ATerm q_46 = NULL,r_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL;
                                                      t = q_11;
                                                      t = new_0_0(t);
                                                      q_46 = t;
                                                      t = bottomup_1_0(v_0, t);
                                                      g_47 = t;
                                                      t = (ATerm) ATempty;
                                                      t = v_0(t);
                                                      h_47 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(h_47), g_47);
                                                      t = v_0(t);
                                                      r_46 = t;
                                                      t = q_46;
                                                      t = bottomup_1_0(v_0, t);
                                                      f_47 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, f_47);
                                                      t = v_0(t);
                                                      e_47 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, e_47);
                                                      t = v_0(t);
                                                      u_46 = t;
                                                      t = p_11;
                                                      t = bottomup_1_0(v_0, t);
                                                      w_46 = t;
                                                      t = q_46;
                                                      t = bottomup_1_0(v_0, t);
                                                      d_47 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, d_47);
                                                      t = v_0(t);
                                                      c_47 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, c_47);
                                                      t = v_0(t);
                                                      b_47 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_46, b_47);
                                                      t = v_0(t);
                                                      v_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_46, v_46);
                                                      t = v_0(t);
                                                      t_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, r_46, t_46);
                                                      t = v_0(t);
                                                      ;
                                                      LocalPopChoice(d_29);
                                                    }
                                                  else
                                                    {
                                                      t = c_29;
                                                      t = q_11;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                i_11 = ATgetArgument(t, 0);
                                                n_11 = ATgetArgument(t, 1);
                                                t = n_11;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    s_7 = ATgetArgument(t, 0);
                                                    p_8 = ATgetArgument(t, 1);
                                                    t = s_7;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        u_7 = ATgetArgument(t, 0);
                                                        t = i_11;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            x_10 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm e_29 = t;
                                                              int f_29 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, u_7);
                                                                  t = v_0(t);
                                                                  u_47 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_47, p_8);
                                                                  t = v_0(t);
                                                                  t_47 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_10, t_47);
                                                                  t = v_0(t);
                                                                  s_47 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, s_47);
                                                                  t = v_0(t);
                                                                  ;
                                                                  LocalPopChoice(f_29);
                                                                }
                                                              else
                                                                {
                                                                  t = e_29;
                                                                  {
                                                                    ATerm g_29 = t;
                                                                    int i_29 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL;
                                                                        t = q_11;
                                                                        t = new_0_0(t);
                                                                        w_47 = t;
                                                                        t = bottomup_1_0(v_0, t);
                                                                        l_48 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = v_0(t);
                                                                        m_48 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(m_48), l_48);
                                                                        t = v_0(t);
                                                                        x_47 = t;
                                                                        t = w_47;
                                                                        t = bottomup_1_0(v_0, t);
                                                                        k_48 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, k_48);
                                                                        t = v_0(t);
                                                                        j_48 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, j_48);
                                                                        t = v_0(t);
                                                                        z_47 = t;
                                                                        t = p_11;
                                                                        t = bottomup_1_0(v_0, t);
                                                                        e_48 = t;
                                                                        t = w_47;
                                                                        t = bottomup_1_0(v_0, t);
                                                                        h_48 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, h_48);
                                                                        t = v_0(t);
                                                                        g_48 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, g_48);
                                                                        t = v_0(t);
                                                                        f_48 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, e_48, f_48);
                                                                        t = v_0(t);
                                                                        a_48 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, z_47, a_48);
                                                                        t = v_0(t);
                                                                        y_47 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, x_47, y_47);
                                                                        t = v_0(t);
                                                                        ;
                                                                        LocalPopChoice(i_29);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = g_29;
                                                                        t = q_11;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm j_29 = t;
                                                            int k_29 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,g_49 = NULL,h_49 = NULL,o_49 = NULL;
                                                                t = q_11;
                                                                t = new_0_0(t);
                                                                t_48 = t;
                                                                t = bottomup_1_0(v_0, t);
                                                                h_49 = t;
                                                                t = (ATerm) ATempty;
                                                                t = v_0(t);
                                                                o_49 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(o_49), h_49);
                                                                t = v_0(t);
                                                                u_48 = t;
                                                                t = t_48;
                                                                t = bottomup_1_0(v_0, t);
                                                                g_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, g_49);
                                                                t = v_0(t);
                                                                d_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, d_49);
                                                                t = v_0(t);
                                                                w_48 = t;
                                                                t = p_11;
                                                                t = bottomup_1_0(v_0, t);
                                                                z_48 = t;
                                                                t = t_48;
                                                                t = bottomup_1_0(v_0, t);
                                                                c_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, c_49);
                                                                t = v_0(t);
                                                                b_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, b_49);
                                                                t = v_0(t);
                                                                a_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, z_48, a_49);
                                                                t = v_0(t);
                                                                y_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, w_48, y_48);
                                                                t = v_0(t);
                                                                v_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, u_48, v_48);
                                                                t = v_0(t);
                                                                ;
                                                                LocalPopChoice(k_29);
                                                              }
                                                            else
                                                              {
                                                                t = j_29;
                                                                t = q_11;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = i_11;
                                                        {
                                                          ATerm l_29 = t;
                                                          int n_29 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL,k_50 = NULL;
                                                              t = q_11;
                                                              t = new_0_0(t);
                                                              r_49 = t;
                                                              t = bottomup_1_0(v_0, t);
                                                              j_50 = t;
                                                              t = (ATerm) ATempty;
                                                              t = v_0(t);
                                                              k_50 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(k_50), j_50);
                                                              t = v_0(t);
                                                              s_49 = t;
                                                              t = r_49;
                                                              t = bottomup_1_0(v_0, t);
                                                              i_50 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, i_50);
                                                              t = v_0(t);
                                                              h_50 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, h_50);
                                                              t = v_0(t);
                                                              u_49 = t;
                                                              t = p_11;
                                                              t = bottomup_1_0(v_0, t);
                                                              w_49 = t;
                                                              t = r_49;
                                                              t = bottomup_1_0(v_0, t);
                                                              g_50 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, g_50);
                                                              t = v_0(t);
                                                              f_50 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, f_50);
                                                              t = v_0(t);
                                                              x_49 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_49, x_49);
                                                              t = v_0(t);
                                                              v_49 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_49, v_49);
                                                              t = v_0(t);
                                                              t_49 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, s_49, t_49);
                                                              t = v_0(t);
                                                              ;
                                                              LocalPopChoice(n_29);
                                                            }
                                                          else
                                                            {
                                                              t = l_29;
                                                              t = q_11;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = i_11;
                                                    {
                                                      ATerm o_29 = t;
                                                      int p_29 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL,c_51 = NULL,e_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,p_51 = NULL;
                                                          t = q_11;
                                                          t = new_0_0(t);
                                                          u_50 = t;
                                                          t = bottomup_1_0(v_0, t);
                                                          j_51 = t;
                                                          t = (ATerm) ATempty;
                                                          t = v_0(t);
                                                          p_51 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(p_51), j_51);
                                                          t = v_0(t);
                                                          v_50 = t;
                                                          t = u_50;
                                                          t = bottomup_1_0(v_0, t);
                                                          i_51 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, i_51);
                                                          t = v_0(t);
                                                          h_51 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, h_51);
                                                          t = v_0(t);
                                                          x_50 = t;
                                                          t = p_11;
                                                          t = bottomup_1_0(v_0, t);
                                                          z_50 = t;
                                                          t = u_50;
                                                          t = bottomup_1_0(v_0, t);
                                                          e_51 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, e_51);
                                                          t = v_0(t);
                                                          c_51 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, c_51);
                                                          t = v_0(t);
                                                          a_51 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, z_50, a_51);
                                                          t = v_0(t);
                                                          y_50 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_50, y_50);
                                                          t = v_0(t);
                                                          w_50 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, v_50, w_50);
                                                          t = v_0(t);
                                                          ;
                                                          LocalPopChoice(p_29);
                                                        }
                                                      else
                                                        {
                                                          t = o_29;
                                                          t = q_11;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    i_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm q_29 = t;
                                                      int r_29 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, i_11);
                                                          t = v_0(t);
                                                          ;
                                                          LocalPopChoice(r_29);
                                                        }
                                                      else
                                                        {
                                                          t = q_29;
                                                          {
                                                            ATerm w_29 = t;
                                                            int x_29 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm x_51 = NULL,a_52 = NULL,b_52 = NULL,e_52 = NULL,i_52 = NULL,k_52 = NULL,y_52 = NULL,z_52 = NULL,b_53 = NULL,i_53 = NULL,q_53 = NULL,v_53 = NULL,w_53 = NULL;
                                                                t = q_11;
                                                                t = new_0_0(t);
                                                                x_51 = t;
                                                                t = bottomup_1_0(v_0, t);
                                                                v_53 = t;
                                                                t = (ATerm) ATempty;
                                                                t = v_0(t);
                                                                w_53 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(w_53), v_53);
                                                                t = v_0(t);
                                                                a_52 = t;
                                                                t = x_51;
                                                                t = bottomup_1_0(v_0, t);
                                                                q_53 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, q_53);
                                                                t = v_0(t);
                                                                i_53 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, i_53);
                                                                t = v_0(t);
                                                                e_52 = t;
                                                                t = p_11;
                                                                t = bottomup_1_0(v_0, t);
                                                                k_52 = t;
                                                                t = x_51;
                                                                t = bottomup_1_0(v_0, t);
                                                                b_53 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, b_53);
                                                                t = v_0(t);
                                                                z_52 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, z_52);
                                                                t = v_0(t);
                                                                y_52 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, k_52, y_52);
                                                                t = v_0(t);
                                                                i_52 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, e_52, i_52);
                                                                t = v_0(t);
                                                                b_52 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, a_52, b_52);
                                                                t = v_0(t);
                                                                ;
                                                                LocalPopChoice(x_29);
                                                              }
                                                            else
                                                              {
                                                                t = w_29;
                                                                t = q_11;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm y_29 = t;
                                                    int z_29 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm e_54 = NULL,f_54 = NULL,h_54 = NULL,i_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL;
                                                        t = q_11;
                                                        t = new_0_0(t);
                                                        e_54 = t;
                                                        t = bottomup_1_0(v_0, t);
                                                        u_54 = t;
                                                        t = (ATerm) ATempty;
                                                        t = v_0(t);
                                                        v_54 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(v_54), u_54);
                                                        t = v_0(t);
                                                        f_54 = t;
                                                        t = e_54;
                                                        t = bottomup_1_0(v_0, t);
                                                        t_54 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, t_54);
                                                        t = v_0(t);
                                                        s_54 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, s_54);
                                                        t = v_0(t);
                                                        i_54 = t;
                                                        t = p_11;
                                                        t = bottomup_1_0(v_0, t);
                                                        n_54 = t;
                                                        t = e_54;
                                                        t = bottomup_1_0(v_0, t);
                                                        r_54 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, r_54);
                                                        t = v_0(t);
                                                        p_54 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, p_54);
                                                        t = v_0(t);
                                                        o_54 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, n_54, o_54);
                                                        t = v_0(t);
                                                        m_54 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, i_54, m_54);
                                                        t = v_0(t);
                                                        h_54 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, f_54, h_54);
                                                        t = v_0(t);
                                                        ;
                                                        LocalPopChoice(z_29);
                                                      }
                                                    else
                                                      {
                                                        t = y_29;
                                                        t = q_11;
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
                                        p_11 = ATgetArgument(t, 0);
                                        t = p_11;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm a_30 = t;
                                            int b_30 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_i_17;
                                                t = v_0(t);
                                                ;
                                                LocalPopChoice(b_30);
                                              }
                                            else
                                              {
                                                t = a_30;
                                                t = q_11;
                                              }
                                          }
                                        else
                                          {
                                            t = q_11;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            p_11 = ATgetArgument(t, 0);
                                            t = p_11;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm c_30 = t;
                                                int d_30 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_o_17;
                                                    t = v_0(t);
                                                    ;
                                                    LocalPopChoice(d_30);
                                                  }
                                                else
                                                  {
                                                    t = c_30;
                                                    t = q_11;
                                                  }
                                              }
                                            else
                                              {
                                                t = q_11;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                p_11 = ATgetArgument(t, 0);
                                                t = p_11;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm e_30 = t;
                                                    int g_30 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_o_17;
                                                        t = v_0(t);
                                                        ;
                                                        LocalPopChoice(g_30);
                                                      }
                                                    else
                                                      {
                                                        t = e_30;
                                                        t = q_11;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = q_11;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm i_30 = t;
                                                int j_30 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm l_30 = ATgetArgument(t, 0);
                                                        o_11 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(j_30);
                                                    t = o_11;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm m_30 = t;
                                                        int n_30 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_o_17;
                                                            t = v_0(t);
                                                            ;
                                                            LocalPopChoice(n_30);
                                                          }
                                                        else
                                                          {
                                                            t = m_30;
                                                            t = q_11;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = q_11;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = i_30;
                                                    {
                                                      ATerm o_30 = t;
                                                      int p_30 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm r_30 = ATgetArgument(t, 0);
                                                              o_11 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(p_30);
                                                          {
                                                            ATerm s_30 = t;
                                                            int t_30 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = o_11;
                                                                t = fetch_1_0(k_1, t);
                                                                t = term_o_17;
                                                                t = bottomup_1_0(v_0, t);
                                                                ;
                                                                LocalPopChoice(t_30);
                                                              }
                                                            else
                                                              {
                                                                t = s_30;
                                                                t = q_11;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = o_30;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              p_11 = ATgetArgument(t, 0);
                                                              o_11 = ATgetArgument(t, 1);
                                                              t = o_11;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = p_11;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = o_11;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          i_11 = ATgetArgument(t, 0);
                                                                          n_11 = ATgetArgument(t, 1);
                                                                          t = p_11;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = p_11;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = p_11;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = o_11;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          i_11 = ATgetArgument(t, 0);
                                                                          n_11 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm u_30 = t;
                                                                            int v_30 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm v_56 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, n_11, o_11);
                                                                                t = v_0(t);
                                                                                v_56 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, i_11, v_56);
                                                                                t = v_0(t);
                                                                                ;
                                                                                LocalPopChoice(v_30);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = u_30;
                                                                                {
                                                                                  ATerm x_30 = t;
                                                                                  int y_30 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = o_11;
                                                                                      if((p_11 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      ;
                                                                                      LocalPopChoice(y_30);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = x_30;
                                                                                      t = q_11;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm z_30 = t;
                                                                          int a_31 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = o_11;
                                                                              if((p_11 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              ;
                                                                              LocalPopChoice(a_31);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = z_30;
                                                                              t = q_11;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  p_11 = ATgetArgument(t, 0);
                                                                  o_11 = ATgetArgument(t, 1);
                                                                  r_7 = ATgetArgument(t, 2);
                                                                  t = r_7;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm b_31 = t;
                                                                      int d_31 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_11, o_11);
                                                                          t = v_0(t);
                                                                          ;
                                                                          LocalPopChoice(d_31);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = b_31;
                                                                          t = q_11;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = q_11;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      p_11 = ATgetArgument(t, 0);
                                                                      o_11 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm e_31 = t;
                                                                        int f_31 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, p_11, o_11);
                                                                            t = v_0(t);
                                                                            ;
                                                                            LocalPopChoice(f_31);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = e_31;
                                                                            t = q_11;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          p_11 = ATgetArgument(t, 0);
                                                                          t = p_11;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              i_11 = ATgetFirst((ATermList) t);
                                                                              n_11 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm g_31 = t;
                                                                                int h_31 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm f_58 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, n_11);
                                                                                    t = v_0(t);
                                                                                    f_58 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, i_11, f_58);
                                                                                    t = v_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(h_31);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = g_31;
                                                                                    t = q_11;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm i_31 = t;
                                                                                  int j_31 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_o_17;
                                                                                      t = v_0(t);
                                                                                      ;
                                                                                      LocalPopChoice(j_31);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = i_31;
                                                                                      t = q_11;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = q_11;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              p_11 = ATgetArgument(t, 0);
                                                                              t = p_11;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  i_11 = ATgetFirst((ATermList) t);
                                                                                  n_11 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm k_31 = t;
                                                                                    int l_31 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm t_58 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, n_11);
                                                                                        t = v_0(t);
                                                                                        t_58 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, i_11, t_58);
                                                                                        t = v_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(l_31);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = k_31;
                                                                                        t = q_11;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm m_31 = t;
                                                                                      int o_31 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_o_17;
                                                                                          t = v_0(t);
                                                                                          ;
                                                                                          LocalPopChoice(o_31);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = m_31;
                                                                                          t = q_11;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = q_11;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  p_11 = ATgetArgument(t, 0);
                                                                                  t = p_11;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      i_11 = ATgetFirst((ATermList) t);
                                                                                      n_11 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm p_31 = t;
                                                                                        int r_31 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm z_58 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, n_11);
                                                                                            t = v_0(t);
                                                                                            z_58 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, i_11, z_58);
                                                                                            t = v_0(t);
                                                                                            ;
                                                                                            LocalPopChoice(r_31);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = p_31;
                                                                                            t = q_11;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm s_31 = t;
                                                                                          int u_31 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_i_17;
                                                                                              t = v_0(t);
                                                                                              ;
                                                                                              LocalPopChoice(u_31);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = s_31;
                                                                                              t = q_11;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = q_11;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_RDefT_4))
                                                                                    {
                                                                                      p_11 = ATgetArgument(t, 0);
                                                                                      o_11 = ATgetArgument(t, 1);
                                                                                      r_7 = ATgetArgument(t, 2);
                                                                                      q_7 = ATgetArgument(t, 3);
                                                                                      {
                                                                                        ATerm v_31 = t;
                                                                                        int w_31 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm n_59 = NULL,r_59 = NULL;
                                                                                            t = o_11;
                                                                                            t = map1_1_0(l_1, t);
                                                                                            n_59 = t;
                                                                                            t = r_7;
                                                                                            t = map1_1_0(m_1, t);
                                                                                            r_59 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, p_11, n_59, r_59, q_7);
                                                                                            t = bottomup_1_0(v_0, t);
                                                                                            ;
                                                                                            LocalPopChoice(w_31);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = v_31;
                                                                                            t = q_11;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_SDefT_4))
                                                                                        {
                                                                                          p_11 = ATgetArgument(t, 0);
                                                                                          o_11 = ATgetArgument(t, 1);
                                                                                          r_7 = ATgetArgument(t, 2);
                                                                                          q_7 = ATgetArgument(t, 3);
                                                                                          {
                                                                                            ATerm x_31 = t;
                                                                                            int y_31 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm s_60 = NULL,u_60 = NULL;
                                                                                                t = r_7;
                                                                                                t = map1_1_0(n_1, t);
                                                                                                s_60 = t;
                                                                                                t = o_11;
                                                                                                t = map_1_0(o_1, t);
                                                                                                u_60 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_SDefT_4, p_11, u_60, s_60, q_7);
                                                                                                t = bottomup_1_0(v_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(y_31);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = x_31;
                                                                                                {
                                                                                                  ATerm z_31 = t;
                                                                                                  int a_32 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm l_61 = NULL,t_61 = NULL;
                                                                                                      t = o_11;
                                                                                                      t = map1_1_0(p_1, t);
                                                                                                      l_61 = t;
                                                                                                      t = r_7;
                                                                                                      t = map_1_0(q_1, t);
                                                                                                      t_61 = t;
                                                                                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, p_11, l_61, t_61, q_7);
                                                                                                      t = bottomup_1_0(v_0, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(a_32);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = z_31;
                                                                                                      t = q_11;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_InfixApp_3))
                                                                                            {
                                                                                              p_11 = ATgetArgument(t, 0);
                                                                                              o_11 = ATgetArgument(t, 1);
                                                                                              r_7 = ATgetArgument(t, 2);
                                                                                              {
                                                                                                ATerm b_32 = t;
                                                                                                int d_32 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL;
                                                                                                    t = term_i_32;
                                                                                                    t = bottomup_1_0(v_0, t);
                                                                                                    q_62 = t;
                                                                                                    t = (ATerm) ATempty;
                                                                                                    t = v_0(t);
                                                                                                    t_62 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(t_62), r_7);
                                                                                                    t = v_0(t);
                                                                                                    s_62 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(s_62), p_11);
                                                                                                    t = v_0(t);
                                                                                                    r_62 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Op_2, q_62, r_62);
                                                                                                    t = v_0(t);
                                                                                                    p_62 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_App_2, o_11, p_62);
                                                                                                    t = v_0(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(d_32);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = b_32;
                                                                                                    t = q_11;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_BAM_3))
                                                                                                {
                                                                                                  p_11 = ATgetArgument(t, 0);
                                                                                                  o_11 = ATgetArgument(t, 1);
                                                                                                  r_7 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm j_32 = t;
                                                                                                    int k_32 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm a_63 = NULL,b_63 = NULL,c_63 = NULL,e_63 = NULL,k_63 = NULL,m_63 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, o_11);
                                                                                                        t = v_0(t);
                                                                                                        b_63 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, r_7);
                                                                                                        t = v_0(t);
                                                                                                        k_63 = t;
                                                                                                        t = (ATerm) ATempty;
                                                                                                        t = v_0(t);
                                                                                                        m_63 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(m_63), k_63);
                                                                                                        t = v_0(t);
                                                                                                        e_63 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(e_63), p_11);
                                                                                                        t = v_0(t);
                                                                                                        c_63 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(c_63), b_63);
                                                                                                        t = v_0(t);
                                                                                                        a_63 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, a_63);
                                                                                                        t = v_0(t);
                                                                                                        ;
                                                                                                        LocalPopChoice(k_32);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = j_32;
                                                                                                        t = q_11;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_AM_2))
                                                                                                    {
                                                                                                      p_11 = ATgetArgument(t, 0);
                                                                                                      o_11 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm l_32 = t;
                                                                                                        int m_32 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm s_63 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Match_1, o_11);
                                                                                                            t = v_0(t);
                                                                                                            s_63 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, p_11, s_63);
                                                                                                            t = v_0(t);
                                                                                                            ;
                                                                                                            LocalPopChoice(m_32);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = l_32;
                                                                                                            t = q_11;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_MA_2))
                                                                                                        {
                                                                                                          p_11 = ATgetArgument(t, 0);
                                                                                                          o_11 = ATgetArgument(t, 1);
                                                                                                          {
                                                                                                            ATerm q_32 = t;
                                                                                                            int r_32 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                ATerm y_63 = NULL;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, p_11);
                                                                                                                t = v_0(t);
                                                                                                                y_63 = t;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, y_63, o_11);
                                                                                                                t = v_0(t);
                                                                                                                ;
                                                                                                                LocalPopChoice(r_32);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = q_32;
                                                                                                                t = q_11;
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_BA_2))
                                                                                                            {
                                                                                                              p_11 = ATgetArgument(t, 0);
                                                                                                              o_11 = ATgetArgument(t, 1);
                                                                                                              {
                                                                                                                ATerm s_32 = t;
                                                                                                                int t_32 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    ATerm f_64 = NULL;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Build_1, o_11);
                                                                                                                    t = v_0(t);
                                                                                                                    f_64 = t;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, f_64, p_11);
                                                                                                                    t = v_0(t);
                                                                                                                    ;
                                                                                                                    LocalPopChoice(t_32);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = s_32;
                                                                                                                    t = q_11;
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_Let_2))
                                                                                                                {
                                                                                                                  p_11 = ATgetArgument(t, 0);
                                                                                                                  o_11 = ATgetArgument(t, 1);
                                                                                                                  t = o_11;
                                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                                    {
                                                                                                                      g_11 = ATgetArgument(t, 0);
                                                                                                                      h_11 = ATgetArgument(t, 1);
                                                                                                                      t = p_11;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = o_11;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          ATerm u_32 = t;
                                                                                                                          int w_32 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm t_64 = NULL;
                                                                                                                              t = (ATerm) ATmakeAppl(sym__2, p_11, g_11);
                                                                                                                              t = conc_0_0(t);
                                                                                                                              t_64 = t;
                                                                                                                              t = (ATerm) ATmakeAppl(sym_Let_2, t_64, h_11);
                                                                                                                              t = bottomup_1_0(v_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(w_32);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = u_32;
                                                                                                                              t = q_11;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_CallT_3))
                                                                                                                        {
                                                                                                                          g_11 = ATgetArgument(t, 0);
                                                                                                                          h_11 = ATgetArgument(t, 1);
                                                                                                                          v_10 = ATgetArgument(t, 2);
                                                                                                                          t = v_10;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = h_11;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = g_11;
                                                                                                                                  if(match_cons(t, sym_SVar_1))
                                                                                                                                    {
                                                                                                                                      a_11 = ATgetArgument(t, 0);
                                                                                                                                      t = p_11;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = o_11;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                            {
                                                                                                                                              i_11 = ATgetFirst((ATermList) t);
                                                                                                                                              n_11 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                              t = n_11;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = i_11;
                                                                                                                                                  if(match_cons(t, sym_SDefT_4))
                                                                                                                                                    {
                                                                                                                                                      x_10 = ATgetArgument(t, 0);
                                                                                                                                                      q_10 = ATgetArgument(t, 1);
                                                                                                                                                      w_8 = ATgetArgument(t, 2);
                                                                                                                                                      d_9 = ATgetArgument(t, 3);
                                                                                                                                                      t = w_8;
                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                        {
                                                                                                                                                          t = q_10;
                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                            {
                                                                                                                                                              ATerm x_32 = t;
                                                                                                                                                              int y_32 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  t = a_11;
                                                                                                                                                                  if((x_10 != t))
                                                                                                                                                                    {
                                                                                                                                                                      _fail(t);
                                                                                                                                                                    }
                                                                                                                                                                  t = d_9;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm z_32 = t;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        ATerm r_1 (ATerm t)
                                                                                                                                                                        {
                                                                                                                                                                          if(match_cons(t, sym_CallT_3))
                                                                                                                                                                            {
                                                                                                                                                                              ATerm c_33 = ATgetArgument(t, 0);
                                                                                                                                                                              if(match_cons(c_33, sym_SVar_1))
                                                                                                                                                                                {
                                                                                                                                                                                  if(((x_10 != NULL) && (x_10 != ATgetArgument(c_33, 0))))
                                                                                                                                                                                    _fail(ATgetArgument(c_33, 0));
                                                                                                                                                                                  else
                                                                                                                                                                                    x_10 = ATgetArgument(c_33, 0);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              {
                                                                                                                                                                                ATerm d_33 = ATgetArgument(t, 1);
                                                                                                                                                                                if(((ATgetType(d_33) != AT_LIST) || !(ATisEmpty(d_33))))
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                              }
                                                                                                                                                                              {
                                                                                                                                                                                ATerm e_33 = ATgetArgument(t, 2);
                                                                                                                                                                                if(((ATgetType(e_33) != AT_LIST) || !(ATisEmpty(e_33))))
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                              }
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          return(t);
                                                                                                                                                                        }
                                                                                                                                                                        t = oncetd_1_0(r_1, t);
                                                                                                                                                                        PopChoice();
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = z_32;
                                                                                                                                                                      }
                                                                                                                                                                    t = not_null(d_9);
                                                                                                                                                                    t = bottomup_1_0(v_0, t);
                                                                                                                                                                  }
                                                                                                                                                                  ;
                                                                                                                                                                  LocalPopChoice(y_32);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = x_32;
                                                                                                                                                                  t = q_11;
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = q_11;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = q_11;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = q_11;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = q_11;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = q_11;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = p_11;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = o_11;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = q_11;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = p_11;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                    {
                                                                                                                                      t = o_11;
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = q_11;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = p_11;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = o_11;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = q_11;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = p_11;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = o_11;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = q_11;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_As_2))
                                                                                                                    {
                                                                                                                      p_11 = ATgetArgument(t, 0);
                                                                                                                      o_11 = ATgetArgument(t, 1);
                                                                                                                      t = p_11;
                                                                                                                      if(match_cons(t, sym_Wld_0))
                                                                                                                        {
                                                                                                                          t = o_11;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = q_11;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = q_11;
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
  t = bottomup_1_0(v_0, t);
  return(t);
}
ATerm SubsArgCall2_0_0 (ATerm t)
{
  ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL,j_67 = NULL,n_2 = NULL,o_2 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm f_33 = ATgetArgument(t, 0);
      if(match_cons(f_33, sym_SVar_1))
        {
          e_67 = ATgetArgument(f_33, 0);
        }
      else
        _fail(t);
      c_67 = ATgetArgument(t, 1);
      d_67 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_67), (ATerm)ATempty, (ATerm) ATempty);
  n_2 = t;
  t = term_g_33;
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_33, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_67), (ATerm)ATempty, (ATerm) ATempty));
  t = b_7(o_2, n_2, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm i_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_33) != ATmakeSymbol("n_0", 0, ATtrue)))
        _fail(t);
      j_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_67), c_67, d_67);
  return(t);
}
ATerm SubsArgCall1_0_0 (ATerm t)
{
  ATerm k_67 = NULL,o_67 = NULL,r_2 = NULL;
  k_67 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm j_33 = ATgetArgument(t, 0);
      if(match_cons(j_33, sym_SVar_1))
        {
          ATerm p_33 = ATgetArgument(j_33, 0);
        }
      else
        _fail(t);
      {
        ATerm k_33 = ATgetArgument(t, 1);
        if(((ATgetType(k_33) != AT_LIST) || !(ATisEmpty(k_33))))
          _fail(t);
      }
      {
        ATerm n_33 = ATgetArgument(t, 2);
        if(((ATgetType(n_33) != AT_LIST) || !(ATisEmpty(n_33))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_q_33;
  r_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_33, k_67);
  t = b_7(r_2, k_67, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm s_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_33) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      o_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_67;
  t = strename_0_0(t);
  return(t);
}
ATerm topdown_1_0 (ATerm j_119 (ATerm), ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    t = topdown_1_0(j_119, t);
    return(t);
  }
  t = j_119(t);
  t = SRTS_all(s_1, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_g_33;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_q_33;
  return(t);
}
ATerm substitute_arg_0_0 (ATerm t)
{
  ATerm p_68 = NULL,t_68 = NULL,z_68 = NULL,a_69 = NULL,f_69 = NULL,i_69 = NULL,m_69 = NULL,o_69 = NULL,p_69 = NULL,w_69 = NULL,y_69 = NULL;
  f_69 = t;
  if(match_cons(t, sym__2))
    {
      i_69 = ATgetArgument(t, 0);
      y_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_69;
  if(match_cons(t, sym_VarDec_2))
    {
      m_69 = ATgetArgument(t, 0);
      o_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_69;
  if(match_cons(t, sym_FunType_2))
    {
      p_69 = ATgetArgument(t, 0);
      {
        ATerm t_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = p_69;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_33 = ATgetFirst((ATermList) t);
      w_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_69;
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm x_33 = ATgetFirst((ATermList) t);
            ATerm z_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(w_33);
        {
          ATerm g_70 = NULL,n_70 = NULL;
          t = y_69;
          if(match_cons(t, sym_CallT_3))
            {
              p_68 = ATgetArgument(t, 0);
              z_68 = ATgetArgument(t, 1);
              a_69 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = p_68;
          if(match_cons(t, sym_SVar_1))
            {
              t_68 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_68;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = a_69;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_69), (ATerm)ATempty, (ATerm) ATempty);
          g_70 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_34, t_68);
          n_70 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_69), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_b_34, t_68));
          t = l_14(u_1, g_70, n_70, t);
          t = f_69;
        }
      }
    else
      {
        t = v_33;
        {
          ATerm v_70 = NULL,w_70 = NULL;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_69), (ATerm)ATempty, (ATerm) ATempty);
          v_70 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_34, y_69);
          w_70 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_69), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_c_34, y_69));
          t = l_14(v_1, v_70, w_70, t);
          t = f_69;
        }
      }
  }
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_q_33;
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_g_33;
  return(t);
}
ATerm b_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_34 = ATgetArgument(t, 0);
      if(((ATgetType(e_34) != AT_LIST) || !(ATisEmpty(e_34))))
        _fail(t);
      {
        ATerm f_34 = ATgetArgument(t, 1);
        if(((ATgetType(f_34) != AT_LIST) || !(ATisEmpty(f_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_34 = ATgetArgument(t, 0);
      if(((ATgetType(g_34) == AT_LIST) && !(ATisEmpty(g_34))))
        {
          p_71 = ATgetFirst((ATermList) g_34);
          q_71 = (ATerm) ATgetNext((ATermList) g_34);
        }
      else
        _fail(t);
      {
        ATerm h_34 = ATgetArgument(t, 1);
        if(((ATgetType(h_34) == AT_LIST) && !(ATisEmpty(h_34))))
          {
            r_71 = ATgetFirst((ATermList) h_34);
            s_71 = (ATerm) ATgetNext((ATermList) h_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_71, r_71), (ATerm) ATmakeAppl(sym__2, q_71, s_71));
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm t_71 = NULL,u_71 = NULL;
  if(match_cons(t, sym__2))
    {
      t_71 = ATgetArgument(t, 0);
      u_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_71), t_71);
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm j_34 = t;
  int l_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_34 = t;
      int n_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SubsArgCall1_0_0(t);
          ;
          LocalPopChoice(n_34);
        }
      else
        {
          t = m_34;
          t = SubsArgCall2_0_0(t);
        }
      ;
      LocalPopChoice(l_34);
    }
  else
    {
      t = j_34;
    }
  return(t);
}
ATerm substitute_args_0_0 (ATerm t)
{
  ATerm b_71 = NULL,d_71 = NULL,o_71 = NULL;
  ATerm x_1 (ATerm t)
  {
    ATerm z_1 (ATerm t)
    {
      if(match_cons(t, sym__3))
        {
          if(((b_71 != NULL) && (b_71 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            b_71 = ATgetArgument(t, 0);
          if(((d_71 != NULL) && (d_71 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            d_71 = ATgetArgument(t, 1);
          if(((o_71 != NULL) && (o_71 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            o_71 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_71), not_null(d_71));
      t = genzip_4_0(b_2, c_2, d_2, substitute_arg_0_0, t);
      t = not_null(o_71);
      t = topdown_1_0(e_2, t);
      return(t);
    }
    t = scope_2_0(y_1, z_1, t);
    return(t);
  }
  t = scope_2_0(w_1, x_1, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_34 = ATgetArgument(t, 0);
      if(((ATgetType(p_34) != AT_LIST) || !(ATisEmpty(p_34))))
        _fail(t);
      {
        ATerm q_34 = ATgetArgument(t, 1);
        if(((ATgetType(q_34) != AT_LIST) || !(ATisEmpty(q_34))))
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
  ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_34 = ATgetArgument(t, 0);
      if(((ATgetType(r_34) == AT_LIST) && !(ATisEmpty(r_34))))
        {
          c_3 = ATgetFirst((ATermList) r_34);
          d_3 = (ATerm) ATgetNext((ATermList) r_34);
        }
      else
        _fail(t);
      {
        ATerm s_34 = ATgetArgument(t, 1);
        if(((ATgetType(s_34) == AT_LIST) && !(ATisEmpty(s_34))))
          {
            e_3 = ATgetFirst((ATermList) s_34);
            f_3 = (ATerm) ATgetNext((ATermList) s_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_3, e_3), (ATerm) ATmakeAppl(sym__2, d_3, f_3));
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL;
  if(match_cons(t, sym__2))
    {
      g_3 = ATgetArgument(t, 0);
      h_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_3), g_3);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm j_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL;
  if(match_cons(t, sym__2))
    {
      j_3 = ATgetArgument(t, 0);
      o_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_3;
  {
    ATerm u_34 = t;
    int v_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm x_34 = ATgetArgument(t, 0);
            l_3 = ATgetArgument(t, 1);
            m_3 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(v_34);
        t = (ATerm) ATmakeAppl(sym_SDef_3, o_3, l_3, m_3);
      }
    else
      {
        t = u_34;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm z_34 = ATgetArgument(t, 0);
            l_3 = ATgetArgument(t, 1);
            m_3 = ATgetArgument(t, 2);
            n_3 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, o_3, l_3, m_3, n_3);
      }
  }
  return(t);
}
ATerm j_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_35 = ATgetArgument(t, 0);
      if(((ATgetType(a_35) != AT_LIST) || !(ATisEmpty(a_35))))
        _fail(t);
      {
        ATerm b_35 = ATgetArgument(t, 1);
        if(((ATgetType(b_35) != AT_LIST) || !(ATisEmpty(b_35))))
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
  ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_35 = ATgetArgument(t, 0);
      if(((ATgetType(c_35) == AT_LIST) && !(ATisEmpty(c_35))))
        {
          k_4 = ATgetFirst((ATermList) c_35);
          l_4 = (ATerm) ATgetNext((ATermList) c_35);
        }
      else
        _fail(t);
      {
        ATerm d_35 = ATgetArgument(t, 1);
        if(((ATgetType(d_35) == AT_LIST) && !(ATisEmpty(d_35))))
          {
            m_4 = ATgetFirst((ATermList) d_35);
            n_4 = (ATerm) ATgetNext((ATermList) d_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_4, m_4), (ATerm) ATmakeAppl(sym__2, l_4, n_4));
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL;
  if(match_cons(t, sym__2))
    {
      o_4 = ATgetArgument(t, 0);
      p_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_4), o_4);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm r_4 = NULL,t_4 = NULL,u_4 = NULL;
  if(match_cons(t, sym__2))
    {
      r_4 = ATgetArgument(t, 0);
      u_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4;
  {
    ATerm e_35 = t;
    int f_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm g_35 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_35);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, u_4);
      }
    else
      {
        t = e_35;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm k_35 = ATgetArgument(t, 0);
            t_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, u_4, t_4);
      }
  }
  return(t);
}
ATerm q_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_35 = ATgetArgument(t, 0);
      if(((ATgetType(l_35) != AT_LIST) || !(ATisEmpty(l_35))))
        _fail(t);
      {
        ATerm m_35 = ATgetArgument(t, 1);
        if(((ATgetType(m_35) != AT_LIST) || !(ATisEmpty(m_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm p_5 = NULL,x_5 = NULL,f_6 = NULL,j_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_35 = ATgetArgument(t, 0);
      if(((ATgetType(n_35) == AT_LIST) && !(ATisEmpty(n_35))))
        {
          p_5 = ATgetFirst((ATermList) n_35);
          x_5 = (ATerm) ATgetNext((ATermList) n_35);
        }
      else
        _fail(t);
      {
        ATerm o_35 = ATgetArgument(t, 1);
        if(((ATgetType(o_35) == AT_LIST) && !(ATisEmpty(o_35))))
          {
            f_6 = ATgetFirst((ATermList) o_35);
            j_6 = (ATerm) ATgetNext((ATermList) o_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_5, f_6), (ATerm) ATmakeAppl(sym__2, x_5, j_6));
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm m_6 = NULL,q_6 = NULL;
  if(match_cons(t, sym__2))
    {
      m_6 = ATgetArgument(t, 0);
      q_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_6), m_6);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm y_6 = NULL,j_7 = NULL,k_7 = NULL;
  if(match_cons(t, sym__2))
    {
      y_6 = ATgetArgument(t, 0);
      k_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6;
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm v_35 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(u_35);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, k_7);
      }
    else
      {
        t = t_35;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm w_35 = ATgetArgument(t, 0);
            j_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, k_7, j_7);
      }
  }
  return(t);
}
ATerm v_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_35 = ATgetArgument(t, 0);
      if(((ATgetType(z_35) != AT_LIST) || !(ATisEmpty(z_35))))
        _fail(t);
      {
        ATerm c_36 = ATgetArgument(t, 1);
        if(((ATgetType(c_36) != AT_LIST) || !(ATisEmpty(c_36))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_36 = ATgetArgument(t, 0);
      if(((ATgetType(d_36) == AT_LIST) && !(ATisEmpty(d_36))))
        {
          q_8 = ATgetFirst((ATermList) d_36);
          r_8 = (ATerm) ATgetNext((ATermList) d_36);
        }
      else
        _fail(t);
      {
        ATerm g_36 = ATgetArgument(t, 1);
        if(((ATgetType(g_36) == AT_LIST) && !(ATisEmpty(g_36))))
          {
            s_8 = ATgetFirst((ATermList) g_36);
            t_8 = (ATerm) ATgetNext((ATermList) g_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_8, s_8), (ATerm) ATmakeAppl(sym__2, r_8, t_8));
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL;
  if(match_cons(t, sym__2))
    {
      u_8 = ATgetArgument(t, 0);
      v_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_8), u_8);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm y_8 = NULL,a_9 = NULL,b_9 = NULL;
  if(match_cons(t, sym__2))
    {
      y_8 = ATgetArgument(t, 0);
      b_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_8;
  {
    ATerm h_36 = t;
    int i_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm j_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(i_36);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, b_9);
      }
    else
      {
        t = h_36;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm l_36 = ATgetArgument(t, 0);
            a_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, b_9, a_9);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm n_118 (ATerm), ATerm t)
{
  ATerm q_82 = NULL,r_82 = NULL,t_82 = NULL,u_82 = NULL,v_82 = NULL;
  t_82 = t;
  if(match_cons(t, sym_Let_2))
    {
      u_82 = ATgetArgument(t, 0);
      v_82 = ATgetArgument(t, 1);
      {
        ATerm w_2 = NULL,z_2 = NULL,a_3 = NULL,s_5 = NULL;
        t = SSLgetAnnotations(t_82);
        w_2 = t;
        t = u_82;
        t = n_118(t);
        a_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_82, a_3);
        t = genzip_4_0(f_2, g_2, h_2, i_2, t);
        z_2 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, z_2, v_82);
        s_5 = t;
        t = SSLsetAnnotations(s_5, w_2);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          u_82 = ATgetArgument(t, 0);
          v_82 = ATgetArgument(t, 1);
          q_82 = ATgetArgument(t, 2);
          {
            ATerm d_4 = NULL,h_4 = NULL,i_4 = NULL,t_5 = NULL;
            t = SSLgetAnnotations(t_82);
            d_4 = t;
            t = v_82;
            t = n_118(t);
            i_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_82, i_4);
            t = genzip_4_0(j_2, k_2, l_2, m_2, t);
            h_4 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, u_82, h_4, q_82);
            t_5 = t;
            t = SSLsetAnnotations(t_5, d_4);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              u_82 = ATgetArgument(t, 0);
              v_82 = ATgetArgument(t, 1);
              q_82 = ATgetArgument(t, 2);
              r_82 = ATgetArgument(t, 3);
              {
                ATerm h_5 = NULL,m_5 = NULL,n_5 = NULL,u_5 = NULL;
                t = SSLgetAnnotations(t_82);
                h_5 = t;
                t = v_82;
                t = n_118(t);
                n_5 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_82, n_5);
                t = genzip_4_0(q_2, s_2, t_2, u_2, t);
                m_5 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, u_82, m_5, q_82, r_82);
                u_5 = t;
                t = SSLsetAnnotations(u_5, h_5);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  u_82 = ATgetArgument(t, 0);
                  v_82 = ATgetArgument(t, 1);
                  q_82 = ATgetArgument(t, 2);
                  r_82 = ATgetArgument(t, 3);
                  {
                    ATerm h_8 = NULL,m_8 = NULL,n_8 = NULL,v_5 = NULL;
                    t = SSLgetAnnotations(t_82);
                    h_8 = t;
                    t = v_82;
                    t = n_118(t);
                    n_8 = t;
                    t = (ATerm) ATmakeAppl(sym__2, v_82, n_8);
                    t = genzip_4_0(v_2, x_2, y_2, b_3, t);
                    m_8 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, u_82, m_8, q_82, r_82);
                    v_5 = t;
                    t = SSLsetAnnotations(v_5, h_8);
                  }
                }
              else
                {
                  ATerm o_9 = NULL,r_9 = NULL,w_5 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      u_82 = ATgetArgument(t, 0);
                      v_82 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_82);
                  o_9 = t;
                  t = u_82;
                  t = n_118(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      r_9 = ATgetFirst((ATermList) t);
                      {
                        ATerm m_36 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, r_9, v_82);
                  w_5 = t;
                  t = SSLsetAnnotations(w_5, o_9);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm o_118 (ATerm), ATerm p_118 (ATerm), ATerm q_118 (ATerm), ATerm t)
{
  ATerm c_87 = NULL,f_87 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL;
  h_87 = t;
  if(match_cons(t, sym_Let_2))
    {
      i_87 = ATgetArgument(t, 0);
      j_87 = ATgetArgument(t, 1);
      {
        ATerm z_9 = NULL,c_10 = NULL,d_10 = NULL,d_6 = NULL;
        t = SSLgetAnnotations(h_87);
        z_9 = t;
        t = i_87;
        t = o_118(t);
        c_10 = t;
        t = j_87;
        t = o_118(t);
        d_10 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, c_10, d_10);
        d_6 = t;
        t = SSLsetAnnotations(d_6, z_9);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          i_87 = ATgetArgument(t, 0);
          j_87 = ATgetArgument(t, 1);
          c_87 = ATgetArgument(t, 2);
          {
            ATerm m_10 = NULL,u_10 = NULL,y_10 = NULL,z_10 = NULL,e_6 = NULL;
            t = SSLgetAnnotations(h_87);
            m_10 = t;
            t = i_87;
            t = q_118(t);
            u_10 = t;
            t = j_87;
            t = q_118(t);
            y_10 = t;
            t = c_87;
            t = o_118(t);
            z_10 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, u_10, y_10, z_10);
            e_6 = t;
            t = SSLsetAnnotations(e_6, m_10);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              i_87 = ATgetArgument(t, 0);
              j_87 = ATgetArgument(t, 1);
              c_87 = ATgetArgument(t, 2);
              f_87 = ATgetArgument(t, 3);
              {
                ATerm s_11 = NULL,z_11 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,g_6 = NULL;
                t = SSLgetAnnotations(h_87);
                s_11 = t;
                t = i_87;
                t = q_118(t);
                z_11 = t;
                t = j_87;
                t = q_118(t);
                b_12 = t;
                t = c_87;
                t = q_118(t);
                c_12 = t;
                t = f_87;
                t = o_118(t);
                d_12 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, z_11, b_12, c_12, d_12);
                g_6 = t;
                t = SSLsetAnnotations(g_6, s_11);
              }
            }
          else
            {
              ATerm o_12 = NULL,s_12 = NULL,t_12 = NULL,h_6 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  i_87 = ATgetArgument(t, 0);
                  j_87 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(h_87);
              o_12 = t;
              t = i_87;
              t = q_118(t);
              s_12 = t;
              t = j_87;
              t = o_118(t);
              t_12 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, s_12, t_12);
              h_6 = t;
              t = SSLsetAnnotations(h_6, o_12);
            }
        }
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm q_87 = NULL;
  ATerm n_36 = t;
  int o_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          q_87 = ATgetArgument(t, 0);
          {
            ATerm p_36 = ATgetArgument(t, 1);
          }
          {
            ATerm q_36 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_36);
      t = q_87;
    }
  else
    {
      t = n_36;
      if(match_cons(t, sym_SDefT_4))
        {
          q_87 = ATgetArgument(t, 0);
          {
            ATerm r_36 = ATgetArgument(t, 1);
          }
          {
            ATerm u_36 = ATgetArgument(t, 2);
          }
          {
            ATerm x_36 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = q_87;
    }
  return(t);
}
ATerm p_13 (ATerm g_44, ATerm f_44, ATerm t)
{
  t = g_44;
  t = map_1_0(i_3, t);
  return(t);
}
ATerm SVar_1_0 (ATerm v_107 (ATerm), ATerm t)
{
  ATerm e_88 = NULL,g_88 = NULL,h_88 = NULL,i_88 = NULL,r_6 = NULL;
  i_88 = t;
  if(match_cons(t, sym_SVar_1))
    {
      g_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_88);
  e_88 = t;
  t = g_88;
  t = v_107(t);
  h_88 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, h_88);
  r_6 = t;
  t = SSLsetAnnotations(r_6, e_88);
  return(t);
}
ATerm b_14 (ATerm x_132 (ATerm), ATerm y_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_60, ATerm k_60, ATerm j_60, ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm k_88 = NULL;
    k_88 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_88, not_null(j_60));
    t = x_132(t);
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    ATerm l_88 = NULL;
    l_88 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_88, not_null(k_60));
    t = x_132(t);
    return(t);
  }
  t = not_null(l_60);
  t = y_132(k_3, p_3, _id, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm q_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_36 = ATgetArgument(t, 0);
      if(((ATgetType(y_36) != AT_LIST) || !(ATisEmpty(y_36))))
        _fail(t);
      {
        ATerm z_36 = ATgetArgument(t, 1);
        if(((ATgetType(z_36) != AT_LIST) || !(ATisEmpty(z_36))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm w_88 = NULL,x_88 = NULL,y_88 = NULL,z_88 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_37 = ATgetArgument(t, 0);
      if(((ATgetType(e_37) == AT_LIST) && !(ATisEmpty(e_37))))
        {
          w_88 = ATgetFirst((ATermList) e_37);
          x_88 = (ATerm) ATgetNext((ATermList) e_37);
        }
      else
        _fail(t);
      {
        ATerm i_37 = ATgetArgument(t, 1);
        if(((ATgetType(i_37) == AT_LIST) && !(ATisEmpty(i_37))))
          {
            y_88 = ATgetFirst((ATermList) i_37);
            z_88 = (ATerm) ATgetNext((ATermList) i_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_88, y_88), (ATerm) ATmakeAppl(sym__2, x_88, z_88));
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm a_89 = NULL,b_89 = NULL;
  if(match_cons(t, sym__2))
    {
      a_89 = ATgetArgument(t, 0);
      b_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_89), a_89);
  return(t);
}
ATerm c_14 (ATerm r_132 (ATerm), ATerm s_132 (ATerm (ATerm), ATerm), ATerm d_60, ATerm g_60, ATerm t)
{
  ATerm o_88 = NULL,p_88 = NULL,q_88 = NULL,r_88 = NULL,v_88 = NULL;
  t = not_null(d_60);
  t = r_132(t);
  if(((o_88 != NULL) && (o_88 != t)))
    _fail(t);
  else
    o_88 = t;
  t = map_1_0(new_0_0, t);
  if(((p_88 != NULL) && (p_88 != t)))
    _fail(t);
  else
    p_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_88), not_null(p_88));
  t = genzip_4_0(q_3, r_3, s_3, _id, t);
  if(((v_88 != NULL) && (v_88 != t)))
    _fail(t);
  else
    v_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_88), not_null(g_60));
  t = conc_0_0(t);
  if(((q_88 != NULL) && (q_88 != t)))
    _fail(t);
  else
    q_88 = t;
  t = not_null(d_60);
  {
    ATerm t_3 (ATerm t)
    {
      t = not_null(p_88);
      return(t);
    }
    t = s_132(t_3, t);
    if(((r_88 != NULL) && (r_88 != t)))
      _fail(t);
    else
      r_88 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(r_88), not_null(g_60), not_null(q_88));
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm i_89 = NULL,j_89 = NULL,k_89 = NULL,n_89 = NULL,o_89 = NULL,p_89 = NULL,s_89 = NULL;
  k_89 = t;
  if(match_cons(t, sym__2))
    {
      n_89 = ATgetArgument(t, 0);
      o_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_89;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_89 = ATgetFirst((ATermList) t);
      s_89 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_89;
  if(match_cons(t, sym__2))
    {
      i_89 = ATgetArgument(t, 0);
      j_89 = ATgetArgument(t, 1);
      {
        ATerm j_37 = t;
        int k_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_89;
            if((n_89 != t))
              {
                _fail(t);
              }
            t = j_89;
            ;
            LocalPopChoice(k_37);
          }
        else
          {
            t = j_37;
            t = (ATerm) ATmakeAppl(sym__2, n_89, s_89);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, n_89, s_89);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm f_133 (ATerm), ATerm t)
{
  ATerm c_91 (ATerm t)
  {
    ATerm m_37 = t;
    int n_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_133(t);
        ;
        LocalPopChoice(n_37);
      }
    else
      {
        t = m_37;
        {
          ATerm v_90 = NULL,w_90 = NULL,b_91 = NULL;
          ATerm u_3 (ATerm t)
          {
            ATerm e_13 = NULL;
            e_13 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_13, not_null(b_91));
            t = c_91(t);
            return(t);
          }
          if(((v_90 != NULL) && (v_90 != t)))
            _fail(t);
          else
            v_90 = t;
          if(match_cons(t, sym__2))
            {
              if(((w_90 != NULL) && (w_90 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                w_90 = ATgetArgument(t, 0);
              if(((b_91 != NULL) && (b_91 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                b_91 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(w_90);
          t = SRTS_all(u_3, t);
        }
      }
    return(t);
  }
  t = c_91(t);
  return(t);
}
ATerm rename_4_0 (ATerm m_132 (ATerm (ATerm), ATerm), ATerm n_132 (ATerm), ATerm o_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm p_132 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm m_91 = NULL;
  ATerm r_92 (ATerm t)
  {
    ATerm v_3 (ATerm t)
    {
      ATerm l_92 = NULL,m_92 = NULL,n_92 = NULL;
      if(((l_92 != NULL) && (l_92 != t)))
        _fail(t);
      else
        l_92 = t;
      if(match_cons(t, sym__2))
        {
          if(((m_92 != NULL) && (m_92 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            m_92 = ATgetArgument(t, 0);
          if(((n_92 != NULL) && (n_92 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            n_92 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm q_37 = t;
        int r_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_3 (ATerm t)
            {
              ATerm q_92 = NULL;
              q_92 = t;
              t = (ATerm) ATmakeAppl(sym__2, q_92, not_null(n_92));
              t = lookup_0_0(t);
              return(t);
            }
            t = not_null(m_92);
            t = m_132(w_3, t);
            ;
            LocalPopChoice(r_37);
          }
        else
          {
            t = q_37;
            {
              ATerm y_17 = NULL,b_18 = NULL,f_18 = NULL;
              t = not_null(l_92);
              t = c_14(n_132, p_132, not_null(m_92), not_null(n_92), t);
              if(match_cons(t, sym__3))
                {
                  y_17 = ATgetArgument(t, 0);
                  b_18 = ATgetArgument(t, 1);
                  f_18 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = b_14(r_92, o_132, y_17, b_18, f_18, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(v_3, t);
    return(t);
  }
  if(((m_91 != NULL) && (m_91 != t)))
    _fail(t);
  else
    m_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_91), (ATerm) ATempty);
  t = r_92(t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_37 = ATgetArgument(t, 0);
      if(((ATgetType(t_37) != AT_LIST) || !(ATisEmpty(t_37))))
        _fail(t);
      {
        ATerm u_37 = ATgetArgument(t, 1);
        if(((ATgetType(u_37) != AT_LIST) || !(ATisEmpty(u_37))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,j_21 = NULL,k_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_37 = ATgetArgument(t, 0);
      if(((ATgetType(v_37) == AT_LIST) && !(ATisEmpty(v_37))))
        {
          z_20 = ATgetFirst((ATermList) v_37);
          a_21 = (ATerm) ATgetNext((ATermList) v_37);
        }
      else
        _fail(t);
      {
        ATerm w_37 = ATgetArgument(t, 1);
        if(((ATgetType(w_37) == AT_LIST) && !(ATisEmpty(w_37))))
          {
            j_21 = ATgetFirst((ATermList) w_37);
            k_21 = (ATerm) ATgetNext((ATermList) w_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_20, j_21), (ATerm) ATmakeAppl(sym__2, a_21, k_21));
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm p_21 = NULL,v_21 = NULL;
  if(match_cons(t, sym__2))
    {
      p_21 = ATgetArgument(t, 0);
      v_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_21), p_21);
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm y_21 = NULL,h_22 = NULL,i_22 = NULL;
  if(match_cons(t, sym__2))
    {
      y_21 = ATgetArgument(t, 0);
      i_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_21;
  {
    ATerm y_37 = t;
    int b_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm c_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(b_38);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_22);
      }
    else
      {
        t = y_37;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm e_38 = ATgetArgument(t, 0);
            h_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, i_22, h_22);
      }
  }
  return(t);
}
ATerm b_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_38 = ATgetArgument(t, 0);
      if(((ATgetType(f_38) != AT_LIST) || !(ATisEmpty(f_38))))
        _fail(t);
      {
        ATerm g_38 = ATgetArgument(t, 1);
        if(((ATgetType(g_38) != AT_LIST) || !(ATisEmpty(g_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm i_24 = NULL,o_24 = NULL,q_24 = NULL,r_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_38 = ATgetArgument(t, 0);
      if(((ATgetType(h_38) == AT_LIST) && !(ATisEmpty(h_38))))
        {
          i_24 = ATgetFirst((ATermList) h_38);
          o_24 = (ATerm) ATgetNext((ATermList) h_38);
        }
      else
        _fail(t);
      {
        ATerm i_38 = ATgetArgument(t, 1);
        if(((ATgetType(i_38) == AT_LIST) && !(ATisEmpty(i_38))))
          {
            q_24 = ATgetFirst((ATermList) i_38);
            r_24 = (ATerm) ATgetNext((ATermList) i_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_24, q_24), (ATerm) ATmakeAppl(sym__2, o_24, r_24));
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm y_24 = NULL,c_25 = NULL;
  if(match_cons(t, sym__2))
    {
      y_24 = ATgetArgument(t, 0);
      c_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_25), y_24);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm e_25 = NULL,g_25 = NULL,h_25 = NULL;
  if(match_cons(t, sym__2))
    {
      e_25 = ATgetArgument(t, 0);
      h_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_25;
  {
    ATerm j_38 = t;
    int k_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm m_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(k_38);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_25);
      }
    else
      {
        t = j_38;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm n_38 = ATgetArgument(t, 0);
            g_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, h_25, g_25);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm j_118 (ATerm), ATerm t)
{
  ATerm a_97 = NULL,d_97 = NULL,e_97 = NULL,g_97 = NULL,h_97 = NULL;
  a_97 = t;
  if(match_cons(t, sym_Scope_2))
    {
      d_97 = ATgetArgument(t, 0);
      e_97 = ATgetArgument(t, 1);
      {
        ATerm x_18 = NULL,j_19 = NULL,t_6 = NULL;
        t = SSLgetAnnotations(a_97);
        x_18 = t;
        t = d_97;
        t = j_118(t);
        j_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, j_19, e_97);
        t_6 = t;
        t = SSLsetAnnotations(t_6, x_18);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          d_97 = ATgetArgument(t, 0);
          e_97 = ATgetArgument(t, 1);
          g_97 = ATgetArgument(t, 2);
          h_97 = ATgetArgument(t, 3);
          {
            ATerm o_20 = NULL,t_20 = NULL,x_20 = NULL,d_7 = NULL;
            t = SSLgetAnnotations(a_97);
            o_20 = t;
            t = g_97;
            t = j_118(t);
            x_20 = t;
            t = (ATerm) ATmakeAppl(sym__2, g_97, x_20);
            t = genzip_4_0(x_3, y_3, z_3, a_4, t);
            t_20 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, d_97, e_97, t_20, h_97);
            d_7 = t;
            t = SSLsetAnnotations(d_7, o_20);
          }
        }
      else
        {
          ATerm k_23 = NULL,w_23 = NULL,x_23 = NULL,e_7 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              d_97 = ATgetArgument(t, 0);
              e_97 = ATgetArgument(t, 1);
              g_97 = ATgetArgument(t, 2);
              h_97 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_97);
          k_23 = t;
          t = g_97;
          t = j_118(t);
          x_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_97, x_23);
          t = genzip_4_0(b_4, c_4, e_4, f_4, t);
          w_23 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, d_97, e_97, w_23, h_97);
          e_7 = t;
          t = SSLsetAnnotations(e_7, k_23);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm k_118 (ATerm), ATerm l_118 (ATerm), ATerm m_118 (ATerm), ATerm t)
{
  ATerm x_99 = NULL,y_99 = NULL,z_99 = NULL,a_100 = NULL,b_100 = NULL;
  a_100 = t;
  if(match_cons(t, sym_Scope_2))
    {
      b_100 = ATgetArgument(t, 0);
      x_99 = ATgetArgument(t, 1);
      {
        ATerm o_26 = NULL,r_26 = NULL,a_27 = NULL,l_7 = NULL;
        t = SSLgetAnnotations(a_100);
        o_26 = t;
        t = b_100;
        t = m_118(t);
        r_26 = t;
        t = x_99;
        t = k_118(t);
        a_27 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, r_26, a_27);
        l_7 = t;
        t = SSLsetAnnotations(l_7, o_26);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          b_100 = ATgetArgument(t, 0);
          x_99 = ATgetArgument(t, 1);
          y_99 = ATgetArgument(t, 2);
          z_99 = ATgetArgument(t, 3);
          {
            ATerm x_27 = NULL,d_28 = NULL,g_28 = NULL,i_28 = NULL,j_28 = NULL,m_7 = NULL;
            t = SSLgetAnnotations(a_100);
            x_27 = t;
            t = b_100;
            t = m_118(t);
            d_28 = t;
            t = x_99;
            t = m_118(t);
            g_28 = t;
            t = y_99;
            t = m_118(t);
            i_28 = t;
            t = z_99;
            t = k_118(t);
            j_28 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, d_28, g_28, i_28, j_28);
            m_7 = t;
            t = SSLsetAnnotations(m_7, x_27);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              b_100 = ATgetArgument(t, 0);
              x_99 = ATgetArgument(t, 1);
              y_99 = ATgetArgument(t, 2);
              z_99 = ATgetArgument(t, 3);
              {
                ATerm m_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,f_32 = NULL;
                t = SSLgetAnnotations(a_100);
                m_29 = t;
                t = b_100;
                t = m_118(t);
                s_29 = t;
                t = x_99;
                t = m_118(t);
                t_29 = t;
                t = y_99;
                t = m_118(t);
                u_29 = t;
                t = z_99;
                t = k_118(t);
                v_29 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, s_29, t_29, u_29, v_29);
                f_32 = t;
                t = SSLsetAnnotations(f_32, m_29);
              }
            }
          else
            {
              ATerm f_30 = NULL,h_30 = NULL,h_32 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  b_100 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_100);
              f_30 = t;
              t = b_100;
              t = k_118(t);
              h_30 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, h_30);
              h_32 = t;
              t = SSLsetAnnotations(h_32, f_30);
            }
        }
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm j_100 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_100);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm o_38 = t;
  int t_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(t_38);
    }
  else
    {
      t = o_38;
      {
        ATerm l_100 = NULL,m_100 = NULL,n_100 = NULL,o_100 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            l_100 = ATgetArgument(t, 0);
            t = l_100;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                l_100 = ATgetArgument(t, 0);
                m_100 = ATgetArgument(t, 1);
                n_100 = ATgetArgument(t, 2);
                o_100 = ATgetArgument(t, 3);
                t = n_100;
                t = map_1_0(q_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    l_100 = ATgetArgument(t, 0);
                    m_100 = ATgetArgument(t, 1);
                    n_100 = ATgetArgument(t, 2);
                    o_100 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = n_100;
                t = map_1_0(s_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm w_100 = NULL;
  ATerm u_38 = t;
  int v_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_100 = ATgetArgument(t, 0);
          {
            ATerm x_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_38);
      t = w_100;
    }
  else
    {
      t = u_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_100 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_100;
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm g_101 = NULL;
  ATerm y_38 = t;
  int z_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_101 = ATgetArgument(t, 0);
          {
            ATerm c_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_38);
      t = g_101;
    }
  else
    {
      t = y_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_101 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_101;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(g_4, j_4, tboundin_3_0, t);
  return(t);
}
ATerm v_13 (ATerm x_127 (ATerm), ATerm p_52, ATerm o_52, ATerm t)
{
  ATerm z_101 (ATerm t)
  {
    ATerm u_101 = NULL,v_101 = NULL,w_101 = NULL;
    u_101 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(o_52);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_101 = ATgetFirst((ATermList) t);
            w_101 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_39 = t;
          int j_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_101;
              {
                ATerm v_4 (ATerm t)
                {
                  t = not_null(o_52);
                  return(t);
                }
                t = w_13(x_127, v_4, not_null(v_101), not_null(w_101), t);
                t = z_101(t);
              }
              ;
              LocalPopChoice(j_39);
            }
          else
            {
              t = d_39;
              {
                ATerm q_30 = NULL,c_31 = NULL,r_33 = NULL;
                t = SSLgetAnnotations(u_101);
                q_30 = t;
                t = w_101;
                t = z_101(t);
                c_31 = t;
                t = (ATerm) ATinsert(CheckATermList(c_31), v_101);
                r_33 = t;
                t = SSLsetAnnotations(r_33, q_30);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(p_52);
  t = z_101(t);
  return(t);
}
ATerm w_13 (ATerm a_128 (ATerm), ATerm b_128 (ATerm), ATerm t_52, ATerm s_52, ATerm t)
{
  t = b_128(t);
  {
    ATerm w_4 (ATerm t)
    {
      ATerm b_102 = NULL;
      b_102 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_52), b_102);
      t = a_128(t);
      return(t);
    }
    t = fetch_1_0(w_4, t);
    t = not_null(s_52);
  }
  return(t);
}
ATerm x_13 (ATerm s_127 (ATerm), ATerm n_52, ATerm m_52, ATerm t)
{
  ATerm r_102 (ATerm t)
  {
    ATerm m_102 = NULL,n_102 = NULL,o_102 = NULL;
    m_102 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_102;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_102 = ATgetFirst((ATermList) t);
            o_102 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm k_39 = t;
          int m_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_102;
              {
                ATerm x_4 (ATerm t)
                {
                  t = not_null(m_52);
                  return(t);
                }
                t = w_13(s_127, x_4, not_null(n_102), not_null(o_102), t);
                t = r_102(t);
              }
              ;
              LocalPopChoice(m_39);
            }
          else
            {
              t = k_39;
              {
                ATerm q_31 = NULL,t_31 = NULL,y_33 = NULL;
                t = SSLgetAnnotations(m_102);
                q_31 = t;
                t = o_102;
                t = r_102(t);
                t_31 = t;
                t = (ATerm) ATinsert(CheckATermList(t_31), n_102);
                y_33 = t;
                t = SSLsetAnnotations(y_33, q_31);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(n_52);
  t = r_102(t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_39 = ATgetArgument(t, 0);
      if(((ATgetType(n_39) != AT_LIST) || !(ATisEmpty(n_39))))
        _fail(t);
      {
        ATerm r_39 = ATgetArgument(t, 1);
        if(((ATgetType(r_39) != AT_LIST) || !(ATisEmpty(r_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm a_103 = NULL,b_103 = NULL,c_103 = NULL,f_103 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_39 = ATgetArgument(t, 0);
      if(((ATgetType(s_39) == AT_LIST) && !(ATisEmpty(s_39))))
        {
          a_103 = ATgetFirst((ATermList) s_39);
          b_103 = (ATerm) ATgetNext((ATermList) s_39);
        }
      else
        _fail(t);
      {
        ATerm u_39 = ATgetArgument(t, 1);
        if(((ATgetType(u_39) == AT_LIST) && !(ATisEmpty(u_39))))
          {
            c_103 = ATgetFirst((ATermList) u_39);
            f_103 = (ATerm) ATgetNext((ATermList) u_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_103, c_103), (ATerm) ATmakeAppl(sym__2, b_103, f_103));
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm g_103 = NULL,h_103 = NULL;
  if(match_cons(t, sym__2))
    {
      g_103 = ATgetArgument(t, 0);
      h_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_103), g_103);
  return(t);
}
ATerm z_13 (ATerm h_586, ATerm m_586, ATerm l_74, ATerm t)
{
  ATerm u_102 = NULL,v_102 = NULL,w_102 = NULL,x_102 = NULL;
  t = SSL_explode_term(m_586);
  if(match_cons(t, sym__2))
    {
      u_102 = ATgetArgument(t, 0);
      w_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(h_586);
  if(match_cons(t, sym__2))
    {
      if((u_102 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      v_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_102, w_102);
  t = genzip_4_0(y_4, z_4, a_5, _id, t);
  x_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_102, l_74);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm v_136 (ATerm), ATerm w_136 (ATerm), ATerm t)
{
  ATerm j_103 (ATerm t)
  {
    ATerm x_39 = t;
    int y_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_136(t);
        ;
        LocalPopChoice(y_39);
      }
    else
      {
        t = x_39;
        t = w_136(t);
        t = j_103(t);
      }
    return(t);
  }
  t = j_103(t);
  return(t);
}
ATerm for_3_0 (ATerm y_136 (ATerm), ATerm z_136 (ATerm), ATerm a_137 (ATerm), ATerm t)
{
  t = y_136(t);
  t = while_not_2_0(z_136, a_137, t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm q_103 = NULL;
  q_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, q_103);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm r_103 = NULL,s_103 = NULL,t_103 = NULL,u_103 = NULL,a_34 = NULL;
  u_103 = t;
  if(match_cons(t, sym__2))
    {
      s_103 = ATgetArgument(t, 0);
      t_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_103);
  r_103 = t;
  t = t_103;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_103, t_103);
  a_34 = t;
  t = SSLsetAnnotations(a_34, r_103);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm o_104 = NULL,p_104 = NULL,q_104 = NULL,r_104 = NULL,s_104 = NULL;
  o_104 = t;
  if(match_cons(t, sym__2))
    {
      p_104 = ATgetArgument(t, 0);
      q_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_104;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_104 = ATgetFirst((ATermList) t);
      s_104 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_39 = t;
        int h_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_105(p_104, q_104, o_104, t);
            ;
            LocalPopChoice(h_40);
          }
        else
          {
            t = z_39;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_104), r_104), s_104);
          }
      }
    }
  else
    {
      t = c_105(p_104, q_104, o_104, t);
    }
  return(t);
}
ATerm c_105 (ATerm v_103, ATerm w_103, ATerm x_103, ATerm t)
{
  ATerm y_103 = NULL,b_104 = NULL,k_34 = NULL,e_104 = NULL,f_104 = NULL,g_104 = NULL,h_104 = NULL;
  t = SSLgetAnnotations(x_103);
  y_103 = t;
  t = w_103;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_104 = ATgetFirst((ATermList) t);
      h_104 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_104;
  if(match_cons(t, sym__2))
    {
      f_104 = ATgetArgument(t, 0);
      g_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_104;
        if((f_104 != t))
          {
            _fail(t);
          }
        t = h_104;
        ;
        LocalPopChoice(j_40);
      }
    else
      {
        t = i_40;
        t = w_103;
        t = z_13(f_104, g_104, h_104, t);
      }
    b_104 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_103, b_104);
    k_34 = t;
    t = SSLsetAnnotations(k_34, y_103);
  }
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm b_105 = NULL;
  if(match_cons(t, sym__2))
    {
      b_105 = ATgetArgument(t, 0);
      if((b_105 != ATgetArgument(t, 1)))
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
  ATerm k_40 = t;
  int l_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(b_5, c_5, d_5, t);
      ;
      LocalPopChoice(l_40);
    }
  else
    {
      t = k_40;
      {
        ATerm w_104 = NULL,x_104 = NULL,y_104 = NULL;
        w_104 = t;
        if(match_cons(t, sym__2))
          {
            x_104 = ATgetArgument(t, 0);
            y_104 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_104;
        t = x_13(e_5, x_104, y_104, t);
      }
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL;
  if(match_cons(t, sym__2))
    {
      n_32 = ATgetArgument(t, 0);
      o_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_13(k_5, n_32, o_32, t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm p_32 = NULL;
  if(match_cons(t, sym__2))
    {
      p_32 = ATgetArgument(t, 0);
      if((p_32 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL;
  if(match_cons(t, sym__2))
    {
      l_33 = ATgetArgument(t, 0);
      m_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_13(q_5, l_33, m_33, t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm o_33 = NULL;
  if(match_cons(t, sym__2))
    {
      o_33 = ATgetArgument(t, 0);
      if((o_33 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm p_134 (ATerm), ATerm q_134 (ATerm), ATerm r_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm q_105 (ATerm t)
  {
    ATerm m_40 = t;
    int n_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_134(t);
        ;
        LocalPopChoice(n_40);
      }
    else
      {
        t = m_40;
        {
          ATerm o_40 = t;
          int p_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_105 = NULL,f_105 = NULL,c_32 = NULL,e_32 = NULL;
              if(((e_105 != NULL) && (e_105 != t)))
                _fail(t);
              else
                e_105 = t;
              t = q_134(t);
              if(((f_105 != NULL) && (f_105 != t)))
                _fail(t);
              else
                f_105 = t;
              t = not_null(e_105);
              {
                ATerm f_5 (ATerm t)
                {
                  ATerm h_105 = NULL;
                  t = q_105(t);
                  h_105 = t;
                  t = (ATerm) ATmakeAppl(sym__2, h_105, not_null(f_105));
                  t = diff_0_0(t);
                  return(t);
                }
                t = r_134(f_5, q_105, g_5, t);
                if(((e_32 != NULL) && (e_32 != t)))
                  _fail(t);
                else
                  e_32 = t;
                t = SSL_explode_term(not_null(e_32));
                if(match_cons(t, sym__2))
                  {
                    ATerm r_40 = ATgetArgument(t, 0);
                    if(((c_32 != NULL) && (c_32 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      c_32 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = not_null(c_32);
                t = foldr_3_0(i_5, j_5, _id, t);
              }
              ;
              LocalPopChoice(p_40);
            }
          else
            {
              t = o_40;
              {
                ATerm a_33 = NULL,b_33 = NULL;
                b_33 = t;
                t = SSL_explode_term(b_33);
                if(match_cons(t, sym__2))
                  {
                    ATerm s_40 = ATgetArgument(t, 0);
                    a_33 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = a_33;
                t = foldr_3_0(l_5, o_5, q_105, t);
              }
            }
        }
      }
    return(t);
  }
  t = q_105(t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm d_106 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_106);
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm t_40 = t;
  int u_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(u_40);
    }
  else
    {
      t = t_40;
      {
        ATerm f_106 = NULL,g_106 = NULL,h_106 = NULL,i_106 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            f_106 = ATgetArgument(t, 0);
            t = f_106;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                f_106 = ATgetArgument(t, 0);
                g_106 = ATgetArgument(t, 1);
                h_106 = ATgetArgument(t, 2);
                i_106 = ATgetArgument(t, 3);
                t = h_106;
                t = map_1_0(z_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    f_106 = ATgetArgument(t, 0);
                    g_106 = ATgetArgument(t, 1);
                    h_106 = ATgetArgument(t, 2);
                    i_106 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = h_106;
                t = map_1_0(a_6, t);
              }
          }
      }
    }
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm q_106 = NULL;
  ATerm v_40 = t;
  int w_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_106 = ATgetArgument(t, 0);
          {
            ATerm x_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_40);
      t = q_106;
    }
  else
    {
      t = v_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_106 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_106;
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm z_106 = NULL;
  ATerm y_40 = t;
  int z_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_106 = ATgetArgument(t, 0);
          {
            ATerm a_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_40);
      t = z_106;
    }
  else
    {
      t = y_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_106 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_106;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm w_105 = NULL,a_106 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      a_106 = ATgetArgument(t, 0);
      t = a_106;
      if(match_cons(t, sym_Rule_3))
        {
          w_105 = ATgetArgument(t, 0);
          {
            ATerm b_41 = ATgetArgument(t, 1);
          }
          {
            ATerm c_41 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = w_105;
      t = free_vars_3_0(r_5, y_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          a_106 = ATgetArgument(t, 0);
          {
            ATerm d_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = a_106;
    }
  return(t);
}
ATerm Var_1_0 (ATerm m_104 (ATerm), ATerm t)
{
  ATerm e_107 = NULL,f_107 = NULL,g_107 = NULL,h_107 = NULL,t_34 = NULL;
  h_107 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_107);
  e_107 = t;
  t = f_107;
  t = m_104(t);
  g_107 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, g_107);
  t_34 = t;
  t = SSLsetAnnotations(t_34, e_107);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm e_41 = t;
  int f_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(f_41);
    }
  else
    {
      t = e_41;
      {
        ATerm q_107 = NULL,r_107 = NULL,s_107 = NULL,t_107 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            q_107 = ATgetArgument(t, 0);
            r_107 = ATgetArgument(t, 1);
            s_107 = ATgetArgument(t, 2);
            t_107 = ATgetArgument(t, 3);
            t = s_107;
            t = map_1_0(c_6, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                q_107 = ATgetArgument(t, 0);
                r_107 = ATgetArgument(t, 1);
                s_107 = ATgetArgument(t, 2);
                t_107 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = s_107;
            t = map_1_0(k_6, t);
          }
      }
    }
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm b_108 = NULL;
  ATerm g_41 = t;
  int h_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_108 = ATgetArgument(t, 0);
          {
            ATerm l_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_41);
      t = b_108;
    }
  else
    {
      t = g_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_108 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_108;
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm m_108 = NULL;
  ATerm m_41 = t;
  int n_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_108 = ATgetArgument(t, 0);
          {
            ATerm o_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_41);
      t = m_108;
    }
  else
    {
      t = m_41;
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
ATerm l_6 (ATerm t)
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
          t = map_1_0(n_6, t);
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
                  t = map_1_0(o_6, t);
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
                  t = map_1_0(p_6, t);
                }
            }
        }
    }
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm b_109 = NULL;
  ATerm p_41 = t;
  int q_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_109 = ATgetArgument(t, 0);
          {
            ATerm r_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_41);
      t = b_109;
    }
  else
    {
      t = p_41;
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
ATerm o_6 (ATerm t)
{
  ATerm m_109 = NULL;
  ATerm s_41 = t;
  int t_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_109 = ATgetArgument(t, 0);
          {
            ATerm u_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_41);
      t = m_109;
    }
  else
    {
      t = s_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_109 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_109;
    }
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm v_109 = NULL;
  ATerm v_41 = t;
  int w_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_109 = ATgetArgument(t, 0);
          {
            ATerm x_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_41);
      t = v_109;
    }
  else
    {
      t = v_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_109 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_109;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, b_6, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, l_6, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm w_36 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      w_36 = ATgetArgument(t, 0);
      {
        ATerm y_41 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = w_36;
  return(t);
}
ATerm v_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_42 = ATgetArgument(t, 0);
      if(((ATgetType(a_42) != AT_LIST) || !(ATisEmpty(a_42))))
        _fail(t);
      {
        ATerm b_42 = ATgetArgument(t, 1);
        if(((ATgetType(b_42) != AT_LIST) || !(ATisEmpty(b_42))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,d_37 = NULL,f_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_42 = ATgetArgument(t, 0);
      if(((ATgetType(c_42) == AT_LIST) && !(ATisEmpty(c_42))))
        {
          a_37 = ATgetFirst((ATermList) c_42);
          b_37 = (ATerm) ATgetNext((ATermList) c_42);
        }
      else
        _fail(t);
      {
        ATerm d_42 = ATgetArgument(t, 1);
        if(((ATgetType(d_42) == AT_LIST) && !(ATisEmpty(d_42))))
          {
            d_37 = ATgetFirst((ATermList) d_42);
            f_37 = (ATerm) ATgetNext((ATermList) d_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_37, d_37), (ATerm) ATmakeAppl(sym__2, b_37, f_37));
  return(t);
}
ATerm g_7 (ATerm t)
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
ATerm h_7 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL;
  if(match_cons(t, sym__2))
    {
      o_37 = ATgetArgument(t, 0);
      p_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_37), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_37))));
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_g_42;
  return(t);
}
ATerm InlineCall_0_0 (ATerm t)
{
  ATerm o_111 = NULL,p_111 = NULL,q_111 = NULL,r_111 = NULL,s_111 = NULL;
  o_111 = t;
  if(match_cons(t, sym_CallT_3))
    {
      p_111 = ATgetArgument(t, 0);
      r_111 = ATgetArgument(t, 1);
      s_111 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_111;
  if(match_cons(t, sym_SVar_1))
    {
      q_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_42 = t;
    int k_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_35 = NULL,i_35 = NULL;
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_111), (ATerm)ATempty, (ATerm) ATempty);
        h_35 = t;
        t = term_g_42;
        i_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_42, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_111), (ATerm)ATempty, (ATerm) ATempty));
        t = b_7(i_35, h_35, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(k_42);
      }
    else
      {
        t = j_42;
        {
          ATerm l_42 = t;
          int m_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_35 = NULL,q_35 = NULL;
              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_111), (ATerm)ATempty, (ATerm) ATempty);
              p_35 = t;
              t = term_g_42;
              q_35 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_g_42, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_111), (ATerm)ATempty, (ATerm) ATempty));
              t = b_7(q_35, p_35, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(m_42);
            }
          else
            {
              t = l_42;
              {
                ATerm n_42 = t;
                int o_42 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_35 = NULL,y_35 = NULL,a_36 = NULL,b_36 = NULL,e_36 = NULL,f_36 = NULL,s_36 = NULL,t_36 = NULL,v_36 = NULL,x_37 = NULL,z_37 = NULL;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_111), (ATerm)ATempty, (ATerm) ATempty);
                    x_37 = t;
                    t = term_g_42;
                    z_37 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_g_42, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_111), (ATerm)ATempty, (ATerm) ATempty));
                    t = b_7(z_37, x_37, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm p_42 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) p_42) != ATmakeSymbol("d_0", 0, ATtrue)))
                          _fail(t);
                        x_35 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = x_35;
                    t = strename_0_0(t);
                    if(match_cons(t, sym_SDefT_4))
                      {
                        if((q_111 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        y_35 = ATgetArgument(t, 1);
                        b_36 = ATgetArgument(t, 2);
                        a_36 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__3, y_35, r_111, a_36);
                    t = substitute_args_0_0(t);
                    f_36 = t;
                    t = b_36;
                    t = map_1_0(s_6, t);
                    e_36 = t;
                    t = (ATerm) ATmakeAppl(sym__2, s_111, e_36);
                    t = genzip_4_0(v_6, f_7, g_7, h_7, t);
                    s_36 = t;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_111), (ATerm)ATempty, (ATerm) ATempty);
                    t_36 = t;
                    t = term_q_42;
                    v_36 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_111), (ATerm)ATempty, (ATerm) ATempty), term_q_42);
                    t = l_14(i_7, t_36, v_36, t);
                    t = (ATerm) ATmakeAppl(sym_Scope_2, e_36, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_36), f_36));
                    t = simplify_0_0(t);
                    ;
                    LocalPopChoice(o_42);
                  }
                else
                  {
                    t = n_42;
                    {
                      ATerm p_38 = NULL,q_38 = NULL;
                      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_111), (ATerm)ATempty, (ATerm) ATempty);
                      p_38 = t;
                      t = term_g_42;
                      q_38 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_g_42, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_111), (ATerm)ATempty, (ATerm) ATempty));
                      t = b_7(q_38, p_38, t);
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
ATerm t_7 (ATerm t)
{
  t = term_r_42;
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL;
  if(match_cons(t, sym__2))
    {
      f_39 = ATgetArgument(t, 0);
      g_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_15(f_39, g_39, t);
  return(t);
}
ATerm occurrences_1_0 (ATerm e_128 (ATerm), ATerm t)
{
  ATerm x_111 = NULL,y_111 = NULL,z_111 = NULL,s_38 = NULL;
  if(((z_111 != NULL) && (z_111 != t)))
    _fail(t);
  else
    z_111 = t;
  {
    ATerm s_42 = t;
    int t_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_128(t);
        t = term_o_16;
        ;
        LocalPopChoice(t_42);
      }
    else
      {
        t = s_42;
        t = term_r_42;
      }
    if(((x_111 != NULL) && (x_111 != t)))
      _fail(t);
    else
      x_111 = t;
    t = SSL_explode_term(not_null(z_111));
    if(match_cons(t, sym__2))
      {
        ATerm u_42 = ATgetArgument(t, 0);
        if(((s_38 != NULL) && (s_38 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          s_38 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = not_null(s_38);
    {
      ATerm w_7 (ATerm t)
      {
        t = occurrences_1_0(e_128, t);
        return(t);
      }
      t = foldr_3_0(t_7, v_7, w_7, t);
      if(((y_111 != NULL) && (y_111 != t)))
        _fail(t);
      else
        y_111 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_111), not_null(y_111));
      t = s_15(not_null(x_111), not_null(y_111), t);
    }
  }
  return(t);
}
ATerm h_14 (ATerm o_117 (ATerm), ATerm j_43, ATerm i_43, ATerm t)
{
  ATerm c_112 = NULL,d_112 = NULL;
  if(((c_112 != NULL) && (c_112 != t)))
    _fail(t);
  else
    c_112 = t;
  t = not_null(i_43);
  {
    ATerm w_42 = t;
    if((PushChoice() == 0))
      {
        ATerm x_7 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm x_42 = ATgetArgument(t, 0);
              if(match_cons(x_42, sym_SVar_1))
                {
                  if(((j_43 != NULL) && (j_43 != ATgetArgument(x_42, 0))))
                    _fail(ATgetArgument(x_42, 0));
                  else
                    j_43 = ATgetArgument(x_42, 0);
                }
              else
                _fail(t);
              {
                ATerm y_42 = ATgetArgument(t, 1);
              }
              {
                ATerm z_42 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(x_7, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_42;
      }
    t = o_117(t);
    {
      ATerm y_7 (ATerm t)
      {
        if(match_cons(t, sym_CallT_3))
          {
            ATerm a_43 = ATgetArgument(t, 0);
            if(match_cons(a_43, sym_SVar_1))
              {
                if(((j_43 != NULL) && (j_43 != ATgetArgument(a_43, 0))))
                  _fail(ATgetArgument(a_43, 0));
                else
                  j_43 = ATgetArgument(a_43, 0);
              }
            else
              _fail(t);
            {
              ATerm b_43 = ATgetArgument(t, 1);
            }
            {
              ATerm c_43 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        return(t);
      }
      t = occurrences_1_0(y_7, t);
      if(((d_112 != NULL) && (d_112 != t)))
        _fail(t);
      else
        d_112 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_112), term_o_16);
      t = leq_0_0(t);
      t = not_null(c_112);
    }
  }
  return(t);
}
ATerm k_14 (ATerm d_58, ATerm e_58, ATerm t)
{
  ATerm e_112 = NULL,f_112 = NULL;
  f_112 = t;
  {
    ATerm d_43 = t;
    int f_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_58, e_58);
        t = u_15(d_58, e_58, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_43 = ATgetFirst((ATermList) t);
            e_112 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(f_43);
        t = SSL_table_put(d_58, e_58, e_112);
        t = (ATerm) ATmakeAppl(sym__3, d_58, e_58, e_112);
      }
    else
      {
        t = d_43;
        t = SSL_table_remove(d_58, e_58);
        t = (ATerm) ATmakeAppl(sym__2, d_58, e_58);
      }
    t = f_112;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm t_131 (ATerm), ATerm t)
{
  ATerm g_112 = NULL,h_112 = NULL,i_112 = NULL,j_112 = NULL,k_112 = NULL;
  if(((j_112 != NULL) && (j_112 != t)))
    _fail(t);
  else
    j_112 = t;
  t = t_131(t);
  if(((i_112 != NULL) && (i_112 != t)))
    _fail(t);
  else
    i_112 = t;
  {
    ATerm h_43 = t;
    int k_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_112 = NULL;
        t = term_l_43;
        l_112 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_112), term_l_43);
        t = u_15(not_null(i_112), l_112, t);
        ;
        LocalPopChoice(k_43);
      }
    else
      {
        t = h_43;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((h_112 != NULL) && (h_112 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          h_112 = ATgetFirst((ATermList) t);
        if(((g_112 != NULL) && (g_112 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          g_112 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_l_43;
    if(((k_112 != NULL) && (k_112 != t)))
      _fail(t);
    else
      k_112 = t;
    t = SSL_table_put(not_null(i_112), not_null(k_112), not_null(g_112));
    t = not_null(h_112);
    {
      ATerm z_7 (ATerm t)
      {
        ATerm m_112 = NULL;
        m_112 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_112), m_112);
        t = k_14(not_null(i_112), m_112, t);
        return(t);
      }
      t = map_1_0(z_7, t);
      t = not_null(j_112);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm q_122 (ATerm), ATerm r_122 (ATerm), ATerm t)
{
  ATerm m_43 = t;
  int n_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_122(t);
      t = r_122(t);
      ;
      LocalPopChoice(n_43);
    }
  else
    {
      t = m_43;
      t = r_122(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm s_131 (ATerm), ATerm t)
{
  ATerm o_112 = NULL,p_112 = NULL,r_112 = NULL,s_112 = NULL,t_112 = NULL;
  p_112 = t;
  t = s_131(t);
  o_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_112, term_l_43);
  {
    ATerm o_43 = t;
    int p_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_112 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_43 = ATgetArgument(t, 0);
            ATerm r_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_l_43;
        x_112 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_112, term_l_43);
        t = u_15(o_112, x_112, t);
        ;
        LocalPopChoice(p_43);
      }
    else
      {
        t = o_43;
        t = (ATerm) ATempty;
      }
    r_112 = t;
    t = term_l_43;
    s_112 = t;
    t = (ATerm) ATinsert(CheckATermList(r_112), (ATerm) ATempty);
    t_112 = t;
    t = SSL_table_put(o_112, s_112, t_112);
    t = p_112;
  }
  return(t);
}
ATerm scope_2_0 (ATerm u_131 (ATerm), ATerm v_131 (ATerm), ATerm t)
{
  ATerm a_8 (ATerm t)
  {
    t = end_scope_1_0(u_131, t);
    return(t);
  }
  t = begin_scope_1_0(u_131, t);
  t = restore_always_2_0(v_131, a_8, t);
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_g_42;
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = term_s_43;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_g_42;
  return(t);
}
ATerm inline_sdef_0_0 (ATerm t)
{
  ATerm c_8 (ATerm t)
  {
    ATerm e_8 (ATerm t)
    {
      ATerm t_43 = t;
      int u_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_113 = NULL,c_113 = NULL,d_113 = NULL;
          b_113 = t;
          {
            ATerm v_43 = t;
            int w_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    c_113 = ATgetArgument(t, 0);
                    {
                      ATerm y_43 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm z_43 = ATgetArgument(t, 2);
                    }
                    {
                      ATerm a_44 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(w_43);
                {
                  ATerm g_113 = NULL,h_113 = NULL;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_113), (ATerm)ATempty, (ATerm) ATempty);
                  g_113 = t;
                  t = term_q_42;
                  h_113 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_113), (ATerm)ATempty, (ATerm) ATempty), term_q_42);
                  t = l_14(f_8, g_113, h_113, t);
                  t = b_113;
                }
              }
            else
              {
                t = v_43;
                if(match_cons(t, sym_Let_2))
                  {
                    c_113 = ATgetArgument(t, 0);
                    d_113 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_113;
                {
                  ATerm g_8 (ATerm t)
                  {
                    ATerm k_113 = NULL,l_113 = NULL;
                    if(match_cons(t, sym_SDefT_4))
                      {
                        if(((k_113 != NULL) && (k_113 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          k_113 = ATgetArgument(t, 0);
                        {
                          ATerm c_44 = ATgetArgument(t, 1);
                        }
                        {
                          ATerm d_44 = ATgetArgument(t, 2);
                        }
                        if(((l_113 != NULL) && (l_113 != ATgetArgument(t, 3))))
                          _fail(ATgetArgument(t, 3));
                        else
                          l_113 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    {
                      ATerm i_8 (ATerm t)
                      {
                        t = not_null(d_113);
                        return(t);
                      }
                      t = h_14(i_8, not_null(k_113), not_null(l_113), t);
                      t = AddSDef_0_0(t);
                    }
                    return(t);
                  }
                  t = map_1_0(g_8, t);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(c_113), not_null(d_113));
                }
              }
          }
          ;
          LocalPopChoice(u_43);
        }
      else
        {
          t = t_43;
          t = repeat_1_0(InlineCall_0_0, t);
        }
      t = SRTS_all(inline_sdef_0_0, t);
      return(t);
    }
    t = scope_2_0(d_8, e_8, t);
    return(t);
  }
  t = scope_2_0(b_8, c_8, t);
  return(t);
}
ATerm l_14 (ATerm w_131 (ATerm), ATerm q_57, ATerm o_57, ATerm t)
{
  ATerm n_113 = NULL,o_113 = NULL,p_113 = NULL,q_113 = NULL,r_113 = NULL,s_113 = NULL;
  q_113 = t;
  t = w_131(t);
  n_113 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_113, q_57, o_57);
  t = v_15(n_113, q_57, o_57, t);
  {
    ATerm i_44 = t;
    int j_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_113 = NULL;
        t = term_l_43;
        t_113 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_113, term_l_43);
        t = u_15(n_113, t_113, t);
        ;
        LocalPopChoice(j_44);
      }
    else
      {
        t = i_44;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_113 = ATgetFirst((ATermList) t);
        p_113 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_l_43;
    r_113 = t;
    t = (ATerm) ATinsert(CheckATermList(p_113), (ATerm) ATinsert(CheckATermList(o_113), q_57));
    s_113 = t;
    t = SSL_table_put(n_113, r_113, s_113);
    t = q_113;
  }
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = term_g_42;
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_s_43;
  return(t);
}
ATerm AddSDef_0_0 (ATerm t)
{
  ATerm u_113 = NULL,v_113 = NULL,w_113 = NULL,x_113 = NULL,y_113 = NULL,z_113 = NULL,a_114 = NULL;
  v_113 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      u_113 = ATgetArgument(t, 0);
      {
        ATerm k_44 = ATgetArgument(t, 1);
      }
      {
        ATerm m_44 = ATgetArgument(t, 2);
      }
      {
        ATerm n_44 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  w_113 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_113), (ATerm)ATempty, (ATerm) ATempty);
  z_113 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_44, v_113);
  a_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_113), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_o_44, v_113));
  t = l_14(j_8, z_113, a_114, t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_113), (ATerm)ATempty, (ATerm) ATempty);
  x_113 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_44, v_113);
  y_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_113), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_p_44, v_113));
  t = l_14(k_8, x_113, y_113, t);
  t = w_113;
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm q_44 = t;
  if((PushChoice() == 0))
    {
      ATerm b_114 = NULL,c_114 = NULL;
      if(match_cons(t, sym__2))
        {
          b_114 = ATgetArgument(t, 0);
          c_114 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, b_114, c_114);
      {
        ATerm r_44 = t;
        int s_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(b_114, c_114);
            ;
            LocalPopChoice(s_44);
          }
        else
          {
            t = r_44;
            t = SSL_gtr(b_114, c_114);
          }
        t = (ATerm) ATmakeAppl(sym__2, b_114, c_114);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_44;
    }
  return(t);
}
ATerm foldr_3_0 (ATerm n_130 (ATerm), ATerm o_130 (ATerm), ATerm p_130 (ATerm), ATerm t)
{
  ATerm e_114 = NULL,f_114 = NULL,g_114 = NULL;
  e_114 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_114;
      t = n_130(t);
    }
  else
    {
      ATerm l_114 = NULL,m_114 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_114 = ATgetFirst((ATermList) t);
          g_114 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_114;
      t = p_130(t);
      l_114 = t;
      t = g_114;
      t = foldr_3_0(n_130, o_130, p_130, t);
      m_114 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_114, m_114);
      t = o_130(t);
    }
  return(t);
}
ATerm l_8 (ATerm t)
{
  t = term_o_16;
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL;
  if(match_cons(t, sym__2))
    {
      v_39 = ATgetArgument(t, 0);
      w_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_15(v_39, w_39, t);
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = term_o_16;
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL;
  if(match_cons(t, sym__2))
    {
      f_40 = ATgetArgument(t, 0);
      g_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_15(f_40, g_40, t);
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  ATerm t_44 = t;
  int u_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_39 = NULL,i_39 = NULL;
      i_39 = t;
      t = SSL_explode_term(i_39);
      if(match_cons(t, sym__2))
        {
          ATerm v_44 = ATgetArgument(t, 0);
          h_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_39;
      t = foldr_3_0(l_8, o_8, term_size_0_0, t);
      ;
      LocalPopChoice(u_44);
    }
  else
    {
      t = t_44;
      {
        ATerm t_114 (ATerm t)
        {
          ATerm a_40 = NULL,b_40 = NULL;
          b_40 = t;
          t = SSL_explode_term(b_40);
          if(match_cons(t, sym__2))
            {
              ATerm w_44 = ATgetArgument(t, 0);
              a_40 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_40;
          t = foldr_3_0(x_8, z_8, t_114, t);
          return(t);
        }
        t = t_114(t);
      }
    }
  return(t);
}
ATerm Seq_2_0 (ATerm k_108 (ATerm), ATerm l_108 (ATerm), ATerm t)
{
  ATerm u_114 = NULL,v_114 = NULL,x_114 = NULL,y_114 = NULL,z_114 = NULL,a_115 = NULL,y_34 = NULL;
  a_115 = t;
  if(match_cons(t, sym_Seq_2))
    {
      v_114 = ATgetArgument(t, 0);
      x_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_115);
  u_114 = t;
  t = v_114;
  t = k_108(t);
  y_114 = t;
  t = x_114;
  t = l_108(t);
  z_114 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, y_114, z_114);
  y_34 = t;
  t = SSLsetAnnotations(y_34, u_114);
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL,p_39 = NULL;
  x_45 = t;
  if(match_cons(t, sym_Match_1))
    {
      w_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_45);
  v_45 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, w_45);
  p_39 = t;
  t = SSLsetAnnotations(p_39, v_45);
  return(t);
}
ATerm body_to_inline_0_0 (ATerm t)
{
  ATerm p_115 = NULL,q_115 = NULL;
  ATerm o_121 (ATerm t)
  {
    ATerm k_121 = NULL,l_121 = NULL,m_121 = NULL,n_121 = NULL;
    l_121 = t;
    if(match_cons(t, sym_Id_0))
      {
        t = l_121;
      }
    else
      {
        if(match_cons(t, sym_Fail_0))
          {
            t = l_121;
          }
        else
          {
            if(match_cons(t, sym_CallT_3))
              {
                m_121 = ATgetArgument(t, 0);
                n_121 = ATgetArgument(t, 1);
                k_121 = ATgetArgument(t, 2);
                {
                  ATerm q_40 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,s_35 = NULL,j_35 = NULL;
                  t = SSLgetAnnotations(l_121);
                  q_40 = t;
                  t = m_121;
                  if(match_cons(t, sym_SVar_1))
                    {
                      j_41 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_121);
                  i_41 = t;
                  t = (ATerm) ATmakeAppl(sym_SVar_1, j_41);
                  j_35 = t;
                  t = SSLsetAnnotations(j_35, i_41);
                  k_41 = t;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, k_41, n_121, k_121);
                  s_35 = t;
                  t = SSLsetAnnotations(s_35, q_40);
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    m_121 = ATgetArgument(t, 0);
                    n_121 = ATgetArgument(t, 1);
                    k_121 = ATgetArgument(t, 2);
                    {
                      ATerm z_41 = NULL,e_42 = NULL,f_42 = NULL,i_42 = NULL,r_38 = NULL,a_38 = NULL;
                      t = SSLgetAnnotations(l_121);
                      z_41 = t;
                      t = m_121;
                      if(match_cons(t, sym_SVar_1))
                        {
                          f_42 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(m_121);
                      e_42 = t;
                      t = (ATerm) ATmakeAppl(sym_SVar_1, f_42);
                      a_38 = t;
                      t = SSLsetAnnotations(a_38, e_42);
                      i_42 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, i_42, n_121, k_121);
                      r_38 = t;
                      t = SSLsetAnnotations(r_38, z_41);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Build_1))
                      {
                        m_121 = ATgetArgument(t, 0);
                        {
                          ATerm v_42 = NULL,a_39 = NULL;
                          t = SSLgetAnnotations(l_121);
                          v_42 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, m_121);
                          a_39 = t;
                          t = SSLsetAnnotations(a_39, v_42);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            m_121 = ATgetArgument(t, 0);
                            {
                              ATerm e_43 = NULL,b_39 = NULL;
                              t = SSLgetAnnotations(l_121);
                              e_43 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, m_121);
                              b_39 = t;
                              t = SSLsetAnnotations(b_39, e_43);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                m_121 = ATgetArgument(t, 0);
                                n_121 = ATgetArgument(t, 1);
                                {
                                  ATerm x_44 = t;
                                  int y_44 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm x_43 = NULL,b_44 = NULL,e_44 = NULL,h_44 = NULL,o_39 = NULL,e_39 = NULL;
                                      t = SSLgetAnnotations(l_121);
                                      x_43 = t;
                                      t = m_121;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          e_44 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(m_121);
                                      b_44 = t;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, e_44);
                                      e_39 = t;
                                      t = SSLsetAnnotations(e_39, b_44);
                                      h_44 = t;
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_44, n_121);
                                      o_39 = t;
                                      t = SSLsetAnnotations(o_39, x_43);
                                      ;
                                      LocalPopChoice(y_44);
                                    }
                                  else
                                    {
                                      t = x_44;
                                      {
                                        ATerm z_44 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,t_45 = NULL,c_40 = NULL,q_39 = NULL;
                                        t = SSLgetAnnotations(l_121);
                                        z_44 = t;
                                        t = m_121;
                                        if(match_cons(t, sym_Scope_2))
                                          {
                                            i_45 = ATgetArgument(t, 0);
                                            j_45 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = SSLgetAnnotations(m_121);
                                        h_45 = t;
                                        t = j_45;
                                        t = Seq_2_0(c_9, _id, t);
                                        k_45 = t;
                                        t = (ATerm) ATmakeAppl(sym_Scope_2, i_45, k_45);
                                        q_39 = t;
                                        t = SSLsetAnnotations(q_39, h_45);
                                        t_45 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, t_45, n_121);
                                        c_40 = t;
                                        t = SSLsetAnnotations(c_40, z_44);
                                      }
                                    }
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    m_121 = ATgetArgument(t, 0);
                                    n_121 = ATgetArgument(t, 1);
                                    {
                                      ATerm a_45 = t;
                                      int b_45 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm k_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,e_40 = NULL,d_40 = NULL;
                                          t = SSLgetAnnotations(l_121);
                                          k_46 = t;
                                          t = n_121;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              o_46 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = SSLgetAnnotations(n_121);
                                          n_46 = t;
                                          t = (ATerm) ATmakeAppl(sym_Match_1, o_46);
                                          d_40 = t;
                                          t = SSLsetAnnotations(d_40, n_46);
                                          p_46 = t;
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, m_121, p_46);
                                          e_40 = t;
                                          t = SSLsetAnnotations(e_40, k_46);
                                          ;
                                          LocalPopChoice(b_45);
                                        }
                                      else
                                        {
                                          t = a_45;
                                          {
                                            ATerm n_47 = NULL,q_47 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,i_48 = NULL,n_48 = NULL,o_48 = NULL,v_66 = NULL,s_66 = NULL,p_66 = NULL;
                                            t = SSLgetAnnotations(l_121);
                                            n_47 = t;
                                            t = n_121;
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                b_48 = ATgetArgument(t, 0);
                                                c_48 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(n_121);
                                            q_47 = t;
                                            t = b_48;
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                n_48 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(b_48);
                                            i_48 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, n_48);
                                            p_66 = t;
                                            t = SSLsetAnnotations(p_66, i_48);
                                            o_48 = t;
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, o_48, c_48);
                                            s_66 = t;
                                            t = SSLsetAnnotations(s_66, q_47);
                                            d_48 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, m_121, d_48);
                                            v_66 = t;
                                            t = SSLsetAnnotations(v_66, n_47);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Choice_2))
                                      {
                                        m_121 = ATgetArgument(t, 0);
                                        n_121 = ATgetArgument(t, 1);
                                        {
                                          ATerm k_49 = NULL,n_49 = NULL,y_49 = NULL,z_66 = NULL;
                                          t = SSLgetAnnotations(l_121);
                                          k_49 = t;
                                          t = m_121;
                                          t = o_121(t);
                                          n_49 = t;
                                          t = n_121;
                                          t = o_121(t);
                                          y_49 = t;
                                          t = (ATerm) ATmakeAppl(sym_Choice_2, n_49, y_49);
                                          z_66 = t;
                                          t = SSLsetAnnotations(z_66, k_49);
                                        }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_LChoice_2))
                                          {
                                            m_121 = ATgetArgument(t, 0);
                                            n_121 = ATgetArgument(t, 1);
                                            {
                                              ATerm n_50 = NULL,q_50 = NULL,s_50 = NULL,a_67 = NULL;
                                              t = SSLgetAnnotations(l_121);
                                              n_50 = t;
                                              t = m_121;
                                              t = o_121(t);
                                              q_50 = t;
                                              t = n_121;
                                              t = o_121(t);
                                              s_50 = t;
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, q_50, s_50);
                                              a_67 = t;
                                              t = SSLsetAnnotations(a_67, n_50);
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_GuardedLChoice_3))
                                              {
                                                m_121 = ATgetArgument(t, 0);
                                                n_121 = ATgetArgument(t, 1);
                                                k_121 = ATgetArgument(t, 2);
                                                {
                                                  ATerm n_51 = NULL,u_51 = NULL,w_51 = NULL,y_51 = NULL,g_67 = NULL;
                                                  t = SSLgetAnnotations(l_121);
                                                  n_51 = t;
                                                  t = m_121;
                                                  t = o_121(t);
                                                  u_51 = t;
                                                  t = n_121;
                                                  t = o_121(t);
                                                  w_51 = t;
                                                  t = k_121;
                                                  t = o_121(t);
                                                  y_51 = t;
                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, u_51, w_51, y_51);
                                                  g_67 = t;
                                                  t = SSLsetAnnotations(g_67, n_51);
                                                }
                                              }
                                            else
                                              {
                                                ATerm q_52 = NULL,h_67 = NULL;
                                                if(match_cons(t, sym_Cong_2))
                                                  {
                                                    m_121 = ATgetArgument(t, 0);
                                                    n_121 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSLgetAnnotations(l_121);
                                                q_52 = t;
                                                t = (ATerm) ATmakeAppl(sym_Cong_2, m_121, n_121);
                                                h_67 = t;
                                                t = SSLsetAnnotations(h_67, q_52);
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
  t = o_121(t);
  if(((p_115 != NULL) && (p_115 != t)))
    _fail(t);
  else
    p_115 = t;
  t = term_size_0_0(t);
  if(((q_115 != NULL) && (q_115 != t)))
    _fail(t);
  else
    q_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(q_115), term_c_45);
  t = leq_0_0(t);
  t = not_null(p_115);
  return(t);
}
ATerm inlineable_0_0 (ATerm t)
{
  ATerm d_122 = NULL,e_122 = NULL,f_122 = NULL,g_122 = NULL,h_122 = NULL,i_122 = NULL,j_122 = NULL,k_122 = NULL,q_70 = NULL;
  if(((k_122 != NULL) && (k_122 != t)))
    _fail(t);
  else
    k_122 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      if(((f_122 != NULL) && (f_122 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_122 = ATgetArgument(t, 0);
      if(((g_122 != NULL) && (g_122 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_122 = ATgetArgument(t, 1);
      if(((h_122 != NULL) && (h_122 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        h_122 = ATgetArgument(t, 2);
      if(((i_122 != NULL) && (i_122 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        i_122 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(k_122));
  if(((e_122 != NULL) && (e_122 != t)))
    _fail(t);
  else
    e_122 = t;
  t = not_null(f_122);
  {
    ATerm f_45 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_45;
      }
    if(((d_122 != NULL) && (d_122 != t)))
      _fail(t);
    else
      d_122 = t;
    t = not_null(i_122);
    {
      ATerm g_45 = t;
      if((PushChoice() == 0))
        {
          ATerm e_9 (ATerm t)
          {
            if(match_cons(t, sym_CallT_3))
              {
                ATerm u_45 = ATgetArgument(t, 0);
                if(match_cons(u_45, sym_SVar_1))
                  {
                    if(((d_122 != NULL) && (d_122 != ATgetArgument(u_45, 0))))
                      _fail(ATgetArgument(u_45, 0));
                    else
                      d_122 = ATgetArgument(u_45, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm y_45 = ATgetArgument(t, 1);
                }
                {
                  ATerm c_46 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(e_9, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = g_45;
        }
      t = not_null(i_122);
      t = body_to_inline_0_0(t);
      if(((j_122 != NULL) && (j_122 != t)))
        _fail(t);
      else
        j_122 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(d_122), not_null(g_122), not_null(h_122), not_null(j_122));
      if(((q_70 != NULL) && (q_70 != t)))
        _fail(t);
      else
        q_70 = t;
      t = SSLsetAnnotations(not_null(q_70), not_null(e_122));
    }
  }
  return(t);
}
ATerm Anno__Cong_____2_0 (ATerm j_117 (ATerm), ATerm k_117 (ATerm), ATerm t)
{
  ATerm m_122 = NULL,n_122 = NULL,o_122 = NULL,p_122 = NULL,s_122 = NULL;
  s_122 = t;
  m_122 = t;
  t = SSLgetAnnotations(s_122);
  o_122 = t;
  t = m_122;
  t = j_117(t);
  n_122 = t;
  t = o_122;
  t = k_117(t);
  p_122 = t;
  t = SSLsetAnnotations(n_122, p_122);
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm d_46 = t;
  int e_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_123 = NULL,g_123 = NULL,h_123 = NULL,f_53 = NULL,s_70 = NULL;
      f_123 = t;
      if(match_cons(t, sym_Op_2))
        {
          g_123 = ATgetArgument(t, 0);
          h_123 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_123);
      f_53 = t;
      t = g_123;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Op_2, g_123, h_123);
      s_70 = t;
      t = SSLsetAnnotations(s_70, f_53);
      ;
      LocalPopChoice(e_46);
    }
  else
    {
      t = d_46;
      t = Anno__Cong_____2_0(g_9, h_9, t);
    }
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm i_123 = NULL,j_123 = NULL,l_123 = NULL,t_70 = NULL;
  l_123 = t;
  if(match_cons(t, sym_Var_1))
    {
      j_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_123);
  i_123 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_123);
  t_70 = t;
  t = SSLsetAnnotations(t_70, i_123);
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm b_124 = NULL,c_124 = NULL,d_124 = NULL;
  b_124 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_124;
    }
  else
    {
      ATerm r_53 = NULL,x_70 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_124 = ATgetFirst((ATermList) t);
          d_124 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_124);
      r_53 = t;
      t = c_124;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      t = d_124;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(d_124), c_124);
      x_70 = t;
      t = SSLsetAnnotations(x_70, r_53);
    }
  return(t);
}
ATerm o_14 (ATerm c_90, ATerm b_90, ATerm t)
{
  t = c_90;
  {
    ATerm f_46 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(f_9, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_46;
      }
    t = (ATerm) ATmakeAppl(sym_Build_1, c_90);
  }
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm n_124 = NULL,o_124 = NULL,q_124 = NULL,r_124 = NULL,s_124 = NULL,t_124 = NULL,u_124 = NULL,v_124 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      q_124 = ATgetArgument(t, 0);
      t_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_124;
  if(match_cons(t, sym_Match_1))
    {
      r_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_124;
  if(match_cons(t, sym_Var_1))
    {
      s_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_124;
  if(match_cons(t, sym_Seq_2))
    {
      u_124 = ATgetArgument(t, 0);
      o_124 = ATgetArgument(t, 1);
      t = u_124;
      if(match_cons(t, sym_Build_1))
        {
          v_124 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_124;
      if(match_cons(t, sym_Var_1))
        {
          n_124 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_124;
      if((s_124 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_124)), o_124);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          u_124 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_124;
      if(match_cons(t, sym_Var_1))
        {
          v_124 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_124;
      if((s_124 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_124));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm e_125 = NULL,f_125 = NULL,j_125 = NULL,m_125 = NULL,n_125 = NULL,o_125 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      j_125 = ATgetArgument(t, 0);
      n_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_125;
  if(match_cons(t, sym_Build_1))
    {
      m_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_125;
  if(match_cons(t, sym_Seq_2))
    {
      o_125 = ATgetArgument(t, 0);
      f_125 = ATgetArgument(t, 1);
      t = o_125;
      if(match_cons(t, sym_Match_1))
        {
          e_125 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_125;
      if((m_125 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_125), f_125);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          o_125 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_125;
      if((m_125 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, m_125);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm z_125 = NULL,d_126 = NULL,g_126 = NULL,h_126 = NULL,i_126 = NULL,j_126 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      g_126 = ATgetArgument(t, 0);
      i_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_126;
  if(match_cons(t, sym_Match_1))
    {
      h_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_126;
  if(match_cons(t, sym_Seq_2))
    {
      j_126 = ATgetArgument(t, 0);
      d_126 = ATgetArgument(t, 1);
      t = j_126;
      if(match_cons(t, sym_Match_1))
        {
          z_125 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_125;
      if((h_126 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, h_126), d_126);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          j_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_126;
      if((h_126 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, h_126);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm r_126 = NULL,s_126 = NULL,t_126 = NULL,v_126 = NULL,x_126 = NULL,y_126 = NULL,z_126 = NULL,a_127 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      v_126 = ATgetArgument(t, 0);
      x_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_126;
  if(match_cons(t, sym_Build_1))
    {
      ATerm g_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_126;
  if(match_cons(t, sym_Seq_2))
    {
      y_126 = ATgetArgument(t, 0);
      z_126 = ATgetArgument(t, 1);
      t = y_126;
      if(match_cons(t, sym_PrimT_3))
        {
          r_126 = ATgetArgument(t, 0);
          s_126 = ATgetArgument(t, 1);
          t_126 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, r_126, s_126, t_126), z_126);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          y_126 = ATgetArgument(t, 0);
          z_126 = ATgetArgument(t, 1);
          a_127 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, y_126, z_126, a_127);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm m_127 = NULL,n_127 = NULL,p_127 = NULL,r_127 = NULL,u_127 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      p_127 = ATgetArgument(t, 0);
      r_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_127;
  if(match_cons(t, sym_Build_1))
    {
      ATerm h_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_127;
  if(match_cons(t, sym_Seq_2))
    {
      u_127 = ATgetArgument(t, 0);
      n_127 = ATgetArgument(t, 1);
      t = u_127;
      if(match_cons(t, sym_Build_1))
        {
          m_127 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_127), n_127);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          u_127 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, u_127);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm v_123 (ATerm), ATerm w_123 (ATerm), ATerm x_123 (ATerm), ATerm y_123 (ATerm), ATerm t)
{
  ATerm o_128 (ATerm t)
  {
    ATerm i_46 = t;
    int j_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_123(t);
        ;
        LocalPopChoice(j_46);
      }
    else
      {
        t = i_46;
        {
          ATerm c_128 = NULL,d_128 = NULL,f_128 = NULL,g_128 = NULL,m_128 = NULL,n_128 = NULL,c_71 = NULL;
          t = w_123(t);
          n_128 = t;
          if(match_cons(t, sym__2))
            {
              d_128 = ATgetArgument(t, 0);
              f_128 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_128);
          c_128 = t;
          t = d_128;
          t = y_123(t);
          g_128 = t;
          t = f_128;
          t = o_128(t);
          m_128 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_128, m_128);
          c_71 = t;
          t = SSLsetAnnotations(c_71, c_128);
          t = x_123(t);
        }
      }
    return(t);
  }
  t = o_128(t);
  return(t);
}
ATerm i_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_46 = ATgetArgument(t, 0);
      if(((ATgetType(l_46) != AT_LIST) || !(ATisEmpty(l_46))))
        _fail(t);
      {
        ATerm m_46 = ATgetArgument(t, 1);
        if(((ATgetType(m_46) != AT_LIST) || !(ATisEmpty(m_46))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_9 (ATerm t)
{
  ATerm n_129 = NULL,o_129 = NULL,p_129 = NULL,q_129 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_46 = ATgetArgument(t, 0);
      if(((ATgetType(s_46) == AT_LIST) && !(ATisEmpty(s_46))))
        {
          n_129 = ATgetFirst((ATermList) s_46);
          o_129 = (ATerm) ATgetNext((ATermList) s_46);
        }
      else
        _fail(t);
      {
        ATerm x_46 = ATgetArgument(t, 1);
        if(((ATgetType(x_46) == AT_LIST) && !(ATisEmpty(x_46))))
          {
            p_129 = ATgetFirst((ATermList) x_46);
            q_129 = (ATerm) ATgetNext((ATermList) x_46);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_129, p_129), (ATerm) ATmakeAppl(sym__2, o_129, q_129));
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm r_129 = NULL,s_129 = NULL;
  if(match_cons(t, sym__2))
    {
      r_129 = ATgetArgument(t, 0);
      s_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_129), r_129);
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm t_129 = NULL,u_129 = NULL;
  if(match_cons(t, sym__2))
    {
      t_129 = ATgetArgument(t, 0);
      u_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_129), (ATerm) ATmakeAppl(sym_Match_1, u_129));
  return(t);
}
ATerm m_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_46 = ATgetArgument(t, 0);
      if(((ATgetType(y_46) != AT_LIST) || !(ATisEmpty(y_46))))
        _fail(t);
      {
        ATerm z_46 = ATgetArgument(t, 1);
        if(((ATgetType(z_46) != AT_LIST) || !(ATisEmpty(z_46))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm z_129 = NULL,a_130 = NULL,c_130 = NULL,d_130 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_47 = ATgetArgument(t, 0);
      if(((ATgetType(a_47) == AT_LIST) && !(ATisEmpty(a_47))))
        {
          z_129 = ATgetFirst((ATermList) a_47);
          a_130 = (ATerm) ATgetNext((ATermList) a_47);
        }
      else
        _fail(t);
      {
        ATerm i_47 = ATgetArgument(t, 1);
        if(((ATgetType(i_47) == AT_LIST) && !(ATisEmpty(i_47))))
          {
            c_130 = ATgetFirst((ATermList) i_47);
            d_130 = (ATerm) ATgetNext((ATermList) i_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_129, c_130), (ATerm) ATmakeAppl(sym__2, a_130, d_130));
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm e_130 = NULL,f_130 = NULL;
  if(match_cons(t, sym__2))
    {
      e_130 = ATgetArgument(t, 0);
      f_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_130), e_130);
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm g_130 = NULL,h_130 = NULL;
  if(match_cons(t, sym__2))
    {
      g_130 = ATgetArgument(t, 0);
      h_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_130), (ATerm) ATmakeAppl(sym_Match_1, h_130));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm w_128 = NULL,x_128 = NULL,y_128 = NULL,a_129 = NULL,b_129 = NULL,c_129 = NULL,d_129 = NULL,e_129 = NULL,f_129 = NULL,g_129 = NULL,h_129 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      a_129 = ATgetArgument(t, 0);
      e_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_129;
  if(match_cons(t, sym_Build_1))
    {
      b_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_129;
  if(match_cons(t, sym_Op_2))
    {
      c_129 = ATgetArgument(t, 0);
      d_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_129;
  if(match_cons(t, sym_Seq_2))
    {
      f_129 = ATgetArgument(t, 0);
      y_128 = ATgetArgument(t, 1);
      {
        ATerm m_129 = NULL;
        t = f_129;
        if(match_cons(t, sym_Match_1))
          {
            g_129 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_129;
        if(match_cons(t, sym_Op_2))
          {
            w_128 = ATgetArgument(t, 0);
            x_128 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_128;
        if((c_129 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, d_129, x_128);
        t = genzip_4_0(i_9, j_9, k_9, l_9, t);
        m_129 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_129), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, c_129, d_129)), y_128));
      }
    }
  else
    {
      ATerm y_129 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          f_129 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_129;
      if(match_cons(t, sym_Op_2))
        {
          g_129 = ATgetArgument(t, 0);
          h_129 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_129;
      if((c_129 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, d_129, h_129);
      t = genzip_4_0(m_9, n_9, p_9, q_9, t);
      y_129 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_129), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, c_129, d_129)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm i_131 = NULL,l_131 = NULL,m_131 = NULL,n_131 = NULL,o_131 = NULL,q_131 = NULL,r_131 = NULL,x_131 = NULL;
  l_131 = t;
  if(match_cons(t, sym_Seq_2))
    {
      m_131 = ATgetArgument(t, 0);
      q_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_131;
  if(match_cons(t, sym_Build_1))
    {
      n_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_131;
  if(match_cons(t, sym_Op_2))
    {
      o_131 = ATgetArgument(t, 0);
      {
        ATerm j_47 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = q_131;
  {
    ATerm k_47 = t;
    int l_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            r_131 = ATgetArgument(t, 0);
            {
              ATerm m_47 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(l_47);
        t = r_131;
        if(match_cons(t, sym_Match_1))
          {
            x_131 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_131;
        if(match_cons(t, sym_Op_2))
          {
            i_131 = ATgetArgument(t, 0);
            {
              ATerm o_47 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_131, i_131);
        {
          ATerm p_47 = t;
          if((PushChoice() == 0))
            {
              ATerm l_54 = NULL;
              if(match_cons(t, sym__2))
                {
                  l_54 = ATgetArgument(t, 0);
                  if((l_54 != ATgetArgument(t, 1)))
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
              t = p_47;
            }
          t = term_o_17;
        }
      }
    else
      {
        t = k_47;
        if(match_cons(t, sym_Match_1))
          {
            r_131 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_131;
        if(match_cons(t, sym_Op_2))
          {
            x_131 = ATgetArgument(t, 0);
            {
              ATerm r_47 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_131, x_131);
        {
          ATerm v_47 = t;
          if((PushChoice() == 0))
            {
              ATerm g_55 = NULL;
              if(match_cons(t, sym__2))
                {
                  g_55 = ATgetArgument(t, 0);
                  if((g_55 != ATgetArgument(t, 1)))
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
              t = v_47;
            }
          t = term_o_17;
        }
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm n_120 (ATerm), ATerm t)
{
  ATerm c_132 (ATerm t)
  {
    ATerm p_48 = t;
    int q_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_120(t);
        ;
        LocalPopChoice(q_48);
      }
    else
      {
        t = p_48;
        t = SRTS_one(c_132, t);
      }
    return(t);
  }
  t = c_132(t);
  return(t);
}
ATerm at_end_1_0 (ATerm a_126 (ATerm), ATerm t)
{
  ATerm i_133 (ATerm t)
  {
    ATerm d_133 = NULL,e_133 = NULL,h_133 = NULL;
    h_133 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_133 = ATgetFirst((ATermList) t);
        e_133 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_55 = NULL,l_56 = NULL,f_71 = NULL;
          t = SSLgetAnnotations(h_133);
          r_55 = t;
          t = e_133;
          t = i_133(t);
          l_56 = t;
          t = (ATerm) ATinsert(CheckATermList(l_56), d_133);
          f_71 = t;
          t = SSLsetAnnotations(f_71, r_55);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_133;
        t = a_126(t);
      }
    return(t);
  }
  t = i_133(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_132 = NULL,f_132 = NULL,g_132 = NULL;
  e_132 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_132;
    }
  else
    {
      ATerm s_9 (ATerm t)
      {
        t = not_null(g_132);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((f_132 != NULL) && (f_132 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            f_132 = ATgetFirst((ATermList) t);
          if(((g_132 != NULL) && (g_132 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            g_132 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(f_132);
      t = at_end_1_0(s_9, t);
    }
  return(t);
}
ATerm u_133 (ATerm m_133, ATerm t)
{
  ATerm n_133 = NULL;
  t = SSL_explode_term(m_133);
  if(match_cons(t, sym__2))
    {
      ATerm r_48 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_48) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      n_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_133;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_133 = NULL,q_133 = NULL,r_133 = NULL;
  if(((r_133 != NULL) && (r_133 != t)))
    _fail(t);
  else
    r_133 = t;
  if(match_cons(t, sym__2))
    {
      p_133 = ATgetArgument(t, 0);
      q_133 = ATgetArgument(t, 1);
      {
        ATerm s_48 = t;
        int x_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_9 (ATerm t)
            {
              t = not_null(q_133);
              return(t);
            }
            t = not_null(p_133);
            t = at_end_1_0(t_9, t);
            ;
            LocalPopChoice(x_48);
          }
        else
          {
            t = s_48;
            t = u_133(not_null(r_133), t);
          }
      }
    }
  else
    {
      t = u_133(not_null(r_133), t);
    }
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm n_134 = NULL,o_134 = NULL,t_134 = NULL,u_134 = NULL,v_134 = NULL,w_134 = NULL,x_134 = NULL,y_134 = NULL,z_134 = NULL,a_135 = NULL,b_135 = NULL,c_135 = NULL,d_135 = NULL;
  n_134 = t;
  if(match_cons(t, sym_Let_2))
    {
      o_134 = ATgetArgument(t, 0);
      z_134 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_134;
  if(match_cons(t, sym_Let_2))
    {
      a_135 = ATgetArgument(t, 0);
      c_135 = ATgetArgument(t, 1);
      {
        ATerm h_135 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, o_134, a_135);
        t = conc_0_0(t);
        h_135 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, h_135, c_135);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          a_135 = ATgetArgument(t, 0);
          c_135 = ATgetArgument(t, 1);
          d_135 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = o_134;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_134 = ATgetFirst((ATermList) t);
          y_134 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_134;
      if(match_cons(t, sym_SDefT_4))
        {
          u_134 = ATgetArgument(t, 0);
          v_134 = ATgetArgument(t, 1);
          w_134 = ATgetArgument(t, 2);
          x_134 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = v_134;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_134;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_134;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_135;
      if(match_cons(t, sym_SVar_1))
        {
          b_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_135;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_135;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_135;
      if((u_134 != t))
        {
          _fail(t);
        }
      t = x_134;
      {
        ATerm e_49 = t;
        if((PushChoice() == 0))
          {
            ATerm u_9 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm f_49 = ATgetArgument(t, 0);
                  if(match_cons(f_49, sym_SVar_1))
                    {
                      if(((u_134 != NULL) && (u_134 != ATgetArgument(f_49, 0))))
                        _fail(ATgetArgument(f_49, 0));
                      else
                        u_134 = ATgetArgument(f_49, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm i_49 = ATgetArgument(t, 1);
                    if(((ATgetType(i_49) != AT_LIST) || !(ATisEmpty(i_49))))
                      _fail(t);
                  }
                  {
                    ATerm j_49 = ATgetArgument(t, 2);
                    if(((ATgetType(j_49) != AT_LIST) || !(ATisEmpty(j_49))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(u_9, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_49;
          }
        t = not_null(x_134);
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm q_135 = NULL,r_135 = NULL,s_135 = NULL,t_135 = NULL,u_135 = NULL,v_135 = NULL,x_135 = NULL,y_135 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      x_135 = ATgetArgument(t, 0);
      t = x_135;
      if(match_cons(t, sym_Seq_2))
        {
          v_135 = ATgetArgument(t, 0);
          r_135 = ATgetArgument(t, 1);
          t = v_135;
          if(match_cons(t, sym_Where_1))
            {
              q_135 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_135;
          if(match_cons(t, sym_Seq_2))
            {
              s_135 = ATgetArgument(t, 0);
              u_135 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_135;
          if(match_cons(t, sym_Build_1))
            {
              t_135 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, q_135, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_135), u_135)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              v_135 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, v_135);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          x_135 = ATgetArgument(t, 0);
          t = x_135;
          if(match_cons(t, sym_Test_1))
            {
              v_135 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, v_135);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              x_135 = ATgetArgument(t, 0);
              t = x_135;
              if(match_cons(t, sym_Not_1))
                {
                  v_135 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, v_135);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  x_135 = ATgetArgument(t, 0);
                  y_135 = ATgetArgument(t, 1);
                  t = y_135;
                  if((x_135 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      x_135 = ATgetArgument(t, 0);
                      y_135 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = y_135;
                  if((x_135 != t))
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
  ATerm o_136 = NULL,p_136 = NULL,q_136 = NULL,r_136 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      o_136 = ATgetArgument(t, 0);
      r_136 = ATgetArgument(t, 1);
      t = o_136;
      if(match_cons(t, sym_LChoice_2))
        {
          p_136 = ATgetArgument(t, 0);
          q_136 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, p_136, (ATerm) ATmakeAppl(sym_LChoice_2, q_136, r_136));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          o_136 = ATgetArgument(t, 0);
          r_136 = ATgetArgument(t, 1);
          t = o_136;
          if(match_cons(t, sym_Seq_2))
            {
              p_136 = ATgetArgument(t, 0);
              q_136 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, p_136, (ATerm) ATmakeAppl(sym_Seq_2, q_136, r_136));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              o_136 = ATgetArgument(t, 0);
              r_136 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_136;
          if(match_cons(t, sym_Choice_2))
            {
              p_136 = ATgetArgument(t, 0);
              q_136 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, p_136, (ATerm) ATmakeAppl(sym_Choice_2, q_136, r_136));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm i_138 = NULL,j_138 = NULL,k_138 = NULL;
  i_138 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_138 = ATgetFirst((ATermList) t);
      k_138 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm l_49 = t;
    int m_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL,a_59 = NULL,e_59 = NULL,f_59 = NULL,i_71 = NULL,h_71 = NULL;
        t = SSLgetAnnotations(i_138);
        a_59 = t;
        t = j_138;
        t = l_0(t);
        e_59 = t;
        t = (ATerm) ATinsert(CheckATermList(k_138), e_59);
        h_71 = t;
        t = SSLsetAnnotations(h_71, a_59);
        f_59 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_58 = ATgetFirst((ATermList) t);
            o_58 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_59);
        m_58 = t;
        t = o_58;
        {
          ATerm p_49 = t;
          int q_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(l_0, t);
              ;
              LocalPopChoice(q_49);
            }
          else
            {
              t = p_49;
            }
          p_58 = t;
          t = (ATerm) ATinsert(CheckATermList(p_58), n_58);
          i_71 = t;
          t = SSLsetAnnotations(i_71, m_58);
        }
        ;
        LocalPopChoice(m_49);
      }
    else
      {
        t = l_49;
        {
          ATerm m_60 = NULL,r_60 = NULL,j_71 = NULL;
          t = SSLgetAnnotations(i_138);
          m_60 = t;
          t = k_138;
          t = map1_1_0(l_0, t);
          r_60 = t;
          t = (ATerm) ATinsert(CheckATermList(r_60), j_138);
          j_71 = t;
          t = SSLsetAnnotations(j_71, m_60);
        }
      }
  }
  return(t);
}
ATerm v_9 (ATerm t)
{
  ATerm s_139 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      s_139 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, s_139, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_17), term_c_17));
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm t_139 = NULL,u_139 = NULL;
  u_139 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      t_139 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, t_139, term_c_17);
    }
  else
    {
      t = u_139;
    }
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm g_140 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      g_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_140, term_c_17);
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm h_140 = NULL,i_140 = NULL;
  i_140 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_140 = ATgetArgument(t, 0);
      {
        ATerm z_49 = t;
        int a_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, h_140, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_17), term_c_17));
            ;
            LocalPopChoice(a_50);
          }
        else
          {
            t = z_49;
            t = i_140;
          }
      }
    }
  else
    {
      t = i_140;
    }
  return(t);
}
ATerm a_10 (ATerm t)
{
  ATerm s_140 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      s_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, s_140, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_17), term_c_17));
  return(t);
}
ATerm b_10 (ATerm t)
{
  ATerm t_140 = NULL,u_140 = NULL;
  u_140 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      t_140 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, t_140, term_c_17);
    }
  else
    {
      t = u_140;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm x_138 = NULL,y_138 = NULL,z_138 = NULL,a_139 = NULL,c_139 = NULL,d_139 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      c_139 = ATgetArgument(t, 0);
      d_139 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, c_139, d_139);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          c_139 = ATgetArgument(t, 0);
          t = c_139;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_138 = ATgetFirst((ATermList) t);
              y_138 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, x_138, (ATerm) ATmakeAppl(sym_LChoices_1, y_138));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_o_17;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              c_139 = ATgetArgument(t, 0);
              t = c_139;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_138 = ATgetFirst((ATermList) t);
                  y_138 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, x_138, (ATerm) ATmakeAppl(sym_Choices_1, y_138));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_o_17;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  c_139 = ATgetArgument(t, 0);
                  t = c_139;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      x_138 = ATgetFirst((ATermList) t);
                      y_138 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_138, (ATerm) ATmakeAppl(sym_Seqs_1, y_138));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_i_17;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_139 = ATgetArgument(t, 0);
                      d_139 = ATgetArgument(t, 1);
                      a_139 = ATgetArgument(t, 2);
                      z_138 = ATgetArgument(t, 3);
                      {
                        ATerm p_139 = NULL,r_139 = NULL;
                        t = d_139;
                        t = map1_1_0(v_9, t);
                        p_139 = t;
                        t = a_139;
                        t = map1_1_0(w_9, t);
                        r_139 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, c_139, p_139, r_139, z_138);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          c_139 = ATgetArgument(t, 0);
                          d_139 = ATgetArgument(t, 1);
                          a_139 = ATgetArgument(t, 2);
                          z_138 = ATgetArgument(t, 3);
                          {
                            ATerm b_50 = t;
                            int c_50 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm d_140 = NULL,f_140 = NULL;
                                t = a_139;
                                t = map1_1_0(x_9, t);
                                d_140 = t;
                                t = d_139;
                                t = map_1_0(y_9, t);
                                f_140 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, c_139, f_140, d_140, z_138);
                                ;
                                LocalPopChoice(c_50);
                              }
                            else
                              {
                                t = b_50;
                                {
                                  ATerm p_140 = NULL,r_140 = NULL;
                                  t = d_139;
                                  t = map1_1_0(a_10, t);
                                  p_140 = t;
                                  t = a_139;
                                  t = map_1_0(b_10, t);
                                  r_140 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, c_139, p_140, r_140, z_138);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              c_139 = ATgetArgument(t, 0);
                              d_139 = ATgetArgument(t, 1);
                              a_139 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, d_139, (ATerm) ATmakeAppl(sym_Op_2, term_i_32, (ATerm) ATinsert(ATinsert(ATempty, a_139), c_139)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  c_139 = ATgetArgument(t, 0);
                                  d_139 = ATgetArgument(t, 1);
                                  a_139 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, a_139)), c_139), (ATerm) ATmakeAppl(sym_Build_1, d_139)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      c_139 = ATgetArgument(t, 0);
                                      d_139 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_139, (ATerm) ATmakeAppl(sym_Match_1, d_139));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          c_139 = ATgetArgument(t, 0);
                                          d_139 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_139), d_139);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              c_139 = ATgetArgument(t, 0);
                                              d_139 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_139), c_139);
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
ATerm e_10 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm g_142 = NULL,h_142 = NULL,i_142 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      g_142 = ATgetArgument(t, 0);
      t = g_142;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_o_17;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          g_142 = ATgetArgument(t, 0);
          t = g_142;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_i_17;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              g_142 = ATgetArgument(t, 0);
              h_142 = ATgetArgument(t, 1);
              t = g_142;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_o_17;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  g_142 = ATgetArgument(t, 0);
                  h_142 = ATgetArgument(t, 1);
                  t = h_142;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_o_17;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      g_142 = ATgetArgument(t, 0);
                      h_142 = ATgetArgument(t, 1);
                      t = h_142;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_o_17;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          g_142 = ATgetArgument(t, 0);
                          t = g_142;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_o_17;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              g_142 = ATgetArgument(t, 0);
                              t = g_142;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_o_17;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  g_142 = ATgetArgument(t, 0);
                                  h_142 = ATgetArgument(t, 1);
                                  t = h_142;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_o_17;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      g_142 = ATgetArgument(t, 0);
                                      h_142 = ATgetArgument(t, 1);
                                      t = h_142;
                                      t = fetch_1_0(e_10, t);
                                      t = term_o_17;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          g_142 = ATgetArgument(t, 0);
                                          h_142 = ATgetArgument(t, 1);
                                          t = h_142;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = g_142;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = h_142;
                                                }
                                              else
                                                {
                                                  t = g_142;
                                                }
                                            }
                                          else
                                            {
                                              t = g_142;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = h_142;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              g_142 = ATgetArgument(t, 0);
                                              h_142 = ATgetArgument(t, 1);
                                              t = h_142;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = g_142;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = h_142;
                                                    }
                                                  else
                                                    {
                                                      t = g_142;
                                                    }
                                                }
                                              else
                                                {
                                                  t = g_142;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = h_142;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  g_142 = ATgetArgument(t, 0);
                                                  t = g_142;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_o_17;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      g_142 = ATgetArgument(t, 0);
                                                      h_142 = ATgetArgument(t, 1);
                                                      i_142 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = i_142;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_142, h_142);
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
  ATerm q_143 = NULL,s_143 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      s_143 = ATgetArgument(t, 0);
      t = s_143;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_i_17;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          s_143 = ATgetArgument(t, 0);
          t = s_143;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_o_17;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              s_143 = ATgetArgument(t, 0);
              q_143 = ATgetArgument(t, 1);
              t = q_143;
              if(match_cons(t, sym_Id_0))
                {
                  t = s_143;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = q_143;
                    }
                  else
                    {
                      t = s_143;
                    }
                }
              else
                {
                  t = s_143;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = q_143;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  s_143 = ATgetArgument(t, 0);
                  q_143 = ATgetArgument(t, 1);
                  t = s_143;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_i_17;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      s_143 = ATgetArgument(t, 0);
                      q_143 = ATgetArgument(t, 1);
                      t = q_143;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_i_17;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          s_143 = ATgetArgument(t, 0);
                          q_143 = ATgetArgument(t, 1);
                          t = q_143;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_i_17;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              s_143 = ATgetArgument(t, 0);
                              t = s_143;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_i_17;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  s_143 = ATgetArgument(t, 0);
                                  t = s_143;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_i_17;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      s_143 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = s_143;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_i_17;
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
  ATerm d_50 = t;
  int e_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(e_50);
    }
  else
    {
      t = d_50;
      {
        ATerm l_50 = t;
        int m_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
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
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(p_50);
                }
              else
                {
                  t = o_50;
                  {
                    ATerm r_50 = t;
                    int t_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(t_50);
                      }
                    else
                      {
                        t = r_50;
                        {
                          ATerm b_51 = t;
                          int d_51 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(d_51);
                            }
                          else
                            {
                              t = b_51;
                              {
                                ATerm f_51 = t;
                                int g_51 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm h_144 = NULL,i_144 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        h_144 = ATgetArgument(t, 0);
                                        i_144 = ATgetArgument(t, 1);
                                        t = h_144;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = i_144;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            h_144 = ATgetArgument(t, 0);
                                            i_144 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = h_144;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = i_144;
                                      }
                                    ;
                                    LocalPopChoice(g_51);
                                  }
                                else
                                  {
                                    t = f_51;
                                    {
                                      ATerm k_51 = t;
                                      int l_51 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(l_51);
                                        }
                                      else
                                        {
                                          t = k_51;
                                          {
                                            ATerm m_51 = t;
                                            int o_51 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                ;
                                                LocalPopChoice(o_51);
                                              }
                                            else
                                              {
                                                t = m_51;
                                                {
                                                  ATerm q_51 = t;
                                                  int r_51 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
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
                                                            t = BuildBuild_0_0(t);
                                                            ;
                                                            LocalPopChoice(t_51);
                                                          }
                                                        else
                                                          {
                                                            t = s_51;
                                                            {
                                                              ATerm v_51 = t;
                                                              int z_51 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  ;
                                                                  LocalPopChoice(z_51);
                                                                }
                                                              else
                                                                {
                                                                  t = v_51;
                                                                  {
                                                                    ATerm c_52 = t;
                                                                    int d_52 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        ;
                                                                        LocalPopChoice(d_52);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = c_52;
                                                                        {
                                                                          ATerm f_52 = t;
                                                                          int g_52 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              ;
                                                                              LocalPopChoice(g_52);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_52;
                                                                              {
                                                                                ATerm h_52 = t;
                                                                                int j_52 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(j_52);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = h_52;
                                                                                    {
                                                                                      ATerm l_144 = NULL,o_144 = NULL,p_144 = NULL,q_144 = NULL;
                                                                                      o_144 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          p_144 = ATgetArgument(t, 0);
                                                                                          q_144 = ATgetArgument(t, 1);
                                                                                          t = p_144;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              l_144 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = o_144;
                                                                                          t = o_14(l_144, q_144, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              p_144 = ATgetArgument(t, 0);
                                                                                              q_144 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = p_144;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = q_144;
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
ATerm repeat_1_0 (ATerm g_136 (ATerm), ATerm t)
{
  ATerm x_144 (ATerm t)
  {
    ATerm l_52 = t;
    int r_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_136(t);
        t = x_144(t);
        ;
        LocalPopChoice(r_52);
      }
    else
      {
        t = l_52;
      }
    return(t);
  }
  t = x_144(t);
  return(t);
}
ATerm downup_1_0 (ATerm l_119 (ATerm), ATerm t)
{
  t = l_119(t);
  {
    ATerm f_10 (ATerm t)
    {
      t = downup_1_0(l_119, t);
      return(t);
    }
    t = SRTS_all(f_10, t);
    t = l_119(t);
  }
  return(t);
}
ATerm g_10 (ATerm t)
{
  t = downup_1_0(h_10, t);
  {
    ATerm u_52 = t;
    int v_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        ;
        LocalPopChoice(v_52);
      }
    else
      {
        t = u_52;
      }
  }
  return(t);
}
ATerm h_10 (ATerm t)
{
  t = repeat_1_0(Simplify_0_0, t);
  return(t);
}
ATerm inline_sdefs_0_0 (ATerm t)
{
  t = map_1_0(g_10, t);
  t = map_1_0(inline_sdef_0_0, t);
  return(t);
}
ATerm Cons_2_0 (ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm t)
{
  ATerm b_145 = NULL,c_145 = NULL,d_145 = NULL,e_145 = NULL,f_145 = NULL,g_145 = NULL,n_71 = NULL;
  g_145 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_145 = ATgetFirst((ATermList) t);
      d_145 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_145);
  b_145 = t;
  t = c_145;
  t = d_103(t);
  e_145 = t;
  t = d_145;
  t = e_103(t);
  f_145 = t;
  t = (ATerm) ATinsert(CheckATermList(f_145), e_145);
  n_71 = t;
  t = SSLsetAnnotations(n_71, b_145);
  return(t);
}
ATerm m_15 (ATerm n_94, ATerm o_94, ATerm t)
{
  ATerm h_145 = NULL;
  t = SSL_fputc(n_94, o_94);
  h_145 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_145);
  return(t);
}
ATerm n_15 (ATerm m_97, ATerm n_97, ATerm t)
{
  ATerm i_145 = NULL;
  t = SSL_write_term_to_stream_text(m_97, n_97);
  i_145 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_145);
  return(t);
}
ATerm p_15 (ATerm x_146 (ATerm), ATerm a_779, ATerm q_97, ATerm t)
{
  ATerm j_145 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_779, term_w_52);
  t = open_stream_0_0(t);
  j_145 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_145, q_97);
  t = x_146(t);
  t = fclose_0_0(t);
  t = q_97;
  return(t);
}
ATerm o_15 (ATerm i_97, ATerm j_97, ATerm t)
{
  ATerm k_145 = NULL;
  t = SSL_write_term_to_stream_baf(i_97, j_97);
  k_145 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_145);
  return(t);
}
ATerm j_10 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm u_61 = NULL,w_61 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_52 = ATgetArgument(t, 0);
      if(match_cons(x_52, sym_Stream_1))
        {
          u_61 = ATgetArgument(x_52, 0);
        }
      else
        _fail(t);
      w_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_15(u_61, w_61, t);
  return(t);
}
ATerm l_10 (ATerm t)
{
  ATerm y_62 = NULL,d_63 = NULL,f_63 = NULL,g_63 = NULL,h_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_53 = ATgetArgument(t, 0);
      if(match_cons(a_53, sym_Stream_1))
        {
          g_63 = ATgetArgument(a_53, 0);
        }
      else
        _fail(t);
      h_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(g_63, h_63, t);
  y_62 = t;
  t = term_c_53;
  d_63 = t;
  t = y_62;
  if(match_cons(t, sym_Stream_1))
    {
      f_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_c_53, y_62);
  t = m_15(d_63, f_63, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm o_145 = NULL,p_145 = NULL,q_145 = NULL,r_145 = NULL,s_145 = NULL,u_145 = NULL,v_145 = NULL,w_145 = NULL,x_145 = NULL,y_145 = NULL,a_147 = NULL,b_147 = NULL,z_71 = NULL,y_71 = NULL;
  if(((p_145 != NULL) && (p_145 != t)))
    _fail(t);
  else
    p_145 = t;
  if(match_cons(t, sym__2))
    {
      if(((w_145 != NULL) && (w_145 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_145 = ATgetArgument(t, 0);
      if(((x_145 != NULL) && (x_145 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(p_145));
  if(((v_145 != NULL) && (v_145 != t)))
    _fail(t);
  else
    v_145 = t;
  t = not_null(w_145);
  {
    ATerm d_53 = t;
    int e_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_10 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((o_145 != NULL) && (o_145 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                o_145 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(i_10, t);
        ;
        LocalPopChoice(e_53);
      }
    else
      {
        t = d_53;
        t = term_g_53;
        if(((o_145 != NULL) && (o_145 != t)))
          _fail(t);
        else
          o_145 = t;
      }
    if(((y_145 != NULL) && (y_145 != t)))
      _fail(t);
    else
      y_145 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_145), not_null(x_145));
    if(((y_71 != NULL) && (y_71 != t)))
      _fail(t);
    else
      y_71 = t;
    t = SSLsetAnnotations(not_null(y_71), not_null(v_145));
    t = not_null(p_145);
    if(match_cons(t, sym__2))
      {
        if(((r_145 != NULL) && (r_145 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          r_145 = ATgetArgument(t, 0);
        if(((s_145 != NULL) && (s_145 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          s_145 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(p_145));
    if(((q_145 != NULL) && (q_145 != t)))
      _fail(t);
    else
      q_145 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_145), (ATerm) ATmakeAppl(sym__2, not_null(o_145), not_null(s_145)));
    if(((z_71 != NULL) && (z_71 != t)))
      _fail(t);
    else
      z_71 = t;
    t = SSLsetAnnotations(not_null(z_71), not_null(q_145));
    if(((u_145 != NULL) && (u_145 != t)))
      _fail(t);
    else
      u_145 = t;
    if(match_cons(t, sym__2))
      {
        if(((a_147 != NULL) && (a_147 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          a_147 = ATgetArgument(t, 0);
        if(((b_147 != NULL) && (b_147 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          b_147 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm h_53 = t;
      int j_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL,a_72 = NULL;
          t = SSLgetAnnotations(not_null(u_145));
          c_61 = t;
          t = not_null(a_147);
          t = fetch_1_0(j_10, t);
          p_61 = t;
          t = not_null(b_147);
          if(match_cons(t, sym__2))
            {
              r_61 = ATgetArgument(t, 0);
              s_61 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_15(k_10, r_61, s_61, t);
          q_61 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_61, q_61);
          a_72 = t;
          t = SSLsetAnnotations(a_72, c_61);
          ;
          LocalPopChoice(j_53);
        }
      else
        {
          t = h_53;
          {
            ATerm k_62 = NULL,n_62 = NULL,o_62 = NULL,x_62 = NULL,b_72 = NULL;
            t = SSLgetAnnotations(not_null(u_145));
            k_62 = t;
            t = not_null(b_147);
            if(match_cons(t, sym__2))
              {
                o_62 = ATgetArgument(t, 0);
                x_62 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = p_15(l_10, o_62, x_62, t);
            n_62 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_147), n_62);
            b_72 = t;
            t = SSLsetAnnotations(b_72, k_62);
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
ATerm apply_strategy_1_0 (ATerm m_141 (ATerm), ATerm t)
{
  ATerm e_147 = NULL,f_147 = NULL,g_147 = NULL,h_147 = NULL,i_147 = NULL;
  i_147 = t;
  t = dtime_0_0(t);
  t = i_147;
  t = m_141(t);
  h_147 = t;
  t = dtime_0_0(t);
  e_147 = t;
  t = h_147;
  if(match_cons(t, sym__2))
    {
      f_147 = ATgetArgument(t, 0);
      g_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_147), (ATerm) ATmakeAppl(sym_Runtime_1, e_147)), g_147);
  return(t);
}
ATerm w_147 (ATerm q_147, ATerm t)
{
  t = SSL_fclose(q_147);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_147 = NULL,u_147 = NULL;
  u_147 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_147 = ATgetArgument(t, 0);
      {
        ATerm k_53 = t;
        int l_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_147);
            ;
            LocalPopChoice(l_53);
          }
        else
          {
            t = k_53;
            t = w_147(u_147, t);
          }
      }
    }
  else
    {
      t = w_147(u_147, t);
    }
  return(t);
}
ATerm q_15 (ATerm o_97, ATerm t)
{
  t = SSL_read_term_from_stream(o_97);
  return(t);
}
ATerm r_15 (ATerm p_94, ATerm q_94, ATerm t)
{
  ATerm x_147 = NULL;
  t = SSL_fopen(p_94, q_94);
  x_147 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_147);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_147 = NULL;
  t = SSL_stdin_stream();
  y_147 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_147);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_147 = NULL;
  t = SSL_stdout_stream();
  z_147 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_147);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_148 = NULL;
  t = SSL_stderr_stream();
  b_148 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_148);
  return(t);
}
ATerm i_149 (ATerm h_148, ATerm t)
{
  ATerm i_148 = NULL;
  t = SSL_explode_term(h_148);
  if(match_cons(t, sym__2))
    {
      ATerm m_53 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_53) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_53 = ATgetArgument(t, 1);
        if(((ATgetType(n_53) == AT_LIST) && !(ATisEmpty(n_53))))
          {
            i_148 = ATgetFirst((ATermList) n_53);
            {
              ATerm o_53 = (ATerm) ATgetNext((ATermList) n_53);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_148;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_148;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_148;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_148;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm j_149 (ATerm l_148, ATerm m_148, ATerm n_148, ATerm t)
{
  ATerm o_148 = NULL,p_148 = NULL,q_148 = NULL,t_148 = NULL,g_72 = NULL;
  t = SSLgetAnnotations(n_148);
  q_148 = t;
  t = l_148;
  if(match_cons(t, sym_Path_1))
    {
      t_148 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_148, m_148);
  g_72 = t;
  t = SSLsetAnnotations(g_72, q_148);
  if(match_cons(t, sym__2))
    {
      o_148 = ATgetArgument(t, 0);
      p_148 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_15(o_148, p_148, t);
  return(t);
}
ATerm k_149 (ATerm v_148, ATerm w_148, ATerm x_148, ATerm t)
{
  ATerm y_148 = NULL,z_148 = NULL,a_149 = NULL,d_149 = NULL,h_72 = NULL;
  t = SSLgetAnnotations(x_148);
  a_149 = t;
  t = SSL_is_string(v_148);
  d_149 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_149, w_148);
  h_72 = t;
  t = SSLsetAnnotations(h_72, a_149);
  if(match_cons(t, sym__2))
    {
      y_148 = ATgetArgument(t, 0);
      z_148 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_15(y_148, z_148, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm f_149 = NULL,g_149 = NULL,h_149 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_53 = ATgetArgument(t, 0);
      ATerm s_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  f_149 = t;
  if(match_cons(t, sym__2))
    {
      g_149 = ATgetArgument(t, 0);
      h_149 = ATgetArgument(t, 1);
      {
        ATerm t_53 = t;
        int u_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_149(f_149, t);
            ;
            LocalPopChoice(u_53);
          }
        else
          {
            t = t_53;
            {
              ATerm x_53 = t;
              int y_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_149(g_149, h_149, f_149, t);
                  ;
                  LocalPopChoice(y_53);
                }
              else
                {
                  t = x_53;
                  t = k_149(g_149, h_149, f_149, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_149(f_149, t);
    }
  return(t);
}
ATerm o_10 (ATerm t)
{
  t = term_z_53;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_149 = NULL,m_149 = NULL,n_149 = NULL;
  ATerm a_54 = t;
  int b_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_149 = NULL;
      o_149 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_149, term_c_54);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(b_54);
    }
  else
    {
      t = a_54;
      t = debug_1_0(o_10, t);
      _fail(t);
    }
  m_149 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_149 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_15(n_149, t);
  l_149 = t;
  t = m_149;
  t = fclose_0_0(t);
  t = l_149;
  return(t);
}
ATerm fetch_1_0 (ATerm u_125 (ATerm), ATerm t)
{
  ATerm m_150 (ATerm t)
  {
    ATerm j_150 = NULL,k_150 = NULL,l_150 = NULL;
    j_150 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_150 = ATgetFirst((ATermList) t);
        l_150 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_54 = t;
      int g_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_64 = NULL,a_65 = NULL,k_72 = NULL;
          t = SSLgetAnnotations(j_150);
          k_64 = t;
          t = k_150;
          t = u_125(t);
          a_65 = t;
          t = (ATerm) ATinsert(CheckATermList(l_150), a_65);
          k_72 = t;
          t = SSLsetAnnotations(k_72, k_64);
          ;
          LocalPopChoice(g_54);
        }
      else
        {
          t = d_54;
          {
            ATerm s_65 = NULL,v_65 = NULL,l_72 = NULL;
            t = SSLgetAnnotations(j_150);
            s_65 = t;
            t = l_150;
            t = m_150(t);
            v_65 = t;
            t = (ATerm) ATinsert(CheckATermList(v_65), k_150);
            l_72 = t;
            t = SSLsetAnnotations(l_72, s_65);
          }
        }
    }
    return(t);
  }
  t = m_150(t);
  return(t);
}
ATerm l_15 (ATerm f_66, ATerm g_66, ATerm t)
{
  t = SSL_strcat(f_66, g_66);
  return(t);
}
ATerm debug_1_0 (ATerm v_146 (ATerm), ATerm t)
{
  ATerm p_150 = NULL,q_150 = NULL,r_150 = NULL,s_150 = NULL;
  p_150 = t;
  t = v_146(t);
  q_150 = t;
  t = term_l_16;
  r_150 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_150), q_150);
  s_150 = t;
  t = SSL_printnl(r_150, s_150);
  t = p_150;
  return(t);
}
ATerm p_10 (ATerm t)
{
  ATerm j_54 = t;
  int k_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(k_54);
    }
  else
    {
      t = j_54;
    }
  return(t);
}
ATerm t_10 (ATerm t)
{
  t = term_q_54;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_54 = t;
  int x_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_150 = NULL;
      z_150 = t;
      t = SSL_is_string(z_150);
      ;
      LocalPopChoice(x_54);
    }
  else
    {
      t = w_54;
      {
        ATerm y_54 = t;
        int z_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(p_10, t);
            ;
            LocalPopChoice(z_54);
          }
        else
          {
            t = y_54;
            {
              ATerm f_151 = NULL,g_151 = NULL,h_151 = NULL;
              f_151 = t;
              if(match_cons(t, sym_Path_1))
                {
                  g_151 = ATgetArgument(t, 0);
                  t = g_151;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      g_151 = ATgetArgument(t, 0);
                      t = g_151;
                      {
                        ATerm a_55 = t;
                        int b_55 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(b_55);
                          }
                        else
                          {
                            t = a_55;
                            t = debug_1_0(t_10, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm l_151 = NULL,m_151 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          g_151 = ATgetArgument(t, 0);
                          h_151 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = g_151;
                      t = eval_config_0_0(t);
                      l_151 = t;
                      t = h_151;
                      t = eval_config_0_0(t);
                      m_151 = t;
                      t = (ATerm) ATmakeAppl(sym__2, l_151, m_151);
                      t = l_15(l_151, m_151, t);
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
  ATerm q_151 = NULL,r_151 = NULL;
  q_151 = t;
  t = term_c_55;
  r_151 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_55, q_151);
  t = u_15(r_151, q_151, t);
  {
    ATerm d_55 = t;
    int e_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_151 = NULL,t_151 = NULL;
        t = eval_config_0_0(t);
        s_151 = t;
        t = term_c_55;
        t_151 = t;
        t = SSL_table_put(t_151, q_151, s_151);
        t = s_151;
        ;
        LocalPopChoice(e_55);
      }
    else
      {
        t = d_55;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_140 (ATerm), ATerm t)
{
  ATerm x_151 = NULL;
  x_151 = t;
  {
    ATerm f_55 = t;
    int h_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_151 = NULL;
        t = term_i_55;
        t = get_config_0_0(t);
        z_151 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_151, term_j_55);
        t = geq_0_0(t);
        t = x_151;
        t = a_140(t);
        ;
        LocalPopChoice(h_55);
      }
    else
      {
        t = f_55;
        t = x_151;
      }
  }
  return(t);
}
ATerm b_11 (ATerm t)
{
  ATerm c_152 = NULL;
  c_152 = t;
  if(match_string(t, "-k"))
    {
      t = c_152;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_152;
    }
  return(t);
}
ATerm c_11 (ATerm t)
{
  ATerm d_152 = NULL,e_152 = NULL,f_152 = NULL;
  d_152 = t;
  t = SSL_string_to_int(d_152);
  e_152 = t;
  t = term_k_55;
  f_152 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_55, e_152);
  t = x_15(f_152, e_152, t);
  t = d_152;
  return(t);
}
ATerm d_11 (ATerm t)
{
  t = term_l_55;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_11, c_11, d_11, t);
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm h_152 = NULL;
  h_152 = t;
  if(match_string(t, "-S"))
    {
      t = h_152;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_152;
    }
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm i_152 = NULL,j_152 = NULL;
  t = term_i_55;
  i_152 = t;
  t = term_r_42;
  j_152 = t;
  t = term_m_55;
  t = x_15(i_152, j_152, t);
  t = term_n_55;
  return(t);
}
ATerm j_11 (ATerm t)
{
  t = term_o_55;
  return(t);
}
ATerm k_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_11 (ATerm t)
{
  ATerm k_152 = NULL,l_152 = NULL,m_152 = NULL;
  k_152 = t;
  t = SSL_string_to_int(k_152);
  l_152 = t;
  t = term_i_55;
  m_152 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_55, l_152);
  t = x_15(m_152, l_152, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_152);
  return(t);
}
ATerm m_11 (ATerm t)
{
  t = term_p_55;
  return(t);
}
ATerm r_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_11 (ATerm t)
{
  ATerm n_152 = NULL,o_152 = NULL;
  t = term_q_55;
  n_152 = t;
  t = term_k_16;
  o_152 = t;
  t = term_s_55;
  t = x_15(n_152, o_152, t);
  t = term_t_55;
  return(t);
}
ATerm u_11 (ATerm t)
{
  t = term_u_55;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_55 = t;
  int w_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_11, f_11, j_11, t);
      ;
      LocalPopChoice(w_55);
    }
  else
    {
      t = v_55;
      {
        ATerm x_55 = t;
        int y_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_11, l_11, m_11, t);
            ;
            LocalPopChoice(y_55);
          }
        else
          {
            t = x_55;
            t = Option_3_0(r_11, t_11, u_11, t);
          }
      }
    }
  return(t);
}
ATerm x_15 (ATerm l_68, ATerm m_68, ATerm t)
{
  ATerm p_152 = NULL;
  t = term_c_55;
  p_152 = t;
  t = SSL_table_put(p_152, l_68, m_68);
  t = (ATerm) ATmakeAppl(sym__3, term_c_55, l_68, m_68);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm s_152 = NULL,t_152 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_152 = NULL,v_152 = NULL,w_152 = NULL;
      t = term_k_16;
      t = c_0(t);
      u_152 = t;
      t = term_z_55;
      v_152 = t;
      t = term_a_56;
      w_152 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_55, term_a_56, u_152);
      t = v_15(v_152, w_152, u_152, t);
      _fail(t);
    }
  else
    {
      ATerm z_152 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_152 = ATgetFirst((ATermList) t);
          t_152 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_152;
      t = a_0(t);
      t = term_k_16;
      t = b_0(t);
      z_152 = t;
      t = (ATerm) ATinsert(CheckATermList(t_152), z_152);
    }
  return(t);
}
ATerm w_11 (ATerm t)
{
  ATerm b_153 = NULL;
  b_153 = t;
  if(match_string(t, "-o"))
    {
      t = b_153;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_153;
    }
  return(t);
}
ATerm x_11 (ATerm t)
{
  ATerm c_153 = NULL,d_153 = NULL;
  c_153 = t;
  t = term_b_56;
  d_153 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_56, c_153);
  t = x_15(d_153, c_153, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_153);
  return(t);
}
ATerm y_11 (ATerm t)
{
  t = term_e_56;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_11, x_11, y_11, t);
  return(t);
}
ATerm v_15 (ATerm y_57, ATerm z_57, ATerm x_57, ATerm t)
{
  ATerm f_153 = NULL,g_153 = NULL,h_153 = NULL;
  f_153 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_57, z_57);
  {
    ATerm f_56 = t;
    int g_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_56 = ATgetArgument(t, 0);
            ATerm i_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_57, z_57);
        t = u_15(y_57, z_57, t);
        ;
        LocalPopChoice(g_56);
      }
    else
      {
        t = f_56;
        t = (ATerm) ATempty;
      }
    g_153 = t;
    t = (ATerm) ATinsert(CheckATermList(g_153), x_57);
    h_153 = t;
    t = SSL_table_put(y_57, z_57, h_153);
    t = f_153;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm o_153 = NULL,p_153 = NULL,q_153 = NULL,r_153 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_153 = NULL,t_153 = NULL,u_153 = NULL;
      t = term_k_16;
      t = j_0(t);
      s_153 = t;
      t = term_z_55;
      t_153 = t;
      t = term_a_56;
      u_153 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_55, term_a_56, s_153);
      t = v_15(t_153, u_153, s_153, t);
      _fail(t);
    }
  else
    {
      ATerm y_153 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_153 = ATgetFirst((ATermList) t);
          p_153 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_153;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_153 = ATgetFirst((ATermList) t);
          r_153 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_153;
      t = h_0(t);
      t = q_153;
      t = i_0(t);
      y_153 = t;
      t = (ATerm) ATinsert(CheckATermList(r_153), y_153);
    }
  return(t);
}
ATerm e_12 (ATerm t)
{
  ATerm a_154 = NULL;
  a_154 = t;
  if(match_string(t, "-i"))
    {
      t = a_154;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_154;
    }
  return(t);
}
ATerm f_12 (ATerm t)
{
  ATerm b_154 = NULL,c_154 = NULL;
  b_154 = t;
  t = term_j_56;
  c_154 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_56, b_154);
  t = x_15(c_154, b_154, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_154);
  return(t);
}
ATerm g_12 (ATerm t)
{
  t = term_k_56;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_12, f_12, g_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_154 = NULL,e_154 = NULL,f_154 = NULL,g_154 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_16;
  t = whoami_0_0(t);
  d_154 = t;
  t = term_l_16;
  f_154 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_56), d_154);
  g_154 = t;
  t = SSL_printnl(f_154, g_154);
  t = term_o_16;
  e_154 = t;
  t = SSL_exit(e_154);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_n_56;
  t = get_config_0_0(t);
  return(t);
}
ATerm s_15 (ATerm c_56, ATerm d_56, ATerm t)
{
  ATerm o_56 = t;
  int p_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_56, d_56);
      ;
      LocalPopChoice(p_56);
    }
  else
    {
      t = o_56;
      t = SSL_addr(c_56, d_56);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_130 (ATerm), ATerm m_130 (ATerm), ATerm t)
{
  ATerm i_154 = NULL,j_154 = NULL,k_154 = NULL;
  i_154 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_154;
      t = l_130(t);
    }
  else
    {
      ATerm n_154 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_154 = ATgetFirst((ATermList) t);
          k_154 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_154;
      t = foldr_2_0(l_130, m_130, t);
      n_154 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_154, n_154);
      t = m_130(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm h_12 (ATerm t)
{
  t = term_r_42;
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm i_67 = NULL,l_67 = NULL;
  if(match_cons(t, sym__2))
    {
      i_67 = ATgetArgument(t, 0);
      l_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_15(i_67, l_67, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_154 = NULL,b_67 = NULL,f_67 = NULL;
  t = times_0_0(t);
  f_67 = t;
  t = SSL_explode_term(f_67);
  if(match_cons(t, sym__2))
    {
      ATerm q_56 = ATgetArgument(t, 0);
      b_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_67;
  t = foldr_2_0(h_12, i_12, t);
  q_154 = t;
  t = SSL_TicksToSeconds(q_154);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_155 = NULL,c_155 = NULL,d_155 = NULL;
  b_155 = t;
  if(match_cons(t, sym__2))
    {
      c_155 = ATgetArgument(t, 0);
      d_155 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_56 = t;
    int s_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_155;
        if((c_155 != t))
          {
            _fail(t);
          }
        t = b_155;
        ;
        LocalPopChoice(s_56);
      }
    else
      {
        t = r_56;
        t = (ATerm) ATmakeAppl(sym__2, c_155, d_155);
        {
          ATerm t_56 = t;
          int u_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_155, d_155);
              ;
              LocalPopChoice(u_56);
            }
          else
            {
              t = t_56;
              t = SSL_gtr(c_155, d_155);
            }
          t = (ATerm) ATmakeAppl(sym__2, c_155, d_155);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_139 (ATerm), ATerm t)
{
  ATerm h_155 = NULL;
  h_155 = t;
  {
    ATerm w_56 = t;
    int x_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_155 = NULL;
        t = term_i_55;
        t = get_config_0_0(t);
        j_155 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_155, term_o_16);
        t = geq_0_0(t);
        t = h_155;
        t = z_139(t);
        ;
        LocalPopChoice(x_56);
      }
    else
      {
        t = w_56;
        t = h_155;
      }
  }
  return(t);
}
ATerm j_12 (ATerm t)
{
  ATerm l_155 = NULL,m_155 = NULL,o_155 = NULL,p_155 = NULL;
  t = run_time_0_0(t);
  l_155 = t;
  t = term_k_16;
  t = whoami_0_0(t);
  m_155 = t;
  t = term_l_16;
  o_155 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_56), l_155), term_y_56), m_155);
  p_155 = t;
  t = SSL_printnl(o_155, p_155);
  t = (ATerm) ATmakeAppl(sym__2, term_l_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_56), l_155), term_y_56), m_155));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(j_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_155 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_42;
  q_155 = t;
  t = SSL_exit(q_155);
  return(t);
}
ATerm k_12 (ATerm t)
{
  ATerm y_155 = NULL,z_155 = NULL;
  z_155 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_155;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_155 = ATgetArgument(t, 0);
          {
            ATerm z_67 = NULL,o_72 = NULL;
            t = SSLgetAnnotations(z_155);
            z_67 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_155);
            o_72 = t;
            t = SSLsetAnnotations(o_72, z_67);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_155;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_142 (ATerm), ATerm t)
{
  ATerm a_57 = t;
  int b_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_57;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_57);
    }
  else
    {
      t = a_57;
      t = fetch_1_0(k_12, t);
    }
  t = k_142(t);
  return(t);
}
ATerm map_1_0 (ATerm k_125 (ATerm), ATerm t)
{
  ATerm p_156 (ATerm t)
  {
    ATerm m_156 = NULL,n_156 = NULL,o_156 = NULL;
    m_156 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_156;
      }
    else
      {
        ATerm j_68 = NULL,o_68 = NULL,q_68 = NULL,q_72 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_156 = ATgetFirst((ATermList) t);
            o_156 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_156);
        j_68 = t;
        t = n_156;
        t = k_125(t);
        o_68 = t;
        t = o_156;
        t = p_156(t);
        q_68 = t;
        t = (ATerm) ATinsert(CheckATermList(q_68), o_68);
        q_72 = t;
        t = SSLsetAnnotations(q_72, j_68);
      }
    return(t);
  }
  t = p_156(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm s_156 = NULL,t_156 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_156 = ATgetFirst((ATermList) t);
      t_156 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_156 = NULL,y_156 = NULL;
        ATerm l_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_156)), not_null(y_156));
          return(t);
        }
        t = not_null(t_156);
        t = f_0(t);
        if(((x_156 != NULL) && (x_156 != t)))
          _fail(t);
        else
          x_156 = t;
        t = not_null(s_156);
        t = e_0(t);
        if(((y_156 != NULL) && (y_156 != t)))
          _fail(t);
        else
          y_156 = t;
        t = not_null(t_156);
        t = reverse_acc_2_0(e_0, l_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_16;
      t = f_0(t);
    }
  return(t);
}
ATerm u_15 (ATerm p_59, ATerm q_59, ATerm t)
{
  t = SSL_table_get(p_59, q_59);
  return(t);
}
ATerm m_12 (ATerm t)
{
  ATerm c_157 = NULL,d_157 = NULL,e_157 = NULL,s_72 = NULL;
  e_157 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_157);
  c_157 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_157);
  s_72 = t;
  t = SSLsetAnnotations(s_72, c_157);
  return(t);
}
ATerm q_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_12 (ATerm t)
{
  ATerm g_157 = NULL;
  g_157 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_157), term_d_57);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_157 = NULL,b_157 = NULL;
  ATerm e_57 = t;
  int f_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_56;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_57);
    }
  else
    {
      t = e_57;
      t = fetch_1_0(m_12, t);
    }
  t = term_g_57;
  t = echo_0_0(t);
  t = term_z_55;
  a_157 = t;
  t = term_a_56;
  b_157 = t;
  t = term_h_57;
  t = u_15(a_157, b_157, t);
  t = reverse_acc_2_0(_id, q_12, t);
  t = map_1_0(r_12, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_157 = NULL,j_157 = NULL,k_157 = NULL;
  i_157 = t;
  {
    ATerm i_57 = t;
    int j_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_157;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_57 = ATgetFirst((ATermList) t);
                ATerm l_57 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_157;
          }
        ;
        LocalPopChoice(j_57);
      }
    else
      {
        t = i_57;
        t = (ATerm) ATinsert(ATempty, i_157);
      }
    j_157 = t;
    t = term_g_53;
    k_157 = t;
    t = SSL_printnl(k_157, j_157);
    t = i_157;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_n_56;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm u_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_12 (ATerm t)
{
  ATerm o_157 = NULL,p_157 = NULL;
  t = term_m_57;
  o_157 = t;
  t = term_k_16;
  p_157 = t;
  t = term_n_57;
  t = x_15(o_157, p_157, t);
  return(t);
}
ATerm w_12 (ATerm t)
{
  t = term_p_57;
  return(t);
}
ATerm x_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_12 (ATerm t)
{
  ATerm q_157 = NULL,r_157 = NULL,s_157 = NULL,t_157 = NULL;
  t = term_m_57;
  s_157 = t;
  t = term_k_16;
  t_157 = t;
  t = term_n_57;
  t = x_15(s_157, t_157, t);
  t = term_r_57;
  q_157 = t;
  t = term_k_16;
  r_157 = t;
  t = term_s_57;
  t = x_15(q_157, r_157, t);
  t = term_t_57;
  return(t);
}
ATerm a_13 (ATerm t)
{
  t = term_u_57;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_57 = t;
  int w_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_12, v_12, w_12, t);
      ;
      LocalPopChoice(w_57);
    }
  else
    {
      t = v_57;
      t = Option_3_0(x_12, z_12, a_13, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_144 (ATerm), ATerm t)
{
  ATerm y_157 = NULL,z_157 = NULL,a_158 = NULL,b_158 = NULL,d_158 = NULL,e_158 = NULL,u_72 = NULL;
  if(((y_157 != NULL) && (y_157 != t)))
    _fail(t);
  else
    y_157 = t;
  {
    ATerm a_58 = t;
    int b_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_58;
        t = n_144(t);
        ;
        LocalPopChoice(b_58);
      }
    else
      {
        t = a_58;
      }
    t = not_null(y_157);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((a_158 != NULL) && (a_158 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          a_158 = ATgetFirst((ATermList) t);
        if(((b_158 != NULL) && (b_158 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          b_158 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(y_157));
    if(((z_157 != NULL) && (z_157 != t)))
      _fail(t);
    else
      z_157 = t;
    t = term_n_56;
    if(((e_158 != NULL) && (e_158 != t)))
      _fail(t);
    else
      e_158 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_n_56, not_null(a_158));
    t = x_15(not_null(e_158), not_null(a_158), t);
    t = not_null(b_158);
    {
      ATerm o_158 (ATerm t)
      {
        ATerm g_58 = t;
        int h_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_58 = t;
            int l_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_158 = NULL;
                h_158 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = h_158;
                ;
                LocalPopChoice(l_58);
              }
            else
              {
                t = i_58;
                t = n_144(t);
                t = Cons_2_0(_id, o_158, t);
              }
            ;
            LocalPopChoice(h_58);
          }
        else
          {
            t = g_58;
            {
              ATerm k_158 = NULL,l_158 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_158 = ATgetFirst((ATermList) t);
                  l_158 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(l_158), (ATerm) ATmakeAppl(sym_Undefined_1, k_158));
            }
          }
        return(t);
      }
      t = o_158(t);
      if(((d_158 != NULL) && (d_158 != t)))
        _fail(t);
      else
        d_158 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(d_158)), (ATerm) ATmakeAppl(sym_Program_1, not_null(a_158)));
      if(((u_72 != NULL) && (u_72 != t)))
        _fail(t);
      else
        u_72 = t;
      t = SSLsetAnnotations(not_null(u_72), not_null(z_157));
    }
  }
  return(t);
}
ATerm c_13 (ATerm t)
{
  ATerm a_159 = NULL;
  a_159 = t;
  if(match_string(t, "--help"))
    {
      t = a_159;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_159;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_159;
        }
    }
  return(t);
}
ATerm d_13 (ATerm t)
{
  ATerm b_159 = NULL,c_159 = NULL;
  t = term_c_57;
  b_159 = t;
  t = term_k_16;
  c_159 = t;
  t = term_q_58;
  t = x_15(b_159, c_159, t);
  t = term_r_58;
  return(t);
}
ATerm f_13 (ATerm t)
{
  t = term_s_58;
  return(t);
}
ATerm g_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_144 (ATerm), ATerm t)
{
  ATerm t_158 = NULL,u_158 = NULL,v_158 = NULL,w_158 = NULL,x_158 = NULL,y_158 = NULL,z_158 = NULL;
  if(((v_158 != NULL) && (v_158 != t)))
    _fail(t);
  else
    v_158 = t;
  t = term_z_55;
  if(((x_158 != NULL) && (x_158 != t)))
    _fail(t);
  else
    x_158 = t;
  t = term_a_56;
  if(((y_158 != NULL) && (y_158 != t)))
    _fail(t);
  else
    y_158 = t;
  t = (ATerm) ATempty;
  if(((z_158 != NULL) && (z_158 != t)))
    _fail(t);
  else
    z_158 = t;
  t = SSL_table_put(not_null(x_158), not_null(y_158), not_null(z_158));
  t = not_null(v_158);
  {
    ATerm b_13 (ATerm t)
    {
      ATerm u_58 = t;
      int v_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_144(t);
          ;
          LocalPopChoice(v_58);
        }
      else
        {
          t = u_58;
          {
            ATerm w_58 = t;
            int x_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_13, d_13, f_13, t);
                ;
                LocalPopChoice(x_58);
              }
            else
              {
                t = w_58;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_13, t);
    {
      ATerm y_58 = t;
      int b_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_159 = NULL;
          j_159 = t;
          {
            ATerm c_59 = t;
            int d_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_68 = NULL;
                t = j_159;
                {
                  ATerm g_59 = t;
                  int h_59 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_c_57;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(h_59);
                    }
                  else
                    {
                      t = g_59;
                      t = fetch_1_0(g_13, t);
                    }
                  t = j_159;
                  t = default_system_usage_0_0(t);
                  t = term_r_42;
                  y_68 = t;
                  t = SSL_exit(y_68);
                }
                ;
                LocalPopChoice(d_59);
              }
            else
              {
                t = c_59;
                {
                  ATerm e_69 = NULL;
                  t = term_m_57;
                  t = get_config_0_0(t);
                  t = j_159;
                  t = default_system_about_0_0(t);
                  t = term_r_42;
                  e_69 = t;
                  t = SSL_exit(e_69);
                }
              }
          }
          ;
          LocalPopChoice(b_59);
        }
      else
        {
          t = y_58;
          {
            ATerm i_59 = t;
            int j_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_159 = NULL,l_159 = NULL,m_159 = NULL;
                ATerm i_13 (ATerm t)
                {
                  ATerm n_159 = NULL,o_159 = NULL,p_159 = NULL,w_72 = NULL;
                  p_159 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      o_159 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_159);
                  n_159 = t;
                  t = o_159;
                  if(((t_158 != NULL) && (t_158 != t)))
                    _fail(t);
                  else
                    t_158 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, o_159);
                  w_72 = t;
                  t = SSLsetAnnotations(w_72, n_159);
                  return(t);
                }
                t = fetch_1_0(i_13, t);
                t = term_l_16;
                if(((l_159 != NULL) && (l_159 != t)))
                  _fail(t);
                else
                  l_159 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_158)), term_k_59);
                if(((m_159 != NULL) && (m_159 != t)))
                  _fail(t);
                else
                  m_159 = t;
                t = SSL_printnl(not_null(l_159), not_null(m_159));
                t = (ATerm) ATmakeAppl(sym__2, term_l_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_158)), term_k_59));
                t = default_system_usage_0_0(t);
                t = term_o_16;
                if(((k_159 != NULL) && (k_159 != t)))
                  _fail(t);
                else
                  k_159 = t;
                t = SSL_exit(not_null(k_159));
                ;
                LocalPopChoice(j_59);
              }
            else
              {
                t = i_59;
              }
          }
        }
      if(((u_158 != NULL) && (u_158 != t)))
        _fail(t);
      else
        u_158 = t;
      t = term_z_55;
      if(((w_158 != NULL) && (w_158 != t)))
        _fail(t);
      else
        w_158 = t;
      t = SSL_table_destroy(not_null(w_158));
      t = not_null(u_158);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_142 (ATerm), ATerm n_142 (ATerm), ATerm o_142 (ATerm), ATerm p_142 (ATerm), ATerm t)
{
  ATerm u_159 = NULL,v_159 = NULL,w_159 = NULL,x_159 = NULL;
  t = parse_options_1_0(m_142, t);
  u_159 = t;
  t = term_l_59;
  x_159 = t;
  t = SSL_table_create(x_159);
  t = term_l_59;
  v_159 = t;
  t = term_m_59;
  w_159 = t;
  t = SSL_table_put(v_159, w_159, u_159);
  t = u_159;
  t = o_142(t);
  {
    ATerm o_59 = t;
    int v_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_142, t);
        ;
        LocalPopChoice(v_59);
      }
    else
      {
        t = o_59;
        {
          ATerm w_59 = t;
          int x_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_142(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(x_59);
            }
          else
            {
              t = w_59;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm s_13 (ATerm t)
{
  t = if_verbose2_1_0(h_15, t);
  return(t);
}
ATerm r_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_14 (ATerm t)
{
  ATerm y_159 = NULL,z_159 = NULL;
  t = term_y_59;
  y_159 = t;
  t = term_k_16;
  z_159 = t;
  t = term_z_59;
  t = x_15(y_159, z_159, t);
  t = term_a_60;
  return(t);
}
ATerm t_14 (ATerm t)
{
  t = term_b_60;
  return(t);
}
ATerm h_15 (ATerm t)
{
  ATerm a_160 = NULL,b_160 = NULL,c_160 = NULL,d_160 = NULL;
  a_160 = t;
  t = term_n_56;
  t = get_config_0_0(t);
  b_160 = t;
  t = term_l_16;
  c_160 = t;
  t = (ATerm) ATinsert(ATempty, b_160);
  d_160 = t;
  t = SSL_printnl(c_160, d_160);
  t = a_160;
  return(t);
}
ATerm iowrap_3_0 (ATerm v_141 (ATerm), ATerm w_141 (ATerm), ATerm x_141 (ATerm), ATerm t)
{
  ATerm j_13 (ATerm t)
  {
    ATerm c_60 = t;
    int e_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_141(t);
        ;
        LocalPopChoice(e_60);
      }
    else
      {
        t = c_60;
        {
          ATerm f_60 = t;
          int h_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(h_60);
            }
          else
            {
              t = f_60;
              {
                ATerm i_60 = t;
                int n_60 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(n_60);
                  }
                else
                  {
                    t = i_60;
                    {
                      ATerm o_60 = t;
                      int p_60 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(r_14, s_14, t_14, t);
                          ;
                          LocalPopChoice(p_60);
                        }
                      else
                        {
                          t = o_60;
                          {
                            ATerm q_60 = t;
                            int t_60 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(t_60);
                              }
                            else
                              {
                                t = q_60;
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
  ATerm t_13 (ATerm t)
  {
    ATerm e_160 = NULL,f_160 = NULL,g_160 = NULL;
    if(((f_160 != NULL) && (f_160 != t)))
      _fail(t);
    else
      f_160 = t;
    {
      ATerm w_60 = t;
      int x_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_15 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((e_160 != NULL) && (e_160 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_160 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_15, t);
          ;
          LocalPopChoice(x_60);
        }
      else
        {
          t = w_60;
          t = term_y_60;
          if(((e_160 != NULL) && (e_160 != t)))
            _fail(t);
          else
            e_160 = t;
        }
      t = not_null(e_160);
      t = ReadFromFile_0_0(t);
      if(((g_160 != NULL) && (g_160 != t)))
        _fail(t);
      else
        g_160 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_160), not_null(g_160));
      t = apply_strategy_1_0(v_141, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(j_13, x_141, s_13, t_13, t);
  return(t);
}
ATerm b_16 (ATerm t)
{
  ATerm h_160 = NULL,i_160 = NULL,j_160 = NULL,k_160 = NULL,l_160 = NULL,m_160 = NULL,n_160 = NULL,o_160 = NULL,p_160 = NULL,q_160 = NULL,r_160 = NULL,s_160 = NULL,b_73 = NULL,a_73 = NULL,z_72 = NULL;
  s_160 = t;
  if(match_cons(t, sym__2))
    {
      i_160 = ATgetArgument(t, 0);
      j_160 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_160);
  h_160 = t;
  t = j_160;
  if(match_cons(t, sym_Specification_1))
    {
      l_160 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_160);
  k_160 = t;
  t = l_160;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_160 = ATgetFirst((ATermList) t);
      p_160 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_160);
  n_160 = t;
  t = p_160;
  t = Cons_2_0(i_16, j_16, t);
  q_160 = t;
  t = (ATerm) ATinsert(CheckATermList(q_160), o_160);
  z_72 = t;
  t = SSLsetAnnotations(z_72, n_160);
  r_160 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, r_160);
  a_73 = t;
  t = SSLsetAnnotations(a_73, k_160);
  m_160 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_160, m_160);
  b_73 = t;
  t = SSLsetAnnotations(b_73, h_160);
  return(t);
}
ATerm i_16 (ATerm t)
{
  ATerm t_160 = NULL,u_160 = NULL,v_160 = NULL,w_160 = NULL,y_72 = NULL;
  w_160 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      u_160 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_160);
  t_160 = t;
  t = u_160;
  t = inline_sdefs_0_0(t);
  v_160 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, v_160);
  y_72 = t;
  t = SSLsetAnnotations(y_72, t_160);
  return(t);
}
ATerm j_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(b_16, _fail, default_usage_0_0, t);
  return(t);
}
