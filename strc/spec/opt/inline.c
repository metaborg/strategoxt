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
ATerm term_i_61;
ATerm term_u_60;
ATerm term_t_60;
ATerm term_s_60;
ATerm term_r_60;
ATerm term_g_60;
ATerm term_f_60;
ATerm term_e_60;
ATerm term_p_59;
ATerm term_o_59;
ATerm term_n_59;
ATerm term_f_59;
ATerm term_a_59;
ATerm term_z_58;
ATerm term_y_58;
ATerm term_x_58;
ATerm term_w_58;
ATerm term_v_58;
ATerm term_u_58;
ATerm term_m_58;
ATerm term_l_58;
ATerm term_h_58;
ATerm term_g_58;
ATerm term_a_58;
ATerm term_z_57;
ATerm term_m_57;
ATerm term_l_57;
ATerm term_k_57;
ATerm term_j_57;
ATerm term_e_57;
ATerm term_d_57;
ATerm term_c_57;
ATerm term_b_57;
ATerm term_w_56;
ATerm term_v_56;
ATerm term_u_56;
ATerm term_t_56;
ATerm term_s_56;
ATerm term_r_56;
ATerm term_p_56;
ATerm term_o_56;
ATerm term_n_56;
ATerm term_m_56;
ATerm term_l_56;
ATerm term_k_56;
ATerm term_g_55;
ATerm term_r_54;
ATerm term_k_54;
ATerm term_h_54;
ATerm term_y_52;
ATerm term_p_52;
ATerm term_i_52;
ATerm term_e_46;
ATerm term_i_45;
ATerm term_g_45;
ATerm term_p_44;
ATerm term_g_44;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_x_42;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_o_34;
ATerm term_v_33;
ATerm term_u_32;
ATerm term_o_17;
ATerm term_i_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_q_16;
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
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Sort_2, term_q_16, (ATerm) ATempty);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_ConstType_1, term_a_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeInt(50);
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_56));
  term_k_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_56));
  term_l_56 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(sym__2, term_k_56, term_k_43);
  ATprotect(&(term_p_56));
  term_p_56 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_43);
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(sym__2, term_t_56, term_g_15);
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_57));
  term_e_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_57));
  term_z_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_58));
  term_a_58 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_58));
  term_g_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_58));
  term_h_58 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_58));
  term_l_58 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_58));
  term_m_58 = (ATerm) ATmakeAppl(sym__2, term_b_57, term_c_57);
  ATprotect(&(term_u_58));
  term_u_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_58));
  term_v_58 = (ATerm) ATmakeAppl(sym__2, term_u_58, term_g_15);
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_58));
  term_y_58 = (ATerm) ATmakeAppl(sym__2, term_x_58, term_g_15);
  ATprotect(&(term_z_58));
  term_z_58 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_59));
  term_a_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_59));
  term_f_59 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_59));
  term_n_59 = (ATerm) ATmakeAppl(sym__2, term_g_58, term_g_15);
  ATprotect(&(term_o_59));
  term_o_59 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_59));
  term_p_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_60));
  term_e_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_60));
  term_f_60 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_60));
  term_g_60 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_60));
  term_r_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_60));
  term_s_60 = (ATerm) ATmakeAppl(sym__2, term_r_60, term_g_15);
  ATprotect(&(term_t_60));
  term_t_60 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_60));
  term_u_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_61));
  term_i_61 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm z_6 (ATerm s_37, ATerm t_37, ATerm);
ATerm bottomup_1_0 (ATerm o_96 (ATerm), ATerm);
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
ATerm spaste_1_0 (ATerm r_95 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm s_95 (ATerm), ATerm t_95 (ATerm), ATerm u_95 (ATerm), ATerm);
ATerm k_3 (ATerm);
ATerm p_13 (ATerm u_22, ATerm t_22, ATerm);
ATerm SVar_1_0 (ATerm z_84 (ATerm), ATerm);
ATerm b_14 (ATerm c_110 (ATerm), ATerm d_110 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm u_39, ATerm t_39, ATerm s_39, ATerm);
ATerm new_0_0 (ATerm);
ATerm p_3 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm c_14 (ATerm w_109 (ATerm), ATerm x_109 (ATerm (ATerm), ATerm), ATerm m_39, ATerm p_39, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm k_110 (ATerm), ATerm);
ATerm rename_4_0 (ATerm r_109 (ATerm (ATerm), ATerm), ATerm s_109 (ATerm), ATerm t_109 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm u_109 (ATerm (ATerm), ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm tpaste_1_0 (ATerm n_95 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm o_95 (ATerm), ATerm p_95 (ATerm), ATerm q_95 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm v_13 (ATerm b_105 (ATerm), ATerm d_31, ATerm c_31, ATerm);
ATerm w_13 (ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm h_31, ATerm g_31, ATerm);
ATerm x_13 (ATerm w_104 (ATerm), ATerm b_31, ATerm a_31, ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm z_13 (ATerm o_543, ATerm t_543, ATerm w_53, ATerm);
ATerm while_not_2_0 (ATerm f_114 (ATerm), ATerm g_114 (ATerm), ATerm);
ATerm for_3_0 (ATerm i_114 (ATerm), ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm);
ATerm j_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm m_104 (ATerm c_103, ATerm d_103, ATerm g_103, ATerm);
ATerm n_5 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm free_vars_3_0 (ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm w_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm b_6 (ATerm);
ATerm d_6 (ATerm);
ATerm h_6 (ATerm);
ATerm k_6 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm q_81 (ATerm), ATerm);
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
ATerm occurrences_1_0 (ATerm i_105 (ATerm), ATerm);
ATerm h_14 (ATerm s_94 (ATerm), ATerm x_21, ATerm w_21, ATerm);
ATerm k_14 (ATerm m_37, ATerm n_37, ATerm);
ATerm end_scope_1_0 (ATerm y_108 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm x_108 (ATerm), ATerm);
ATerm scope_2_0 (ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm);
ATerm s_8 (ATerm);
ATerm v_8 (ATerm);
ATerm y_8 (ATerm);
ATerm inline_sdef_0_0 (ATerm);
ATerm l_14 (ATerm b_109 (ATerm), ATerm z_36, ATerm x_36, ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm AddSDef_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm foldr_3_0 (ATerm r_107 (ATerm), ATerm s_107 (ATerm), ATerm t_107 (ATerm), ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm j_9 (ATerm);
ATerm term_size_0_0 (ATerm);
ATerm Seq_2_0 (ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm);
ATerm k_9 (ATerm);
ATerm body_to_inline_0_0 (ATerm);
ATerm inlineable_0_0 (ATerm);
ATerm topdown_1_0 (ATerm n_96 (ATerm), ATerm);
ATerm p_9 (ATerm);
ATerm o_14 (ATerm g_67, ATerm f_67, ATerm);
ATerm MatchBuildIdemVar_0_0 (ATerm);
ATerm BuildMatchIdem_0_0 (ATerm);
ATerm MatchIdem_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildBuild_0_0 (ATerm);
ATerm genzip_4_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm b_101 (ATerm), ATerm c_101 (ATerm), ATerm);
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
ATerm oncetd_1_0 (ATerm r_97 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm e_103 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm t_131 (ATerm l_131, ATerm);
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
ATerm repeat_1_0 (ATerm q_113 (ATerm), ATerm);
ATerm downup_1_0 (ATerm p_96 (ATerm), ATerm);
ATerm p_10 (ATerm);
ATerm r_10 (ATerm);
ATerm inline_sdefs_0_0 (ATerm);
ATerm Cons_2_0 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm);
ATerm m_15 (ATerm r_71, ATerm s_71, ATerm);
ATerm n_15 (ATerm q_74, ATerm r_74, ATerm);
ATerm p_15 (ATerm b_124 (ATerm), ATerm u_718, ATerm u_74, ATerm);
ATerm o_15 (ATerm m_74, ATerm n_74, ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm d_11 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm w_118 (ATerm), ATerm);
ATerm w_144 (ATerm q_144, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm q_15 (ATerm s_74, ATerm);
ATerm r_15 (ATerm t_71, ATerm u_71, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm h_146 (ATerm g_145, ATerm);
ATerm i_146 (ATerm k_145, ATerm l_145, ATerm m_145, ATerm);
ATerm j_146 (ATerm u_145, ATerm v_145, ATerm w_145, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm h_11 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm y_102 (ATerm), ATerm);
ATerm l_15 (ATerm q_45, ATerm r_45, ATerm);
ATerm debug_1_0 (ATerm z_123 (ATerm), ATerm);
ATerm i_11 (ATerm);
ATerm j_11 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm k_117 (ATerm), ATerm);
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
ATerm x_15 (ATerm w_47, ATerm x_47, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm e_12 (ATerm);
ATerm f_12 (ATerm);
ATerm g_12 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm v_15 (ATerm h_37, ATerm i_37, ATerm g_37, ATerm);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm s_0 (ATerm), ATerm);
ATerm h_12 (ATerm);
ATerm i_12 (ATerm);
ATerm j_12 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm s_15 (ATerm i_35, ATerm j_35, ATerm);
ATerm foldr_2_0 (ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm l_12 (ATerm);
ATerm m_12 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm j_117 (ATerm), ATerm);
ATerm o_12 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm p_12 (ATerm);
ATerm need_help_1_0 (ATerm u_119 (ATerm), ATerm);
ATerm map_1_0 (ATerm o_102 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm u_15 (ATerm y_38, ATerm z_38, ATerm);
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
ATerm parse_options_p__1_0 (ATerm x_121 (ATerm), ATerm);
ATerm g_13 (ATerm);
ATerm i_13 (ATerm);
ATerm y_13 (ATerm);
ATerm a_14 (ATerm);
ATerm parse_options_1_0 (ATerm w_121 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm w_119 (ATerm), ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm);
ATerm w_14 (ATerm);
ATerm y_14 (ATerm);
ATerm z_14 (ATerm);
ATerm a_15 (ATerm);
ATerm b_15 (ATerm);
ATerm iowrap_3_0 (ATerm f_119 (ATerm), ATerm g_119 (ATerm), ATerm h_119 (ATerm), ATerm);
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
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,o_0 = NULL,p_0 = NULL;
  a_0 = t;
  t = term_g_15;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_h_15;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_15), b_0), term_i_15);
  p_0 = t;
  t = SSL_printnl(o_0, p_0);
  t = term_k_15;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm z_6 (ATerm s_37, ATerm t_37, ATerm t)
{
  ATerm q_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_37, t_37);
  t = u_15(s_37, t_37, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_0 = ATgetFirst((ATermList) t);
      {
        ATerm t_15 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_0;
  return(t);
}
ATerm bottomup_1_0 (ATerm o_96 (ATerm), ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    t = bottomup_1_0(o_96, t);
    return(t);
  }
  t = SRTS_all(r_0, t);
  t = o_96(t);
  return(t);
}
ATerm w_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_15 = ATgetArgument(t, 0);
      if(((ATgetType(w_15) != AT_LIST) || !(ATisEmpty(w_15))))
        _fail(t);
      {
        ATerm y_15 = ATgetArgument(t, 1);
        if(((ATgetType(y_15) != AT_LIST) || !(ATisEmpty(y_15))))
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
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_15 = ATgetArgument(t, 0);
      if(((ATgetType(z_15) == AT_LIST) && !(ATisEmpty(z_15))))
        {
          s_16 = ATgetFirst((ATermList) z_15);
          t_16 = (ATerm) ATgetNext((ATermList) z_15);
        }
      else
        _fail(t);
      {
        ATerm a_16 = ATgetArgument(t, 1);
        if(((ATgetType(a_16) == AT_LIST) && !(ATisEmpty(a_16))))
          {
            u_16 = ATgetFirst((ATermList) a_16);
            v_16 = (ATerm) ATgetNext((ATermList) a_16);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_16, u_16), (ATerm) ATmakeAppl(sym__2, t_16, v_16));
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL;
  if(match_cons(t, sym__2))
    {
      w_16 = ATgetArgument(t, 0);
      x_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_16), w_16);
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL;
  if(match_cons(t, sym__2))
    {
      y_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, y_16), (ATerm) ATmakeAppl(sym_Match_1, z_16));
  return(t);
}
ATerm c_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_16 = ATgetArgument(t, 0);
      if(((ATgetType(b_16) != AT_LIST) || !(ATisEmpty(b_16))))
        _fail(t);
      {
        ATerm c_16 = ATgetArgument(t, 1);
        if(((ATgetType(c_16) != AT_LIST) || !(ATisEmpty(c_16))))
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
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_16 = ATgetArgument(t, 0);
      if(((ATgetType(d_16) == AT_LIST) && !(ATisEmpty(d_16))))
        {
          l_26 = ATgetFirst((ATermList) d_16);
          m_26 = (ATerm) ATgetNext((ATermList) d_16);
        }
      else
        _fail(t);
      {
        ATerm e_16 = ATgetArgument(t, 1);
        if(((ATgetType(e_16) == AT_LIST) && !(ATisEmpty(e_16))))
          {
            n_26 = ATgetFirst((ATermList) e_16);
            o_26 = (ATerm) ATgetNext((ATermList) e_16);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_26, n_26), (ATerm) ATmakeAppl(sym__2, m_26, o_26));
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm p_26 = NULL,s_26 = NULL;
  if(match_cons(t, sym__2))
    {
      p_26 = ATgetArgument(t, 0);
      s_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_26), p_26);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm t_26 = NULL,v_26 = NULL;
  if(match_cons(t, sym__2))
    {
      t_26 = ATgetArgument(t, 0);
      v_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_26), (ATerm) ATmakeAppl(sym_Match_1, v_26));
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm h_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(g_16);
      {
        ATerm z_43 = NULL,a_44 = NULL;
        z_43 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm i_16 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        a_44 = t;
        t = SSLgetAnnotations(z_43);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_16 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) j_16) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm k_16 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(k_16) != AT_LIST) || !(ATisEmpty(k_16))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = a_44;
      }
    }
  else
    {
      t = f_16;
      {
        ATerm m_16 = t;
        int n_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm o_16 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) o_16) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm p_16 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(n_16);
            _fail(t);
          }
        else
          {
            t = m_16;
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
  ATerm m_62 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      m_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_62, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_17), term_b_17));
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL;
  s_62 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      r_62 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, r_62, term_b_17);
    }
  else
    {
      t = s_62;
    }
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm j_63 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      j_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_63, term_b_17);
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm k_63 = NULL,l_63 = NULL;
  l_63 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_63 = ATgetArgument(t, 0);
      {
        ATerm d_17 = t;
        int e_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, k_63, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_17), term_b_17));
            ;
            LocalPopChoice(e_17);
          }
        else
          {
            t = d_17;
            t = l_63;
          }
      }
    }
  else
    {
      t = l_63;
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
  t = (ATerm) ATmakeAppl(sym_VarDec_2, c_64, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_17), term_b_17));
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm d_64 = NULL,e_64 = NULL;
  e_64 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      d_64 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, d_64, term_b_17);
    }
  else
    {
      t = e_64;
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
            ATerm f_17 = t;
            int h_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_i_17;
                t = u_0(t);
                ;
                LocalPopChoice(h_17);
              }
            else
              {
                t = f_17;
                {
                  ATerm j_17 = t;
                  int l_17 = stack_ptr;
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
                      LocalPopChoice(l_17);
                    }
                  else
                    {
                      t = j_17;
                      t = e_7;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm m_17 = t;
                int n_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_o_17;
                    t = u_0(t);
                    ;
                    LocalPopChoice(n_17);
                  }
                else
                  {
                    t = m_17;
                    {
                      ATerm q_17 = t;
                      int r_17 = stack_ptr;
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
                          LocalPopChoice(r_17);
                        }
                      else
                        {
                          t = q_17;
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
                      ATerm s_17 = t;
                      int t_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, a_7);
                          t = u_0(t);
                          ;
                          LocalPopChoice(t_17);
                        }
                      else
                        {
                          t = s_17;
                          {
                            ATerm u_17 = t;
                            int v_17 = stack_ptr;
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
                                LocalPopChoice(v_17);
                              }
                            else
                              {
                                t = u_17;
                                t = e_7;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm w_17 = t;
                    int x_17 = stack_ptr;
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
                        LocalPopChoice(x_17);
                      }
                    else
                      {
                        t = w_17;
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
                ATerm y_17 = t;
                int z_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_o_17;
                    t = u_0(t);
                    ;
                    LocalPopChoice(z_17);
                  }
                else
                  {
                    t = y_17;
                    t = e_7;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm b_18 = t;
                    int c_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_i_17;
                        t = u_0(t);
                        ;
                        LocalPopChoice(c_18);
                      }
                    else
                      {
                        t = b_18;
                        t = e_7;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        a_7 = ATgetArgument(t, 0);
                        {
                          ATerm d_18 = t;
                          int e_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, a_7);
                              t = u_0(t);
                              ;
                              LocalPopChoice(e_18);
                            }
                          else
                            {
                              t = d_18;
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
                                        ATerm f_18 = t;
                                        int h_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_o_17;
                                            t = u_0(t);
                                            ;
                                            LocalPopChoice(h_18);
                                          }
                                        else
                                          {
                                            t = f_18;
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
                                              int j_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm l_16 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                  t = u_0(t);
                                                  l_16 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, l_16);
                                                  t = u_0(t);
                                                  ;
                                                  LocalPopChoice(j_18);
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
                                                      ATerm k_18 = t;
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
                                                            t = term_o_17;
                                                            t = bottomup_1_0(u_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(m_18);
                                                        }
                                                      else
                                                        {
                                                          t = k_18;
                                                          {
                                                            ATerm o_18 = t;
                                                            int p_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm r_16 = NULL;
                                                                t = s_6;
                                                                if((u_6 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, n_6, m_6);
                                                                t = genzip_4_0(w_0, y_0, a_1, b_1, t);
                                                                r_16 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_16), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, u_6, n_6)), y_6));
                                                                t = bottomup_1_0(u_0, t);
                                                                ;
                                                                LocalPopChoice(p_18);
                                                              }
                                                            else
                                                              {
                                                                t = o_18;
                                                                {
                                                                  ATerm q_18 = t;
                                                                  int r_18 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm c_17 = NULL;
                                                                      t = v_6;
                                                                      if((a_7 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, a_7);
                                                                      t = u_0(t);
                                                                      c_17 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_17, y_6);
                                                                      t = u_0(t);
                                                                      ;
                                                                      LocalPopChoice(r_18);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = q_18;
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
                                                    ATerm s_18 = t;
                                                    int u_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm g_17 = NULL;
                                                        t = v_6;
                                                        if((a_7 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, a_7);
                                                        t = u_0(t);
                                                        g_17 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, g_17, y_6);
                                                        t = u_0(t);
                                                        ;
                                                        LocalPopChoice(u_18);
                                                      }
                                                    else
                                                      {
                                                        t = s_18;
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
                                                      ATerm v_18 = t;
                                                      int w_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm k_17 = NULL;
                                                          t = v_6;
                                                          if((a_7 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, a_7);
                                                          t = u_0(t);
                                                          k_17 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, k_17, y_6);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(w_18);
                                                        }
                                                      else
                                                        {
                                                          t = v_18;
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
                                                          ATerm x_18 = t;
                                                          int a_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_17 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                              t = u_0(t);
                                                              p_17 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, p_17);
                                                              t = u_0(t);
                                                              ;
                                                              LocalPopChoice(a_19);
                                                            }
                                                          else
                                                            {
                                                              t = x_18;
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
                                        int c_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_o_17;
                                            t = u_0(t);
                                            ;
                                            LocalPopChoice(c_19);
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
                                              ATerm d_19 = t;
                                              int e_19 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm a_18 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                  t = u_0(t);
                                                  a_18 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, a_18);
                                                  t = u_0(t);
                                                  ;
                                                  LocalPopChoice(e_19);
                                                }
                                              else
                                                {
                                                  t = d_19;
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
                                                  ATerm f_19 = t;
                                                  int g_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm g_18 = NULL;
                                                      t = v_6;
                                                      if((a_7 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, a_7);
                                                      t = u_0(t);
                                                      g_18 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_18, y_6);
                                                      t = u_0(t);
                                                      ;
                                                      LocalPopChoice(g_19);
                                                    }
                                                  else
                                                    {
                                                      t = f_19;
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
                                                      ATerm h_19 = t;
                                                      int j_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm l_18 = NULL;
                                                          t = v_6;
                                                          if((a_7 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, a_7);
                                                          t = u_0(t);
                                                          l_18 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, l_18, y_6);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(j_19);
                                                        }
                                                      else
                                                        {
                                                          t = h_19;
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
                                                          ATerm l_19 = t;
                                                          int m_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_18 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                              t = u_0(t);
                                                              z_18 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, z_18);
                                                              t = u_0(t);
                                                              ;
                                                              LocalPopChoice(m_19);
                                                            }
                                                          else
                                                            {
                                                              t = l_19;
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
                                            ATerm n_19 = t;
                                            int v_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_17;
                                                t = u_0(t);
                                                ;
                                                LocalPopChoice(v_19);
                                              }
                                            else
                                              {
                                                t = n_19;
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
                                                  ATerm w_19 = t;
                                                  int x_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm k_19 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                      t = u_0(t);
                                                      k_19 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, k_19);
                                                      t = u_0(t);
                                                      ;
                                                      LocalPopChoice(x_19);
                                                    }
                                                  else
                                                    {
                                                      t = w_19;
                                                      t = e_7;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm z_19 = t;
                                                int b_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm d_20 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(b_20);
                                                    {
                                                      ATerm e_20 = t;
                                                      int h_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm o_19 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, v_6);
                                                          t = u_0(t);
                                                          o_19 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, o_19, y_6);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(h_20);
                                                        }
                                                      else
                                                        {
                                                          t = e_20;
                                                          t = e_7;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = z_19;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        a_7 = ATgetArgument(t, 0);
                                                        t = a_7;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            u_6 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm i_20 = t;
                                                              int j_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm y_19 = NULL,c_20 = NULL;
                                                                  t = s_6;
                                                                  if((u_6 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, u_6);
                                                                  t = u_0(t);
                                                                  c_20 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, c_20);
                                                                  t = u_0(t);
                                                                  y_19 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_19, y_6);
                                                                  t = u_0(t);
                                                                  ;
                                                                  LocalPopChoice(j_20);
                                                                }
                                                              else
                                                                {
                                                                  t = i_20;
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
                                                              ATerm k_20 = t;
                                                              int l_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm v_20 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                                  t = u_0(t);
                                                                  v_20 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, v_20);
                                                                  t = u_0(t);
                                                                  ;
                                                                  LocalPopChoice(l_20);
                                                                }
                                                              else
                                                                {
                                                                  t = k_20;
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
                                            ATerm m_20 = t;
                                            int n_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_17;
                                                t = u_0(t);
                                                ;
                                                LocalPopChoice(n_20);
                                              }
                                            else
                                              {
                                                t = m_20;
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
                                                  ATerm o_20 = t;
                                                  int p_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm y_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                      t = u_0(t);
                                                      y_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, y_21);
                                                      t = u_0(t);
                                                      ;
                                                      LocalPopChoice(p_20);
                                                    }
                                                  else
                                                    {
                                                      t = o_20;
                                                      t = e_7;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm q_20 = t;
                                                int r_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm s_20 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(r_20);
                                                    {
                                                      ATerm t_20 = t;
                                                      int u_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm d_22 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, v_6);
                                                          t = u_0(t);
                                                          d_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_22, y_6);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(u_20);
                                                        }
                                                      else
                                                        {
                                                          t = t_20;
                                                          t = e_7;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = q_20;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        a_7 = ATgetArgument(t, 0);
                                                        b_7 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm w_20 = t;
                                                          int x_20 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_22 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                              t = u_0(t);
                                                              q_22 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, q_22);
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
                                            ATerm y_20 = t;
                                            int z_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_17;
                                                t = u_0(t);
                                                ;
                                                LocalPopChoice(z_20);
                                              }
                                            else
                                              {
                                                t = y_20;
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
                                                  ATerm a_21 = t;
                                                  int b_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                      t = u_0(t);
                                                      p_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, p_23);
                                                      t = u_0(t);
                                                      ;
                                                      LocalPopChoice(b_21);
                                                    }
                                                  else
                                                    {
                                                      t = a_21;
                                                      t = e_7;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm c_21 = t;
                                                int e_21 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm f_21 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(e_21);
                                                    {
                                                      ATerm g_21 = t;
                                                      int h_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm g_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, v_6, p_6, q_6);
                                                          t = u_0(t);
                                                          g_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_24, y_6);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(h_21);
                                                        }
                                                      else
                                                        {
                                                          t = g_21;
                                                          t = e_7;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = c_21;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        a_7 = ATgetArgument(t, 0);
                                                        b_7 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm i_21 = t;
                                                          int l_21 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm l_24 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                              t = u_0(t);
                                                              l_24 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, l_24);
                                                              t = u_0(t);
                                                              ;
                                                              LocalPopChoice(l_21);
                                                            }
                                                          else
                                                            {
                                                              t = i_21;
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
                                            ATerm m_21 = t;
                                            int q_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_17;
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
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                a_7 = ATgetArgument(t, 0);
                                                b_7 = ATgetArgument(t, 1);
                                                {
                                                  ATerm u_21 = t;
                                                  int z_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_24 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                      t = u_0(t);
                                                      x_24 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, x_24);
                                                      t = u_0(t);
                                                      ;
                                                      LocalPopChoice(z_21);
                                                    }
                                                  else
                                                    {
                                                      t = u_21;
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
                                                      ATerm a_22 = t;
                                                      int b_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm c_25 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                          t = u_0(t);
                                                          c_25 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, c_25);
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
                                        ATerm c_22 = t;
                                        int g_22 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_o_17;
                                            t = u_0(t);
                                            ;
                                            LocalPopChoice(g_22);
                                          }
                                        else
                                          {
                                            t = c_22;
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
                                              ATerm h_22 = t;
                                              int i_22 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm d_26 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                  t = u_0(t);
                                                  d_26 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, d_26);
                                                  t = u_0(t);
                                                  ;
                                                  LocalPopChoice(i_22);
                                                }
                                              else
                                                {
                                                  t = h_22;
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
                                                      ATerm j_22 = t;
                                                      int k_22 = stack_ptr;
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
                                                            t = term_o_17;
                                                            t = bottomup_1_0(u_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(k_22);
                                                        }
                                                      else
                                                        {
                                                          t = j_22;
                                                          {
                                                            ATerm m_22 = t;
                                                            int n_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm i_26 = NULL;
                                                                t = v_6;
                                                                if((u_6 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, n_6, p_6);
                                                                t = genzip_4_0(c_1, d_1, e_1, f_1, t);
                                                                i_26 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_26), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, u_6, n_6)));
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
                                                    ATerm r_22 = t;
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
                                                        t = r_22;
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
                                                      ATerm v_22 = t;
                                                      int w_22 = stack_ptr;
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
                                                          LocalPopChoice(w_22);
                                                        }
                                                      else
                                                        {
                                                          t = v_22;
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
                                                          ATerm x_22 = t;
                                                          int y_22 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                              t = u_0(t);
                                                              p_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, p_27);
                                                              t = u_0(t);
                                                              ;
                                                              LocalPopChoice(y_22);
                                                            }
                                                          else
                                                            {
                                                              t = x_22;
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
                                        ATerm z_22 = t;
                                        int b_23 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_o_17;
                                            t = u_0(t);
                                            ;
                                            LocalPopChoice(b_23);
                                          }
                                        else
                                          {
                                            t = z_22;
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
                                              ATerm c_23 = t;
                                              int d_23 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm k_28 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                  t = u_0(t);
                                                  k_28 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, k_28);
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
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                a_7 = ATgetArgument(t, 0);
                                                {
                                                  ATerm e_23 = t;
                                                  int f_23 = stack_ptr;
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
                                                      LocalPopChoice(f_23);
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
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    a_7 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm i_23 = t;
                                                      int j_23 = stack_ptr;
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
                                                          LocalPopChoice(j_23);
                                                        }
                                                      else
                                                        {
                                                          t = i_23;
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
                                                          ATerm k_23 = t;
                                                          int l_23 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                              t = u_0(t);
                                                              f_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, f_29);
                                                              t = u_0(t);
                                                              ;
                                                              LocalPopChoice(l_23);
                                                            }
                                                          else
                                                            {
                                                              t = k_23;
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
                                            ATerm m_23 = t;
                                            int n_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_17;
                                                t = u_0(t);
                                                ;
                                                LocalPopChoice(n_23);
                                              }
                                            else
                                              {
                                                t = m_23;
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
                                                  ATerm o_23 = t;
                                                  int q_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm v_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                      t = u_0(t);
                                                      v_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, v_29);
                                                      t = u_0(t);
                                                      ;
                                                      LocalPopChoice(q_23);
                                                    }
                                                  else
                                                    {
                                                      t = o_23;
                                                      t = e_7;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm r_23 = t;
                                                int s_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm t_23 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(s_23);
                                                    {
                                                      ATerm u_23 = t;
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
                                                          t = u_23;
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
                                                                  ATerm m_30 = NULL;
                                                                  t = v_6;
                                                                  if((u_6 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, u_6);
                                                                  t = u_0(t);
                                                                  m_30 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, m_30);
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
                                                              int a_24 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm s_30 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                                  t = u_0(t);
                                                                  s_30 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, s_30);
                                                                  t = u_0(t);
                                                                  ;
                                                                  LocalPopChoice(a_24);
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
                                            ATerm b_24 = t;
                                            int d_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_17;
                                                t = u_0(t);
                                                ;
                                                LocalPopChoice(d_24);
                                              }
                                            else
                                              {
                                                t = b_24;
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
                                                      ATerm p_31 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                      t = u_0(t);
                                                      p_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, p_31);
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
                                                ATerm h_24 = t;
                                                int i_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm j_24 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(i_24);
                                                    {
                                                      ATerm k_24 = t;
                                                      int p_24 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, x_6);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(p_24);
                                                        }
                                                      else
                                                        {
                                                          t = k_24;
                                                          t = e_7;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = h_24;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        a_7 = ATgetArgument(t, 0);
                                                        b_7 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm q_24 = t;
                                                          int r_24 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm x_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                              t = u_0(t);
                                                              x_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, x_31);
                                                              t = u_0(t);
                                                              ;
                                                              LocalPopChoice(r_24);
                                                            }
                                                          else
                                                            {
                                                              t = q_24;
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
                                            ATerm s_24 = t;
                                            int t_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_17;
                                                t = u_0(t);
                                                ;
                                                LocalPopChoice(t_24);
                                              }
                                            else
                                              {
                                                t = s_24;
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
                                                  ATerm u_24 = t;
                                                  int v_24 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_32 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                      t = u_0(t);
                                                      o_32 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, o_32);
                                                      t = u_0(t);
                                                      ;
                                                      LocalPopChoice(v_24);
                                                    }
                                                  else
                                                    {
                                                      t = u_24;
                                                      t = e_7;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm w_24 = t;
                                                int y_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm z_24 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(y_24);
                                                    {
                                                      ATerm a_25 = t;
                                                      int b_25 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, x_6, y_6, r_6);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(b_25);
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
                                                    t = w_24;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        a_7 = ATgetArgument(t, 0);
                                                        b_7 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm d_25 = t;
                                                          int e_25 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                              t = u_0(t);
                                                              q_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, q_33);
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
                                                ATerm f_25 = t;
                                                int g_25 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_o_17;
                                                    t = u_0(t);
                                                    ;
                                                    LocalPopChoice(g_25);
                                                  }
                                                else
                                                  {
                                                    t = f_25;
                                                    {
                                                      ATerm h_25 = t;
                                                      int i_25 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm g_35 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_7, y_6);
                                                          t = u_0(t);
                                                          g_35 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, x_6, g_35);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(i_25);
                                                        }
                                                      else
                                                        {
                                                          t = h_25;
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
                                                      ATerm j_25 = t;
                                                      int k_25 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm n_35 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                          t = u_0(t);
                                                          n_35 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, n_35);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(k_25);
                                                        }
                                                      else
                                                        {
                                                          t = j_25;
                                                          {
                                                            ATerm l_25 = t;
                                                            int m_25 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm w_35 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, d_7, y_6);
                                                                t = u_0(t);
                                                                w_35 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, x_6, w_35);
                                                                t = u_0(t);
                                                                ;
                                                                LocalPopChoice(m_25);
                                                              }
                                                            else
                                                              {
                                                                t = l_25;
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
                                                          ATerm n_25 = t;
                                                          int o_25 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_36 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_7, y_6);
                                                              t = u_0(t);
                                                              g_36 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, x_6, g_36);
                                                              t = u_0(t);
                                                              ;
                                                              LocalPopChoice(o_25);
                                                            }
                                                          else
                                                            {
                                                              t = n_25;
                                                              {
                                                                ATerm p_25 = t;
                                                                int q_25 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm k_36 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                                    t = u_0(t);
                                                                    k_36 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, k_36);
                                                                    t = u_0(t);
                                                                    ;
                                                                    LocalPopChoice(q_25);
                                                                  }
                                                                else
                                                                  {
                                                                    t = p_25;
                                                                    t = e_7;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm r_25 = t;
                                                        int s_25 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm o_37 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, d_7, y_6);
                                                            t = u_0(t);
                                                            o_37 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, x_6, o_37);
                                                            t = u_0(t);
                                                            ;
                                                            LocalPopChoice(s_25);
                                                          }
                                                        else
                                                          {
                                                            t = r_25;
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
                                                    ATerm u_25 = t;
                                                    int v_25 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_o_17;
                                                        t = u_0(t);
                                                        ;
                                                        LocalPopChoice(v_25);
                                                      }
                                                    else
                                                      {
                                                        t = u_25;
                                                        {
                                                          ATerm w_25 = t;
                                                          int x_25 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_38 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_7, y_6);
                                                              t = u_0(t);
                                                              i_38 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, x_6, i_38);
                                                              t = u_0(t);
                                                              ;
                                                              LocalPopChoice(x_25);
                                                            }
                                                          else
                                                            {
                                                              t = w_25;
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
                                                          ATerm y_25 = t;
                                                          int b_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_38 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                              t = u_0(t);
                                                              p_38 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, p_38);
                                                              t = u_0(t);
                                                              ;
                                                              LocalPopChoice(b_26);
                                                            }
                                                          else
                                                            {
                                                              t = y_25;
                                                              {
                                                                ATerm c_26 = t;
                                                                int e_26 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm u_38 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, d_7, y_6);
                                                                    t = u_0(t);
                                                                    u_38 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, x_6, u_38);
                                                                    t = u_0(t);
                                                                    ;
                                                                    LocalPopChoice(e_26);
                                                                  }
                                                                else
                                                                  {
                                                                    t = c_26;
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
                                                              ATerm f_26 = t;
                                                              int g_26 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm i_39 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, d_7, y_6);
                                                                  t = u_0(t);
                                                                  i_39 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, x_6, i_39);
                                                                  t = u_0(t);
                                                                  ;
                                                                  LocalPopChoice(g_26);
                                                                }
                                                              else
                                                                {
                                                                  t = f_26;
                                                                  {
                                                                    ATerm h_26 = t;
                                                                    int q_26 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm y_39 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                                        t = u_0(t);
                                                                        y_39 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, y_39);
                                                                        t = u_0(t);
                                                                        ;
                                                                        LocalPopChoice(q_26);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = h_26;
                                                                        t = e_7;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm r_26 = t;
                                                            int u_26 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm n_40 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, d_7, y_6);
                                                                t = u_0(t);
                                                                n_40 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, x_6, n_40);
                                                                t = u_0(t);
                                                                ;
                                                                LocalPopChoice(u_26);
                                                              }
                                                            else
                                                              {
                                                                t = r_26;
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
                                                    ATerm w_26 = t;
                                                    int x_26 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_o_17;
                                                        t = u_0(t);
                                                        ;
                                                        LocalPopChoice(x_26);
                                                      }
                                                    else
                                                      {
                                                        t = w_26;
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
                                                          ATerm y_26 = t;
                                                          int z_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm x_40 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                              t = u_0(t);
                                                              x_40 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, x_40);
                                                              t = u_0(t);
                                                              ;
                                                              LocalPopChoice(z_26);
                                                            }
                                                          else
                                                            {
                                                              t = y_26;
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
                                                              ATerm a_27 = t;
                                                              int b_27 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm g_41 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_7, c_7);
                                                                  t = u_0(t);
                                                                  g_41 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, a_7, g_41);
                                                                  t = u_0(t);
                                                                  ;
                                                                  LocalPopChoice(b_27);
                                                                }
                                                              else
                                                                {
                                                                  t = a_27;
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
                            ATerm d_27 = t;
                            int e_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_i_17;
                                t = u_0(t);
                                ;
                                LocalPopChoice(e_27);
                              }
                            else
                              {
                                t = d_27;
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
                            ATerm f_27 = t;
                            int g_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_i_17;
                                t = u_0(t);
                                ;
                                LocalPopChoice(g_27);
                              }
                            else
                              {
                                t = f_27;
                                {
                                  ATerm h_27 = t;
                                  int j_27 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = c_7;
                                      if((d_7 != t))
                                        {
                                          _fail(t);
                                        }
                                      ;
                                      LocalPopChoice(j_27);
                                    }
                                  else
                                    {
                                      t = h_27;
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
                                      ATerm k_27 = t;
                                      int l_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm o_43 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, b_7, c_7);
                                          t = u_0(t);
                                          o_43 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, a_7, o_43);
                                          t = u_0(t);
                                          ;
                                          LocalPopChoice(l_27);
                                        }
                                      else
                                        {
                                          t = k_27;
                                          {
                                            ATerm m_27 = t;
                                            int n_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = c_7;
                                                if((d_7 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                ;
                                                LocalPopChoice(n_27);
                                              }
                                            else
                                              {
                                                t = m_27;
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
                                          ATerm o_27 = t;
                                          int q_27 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = c_7;
                                              if((d_7 != t))
                                                {
                                                  _fail(t);
                                                }
                                              ;
                                              LocalPopChoice(q_27);
                                            }
                                          else
                                            {
                                              t = o_27;
                                              {
                                                ATerm r_27 = t;
                                                int s_27 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = a_7;
                                                    t = topdown_1_0(h_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, a_7);
                                                    t = bottomup_1_0(u_0, t);
                                                    ;
                                                    LocalPopChoice(s_27);
                                                  }
                                                else
                                                  {
                                                    t = r_27;
                                                    t = e_7;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm t_27 = t;
                                        int u_27 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = c_7;
                                            if((d_7 != t))
                                              {
                                                _fail(t);
                                              }
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
                                ATerm v_27 = t;
                                int w_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_i_17;
                                    t = u_0(t);
                                    ;
                                    LocalPopChoice(w_27);
                                  }
                                else
                                  {
                                    t = v_27;
                                    t = c_7;
                                  }
                              }
                            else
                              {
                                ATerm x_27 = t;
                                int y_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_i_17;
                                    t = u_0(t);
                                    ;
                                    LocalPopChoice(y_27);
                                  }
                                else
                                  {
                                    t = x_27;
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
                                    ATerm z_27 = t;
                                    int b_28 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_o_17;
                                        t = u_0(t);
                                        ;
                                        LocalPopChoice(b_28);
                                      }
                                    else
                                      {
                                        t = z_27;
                                        t = c_7;
                                      }
                                  }
                                else
                                  {
                                    ATerm c_28 = t;
                                    int d_28 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_o_17;
                                        t = u_0(t);
                                        ;
                                        LocalPopChoice(d_28);
                                      }
                                    else
                                      {
                                        t = c_28;
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
                                        ATerm f_28 = t;
                                        int g_28 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm m_45 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, d_7, x_6);
                                            t = conc_0_0(t);
                                            m_45 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, m_45, y_6);
                                            t = bottomup_1_0(u_0, t);
                                            ;
                                            LocalPopChoice(g_28);
                                          }
                                        else
                                          {
                                            t = f_28;
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
                        ATerm h_28 = t;
                        int i_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm j_28 = ATgetArgument(t, 0);
                                c_7 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(i_28);
                            t = c_7;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm l_28 = t;
                                int m_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_i_17;
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
                                    int o_28 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_o_17;
                                        t = u_0(t);
                                        ;
                                        LocalPopChoice(o_28);
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
                            t = h_28;
                            if(match_cons(t, sym_All_1))
                              {
                                d_7 = ATgetArgument(t, 0);
                                t = d_7;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm p_28 = t;
                                    int r_28 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_i_17;
                                        t = u_0(t);
                                        ;
                                        LocalPopChoice(r_28);
                                      }
                                    else
                                      {
                                        t = p_28;
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
                                        ATerm s_28 = t;
                                        int u_28 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_i_17;
                                            t = u_0(t);
                                            ;
                                            LocalPopChoice(u_28);
                                          }
                                        else
                                          {
                                            t = s_28;
                                            {
                                              ATerm v_28 = t;
                                              int w_28 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm p_46 = NULL,r_46 = NULL,x_46 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,p_47 = NULL,r_47 = NULL;
                                                  t = e_7;
                                                  t = new_0_0(t);
                                                  p_46 = t;
                                                  t = bottomup_1_0(u_0, t);
                                                  p_47 = t;
                                                  t = (ATerm) ATempty;
                                                  t = u_0(t);
                                                  r_47 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(r_47), p_47);
                                                  t = u_0(t);
                                                  r_46 = t;
                                                  t = p_46;
                                                  t = bottomup_1_0(u_0, t);
                                                  m_47 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, m_47);
                                                  t = u_0(t);
                                                  l_47 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, l_47);
                                                  t = u_0(t);
                                                  f_47 = t;
                                                  t = d_7;
                                                  t = bottomup_1_0(u_0, t);
                                                  h_47 = t;
                                                  t = p_46;
                                                  t = bottomup_1_0(u_0, t);
                                                  k_47 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, k_47);
                                                  t = u_0(t);
                                                  j_47 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, j_47);
                                                  t = u_0(t);
                                                  i_47 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_47, i_47);
                                                  t = u_0(t);
                                                  g_47 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_47, g_47);
                                                  t = u_0(t);
                                                  x_46 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, r_46, x_46);
                                                  t = u_0(t);
                                                  ;
                                                  LocalPopChoice(w_28);
                                                }
                                              else
                                                {
                                                  t = v_28;
                                                  t = e_7;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm x_28 = t;
                                            int y_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_17;
                                                t = u_0(t);
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
                                                      ATerm y_47 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,d_49 = NULL;
                                                      t = e_7;
                                                      t = new_0_0(t);
                                                      y_47 = t;
                                                      t = bottomup_1_0(u_0, t);
                                                      b_49 = t;
                                                      t = (ATerm) ATempty;
                                                      t = u_0(t);
                                                      d_49 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(d_49), b_49);
                                                      t = u_0(t);
                                                      l_48 = t;
                                                      t = y_47;
                                                      t = bottomup_1_0(u_0, t);
                                                      a_49 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, a_49);
                                                      t = u_0(t);
                                                      z_48 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, z_48);
                                                      t = u_0(t);
                                                      n_48 = t;
                                                      t = d_7;
                                                      t = bottomup_1_0(u_0, t);
                                                      v_48 = t;
                                                      t = y_47;
                                                      t = bottomup_1_0(u_0, t);
                                                      y_48 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, y_48);
                                                      t = u_0(t);
                                                      x_48 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, x_48);
                                                      t = u_0(t);
                                                      w_48 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_48, w_48);
                                                      t = u_0(t);
                                                      o_48 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_48, o_48);
                                                      t = u_0(t);
                                                      m_48 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, l_48, m_48);
                                                      t = u_0(t);
                                                      ;
                                                      LocalPopChoice(a_29);
                                                    }
                                                  else
                                                    {
                                                      t = z_28;
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
                                                              ATerm b_29 = t;
                                                              int c_29 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm u_49 = NULL,w_49 = NULL,x_49 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, g_6);
                                                                  t = u_0(t);
                                                                  x_49 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_49, i_6);
                                                                  t = u_0(t);
                                                                  w_49 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_6, w_49);
                                                                  t = u_0(t);
                                                                  u_49 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, u_49);
                                                                  t = u_0(t);
                                                                  ;
                                                                  LocalPopChoice(c_29);
                                                                }
                                                              else
                                                                {
                                                                  t = b_29;
                                                                  {
                                                                    ATerm d_29 = t;
                                                                    int g_29 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm f_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL,k_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL;
                                                                        t = e_7;
                                                                        t = new_0_0(t);
                                                                        f_50 = t;
                                                                        t = bottomup_1_0(u_0, t);
                                                                        v_50 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = u_0(t);
                                                                        w_50 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(w_50), v_50);
                                                                        t = u_0(t);
                                                                        h_50 = t;
                                                                        t = f_50;
                                                                        t = bottomup_1_0(u_0, t);
                                                                        u_50 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, u_50);
                                                                        t = u_0(t);
                                                                        t_50 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, t_50);
                                                                        t = u_0(t);
                                                                        j_50 = t;
                                                                        t = d_7;
                                                                        t = bottomup_1_0(u_0, t);
                                                                        p_50 = t;
                                                                        t = f_50;
                                                                        t = bottomup_1_0(u_0, t);
                                                                        s_50 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, s_50);
                                                                        t = u_0(t);
                                                                        r_50 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, r_50);
                                                                        t = u_0(t);
                                                                        q_50 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, p_50, q_50);
                                                                        t = u_0(t);
                                                                        k_50 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, j_50, k_50);
                                                                        t = u_0(t);
                                                                        i_50 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, h_50, i_50);
                                                                        t = u_0(t);
                                                                        ;
                                                                        LocalPopChoice(g_29);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = d_29;
                                                                        t = e_7;
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
                                                                ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,s_51 = NULL,t_51 = NULL,v_51 = NULL;
                                                                t = e_7;
                                                                t = new_0_0(t);
                                                                f_51 = t;
                                                                t = bottomup_1_0(u_0, t);
                                                                t_51 = t;
                                                                t = (ATerm) ATempty;
                                                                t = u_0(t);
                                                                v_51 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(v_51), t_51);
                                                                t = u_0(t);
                                                                g_51 = t;
                                                                t = f_51;
                                                                t = bottomup_1_0(u_0, t);
                                                                s_51 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, s_51);
                                                                t = u_0(t);
                                                                o_51 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, o_51);
                                                                t = u_0(t);
                                                                i_51 = t;
                                                                t = d_7;
                                                                t = bottomup_1_0(u_0, t);
                                                                k_51 = t;
                                                                t = f_51;
                                                                t = bottomup_1_0(u_0, t);
                                                                n_51 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, n_51);
                                                                t = u_0(t);
                                                                m_51 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, m_51);
                                                                t = u_0(t);
                                                                l_51 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, k_51, l_51);
                                                                t = u_0(t);
                                                                j_51 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_51, j_51);
                                                                t = u_0(t);
                                                                h_51 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, g_51, h_51);
                                                                t = u_0(t);
                                                                ;
                                                                LocalPopChoice(k_29);
                                                              }
                                                            else
                                                              {
                                                                t = j_29;
                                                                t = e_7;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = a_7;
                                                        {
                                                          ATerm l_29 = t;
                                                          int m_29 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL;
                                                              t = e_7;
                                                              t = new_0_0(t);
                                                              y_51 = t;
                                                              t = bottomup_1_0(u_0, t);
                                                              v_52 = t;
                                                              t = (ATerm) ATempty;
                                                              t = u_0(t);
                                                              w_52 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(w_52), v_52);
                                                              t = u_0(t);
                                                              z_51 = t;
                                                              t = y_51;
                                                              t = bottomup_1_0(u_0, t);
                                                              u_52 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, u_52);
                                                              t = u_0(t);
                                                              t_52 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, t_52);
                                                              t = u_0(t);
                                                              k_52 = t;
                                                              t = d_7;
                                                              t = bottomup_1_0(u_0, t);
                                                              m_52 = t;
                                                              t = y_51;
                                                              t = bottomup_1_0(u_0, t);
                                                              s_52 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, s_52);
                                                              t = u_0(t);
                                                              r_52 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, r_52);
                                                              t = u_0(t);
                                                              n_52 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_52, n_52);
                                                              t = u_0(t);
                                                              l_52 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, k_52, l_52);
                                                              t = u_0(t);
                                                              a_52 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, z_51, a_52);
                                                              t = u_0(t);
                                                              ;
                                                              LocalPopChoice(m_29);
                                                            }
                                                          else
                                                            {
                                                              t = l_29;
                                                              t = e_7;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = a_7;
                                                    {
                                                      ATerm n_29 = t;
                                                      int o_29 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,r_53 = NULL,s_53 = NULL,x_53 = NULL;
                                                          t = e_7;
                                                          t = new_0_0(t);
                                                          f_53 = t;
                                                          t = bottomup_1_0(u_0, t);
                                                          s_53 = t;
                                                          t = (ATerm) ATempty;
                                                          t = u_0(t);
                                                          x_53 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(x_53), s_53);
                                                          t = u_0(t);
                                                          g_53 = t;
                                                          t = f_53;
                                                          t = bottomup_1_0(u_0, t);
                                                          r_53 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, r_53);
                                                          t = u_0(t);
                                                          o_53 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, o_53);
                                                          t = u_0(t);
                                                          i_53 = t;
                                                          t = d_7;
                                                          t = bottomup_1_0(u_0, t);
                                                          k_53 = t;
                                                          t = f_53;
                                                          t = bottomup_1_0(u_0, t);
                                                          n_53 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, n_53);
                                                          t = u_0(t);
                                                          m_53 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, m_53);
                                                          t = u_0(t);
                                                          l_53 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, k_53, l_53);
                                                          t = u_0(t);
                                                          j_53 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_53, j_53);
                                                          t = u_0(t);
                                                          h_53 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, g_53, h_53);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(o_29);
                                                        }
                                                      else
                                                        {
                                                          t = n_29;
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
                                                      ATerm q_29 = t;
                                                      int w_29 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, a_7);
                                                          t = u_0(t);
                                                          ;
                                                          LocalPopChoice(w_29);
                                                        }
                                                      else
                                                        {
                                                          t = q_29;
                                                          {
                                                            ATerm x_29 = t;
                                                            int a_30 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL,h_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL,m_55 = NULL;
                                                                t = e_7;
                                                                t = new_0_0(t);
                                                                y_54 = t;
                                                                t = bottomup_1_0(u_0, t);
                                                                l_55 = t;
                                                                t = (ATerm) ATempty;
                                                                t = u_0(t);
                                                                m_55 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(m_55), l_55);
                                                                t = u_0(t);
                                                                z_54 = t;
                                                                t = y_54;
                                                                t = bottomup_1_0(u_0, t);
                                                                k_55 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, k_55);
                                                                t = u_0(t);
                                                                j_55 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, j_55);
                                                                t = u_0(t);
                                                                b_55 = t;
                                                                t = d_7;
                                                                t = bottomup_1_0(u_0, t);
                                                                d_55 = t;
                                                                t = y_54;
                                                                t = bottomup_1_0(u_0, t);
                                                                i_55 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, i_55);
                                                                t = u_0(t);
                                                                h_55 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, h_55);
                                                                t = u_0(t);
                                                                e_55 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, d_55, e_55);
                                                                t = u_0(t);
                                                                c_55 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, b_55, c_55);
                                                                t = u_0(t);
                                                                a_55 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, z_54, a_55);
                                                                t = u_0(t);
                                                                ;
                                                                LocalPopChoice(a_30);
                                                              }
                                                            else
                                                              {
                                                                t = x_29;
                                                                t = e_7;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm b_30 = t;
                                                    int c_30 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL,x_55 = NULL,z_55 = NULL,b_56 = NULL,e_56 = NULL,f_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL;
                                                        t = e_7;
                                                        t = new_0_0(t);
                                                        p_55 = t;
                                                        t = bottomup_1_0(u_0, t);
                                                        i_56 = t;
                                                        t = (ATerm) ATempty;
                                                        t = u_0(t);
                                                        j_56 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(j_56), i_56);
                                                        t = u_0(t);
                                                        q_55 = t;
                                                        t = p_55;
                                                        t = bottomup_1_0(u_0, t);
                                                        h_56 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, h_56);
                                                        t = u_0(t);
                                                        f_56 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, f_56);
                                                        t = u_0(t);
                                                        s_55 = t;
                                                        t = d_7;
                                                        t = bottomup_1_0(u_0, t);
                                                        x_55 = t;
                                                        t = p_55;
                                                        t = bottomup_1_0(u_0, t);
                                                        e_56 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, e_56);
                                                        t = u_0(t);
                                                        b_56 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, b_56);
                                                        t = u_0(t);
                                                        z_55 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, x_55, z_55);
                                                        t = u_0(t);
                                                        t_55 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, s_55, t_55);
                                                        t = u_0(t);
                                                        r_55 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, q_55, r_55);
                                                        t = u_0(t);
                                                        ;
                                                        LocalPopChoice(c_30);
                                                      }
                                                    else
                                                      {
                                                        t = b_30;
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
                                            ATerm d_30 = t;
                                            int e_30 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_i_17;
                                                t = u_0(t);
                                                ;
                                                LocalPopChoice(e_30);
                                              }
                                            else
                                              {
                                                t = d_30;
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
                                                ATerm f_30 = t;
                                                int n_30 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_o_17;
                                                    t = u_0(t);
                                                    ;
                                                    LocalPopChoice(n_30);
                                                  }
                                                else
                                                  {
                                                    t = f_30;
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
                                                    ATerm o_30 = t;
                                                    int p_30 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_o_17;
                                                        t = u_0(t);
                                                        ;
                                                        LocalPopChoice(p_30);
                                                      }
                                                    else
                                                      {
                                                        t = o_30;
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
                                                ATerm q_30 = t;
                                                int r_30 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm t_30 = ATgetArgument(t, 0);
                                                        c_7 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(r_30);
                                                    t = c_7;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm u_30 = t;
                                                        int w_30 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_o_17;
                                                            t = u_0(t);
                                                            ;
                                                            LocalPopChoice(w_30);
                                                          }
                                                        else
                                                          {
                                                            t = u_30;
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
                                                    t = q_30;
                                                    {
                                                      ATerm x_30 = t;
                                                      int y_30 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm z_30 = ATgetArgument(t, 0);
                                                              c_7 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(y_30);
                                                          {
                                                            ATerm e_31 = t;
                                                            int f_31 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = c_7;
                                                                t = fetch_1_0(i_1, t);
                                                                t = term_o_17;
                                                                t = bottomup_1_0(u_0, t);
                                                                ;
                                                                LocalPopChoice(f_31);
                                                              }
                                                            else
                                                              {
                                                                t = e_31;
                                                                t = e_7;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = x_30;
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
                                                                            ATerm i_31 = t;
                                                                            int j_31 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm u_57 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, b_7, c_7);
                                                                                t = u_0(t);
                                                                                u_57 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, a_7, u_57);
                                                                                t = u_0(t);
                                                                                ;
                                                                                LocalPopChoice(j_31);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = i_31;
                                                                                {
                                                                                  ATerm k_31 = t;
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
                                                                                      t = k_31;
                                                                                      t = e_7;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm n_31 = t;
                                                                          int q_31 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = c_7;
                                                                              if((d_7 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              ;
                                                                              LocalPopChoice(q_31);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = n_31;
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
                                                                                int w_31 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm t_58 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, b_7);
                                                                                    t = u_0(t);
                                                                                    t_58 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, a_7, t_58);
                                                                                    t = u_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(w_31);
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
                                                                                  ATerm y_31 = t;
                                                                                  int z_31 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_o_17;
                                                                                      t = u_0(t);
                                                                                      ;
                                                                                      LocalPopChoice(z_31);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = y_31;
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
                                                                                    ATerm a_32 = t;
                                                                                    int b_32 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm g_59 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, b_7);
                                                                                        t = u_0(t);
                                                                                        g_59 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, a_7, g_59);
                                                                                        t = u_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(b_32);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = a_32;
                                                                                        t = e_7;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm c_32 = t;
                                                                                      int d_32 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_o_17;
                                                                                          t = u_0(t);
                                                                                          ;
                                                                                          LocalPopChoice(d_32);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = c_32;
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
                                                                                        ATerm e_32 = t;
                                                                                        int f_32 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm k_61 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, b_7);
                                                                                            t = u_0(t);
                                                                                            k_61 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, a_7, k_61);
                                                                                            t = u_0(t);
                                                                                            ;
                                                                                            LocalPopChoice(f_32);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = e_32;
                                                                                            t = e_7;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm g_32 = t;
                                                                                          int h_32 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_i_17;
                                                                                              t = u_0(t);
                                                                                              ;
                                                                                              LocalPopChoice(h_32);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = g_32;
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
                                                                                        ATerm i_32 = t;
                                                                                        int j_32 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm j_62 = NULL,l_62 = NULL;
                                                                                            t = c_7;
                                                                                            t = map1_1_0(j_1, t);
                                                                                            j_62 = t;
                                                                                            t = e_6;
                                                                                            t = map1_1_0(k_1, t);
                                                                                            l_62 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, d_7, j_62, l_62, c_6);
                                                                                            t = bottomup_1_0(u_0, t);
                                                                                            ;
                                                                                            LocalPopChoice(j_32);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = i_32;
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
                                                                                            ATerm k_32 = t;
                                                                                            int p_32 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm a_63 = NULL,i_63 = NULL;
                                                                                                t = e_6;
                                                                                                t = map1_1_0(l_1, t);
                                                                                                a_63 = t;
                                                                                                t = c_7;
                                                                                                t = map_1_0(m_1, t);
                                                                                                i_63 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_SDefT_4, d_7, i_63, a_63, c_6);
                                                                                                t = bottomup_1_0(u_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(p_32);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = k_32;
                                                                                                {
                                                                                                  ATerm q_32 = t;
                                                                                                  int r_32 = stack_ptr;
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
                                                                                                      LocalPopChoice(r_32);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = q_32;
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
                                                                                                ATerm s_32 = t;
                                                                                                int t_32 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm s_64 = NULL,t_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL;
                                                                                                    t = term_u_32;
                                                                                                    t = bottomup_1_0(u_0, t);
                                                                                                    t_64 = t;
                                                                                                    t = (ATerm) ATempty;
                                                                                                    t = u_0(t);
                                                                                                    a_65 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(a_65), e_6);
                                                                                                    t = u_0(t);
                                                                                                    z_64 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(z_64), d_7);
                                                                                                    t = u_0(t);
                                                                                                    y_64 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Op_2, t_64, y_64);
                                                                                                    t = u_0(t);
                                                                                                    s_64 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_App_2, c_7, s_64);
                                                                                                    t = u_0(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(t_32);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = s_32;
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
                                                                                                    ATerm y_32 = t;
                                                                                                    int z_32 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm p_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, c_7);
                                                                                                        t = u_0(t);
                                                                                                        u_65 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, e_6);
                                                                                                        t = u_0(t);
                                                                                                        x_65 = t;
                                                                                                        t = (ATerm) ATempty;
                                                                                                        t = u_0(t);
                                                                                                        y_65 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(y_65), x_65);
                                                                                                        t = u_0(t);
                                                                                                        w_65 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(w_65), d_7);
                                                                                                        t = u_0(t);
                                                                                                        v_65 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(v_65), u_65);
                                                                                                        t = u_0(t);
                                                                                                        p_65 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, p_65);
                                                                                                        t = u_0(t);
                                                                                                        ;
                                                                                                        LocalPopChoice(z_32);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = y_32;
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
                                                                                                        ATerm a_33 = t;
                                                                                                        int b_33 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm l_66 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Match_1, c_7);
                                                                                                            t = u_0(t);
                                                                                                            l_66 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, d_7, l_66);
                                                                                                            t = u_0(t);
                                                                                                            ;
                                                                                                            LocalPopChoice(b_33);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = a_33;
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
                                                                                                            ATerm c_33 = t;
                                                                                                            int d_33 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                ATerm p_66 = NULL;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, d_7);
                                                                                                                t = u_0(t);
                                                                                                                p_66 = t;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, p_66, c_7);
                                                                                                                t = u_0(t);
                                                                                                                ;
                                                                                                                LocalPopChoice(d_33);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = c_33;
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
                                                                                                                ATerm e_33 = t;
                                                                                                                int f_33 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    ATerm u_66 = NULL;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Build_1, c_7);
                                                                                                                    t = u_0(t);
                                                                                                                    u_66 = t;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, u_66, d_7);
                                                                                                                    t = u_0(t);
                                                                                                                    ;
                                                                                                                    LocalPopChoice(f_33);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = e_33;
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
                                                                                                                          ATerm i_33 = t;
                                                                                                                          int l_33 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm h_68 = NULL;
                                                                                                                              t = (ATerm) ATmakeAppl(sym__2, d_7, x_6);
                                                                                                                              t = conc_0_0(t);
                                                                                                                              h_68 = t;
                                                                                                                              t = (ATerm) ATmakeAppl(sym_Let_2, h_68, y_6);
                                                                                                                              t = bottomup_1_0(u_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(l_33);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = i_33;
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
                                                                                                                                                              ATerm m_33 = t;
                                                                                                                                                              int n_33 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  t = v_6;
                                                                                                                                                                  if((u_6 != t))
                                                                                                                                                                    {
                                                                                                                                                                      _fail(t);
                                                                                                                                                                    }
                                                                                                                                                                  t = l_6;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm o_33 = t;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        ATerm p_1 (ATerm t)
                                                                                                                                                                        {
                                                                                                                                                                          if(match_cons(t, sym_CallT_3))
                                                                                                                                                                            {
                                                                                                                                                                              ATerm r_33 = ATgetArgument(t, 0);
                                                                                                                                                                              if(match_cons(r_33, sym_SVar_1))
                                                                                                                                                                                {
                                                                                                                                                                                  if((u_6 != ATgetArgument(r_33, 0)))
                                                                                                                                                                                    {
                                                                                                                                                                                      _fail(ATgetArgument(r_33, 0));
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              {
                                                                                                                                                                                ATerm s_33 = ATgetArgument(t, 1);
                                                                                                                                                                                if(((ATgetType(s_33) != AT_LIST) || !(ATisEmpty(s_33))))
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                              }
                                                                                                                                                                              {
                                                                                                                                                                                ATerm t_33 = ATgetArgument(t, 2);
                                                                                                                                                                                if(((ATgetType(t_33) != AT_LIST) || !(ATisEmpty(t_33))))
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
                                                                                                                                                                        t = o_33;
                                                                                                                                                                      }
                                                                                                                                                                    t = l_6;
                                                                                                                                                                    t = bottomup_1_0(u_0, t);
                                                                                                                                                                  }
                                                                                                                                                                  ;
                                                                                                                                                                  LocalPopChoice(n_33);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = m_33;
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
  ATerm s_70 = NULL,w_70 = NULL,x_70 = NULL,z_70 = NULL,t_1 = NULL,u_1 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm u_33 = ATgetArgument(t, 0);
      if(match_cons(u_33, sym_SVar_1))
        {
          x_70 = ATgetArgument(u_33, 0);
        }
      else
        _fail(t);
      s_70 = ATgetArgument(t, 1);
      w_70 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_70), (ATerm)ATempty, (ATerm) ATempty);
  t_1 = t;
  t = term_v_33;
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_33, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_70), (ATerm)ATempty, (ATerm) ATempty));
  t = z_6(u_1, t_1, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm w_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_33) != ATmakeSymbol("n_0", 0, ATtrue)))
        _fail(t);
      z_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_70), s_70, w_70);
  return(t);
}
ATerm SubsArgCall1_0_0 (ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL,x_1 = NULL;
  a_71 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm y_33 = ATgetArgument(t, 0);
      if(match_cons(y_33, sym_SVar_1))
        {
          ATerm n_34 = ATgetArgument(y_33, 0);
        }
      else
        _fail(t);
      {
        ATerm z_33 = ATgetArgument(t, 1);
        if(((ATgetType(z_33) != AT_LIST) || !(ATisEmpty(z_33))))
          _fail(t);
      }
      {
        ATerm d_34 = ATgetArgument(t, 2);
        if(((ATgetType(d_34) != AT_LIST) || !(ATisEmpty(d_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_o_34;
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_34, a_71);
  t = z_6(x_1, a_71, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm p_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_34) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      b_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_71;
  t = strename_0_0(t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_v_33;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_o_34;
  return(t);
}
ATerm substitute_arg_0_0 (ATerm t)
{
  ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL,b_72 = NULL,e_72 = NULL,g_72 = NULL,h_72 = NULL,n_72 = NULL,p_72 = NULL,s_72 = NULL,u_72 = NULL;
  e_72 = t;
  if(match_cons(t, sym__2))
    {
      g_72 = ATgetArgument(t, 0);
      u_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_72;
  if(match_cons(t, sym_VarDec_2))
    {
      h_72 = ATgetArgument(t, 0);
      n_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_72;
  if(match_cons(t, sym_FunType_2))
    {
      p_72 = ATgetArgument(t, 0);
      {
        ATerm q_34 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = p_72;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_34 = ATgetFirst((ATermList) t);
      s_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_72;
  {
    ATerm u_34 = t;
    int v_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_34 = ATgetFirst((ATermList) t);
            ATerm x_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(v_34);
        {
          ATerm b_73 = NULL,d_73 = NULL;
          t = u_72;
          if(match_cons(t, sym_CallT_3))
            {
              x_71 = ATgetArgument(t, 0);
              z_71 = ATgetArgument(t, 1);
              b_72 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = x_71;
          if(match_cons(t, sym_SVar_1))
            {
              y_71 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_71;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = b_72;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_72), (ATerm)ATempty, (ATerm) ATempty);
          b_73 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_34, y_71);
          d_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_72), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_y_34, y_71));
          t = l_14(q_1, b_73, d_73, t);
          t = e_72;
        }
      }
    else
      {
        t = u_34;
        {
          ATerm r_73 = NULL,s_73 = NULL;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_72), (ATerm)ATempty, (ATerm) ATempty);
          r_73 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_34, u_72);
          s_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_72), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_z_34, u_72));
          t = l_14(r_1, r_73, s_73, t);
          t = e_72;
        }
      }
  }
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_o_34;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_v_33;
  return(t);
}
ATerm b_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_35 = ATgetArgument(t, 0);
      if(((ATgetType(a_35) != AT_LIST) || !(ATisEmpty(a_35))))
        _fail(t);
      {
        ATerm d_35 = ATgetArgument(t, 1);
        if(((ATgetType(d_35) != AT_LIST) || !(ATisEmpty(d_35))))
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
  ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_35 = ATgetArgument(t, 0);
      if(((ATgetType(e_35) == AT_LIST) && !(ATisEmpty(e_35))))
        {
          d_74 = ATgetFirst((ATermList) e_35);
          e_74 = (ATerm) ATgetNext((ATermList) e_35);
        }
      else
        _fail(t);
      {
        ATerm f_35 = ATgetArgument(t, 1);
        if(((ATgetType(f_35) == AT_LIST) && !(ATisEmpty(f_35))))
          {
            f_74 = ATgetFirst((ATermList) f_35);
            g_74 = (ATerm) ATgetNext((ATermList) f_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_74, f_74), (ATerm) ATmakeAppl(sym__2, e_74, g_74));
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm l_74 = NULL,p_74 = NULL;
  if(match_cons(t, sym__2))
    {
      l_74 = ATgetArgument(t, 0);
      p_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_74), l_74);
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm h_35 = t;
  int k_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_35 = t;
      int m_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SubsArgCall1_0_0(t);
          ;
          LocalPopChoice(m_35);
        }
      else
        {
          t = l_35;
          t = SubsArgCall2_0_0(t);
        }
      ;
      LocalPopChoice(k_35);
    }
  else
    {
      t = h_35;
    }
  return(t);
}
ATerm substitute_args_0_0 (ATerm t)
{
  ATerm u_73 = NULL,a_74 = NULL,c_74 = NULL;
  ATerm w_1 (ATerm t)
  {
    ATerm a_2 (ATerm t)
    {
      if(match_cons(t, sym__3))
        {
          if(((u_73 != NULL) && (u_73 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            u_73 = ATgetArgument(t, 0);
          if(((a_74 != NULL) && (a_74 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            a_74 = ATgetArgument(t, 1);
          if(((c_74 != NULL) && (c_74 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            c_74 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, u_73, a_74);
      t = genzip_4_0(b_2, d_2, e_2, substitute_arg_0_0, t);
      t = c_74;
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
      ATerm o_35 = ATgetArgument(t, 0);
      if(((ATgetType(o_35) != AT_LIST) || !(ATisEmpty(o_35))))
        _fail(t);
      {
        ATerm p_35 = ATgetArgument(t, 1);
        if(((ATgetType(p_35) != AT_LIST) || !(ATisEmpty(p_35))))
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
      ATerm r_35 = ATgetArgument(t, 0);
      if(((ATgetType(r_35) == AT_LIST) && !(ATisEmpty(r_35))))
        {
          i_2 = ATgetFirst((ATermList) r_35);
          j_2 = (ATerm) ATgetNext((ATermList) r_35);
        }
      else
        _fail(t);
      {
        ATerm t_35 = ATgetArgument(t, 1);
        if(((ATgetType(t_35) == AT_LIST) && !(ATisEmpty(t_35))))
          {
            k_2 = ATgetFirst((ATermList) t_35);
            l_2 = (ATerm) ATgetNext((ATermList) t_35);
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
    ATerm u_35 = t;
    int x_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm y_35 = ATgetArgument(t, 0);
            r_2 = ATgetArgument(t, 1);
            s_2 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(x_35);
        t = (ATerm) ATmakeAppl(sym_SDef_3, u_2, r_2, s_2);
      }
    else
      {
        t = u_35;
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
      ATerm d_36 = ATgetArgument(t, 0);
      if(((ATgetType(d_36) != AT_LIST) || !(ATisEmpty(d_36))))
        _fail(t);
      {
        ATerm f_36 = ATgetArgument(t, 1);
        if(((ATgetType(f_36) != AT_LIST) || !(ATisEmpty(f_36))))
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
      ATerm h_36 = ATgetArgument(t, 0);
      if(((ATgetType(h_36) == AT_LIST) && !(ATisEmpty(h_36))))
        {
          q_3 = ATgetFirst((ATermList) h_36);
          r_3 = (ATerm) ATgetNext((ATermList) h_36);
        }
      else
        _fail(t);
      {
        ATerm i_36 = ATgetArgument(t, 1);
        if(((ATgetType(i_36) == AT_LIST) && !(ATisEmpty(i_36))))
          {
            s_3 = ATgetFirst((ATermList) i_36);
            t_3 = (ATerm) ATgetNext((ATermList) i_36);
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
    ATerm j_36 = t;
    int l_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm p_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(l_36);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, a_4);
      }
    else
      {
        t = j_36;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm q_36 = ATgetArgument(t, 0);
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
      ATerm b_37 = ATgetArgument(t, 0);
      if(((ATgetType(b_37) != AT_LIST) || !(ATisEmpty(b_37))))
        _fail(t);
      {
        ATerm c_37 = ATgetArgument(t, 1);
        if(((ATgetType(c_37) != AT_LIST) || !(ATisEmpty(c_37))))
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
      ATerm d_37 = ATgetArgument(t, 0);
      if(((ATgetType(d_37) == AT_LIST) && !(ATisEmpty(d_37))))
        {
          v_4 = ATgetFirst((ATermList) d_37);
          w_4 = (ATerm) ATgetNext((ATermList) d_37);
        }
      else
        _fail(t);
      {
        ATerm e_37 = ATgetArgument(t, 1);
        if(((ATgetType(e_37) == AT_LIST) && !(ATisEmpty(e_37))))
          {
            x_4 = ATgetFirst((ATermList) e_37);
            y_4 = (ATerm) ATgetNext((ATermList) e_37);
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
    ATerm f_37 = t;
    int k_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm l_37 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(k_37);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, f_5);
      }
    else
      {
        t = f_37;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm p_37 = ATgetArgument(t, 0);
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
      ATerm q_37 = ATgetArgument(t, 0);
      if(((ATgetType(q_37) != AT_LIST) || !(ATisEmpty(q_37))))
        _fail(t);
      {
        ATerm r_37 = ATgetArgument(t, 1);
        if(((ATgetType(r_37) != AT_LIST) || !(ATisEmpty(r_37))))
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
      ATerm u_37 = ATgetArgument(t, 0);
      if(((ATgetType(u_37) == AT_LIST) && !(ATisEmpty(u_37))))
        {
          y_7 = ATgetFirst((ATermList) u_37);
          z_7 = (ATerm) ATgetNext((ATermList) u_37);
        }
      else
        _fail(t);
      {
        ATerm v_37 = ATgetArgument(t, 1);
        if(((ATgetType(v_37) == AT_LIST) && !(ATisEmpty(v_37))))
          {
            a_8 = ATgetFirst((ATermList) v_37);
            b_8 = (ATerm) ATgetNext((ATermList) v_37);
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
    ATerm z_37 = t;
    int a_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm b_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(a_38);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_8);
      }
    else
      {
        t = z_37;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm c_38 = ATgetArgument(t, 0);
            h_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, i_8, h_8);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm r_95 (ATerm), ATerm t)
{
  ATerm w_82 = NULL,x_82 = NULL,z_82 = NULL,a_83 = NULL,c_83 = NULL;
  z_82 = t;
  if(match_cons(t, sym_Let_2))
    {
      a_83 = ATgetArgument(t, 0);
      c_83 = ATgetArgument(t, 1);
      {
        ATerm c_2 = NULL,f_2 = NULL,g_2 = NULL,t_0 = NULL;
        t = SSLgetAnnotations(z_82);
        c_2 = t;
        t = a_83;
        t = r_95(t);
        g_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_83, g_2);
        t = genzip_4_0(o_2, q_2, v_2, w_2, t);
        f_2 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, f_2, c_83);
        t_0 = t;
        t = SSLsetAnnotations(t_0, c_2);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          a_83 = ATgetArgument(t, 0);
          c_83 = ATgetArgument(t, 1);
          w_82 = ATgetArgument(t, 2);
          {
            ATerm j_3 = NULL,n_3 = NULL,o_3 = NULL,x_0 = NULL;
            t = SSLgetAnnotations(z_82);
            j_3 = t;
            t = c_83;
            t = r_95(t);
            o_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, c_83, o_3);
            t = genzip_4_0(x_2, y_2, z_2, a_3, t);
            n_3 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, a_83, n_3, w_82);
            x_0 = t;
            t = SSLsetAnnotations(x_0, j_3);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              a_83 = ATgetArgument(t, 0);
              c_83 = ATgetArgument(t, 1);
              w_82 = ATgetArgument(t, 2);
              x_82 = ATgetArgument(t, 3);
              {
                ATerm n_4 = NULL,s_4 = NULL,t_4 = NULL,v_1 = NULL;
                t = SSLgetAnnotations(z_82);
                n_4 = t;
                t = c_83;
                t = r_95(t);
                t_4 = t;
                t = (ATerm) ATmakeAppl(sym__2, c_83, t_4);
                t = genzip_4_0(b_3, c_3, d_3, e_3, t);
                s_4 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, a_83, s_4, w_82, x_82);
                v_1 = t;
                t = SSLsetAnnotations(v_1, n_4);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  a_83 = ATgetArgument(t, 0);
                  c_83 = ATgetArgument(t, 1);
                  w_82 = ATgetArgument(t, 2);
                  x_82 = ATgetArgument(t, 3);
                  {
                    ATerm h_7 = NULL,v_7 = NULL,w_7 = NULL,y_1 = NULL;
                    t = SSLgetAnnotations(z_82);
                    h_7 = t;
                    t = c_83;
                    t = r_95(t);
                    w_7 = t;
                    t = (ATerm) ATmakeAppl(sym__2, c_83, w_7);
                    t = genzip_4_0(f_3, g_3, h_3, i_3, t);
                    v_7 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, a_83, v_7, w_82, x_82);
                    y_1 = t;
                    t = SSLsetAnnotations(y_1, h_7);
                  }
                }
              else
                {
                  ATerm w_8 = NULL,z_8 = NULL,k_5 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      a_83 = ATgetArgument(t, 0);
                      c_83 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_82);
                  w_8 = t;
                  t = a_83;
                  t = r_95(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      z_8 = ATgetFirst((ATermList) t);
                      {
                        ATerm d_38 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, z_8, c_83);
                  k_5 = t;
                  t = SSLsetAnnotations(k_5, w_8);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm s_95 (ATerm), ATerm t_95 (ATerm), ATerm u_95 (ATerm), ATerm t)
{
  ATerm w_85 = NULL,x_85 = NULL,y_85 = NULL,a_86 = NULL,b_86 = NULL;
  y_85 = t;
  if(match_cons(t, sym_Let_2))
    {
      a_86 = ATgetArgument(t, 0);
      b_86 = ATgetArgument(t, 1);
      {
        ATerm i_9 = NULL,l_9 = NULL,m_9 = NULL,r_5 = NULL;
        t = SSLgetAnnotations(y_85);
        i_9 = t;
        t = a_86;
        t = s_95(t);
        l_9 = t;
        t = b_86;
        t = s_95(t);
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
          a_86 = ATgetArgument(t, 0);
          b_86 = ATgetArgument(t, 1);
          w_85 = ATgetArgument(t, 2);
          {
            ATerm v_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,s_5 = NULL;
            t = SSLgetAnnotations(y_85);
            v_9 = t;
            t = a_86;
            t = u_95(t);
            z_9 = t;
            t = b_86;
            t = u_95(t);
            a_10 = t;
            t = w_85;
            t = s_95(t);
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
              a_86 = ATgetArgument(t, 0);
              b_86 = ATgetArgument(t, 1);
              w_85 = ATgetArgument(t, 2);
              x_85 = ATgetArgument(t, 3);
              {
                ATerm n_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,t_5 = NULL;
                t = SSLgetAnnotations(y_85);
                n_10 = t;
                t = a_86;
                t = u_95(t);
                z_10 = t;
                t = b_86;
                t = u_95(t);
                a_11 = t;
                t = w_85;
                t = u_95(t);
                b_11 = t;
                t = x_85;
                t = s_95(t);
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
                  a_86 = ATgetArgument(t, 0);
                  b_86 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(y_85);
              v_11 = t;
              t = a_86;
              t = u_95(t);
              z_11 = t;
              t = b_86;
              t = s_95(t);
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
  ATerm i_86 = NULL;
  ATerm e_38 = t;
  int f_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          i_86 = ATgetArgument(t, 0);
          {
            ATerm g_38 = ATgetArgument(t, 1);
          }
          {
            ATerm h_38 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_38);
      t = i_86;
    }
  else
    {
      t = e_38;
      if(match_cons(t, sym_SDefT_4))
        {
          i_86 = ATgetArgument(t, 0);
          {
            ATerm j_38 = ATgetArgument(t, 1);
          }
          {
            ATerm k_38 = ATgetArgument(t, 2);
          }
          {
            ATerm l_38 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = i_86;
    }
  return(t);
}
ATerm p_13 (ATerm u_22, ATerm t_22, ATerm t)
{
  t = u_22;
  t = map_1_0(k_3, t);
  return(t);
}
ATerm SVar_1_0 (ATerm z_84 (ATerm), ATerm t)
{
  ATerm q_86 = NULL,r_86 = NULL,s_86 = NULL,u_86 = NULL,a_6 = NULL;
  u_86 = t;
  if(match_cons(t, sym_SVar_1))
    {
      r_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_86);
  q_86 = t;
  t = r_86;
  t = z_84(t);
  s_86 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, s_86);
  a_6 = t;
  t = SSLsetAnnotations(a_6, q_86);
  return(t);
}
ATerm b_14 (ATerm c_110 (ATerm), ATerm d_110 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm u_39, ATerm t_39, ATerm s_39, ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    ATerm w_86 = NULL;
    w_86 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_86, s_39);
    t = c_110(t);
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    ATerm x_86 = NULL;
    x_86 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_86, t_39);
    t = c_110(t);
    return(t);
  }
  t = u_39;
  t = d_110(l_3, m_3, _id, t);
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
      ATerm m_38 = ATgetArgument(t, 0);
      if(((ATgetType(m_38) != AT_LIST) || !(ATisEmpty(m_38))))
        _fail(t);
      {
        ATerm n_38 = ATgetArgument(t, 1);
        if(((ATgetType(n_38) != AT_LIST) || !(ATisEmpty(n_38))))
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
  ATerm i_87 = NULL,k_87 = NULL,l_87 = NULL,n_87 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_38 = ATgetArgument(t, 0);
      if(((ATgetType(o_38) == AT_LIST) && !(ATisEmpty(o_38))))
        {
          i_87 = ATgetFirst((ATermList) o_38);
          k_87 = (ATerm) ATgetNext((ATermList) o_38);
        }
      else
        _fail(t);
      {
        ATerm q_38 = ATgetArgument(t, 1);
        if(((ATgetType(q_38) == AT_LIST) && !(ATisEmpty(q_38))))
          {
            l_87 = ATgetFirst((ATermList) q_38);
            n_87 = (ATerm) ATgetNext((ATermList) q_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_87, l_87), (ATerm) ATmakeAppl(sym__2, k_87, n_87));
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm o_87 = NULL,p_87 = NULL;
  if(match_cons(t, sym__2))
    {
      o_87 = ATgetArgument(t, 0);
      p_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_87), o_87);
  return(t);
}
ATerm c_14 (ATerm w_109 (ATerm), ATerm x_109 (ATerm (ATerm), ATerm), ATerm m_39, ATerm p_39, ATerm t)
{
  ATerm a_87 = NULL,b_87 = NULL,d_87 = NULL,e_87 = NULL,h_87 = NULL;
  t = m_39;
  t = w_109(t);
  a_87 = t;
  t = map_1_0(new_0_0, t);
  b_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_87, b_87);
  t = genzip_4_0(p_3, w_3, y_3, _id, t);
  h_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_87, p_39);
  t = conc_0_0(t);
  d_87 = t;
  t = m_39;
  {
    ATerm b_4 (ATerm t)
    {
      t = b_87;
      return(t);
    }
    t = x_109(b_4, t);
    e_87 = t;
    t = (ATerm) ATmakeAppl(sym__3, e_87, p_39, d_87);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm u_87 = NULL,v_87 = NULL,w_87 = NULL,x_87 = NULL,a_88 = NULL,b_88 = NULL,c_88 = NULL;
  w_87 = t;
  if(match_cons(t, sym__2))
    {
      x_87 = ATgetArgument(t, 0);
      a_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_88;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_88 = ATgetFirst((ATermList) t);
      c_88 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_88;
  if(match_cons(t, sym__2))
    {
      u_87 = ATgetArgument(t, 0);
      v_87 = ATgetArgument(t, 1);
      {
        ATerm r_38 = t;
        int s_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_87;
            if((x_87 != t))
              {
                _fail(t);
              }
            t = v_87;
            ;
            LocalPopChoice(s_38);
          }
        else
          {
            t = r_38;
            t = (ATerm) ATmakeAppl(sym__2, x_87, c_88);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, x_87, c_88);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm k_110 (ATerm), ATerm t)
{
  ATerm y_88 (ATerm t)
  {
    ATerm t_38 = t;
    int v_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_110(t);
        ;
        LocalPopChoice(v_38);
      }
    else
      {
        t = t_38;
        {
          ATerm v_88 = NULL,w_88 = NULL,x_88 = NULL;
          ATerm c_4 (ATerm t)
          {
            ATerm k_12 = NULL;
            k_12 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_12, not_null(x_88));
            t = y_88(t);
            return(t);
          }
          v_88 = t;
          if(match_cons(t, sym__2))
            {
              w_88 = ATgetArgument(t, 0);
              if(((x_88 != NULL) && (x_88 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                x_88 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_88;
          t = SRTS_all(c_4, t);
        }
      }
    return(t);
  }
  t = y_88(t);
  return(t);
}
ATerm rename_4_0 (ATerm r_109 (ATerm (ATerm), ATerm), ATerm s_109 (ATerm), ATerm t_109 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm u_109 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm c_89 = NULL;
  ATerm e_90 (ATerm t)
  {
    ATerm d_4 (ATerm t)
    {
      ATerm r_89 = NULL,x_89 = NULL,y_89 = NULL;
      r_89 = t;
      if(match_cons(t, sym__2))
        {
          x_89 = ATgetArgument(t, 0);
          y_89 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm w_38 = t;
        int x_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_4 (ATerm t)
            {
              ATerm d_90 = NULL;
              d_90 = t;
              t = (ATerm) ATmakeAppl(sym__2, d_90, y_89);
              t = lookup_0_0(t);
              return(t);
            }
            t = x_89;
            t = r_109(e_4, t);
            ;
            LocalPopChoice(x_38);
          }
        else
          {
            t = w_38;
            {
              ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
              t = r_89;
              t = c_14(s_109, u_109, x_89, y_89, t);
              if(match_cons(t, sym__3))
                {
                  t_12 = ATgetArgument(t, 0);
                  u_12 = ATgetArgument(t, 1);
                  v_12 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = b_14(e_90, t_109, t_12, u_12, v_12, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(d_4, t);
    return(t);
  }
  c_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_89, (ATerm) ATempty);
  t = e_90(t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_39 = ATgetArgument(t, 0);
      if(((ATgetType(a_39) != AT_LIST) || !(ATisEmpty(a_39))))
        _fail(t);
      {
        ATerm b_39 = ATgetArgument(t, 1);
        if(((ATgetType(b_39) != AT_LIST) || !(ATisEmpty(b_39))))
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
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_39 = ATgetArgument(t, 0);
      if(((ATgetType(c_39) == AT_LIST) && !(ATisEmpty(c_39))))
        {
          p_19 = ATgetFirst((ATermList) c_39);
          q_19 = (ATerm) ATgetNext((ATermList) c_39);
        }
      else
        _fail(t);
      {
        ATerm d_39 = ATgetArgument(t, 1);
        if(((ATgetType(d_39) == AT_LIST) && !(ATisEmpty(d_39))))
          {
            r_19 = ATgetFirst((ATermList) d_39);
            s_19 = (ATerm) ATgetNext((ATermList) d_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_19, r_19), (ATerm) ATmakeAppl(sym__2, q_19, s_19));
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL;
  if(match_cons(t, sym__2))
    {
      t_19 = ATgetArgument(t, 0);
      u_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_19), t_19);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm a_20 = NULL,f_20 = NULL,g_20 = NULL;
  if(match_cons(t, sym__2))
    {
      a_20 = ATgetArgument(t, 0);
      g_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_20;
  {
    ATerm f_39 = t;
    int g_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_39);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_20);
      }
    else
      {
        t = f_39;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm j_39 = ATgetArgument(t, 0);
            f_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, g_20, f_20);
      }
  }
  return(t);
}
ATerm j_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_39 = ATgetArgument(t, 0);
      if(((ATgetType(k_39) != AT_LIST) || !(ATisEmpty(k_39))))
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
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,r_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_39 = ATgetArgument(t, 0);
      if(((ATgetType(r_39) == AT_LIST) && !(ATisEmpty(r_39))))
        {
          n_21 = ATgetFirst((ATermList) r_39);
          o_21 = (ATerm) ATgetNext((ATermList) r_39);
        }
      else
        _fail(t);
      {
        ATerm v_39 = ATgetArgument(t, 1);
        if(((ATgetType(v_39) == AT_LIST) && !(ATisEmpty(v_39))))
          {
            p_21 = ATgetFirst((ATermList) v_39);
            r_21 = (ATerm) ATgetNext((ATermList) v_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_21, p_21), (ATerm) ATmakeAppl(sym__2, o_21, r_21));
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL;
  if(match_cons(t, sym__2))
    {
      s_21 = ATgetArgument(t, 0);
      t_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_21), s_21);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm v_21 = NULL,e_22 = NULL,f_22 = NULL;
  if(match_cons(t, sym__2))
    {
      v_21 = ATgetArgument(t, 0);
      f_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_21;
  {
    ATerm w_39 = t;
    int x_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm z_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(x_39);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, f_22);
      }
    else
      {
        t = w_39;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm a_40 = ATgetArgument(t, 0);
            e_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, f_22, e_22);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm n_95 (ATerm), ATerm t)
{
  ATerm g_94 = NULL,h_94 = NULL,i_94 = NULL,j_94 = NULL,k_94 = NULL;
  g_94 = t;
  if(match_cons(t, sym_Scope_2))
    {
      h_94 = ATgetArgument(t, 0);
      i_94 = ATgetArgument(t, 1);
      {
        ATerm f_13 = NULL,j_13 = NULL,i_29 = NULL;
        t = SSLgetAnnotations(g_94);
        f_13 = t;
        t = h_94;
        t = n_95(t);
        j_13 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, j_13, i_94);
        i_29 = t;
        t = SSLsetAnnotations(i_29, f_13);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          h_94 = ATgetArgument(t, 0);
          i_94 = ATgetArgument(t, 1);
          j_94 = ATgetArgument(t, 2);
          k_94 = ATgetArgument(t, 3);
          {
            ATerm t_18 = NULL,y_18 = NULL,i_19 = NULL,p_29 = NULL;
            t = SSLgetAnnotations(g_94);
            t_18 = t;
            t = j_94;
            t = n_95(t);
            i_19 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_94, i_19);
            t = genzip_4_0(f_4, g_4, h_4, i_4, t);
            y_18 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, h_94, i_94, y_18, k_94);
            p_29 = t;
            t = SSLsetAnnotations(p_29, t_18);
          }
        }
      else
        {
          ATerm d_21 = NULL,j_21 = NULL,k_21 = NULL,r_29 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              h_94 = ATgetArgument(t, 0);
              i_94 = ATgetArgument(t, 1);
              j_94 = ATgetArgument(t, 2);
              k_94 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_94);
          d_21 = t;
          t = j_94;
          t = n_95(t);
          k_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_94, k_21);
          t = genzip_4_0(j_4, k_4, l_4, m_4, t);
          j_21 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, h_94, i_94, j_21, k_94);
          r_29 = t;
          t = SSLsetAnnotations(r_29, d_21);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm o_95 (ATerm), ATerm p_95 (ATerm), ATerm q_95 (ATerm), ATerm t)
{
  ATerm j_98 = NULL,k_98 = NULL,o_98 = NULL,p_98 = NULL,q_98 = NULL;
  p_98 = t;
  if(match_cons(t, sym_Scope_2))
    {
      q_98 = ATgetArgument(t, 0);
      j_98 = ATgetArgument(t, 1);
      {
        ATerm a_23 = NULL,g_23 = NULL,h_23 = NULL,j_30 = NULL;
        t = SSLgetAnnotations(p_98);
        a_23 = t;
        t = q_98;
        t = q_95(t);
        g_23 = t;
        t = j_98;
        t = o_95(t);
        h_23 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, g_23, h_23);
        j_30 = t;
        t = SSLsetAnnotations(j_30, a_23);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          q_98 = ATgetArgument(t, 0);
          j_98 = ATgetArgument(t, 1);
          k_98 = ATgetArgument(t, 2);
          o_98 = ATgetArgument(t, 3);
          {
            ATerm v_23 = NULL,c_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,k_30 = NULL;
            t = SSLgetAnnotations(p_98);
            v_23 = t;
            t = q_98;
            t = q_95(t);
            c_24 = t;
            t = j_98;
            t = q_95(t);
            m_24 = t;
            t = k_98;
            t = q_95(t);
            n_24 = t;
            t = o_98;
            t = o_95(t);
            o_24 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, c_24, m_24, n_24, o_24);
            k_30 = t;
            t = SSLsetAnnotations(k_30, v_23);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              q_98 = ATgetArgument(t, 0);
              j_98 = ATgetArgument(t, 1);
              k_98 = ATgetArgument(t, 2);
              o_98 = ATgetArgument(t, 3);
              {
                ATerm t_25 = NULL,z_25 = NULL,a_26 = NULL,j_26 = NULL,k_26 = NULL,l_30 = NULL;
                t = SSLgetAnnotations(p_98);
                t_25 = t;
                t = q_98;
                t = q_95(t);
                z_25 = t;
                t = j_98;
                t = q_95(t);
                a_26 = t;
                t = k_98;
                t = q_95(t);
                j_26 = t;
                t = o_98;
                t = o_95(t);
                k_26 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, z_25, a_26, j_26, k_26);
                l_30 = t;
                t = SSLsetAnnotations(l_30, t_25);
              }
            }
          else
            {
              ATerm c_27 = NULL,i_27 = NULL,v_30 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  q_98 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(p_98);
              c_27 = t;
              t = q_98;
              t = o_95(t);
              i_27 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, i_27);
              v_30 = t;
              t = SSLsetAnnotations(v_30, c_27);
            }
        }
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm y_98 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_98);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm b_40 = t;
  int c_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_40);
    }
  else
    {
      t = b_40;
      {
        ATerm a_99 = NULL,b_99 = NULL,c_99 = NULL,d_99 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            a_99 = ATgetArgument(t, 0);
            t = a_99;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                a_99 = ATgetArgument(t, 0);
                b_99 = ATgetArgument(t, 1);
                c_99 = ATgetArgument(t, 2);
                d_99 = ATgetArgument(t, 3);
                t = c_99;
                t = map_1_0(q_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    a_99 = ATgetArgument(t, 0);
                    b_99 = ATgetArgument(t, 1);
                    c_99 = ATgetArgument(t, 2);
                    d_99 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = c_99;
                t = map_1_0(r_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm q_99 = NULL;
  ATerm e_40 = t;
  int f_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_99 = ATgetArgument(t, 0);
          {
            ATerm g_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_40);
      t = q_99;
    }
  else
    {
      t = e_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_99 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_99;
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm g_100 = NULL;
  ATerm h_40 = t;
  int i_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_100 = ATgetArgument(t, 0);
          {
            ATerm j_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_40);
      t = g_100;
    }
  else
    {
      t = h_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_100 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_100;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(o_4, p_4, tboundin_3_0, t);
  return(t);
}
ATerm v_13 (ATerm b_105 (ATerm), ATerm d_31, ATerm c_31, ATerm t)
{
  ATerm y_100 (ATerm t)
  {
    ATerm t_100 = NULL,u_100 = NULL,v_100 = NULL;
    t_100 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_31;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_100 = ATgetFirst((ATermList) t);
            v_100 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm k_40 = t;
          int l_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_100;
              {
                ATerm u_4 (ATerm t)
                {
                  t = c_31;
                  return(t);
                }
                t = w_13(b_105, u_4, u_100, v_100, t);
                t = y_100(t);
              }
              ;
              LocalPopChoice(l_40);
            }
          else
            {
              t = k_40;
              {
                ATerm a_28 = NULL,e_28 = NULL,l_31 = NULL;
                t = SSLgetAnnotations(t_100);
                a_28 = t;
                t = v_100;
                t = y_100(t);
                e_28 = t;
                t = (ATerm) ATinsert(CheckATermList(e_28), u_100);
                l_31 = t;
                t = SSLsetAnnotations(l_31, a_28);
              }
            }
        }
      }
    return(t);
  }
  t = d_31;
  t = y_100(t);
  return(t);
}
ATerm w_13 (ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm h_31, ATerm g_31, ATerm t)
{
  t = f_105(t);
  {
    ATerm b_5 (ATerm t)
    {
      ATerm f_101 = NULL;
      f_101 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_31, f_101);
      t = e_105(t);
      return(t);
    }
    t = fetch_1_0(b_5, t);
    t = g_31;
  }
  return(t);
}
ATerm x_13 (ATerm w_104 (ATerm), ATerm b_31, ATerm a_31, ATerm t)
{
  ATerm w_101 (ATerm t)
  {
    ATerm q_101 = NULL,r_101 = NULL,s_101 = NULL;
    q_101 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_101;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_101 = ATgetFirst((ATermList) t);
            s_101 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm m_40 = t;
          int o_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_101;
              {
                ATerm d_5 (ATerm t)
                {
                  t = a_31;
                  return(t);
                }
                t = w_13(w_104, d_5, r_101, s_101, t);
                t = w_101(t);
              }
              ;
              LocalPopChoice(o_40);
            }
          else
            {
              t = m_40;
              {
                ATerm q_28 = NULL,t_28 = NULL,o_31 = NULL;
                t = SSLgetAnnotations(q_101);
                q_28 = t;
                t = s_101;
                t = w_101(t);
                t_28 = t;
                t = (ATerm) ATinsert(CheckATermList(t_28), r_101);
                o_31 = t;
                t = SSLsetAnnotations(o_31, q_28);
              }
            }
        }
      }
    return(t);
  }
  t = b_31;
  t = w_101(t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_40 = ATgetArgument(t, 0);
      if(((ATgetType(p_40) != AT_LIST) || !(ATisEmpty(p_40))))
        _fail(t);
      {
        ATerm q_40 = ATgetArgument(t, 1);
        if(((ATgetType(q_40) != AT_LIST) || !(ATisEmpty(q_40))))
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
  ATerm e_102 = NULL,f_102 = NULL,g_102 = NULL,h_102 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_40 = ATgetArgument(t, 0);
      if(((ATgetType(r_40) == AT_LIST) && !(ATisEmpty(r_40))))
        {
          e_102 = ATgetFirst((ATermList) r_40);
          f_102 = (ATerm) ATgetNext((ATermList) r_40);
        }
      else
        _fail(t);
      {
        ATerm s_40 = ATgetArgument(t, 1);
        if(((ATgetType(s_40) == AT_LIST) && !(ATisEmpty(s_40))))
          {
            g_102 = ATgetFirst((ATermList) s_40);
            h_102 = (ATerm) ATgetNext((ATermList) s_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_102, g_102), (ATerm) ATmakeAppl(sym__2, f_102, h_102));
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm i_102 = NULL,j_102 = NULL;
  if(match_cons(t, sym__2))
    {
      i_102 = ATgetArgument(t, 0);
      j_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_102), i_102);
  return(t);
}
ATerm z_13 (ATerm o_543, ATerm t_543, ATerm w_53, ATerm t)
{
  ATerm z_101 = NULL,a_102 = NULL,b_102 = NULL,c_102 = NULL;
  t = SSL_explode_term(t_543);
  if(match_cons(t, sym__2))
    {
      z_101 = ATgetArgument(t, 0);
      b_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(o_543);
  if(match_cons(t, sym__2))
    {
      if((z_101 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      a_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_102, b_102);
  t = genzip_4_0(g_5, h_5, i_5, _id, t);
  c_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_102, w_53);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm f_114 (ATerm), ATerm g_114 (ATerm), ATerm t)
{
  ATerm l_102 (ATerm t)
  {
    ATerm u_40 = t;
    int v_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_114(t);
        ;
        LocalPopChoice(v_40);
      }
    else
      {
        t = u_40;
        t = g_114(t);
        t = l_102(t);
      }
    return(t);
  }
  t = l_102(t);
  return(t);
}
ATerm for_3_0 (ATerm i_114 (ATerm), ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm t)
{
  t = i_114(t);
  t = while_not_2_0(j_114, k_114, t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm v_102 = NULL;
  v_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, v_102);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm w_102 = NULL,x_102 = NULL,a_103 = NULL,b_103 = NULL,n_32 = NULL;
  b_103 = t;
  if(match_cons(t, sym__2))
    {
      x_102 = ATgetArgument(t, 0);
      a_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_103);
  w_102 = t;
  t = a_103;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_102, a_103);
  n_32 = t;
  t = SSLsetAnnotations(n_32, w_102);
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm w_103 = NULL,x_103 = NULL,y_103 = NULL,z_103 = NULL,a_104 = NULL;
  w_103 = t;
  if(match_cons(t, sym__2))
    {
      x_103 = ATgetArgument(t, 0);
      y_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_103;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_103 = ATgetFirst((ATermList) t);
      a_104 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_40 = t;
        int y_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_104(x_103, y_103, w_103, t);
            ;
            LocalPopChoice(y_40);
          }
        else
          {
            t = w_40;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_103), z_103), a_104);
          }
      }
    }
  else
    {
      t = m_104(x_103, y_103, w_103, t);
    }
  return(t);
}
ATerm m_104 (ATerm c_103, ATerm d_103, ATerm g_103, ATerm t)
{
  ATerm h_103 = NULL,k_103 = NULL,x_32 = NULL,n_103 = NULL,o_103 = NULL,p_103 = NULL,q_103 = NULL;
  t = SSLgetAnnotations(g_103);
  h_103 = t;
  t = d_103;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_103 = ATgetFirst((ATermList) t);
      q_103 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_103;
  if(match_cons(t, sym__2))
    {
      o_103 = ATgetArgument(t, 0);
      p_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_40 = t;
    int a_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_103;
        if((o_103 != t))
          {
            _fail(t);
          }
        t = q_103;
        ;
        LocalPopChoice(a_41);
      }
    else
      {
        t = z_40;
        t = d_103;
        t = z_13(o_103, p_103, q_103, t);
      }
    k_103 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_103, k_103);
    x_32 = t;
    t = SSLsetAnnotations(x_32, h_103);
  }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm l_104 = NULL;
  if(match_cons(t, sym__2))
    {
      l_104 = ATgetArgument(t, 0);
      if((l_104 != ATgetArgument(t, 1)))
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
  ATerm b_41 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(j_5, l_5, m_5, t);
      ;
      LocalPopChoice(c_41);
    }
  else
    {
      t = b_41;
      {
        ATerm f_104 = NULL,h_104 = NULL,i_104 = NULL;
        f_104 = t;
        if(match_cons(t, sym__2))
          {
            h_104 = ATgetArgument(t, 0);
            i_104 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_104;
        t = x_13(n_5, h_104, i_104, t);
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
  ATerm s_29 = NULL,t_29 = NULL;
  if(match_cons(t, sym__2))
    {
      s_29 = ATgetArgument(t, 0);
      t_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_13(w_5, s_29, t_29, t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm u_29 = NULL;
  if(match_cons(t, sym__2))
    {
      u_29 = ATgetArgument(t, 0);
      if((u_29 != ATgetArgument(t, 1)))
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
  ATerm g_30 = NULL,h_30 = NULL;
  if(match_cons(t, sym__2))
    {
      g_30 = ATgetArgument(t, 0);
      h_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_13(z_5, g_30, h_30, t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm i_30 = NULL;
  if(match_cons(t, sym__2))
    {
      i_30 = ATgetArgument(t, 0);
      if((i_30 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm w_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm g_105 (ATerm t)
  {
    ATerm d_41 = t;
    int e_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_111(t);
        ;
        LocalPopChoice(e_41);
      }
    else
      {
        t = d_41;
        {
          ATerm f_41 = t;
          int h_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_104 = NULL,p_104 = NULL,e_29 = NULL,h_29 = NULL;
              o_104 = t;
              t = v_111(t);
              p_104 = t;
              t = o_104;
              {
                ATerm o_5 (ATerm t)
                {
                  ATerm r_104 = NULL;
                  t = g_105(t);
                  r_104 = t;
                  t = (ATerm) ATmakeAppl(sym__2, r_104, p_104);
                  t = diff_0_0(t);
                  return(t);
                }
                t = w_111(o_5, g_105, p_5, t);
                h_29 = t;
                t = SSL_explode_term(h_29);
                if(match_cons(t, sym__2))
                  {
                    ATerm i_41 = ATgetArgument(t, 0);
                    e_29 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_29;
                t = foldr_3_0(q_5, v_5, _id, t);
              }
              ;
              LocalPopChoice(h_41);
            }
          else
            {
              t = f_41;
              {
                ATerm y_29 = NULL,z_29 = NULL;
                z_29 = t;
                t = SSL_explode_term(z_29);
                if(match_cons(t, sym__2))
                  {
                    ATerm j_41 = ATgetArgument(t, 0);
                    y_29 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_29;
                t = foldr_3_0(x_5, y_5, g_105, t);
              }
            }
        }
      }
    return(t);
  }
  t = g_105(t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm z_105 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_105);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm k_41 = t;
  int l_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(l_41);
    }
  else
    {
      t = k_41;
      {
        ATerm b_106 = NULL,c_106 = NULL,d_106 = NULL,e_106 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            b_106 = ATgetArgument(t, 0);
            t = b_106;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                b_106 = ATgetArgument(t, 0);
                c_106 = ATgetArgument(t, 1);
                d_106 = ATgetArgument(t, 2);
                e_106 = ATgetArgument(t, 3);
                t = d_106;
                t = map_1_0(h_6, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    b_106 = ATgetArgument(t, 0);
                    c_106 = ATgetArgument(t, 1);
                    d_106 = ATgetArgument(t, 2);
                    e_106 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = d_106;
                t = map_1_0(k_6, t);
              }
          }
      }
    }
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm n_106 = NULL;
  ATerm m_41 = t;
  int n_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_106 = ATgetArgument(t, 0);
          {
            ATerm o_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_41);
      t = n_106;
    }
  else
    {
      t = m_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_106 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_106;
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm w_106 = NULL;
  ATerm q_41 = t;
  int r_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_106 = ATgetArgument(t, 0);
          {
            ATerm s_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_41);
      t = w_106;
    }
  else
    {
      t = q_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_106 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_106;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm s_105 = NULL,w_105 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      w_105 = ATgetArgument(t, 0);
      t = w_105;
      if(match_cons(t, sym_Rule_3))
        {
          s_105 = ATgetArgument(t, 0);
          {
            ATerm w_41 = ATgetArgument(t, 1);
          }
          {
            ATerm x_41 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = s_105;
      t = free_vars_3_0(b_6, d_6, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          w_105 = ATgetArgument(t, 0);
          {
            ATerm y_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = w_105;
    }
  return(t);
}
ATerm Var_1_0 (ATerm q_81 (ATerm), ATerm t)
{
  ATerm a_107 = NULL,b_107 = NULL,c_107 = NULL,d_107 = NULL,s_35 = NULL;
  d_107 = t;
  if(match_cons(t, sym_Var_1))
    {
      b_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_107);
  a_107 = t;
  t = b_107;
  t = q_81(t);
  c_107 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_107);
  s_35 = t;
  t = SSLsetAnnotations(s_35, a_107);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm z_41 = t;
  int a_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(a_42);
    }
  else
    {
      t = z_41;
      {
        ATerm n_107 = NULL,o_107 = NULL,u_107 = NULL,v_107 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            n_107 = ATgetArgument(t, 0);
            o_107 = ATgetArgument(t, 1);
            u_107 = ATgetArgument(t, 2);
            v_107 = ATgetArgument(t, 3);
            t = u_107;
            t = map_1_0(t_6, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                n_107 = ATgetArgument(t, 0);
                o_107 = ATgetArgument(t, 1);
                u_107 = ATgetArgument(t, 2);
                v_107 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = u_107;
            t = map_1_0(w_6, t);
          }
      }
    }
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm c_108 = NULL;
  ATerm b_42 = t;
  int c_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_108 = ATgetArgument(t, 0);
          {
            ATerm d_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_42);
      t = c_108;
    }
  else
    {
      t = b_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_108 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_108;
    }
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm l_108 = NULL;
  ATerm e_42 = t;
  int f_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_108 = ATgetArgument(t, 0);
          {
            ATerm g_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_42);
      t = l_108;
    }
  else
    {
      t = e_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_108 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_108;
    }
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm o_108 = NULL,p_108 = NULL,q_108 = NULL,r_108 = NULL,s_108 = NULL;
  o_108 = t;
  if(match_cons(t, sym_Let_2))
    {
      p_108 = ATgetArgument(t, 0);
      q_108 = ATgetArgument(t, 1);
      t = o_108;
      t = p_13(p_108, q_108, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          p_108 = ATgetArgument(t, 0);
          q_108 = ATgetArgument(t, 1);
          r_108 = ATgetArgument(t, 2);
          t = q_108;
          t = map_1_0(g_7, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              p_108 = ATgetArgument(t, 0);
              q_108 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, p_108);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  p_108 = ATgetArgument(t, 0);
                  q_108 = ATgetArgument(t, 1);
                  r_108 = ATgetArgument(t, 2);
                  s_108 = ATgetArgument(t, 3);
                  t = q_108;
                  t = map_1_0(i_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_108 = ATgetArgument(t, 0);
                      q_108 = ATgetArgument(t, 1);
                      r_108 = ATgetArgument(t, 2);
                      s_108 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_108;
                  t = map_1_0(r_7, t);
                }
            }
        }
    }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm g_109 = NULL;
  ATerm h_42 = t;
  int i_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_109 = ATgetArgument(t, 0);
          {
            ATerm j_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_42);
      t = g_109;
    }
  else
    {
      t = h_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_109 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_109;
    }
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm y_109 = NULL;
  ATerm k_42 = t;
  int l_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_109 = ATgetArgument(t, 0);
          {
            ATerm n_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_42);
      t = y_109;
    }
  else
    {
      t = k_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_109 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_109;
    }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm j_110 = NULL;
  ATerm o_42 = t;
  int p_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_110 = ATgetArgument(t, 0);
          {
            ATerm q_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_42);
      t = j_110;
    }
  else
    {
      t = o_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_110;
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
  ATerm e_34 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      e_34 = ATgetArgument(t, 0);
      {
        ATerm r_42 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = e_34;
  return(t);
}
ATerm u_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_42 = ATgetArgument(t, 0);
      if(((ATgetType(s_42) != AT_LIST) || !(ATisEmpty(s_42))))
        _fail(t);
      {
        ATerm t_42 = ATgetArgument(t, 1);
        if(((ATgetType(t_42) != AT_LIST) || !(ATisEmpty(t_42))))
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
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_42 = ATgetArgument(t, 0);
      if(((ATgetType(u_42) == AT_LIST) && !(ATisEmpty(u_42))))
        {
          f_34 = ATgetFirst((ATermList) u_42);
          g_34 = (ATerm) ATgetNext((ATermList) u_42);
        }
      else
        _fail(t);
      {
        ATerm v_42 = ATgetArgument(t, 1);
        if(((ATgetType(v_42) == AT_LIST) && !(ATisEmpty(v_42))))
          {
            h_34 = ATgetFirst((ATermList) v_42);
            i_34 = (ATerm) ATgetNext((ATermList) v_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_34, h_34), (ATerm) ATmakeAppl(sym__2, g_34, i_34));
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL;
  if(match_cons(t, sym__2))
    {
      j_34 = ATgetArgument(t, 0);
      k_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_34), j_34);
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL;
  if(match_cons(t, sym__2))
    {
      l_34 = ATgetArgument(t, 0);
      m_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_34), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_34))));
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = term_x_42;
  return(t);
}
ATerm InlineCall_0_0 (ATerm t)
{
  ATerm i_112 = NULL,j_112 = NULL,k_112 = NULL,l_112 = NULL,m_112 = NULL;
  i_112 = t;
  if(match_cons(t, sym_CallT_3))
    {
      j_112 = ATgetArgument(t, 0);
      l_112 = ATgetArgument(t, 1);
      m_112 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_112;
  if(match_cons(t, sym_SVar_1))
    {
      k_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_42 = t;
    int a_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_32 = NULL,m_32 = NULL;
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_112), (ATerm)ATempty, (ATerm) ATempty);
        l_32 = t;
        t = term_x_42;
        m_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_42, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_112), (ATerm)ATempty, (ATerm) ATempty));
        t = z_6(m_32, l_32, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(a_43);
      }
    else
      {
        t = y_42;
        {
          ATerm b_43 = t;
          int c_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_32 = NULL,w_32 = NULL;
              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_112), (ATerm)ATempty, (ATerm) ATempty);
              v_32 = t;
              t = term_x_42;
              w_32 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_x_42, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_112), (ATerm)ATempty, (ATerm) ATempty));
              t = z_6(w_32, v_32, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(c_43);
            }
          else
            {
              t = b_43;
              {
                ATerm d_43 = t;
                int g_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_33 = NULL,h_33 = NULL,j_33 = NULL,k_33 = NULL,p_33 = NULL,x_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,s_34 = NULL,t_34 = NULL;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_112), (ATerm)ATempty, (ATerm) ATempty);
                    s_34 = t;
                    t = term_x_42;
                    t_34 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_x_42, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_112), (ATerm)ATempty, (ATerm) ATempty));
                    t = z_6(t_34, s_34, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm i_43 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) i_43) != ATmakeSymbol("d_0", 0, ATtrue)))
                          _fail(t);
                        g_33 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = g_33;
                    t = strename_0_0(t);
                    if(match_cons(t, sym_SDefT_4))
                      {
                        if((k_112 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        h_33 = ATgetArgument(t, 1);
                        k_33 = ATgetArgument(t, 2);
                        j_33 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__3, h_33, l_112, j_33);
                    t = substitute_args_0_0(t);
                    x_33 = t;
                    t = k_33;
                    t = map_1_0(t_7, t);
                    p_33 = t;
                    t = (ATerm) ATmakeAppl(sym__2, m_112, p_33);
                    t = genzip_4_0(u_7, x_7, e_8, g_8, t);
                    a_34 = t;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_112), (ATerm)ATempty, (ATerm) ATempty);
                    b_34 = t;
                    t = term_j_43;
                    c_34 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_112), (ATerm)ATempty, (ATerm) ATempty), term_j_43);
                    t = l_14(j_8, b_34, c_34, t);
                    t = (ATerm) ATmakeAppl(sym_Scope_2, p_33, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, a_34), x_33));
                    t = simplify_0_0(t);
                    ;
                    LocalPopChoice(g_43);
                  }
                else
                  {
                    t = d_43;
                    {
                      ATerm b_35 = NULL,c_35 = NULL;
                      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_112), (ATerm)ATempty, (ATerm) ATempty);
                      b_35 = t;
                      t = term_x_42;
                      c_35 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_x_42, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_112), (ATerm)ATempty, (ATerm) ATempty));
                      t = z_6(c_35, b_35, t);
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
  t = term_k_43;
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL;
  if(match_cons(t, sym__2))
    {
      z_35 = ATgetArgument(t, 0);
      a_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_15(z_35, a_36, t);
  return(t);
}
ATerm occurrences_1_0 (ATerm i_105 (ATerm), ATerm t)
{
  ATerm r_112 = NULL,s_112 = NULL,t_112 = NULL,q_35 = NULL;
  t_112 = t;
  {
    ATerm l_43 = t;
    int m_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_105(t);
        t = term_k_15;
        ;
        LocalPopChoice(m_43);
      }
    else
      {
        t = l_43;
        t = term_k_43;
      }
    r_112 = t;
    t = SSL_explode_term(t_112);
    if(match_cons(t, sym__2))
      {
        ATerm p_43 = ATgetArgument(t, 0);
        q_35 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = q_35;
    {
      ATerm m_8 (ATerm t)
      {
        t = occurrences_1_0(i_105, t);
        return(t);
      }
      t = foldr_3_0(k_8, l_8, m_8, t);
      s_112 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_112, s_112);
      t = s_15(r_112, s_112, t);
    }
  }
  return(t);
}
ATerm h_14 (ATerm s_94 (ATerm), ATerm x_21, ATerm w_21, ATerm t)
{
  ATerm w_112 = NULL,x_112 = NULL;
  w_112 = t;
  t = w_21;
  {
    ATerm s_43 = t;
    if((PushChoice() == 0))
      {
        ATerm o_8 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm t_43 = ATgetArgument(t, 0);
              if(match_cons(t_43, sym_SVar_1))
                {
                  if((x_21 != ATgetArgument(t_43, 0)))
                    {
                      _fail(ATgetArgument(t_43, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm u_43 = ATgetArgument(t, 1);
              }
              {
                ATerm v_43 = ATgetArgument(t, 2);
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
    t = s_94(t);
    {
      ATerm p_8 (ATerm t)
      {
        if(match_cons(t, sym_CallT_3))
          {
            ATerm w_43 = ATgetArgument(t, 0);
            if(match_cons(w_43, sym_SVar_1))
              {
                if((x_21 != ATgetArgument(w_43, 0)))
                  {
                    _fail(ATgetArgument(w_43, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm x_43 = ATgetArgument(t, 1);
            }
            {
              ATerm y_43 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        return(t);
      }
      t = occurrences_1_0(p_8, t);
      x_112 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_112, term_k_15);
      t = leq_0_0(t);
      t = w_112;
    }
  }
  return(t);
}
ATerm k_14 (ATerm m_37, ATerm n_37, ATerm t)
{
  ATerm y_112 = NULL,z_112 = NULL;
  z_112 = t;
  {
    ATerm b_44 = t;
    int c_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_37, n_37);
        t = u_15(m_37, n_37, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_44 = ATgetFirst((ATermList) t);
            y_112 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(c_44);
        t = SSL_table_put(m_37, n_37, y_112);
        t = (ATerm) ATmakeAppl(sym__3, m_37, n_37, y_112);
      }
    else
      {
        t = b_44;
        t = SSL_table_remove(m_37, n_37);
        t = (ATerm) ATmakeAppl(sym__2, m_37, n_37);
      }
    t = z_112;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm a_113 = NULL,b_113 = NULL,c_113 = NULL,d_113 = NULL,e_113 = NULL;
  d_113 = t;
  t = y_108(t);
  c_113 = t;
  {
    ATerm e_44 = t;
    int f_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_113 = NULL;
        t = term_g_44;
        f_113 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_113, term_g_44);
        t = u_15(c_113, f_113, t);
        ;
        LocalPopChoice(f_44);
      }
    else
      {
        t = e_44;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_113 = ATgetFirst((ATermList) t);
        a_113 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_g_44;
    e_113 = t;
    t = SSL_table_put(c_113, e_113, a_113);
    t = b_113;
    {
      ATerm q_8 (ATerm t)
      {
        ATerm g_113 = NULL;
        g_113 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_113, g_113);
        t = k_14(c_113, g_113, t);
        return(t);
      }
      t = map_1_0(q_8, t);
      t = d_113;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm t)
{
  ATerm h_44 = t;
  int j_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_99(t);
      t = v_99(t);
      ;
      LocalPopChoice(j_44);
    }
  else
    {
      t = h_44;
      t = v_99(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm x_108 (ATerm), ATerm t)
{
  ATerm i_113 = NULL,j_113 = NULL,k_113 = NULL,l_113 = NULL,m_113 = NULL;
  j_113 = t;
  t = x_108(t);
  i_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_113, term_g_44);
  {
    ATerm k_44 = t;
    int l_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_113 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_44 = ATgetArgument(t, 0);
            ATerm o_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_g_44;
        s_113 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_113, term_g_44);
        t = u_15(i_113, s_113, t);
        ;
        LocalPopChoice(l_44);
      }
    else
      {
        t = k_44;
        t = (ATerm) ATempty;
      }
    k_113 = t;
    t = term_g_44;
    l_113 = t;
    t = (ATerm) ATinsert(CheckATermList(k_113), (ATerm) ATempty);
    m_113 = t;
    t = SSL_table_put(i_113, l_113, m_113);
    t = j_113;
  }
  return(t);
}
ATerm scope_2_0 (ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm t)
{
  ATerm r_8 (ATerm t)
  {
    t = end_scope_1_0(z_108, t);
    return(t);
  }
  t = begin_scope_1_0(z_108, t);
  t = restore_always_2_0(a_109, r_8, t);
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = term_x_42;
  return(t);
}
ATerm v_8 (ATerm t)
{
  t = term_p_44;
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
      ATerm q_44 = t;
      int r_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_113 = NULL,x_113 = NULL,y_113 = NULL;
          w_113 = t;
          {
            ATerm u_44 = t;
            int v_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    x_113 = ATgetArgument(t, 0);
                    {
                      ATerm w_44 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm x_44 = ATgetArgument(t, 2);
                    }
                    {
                      ATerm y_44 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(v_44);
                {
                  ATerm b_114 = NULL,c_114 = NULL;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_113), (ATerm)ATempty, (ATerm) ATempty);
                  b_114 = t;
                  t = term_j_43;
                  c_114 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_113), (ATerm)ATempty, (ATerm) ATempty), term_j_43);
                  t = l_14(y_8, b_114, c_114, t);
                  t = w_113;
                }
              }
            else
              {
                t = u_44;
                if(match_cons(t, sym_Let_2))
                  {
                    x_113 = ATgetArgument(t, 0);
                    y_113 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = x_113;
                {
                  ATerm a_9 (ATerm t)
                  {
                    ATerm l_114 = NULL,m_114 = NULL;
                    if(match_cons(t, sym_SDefT_4))
                      {
                        l_114 = ATgetArgument(t, 0);
                        {
                          ATerm z_44 = ATgetArgument(t, 1);
                        }
                        {
                          ATerm a_45 = ATgetArgument(t, 2);
                        }
                        m_114 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    {
                      ATerm c_9 (ATerm t)
                      {
                        t = y_113;
                        return(t);
                      }
                      t = h_14(c_9, l_114, m_114, t);
                      t = AddSDef_0_0(t);
                    }
                    return(t);
                  }
                  t = map_1_0(a_9, t);
                  t = (ATerm) ATmakeAppl(sym_Let_2, x_113, y_113);
                }
              }
          }
          ;
          LocalPopChoice(r_44);
        }
      else
        {
          t = q_44;
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
ATerm l_14 (ATerm b_109 (ATerm), ATerm z_36, ATerm x_36, ATerm t)
{
  ATerm o_114 = NULL,p_114 = NULL,q_114 = NULL,r_114 = NULL,s_114 = NULL,t_114 = NULL;
  r_114 = t;
  t = b_109(t);
  o_114 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_114, z_36, x_36);
  t = v_15(o_114, z_36, x_36, t);
  {
    ATerm b_45 = t;
    int c_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_114 = NULL;
        t = term_g_44;
        u_114 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_114, term_g_44);
        t = u_15(o_114, u_114, t);
        ;
        LocalPopChoice(c_45);
      }
    else
      {
        t = b_45;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_114 = ATgetFirst((ATermList) t);
        q_114 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_g_44;
    s_114 = t;
    t = (ATerm) ATinsert(CheckATermList(q_114), (ATerm) ATinsert(CheckATermList(p_114), z_36));
    t_114 = t;
    t = SSL_table_put(o_114, s_114, t_114);
    t = r_114;
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
  t = term_p_44;
  return(t);
}
ATerm AddSDef_0_0 (ATerm t)
{
  ATerm v_114 = NULL,w_114 = NULL,x_114 = NULL,y_114 = NULL,z_114 = NULL,a_115 = NULL,b_115 = NULL;
  w_114 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      v_114 = ATgetArgument(t, 0);
      {
        ATerm d_45 = ATgetArgument(t, 1);
      }
      {
        ATerm e_45 = ATgetArgument(t, 2);
      }
      {
        ATerm f_45 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  x_114 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_114), (ATerm)ATempty, (ATerm) ATempty);
  a_115 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_45, w_114);
  b_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_114), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_g_45, w_114));
  t = l_14(d_9, a_115, b_115, t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_114), (ATerm)ATempty, (ATerm) ATempty);
  y_114 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_45, w_114);
  z_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_114), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_i_45, w_114));
  t = l_14(e_9, y_114, z_114, t);
  t = x_114;
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm j_45 = t;
  if((PushChoice() == 0))
    {
      ATerm c_115 = NULL,d_115 = NULL;
      if(match_cons(t, sym__2))
        {
          c_115 = ATgetArgument(t, 0);
          d_115 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, c_115, d_115);
      {
        ATerm k_45 = t;
        int l_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(c_115, d_115);
            ;
            LocalPopChoice(l_45);
          }
        else
          {
            t = k_45;
            t = SSL_gtr(c_115, d_115);
          }
        t = (ATerm) ATmakeAppl(sym__2, c_115, d_115);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_45;
    }
  return(t);
}
ATerm foldr_3_0 (ATerm r_107 (ATerm), ATerm s_107 (ATerm), ATerm t_107 (ATerm), ATerm t)
{
  ATerm g_115 = NULL,h_115 = NULL,i_115 = NULL;
  g_115 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_115;
      t = r_107(t);
    }
  else
    {
      ATerm l_115 = NULL,m_115 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_115 = ATgetFirst((ATermList) t);
          i_115 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_115;
      t = t_107(t);
      l_115 = t;
      t = i_115;
      t = foldr_3_0(r_107, s_107, t_107, t);
      m_115 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_115, m_115);
      t = s_107(t);
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
  ATerm o_36 = NULL,r_36 = NULL;
  if(match_cons(t, sym__2))
    {
      o_36 = ATgetArgument(t, 0);
      r_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_15(o_36, r_36, t);
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
  t = s_15(y_36, a_37, t);
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  ATerm n_45 = t;
  int o_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_36 = NULL,e_36 = NULL;
      e_36 = t;
      t = SSL_explode_term(e_36);
      if(match_cons(t, sym__2))
        {
          ATerm p_45 = ATgetArgument(t, 0);
          b_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_36;
      t = foldr_3_0(f_9, g_9, term_size_0_0, t);
      ;
      LocalPopChoice(o_45);
    }
  else
    {
      t = n_45;
      {
        ATerm t_115 (ATerm t)
        {
          ATerm s_36 = NULL,t_36 = NULL;
          t_36 = t;
          t = SSL_explode_term(t_36);
          if(match_cons(t, sym__2))
            {
              ATerm t_45 = ATgetArgument(t, 0);
              s_36 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_36;
          t = foldr_3_0(h_9, j_9, t_115, t);
          return(t);
        }
        t = t_115(t);
      }
    }
  return(t);
}
ATerm Seq_2_0 (ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm t)
{
  ATerm u_115 = NULL,v_115 = NULL,w_115 = NULL,x_115 = NULL,y_115 = NULL,z_115 = NULL,v_35 = NULL;
  z_115 = t;
  if(match_cons(t, sym_Seq_2))
    {
      v_115 = ATgetArgument(t, 0);
      w_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_115);
  u_115 = t;
  t = v_115;
  t = o_85(t);
  x_115 = t;
  t = w_115;
  t = p_85(t);
  y_115 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, x_115, y_115);
  v_35 = t;
  t = SSLsetAnnotations(v_35, u_115);
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm n_43 = NULL,q_43 = NULL,r_43 = NULL,q_62 = NULL;
  r_43 = t;
  if(match_cons(t, sym_Match_1))
    {
      q_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_43);
  n_43 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, q_43);
  q_62 = t;
  t = SSLsetAnnotations(q_62, n_43);
  return(t);
}
ATerm body_to_inline_0_0 (ATerm t)
{
  ATerm p_116 = NULL,q_116 = NULL;
  ATerm i_122 (ATerm t)
  {
    ATerm e_122 = NULL,f_122 = NULL,g_122 = NULL,h_122 = NULL;
    f_122 = t;
    if(match_cons(t, sym_Id_0))
      {
        t = f_122;
      }
    else
      {
        if(match_cons(t, sym_Fail_0))
          {
            t = f_122;
          }
        else
          {
            if(match_cons(t, sym_CallT_3))
              {
                g_122 = ATgetArgument(t, 0);
                h_122 = ATgetArgument(t, 1);
                e_122 = ATgetArgument(t, 2);
                {
                  ATerm j_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,n_36 = NULL,m_36 = NULL;
                  t = SSLgetAnnotations(f_122);
                  j_37 = t;
                  t = g_122;
                  if(match_cons(t, sym_SVar_1))
                    {
                      x_37 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(g_122);
                  w_37 = t;
                  t = (ATerm) ATmakeAppl(sym_SVar_1, x_37);
                  m_36 = t;
                  t = SSLsetAnnotations(m_36, w_37);
                  y_37 = t;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, y_37, h_122, e_122);
                  n_36 = t;
                  t = SSLsetAnnotations(n_36, j_37);
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    g_122 = ATgetArgument(t, 0);
                    h_122 = ATgetArgument(t, 1);
                    e_122 = ATgetArgument(t, 2);
                    {
                      ATerm e_39 = NULL,l_39 = NULL,n_39 = NULL,o_39 = NULL,v_36 = NULL,u_36 = NULL;
                      t = SSLgetAnnotations(f_122);
                      e_39 = t;
                      t = g_122;
                      if(match_cons(t, sym_SVar_1))
                        {
                          n_39 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(g_122);
                      l_39 = t;
                      t = (ATerm) ATmakeAppl(sym_SVar_1, n_39);
                      u_36 = t;
                      t = SSLsetAnnotations(u_36, l_39);
                      o_39 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, o_39, h_122, e_122);
                      v_36 = t;
                      t = SSLsetAnnotations(v_36, e_39);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Build_1))
                      {
                        g_122 = ATgetArgument(t, 0);
                        {
                          ATerm d_40 = NULL,w_36 = NULL;
                          t = SSLgetAnnotations(f_122);
                          d_40 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, g_122);
                          w_36 = t;
                          t = SSLsetAnnotations(w_36, d_40);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            g_122 = ATgetArgument(t, 0);
                            {
                              ATerm t_40 = NULL,l_60 = NULL;
                              t = SSLgetAnnotations(f_122);
                              t_40 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, g_122);
                              l_60 = t;
                              t = SSLsetAnnotations(l_60, t_40);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                g_122 = ATgetArgument(t, 0);
                                h_122 = ATgetArgument(t, 1);
                                {
                                  ATerm v_45 = t;
                                  int z_45 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm p_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,p_62 = NULL,m_60 = NULL;
                                      t = SSLgetAnnotations(f_122);
                                      p_41 = t;
                                      t = g_122;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          u_41 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(g_122);
                                      t_41 = t;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, u_41);
                                      m_60 = t;
                                      t = SSLsetAnnotations(m_60, t_41);
                                      v_41 = t;
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_41, h_122);
                                      p_62 = t;
                                      t = SSLsetAnnotations(p_62, p_41);
                                      ;
                                      LocalPopChoice(z_45);
                                    }
                                  else
                                    {
                                      t = v_45;
                                      {
                                        ATerm m_42 = NULL,w_42 = NULL,z_42 = NULL,e_43 = NULL,f_43 = NULL,h_43 = NULL,c_63 = NULL,b_63 = NULL;
                                        t = SSLgetAnnotations(f_122);
                                        m_42 = t;
                                        t = g_122;
                                        if(match_cons(t, sym_Scope_2))
                                          {
                                            z_42 = ATgetArgument(t, 0);
                                            e_43 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = SSLgetAnnotations(g_122);
                                        w_42 = t;
                                        t = e_43;
                                        t = Seq_2_0(k_9, _id, t);
                                        f_43 = t;
                                        t = (ATerm) ATmakeAppl(sym_Scope_2, z_42, f_43);
                                        b_63 = t;
                                        t = SSLsetAnnotations(b_63, w_42);
                                        h_43 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, h_43, h_122);
                                        c_63 = t;
                                        t = SSLsetAnnotations(c_63, m_42);
                                      }
                                    }
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    g_122 = ATgetArgument(t, 0);
                                    h_122 = ATgetArgument(t, 1);
                                    {
                                      ATerm c_46 = t;
                                      int d_46 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm i_44 = NULL,n_44 = NULL,s_44 = NULL,t_44 = NULL,e_63 = NULL,d_63 = NULL;
                                          t = SSLgetAnnotations(f_122);
                                          i_44 = t;
                                          t = h_122;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              s_44 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = SSLgetAnnotations(h_122);
                                          n_44 = t;
                                          t = (ATerm) ATmakeAppl(sym_Match_1, s_44);
                                          d_63 = t;
                                          t = SSLsetAnnotations(d_63, n_44);
                                          t_44 = t;
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, g_122, t_44);
                                          e_63 = t;
                                          t = SSLsetAnnotations(e_63, i_44);
                                          ;
                                          LocalPopChoice(d_46);
                                        }
                                      else
                                        {
                                          t = c_46;
                                          {
                                            ATerm h_45 = NULL,s_45 = NULL,u_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,a_46 = NULL,b_46 = NULL,r_63 = NULL,g_63 = NULL,f_63 = NULL;
                                            t = SSLgetAnnotations(f_122);
                                            h_45 = t;
                                            t = h_122;
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                u_45 = ATgetArgument(t, 0);
                                                w_45 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(h_122);
                                            s_45 = t;
                                            t = u_45;
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                a_46 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(u_45);
                                            y_45 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, a_46);
                                            f_63 = t;
                                            t = SSLsetAnnotations(f_63, y_45);
                                            b_46 = t;
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, b_46, w_45);
                                            g_63 = t;
                                            t = SSLsetAnnotations(g_63, s_45);
                                            x_45 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, g_122, x_45);
                                            r_63 = t;
                                            t = SSLsetAnnotations(r_63, h_45);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Choice_2))
                                      {
                                        g_122 = ATgetArgument(t, 0);
                                        h_122 = ATgetArgument(t, 1);
                                        {
                                          ATerm o_46 = NULL,t_46 = NULL,u_46 = NULL,s_63 = NULL;
                                          t = SSLgetAnnotations(f_122);
                                          o_46 = t;
                                          t = g_122;
                                          t = i_122(t);
                                          t_46 = t;
                                          t = h_122;
                                          t = i_122(t);
                                          u_46 = t;
                                          t = (ATerm) ATmakeAppl(sym_Choice_2, t_46, u_46);
                                          s_63 = t;
                                          t = SSLsetAnnotations(s_63, o_46);
                                        }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_LChoice_2))
                                          {
                                            g_122 = ATgetArgument(t, 0);
                                            h_122 = ATgetArgument(t, 1);
                                            {
                                              ATerm d_47 = NULL,o_47 = NULL,q_47 = NULL,u_63 = NULL;
                                              t = SSLgetAnnotations(f_122);
                                              d_47 = t;
                                              t = g_122;
                                              t = i_122(t);
                                              o_47 = t;
                                              t = h_122;
                                              t = i_122(t);
                                              q_47 = t;
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, o_47, q_47);
                                              u_63 = t;
                                              t = SSLsetAnnotations(u_63, d_47);
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_GuardedLChoice_3))
                                              {
                                                g_122 = ATgetArgument(t, 0);
                                                h_122 = ATgetArgument(t, 1);
                                                e_122 = ATgetArgument(t, 2);
                                                {
                                                  ATerm f_48 = NULL,j_48 = NULL,k_48 = NULL,p_48 = NULL,v_63 = NULL;
                                                  t = SSLgetAnnotations(f_122);
                                                  f_48 = t;
                                                  t = g_122;
                                                  t = i_122(t);
                                                  j_48 = t;
                                                  t = h_122;
                                                  t = i_122(t);
                                                  k_48 = t;
                                                  t = e_122;
                                                  t = i_122(t);
                                                  p_48 = t;
                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, j_48, k_48, p_48);
                                                  v_63 = t;
                                                  t = SSLsetAnnotations(v_63, f_48);
                                                }
                                              }
                                            else
                                              {
                                                ATerm g_49 = NULL,w_63 = NULL;
                                                if(match_cons(t, sym_Cong_2))
                                                  {
                                                    g_122 = ATgetArgument(t, 0);
                                                    h_122 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSLgetAnnotations(f_122);
                                                g_49 = t;
                                                t = (ATerm) ATmakeAppl(sym_Cong_2, g_122, h_122);
                                                w_63 = t;
                                                t = SSLsetAnnotations(w_63, g_49);
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
  t = i_122(t);
  p_116 = t;
  t = term_size_0_0(t);
  q_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_116, term_e_46);
  t = leq_0_0(t);
  t = p_116;
  return(t);
}
ATerm inlineable_0_0 (ATerm t)
{
  ATerm y_122 = NULL,z_122 = NULL,a_123 = NULL,b_123 = NULL,c_123 = NULL,d_123 = NULL,e_123 = NULL,f_123 = NULL,l_65 = NULL;
  f_123 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      a_123 = ATgetArgument(t, 0);
      b_123 = ATgetArgument(t, 1);
      c_123 = ATgetArgument(t, 2);
      d_123 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_123);
  z_122 = t;
  t = a_123;
  {
    ATerm f_46 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_46;
      }
    y_122 = t;
    t = d_123;
    {
      ATerm g_46 = t;
      if((PushChoice() == 0))
        {
          ATerm n_9 (ATerm t)
          {
            if(match_cons(t, sym_CallT_3))
              {
                ATerm h_46 = ATgetArgument(t, 0);
                if(match_cons(h_46, sym_SVar_1))
                  {
                    if((y_122 != ATgetArgument(h_46, 0)))
                      {
                        _fail(ATgetArgument(h_46, 0));
                      }
                  }
                else
                  _fail(t);
                {
                  ATerm i_46 = ATgetArgument(t, 1);
                }
                {
                  ATerm j_46 = ATgetArgument(t, 2);
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
          t = g_46;
        }
      t = d_123;
      t = body_to_inline_0_0(t);
      e_123 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, y_122, b_123, c_123, e_123);
      l_65 = t;
      t = SSLsetAnnotations(l_65, z_122);
    }
  }
  return(t);
}
ATerm topdown_1_0 (ATerm n_96 (ATerm), ATerm t)
{
  ATerm o_9 (ATerm t)
  {
    t = topdown_1_0(n_96, t);
    return(t);
  }
  t = n_96(t);
  t = SRTS_all(o_9, t);
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm k_46 = t;
  int l_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm m_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(l_46);
      {
        ATerm h_123 = NULL,i_123 = NULL;
        h_123 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm n_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        i_123 = t;
        t = SSLgetAnnotations(h_123);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_46 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) q_46) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm s_46 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(s_46) != AT_LIST) || !(ATisEmpty(s_46))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = i_123;
      }
    }
  else
    {
      t = k_46;
      {
        ATerm v_46 = t;
        int w_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm y_46 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) y_46) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm z_46 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(w_46);
            _fail(t);
          }
        else
          {
            t = v_46;
          }
      }
    }
  return(t);
}
ATerm o_14 (ATerm g_67, ATerm f_67, ATerm t)
{
  t = g_67;
  t = topdown_1_0(p_9, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, g_67);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm r_123 = NULL,s_123 = NULL,u_123 = NULL,v_123 = NULL,w_123 = NULL,x_123 = NULL,y_123 = NULL,a_124 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      u_123 = ATgetArgument(t, 0);
      x_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_123;
  if(match_cons(t, sym_Match_1))
    {
      v_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_123;
  if(match_cons(t, sym_Var_1))
    {
      w_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_123;
  if(match_cons(t, sym_Seq_2))
    {
      y_123 = ATgetArgument(t, 0);
      s_123 = ATgetArgument(t, 1);
      t = y_123;
      if(match_cons(t, sym_Build_1))
        {
          a_124 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_124;
      if(match_cons(t, sym_Var_1))
        {
          r_123 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_123;
      if((w_123 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_123)), s_123);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          y_123 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_123;
      if(match_cons(t, sym_Var_1))
        {
          a_124 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_124;
      if((w_123 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_123));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm j_124 = NULL,k_124 = NULL,m_124 = NULL,n_124 = NULL,o_124 = NULL,p_124 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      m_124 = ATgetArgument(t, 0);
      o_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_124;
  if(match_cons(t, sym_Build_1))
    {
      n_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_124;
  if(match_cons(t, sym_Seq_2))
    {
      p_124 = ATgetArgument(t, 0);
      k_124 = ATgetArgument(t, 1);
      t = p_124;
      if(match_cons(t, sym_Match_1))
        {
          j_124 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_124;
      if((n_124 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_124), k_124);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          p_124 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_124;
      if((n_124 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, n_124);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm x_124 = NULL,y_124 = NULL,a_125 = NULL,b_125 = NULL,c_125 = NULL,d_125 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      a_125 = ATgetArgument(t, 0);
      c_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_125;
  if(match_cons(t, sym_Match_1))
    {
      b_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_125;
  if(match_cons(t, sym_Seq_2))
    {
      d_125 = ATgetArgument(t, 0);
      y_124 = ATgetArgument(t, 1);
      t = d_125;
      if(match_cons(t, sym_Match_1))
        {
          x_124 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_124;
      if((b_125 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_125), y_124);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          d_125 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_125;
      if((b_125 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, b_125);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm l_125 = NULL,m_125 = NULL,n_125 = NULL,p_125 = NULL,r_125 = NULL,s_125 = NULL,t_125 = NULL,u_125 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      p_125 = ATgetArgument(t, 0);
      r_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_125;
  if(match_cons(t, sym_Build_1))
    {
      ATerm a_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_125;
  if(match_cons(t, sym_Seq_2))
    {
      s_125 = ATgetArgument(t, 0);
      t_125 = ATgetArgument(t, 1);
      t = s_125;
      if(match_cons(t, sym_PrimT_3))
        {
          l_125 = ATgetArgument(t, 0);
          m_125 = ATgetArgument(t, 1);
          n_125 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, l_125, m_125, n_125), t_125);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          s_125 = ATgetArgument(t, 0);
          t_125 = ATgetArgument(t, 1);
          u_125 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, s_125, t_125, u_125);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm i_126 = NULL,j_126 = NULL,l_126 = NULL,o_126 = NULL,p_126 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      l_126 = ATgetArgument(t, 0);
      o_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_126;
  if(match_cons(t, sym_Build_1))
    {
      ATerm b_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_126;
  if(match_cons(t, sym_Seq_2))
    {
      p_126 = ATgetArgument(t, 0);
      j_126 = ATgetArgument(t, 1);
      t = p_126;
      if(match_cons(t, sym_Build_1))
        {
          i_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_126), j_126);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          p_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, p_126);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm b_101 (ATerm), ATerm c_101 (ATerm), ATerm t)
{
  ATerm z_126 (ATerm t)
  {
    ATerm c_47 = t;
    int e_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_100(t);
        ;
        LocalPopChoice(e_47);
      }
    else
      {
        t = c_47;
        {
          ATerm t_126 = NULL,u_126 = NULL,v_126 = NULL,w_126 = NULL,x_126 = NULL,y_126 = NULL,q_65 = NULL;
          t = a_101(t);
          y_126 = t;
          if(match_cons(t, sym__2))
            {
              u_126 = ATgetArgument(t, 0);
              v_126 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_126);
          t_126 = t;
          t = u_126;
          t = c_101(t);
          w_126 = t;
          t = v_126;
          t = z_126(t);
          x_126 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_126, x_126);
          q_65 = t;
          t = SSLsetAnnotations(q_65, t_126);
          t = b_101(t);
        }
      }
    return(t);
  }
  t = z_126(t);
  return(t);
}
ATerm q_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_47 = ATgetArgument(t, 0);
      if(((ATgetType(n_47) != AT_LIST) || !(ATisEmpty(n_47))))
        _fail(t);
      {
        ATerm s_47 = ATgetArgument(t, 1);
        if(((ATgetType(s_47) != AT_LIST) || !(ATisEmpty(s_47))))
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
  ATerm d_128 = NULL,e_128 = NULL,f_128 = NULL,g_128 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_47 = ATgetArgument(t, 0);
      if(((ATgetType(t_47) == AT_LIST) && !(ATisEmpty(t_47))))
        {
          d_128 = ATgetFirst((ATermList) t_47);
          e_128 = (ATerm) ATgetNext((ATermList) t_47);
        }
      else
        _fail(t);
      {
        ATerm u_47 = ATgetArgument(t, 1);
        if(((ATgetType(u_47) == AT_LIST) && !(ATisEmpty(u_47))))
          {
            f_128 = ATgetFirst((ATermList) u_47);
            g_128 = (ATerm) ATgetNext((ATermList) u_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_128, f_128), (ATerm) ATmakeAppl(sym__2, e_128, g_128));
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm h_128 = NULL,i_128 = NULL;
  if(match_cons(t, sym__2))
    {
      h_128 = ATgetArgument(t, 0);
      i_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_128), h_128);
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
      ATerm v_47 = ATgetArgument(t, 0);
      if(((ATgetType(v_47) != AT_LIST) || !(ATisEmpty(v_47))))
        _fail(t);
      {
        ATerm z_47 = ATgetArgument(t, 1);
        if(((ATgetType(z_47) != AT_LIST) || !(ATisEmpty(z_47))))
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
  ATerm q_128 = NULL,r_128 = NULL,s_128 = NULL,t_128 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_48 = ATgetArgument(t, 0);
      if(((ATgetType(a_48) == AT_LIST) && !(ATisEmpty(a_48))))
        {
          q_128 = ATgetFirst((ATermList) a_48);
          r_128 = (ATerm) ATgetNext((ATermList) a_48);
        }
      else
        _fail(t);
      {
        ATerm b_48 = ATgetArgument(t, 1);
        if(((ATgetType(b_48) == AT_LIST) && !(ATisEmpty(b_48))))
          {
            s_128 = ATgetFirst((ATermList) b_48);
            t_128 = (ATerm) ATgetNext((ATermList) b_48);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_128, s_128), (ATerm) ATmakeAppl(sym__2, r_128, t_128));
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm u_128 = NULL,v_128 = NULL;
  if(match_cons(t, sym__2))
    {
      u_128 = ATgetArgument(t, 0);
      v_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_128), u_128);
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm x_128 = NULL,y_128 = NULL;
  if(match_cons(t, sym__2))
    {
      x_128 = ATgetArgument(t, 0);
      y_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_128), (ATerm) ATmakeAppl(sym_Match_1, y_128));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm i_127 = NULL,j_127 = NULL,l_127 = NULL,o_127 = NULL,p_127 = NULL,r_127 = NULL,t_127 = NULL,u_127 = NULL,v_127 = NULL,w_127 = NULL,x_127 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      o_127 = ATgetArgument(t, 0);
      u_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_127;
  if(match_cons(t, sym_Build_1))
    {
      p_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_127;
  if(match_cons(t, sym_Op_2))
    {
      r_127 = ATgetArgument(t, 0);
      t_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_127;
  if(match_cons(t, sym_Seq_2))
    {
      v_127 = ATgetArgument(t, 0);
      l_127 = ATgetArgument(t, 1);
      {
        ATerm c_128 = NULL;
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
            i_127 = ATgetArgument(t, 0);
            j_127 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_127;
        if((r_127 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, t_127, j_127);
        t = genzip_4_0(q_9, r_9, s_9, t_9, t);
        c_128 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_128), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, r_127, t_127)), l_127));
      }
    }
  else
    {
      ATerm p_128 = NULL;
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
      if((r_127 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, t_127, x_127);
      t = genzip_4_0(u_9, w_9, x_9, y_9, t);
      p_128 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_128), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, r_127, t_127)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm y_129 = NULL,b_130 = NULL,c_130 = NULL,d_130 = NULL,e_130 = NULL,g_130 = NULL,h_130 = NULL,i_130 = NULL;
  b_130 = t;
  if(match_cons(t, sym_Seq_2))
    {
      c_130 = ATgetArgument(t, 0);
      g_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_130;
  if(match_cons(t, sym_Build_1))
    {
      d_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_130;
  if(match_cons(t, sym_Op_2))
    {
      e_130 = ATgetArgument(t, 0);
      {
        ATerm c_48 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = g_130;
  {
    ATerm d_48 = t;
    int e_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            h_130 = ATgetArgument(t, 0);
            {
              ATerm g_48 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(e_48);
        t = h_130;
        if(match_cons(t, sym_Match_1))
          {
            i_130 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_130;
        if(match_cons(t, sym_Op_2))
          {
            y_129 = ATgetArgument(t, 0);
            {
              ATerm h_48 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_130, y_129);
        {
          ATerm i_48 = t;
          if((PushChoice() == 0))
            {
              ATerm z_49 = NULL;
              if(match_cons(t, sym__2))
                {
                  z_49 = ATgetArgument(t, 0);
                  if((z_49 != ATgetArgument(t, 1)))
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
              t = i_48;
            }
          t = term_o_17;
        }
      }
    else
      {
        t = d_48;
        if(match_cons(t, sym_Match_1))
          {
            h_130 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_130;
        if(match_cons(t, sym_Op_2))
          {
            i_130 = ATgetArgument(t, 0);
            {
              ATerm q_48 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_130, i_130);
        {
          ATerm r_48 = t;
          if((PushChoice() == 0))
            {
              ATerm o_50 = NULL;
              if(match_cons(t, sym__2))
                {
                  o_50 = ATgetArgument(t, 0);
                  if((o_50 != ATgetArgument(t, 1)))
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
              t = r_48;
            }
          t = term_o_17;
        }
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm r_97 (ATerm), ATerm t)
{
  ATerm m_130 (ATerm t)
  {
    ATerm s_48 = t;
    int t_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_97(t);
        ;
        LocalPopChoice(t_48);
      }
    else
      {
        t = s_48;
        t = SRTS_one(m_130, t);
      }
    return(t);
  }
  t = m_130(t);
  return(t);
}
ATerm at_end_1_0 (ATerm e_103 (ATerm), ATerm t)
{
  ATerm h_131 (ATerm t)
  {
    ATerm e_131 = NULL,f_131 = NULL,g_131 = NULL;
    g_131 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_131 = ATgetFirst((ATermList) t);
        f_131 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm p_51 = NULL,u_51 = NULL,s_65 = NULL;
          t = SSLgetAnnotations(g_131);
          p_51 = t;
          t = f_131;
          t = h_131(t);
          u_51 = t;
          t = (ATerm) ATinsert(CheckATermList(u_51), e_131);
          s_65 = t;
          t = SSLsetAnnotations(s_65, p_51);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_131;
        t = e_103(t);
      }
    return(t);
  }
  t = h_131(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_130 = NULL,p_130 = NULL,q_130 = NULL;
  o_130 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_130;
    }
  else
    {
      ATerm c_10 (ATerm t)
      {
        t = not_null(q_130);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_130 = ATgetFirst((ATermList) t);
          if(((q_130 != NULL) && (q_130 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_130 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_130;
      t = at_end_1_0(c_10, t);
    }
  return(t);
}
ATerm t_131 (ATerm l_131, ATerm t)
{
  ATerm m_131 = NULL;
  t = SSL_explode_term(l_131);
  if(match_cons(t, sym__2))
    {
      ATerm u_48 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_48) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_131;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_131 = NULL,p_131 = NULL,q_131 = NULL;
  q_131 = t;
  if(match_cons(t, sym__2))
    {
      o_131 = ATgetArgument(t, 0);
      p_131 = ATgetArgument(t, 1);
      {
        ATerm c_49 = t;
        int e_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_10 (ATerm t)
            {
              t = p_131;
              return(t);
            }
            t = o_131;
            t = at_end_1_0(d_10, t);
            ;
            LocalPopChoice(e_49);
          }
        else
          {
            t = c_49;
            t = t_131(q_131, t);
          }
      }
    }
  else
    {
      t = t_131(q_131, t);
    }
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm m_132 = NULL,n_132 = NULL,o_132 = NULL,p_132 = NULL,q_132 = NULL,r_132 = NULL,s_132 = NULL,t_132 = NULL,u_132 = NULL,v_132 = NULL,w_132 = NULL,x_132 = NULL,y_132 = NULL;
  m_132 = t;
  if(match_cons(t, sym_Let_2))
    {
      n_132 = ATgetArgument(t, 0);
      u_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_132;
  if(match_cons(t, sym_Let_2))
    {
      v_132 = ATgetArgument(t, 0);
      x_132 = ATgetArgument(t, 1);
      {
        ATerm c_133 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, n_132, v_132);
        t = conc_0_0(t);
        c_133 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, c_133, x_132);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          v_132 = ATgetArgument(t, 0);
          x_132 = ATgetArgument(t, 1);
          y_132 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = n_132;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_132 = ATgetFirst((ATermList) t);
          t_132 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_132;
      if(match_cons(t, sym_SDefT_4))
        {
          p_132 = ATgetArgument(t, 0);
          q_132 = ATgetArgument(t, 1);
          r_132 = ATgetArgument(t, 2);
          s_132 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = q_132;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_132;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_132;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_132;
      if(match_cons(t, sym_SVar_1))
        {
          w_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_132;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_132;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_132;
      if((p_132 != t))
        {
          _fail(t);
        }
      t = s_132;
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
                      if((p_132 != ATgetArgument(h_49, 0)))
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
                    ATerm j_49 = ATgetArgument(t, 2);
                    if(((ATgetType(j_49) != AT_LIST) || !(ATisEmpty(j_49))))
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
        t = s_132;
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm l_133 = NULL,m_133 = NULL,n_133 = NULL,o_133 = NULL,p_133 = NULL,q_133 = NULL,s_133 = NULL,t_133 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      s_133 = ATgetArgument(t, 0);
      t = s_133;
      if(match_cons(t, sym_Seq_2))
        {
          q_133 = ATgetArgument(t, 0);
          m_133 = ATgetArgument(t, 1);
          t = q_133;
          if(match_cons(t, sym_Where_1))
            {
              l_133 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_133;
          if(match_cons(t, sym_Seq_2))
            {
              n_133 = ATgetArgument(t, 0);
              p_133 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_133;
          if(match_cons(t, sym_Build_1))
            {
              o_133 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, l_133, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_133), p_133)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              q_133 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, q_133);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          s_133 = ATgetArgument(t, 0);
          t = s_133;
          if(match_cons(t, sym_Test_1))
            {
              q_133 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, q_133);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              s_133 = ATgetArgument(t, 0);
              t = s_133;
              if(match_cons(t, sym_Not_1))
                {
                  q_133 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, q_133);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  s_133 = ATgetArgument(t, 0);
                  t_133 = ATgetArgument(t, 1);
                  t = t_133;
                  if((s_133 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      s_133 = ATgetArgument(t, 0);
                      t_133 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = t_133;
                  if((s_133 != t))
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
  ATerm h_134 = NULL,i_134 = NULL,j_134 = NULL,k_134 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      h_134 = ATgetArgument(t, 0);
      k_134 = ATgetArgument(t, 1);
      t = h_134;
      if(match_cons(t, sym_LChoice_2))
        {
          i_134 = ATgetArgument(t, 0);
          j_134 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, i_134, (ATerm) ATmakeAppl(sym_LChoice_2, j_134, k_134));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          h_134 = ATgetArgument(t, 0);
          k_134 = ATgetArgument(t, 1);
          t = h_134;
          if(match_cons(t, sym_Seq_2))
            {
              i_134 = ATgetArgument(t, 0);
              j_134 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, i_134, (ATerm) ATmakeAppl(sym_Seq_2, j_134, k_134));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              h_134 = ATgetArgument(t, 0);
              k_134 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_134;
          if(match_cons(t, sym_Choice_2))
            {
              i_134 = ATgetArgument(t, 0);
              j_134 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, i_134, (ATerm) ATmakeAppl(sym_Choice_2, j_134, k_134));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  ATerm v_135 = NULL,w_135 = NULL,x_135 = NULL;
  v_135 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_135 = ATgetFirst((ATermList) t);
      x_135 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm k_49 = t;
    int l_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_53 = NULL,p_53 = NULL,q_53 = NULL,t_53 = NULL,u_53 = NULL,a_54 = NULL,b_54 = NULL,a_66 = NULL,z_65 = NULL;
        t = SSLgetAnnotations(v_135);
        u_53 = t;
        t = w_135;
        t = v_0(t);
        a_54 = t;
        t = (ATerm) ATinsert(CheckATermList(x_135), a_54);
        z_65 = t;
        t = SSLsetAnnotations(z_65, u_53);
        b_54 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_53 = ATgetFirst((ATermList) t);
            q_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_54);
        e_53 = t;
        t = q_53;
        {
          ATerm m_49 = t;
          int n_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(v_0, t);
              ;
              LocalPopChoice(n_49);
            }
          else
            {
              t = m_49;
            }
          t_53 = t;
          t = (ATerm) ATinsert(CheckATermList(t_53), p_53);
          a_66 = t;
          t = SSLsetAnnotations(a_66, e_53);
        }
        ;
        LocalPopChoice(l_49);
      }
    else
      {
        t = k_49;
        {
          ATerm m_54 = NULL,p_54 = NULL,b_66 = NULL;
          t = SSLgetAnnotations(v_135);
          m_54 = t;
          t = x_135;
          t = map1_1_0(v_0, t);
          p_54 = t;
          t = (ATerm) ATinsert(CheckATermList(p_54), w_135);
          b_66 = t;
          t = SSLsetAnnotations(b_66, m_54);
        }
      }
  }
  return(t);
}
ATerm f_10 (ATerm t)
{
  ATerm f_137 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      f_137 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_137, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_17), term_b_17));
  return(t);
}
ATerm g_10 (ATerm t)
{
  ATerm g_137 = NULL,h_137 = NULL;
  h_137 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      g_137 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, g_137, term_b_17);
    }
  else
    {
      t = h_137;
    }
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm r_137 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      r_137 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_137, term_b_17);
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm s_137 = NULL,t_137 = NULL;
  t_137 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      s_137 = ATgetArgument(t, 0);
      {
        ATerm o_49 = t;
        int p_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, s_137, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_17), term_b_17));
            ;
            LocalPopChoice(p_49);
          }
        else
          {
            t = o_49;
            t = t_137;
          }
      }
    }
  else
    {
      t = t_137;
    }
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm d_138 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      d_138 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_138, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_17), term_b_17));
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm e_138 = NULL,f_138 = NULL;
  f_138 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_138 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, e_138, term_b_17);
    }
  else
    {
      t = f_138;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm k_136 = NULL,l_136 = NULL,m_136 = NULL,n_136 = NULL,p_136 = NULL,q_136 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      p_136 = ATgetArgument(t, 0);
      q_136 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, p_136, q_136);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          p_136 = ATgetArgument(t, 0);
          t = p_136;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_136 = ATgetFirst((ATermList) t);
              l_136 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, k_136, (ATerm) ATmakeAppl(sym_LChoices_1, l_136));
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
              p_136 = ATgetArgument(t, 0);
              t = p_136;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_136 = ATgetFirst((ATermList) t);
                  l_136 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, k_136, (ATerm) ATmakeAppl(sym_Choices_1, l_136));
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
                  p_136 = ATgetArgument(t, 0);
                  t = p_136;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      k_136 = ATgetFirst((ATermList) t);
                      l_136 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, k_136, (ATerm) ATmakeAppl(sym_Seqs_1, l_136));
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
                      p_136 = ATgetArgument(t, 0);
                      q_136 = ATgetArgument(t, 1);
                      n_136 = ATgetArgument(t, 2);
                      m_136 = ATgetArgument(t, 3);
                      {
                        ATerm c_137 = NULL,e_137 = NULL;
                        t = q_136;
                        t = map1_1_0(f_10, t);
                        c_137 = t;
                        t = n_136;
                        t = map1_1_0(g_10, t);
                        e_137 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, p_136, c_137, e_137, m_136);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          p_136 = ATgetArgument(t, 0);
                          q_136 = ATgetArgument(t, 1);
                          n_136 = ATgetArgument(t, 2);
                          m_136 = ATgetArgument(t, 3);
                          {
                            ATerm q_49 = t;
                            int r_49 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm o_137 = NULL,q_137 = NULL;
                                t = n_136;
                                t = map1_1_0(h_10, t);
                                o_137 = t;
                                t = q_136;
                                t = map_1_0(i_10, t);
                                q_137 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, p_136, q_137, o_137, m_136);
                                ;
                                LocalPopChoice(r_49);
                              }
                            else
                              {
                                t = q_49;
                                {
                                  ATerm a_138 = NULL,c_138 = NULL;
                                  t = q_136;
                                  t = map1_1_0(j_10, t);
                                  a_138 = t;
                                  t = n_136;
                                  t = map_1_0(k_10, t);
                                  c_138 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, p_136, a_138, c_138, m_136);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              p_136 = ATgetArgument(t, 0);
                              q_136 = ATgetArgument(t, 1);
                              n_136 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, q_136, (ATerm) ATmakeAppl(sym_Op_2, term_u_32, (ATerm) ATinsert(ATinsert(ATempty, n_136), p_136)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  p_136 = ATgetArgument(t, 0);
                                  q_136 = ATgetArgument(t, 1);
                                  n_136 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, n_136)), p_136), (ATerm) ATmakeAppl(sym_Build_1, q_136)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      p_136 = ATgetArgument(t, 0);
                                      q_136 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_136, (ATerm) ATmakeAppl(sym_Match_1, q_136));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          p_136 = ATgetArgument(t, 0);
                                          q_136 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_136), q_136);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              p_136 = ATgetArgument(t, 0);
                                              q_136 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_136), p_136);
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
  ATerm n_139 = NULL,o_139 = NULL,p_139 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      n_139 = ATgetArgument(t, 0);
      t = n_139;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_o_17;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          n_139 = ATgetArgument(t, 0);
          t = n_139;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_i_17;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              n_139 = ATgetArgument(t, 0);
              o_139 = ATgetArgument(t, 1);
              t = n_139;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_o_17;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  n_139 = ATgetArgument(t, 0);
                  o_139 = ATgetArgument(t, 1);
                  t = o_139;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_o_17;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      n_139 = ATgetArgument(t, 0);
                      o_139 = ATgetArgument(t, 1);
                      t = o_139;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_o_17;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          n_139 = ATgetArgument(t, 0);
                          t = n_139;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_o_17;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              n_139 = ATgetArgument(t, 0);
                              t = n_139;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_o_17;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  n_139 = ATgetArgument(t, 0);
                                  o_139 = ATgetArgument(t, 1);
                                  t = o_139;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_o_17;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      n_139 = ATgetArgument(t, 0);
                                      o_139 = ATgetArgument(t, 1);
                                      t = o_139;
                                      t = fetch_1_0(m_10, t);
                                      t = term_o_17;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          n_139 = ATgetArgument(t, 0);
                                          o_139 = ATgetArgument(t, 1);
                                          t = o_139;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = n_139;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = o_139;
                                                }
                                              else
                                                {
                                                  t = n_139;
                                                }
                                            }
                                          else
                                            {
                                              t = n_139;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = o_139;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              n_139 = ATgetArgument(t, 0);
                                              o_139 = ATgetArgument(t, 1);
                                              t = o_139;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = n_139;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = o_139;
                                                    }
                                                  else
                                                    {
                                                      t = n_139;
                                                    }
                                                }
                                              else
                                                {
                                                  t = n_139;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = o_139;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  n_139 = ATgetArgument(t, 0);
                                                  t = n_139;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_o_17;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      n_139 = ATgetArgument(t, 0);
                                                      o_139 = ATgetArgument(t, 1);
                                                      p_139 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = p_139;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_139, o_139);
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
  ATerm t_140 = NULL,v_140 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      v_140 = ATgetArgument(t, 0);
      t = v_140;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_i_17;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          v_140 = ATgetArgument(t, 0);
          t = v_140;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_o_17;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              v_140 = ATgetArgument(t, 0);
              t_140 = ATgetArgument(t, 1);
              t = t_140;
              if(match_cons(t, sym_Id_0))
                {
                  t = v_140;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = t_140;
                    }
                  else
                    {
                      t = v_140;
                    }
                }
              else
                {
                  t = v_140;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = t_140;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  v_140 = ATgetArgument(t, 0);
                  t_140 = ATgetArgument(t, 1);
                  t = v_140;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_i_17;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      v_140 = ATgetArgument(t, 0);
                      t_140 = ATgetArgument(t, 1);
                      t = t_140;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_i_17;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          v_140 = ATgetArgument(t, 0);
                          t_140 = ATgetArgument(t, 1);
                          t = t_140;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_i_17;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              v_140 = ATgetArgument(t, 0);
                              t = v_140;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_i_17;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  v_140 = ATgetArgument(t, 0);
                                  t = v_140;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_i_17;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      v_140 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = v_140;
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
  ATerm s_49 = t;
  int t_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(t_49);
    }
  else
    {
      t = s_49;
      {
        ATerm v_49 = t;
        int y_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(y_49);
          }
        else
          {
            t = v_49;
            {
              ATerm a_50 = t;
              int b_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(b_50);
                }
              else
                {
                  t = a_50;
                  {
                    ATerm c_50 = t;
                    int d_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(d_50);
                      }
                    else
                      {
                        t = c_50;
                        {
                          ATerm e_50 = t;
                          int g_50 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(g_50);
                            }
                          else
                            {
                              t = e_50;
                              {
                                ATerm l_50 = t;
                                int m_50 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm k_141 = NULL,l_141 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        k_141 = ATgetArgument(t, 0);
                                        l_141 = ATgetArgument(t, 1);
                                        t = k_141;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = l_141;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            k_141 = ATgetArgument(t, 0);
                                            l_141 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = k_141;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = l_141;
                                      }
                                    ;
                                    LocalPopChoice(m_50);
                                  }
                                else
                                  {
                                    t = l_50;
                                    {
                                      ATerm n_50 = t;
                                      int x_50 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(x_50);
                                        }
                                      else
                                        {
                                          t = n_50;
                                          {
                                            ATerm y_50 = t;
                                            int z_50 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                ;
                                                LocalPopChoice(z_50);
                                              }
                                            else
                                              {
                                                t = y_50;
                                                {
                                                  ATerm a_51 = t;
                                                  int b_51 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      ;
                                                      LocalPopChoice(b_51);
                                                    }
                                                  else
                                                    {
                                                      t = a_51;
                                                      {
                                                        ATerm c_51 = t;
                                                        int d_51 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            ;
                                                            LocalPopChoice(d_51);
                                                          }
                                                        else
                                                          {
                                                            t = c_51;
                                                            {
                                                              ATerm e_51 = t;
                                                              int q_51 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  ;
                                                                  LocalPopChoice(q_51);
                                                                }
                                                              else
                                                                {
                                                                  t = e_51;
                                                                  {
                                                                    ATerm r_51 = t;
                                                                    int w_51 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        ;
                                                                        LocalPopChoice(w_51);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_51;
                                                                        {
                                                                          ATerm x_51 = t;
                                                                          int b_52 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              ;
                                                                              LocalPopChoice(b_52);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = x_51;
                                                                              {
                                                                                ATerm c_52 = t;
                                                                                int d_52 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(d_52);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = c_52;
                                                                                    {
                                                                                      ATerm p_141 = NULL,q_141 = NULL,r_141 = NULL,s_141 = NULL;
                                                                                      q_141 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          r_141 = ATgetArgument(t, 0);
                                                                                          s_141 = ATgetArgument(t, 1);
                                                                                          t = r_141;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              p_141 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = q_141;
                                                                                          t = o_14(p_141, s_141, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              r_141 = ATgetArgument(t, 0);
                                                                                              s_141 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = r_141;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = s_141;
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
ATerm repeat_1_0 (ATerm q_113 (ATerm), ATerm t)
{
  ATerm z_141 (ATerm t)
  {
    ATerm e_52 = t;
    int f_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_113(t);
        t = z_141(t);
        ;
        LocalPopChoice(f_52);
      }
    else
      {
        t = e_52;
      }
    return(t);
  }
  t = z_141(t);
  return(t);
}
ATerm downup_1_0 (ATerm p_96 (ATerm), ATerm t)
{
  t = p_96(t);
  {
    ATerm o_10 (ATerm t)
    {
      t = downup_1_0(p_96, t);
      return(t);
    }
    t = SRTS_all(o_10, t);
    t = p_96(t);
  }
  return(t);
}
ATerm p_10 (ATerm t)
{
  t = downup_1_0(r_10, t);
  {
    ATerm g_52 = t;
    int h_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        ;
        LocalPopChoice(h_52);
      }
    else
      {
        t = g_52;
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
ATerm Cons_2_0 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm t)
{
  ATerm d_142 = NULL,e_142 = NULL,f_142 = NULL,g_142 = NULL,h_142 = NULL,i_142 = NULL,i_66 = NULL;
  i_142 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_142 = ATgetFirst((ATermList) t);
      f_142 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_142);
  d_142 = t;
  t = e_142;
  t = h_80(t);
  g_142 = t;
  t = f_142;
  t = i_80(t);
  h_142 = t;
  t = (ATerm) ATinsert(CheckATermList(h_142), g_142);
  i_66 = t;
  t = SSLsetAnnotations(i_66, d_142);
  return(t);
}
ATerm m_15 (ATerm r_71, ATerm s_71, ATerm t)
{
  ATerm j_142 = NULL;
  t = SSL_fputc(r_71, s_71);
  j_142 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_142);
  return(t);
}
ATerm n_15 (ATerm q_74, ATerm r_74, ATerm t)
{
  ATerm k_142 = NULL;
  t = SSL_write_term_to_stream_text(q_74, r_74);
  k_142 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_142);
  return(t);
}
ATerm p_15 (ATerm b_124 (ATerm), ATerm u_718, ATerm u_74, ATerm t)
{
  ATerm l_142 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_718, term_i_52);
  t = open_stream_0_0(t);
  l_142 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_142, u_74);
  t = b_124(t);
  t = fclose_0_0(t);
  t = u_74;
  return(t);
}
ATerm o_15 (ATerm m_74, ATerm n_74, ATerm t)
{
  ATerm m_142 = NULL;
  t = SSL_write_term_to_stream_baf(m_74, n_74);
  m_142 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_142);
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
  ATerm a_56 = NULL,c_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_52 = ATgetArgument(t, 0);
      if(match_cons(j_52, sym_Stream_1))
        {
          a_56 = ATgetArgument(j_52, 0);
        }
      else
        _fail(t);
      c_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_15(a_56, c_56, t);
  return(t);
}
ATerm d_11 (ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL,i_58 = NULL,o_58 = NULL,p_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_52 = ATgetArgument(t, 0);
      if(match_cons(o_52, sym_Stream_1))
        {
          o_58 = ATgetArgument(o_52, 0);
        }
      else
        _fail(t);
      p_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(o_58, p_58, t);
  c_58 = t;
  t = term_p_52;
  d_58 = t;
  t = c_58;
  if(match_cons(t, sym_Stream_1))
    {
      i_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_p_52, c_58);
  t = m_15(d_58, i_58, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm q_142 = NULL,r_142 = NULL,s_142 = NULL,t_142 = NULL,u_142 = NULL,w_142 = NULL,x_142 = NULL,y_142 = NULL,z_142 = NULL,a_143 = NULL,a_144 = NULL,b_144 = NULL,s_66 = NULL,k_66 = NULL;
  r_142 = t;
  if(match_cons(t, sym__2))
    {
      y_142 = ATgetArgument(t, 0);
      z_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_142);
  x_142 = t;
  t = y_142;
  {
    ATerm q_52 = t;
    int x_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_10 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((q_142 != NULL) && (q_142 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_142 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(s_10, t);
        ;
        LocalPopChoice(x_52);
      }
    else
      {
        t = q_52;
        t = term_y_52;
        q_142 = t;
      }
    a_143 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_143, z_142);
    k_66 = t;
    t = SSLsetAnnotations(k_66, x_142);
    t = r_142;
    if(match_cons(t, sym__2))
      {
        t_142 = ATgetArgument(t, 0);
        u_142 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(r_142);
    s_142 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_142, (ATerm) ATmakeAppl(sym__2, not_null(q_142), u_142));
    s_66 = t;
    t = SSLsetAnnotations(s_66, s_142);
    w_142 = t;
    if(match_cons(t, sym__2))
      {
        a_144 = ATgetArgument(t, 0);
        b_144 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm z_52 = t;
      int a_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_54 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,y_55 = NULL,x_66 = NULL;
          t = SSLgetAnnotations(w_142);
          w_54 = t;
          t = a_144;
          t = fetch_1_0(w_10, t);
          u_55 = t;
          t = b_144;
          if(match_cons(t, sym__2))
            {
              w_55 = ATgetArgument(t, 0);
              y_55 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_15(x_10, w_55, y_55, t);
          v_55 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_55, v_55);
          x_66 = t;
          t = SSLsetAnnotations(x_66, w_54);
          ;
          LocalPopChoice(a_53);
        }
      else
        {
          t = z_52;
          {
            ATerm q_56 = NULL,v_57 = NULL,y_57 = NULL,b_58 = NULL,y_66 = NULL;
            t = SSLgetAnnotations(w_142);
            q_56 = t;
            t = b_144;
            if(match_cons(t, sym__2))
              {
                y_57 = ATgetArgument(t, 0);
                b_58 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = p_15(d_11, y_57, b_58, t);
            v_57 = t;
            t = (ATerm) ATmakeAppl(sym__2, a_144, v_57);
            y_66 = t;
            t = SSLsetAnnotations(y_66, q_56);
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
ATerm apply_strategy_1_0 (ATerm w_118 (ATerm), ATerm t)
{
  ATerm e_144 = NULL,f_144 = NULL,g_144 = NULL,h_144 = NULL,i_144 = NULL;
  i_144 = t;
  t = dtime_0_0(t);
  t = i_144;
  t = w_118(t);
  h_144 = t;
  t = dtime_0_0(t);
  e_144 = t;
  t = h_144;
  if(match_cons(t, sym__2))
    {
      f_144 = ATgetArgument(t, 0);
      g_144 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_144), (ATerm) ATmakeAppl(sym_Runtime_1, e_144)), g_144);
  return(t);
}
ATerm w_144 (ATerm q_144, ATerm t)
{
  t = SSL_fclose(q_144);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_144 = NULL,u_144 = NULL;
  u_144 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_144 = ATgetArgument(t, 0);
      {
        ATerm b_53 = t;
        int c_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_144);
            ;
            LocalPopChoice(c_53);
          }
        else
          {
            t = b_53;
            t = w_144(u_144, t);
          }
      }
    }
  else
    {
      t = w_144(u_144, t);
    }
  return(t);
}
ATerm q_15 (ATerm s_74, ATerm t)
{
  t = SSL_read_term_from_stream(s_74);
  return(t);
}
ATerm r_15 (ATerm t_71, ATerm u_71, ATerm t)
{
  ATerm x_144 = NULL;
  t = SSL_fopen(t_71, u_71);
  x_144 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_144);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_144 = NULL;
  t = SSL_stdin_stream();
  y_144 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_144);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_144 = NULL;
  t = SSL_stdout_stream();
  z_144 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_144);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_145 = NULL;
  t = SSL_stderr_stream();
  a_145 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_145);
  return(t);
}
ATerm h_146 (ATerm g_145, ATerm t)
{
  ATerm h_145 = NULL;
  t = SSL_explode_term(g_145);
  if(match_cons(t, sym__2))
    {
      ATerm d_53 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_53) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_53 = ATgetArgument(t, 1);
        if(((ATgetType(v_53) == AT_LIST) && !(ATisEmpty(v_53))))
          {
            h_145 = ATgetFirst((ATermList) v_53);
            {
              ATerm y_53 = (ATerm) ATgetNext((ATermList) v_53);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_145;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_145;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_145;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_145;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm i_146 (ATerm k_145, ATerm l_145, ATerm m_145, ATerm t)
{
  ATerm n_145 = NULL,o_145 = NULL,p_145 = NULL,s_145 = NULL,e_67 = NULL;
  t = SSLgetAnnotations(m_145);
  p_145 = t;
  t = k_145;
  if(match_cons(t, sym_Path_1))
    {
      s_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_145, l_145);
  e_67 = t;
  t = SSLsetAnnotations(e_67, p_145);
  if(match_cons(t, sym__2))
    {
      n_145 = ATgetArgument(t, 0);
      o_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_15(n_145, o_145, t);
  return(t);
}
ATerm j_146 (ATerm u_145, ATerm v_145, ATerm w_145, ATerm t)
{
  ATerm x_145 = NULL,y_145 = NULL,z_145 = NULL,c_146 = NULL,h_67 = NULL;
  t = SSLgetAnnotations(w_145);
  z_145 = t;
  t = SSL_is_string(u_145);
  c_146 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_146, v_145);
  h_67 = t;
  t = SSLsetAnnotations(h_67, z_145);
  if(match_cons(t, sym__2))
    {
      x_145 = ATgetArgument(t, 0);
      y_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_15(x_145, y_145, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm e_146 = NULL,f_146 = NULL,g_146 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_53 = ATgetArgument(t, 0);
      ATerm c_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  e_146 = t;
  if(match_cons(t, sym__2))
    {
      f_146 = ATgetArgument(t, 0);
      g_146 = ATgetArgument(t, 1);
      {
        ATerm d_54 = t;
        int e_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_146(e_146, t);
            ;
            LocalPopChoice(e_54);
          }
        else
          {
            t = d_54;
            {
              ATerm f_54 = t;
              int g_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_146(f_146, g_146, e_146, t);
                  ;
                  LocalPopChoice(g_54);
                }
              else
                {
                  t = f_54;
                  t = j_146(f_146, g_146, e_146, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_146(e_146, t);
    }
  return(t);
}
ATerm h_11 (ATerm t)
{
  t = term_h_54;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_146 = NULL,l_146 = NULL,m_146 = NULL;
  ATerm i_54 = t;
  int j_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_146 = NULL;
      n_146 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_146, term_k_54);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(j_54);
    }
  else
    {
      t = i_54;
      t = debug_1_0(h_11, t);
      _fail(t);
    }
  l_146 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_146 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_15(m_146, t);
  k_146 = t;
  t = l_146;
  t = fclose_0_0(t);
  t = k_146;
  return(t);
}
ATerm fetch_1_0 (ATerm y_102 (ATerm), ATerm t)
{
  ATerm m_147 (ATerm t)
  {
    ATerm i_147 = NULL,k_147 = NULL,l_147 = NULL;
    i_147 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_147 = ATgetFirst((ATermList) t);
        l_147 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_54 = t;
      int n_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_59 = NULL,l_59 = NULL,m_67 = NULL;
          t = SSLgetAnnotations(i_147);
          i_59 = t;
          t = k_147;
          t = y_102(t);
          l_59 = t;
          t = (ATerm) ATinsert(CheckATermList(l_147), l_59);
          m_67 = t;
          t = SSLsetAnnotations(m_67, i_59);
          ;
          LocalPopChoice(n_54);
        }
      else
        {
          t = l_54;
          {
            ATerm t_59 = NULL,w_59 = NULL,n_67 = NULL;
            t = SSLgetAnnotations(i_147);
            t_59 = t;
            t = l_147;
            t = m_147(t);
            w_59 = t;
            t = (ATerm) ATinsert(CheckATermList(w_59), k_147);
            n_67 = t;
            t = SSLsetAnnotations(n_67, t_59);
          }
        }
    }
    return(t);
  }
  t = m_147(t);
  return(t);
}
ATerm l_15 (ATerm q_45, ATerm r_45, ATerm t)
{
  t = SSL_strcat(q_45, r_45);
  return(t);
}
ATerm debug_1_0 (ATerm z_123 (ATerm), ATerm t)
{
  ATerm p_147 = NULL,q_147 = NULL,r_147 = NULL,s_147 = NULL;
  p_147 = t;
  t = z_123(t);
  q_147 = t;
  t = term_h_15;
  r_147 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_147), q_147);
  s_147 = t;
  t = SSL_printnl(r_147, s_147);
  t = p_147;
  return(t);
}
ATerm i_11 (ATerm t)
{
  ATerm o_54 = t;
  int q_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(q_54);
    }
  else
    {
      t = o_54;
    }
  return(t);
}
ATerm j_11 (ATerm t)
{
  t = term_r_54;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm s_54 = t;
  int t_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_148 = NULL;
      a_148 = t;
      t = SSL_is_string(a_148);
      ;
      LocalPopChoice(t_54);
    }
  else
    {
      t = s_54;
      {
        ATerm u_54 = t;
        int v_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_11, t);
            ;
            LocalPopChoice(v_54);
          }
        else
          {
            t = u_54;
            {
              ATerm g_148 = NULL,h_148 = NULL,i_148 = NULL;
              g_148 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_148 = ATgetArgument(t, 0);
                  t = h_148;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_148 = ATgetArgument(t, 0);
                      t = h_148;
                      {
                        ATerm x_54 = t;
                        int f_55 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(f_55);
                          }
                        else
                          {
                            t = x_54;
                            t = debug_1_0(j_11, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm m_148 = NULL,n_148 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_148 = ATgetArgument(t, 0);
                          i_148 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_148;
                      t = eval_config_0_0(t);
                      m_148 = t;
                      t = i_148;
                      t = eval_config_0_0(t);
                      n_148 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_148, n_148);
                      t = l_15(m_148, n_148, t);
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
  ATerm r_148 = NULL,s_148 = NULL;
  r_148 = t;
  t = term_g_55;
  s_148 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_55, r_148);
  t = u_15(s_148, r_148, t);
  {
    ATerm n_55 = t;
    int o_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_148 = NULL,u_148 = NULL;
        t = eval_config_0_0(t);
        t_148 = t;
        t = term_g_55;
        u_148 = t;
        t = SSL_table_put(u_148, r_148, t_148);
        t = t_148;
        ;
        LocalPopChoice(o_55);
      }
    else
      {
        t = n_55;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm k_117 (ATerm), ATerm t)
{
  ATerm y_148 = NULL;
  y_148 = t;
  {
    ATerm d_56 = t;
    int g_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_149 = NULL;
        t = term_k_56;
        t = get_config_0_0(t);
        a_149 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_149, term_l_56);
        t = geq_0_0(t);
        t = y_148;
        t = k_117(t);
        ;
        LocalPopChoice(g_56);
      }
    else
      {
        t = d_56;
        t = y_148;
      }
  }
  return(t);
}
ATerm k_11 (ATerm t)
{
  ATerm d_149 = NULL;
  d_149 = t;
  if(match_string(t, "-k"))
    {
      t = d_149;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_149;
    }
  return(t);
}
ATerm p_11 (ATerm t)
{
  ATerm e_149 = NULL,f_149 = NULL,g_149 = NULL;
  e_149 = t;
  t = SSL_string_to_int(e_149);
  f_149 = t;
  t = term_m_56;
  g_149 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_56, f_149);
  t = x_15(g_149, f_149, t);
  t = e_149;
  return(t);
}
ATerm q_11 (ATerm t)
{
  t = term_n_56;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_11, p_11, q_11, t);
  return(t);
}
ATerm s_11 (ATerm t)
{
  ATerm i_149 = NULL;
  i_149 = t;
  if(match_string(t, "-S"))
    {
      t = i_149;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_149;
    }
  return(t);
}
ATerm t_11 (ATerm t)
{
  ATerm j_149 = NULL,k_149 = NULL;
  t = term_k_56;
  j_149 = t;
  t = term_k_43;
  k_149 = t;
  t = term_o_56;
  t = x_15(j_149, k_149, t);
  t = term_p_56;
  return(t);
}
ATerm u_11 (ATerm t)
{
  t = term_r_56;
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
  ATerm l_149 = NULL,m_149 = NULL,n_149 = NULL;
  l_149 = t;
  t = SSL_string_to_int(l_149);
  m_149 = t;
  t = term_k_56;
  n_149 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_56, m_149);
  t = x_15(n_149, m_149, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_149);
  return(t);
}
ATerm y_11 (ATerm t)
{
  t = term_s_56;
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
  ATerm o_149 = NULL,p_149 = NULL;
  t = term_t_56;
  o_149 = t;
  t = term_g_15;
  p_149 = t;
  t = term_u_56;
  t = x_15(o_149, p_149, t);
  t = term_v_56;
  return(t);
}
ATerm d_12 (ATerm t)
{
  t = term_w_56;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_56 = t;
  int y_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_11, t_11, u_11, t);
      ;
      LocalPopChoice(y_56);
    }
  else
    {
      t = x_56;
      {
        ATerm z_56 = t;
        int a_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_11, x_11, y_11, t);
            ;
            LocalPopChoice(a_57);
          }
        else
          {
            t = z_56;
            t = Option_3_0(b_12, c_12, d_12, t);
          }
      }
    }
  return(t);
}
ATerm x_15 (ATerm w_47, ATerm x_47, ATerm t)
{
  ATerm q_149 = NULL;
  t = term_g_55;
  q_149 = t;
  t = SSL_table_put(q_149, w_47, x_47);
  t = (ATerm) ATmakeAppl(sym__3, term_g_55, w_47, x_47);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm t_149 = NULL,u_149 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_149 = NULL,w_149 = NULL,x_149 = NULL;
      t = term_g_15;
      t = h_0(t);
      v_149 = t;
      t = term_b_57;
      w_149 = t;
      t = term_c_57;
      x_149 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_57, term_c_57, v_149);
      t = v_15(w_149, x_149, v_149, t);
      _fail(t);
    }
  else
    {
      ATerm a_150 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_149 = ATgetFirst((ATermList) t);
          u_149 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_149;
      t = c_0(t);
      t = term_g_15;
      t = e_0(t);
      a_150 = t;
      t = (ATerm) ATinsert(CheckATermList(u_149), a_150);
    }
  return(t);
}
ATerm e_12 (ATerm t)
{
  ATerm c_150 = NULL;
  c_150 = t;
  if(match_string(t, "-o"))
    {
      t = c_150;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_150;
    }
  return(t);
}
ATerm f_12 (ATerm t)
{
  ATerm d_150 = NULL,e_150 = NULL;
  d_150 = t;
  t = term_d_57;
  e_150 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_57, d_150);
  t = x_15(e_150, d_150, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_150);
  return(t);
}
ATerm g_12 (ATerm t)
{
  t = term_e_57;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_12, f_12, g_12, t);
  return(t);
}
ATerm v_15 (ATerm h_37, ATerm i_37, ATerm g_37, ATerm t)
{
  ATerm g_150 = NULL,h_150 = NULL,i_150 = NULL;
  g_150 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_37, i_37);
  {
    ATerm f_57 = t;
    int g_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_57 = ATgetArgument(t, 0);
            ATerm i_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_37, i_37);
        t = u_15(h_37, i_37, t);
        ;
        LocalPopChoice(g_57);
      }
    else
      {
        t = f_57;
        t = (ATerm) ATempty;
      }
    h_150 = t;
    t = (ATerm) ATinsert(CheckATermList(h_150), g_37);
    i_150 = t;
    t = SSL_table_put(h_37, i_37, i_150);
    t = g_150;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm s_0 (ATerm), ATerm t)
{
  ATerm p_150 = NULL,q_150 = NULL,r_150 = NULL,s_150 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_150 = NULL,u_150 = NULL,v_150 = NULL;
      t = term_g_15;
      t = s_0(t);
      t_150 = t;
      t = term_b_57;
      u_150 = t;
      t = term_c_57;
      v_150 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_57, term_c_57, t_150);
      t = v_15(u_150, v_150, t_150, t);
      _fail(t);
    }
  else
    {
      ATerm z_150 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_150 = ATgetFirst((ATermList) t);
          q_150 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_150;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_150 = ATgetFirst((ATermList) t);
          s_150 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_150;
      t = l_0(t);
      t = r_150;
      t = m_0(t);
      z_150 = t;
      t = (ATerm) ATinsert(CheckATermList(s_150), z_150);
    }
  return(t);
}
ATerm h_12 (ATerm t)
{
  ATerm b_151 = NULL;
  b_151 = t;
  if(match_string(t, "-i"))
    {
      t = b_151;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_151;
    }
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm c_151 = NULL,d_151 = NULL;
  c_151 = t;
  t = term_j_57;
  d_151 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_57, c_151);
  t = x_15(d_151, c_151, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_151);
  return(t);
}
ATerm j_12 (ATerm t)
{
  t = term_k_57;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_12, i_12, j_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_151 = NULL,f_151 = NULL,g_151 = NULL,h_151 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_15;
  t = whoami_0_0(t);
  e_151 = t;
  t = term_h_15;
  g_151 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_57), e_151);
  h_151 = t;
  t = SSL_printnl(g_151, h_151);
  t = term_k_15;
  f_151 = t;
  t = SSL_exit(f_151);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_m_57;
  t = get_config_0_0(t);
  return(t);
}
ATerm s_15 (ATerm i_35, ATerm j_35, ATerm t)
{
  ATerm n_57 = t;
  int o_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_35, j_35);
      ;
      LocalPopChoice(o_57);
    }
  else
    {
      t = n_57;
      t = SSL_addr(i_35, j_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm t)
{
  ATerm j_151 = NULL,k_151 = NULL,l_151 = NULL;
  j_151 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_151;
      t = p_107(t);
    }
  else
    {
      ATerm o_151 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_151 = ATgetFirst((ATermList) t);
          l_151 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_151;
      t = foldr_2_0(p_107, q_107, t);
      o_151 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_151, o_151);
      t = q_107(t);
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
  t = term_k_43;
  return(t);
}
ATerm m_12 (ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL;
  if(match_cons(t, sym__2))
    {
      n_60 = ATgetArgument(t, 0);
      o_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_15(n_60, o_60, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_151 = NULL,j_60 = NULL,k_60 = NULL;
  t = times_0_0(t);
  k_60 = t;
  t = SSL_explode_term(k_60);
  if(match_cons(t, sym__2))
    {
      ATerm p_57 = ATgetArgument(t, 0);
      j_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_60;
  t = foldr_2_0(l_12, m_12, t);
  r_151 = t;
  t = SSL_TicksToSeconds(r_151);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_152 = NULL,d_152 = NULL,e_152 = NULL;
  c_152 = t;
  if(match_cons(t, sym__2))
    {
      d_152 = ATgetArgument(t, 0);
      e_152 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_57 = t;
    int r_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_152;
        if((d_152 != t))
          {
            _fail(t);
          }
        t = c_152;
        ;
        LocalPopChoice(r_57);
      }
    else
      {
        t = q_57;
        t = (ATerm) ATmakeAppl(sym__2, d_152, e_152);
        {
          ATerm s_57 = t;
          int t_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_152, e_152);
              ;
              LocalPopChoice(t_57);
            }
          else
            {
              t = s_57;
              t = SSL_gtr(d_152, e_152);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_152, e_152);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_117 (ATerm), ATerm t)
{
  ATerm i_152 = NULL;
  i_152 = t;
  {
    ATerm w_57 = t;
    int x_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_152 = NULL;
        t = term_k_56;
        t = get_config_0_0(t);
        k_152 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_152, term_k_15);
        t = geq_0_0(t);
        t = i_152;
        t = j_117(t);
        ;
        LocalPopChoice(x_57);
      }
    else
      {
        t = w_57;
        t = i_152;
      }
  }
  return(t);
}
ATerm o_12 (ATerm t)
{
  ATerm m_152 = NULL,n_152 = NULL,p_152 = NULL,q_152 = NULL;
  t = run_time_0_0(t);
  m_152 = t;
  t = term_g_15;
  t = whoami_0_0(t);
  n_152 = t;
  t = term_h_15;
  p_152 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_58), m_152), term_z_57), n_152);
  q_152 = t;
  t = SSL_printnl(p_152, q_152);
  t = (ATerm) ATmakeAppl(sym__2, term_h_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_58), m_152), term_z_57), n_152));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_152 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_43;
  r_152 = t;
  t = SSL_exit(r_152);
  return(t);
}
ATerm p_12 (ATerm t)
{
  ATerm z_152 = NULL,a_153 = NULL;
  a_153 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = a_153;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          z_152 = ATgetArgument(t, 0);
          {
            ATerm d_61 = NULL,u_67 = NULL;
            t = SSLgetAnnotations(a_153);
            d_61 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, z_152);
            u_67 = t;
            t = SSLsetAnnotations(u_67, d_61);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = a_153;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_119 (ATerm), ATerm t)
{
  ATerm e_58 = t;
  int f_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_58;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_58);
    }
  else
    {
      t = e_58;
      t = fetch_1_0(p_12, t);
    }
  t = u_119(t);
  return(t);
}
ATerm map_1_0 (ATerm o_102 (ATerm), ATerm t)
{
  ATerm q_153 (ATerm t)
  {
    ATerm n_153 = NULL,o_153 = NULL,p_153 = NULL;
    n_153 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_153;
      }
    else
      {
        ATerm p_61 = NULL,t_61 = NULL,u_61 = NULL,w_67 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_153 = ATgetFirst((ATermList) t);
            p_153 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_153);
        p_61 = t;
        t = o_153;
        t = o_102(t);
        t_61 = t;
        t = p_153;
        t = q_153(t);
        u_61 = t;
        t = (ATerm) ATinsert(CheckATermList(u_61), t_61);
        w_67 = t;
        t = SSLsetAnnotations(w_67, p_61);
      }
    return(t);
  }
  t = q_153(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm t_153 = NULL,u_153 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_153 = ATgetFirst((ATermList) t);
      u_153 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_153 = NULL,z_153 = NULL;
        ATerm q_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_153)), not_null(z_153));
          return(t);
        }
        t = u_153;
        t = j_0(t);
        if(((y_153 != NULL) && (y_153 != t)))
          _fail(t);
        else
          y_153 = t;
        t = t_153;
        t = i_0(t);
        if(((z_153 != NULL) && (z_153 != t)))
          _fail(t);
        else
          z_153 = t;
        t = u_153;
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
ATerm u_15 (ATerm y_38, ATerm z_38, ATerm t)
{
  t = SSL_table_get(y_38, z_38);
  return(t);
}
ATerm r_12 (ATerm t)
{
  ATerm d_154 = NULL,e_154 = NULL,f_154 = NULL,y_67 = NULL;
  f_154 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_154 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_154);
  d_154 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_154);
  y_67 = t;
  t = SSLsetAnnotations(y_67, d_154);
  return(t);
}
ATerm s_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_12 (ATerm t)
{
  ATerm h_154 = NULL;
  h_154 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_154), term_h_58);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_154 = NULL,c_154 = NULL;
  ATerm j_58 = t;
  int k_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_57;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_58);
    }
  else
    {
      t = j_58;
      t = fetch_1_0(r_12, t);
    }
  t = term_l_58;
  t = echo_0_0(t);
  t = term_b_57;
  b_154 = t;
  t = term_c_57;
  c_154 = t;
  t = term_m_58;
  t = u_15(b_154, c_154, t);
  t = reverse_acc_2_0(_id, s_12, t);
  t = map_1_0(w_12, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_154 = NULL,k_154 = NULL,l_154 = NULL;
  j_154 = t;
  {
    ATerm n_58 = t;
    int q_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_154;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_58 = ATgetFirst((ATermList) t);
                ATerm s_58 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_154;
          }
        ;
        LocalPopChoice(q_58);
      }
    else
      {
        t = n_58;
        t = (ATerm) ATinsert(ATempty, j_154);
      }
    k_154 = t;
    t = term_y_52;
    l_154 = t;
    t = SSL_printnl(l_154, k_154);
    t = j_154;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_m_57;
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
  ATerm p_154 = NULL,q_154 = NULL;
  t = term_u_58;
  p_154 = t;
  t = term_g_15;
  q_154 = t;
  t = term_v_58;
  t = x_15(p_154, q_154, t);
  return(t);
}
ATerm a_13 (ATerm t)
{
  t = term_w_58;
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
  ATerm r_154 = NULL,s_154 = NULL,t_154 = NULL,u_154 = NULL;
  t = term_u_58;
  t_154 = t;
  t = term_g_15;
  u_154 = t;
  t = term_v_58;
  t = x_15(t_154, u_154, t);
  t = term_x_58;
  r_154 = t;
  t = term_g_15;
  s_154 = t;
  t = term_y_58;
  t = x_15(r_154, s_154, t);
  t = term_z_58;
  return(t);
}
ATerm d_13 (ATerm t)
{
  t = term_a_59;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_59 = t;
  int c_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_12, z_12, a_13, t);
      ;
      LocalPopChoice(c_59);
    }
  else
    {
      t = b_59;
      t = Option_3_0(b_13, c_13, d_13, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_121 (ATerm), ATerm t)
{
  ATerm z_154 = NULL,a_155 = NULL,b_155 = NULL,c_155 = NULL,e_155 = NULL,f_155 = NULL,a_68 = NULL;
  z_154 = t;
  {
    ATerm d_59 = t;
    int e_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_59;
        t = x_121(t);
        ;
        LocalPopChoice(e_59);
      }
    else
      {
        t = d_59;
      }
    t = z_154;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_155 = ATgetFirst((ATermList) t);
        c_155 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_154);
    a_155 = t;
    t = term_m_57;
    f_155 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_m_57, b_155);
    t = x_15(f_155, b_155, t);
    t = c_155;
    {
      ATerm p_155 (ATerm t)
      {
        ATerm h_59 = t;
        int j_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_59 = t;
            int m_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_155 = NULL;
                i_155 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = i_155;
                ;
                LocalPopChoice(m_59);
              }
            else
              {
                t = k_59;
                t = x_121(t);
                t = Cons_2_0(_id, p_155, t);
              }
            ;
            LocalPopChoice(j_59);
          }
        else
          {
            t = h_59;
            {
              ATerm l_155 = NULL,m_155 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_155 = ATgetFirst((ATermList) t);
                  m_155 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(m_155), (ATerm) ATmakeAppl(sym_Undefined_1, l_155));
            }
          }
        return(t);
      }
      t = p_155(t);
      e_155 = t;
      t = (ATerm) ATinsert(CheckATermList(e_155), (ATerm) ATmakeAppl(sym_Program_1, b_155));
      a_68 = t;
      t = SSLsetAnnotations(a_68, a_155);
    }
  }
  return(t);
}
ATerm g_13 (ATerm t)
{
  ATerm b_156 = NULL;
  b_156 = t;
  if(match_string(t, "--help"))
    {
      t = b_156;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_156;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_156;
        }
    }
  return(t);
}
ATerm i_13 (ATerm t)
{
  ATerm c_156 = NULL,d_156 = NULL;
  t = term_g_58;
  c_156 = t;
  t = term_g_15;
  d_156 = t;
  t = term_n_59;
  t = x_15(c_156, d_156, t);
  t = term_o_59;
  return(t);
}
ATerm y_13 (ATerm t)
{
  t = term_p_59;
  return(t);
}
ATerm a_14 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_121 (ATerm), ATerm t)
{
  ATerm u_155 = NULL,v_155 = NULL,w_155 = NULL,x_155 = NULL,y_155 = NULL,z_155 = NULL,a_156 = NULL;
  w_155 = t;
  t = term_b_57;
  y_155 = t;
  t = term_c_57;
  z_155 = t;
  t = (ATerm) ATempty;
  a_156 = t;
  t = SSL_table_put(y_155, z_155, a_156);
  t = w_155;
  {
    ATerm e_13 (ATerm t)
    {
      ATerm q_59 = t;
      int r_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_121(t);
          ;
          LocalPopChoice(r_59);
        }
      else
        {
          t = q_59;
          {
            ATerm s_59 = t;
            int u_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(g_13, i_13, y_13, t);
                ;
                LocalPopChoice(u_59);
              }
            else
              {
                t = s_59;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_13, t);
    {
      ATerm v_59 = t;
      int x_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_156 = NULL;
          k_156 = t;
          {
            ATerm y_59 = t;
            int z_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_62 = NULL;
                t = k_156;
                {
                  ATerm a_60 = t;
                  int b_60 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_g_58;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(b_60);
                    }
                  else
                    {
                      t = a_60;
                      t = fetch_1_0(a_14, t);
                    }
                  t = k_156;
                  t = default_system_usage_0_0(t);
                  t = term_k_43;
                  e_62 = t;
                  t = SSL_exit(e_62);
                }
                ;
                LocalPopChoice(z_59);
              }
            else
              {
                t = y_59;
                {
                  ATerm n_62 = NULL;
                  t = term_u_58;
                  t = get_config_0_0(t);
                  t = k_156;
                  t = default_system_about_0_0(t);
                  t = term_k_43;
                  n_62 = t;
                  t = SSL_exit(n_62);
                }
              }
          }
          ;
          LocalPopChoice(x_59);
        }
      else
        {
          t = v_59;
          {
            ATerm c_60 = t;
            int d_60 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_156 = NULL,m_156 = NULL,n_156 = NULL;
                ATerm u_14 (ATerm t)
                {
                  ATerm o_156 = NULL,p_156 = NULL,q_156 = NULL,c_68 = NULL;
                  q_156 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      p_156 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_156);
                  o_156 = t;
                  t = p_156;
                  if(((u_155 != NULL) && (u_155 != t)))
                    _fail(t);
                  else
                    u_155 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, p_156);
                  c_68 = t;
                  t = SSLsetAnnotations(c_68, o_156);
                  return(t);
                }
                t = fetch_1_0(u_14, t);
                t = term_h_15;
                m_156 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_155)), term_e_60);
                n_156 = t;
                t = SSL_printnl(m_156, n_156);
                t = (ATerm) ATmakeAppl(sym__2, term_h_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_155)), term_e_60));
                t = default_system_usage_0_0(t);
                t = term_k_15;
                l_156 = t;
                t = SSL_exit(l_156);
                ;
                LocalPopChoice(d_60);
              }
            else
              {
                t = c_60;
              }
          }
        }
      v_155 = t;
      t = term_b_57;
      x_155 = t;
      t = SSL_table_destroy(x_155);
      t = v_155;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_119 (ATerm), ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm t)
{
  ATerm v_156 = NULL,w_156 = NULL,x_156 = NULL,y_156 = NULL;
  t = parse_options_1_0(w_119, t);
  v_156 = t;
  t = term_f_60;
  y_156 = t;
  t = SSL_table_create(y_156);
  t = term_f_60;
  w_156 = t;
  t = term_g_60;
  x_156 = t;
  t = SSL_table_put(w_156, x_156, v_156);
  t = v_156;
  t = y_119(t);
  {
    ATerm h_60 = t;
    int i_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_119, t);
        ;
        LocalPopChoice(i_60);
      }
    else
      {
        t = h_60;
        {
          ATerm p_60 = t;
          int q_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_119(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(q_60);
            }
          else
            {
              t = p_60;
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
  ATerm z_156 = NULL,a_157 = NULL;
  t = term_r_60;
  z_156 = t;
  t = term_g_15;
  a_157 = t;
  t = term_s_60;
  t = x_15(z_156, a_157, t);
  t = term_t_60;
  return(t);
}
ATerm a_15 (ATerm t)
{
  t = term_u_60;
  return(t);
}
ATerm b_15 (ATerm t)
{
  ATerm b_157 = NULL,c_157 = NULL,d_157 = NULL,e_157 = NULL;
  b_157 = t;
  t = term_m_57;
  t = get_config_0_0(t);
  c_157 = t;
  t = term_h_15;
  d_157 = t;
  t = (ATerm) ATinsert(ATempty, c_157);
  e_157 = t;
  t = SSL_printnl(d_157, e_157);
  t = b_157;
  return(t);
}
ATerm iowrap_3_0 (ATerm f_119 (ATerm), ATerm g_119 (ATerm), ATerm h_119 (ATerm), ATerm t)
{
  ATerm v_14 (ATerm t)
  {
    ATerm v_60 = t;
    int w_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_119(t);
        ;
        LocalPopChoice(w_60);
      }
    else
      {
        t = v_60;
        {
          ATerm x_60 = t;
          int y_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(y_60);
            }
          else
            {
              t = x_60;
              {
                ATerm z_60 = t;
                int a_61 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(a_61);
                  }
                else
                  {
                    t = z_60;
                    {
                      ATerm b_61 = t;
                      int c_61 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(y_14, z_14, a_15, t);
                          ;
                          LocalPopChoice(c_61);
                        }
                      else
                        {
                          t = b_61;
                          {
                            ATerm e_61 = t;
                            int f_61 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(f_61);
                              }
                            else
                              {
                                t = e_61;
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
    ATerm f_157 = NULL,g_157 = NULL,h_157 = NULL;
    g_157 = t;
    {
      ATerm g_61 = t;
      int h_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_15 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((f_157 != NULL) && (f_157 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  f_157 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(c_15, t);
          ;
          LocalPopChoice(h_61);
        }
      else
        {
          t = g_61;
          t = term_i_61;
          f_157 = t;
        }
      t = not_null(f_157);
      t = ReadFromFile_0_0(t);
      h_157 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_157, h_157);
      t = apply_strategy_1_0(f_119, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(v_14, h_119, w_14, x_14, t);
  return(t);
}
ATerm d_15 (ATerm t)
{
  ATerm i_157 = NULL,j_157 = NULL,k_157 = NULL,l_157 = NULL,m_157 = NULL,n_157 = NULL,o_157 = NULL,p_157 = NULL,q_157 = NULL,r_157 = NULL,s_157 = NULL,t_157 = NULL,k_68 = NULL,i_68 = NULL,f_68 = NULL;
  t_157 = t;
  if(match_cons(t, sym__2))
    {
      j_157 = ATgetArgument(t, 0);
      k_157 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_157);
  i_157 = t;
  t = k_157;
  if(match_cons(t, sym_Specification_1))
    {
      m_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_157);
  l_157 = t;
  t = m_157;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_157 = ATgetFirst((ATermList) t);
      q_157 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_157);
  o_157 = t;
  t = q_157;
  t = Cons_2_0(e_15, f_15, t);
  r_157 = t;
  t = (ATerm) ATinsert(CheckATermList(r_157), p_157);
  f_68 = t;
  t = SSLsetAnnotations(f_68, o_157);
  s_157 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, s_157);
  i_68 = t;
  t = SSLsetAnnotations(i_68, l_157);
  n_157 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_157, n_157);
  k_68 = t;
  t = SSLsetAnnotations(k_68, i_157);
  return(t);
}
ATerm e_15 (ATerm t)
{
  ATerm u_157 = NULL,v_157 = NULL,w_157 = NULL,x_157 = NULL,e_68 = NULL;
  x_157 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      v_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_157);
  u_157 = t;
  t = v_157;
  t = inline_sdefs_0_0(t);
  w_157 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, w_157);
  e_68 = t;
  t = SSLsetAnnotations(e_68, u_157);
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
