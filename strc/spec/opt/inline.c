#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Cong_2;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_FunType_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_App_2;
Symbol sym_As_2;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_ExtendOverrideDynamicRules_1;
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
Symbol sym_ExtSDefInl_4;
Symbol sym_Some_1;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
static void init_module_constructors (void)
{
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
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
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
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
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
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
}
ATerm term_m_59;
ATerm term_j_59;
ATerm term_i_59;
ATerm term_r_58;
ATerm term_q_58;
ATerm term_p_58;
ATerm term_c_58;
ATerm term_b_58;
ATerm term_a_58;
ATerm term_v_57;
ATerm term_q_57;
ATerm term_o_57;
ATerm term_n_57;
ATerm term_m_57;
ATerm term_l_57;
ATerm term_k_57;
ATerm term_j_57;
ATerm term_z_56;
ATerm term_p_56;
ATerm term_o_56;
ATerm term_k_56;
ATerm term_j_56;
ATerm term_g_56;
ATerm term_f_56;
ATerm term_t_55;
ATerm term_q_55;
ATerm term_p_55;
ATerm term_j_55;
ATerm term_g_55;
ATerm term_f_55;
ATerm term_e_55;
ATerm term_z_54;
ATerm term_w_54;
ATerm term_v_54;
ATerm term_u_54;
ATerm term_t_54;
ATerm term_s_54;
ATerm term_q_54;
ATerm term_p_54;
ATerm term_o_54;
ATerm term_n_54;
ATerm term_d_54;
ATerm term_c_54;
ATerm term_x_53;
ATerm term_u_53;
ATerm term_t_53;
ATerm term_s_53;
ATerm term_p_53;
ATerm term_l_53;
ATerm term_g_53;
ATerm term_m_52;
ATerm term_i_52;
ATerm term_h_52;
ATerm term_e_52;
ATerm term_b_52;
ATerm term_h_47;
ATerm term_s_46;
ATerm term_n_46;
ATerm term_x_36;
ATerm term_s_36;
ATerm term_y_35;
ATerm term_r_35;
ATerm term_u_34;
ATerm term_b_17;
ATerm term_v_16;
ATerm term_s_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_b_14;
ATerm term_a_14;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(50);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(sym__2, term_o_54, term_s_46);
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_46);
  ATprotect(&(term_s_54));
  term_s_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeAppl(sym__2, term_u_54, term_t_53);
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_56));
  term_k_56 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_56));
  term_p_56 = (ATerm) ATmakeAppl(sym__2, term_f_55, term_g_55);
  ATprotect(&(term_z_56));
  term_z_56 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(sym__2, term_j_57, term_t_53);
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(sym__2, term_m_57, term_t_53);
  ATprotect(&(term_o_57));
  term_o_57 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_57));
  term_v_57 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_58));
  term_a_58 = (ATerm) ATmakeAppl(sym__2, term_j_56, term_t_53);
  ATprotect(&(term_b_58));
  term_b_58 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_58));
  term_c_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_58));
  term_p_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_58));
  term_q_58 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_58));
  term_r_58 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_59));
  term_i_59 = (ATerm) ATmakeAppl(sym__2, term_m_52, term_t_53);
  ATprotect(&(term_j_59));
  term_j_59 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_59));
  term_m_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm AddSDef_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm term_size_0_0 (ATerm t);
ATerm Seq_2_0 (ATerm c_89 (ATerm), ATerm d_89 (ATerm), ATerm t);
static ATerm g_1 (ATerm t);
ATerm body_to_inline_0_0 (ATerm t);
ATerm inlineable_0_0 (ATerm t);
static ATerm b_7 (ATerm t_36, ATerm v_36, ATerm t);
ATerm bottomup_1_0 (ATerm c_107 (ATerm), ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm simplify_0_0 (ATerm t);
ATerm SubsArgCall2_0_0 (ATerm t);
ATerm SubsArgCall1_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm substitute_arg_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm substitute_args_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm spaste_1_0 (ATerm f_106 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm w_12 (ATerm o_25, ATerm n_25, ATerm t);
ATerm SVar_1_0 (ATerm n_88 (ATerm), ATerm t);
static ATerm h_13 (ATerm n_122 (ATerm), ATerm o_122 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm e_44, ATerm d_44, ATerm c_44, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm i_13 (ATerm h_122 (ATerm), ATerm i_122 (ATerm (ATerm), ATerm), ATerm w_43, ATerm z_43, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm v_122 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm c_122 (ATerm (ATerm), ATerm), ATerm d_122 (ATerm), ATerm e_122 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm f_122 (ATerm (ATerm), ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm tpaste_1_0 (ATerm b_106 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm t);
static ATerm q_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm b_13 (ATerm y_117 (ATerm), ATerm w_40, ATerm u_40, ATerm t);
static ATerm c_13 (ATerm b_118 (ATerm), ATerm c_118 (ATerm), ATerm b_41, ATerm a_41, ATerm t);
static ATerm d_13 (ATerm t_117 (ATerm), ATerm t_40, ATerm r_40, ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm f_13 (ATerm t_614, ATerm y_614, ATerm a_60, ATerm t);
ATerm while_not_2_0 (ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t);
ATerm for_3_0 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm t);
static ATerm e_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm b_115 (ATerm e_113, ATerm f_113, ATerm g_113, ATerm t);
static ATerm j_7 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
ATerm free_vars_3_0 (ATerm f_124 (ATerm), ATerm g_124 (ATerm), ATerm h_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm c_85 (ATerm), ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
ATerm InlineCall_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm o_120 (ATerm), ATerm p_120 (ATerm), ATerm q_120 (ATerm), ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
ATerm occurrences_1_0 (ATerm f_118 (ATerm), ATerm t);
static ATerm n_13 (ATerm g_105 (ATerm), ATerm r_24, ATerm q_24, ATerm t);
static ATerm p_13 (ATerm w_114 (ATerm), ATerm r_34, ATerm p_34, ATerm t);
static ATerm r_13 (ATerm l_36, ATerm m_36, ATerm t);
ATerm end_scope_1_0 (ATerm t_114 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm i_110 (ATerm), ATerm j_110 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm s_114 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm u_114 (ATerm), ATerm v_114 (ATerm), ATerm t);
static ATerm m_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm r_9 (ATerm t);
ATerm inline_sdef_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm b_107 (ATerm), ATerm t);
static ATerm x_9 (ATerm t);
static ATerm t_13 (ATerm j_76, ATerm i_76, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm t);
static ATerm b_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm f_108 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm b_116 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm f_134 (ATerm x_133, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm x_10 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm w_112 (ATerm), ATerm x_112 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm d_107 (ATerm), ATerm t);
static ATerm z_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm d_11 (ATerm t);
ATerm inline_sdefs_0_0 (ATerm t);
static ATerm z_14 (ATerm g_51, ATerm h_51, ATerm t);
static ATerm a_15 (ATerm z_31, ATerm a_32, ATerm t);
static ATerm c_15 (ATerm l_114 (ATerm), ATerm a_233, ATerm d_32, ATerm t);
static ATerm b_15 (ATerm v_31, ATerm w_31, ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
ATerm output_1_0 (ATerm z_132 (ATerm), ATerm t);
static ATerm w_142 (ATerm q_142, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_15 (ATerm b_32, ATerm t);
static ATerm e_15 (ATerm i_51, ATerm j_51, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_144 (ATerm g_143, ATerm t);
static ATerm i_144 (ATerm k_143, ATerm l_143, ATerm m_143, ATerm t);
static ATerm j_144 (ATerm u_143, ATerm v_143, ATerm w_143, ATerm t);
static ATerm f_15 (ATerm t);
static ATerm g_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm a_133 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm j_11 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm o_15 (ATerm y_53, ATerm z_53, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm m_15 (ATerm e_36, ATerm f_36, ATerm d_36, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm v_0 (ATerm), ATerm t);
static ATerm z_11 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm g_15 (ATerm d_33, ATerm e_33, ATerm t);
ATerm foldr_2_0 (ATerm m_120 (ATerm), ATerm n_120 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm f_12 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm f_130 (ATerm), ATerm t);
static ATerm i_12 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm j_12 (ATerm t);
ATerm need_help_1_0 (ATerm q_132 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm v_115 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm k_15 (ATerm a_50, ATerm b_50, ATerm t);
ATerm debug_1_0 (ATerm j_114 (ATerm), ATerm t);
ATerm map_1_0 (ATerm l_115 (ATerm), ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm l_15 (ATerm d_38, ATerm e_38, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm e_13 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm r_91 (ATerm), ATerm s_91 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_134 (ATerm), ATerm t);
static ATerm j_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm m_13 (ATerm t);
ATerm parse_options_1_0 (ATerm s_134 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm s_132 (ATerm), ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm t);
static ATerm s_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm z_13 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = term_a_14;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm AddSDef_0_0 (ATerm t)
{
  ATerm f_0 = NULL,m_0 = NULL,q_0 = NULL,r_0 = NULL,s_0 = NULL;
  f_0 = t;
  {
    ATerm c_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDefT_4))
          {
            m_0 = ATgetArgument(t, 0);
            {
              ATerm e_14 = ATgetArgument(t, 1);
            }
            {
              ATerm f_14 = ATgetArgument(t, 2);
            }
            {
              ATerm g_14 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_14);
        {
          ATerm x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL;
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_0), (ATerm)ATempty, (ATerm) ATempty);
          z_0 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_14, f_0);
          a_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_0), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_h_14, f_0));
          t = p_13(t_0, z_0, a_1, t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_0), (ATerm)ATempty, (ATerm) ATempty);
          x_0 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_14, f_0);
          y_0 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_0), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_i_14, f_0));
          t = p_13(u_0, x_0, y_0, t);
          t = f_0;
        }
      }
    else
      {
        t = c_14;
        if(match_cons(t, sym_ExtSDefInl_4))
          {
            m_0 = ATgetArgument(t, 0);
            q_0 = ATgetArgument(t, 1);
            r_0 = ATgetArgument(t, 2);
            s_0 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, m_0, q_0, r_0, s_0);
        t = AddSDef_0_0(t);
        t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, m_0, q_0, r_0, s_0);
      }
  }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_j_14;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm e_1 = NULL,t_1 = NULL;
  if(match_cons(t, sym__2))
    {
      e_1 = ATgetArgument(t, 0);
      t_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_15(e_1, t_1, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_j_14;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL;
  if(match_cons(t, sym__2))
    {
      z_1 = ATgetArgument(t, 0);
      a_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_15(z_1, a_2, t);
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  ATerm k_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_0 = NULL,b_0 = NULL;
      b_0 = t;
      t = SSL_explode_term(b_0);
      if(match_cons(t, sym__2))
        {
          ATerm m_14 = ATgetArgument(t, 0);
          a_0 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_0;
      t = foldr_3_0(w_0, b_1, term_size_0_0, t);
      LocalPopChoice(l_14);
    }
  else
    {
      t = k_14;
      {
        static ATerm m_1 (ATerm t)
        {
          ATerm u_1 = NULL,v_1 = NULL;
          v_1 = t;
          t = SSL_explode_term(v_1);
          if(match_cons(t, sym__2))
            {
              ATerm n_14 = ATgetArgument(t, 0);
              u_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_1;
          t = foldr_3_0(c_1, f_1, m_1, t);
          return(t);
        }
        t = m_1(t);
      }
    }
  return(t);
}
ATerm Seq_2_0 (ATerm c_89 (ATerm), ATerm d_89 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,p_0 = NULL;
  s_1 = t;
  if(match_cons(t, sym_Seq_2))
    {
      o_1 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_1);
  n_1 = t;
  t = o_1;
  t = c_89(t);
  q_1 = t;
  t = p_1;
  t = d_89(t);
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, q_1, r_1);
  p_0 = t;
  t = SSLsetAnnotations(p_0, n_1);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL,o_2 = NULL;
  v_8 = t;
  if(match_cons(t, sym_Match_1))
    {
      u_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_8);
  t_8 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, u_8);
  o_2 = t;
  t = SSLsetAnnotations(o_2, t_8);
  return(t);
}
ATerm body_to_inline_0_0 (ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL;
  static ATerm u_12 (ATerm t)
  {
    ATerm o_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
    r_12 = t;
    if(match_cons(t, sym_Id_0))
      {
        t = r_12;
      }
    else
      {
        if(match_cons(t, sym_Fail_0))
          {
            t = r_12;
          }
        else
          {
            if(match_cons(t, sym_CallT_3))
              {
                s_12 = ATgetArgument(t, 0);
                t_12 = ATgetArgument(t, 1);
                o_12 = ATgetArgument(t, 2);
                {
                  ATerm f_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,i_1 = NULL,d_1 = NULL;
                  t = SSLgetAnnotations(r_12);
                  f_2 = t;
                  t = s_12;
                  if(match_cons(t, sym_SVar_1))
                    {
                      k_2 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_12);
                  j_2 = t;
                  t = (ATerm) ATmakeAppl(sym_SVar_1, k_2);
                  d_1 = t;
                  t = SSLsetAnnotations(d_1, j_2);
                  l_2 = t;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, l_2, t_12, o_12);
                  i_1 = t;
                  t = SSLsetAnnotations(i_1, f_2);
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    s_12 = ATgetArgument(t, 0);
                    t_12 = ATgetArgument(t, 1);
                    o_12 = ATgetArgument(t, 2);
                    {
                      ATerm a_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,k_1 = NULL,j_1 = NULL;
                      t = SSLgetAnnotations(r_12);
                      a_4 = t;
                      t = s_12;
                      if(match_cons(t, sym_SVar_1))
                        {
                          j_4 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(s_12);
                      i_4 = t;
                      t = (ATerm) ATmakeAppl(sym_SVar_1, j_4);
                      j_1 = t;
                      t = SSLsetAnnotations(j_1, i_4);
                      k_4 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, k_4, t_12, o_12);
                      k_1 = t;
                      t = SSLsetAnnotations(k_1, a_4);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Build_1))
                      {
                        s_12 = ATgetArgument(t, 0);
                        {
                          ATerm g_5 = NULL,l_1 = NULL;
                          t = SSLgetAnnotations(r_12);
                          g_5 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, s_12);
                          l_1 = t;
                          t = SSLsetAnnotations(l_1, g_5);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            s_12 = ATgetArgument(t, 0);
                            {
                              ATerm x_6 = NULL,w_1 = NULL;
                              t = SSLgetAnnotations(r_12);
                              x_6 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, s_12);
                              w_1 = t;
                              t = SSLsetAnnotations(w_1, x_6);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                s_12 = ATgetArgument(t, 0);
                                t_12 = ATgetArgument(t, 1);
                                {
                                  ATerm o_14 = t;
                                  int p_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm x_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,y_1 = NULL,x_1 = NULL;
                                      t = SSLgetAnnotations(r_12);
                                      x_7 = t;
                                      t = s_12;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          b_8 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(s_12);
                                      a_8 = t;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, b_8);
                                      x_1 = t;
                                      t = SSLsetAnnotations(x_1, a_8);
                                      c_8 = t;
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_8, t_12);
                                      y_1 = t;
                                      t = SSLsetAnnotations(y_1, x_7);
                                      LocalPopChoice(p_14);
                                    }
                                  else
                                    {
                                      t = o_14;
                                      {
                                        ATerm k_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL,r_2 = NULL,q_2 = NULL;
                                        t = SSLgetAnnotations(r_12);
                                        k_8 = t;
                                        t = s_12;
                                        if(match_cons(t, sym_Scope_2))
                                          {
                                            o_8 = ATgetArgument(t, 0);
                                            p_8 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = SSLgetAnnotations(s_12);
                                        n_8 = t;
                                        t = p_8;
                                        t = Seq_2_0(g_1, _id, t);
                                        q_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Scope_2, o_8, q_8);
                                        q_2 = t;
                                        t = SSLsetAnnotations(q_2, n_8);
                                        r_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, r_8, t_12);
                                        r_2 = t;
                                        t = SSLsetAnnotations(r_2, k_8);
                                      }
                                    }
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    s_12 = ATgetArgument(t, 0);
                                    t_12 = ATgetArgument(t, 1);
                                    {
                                      ATerm q_14 = t;
                                      int r_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm d_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,u_2 = NULL,t_2 = NULL;
                                          t = SSLgetAnnotations(r_12);
                                          d_9 = t;
                                          t = t_12;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              h_9 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = SSLgetAnnotations(t_12);
                                          g_9 = t;
                                          t = (ATerm) ATmakeAppl(sym_Match_1, h_9);
                                          t_2 = t;
                                          t = SSLsetAnnotations(t_2, g_9);
                                          i_9 = t;
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, s_12, i_9);
                                          u_2 = t;
                                          t = SSLsetAnnotations(u_2, d_9);
                                          LocalPopChoice(r_14);
                                        }
                                      else
                                        {
                                          t = q_14;
                                          {
                                            ATerm q_9 = NULL,u_9 = NULL,y_9 = NULL,z_9 = NULL,d_10 = NULL,e_10 = NULL,g_10 = NULL,h_10 = NULL,x_2 = NULL,w_2 = NULL,v_2 = NULL;
                                            t = SSLgetAnnotations(r_12);
                                            q_9 = t;
                                            t = t_12;
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                y_9 = ATgetArgument(t, 0);
                                                z_9 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(t_12);
                                            u_9 = t;
                                            t = y_9;
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                g_10 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(y_9);
                                            e_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, g_10);
                                            v_2 = t;
                                            t = SSLsetAnnotations(v_2, e_10);
                                            h_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, h_10, z_9);
                                            w_2 = t;
                                            t = SSLsetAnnotations(w_2, u_9);
                                            d_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, s_12, d_10);
                                            x_2 = t;
                                            t = SSLsetAnnotations(x_2, q_9);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Choice_2))
                                      {
                                        s_12 = ATgetArgument(t, 0);
                                        t_12 = ATgetArgument(t, 1);
                                        {
                                          ATerm w_10 = NULL,b_11 = NULL,c_11 = NULL,y_2 = NULL;
                                          t = SSLgetAnnotations(r_12);
                                          w_10 = t;
                                          t = s_12;
                                          t = u_12(t);
                                          b_11 = t;
                                          t = t_12;
                                          t = u_12(t);
                                          c_11 = t;
                                          t = (ATerm) ATmakeAppl(sym_Choice_2, b_11, c_11);
                                          y_2 = t;
                                          t = SSLsetAnnotations(y_2, w_10);
                                        }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_LChoice_2))
                                          {
                                            s_12 = ATgetArgument(t, 0);
                                            t_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm l_11 = NULL,o_11 = NULL,p_11 = NULL,z_2 = NULL;
                                              t = SSLgetAnnotations(r_12);
                                              l_11 = t;
                                              t = s_12;
                                              t = u_12(t);
                                              o_11 = t;
                                              t = t_12;
                                              t = u_12(t);
                                              p_11 = t;
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, o_11, p_11);
                                              z_2 = t;
                                              t = SSLsetAnnotations(z_2, l_11);
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_GuardedLChoice_3))
                                              {
                                                s_12 = ATgetArgument(t, 0);
                                                t_12 = ATgetArgument(t, 1);
                                                o_12 = ATgetArgument(t, 2);
                                                {
                                                  ATerm a_12 = NULL,e_12 = NULL,g_12 = NULL,h_12 = NULL,a_3 = NULL;
                                                  t = SSLgetAnnotations(r_12);
                                                  a_12 = t;
                                                  t = s_12;
                                                  t = u_12(t);
                                                  e_12 = t;
                                                  t = t_12;
                                                  t = u_12(t);
                                                  g_12 = t;
                                                  t = o_12;
                                                  t = u_12(t);
                                                  h_12 = t;
                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, e_12, g_12, h_12);
                                                  a_3 = t;
                                                  t = SSLsetAnnotations(a_3, a_12);
                                                }
                                              }
                                            else
                                              {
                                                ATerm q_13 = NULL,b_3 = NULL;
                                                if(match_cons(t, sym_Cong_2))
                                                  {
                                                    s_12 = ATgetArgument(t, 0);
                                                    t_12 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSLgetAnnotations(r_12);
                                                q_13 = t;
                                                t = (ATerm) ATmakeAppl(sym_Cong_2, s_12, t_12);
                                                b_3 = t;
                                                t = SSLsetAnnotations(b_3, q_13);
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
  t = u_12(t);
  m_2 = t;
  t = term_size_0_0(t);
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_2, term_s_14);
  t = leq_0_0(t);
  t = m_2;
  return(t);
}
ATerm inlineable_0_0 (ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,h_15 = NULL;
  v_14 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      w_14 = ATgetArgument(t, 0);
      x_14 = ATgetArgument(t, 1);
      y_14 = ATgetArgument(t, 2);
      h_15 = ATgetArgument(t, 3);
      {
        ATerm a_16 = NULL,b_16 = NULL,g_16 = NULL,h_4 = NULL;
        t = SSLgetAnnotations(v_14);
        b_16 = t;
        t = w_14;
        {
          ATerm t_14 = t;
          if((PushChoice() == 0))
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_14;
            }
        }
        a_16 = t;
        t = h_15;
        {
          ATerm u_14 = t;
          if((PushChoice() == 0))
            {
              static ATerm h_1 (ATerm t)
              {
                if(match_cons(t, sym_CallT_3))
                  {
                    ATerm i_15 = ATgetArgument(t, 0);
                    if(match_cons(i_15, sym_SVar_1))
                      {
                        if((a_16 != ATgetArgument(i_15, 0)))
                          {
                            _fail(ATgetArgument(i_15, 0));
                          }
                      }
                    else
                      _fail(t);
                    {
                      ATerm j_15 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm p_15 = ATgetArgument(t, 2);
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(h_1, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_14;
            }
        }
        t = h_15;
        t = body_to_inline_0_0(t);
        g_16 = t;
        t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, a_16, x_14, y_14, g_16);
        h_4 = t;
        t = SSLsetAnnotations(h_4, b_16);
      }
    }
  else
    {
      ATerm s_16 = NULL,t_16 = NULL,y_16 = NULL,m_4 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          w_14 = ATgetArgument(t, 0);
          x_14 = ATgetArgument(t, 1);
          y_14 = ATgetArgument(t, 2);
          h_15 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_14);
      t_16 = t;
      t = w_14;
      {
        ATerm q_15 = t;
        if((PushChoice() == 0))
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_15;
          }
      }
      s_16 = t;
      t = h_15;
      {
        ATerm r_15 = t;
        if((PushChoice() == 0))
          {
            static ATerm b_2 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm s_15 = ATgetArgument(t, 0);
                  if(match_cons(s_15, sym_SVar_1))
                    {
                      if((s_16 != ATgetArgument(s_15, 0)))
                        {
                          _fail(ATgetArgument(s_15, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm t_15 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm u_15 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(b_2, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_15;
          }
      }
      t = h_15;
      t = body_to_inline_0_0(t);
      y_16 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, s_16, x_14, y_14, y_16);
      m_4 = t;
      t = SSLsetAnnotations(m_4, t_16);
    }
  return(t);
}
static ATerm b_7 (ATerm t_36, ATerm v_36, ATerm t)
{
  ATerm n_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_36, v_36);
  t = l_15(t_36, v_36, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_15 = ATgetFirst((ATermList) t);
      {
        ATerm v_15 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_15;
  return(t);
}
ATerm bottomup_1_0 (ATerm c_107 (ATerm), ATerm t)
{
  static ATerm c_2 (ATerm t)
  {
    t = bottomup_1_0(c_107, t);
    return(t);
  }
  t = SRTS_all(c_2, t);
  t = c_107(t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_15 = ATgetArgument(t, 0);
      if(((ATgetType(w_15) != AT_LIST) || !(ATisEmpty(w_15))))
        _fail(t);
      {
        ATerm x_15 = ATgetArgument(t, 1);
        if(((ATgetType(x_15) != AT_LIST) || !(ATisEmpty(x_15))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm t_30 = NULL,w_30 = NULL,b_31 = NULL,d_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_15 = ATgetArgument(t, 0);
      if(((ATgetType(y_15) == AT_LIST) && !(ATisEmpty(y_15))))
        {
          t_30 = ATgetFirst((ATermList) y_15);
          w_30 = (ATerm) ATgetNext((ATermList) y_15);
        }
      else
        _fail(t);
      {
        ATerm z_15 = ATgetArgument(t, 1);
        if(((ATgetType(z_15) == AT_LIST) && !(ATisEmpty(z_15))))
          {
            b_31 = ATgetFirst((ATermList) z_15);
            d_31 = (ATerm) ATgetNext((ATermList) z_15);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_30, b_31), (ATerm) ATmakeAppl(sym__2, w_30, d_31));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm e_31 = NULL,h_31 = NULL;
  if(match_cons(t, sym__2))
    {
      e_31 = ATgetArgument(t, 0);
      h_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_31), e_31);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL;
  if(match_cons(t, sym__2))
    {
      m_31 = ATgetArgument(t, 0);
      n_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_31), (ATerm) ATmakeAppl(sym_Match_1, n_31));
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_16 = ATgetArgument(t, 0);
      if(((ATgetType(c_16) != AT_LIST) || !(ATisEmpty(c_16))))
        _fail(t);
      {
        ATerm d_16 = ATgetArgument(t, 1);
        if(((ATgetType(d_16) != AT_LIST) || !(ATisEmpty(d_16))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_16 = ATgetArgument(t, 0);
      if(((ATgetType(e_16) == AT_LIST) && !(ATisEmpty(e_16))))
        {
          p_41 = ATgetFirst((ATermList) e_16);
          q_41 = (ATerm) ATgetNext((ATermList) e_16);
        }
      else
        _fail(t);
      {
        ATerm f_16 = ATgetArgument(t, 1);
        if(((ATgetType(f_16) == AT_LIST) && !(ATisEmpty(f_16))))
          {
            r_41 = ATgetFirst((ATermList) f_16);
            s_41 = (ATerm) ATgetNext((ATermList) f_16);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_41, r_41), (ATerm) ATmakeAppl(sym__2, q_41, s_41));
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm t_41 = NULL,v_41 = NULL;
  if(match_cons(t, sym__2))
    {
      t_41 = ATgetArgument(t, 0);
      v_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_41), t_41);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL;
  if(match_cons(t, sym__2))
    {
      w_41 = ATgetArgument(t, 0);
      x_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_41), (ATerm) ATmakeAppl(sym_Match_1, x_41));
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm j_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(i_16);
      {
        ATerm l_59 = NULL,n_59 = NULL;
        l_59 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm k_16 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        n_59 = t;
        t = SSLgetAnnotations(l_59);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm l_16 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) l_16) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm m_16 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(m_16) != AT_LIST) || !(ATisEmpty(m_16))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = n_59;
      }
    }
  else
    {
      t = h_16;
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
static ATerm f_3 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  static ATerm d_2 (ATerm t)
  {
    ATerm j_21 = NULL,q_21 = NULL,t_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,r_22 = NULL,s_22 = NULL;
    s_22 = t;
    if(match_cons(t, sym_Test_1))
      {
        r_22 = ATgetArgument(t, 0);
        t = r_22;
        if(match_cons(t, sym_Id_0))
          {
            ATerm r_16 = t;
            int u_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_v_16;
                t = d_2(t);
                LocalPopChoice(u_16);
              }
            else
              {
                t = r_16;
                {
                  ATerm w_16 = t;
                  int x_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_23 = NULL,k_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,q_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,e_24 = NULL,j_24 = NULL,t_24 = NULL,u_24 = NULL;
                      t = s_22;
                      t = new_0_0(t);
                      b_23 = t;
                      t = bottomup_1_0(d_2, t);
                      t_24 = t;
                      t = (ATerm) ATempty;
                      t = d_2(t);
                      u_24 = t;
                      t = (ATerm) ATinsert(CheckATermList(u_24), t_24);
                      t = d_2(t);
                      k_23 = t;
                      t = b_23;
                      t = bottomup_1_0(d_2, t);
                      j_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, j_24);
                      t = d_2(t);
                      e_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, e_24);
                      t = d_2(t);
                      n_23 = t;
                      t = r_22;
                      t = bottomup_1_0(d_2, t);
                      q_23 = t;
                      t = b_23;
                      t = bottomup_1_0(d_2, t);
                      x_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, x_23);
                      t = d_2(t);
                      w_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, w_23);
                      t = d_2(t);
                      v_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_23, v_23);
                      t = d_2(t);
                      o_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_23, o_23);
                      t = d_2(t);
                      m_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, k_23, m_23);
                      t = d_2(t);
                      LocalPopChoice(x_16);
                    }
                  else
                    {
                      t = w_16;
                      t = s_22;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm z_16 = t;
                int a_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_b_17;
                    t = d_2(t);
                    LocalPopChoice(a_17);
                  }
                else
                  {
                    t = z_16;
                    {
                      ATerm c_17 = t;
                      int d_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm y_24 = NULL,b_25 = NULL,c_25 = NULL,h_25 = NULL,i_25 = NULL,k_25 = NULL,l_25 = NULL,p_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,y_25 = NULL,b_26 = NULL;
                          t = s_22;
                          t = new_0_0(t);
                          y_24 = t;
                          t = bottomup_1_0(d_2, t);
                          y_25 = t;
                          t = (ATerm) ATempty;
                          t = d_2(t);
                          b_26 = t;
                          t = (ATerm) ATinsert(CheckATermList(b_26), y_25);
                          t = d_2(t);
                          b_25 = t;
                          t = y_24;
                          t = bottomup_1_0(d_2, t);
                          t_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, t_25);
                          t = d_2(t);
                          s_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, s_25);
                          t = d_2(t);
                          h_25 = t;
                          t = r_22;
                          t = bottomup_1_0(d_2, t);
                          k_25 = t;
                          t = y_24;
                          t = bottomup_1_0(d_2, t);
                          r_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, r_25);
                          t = d_2(t);
                          p_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, p_25);
                          t = d_2(t);
                          l_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, k_25, l_25);
                          t = d_2(t);
                          i_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_25, i_25);
                          t = d_2(t);
                          c_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, b_25, c_25);
                          t = d_2(t);
                          LocalPopChoice(d_17);
                        }
                      else
                        {
                          t = c_17;
                          t = s_22;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    m_22 = ATgetArgument(t, 0);
                    {
                      ATerm e_17 = t;
                      int f_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, m_22);
                          t = d_2(t);
                          LocalPopChoice(f_17);
                        }
                      else
                        {
                          t = e_17;
                          {
                            ATerm g_17 = t;
                            int h_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm j_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,t_26 = NULL,z_26 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL;
                                t = s_22;
                                t = new_0_0(t);
                                j_26 = t;
                                t = bottomup_1_0(d_2, t);
                                k_27 = t;
                                t = (ATerm) ATempty;
                                t = d_2(t);
                                l_27 = t;
                                t = (ATerm) ATinsert(CheckATermList(l_27), k_27);
                                t = d_2(t);
                                o_26 = t;
                                t = j_26;
                                t = bottomup_1_0(d_2, t);
                                j_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, j_27);
                                t = d_2(t);
                                i_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, i_27);
                                t = d_2(t);
                                q_26 = t;
                                t = r_22;
                                t = bottomup_1_0(d_2, t);
                                t_26 = t;
                                t = j_26;
                                t = bottomup_1_0(d_2, t);
                                h_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, h_27);
                                t = d_2(t);
                                g_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, g_27);
                                t = d_2(t);
                                z_26 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, t_26, z_26);
                                t = d_2(t);
                                r_26 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, q_26, r_26);
                                t = d_2(t);
                                p_26 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, o_26, p_26);
                                t = d_2(t);
                                LocalPopChoice(h_17);
                              }
                            else
                              {
                                t = g_17;
                                t = s_22;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm i_17 = t;
                    int k_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,a_28 = NULL,b_28 = NULL,d_28 = NULL,e_28 = NULL,g_28 = NULL;
                        t = s_22;
                        t = new_0_0(t);
                        o_27 = t;
                        t = bottomup_1_0(d_2, t);
                        e_28 = t;
                        t = (ATerm) ATempty;
                        t = d_2(t);
                        g_28 = t;
                        t = (ATerm) ATinsert(CheckATermList(g_28), e_28);
                        t = d_2(t);
                        r_27 = t;
                        t = o_27;
                        t = bottomup_1_0(d_2, t);
                        d_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, d_28);
                        t = d_2(t);
                        b_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, b_28);
                        t = d_2(t);
                        t_27 = t;
                        t = r_22;
                        t = bottomup_1_0(d_2, t);
                        v_27 = t;
                        t = o_27;
                        t = bottomup_1_0(d_2, t);
                        a_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, a_28);
                        t = d_2(t);
                        x_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, x_27);
                        t = d_2(t);
                        w_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, v_27, w_27);
                        t = d_2(t);
                        u_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, t_27, u_27);
                        t = d_2(t);
                        s_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, r_27, s_27);
                        t = d_2(t);
                        LocalPopChoice(k_17);
                      }
                    else
                      {
                        t = i_17;
                        t = s_22;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            r_22 = ATgetArgument(t, 0);
            t = r_22;
            if(match_cons(t, sym_Id_0))
              {
                ATerm l_17 = t;
                int m_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_b_17;
                    t = d_2(t);
                    LocalPopChoice(m_17);
                  }
                else
                  {
                    t = l_17;
                    t = s_22;
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
                        t = term_v_16;
                        t = d_2(t);
                        LocalPopChoice(o_17);
                      }
                    else
                      {
                        t = n_17;
                        t = s_22;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        m_22 = ATgetArgument(t, 0);
                        {
                          ATerm p_17 = t;
                          int r_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, m_22);
                              t = d_2(t);
                              LocalPopChoice(r_17);
                            }
                          else
                            {
                              t = p_17;
                              t = s_22;
                            }
                        }
                      }
                    else
                      {
                        t = s_22;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                r_22 = ATgetArgument(t, 0);
                o_22 = ATgetArgument(t, 1);
                t = o_22;
                if(match_cons(t, sym_Id_0))
                  {
                    t = r_22;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = o_22;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = r_22;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                m_22 = ATgetArgument(t, 0);
                                n_22 = ATgetArgument(t, 1);
                                t = r_22;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    m_22 = ATgetArgument(t, 0);
                                    n_22 = ATgetArgument(t, 1);
                                    t = r_22;
                                  }
                                else
                                  {
                                    t = r_22;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        j_22 = ATgetArgument(t, 0);
                        l_22 = ATgetArgument(t, 1);
                        t = j_22;
                        if(match_cons(t, sym_Match_1))
                          {
                            i_22 = ATgetArgument(t, 0);
                            t = i_22;
                            if(match_cons(t, sym_Op_2))
                              {
                                g_22 = ATgetArgument(t, 0);
                                z_21 = ATgetArgument(t, 1);
                                t = r_22;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm s_17 = t;
                                        int t_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_b_17;
                                            t = d_2(t);
                                            LocalPopChoice(t_17);
                                          }
                                        else
                                          {
                                            t = s_17;
                                            t = s_22;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            m_22 = ATgetArgument(t, 0);
                                            n_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm u_17 = t;
                                              int v_17 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm k_30 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                  t = d_2(t);
                                                  k_30 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, k_30);
                                                  t = d_2(t);
                                                  LocalPopChoice(v_17);
                                                }
                                              else
                                                {
                                                  t = u_17;
                                                  t = s_22;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                m_22 = ATgetArgument(t, 0);
                                                t = m_22;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    h_22 = ATgetArgument(t, 0);
                                                    a_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm w_17 = t;
                                                      int x_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, h_22, g_22);
                                                          {
                                                            ATerm y_17 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm j_17 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    j_17 = ATgetArgument(t, 0);
                                                                    if((j_17 != ATgetArgument(t, 1)))
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
                                                                t = y_17;
                                                              }
                                                          }
                                                          t = term_b_17;
                                                          t = bottomup_1_0(d_2, t);
                                                          LocalPopChoice(x_17);
                                                        }
                                                      else
                                                        {
                                                          t = w_17;
                                                          {
                                                            ATerm z_17 = t;
                                                            int a_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm s_30 = NULL;
                                                                t = g_22;
                                                                if((h_22 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, a_22, z_21);
                                                                t = genzip_4_0(e_2, g_2, h_2, i_2, t);
                                                                s_30 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_30), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, h_22, a_22)), l_22));
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(a_18);
                                                              }
                                                            else
                                                              {
                                                                t = z_17;
                                                                {
                                                                  ATerm b_18 = t;
                                                                  int c_18 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm q_31 = NULL;
                                                                      t = i_22;
                                                                      if((m_22 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, m_22);
                                                                      t = d_2(t);
                                                                      q_31 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_31, l_22);
                                                                      t = d_2(t);
                                                                      LocalPopChoice(c_18);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = b_18;
                                                                      t = s_22;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm f_18 = t;
                                                    int g_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm f_32 = NULL;
                                                        t = i_22;
                                                        if((m_22 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, m_22);
                                                        t = d_2(t);
                                                        f_32 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, f_32, l_22);
                                                        t = d_2(t);
                                                        LocalPopChoice(g_18);
                                                      }
                                                    else
                                                      {
                                                        t = f_18;
                                                        t = s_22;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    m_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm i_18 = t;
                                                      int j_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm j_32 = NULL;
                                                          t = i_22;
                                                          if((m_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, m_22);
                                                          t = d_2(t);
                                                          j_32 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_32, l_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(j_18);
                                                        }
                                                      else
                                                        {
                                                          t = i_18;
                                                          t = s_22;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_22 = ATgetArgument(t, 0);
                                                        n_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm k_18 = t;
                                                          int l_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                              t = d_2(t);
                                                              g_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, g_33);
                                                              t = d_2(t);
                                                              LocalPopChoice(l_18);
                                                            }
                                                          else
                                                            {
                                                              t = k_18;
                                                              t = s_22;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = s_22;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = r_22;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm n_18 = t;
                                        int o_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_b_17;
                                            t = d_2(t);
                                            LocalPopChoice(o_18);
                                          }
                                        else
                                          {
                                            t = n_18;
                                            t = s_22;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            m_22 = ATgetArgument(t, 0);
                                            n_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm r_18 = t;
                                              int y_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm t_33 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                  t = d_2(t);
                                                  t_33 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, t_33);
                                                  t = d_2(t);
                                                  LocalPopChoice(y_18);
                                                }
                                              else
                                                {
                                                  t = r_18;
                                                  t = s_22;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                m_22 = ATgetArgument(t, 0);
                                                {
                                                  ATerm a_19 = t;
                                                  int f_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_33 = NULL;
                                                      t = i_22;
                                                      if((m_22 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, m_22);
                                                      t = d_2(t);
                                                      x_33 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_33, l_22);
                                                      t = d_2(t);
                                                      LocalPopChoice(f_19);
                                                    }
                                                  else
                                                    {
                                                      t = a_19;
                                                      t = s_22;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    m_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm g_19 = t;
                                                      int h_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm b_34 = NULL;
                                                          t = i_22;
                                                          if((m_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, m_22);
                                                          t = d_2(t);
                                                          b_34 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_34, l_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(h_19);
                                                        }
                                                      else
                                                        {
                                                          t = g_19;
                                                          t = s_22;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_22 = ATgetArgument(t, 0);
                                                        n_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm i_19 = t;
                                                          int j_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                              t = d_2(t);
                                                              g_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, g_34);
                                                              t = d_2(t);
                                                              LocalPopChoice(j_19);
                                                            }
                                                          else
                                                            {
                                                              t = i_19;
                                                              t = s_22;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = s_22;
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
                                i_22 = ATgetArgument(t, 0);
                                t = i_22;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    g_22 = ATgetArgument(t, 0);
                                    t = r_22;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm k_19 = t;
                                            int l_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_17;
                                                t = d_2(t);
                                                LocalPopChoice(l_19);
                                              }
                                            else
                                              {
                                                t = k_19;
                                                t = s_22;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_22 = ATgetArgument(t, 0);
                                                n_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm m_19 = t;
                                                  int n_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm b_35 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                      t = d_2(t);
                                                      b_35 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, b_35);
                                                      t = d_2(t);
                                                      LocalPopChoice(n_19);
                                                    }
                                                  else
                                                    {
                                                      t = m_19;
                                                      t = s_22;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm o_19 = t;
                                                int p_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm q_19 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(p_19);
                                                    {
                                                      ATerm r_19 = t;
                                                      int s_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm f_35 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, i_22);
                                                          t = d_2(t);
                                                          f_35 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_35, l_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(s_19);
                                                        }
                                                      else
                                                        {
                                                          t = r_19;
                                                          t = s_22;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = o_19;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        m_22 = ATgetArgument(t, 0);
                                                        t = m_22;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            h_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm u_19 = t;
                                                              int v_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm j_35 = NULL,k_35 = NULL;
                                                                  t = g_22;
                                                                  if((h_22 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, h_22);
                                                                  t = d_2(t);
                                                                  k_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, k_35);
                                                                  t = d_2(t);
                                                                  j_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, j_35, l_22);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(v_19);
                                                                }
                                                              else
                                                                {
                                                                  t = u_19;
                                                                  t = s_22;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = s_22;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            m_22 = ATgetArgument(t, 0);
                                                            n_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm w_19 = t;
                                                              int z_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm q_35 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                                  t = d_2(t);
                                                                  q_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, q_35);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(z_19);
                                                                }
                                                              else
                                                                {
                                                                  t = w_19;
                                                                  t = s_22;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = s_22;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = r_22;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm g_20 = t;
                                            int i_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_17;
                                                t = d_2(t);
                                                LocalPopChoice(i_20);
                                              }
                                            else
                                              {
                                                t = g_20;
                                                t = s_22;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_22 = ATgetArgument(t, 0);
                                                n_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm l_20 = t;
                                                  int m_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm r_36 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                      t = d_2(t);
                                                      r_36 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, r_36);
                                                      t = d_2(t);
                                                      LocalPopChoice(m_20);
                                                    }
                                                  else
                                                    {
                                                      t = l_20;
                                                      t = s_22;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm n_20 = t;
                                                int o_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm p_20 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(o_20);
                                                    {
                                                      ATerm q_20 = t;
                                                      int r_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm z_36 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, i_22);
                                                          t = d_2(t);
                                                          z_36 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, z_36, l_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(r_20);
                                                        }
                                                      else
                                                        {
                                                          t = q_20;
                                                          t = s_22;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = n_20;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_22 = ATgetArgument(t, 0);
                                                        n_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm s_20 = t;
                                                          int t_20 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm m_37 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                              t = d_2(t);
                                                              m_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, m_37);
                                                              t = d_2(t);
                                                              LocalPopChoice(t_20);
                                                            }
                                                          else
                                                            {
                                                              t = s_20;
                                                              t = s_22;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = s_22;
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
                                    i_22 = ATgetArgument(t, 0);
                                    b_22 = ATgetArgument(t, 1);
                                    c_22 = ATgetArgument(t, 2);
                                    t = r_22;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm u_20 = t;
                                            int v_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_17;
                                                t = d_2(t);
                                                LocalPopChoice(v_20);
                                              }
                                            else
                                              {
                                                t = u_20;
                                                t = s_22;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_22 = ATgetArgument(t, 0);
                                                n_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm w_20 = t;
                                                  int x_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_38 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                      t = d_2(t);
                                                      o_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, o_38);
                                                      t = d_2(t);
                                                      LocalPopChoice(x_20);
                                                    }
                                                  else
                                                    {
                                                      t = w_20;
                                                      t = s_22;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm y_20 = t;
                                                int z_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm a_21 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(z_20);
                                                    {
                                                      ATerm b_21 = t;
                                                      int c_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm h_39 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, i_22, b_22, c_22);
                                                          t = d_2(t);
                                                          h_39 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_39, l_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(c_21);
                                                        }
                                                      else
                                                        {
                                                          t = b_21;
                                                          t = s_22;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = y_20;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_22 = ATgetArgument(t, 0);
                                                        n_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm d_21 = t;
                                                          int e_21 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_39 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                              t = d_2(t);
                                                              p_39 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, p_39);
                                                              t = d_2(t);
                                                              LocalPopChoice(e_21);
                                                            }
                                                          else
                                                            {
                                                              t = d_21;
                                                              t = s_22;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = s_22;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = r_22;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm f_21 = t;
                                            int g_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_17;
                                                t = d_2(t);
                                                LocalPopChoice(g_21);
                                              }
                                            else
                                              {
                                                t = f_21;
                                                t = s_22;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_22 = ATgetArgument(t, 0);
                                                n_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm h_21 = t;
                                                  int i_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm a_40 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                      t = d_2(t);
                                                      a_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, a_40);
                                                      t = d_2(t);
                                                      LocalPopChoice(i_21);
                                                    }
                                                  else
                                                    {
                                                      t = h_21;
                                                      t = s_22;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    m_22 = ATgetArgument(t, 0);
                                                    n_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm k_21 = t;
                                                      int l_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm k_40 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                          t = d_2(t);
                                                          k_40 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, k_40);
                                                          t = d_2(t);
                                                          LocalPopChoice(l_21);
                                                        }
                                                      else
                                                        {
                                                          t = k_21;
                                                          t = s_22;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = s_22;
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
                            j_22 = ATgetArgument(t, 0);
                            t = j_22;
                            if(match_cons(t, sym_Op_2))
                              {
                                i_22 = ATgetArgument(t, 0);
                                b_22 = ATgetArgument(t, 1);
                                t = r_22;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm m_21 = t;
                                        int n_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_b_17;
                                            t = d_2(t);
                                            LocalPopChoice(n_21);
                                          }
                                        else
                                          {
                                            t = m_21;
                                            t = s_22;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            m_22 = ATgetArgument(t, 0);
                                            n_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm p_21 = t;
                                              int r_21 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm h_41 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                  t = d_2(t);
                                                  h_41 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, h_41);
                                                  t = d_2(t);
                                                  LocalPopChoice(r_21);
                                                }
                                              else
                                                {
                                                  t = p_21;
                                                  t = s_22;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                m_22 = ATgetArgument(t, 0);
                                                t = m_22;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    h_22 = ATgetArgument(t, 0);
                                                    a_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm s_21 = t;
                                                      int u_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, h_22, i_22);
                                                          {
                                                            ATerm f_22 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm q_17 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    q_17 = ATgetArgument(t, 0);
                                                                    if((q_17 != ATgetArgument(t, 1)))
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
                                                                t = f_22;
                                                              }
                                                          }
                                                          t = term_b_17;
                                                          t = bottomup_1_0(d_2, t);
                                                          LocalPopChoice(u_21);
                                                        }
                                                      else
                                                        {
                                                          t = s_21;
                                                          {
                                                            ATerm t_22 = t;
                                                            int x_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm m_41 = NULL;
                                                                t = i_22;
                                                                if((h_22 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, a_22, b_22);
                                                                t = genzip_4_0(p_2, s_2, c_3, d_3, t);
                                                                m_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_41), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, h_22, a_22)));
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(x_22);
                                                              }
                                                            else
                                                              {
                                                                t = t_22;
                                                                {
                                                                  ATerm z_22 = t;
                                                                  int d_23 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = j_22;
                                                                      if((m_22 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, m_22);
                                                                      t = d_2(t);
                                                                      LocalPopChoice(d_23);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = z_22;
                                                                      t = s_22;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm e_23 = t;
                                                    int f_23 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = j_22;
                                                        if((m_22 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, m_22);
                                                        t = d_2(t);
                                                        LocalPopChoice(f_23);
                                                      }
                                                    else
                                                      {
                                                        t = e_23;
                                                        t = s_22;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    m_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm g_23 = t;
                                                      int h_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = j_22;
                                                          if((m_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, m_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(h_23);
                                                        }
                                                      else
                                                        {
                                                          t = g_23;
                                                          t = s_22;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_22 = ATgetArgument(t, 0);
                                                        n_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm i_23 = t;
                                                          int j_23 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm m_43 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                              t = d_2(t);
                                                              m_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, m_43);
                                                              t = d_2(t);
                                                              LocalPopChoice(j_23);
                                                            }
                                                          else
                                                            {
                                                              t = i_23;
                                                              t = s_22;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = s_22;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = r_22;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm l_23 = t;
                                        int p_23 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_b_17;
                                            t = d_2(t);
                                            LocalPopChoice(p_23);
                                          }
                                        else
                                          {
                                            t = l_23;
                                            t = s_22;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            m_22 = ATgetArgument(t, 0);
                                            n_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm r_23 = t;
                                              int s_23 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm n_44 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                  t = d_2(t);
                                                  n_44 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, n_44);
                                                  t = d_2(t);
                                                  LocalPopChoice(s_23);
                                                }
                                              else
                                                {
                                                  t = r_23;
                                                  t = s_22;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                m_22 = ATgetArgument(t, 0);
                                                {
                                                  ATerm t_23 = t;
                                                  int u_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = j_22;
                                                      if((m_22 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, m_22);
                                                      t = d_2(t);
                                                      LocalPopChoice(u_23);
                                                    }
                                                  else
                                                    {
                                                      t = t_23;
                                                      t = s_22;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    m_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm z_23 = t;
                                                      int a_24 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = j_22;
                                                          if((m_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, m_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(a_24);
                                                        }
                                                      else
                                                        {
                                                          t = z_23;
                                                          t = s_22;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_22 = ATgetArgument(t, 0);
                                                        n_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_24 = t;
                                                          int c_24 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm c_45 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                              t = d_2(t);
                                                              c_45 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, c_45);
                                                              t = d_2(t);
                                                              LocalPopChoice(c_24);
                                                            }
                                                          else
                                                            {
                                                              t = b_24;
                                                              t = s_22;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = s_22;
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
                                j_22 = ATgetArgument(t, 0);
                                t = j_22;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    i_22 = ATgetArgument(t, 0);
                                    t = r_22;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm g_24 = t;
                                            int o_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_17;
                                                t = d_2(t);
                                                LocalPopChoice(o_24);
                                              }
                                            else
                                              {
                                                t = g_24;
                                                t = s_22;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_22 = ATgetArgument(t, 0);
                                                n_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm s_24 = t;
                                                  int w_24 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm s_45 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                      t = d_2(t);
                                                      s_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, s_45);
                                                      t = d_2(t);
                                                      LocalPopChoice(w_24);
                                                    }
                                                  else
                                                    {
                                                      t = s_24;
                                                      t = s_22;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm x_24 = t;
                                                int a_25 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm d_25 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(a_25);
                                                    {
                                                      ATerm e_25 = t;
                                                      int f_25 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, j_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(f_25);
                                                        }
                                                      else
                                                        {
                                                          t = e_25;
                                                          t = s_22;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = x_24;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        m_22 = ATgetArgument(t, 0);
                                                        t = m_22;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            h_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm g_25 = t;
                                                              int j_25 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm b_46 = NULL;
                                                                  t = i_22;
                                                                  if((h_22 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, h_22);
                                                                  t = d_2(t);
                                                                  b_46 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, b_46);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(j_25);
                                                                }
                                                              else
                                                                {
                                                                  t = g_25;
                                                                  t = s_22;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = s_22;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            m_22 = ATgetArgument(t, 0);
                                                            n_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm m_25 = t;
                                                              int q_25 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm o_46 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                                  t = d_2(t);
                                                                  o_46 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, o_46);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(q_25);
                                                                }
                                                              else
                                                                {
                                                                  t = m_25;
                                                                  t = s_22;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = s_22;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = r_22;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm u_25 = t;
                                            int v_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_17;
                                                t = d_2(t);
                                                LocalPopChoice(v_25);
                                              }
                                            else
                                              {
                                                t = u_25;
                                                t = s_22;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_22 = ATgetArgument(t, 0);
                                                n_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm w_25 = t;
                                                  int z_25 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_47 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                      t = d_2(t);
                                                      e_47 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, e_47);
                                                      t = d_2(t);
                                                      LocalPopChoice(z_25);
                                                    }
                                                  else
                                                    {
                                                      t = w_25;
                                                      t = s_22;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm a_26 = t;
                                                int c_26 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm e_26 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(c_26);
                                                    {
                                                      ATerm f_26 = t;
                                                      int g_26 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, j_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(g_26);
                                                        }
                                                      else
                                                        {
                                                          t = f_26;
                                                          t = s_22;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = a_26;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_22 = ATgetArgument(t, 0);
                                                        n_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_26 = t;
                                                          int i_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_47 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                              t = d_2(t);
                                                              n_47 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, n_47);
                                                              t = d_2(t);
                                                              LocalPopChoice(i_26);
                                                            }
                                                          else
                                                            {
                                                              t = h_26;
                                                              t = s_22;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = s_22;
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
                                    j_22 = ATgetArgument(t, 0);
                                    l_22 = ATgetArgument(t, 1);
                                    d_22 = ATgetArgument(t, 2);
                                    t = r_22;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm k_26 = t;
                                            int l_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_17;
                                                t = d_2(t);
                                                LocalPopChoice(l_26);
                                              }
                                            else
                                              {
                                                t = k_26;
                                                t = s_22;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_22 = ATgetArgument(t, 0);
                                                n_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm m_26 = t;
                                                  int n_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm b_48 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                      t = d_2(t);
                                                      b_48 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, b_48);
                                                      t = d_2(t);
                                                      LocalPopChoice(n_26);
                                                    }
                                                  else
                                                    {
                                                      t = m_26;
                                                      t = s_22;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm u_26 = t;
                                                int v_26 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm y_26 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(v_26);
                                                    {
                                                      ATerm a_27 = t;
                                                      int b_27 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, j_22, l_22, d_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(b_27);
                                                        }
                                                      else
                                                        {
                                                          t = a_27;
                                                          t = s_22;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = u_26;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_22 = ATgetArgument(t, 0);
                                                        n_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm c_27 = t;
                                                          int d_27 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_48 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                              t = d_2(t);
                                                              q_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, q_48);
                                                              t = d_2(t);
                                                              LocalPopChoice(d_27);
                                                            }
                                                          else
                                                            {
                                                              t = c_27;
                                                              t = s_22;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = s_22;
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
                                        j_22 = ATgetArgument(t, 0);
                                        l_22 = ATgetArgument(t, 1);
                                        t = r_22;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = o_22;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm e_27 = t;
                                                int f_27 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_b_17;
                                                    t = d_2(t);
                                                    LocalPopChoice(f_27);
                                                  }
                                                else
                                                  {
                                                    t = e_27;
                                                    {
                                                      ATerm m_27 = t;
                                                      int n_27 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm l_49 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, r_22, l_22);
                                                          t = d_2(t);
                                                          l_49 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, j_22, l_49);
                                                          t = d_2(t);
                                                          LocalPopChoice(n_27);
                                                        }
                                                      else
                                                        {
                                                          t = m_27;
                                                          t = s_22;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    m_22 = ATgetArgument(t, 0);
                                                    n_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm p_27 = t;
                                                      int y_27 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm v_49 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                          t = d_2(t);
                                                          v_49 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, v_49);
                                                          t = d_2(t);
                                                          LocalPopChoice(y_27);
                                                        }
                                                      else
                                                        {
                                                          t = p_27;
                                                          {
                                                            ATerm z_27 = t;
                                                            int c_28 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm g_50 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, r_22, l_22);
                                                                t = d_2(t);
                                                                g_50 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, j_22, g_50);
                                                                t = d_2(t);
                                                                LocalPopChoice(c_28);
                                                              }
                                                            else
                                                              {
                                                                t = z_27;
                                                                t = s_22;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_22 = ATgetArgument(t, 0);
                                                        n_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_28 = t;
                                                          int k_28 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm o_50 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, r_22, l_22);
                                                              t = d_2(t);
                                                              o_50 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, j_22, o_50);
                                                              t = d_2(t);
                                                              LocalPopChoice(k_28);
                                                            }
                                                          else
                                                            {
                                                              t = j_28;
                                                              {
                                                                ATerm l_28 = t;
                                                                int m_28 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm v_50 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                                    t = d_2(t);
                                                                    v_50 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, v_50);
                                                                    t = d_2(t);
                                                                    LocalPopChoice(m_28);
                                                                  }
                                                                else
                                                                  {
                                                                    t = l_28;
                                                                    t = s_22;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm n_28 = t;
                                                        int o_28 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm s_51 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, r_22, l_22);
                                                            t = d_2(t);
                                                            s_51 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, j_22, s_51);
                                                            t = d_2(t);
                                                            LocalPopChoice(o_28);
                                                          }
                                                        else
                                                          {
                                                            t = n_28;
                                                            t = s_22;
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
                                            j_22 = ATgetArgument(t, 0);
                                            l_22 = ATgetArgument(t, 1);
                                            t = r_22;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = o_22;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm p_28 = t;
                                                    int q_28 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_b_17;
                                                        t = d_2(t);
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
                                                              ATerm l_52 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, r_22, l_22);
                                                              t = d_2(t);
                                                              l_52 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, j_22, l_52);
                                                              t = d_2(t);
                                                              LocalPopChoice(s_28);
                                                            }
                                                          else
                                                            {
                                                              t = r_28;
                                                              t = s_22;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        m_22 = ATgetArgument(t, 0);
                                                        n_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_28 = t;
                                                          int u_28 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm v_52 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                              t = d_2(t);
                                                              v_52 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, v_52);
                                                              t = d_2(t);
                                                              LocalPopChoice(u_28);
                                                            }
                                                          else
                                                            {
                                                              t = t_28;
                                                              {
                                                                ATerm v_28 = t;
                                                                int w_28 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm c_53 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, r_22, l_22);
                                                                    t = d_2(t);
                                                                    c_53 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, j_22, c_53);
                                                                    t = d_2(t);
                                                                    LocalPopChoice(w_28);
                                                                  }
                                                                else
                                                                  {
                                                                    t = v_28;
                                                                    t = s_22;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            m_22 = ATgetArgument(t, 0);
                                                            n_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm x_28 = t;
                                                              int y_28 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm n_53 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, r_22, l_22);
                                                                  t = d_2(t);
                                                                  n_53 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, j_22, n_53);
                                                                  t = d_2(t);
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
                                                                        ATerm w_53 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                                        t = d_2(t);
                                                                        w_53 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, w_53);
                                                                        t = d_2(t);
                                                                        LocalPopChoice(a_29);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = z_28;
                                                                        t = s_22;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm b_29 = t;
                                                            int c_29 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm r_54 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, r_22, l_22);
                                                                t = d_2(t);
                                                                r_54 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, j_22, r_54);
                                                                t = d_2(t);
                                                                LocalPopChoice(c_29);
                                                              }
                                                            else
                                                              {
                                                                t = b_29;
                                                                t = s_22;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = r_22;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = o_22;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm d_29 = t;
                                                    int e_29 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_b_17;
                                                        t = d_2(t);
                                                        LocalPopChoice(e_29);
                                                      }
                                                    else
                                                      {
                                                        t = d_29;
                                                        t = s_22;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        m_22 = ATgetArgument(t, 0);
                                                        n_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm f_29 = t;
                                                          int g_29 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_56 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                              t = d_2(t);
                                                              a_56 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, a_56);
                                                              t = d_2(t);
                                                              LocalPopChoice(g_29);
                                                            }
                                                          else
                                                            {
                                                              t = f_29;
                                                              t = s_22;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            m_22 = ATgetArgument(t, 0);
                                                            n_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm h_29 = t;
                                                              int i_29 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm m_56 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, o_22);
                                                                  t = d_2(t);
                                                                  m_56 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, m_56);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(i_29);
                                                                }
                                                              else
                                                                {
                                                                  t = h_29;
                                                                  t = s_22;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = s_22;
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
                    r_22 = ATgetArgument(t, 0);
                    o_22 = ATgetArgument(t, 1);
                    t = o_22;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = r_22;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm k_29 = t;
                            int l_29 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_v_16;
                                t = d_2(t);
                                LocalPopChoice(l_29);
                              }
                            else
                              {
                                t = k_29;
                                t = r_22;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = o_22;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    m_22 = ATgetArgument(t, 0);
                                    n_22 = ATgetArgument(t, 1);
                                    t = r_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        m_22 = ATgetArgument(t, 0);
                                        t = r_22;
                                      }
                                    else
                                      {
                                        t = r_22;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = r_22;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm m_29 = t;
                            int n_29 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_v_16;
                                t = d_2(t);
                                LocalPopChoice(n_29);
                              }
                            else
                              {
                                t = m_29;
                                {
                                  ATerm o_29 = t;
                                  int p_29 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = o_22;
                                      if((r_22 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(p_29);
                                    }
                                  else
                                    {
                                      t = o_29;
                                      t = s_22;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = o_22;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    m_22 = ATgetArgument(t, 0);
                                    n_22 = ATgetArgument(t, 1);
                                    {
                                      ATerm q_29 = t;
                                      int r_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm c_59 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, n_22, o_22);
                                          t = d_2(t);
                                          c_59 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, m_22, c_59);
                                          t = d_2(t);
                                          LocalPopChoice(r_29);
                                        }
                                      else
                                        {
                                          t = q_29;
                                          {
                                            ATerm s_29 = t;
                                            int w_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = o_22;
                                                if((r_22 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(w_29);
                                              }
                                            else
                                              {
                                                t = s_29;
                                                t = s_22;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        m_22 = ATgetArgument(t, 0);
                                        {
                                          ATerm x_29 = t;
                                          int y_29 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = o_22;
                                              if((r_22 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(y_29);
                                            }
                                          else
                                            {
                                              t = x_29;
                                              {
                                                ATerm z_29 = t;
                                                int a_30 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = m_22;
                                                    t = topdown_1_0(e_3, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, m_22);
                                                    t = bottomup_1_0(d_2, t);
                                                    LocalPopChoice(a_30);
                                                  }
                                                else
                                                  {
                                                    t = z_29;
                                                    t = s_22;
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
                                            t = o_22;
                                            if((r_22 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(c_30);
                                          }
                                        else
                                          {
                                            t = b_30;
                                            t = s_22;
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
                        r_22 = ATgetArgument(t, 0);
                        o_22 = ATgetArgument(t, 1);
                        t = o_22;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = r_22;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm d_30 = t;
                                int f_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_v_16;
                                    t = d_2(t);
                                    LocalPopChoice(f_30);
                                  }
                                else
                                  {
                                    t = d_30;
                                    t = o_22;
                                  }
                              }
                            else
                              {
                                ATerm g_30 = t;
                                int h_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_v_16;
                                    t = d_2(t);
                                    LocalPopChoice(h_30);
                                  }
                                else
                                  {
                                    t = g_30;
                                    t = s_22;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = r_22;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm i_30 = t;
                                    int j_30 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_b_17;
                                        t = d_2(t);
                                        LocalPopChoice(j_30);
                                      }
                                    else
                                      {
                                        t = i_30;
                                        t = o_22;
                                      }
                                  }
                                else
                                  {
                                    ATerm l_30 = t;
                                    int m_30 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_b_17;
                                        t = d_2(t);
                                        LocalPopChoice(m_30);
                                      }
                                    else
                                      {
                                        t = l_30;
                                        t = s_22;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    j_22 = ATgetArgument(t, 0);
                                    l_22 = ATgetArgument(t, 1);
                                    t = r_22;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = o_22;
                                      }
                                    else
                                      {
                                        ATerm n_30 = t;
                                        int o_30 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm n_61 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, r_22, j_22);
                                            t = conc_0_0(t);
                                            n_61 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, n_61, l_22);
                                            t = bottomup_1_0(d_2, t);
                                            LocalPopChoice(o_30);
                                          }
                                        else
                                          {
                                            t = n_30;
                                            t = s_22;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = r_22;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = o_22;
                                      }
                                    else
                                      {
                                        t = s_22;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm p_30 = t;
                        int q_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm r_30 = ATgetArgument(t, 0);
                                o_22 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(q_30);
                            t = o_22;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm u_30 = t;
                                int v_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_v_16;
                                    t = d_2(t);
                                    LocalPopChoice(v_30);
                                  }
                                else
                                  {
                                    t = u_30;
                                    t = s_22;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm x_30 = t;
                                    int y_30 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_b_17;
                                        t = d_2(t);
                                        LocalPopChoice(y_30);
                                      }
                                    else
                                      {
                                        t = x_30;
                                        t = s_22;
                                      }
                                  }
                                else
                                  {
                                    t = s_22;
                                  }
                              }
                          }
                        else
                          {
                            t = p_30;
                            if(match_cons(t, sym_All_1))
                              {
                                r_22 = ATgetArgument(t, 0);
                                t = r_22;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm a_31 = t;
                                    int c_31 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_v_16;
                                        t = d_2(t);
                                        LocalPopChoice(c_31);
                                      }
                                    else
                                      {
                                        t = a_31;
                                        t = s_22;
                                      }
                                  }
                                else
                                  {
                                    t = s_22;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    r_22 = ATgetArgument(t, 0);
                                    t = r_22;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm i_31 = t;
                                        int j_31 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_v_16;
                                            t = d_2(t);
                                            LocalPopChoice(j_31);
                                          }
                                        else
                                          {
                                            t = i_31;
                                            {
                                              ATerm k_31 = t;
                                              int l_31 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm k_62 = NULL,l_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,x_62 = NULL,y_62 = NULL;
                                                  t = s_22;
                                                  t = new_0_0(t);
                                                  k_62 = t;
                                                  t = bottomup_1_0(d_2, t);
                                                  x_62 = t;
                                                  t = (ATerm) ATempty;
                                                  t = d_2(t);
                                                  y_62 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(y_62), x_62);
                                                  t = d_2(t);
                                                  l_62 = t;
                                                  t = k_62;
                                                  t = bottomup_1_0(d_2, t);
                                                  v_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, v_62);
                                                  t = d_2(t);
                                                  u_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, u_62);
                                                  t = d_2(t);
                                                  o_62 = t;
                                                  t = r_22;
                                                  t = bottomup_1_0(d_2, t);
                                                  q_62 = t;
                                                  t = k_62;
                                                  t = bottomup_1_0(d_2, t);
                                                  t_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, t_62);
                                                  t = d_2(t);
                                                  s_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, s_62);
                                                  t = d_2(t);
                                                  r_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_62, r_62);
                                                  t = d_2(t);
                                                  p_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, o_62, p_62);
                                                  t = d_2(t);
                                                  n_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, l_62, n_62);
                                                  t = d_2(t);
                                                  LocalPopChoice(l_31);
                                                }
                                              else
                                                {
                                                  t = k_31;
                                                  t = s_22;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm o_31 = t;
                                            int p_31 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_17;
                                                t = d_2(t);
                                                LocalPopChoice(p_31);
                                              }
                                            else
                                              {
                                                t = o_31;
                                                {
                                                  ATerm r_31 = t;
                                                  int s_31 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm j_63 = NULL,k_63 = NULL,m_63 = NULL,q_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,i_64 = NULL;
                                                      t = s_22;
                                                      t = new_0_0(t);
                                                      j_63 = t;
                                                      t = bottomup_1_0(d_2, t);
                                                      e_64 = t;
                                                      t = (ATerm) ATempty;
                                                      t = d_2(t);
                                                      i_64 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(i_64), e_64);
                                                      t = d_2(t);
                                                      k_63 = t;
                                                      t = j_63;
                                                      t = bottomup_1_0(d_2, t);
                                                      d_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, d_64);
                                                      t = d_2(t);
                                                      c_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, c_64);
                                                      t = d_2(t);
                                                      q_63 = t;
                                                      t = r_22;
                                                      t = bottomup_1_0(d_2, t);
                                                      u_63 = t;
                                                      t = j_63;
                                                      t = bottomup_1_0(d_2, t);
                                                      x_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, x_63);
                                                      t = d_2(t);
                                                      w_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, w_63);
                                                      t = d_2(t);
                                                      v_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_63, v_63);
                                                      t = d_2(t);
                                                      t_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_63, t_63);
                                                      t = d_2(t);
                                                      m_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, k_63, m_63);
                                                      t = d_2(t);
                                                      LocalPopChoice(s_31);
                                                    }
                                                  else
                                                    {
                                                      t = r_31;
                                                      t = s_22;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_22 = ATgetArgument(t, 0);
                                                n_22 = ATgetArgument(t, 1);
                                                t = n_22;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    q_21 = ATgetArgument(t, 0);
                                                    w_21 = ATgetArgument(t, 1);
                                                    t = q_21;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        t_21 = ATgetArgument(t, 0);
                                                        t = m_22;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            h_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm t_31 = t;
                                                              int u_31 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm w_64 = NULL,x_64 = NULL,y_64 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, t_21);
                                                                  t = d_2(t);
                                                                  y_64 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_64, w_21);
                                                                  t = d_2(t);
                                                                  x_64 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_22, x_64);
                                                                  t = d_2(t);
                                                                  w_64 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, w_64);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(u_31);
                                                                }
                                                              else
                                                                {
                                                                  t = t_31;
                                                                  {
                                                                    ATerm x_31 = t;
                                                                    int y_31 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm a_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL,u_65 = NULL;
                                                                        t = s_22;
                                                                        t = new_0_0(t);
                                                                        a_65 = t;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        r_65 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = d_2(t);
                                                                        u_65 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(u_65), r_65);
                                                                        t = d_2(t);
                                                                        d_65 = t;
                                                                        t = a_65;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        q_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, q_65);
                                                                        t = d_2(t);
                                                                        p_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, p_65);
                                                                        t = d_2(t);
                                                                        f_65 = t;
                                                                        t = r_22;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        h_65 = t;
                                                                        t = a_65;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        o_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, o_65);
                                                                        t = d_2(t);
                                                                        n_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, n_65);
                                                                        t = d_2(t);
                                                                        m_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, h_65, m_65);
                                                                        t = d_2(t);
                                                                        g_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, f_65, g_65);
                                                                        t = d_2(t);
                                                                        e_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, d_65, e_65);
                                                                        t = d_2(t);
                                                                        LocalPopChoice(y_31);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = x_31;
                                                                        t = s_22;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm c_32 = t;
                                                            int e_32 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm x_65 = NULL,k_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL;
                                                                t = s_22;
                                                                t = new_0_0(t);
                                                                x_65 = t;
                                                                t = bottomup_1_0(d_2, t);
                                                                m_67 = t;
                                                                t = (ATerm) ATempty;
                                                                t = d_2(t);
                                                                n_67 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(n_67), m_67);
                                                                t = d_2(t);
                                                                k_66 = t;
                                                                t = x_65;
                                                                t = bottomup_1_0(d_2, t);
                                                                l_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, l_67);
                                                                t = d_2(t);
                                                                i_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, i_67);
                                                                t = d_2(t);
                                                                a_67 = t;
                                                                t = r_22;
                                                                t = bottomup_1_0(d_2, t);
                                                                c_67 = t;
                                                                t = x_65;
                                                                t = bottomup_1_0(d_2, t);
                                                                h_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, h_67);
                                                                t = d_2(t);
                                                                g_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, g_67);
                                                                t = d_2(t);
                                                                d_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, c_67, d_67);
                                                                t = d_2(t);
                                                                b_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, a_67, b_67);
                                                                t = d_2(t);
                                                                z_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, k_66, z_66);
                                                                t = d_2(t);
                                                                LocalPopChoice(e_32);
                                                              }
                                                            else
                                                              {
                                                                t = c_32;
                                                                t = s_22;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = m_22;
                                                        {
                                                          ATerm g_32 = t;
                                                          int h_32 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL;
                                                              t = s_22;
                                                              t = new_0_0(t);
                                                              u_67 = t;
                                                              t = bottomup_1_0(d_2, t);
                                                              l_68 = t;
                                                              t = (ATerm) ATempty;
                                                              t = d_2(t);
                                                              m_68 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(m_68), l_68);
                                                              t = d_2(t);
                                                              v_67 = t;
                                                              t = u_67;
                                                              t = bottomup_1_0(d_2, t);
                                                              k_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, k_68);
                                                              t = d_2(t);
                                                              j_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, j_68);
                                                              t = d_2(t);
                                                              x_67 = t;
                                                              t = r_22;
                                                              t = bottomup_1_0(d_2, t);
                                                              b_68 = t;
                                                              t = u_67;
                                                              t = bottomup_1_0(d_2, t);
                                                              e_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, e_68);
                                                              t = d_2(t);
                                                              d_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, d_68);
                                                              t = d_2(t);
                                                              c_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_68, c_68);
                                                              t = d_2(t);
                                                              y_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_67, y_67);
                                                              t = d_2(t);
                                                              w_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, v_67, w_67);
                                                              t = d_2(t);
                                                              LocalPopChoice(h_32);
                                                            }
                                                          else
                                                            {
                                                              t = g_32;
                                                              t = s_22;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = m_22;
                                                    {
                                                      ATerm i_32 = t;
                                                      int l_32 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL;
                                                          t = s_22;
                                                          t = new_0_0(t);
                                                          r_68 = t;
                                                          t = bottomup_1_0(d_2, t);
                                                          i_69 = t;
                                                          t = (ATerm) ATempty;
                                                          t = d_2(t);
                                                          j_69 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(j_69), i_69);
                                                          t = d_2(t);
                                                          s_68 = t;
                                                          t = r_68;
                                                          t = bottomup_1_0(d_2, t);
                                                          h_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, h_69);
                                                          t = d_2(t);
                                                          g_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, g_69);
                                                          t = d_2(t);
                                                          u_68 = t;
                                                          t = r_22;
                                                          t = bottomup_1_0(d_2, t);
                                                          c_69 = t;
                                                          t = r_68;
                                                          t = bottomup_1_0(d_2, t);
                                                          f_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, f_69);
                                                          t = d_2(t);
                                                          e_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, e_69);
                                                          t = d_2(t);
                                                          d_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_69, d_69);
                                                          t = d_2(t);
                                                          v_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_68, v_68);
                                                          t = d_2(t);
                                                          t_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, s_68, t_68);
                                                          t = d_2(t);
                                                          LocalPopChoice(l_32);
                                                        }
                                                      else
                                                        {
                                                          t = i_32;
                                                          t = s_22;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    m_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm m_32 = t;
                                                      int n_32 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, m_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(n_32);
                                                        }
                                                      else
                                                        {
                                                          t = m_32;
                                                          {
                                                            ATerm o_32 = t;
                                                            int p_32 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL,x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL,b_70 = NULL,e_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,n_70 = NULL;
                                                                t = s_22;
                                                                t = new_0_0(t);
                                                                p_69 = t;
                                                                t = bottomup_1_0(d_2, t);
                                                                j_70 = t;
                                                                t = (ATerm) ATempty;
                                                                t = d_2(t);
                                                                n_70 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(n_70), j_70);
                                                                t = d_2(t);
                                                                q_69 = t;
                                                                t = p_69;
                                                                t = bottomup_1_0(d_2, t);
                                                                i_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, i_70);
                                                                t = d_2(t);
                                                                h_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, h_70);
                                                                t = d_2(t);
                                                                x_69 = t;
                                                                t = r_22;
                                                                t = bottomup_1_0(d_2, t);
                                                                z_69 = t;
                                                                t = p_69;
                                                                t = bottomup_1_0(d_2, t);
                                                                e_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, e_70);
                                                                t = d_2(t);
                                                                b_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, b_70);
                                                                t = d_2(t);
                                                                a_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, z_69, a_70);
                                                                t = d_2(t);
                                                                y_69 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, x_69, y_69);
                                                                t = d_2(t);
                                                                r_69 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, q_69, r_69);
                                                                t = d_2(t);
                                                                LocalPopChoice(p_32);
                                                              }
                                                            else
                                                              {
                                                                t = o_32;
                                                                t = s_22;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm q_32 = t;
                                                    int r_32 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm u_70 = NULL,v_70 = NULL,z_70 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL;
                                                        t = s_22;
                                                        t = new_0_0(t);
                                                        u_70 = t;
                                                        t = bottomup_1_0(d_2, t);
                                                        j_71 = t;
                                                        t = (ATerm) ATempty;
                                                        t = d_2(t);
                                                        k_71 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(k_71), j_71);
                                                        t = d_2(t);
                                                        v_70 = t;
                                                        t = u_70;
                                                        t = bottomup_1_0(d_2, t);
                                                        i_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, i_71);
                                                        t = d_2(t);
                                                        h_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, h_71);
                                                        t = d_2(t);
                                                        b_71 = t;
                                                        t = r_22;
                                                        t = bottomup_1_0(d_2, t);
                                                        d_71 = t;
                                                        t = u_70;
                                                        t = bottomup_1_0(d_2, t);
                                                        g_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, g_71);
                                                        t = d_2(t);
                                                        f_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, f_71);
                                                        t = d_2(t);
                                                        e_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, d_71, e_71);
                                                        t = d_2(t);
                                                        c_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, b_71, c_71);
                                                        t = d_2(t);
                                                        z_70 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, v_70, z_70);
                                                        t = d_2(t);
                                                        LocalPopChoice(r_32);
                                                      }
                                                    else
                                                      {
                                                        t = q_32;
                                                        t = s_22;
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
                                        r_22 = ATgetArgument(t, 0);
                                        t = r_22;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm s_32 = t;
                                            int t_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_v_16;
                                                t = d_2(t);
                                                LocalPopChoice(t_32);
                                              }
                                            else
                                              {
                                                t = s_32;
                                                t = s_22;
                                              }
                                          }
                                        else
                                          {
                                            t = s_22;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            r_22 = ATgetArgument(t, 0);
                                            t = r_22;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm v_32 = t;
                                                int y_32 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_b_17;
                                                    t = d_2(t);
                                                    LocalPopChoice(y_32);
                                                  }
                                                else
                                                  {
                                                    t = v_32;
                                                    t = s_22;
                                                  }
                                              }
                                            else
                                              {
                                                t = s_22;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                r_22 = ATgetArgument(t, 0);
                                                t = r_22;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm z_32 = t;
                                                    int a_33 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_b_17;
                                                        t = d_2(t);
                                                        LocalPopChoice(a_33);
                                                      }
                                                    else
                                                      {
                                                        t = z_32;
                                                        t = s_22;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = s_22;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm b_33 = t;
                                                int c_33 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm f_33 = ATgetArgument(t, 0);
                                                        o_22 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(c_33);
                                                    t = o_22;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm h_33 = t;
                                                        int i_33 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_b_17;
                                                            t = d_2(t);
                                                            LocalPopChoice(i_33);
                                                          }
                                                        else
                                                          {
                                                            t = h_33;
                                                            t = s_22;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = s_22;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = b_33;
                                                    {
                                                      ATerm j_33 = t;
                                                      int k_33 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm l_33 = ATgetArgument(t, 0);
                                                              o_22 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(k_33);
                                                          {
                                                            ATerm n_33 = t;
                                                            int o_33 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = o_22;
                                                                t = fetch_1_0(f_3, t);
                                                                t = term_b_17;
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(o_33);
                                                              }
                                                            else
                                                              {
                                                                t = n_33;
                                                                t = s_22;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = j_33;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              r_22 = ATgetArgument(t, 0);
                                                              o_22 = ATgetArgument(t, 1);
                                                              t = o_22;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = r_22;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = o_22;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          m_22 = ATgetArgument(t, 0);
                                                                          n_22 = ATgetArgument(t, 1);
                                                                          t = r_22;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = r_22;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = r_22;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = o_22;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          m_22 = ATgetArgument(t, 0);
                                                                          n_22 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm p_33 = t;
                                                                            int q_33 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm f_73 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, n_22, o_22);
                                                                                t = d_2(t);
                                                                                f_73 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, m_22, f_73);
                                                                                t = d_2(t);
                                                                                LocalPopChoice(q_33);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = p_33;
                                                                                {
                                                                                  ATerm r_33 = t;
                                                                                  int s_33 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = o_22;
                                                                                      if((r_22 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(s_33);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = r_33;
                                                                                      t = s_22;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm u_33 = t;
                                                                          int v_33 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = o_22;
                                                                              if((r_22 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(v_33);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_33;
                                                                              t = s_22;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  r_22 = ATgetArgument(t, 0);
                                                                  o_22 = ATgetArgument(t, 1);
                                                                  j_21 = ATgetArgument(t, 2);
                                                                  t = j_21;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm w_33 = t;
                                                                      int y_33 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, r_22, o_22);
                                                                          t = d_2(t);
                                                                          LocalPopChoice(y_33);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = w_33;
                                                                          t = s_22;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = s_22;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      r_22 = ATgetArgument(t, 0);
                                                                      o_22 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm z_33 = t;
                                                                        int a_34 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, r_22, o_22);
                                                                            t = d_2(t);
                                                                            LocalPopChoice(a_34);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = z_33;
                                                                            t = s_22;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          r_22 = ATgetArgument(t, 0);
                                                                          t = r_22;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              m_22 = ATgetFirst((ATermList) t);
                                                                              n_22 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm c_34 = t;
                                                                                int d_34 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm f_74 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, n_22);
                                                                                    t = d_2(t);
                                                                                    f_74 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, m_22, f_74);
                                                                                    t = d_2(t);
                                                                                    LocalPopChoice(d_34);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = c_34;
                                                                                    t = s_22;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm e_34 = t;
                                                                                  int f_34 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_b_17;
                                                                                      t = d_2(t);
                                                                                      LocalPopChoice(f_34);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = e_34;
                                                                                      t = s_22;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = s_22;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              r_22 = ATgetArgument(t, 0);
                                                                              t = r_22;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  m_22 = ATgetFirst((ATermList) t);
                                                                                  n_22 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm h_34 = t;
                                                                                    int i_34 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm v_74 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, n_22);
                                                                                        t = d_2(t);
                                                                                        v_74 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, m_22, v_74);
                                                                                        t = d_2(t);
                                                                                        LocalPopChoice(i_34);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = h_34;
                                                                                        t = s_22;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm j_34 = t;
                                                                                      int l_34 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_b_17;
                                                                                          t = d_2(t);
                                                                                          LocalPopChoice(l_34);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = j_34;
                                                                                          t = s_22;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = s_22;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  r_22 = ATgetArgument(t, 0);
                                                                                  t = r_22;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      m_22 = ATgetFirst((ATermList) t);
                                                                                      n_22 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm m_34 = t;
                                                                                        int n_34 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm n_75 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, n_22);
                                                                                            t = d_2(t);
                                                                                            n_75 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, n_75);
                                                                                            t = d_2(t);
                                                                                            LocalPopChoice(n_34);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = m_34;
                                                                                            t = s_22;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm o_34 = t;
                                                                                          int q_34 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_v_16;
                                                                                              t = d_2(t);
                                                                                              LocalPopChoice(q_34);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = o_34;
                                                                                              t = s_22;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = s_22;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      r_22 = ATgetArgument(t, 0);
                                                                                      o_22 = ATgetArgument(t, 1);
                                                                                      j_21 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm s_34 = t;
                                                                                        int t_34 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm z_75 = NULL,a_76 = NULL,b_76 = NULL,e_76 = NULL,m_76 = NULL;
                                                                                            t = term_u_34;
                                                                                            t = bottomup_1_0(d_2, t);
                                                                                            a_76 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = d_2(t);
                                                                                            m_76 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(m_76), j_21);
                                                                                            t = d_2(t);
                                                                                            e_76 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(e_76), r_22);
                                                                                            t = d_2(t);
                                                                                            b_76 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, a_76, b_76);
                                                                                            t = d_2(t);
                                                                                            z_75 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, o_22, z_75);
                                                                                            t = d_2(t);
                                                                                            LocalPopChoice(t_34);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = s_34;
                                                                                            t = s_22;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          r_22 = ATgetArgument(t, 0);
                                                                                          o_22 = ATgetArgument(t, 1);
                                                                                          j_21 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm v_34 = t;
                                                                                            int w_34 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm v_76 = NULL,w_76 = NULL,d_77 = NULL,k_77 = NULL,m_77 = NULL,p_77 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, o_22);
                                                                                                t = d_2(t);
                                                                                                w_76 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, j_21);
                                                                                                t = d_2(t);
                                                                                                m_77 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = d_2(t);
                                                                                                p_77 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(p_77), m_77);
                                                                                                t = d_2(t);
                                                                                                k_77 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(k_77), r_22);
                                                                                                t = d_2(t);
                                                                                                d_77 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(d_77), w_76);
                                                                                                t = d_2(t);
                                                                                                v_76 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, v_76);
                                                                                                t = d_2(t);
                                                                                                LocalPopChoice(w_34);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = v_34;
                                                                                                t = s_22;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              r_22 = ATgetArgument(t, 0);
                                                                                              o_22 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm x_34 = t;
                                                                                                int y_34 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm l_78 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, o_22);
                                                                                                    t = d_2(t);
                                                                                                    l_78 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, r_22, l_78);
                                                                                                    t = d_2(t);
                                                                                                    LocalPopChoice(y_34);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = x_34;
                                                                                                    t = s_22;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  r_22 = ATgetArgument(t, 0);
                                                                                                  o_22 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm z_34 = t;
                                                                                                    int a_35 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm p_78 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, r_22);
                                                                                                        t = d_2(t);
                                                                                                        p_78 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, p_78, o_22);
                                                                                                        t = d_2(t);
                                                                                                        LocalPopChoice(a_35);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = z_34;
                                                                                                        t = s_22;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      r_22 = ATgetArgument(t, 0);
                                                                                                      o_22 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm c_35 = t;
                                                                                                        int d_35 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm v_78 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, o_22);
                                                                                                            t = d_2(t);
                                                                                                            v_78 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, v_78, r_22);
                                                                                                            t = d_2(t);
                                                                                                            LocalPopChoice(d_35);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = c_35;
                                                                                                            t = s_22;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          r_22 = ATgetArgument(t, 0);
                                                                                                          o_22 = ATgetArgument(t, 1);
                                                                                                          t = o_22;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              j_22 = ATgetArgument(t, 0);
                                                                                                              l_22 = ATgetArgument(t, 1);
                                                                                                              t = r_22;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = o_22;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm e_35 = t;
                                                                                                                  int g_35 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm n_79 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, r_22, j_22);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      n_79 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, n_79, l_22);
                                                                                                                      t = bottomup_1_0(d_2, t);
                                                                                                                      LocalPopChoice(g_35);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = e_35;
                                                                                                                      t = s_22;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  j_22 = ATgetArgument(t, 0);
                                                                                                                  l_22 = ATgetArgument(t, 1);
                                                                                                                  d_22 = ATgetArgument(t, 2);
                                                                                                                  t = d_22;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = l_22;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = j_22;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              i_22 = ATgetArgument(t, 0);
                                                                                                                              t = r_22;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = o_22;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      m_22 = ATgetFirst((ATermList) t);
                                                                                                                                      n_22 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = n_22;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = m_22;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              h_22 = ATgetArgument(t, 0);
                                                                                                                                              a_22 = ATgetArgument(t, 1);
                                                                                                                                              x_21 = ATgetArgument(t, 2);
                                                                                                                                              y_21 = ATgetArgument(t, 3);
                                                                                                                                              t = x_21;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = a_22;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm h_35 = t;
                                                                                                                                                      int i_35 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = i_22;
                                                                                                                                                          if((h_22 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = y_21;
                                                                                                                                                          {
                                                                                                                                                            ATerm l_35 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm g_3 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm m_35 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(m_35, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((h_22 != ATgetArgument(m_35, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(m_35, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm n_35 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(n_35) != AT_LIST) || !(ATisEmpty(n_35))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm o_35 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(o_35) != AT_LIST) || !(ATisEmpty(o_35))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  return(t);
                                                                                                                                                                }
                                                                                                                                                                t = oncetd_1_0(g_3, t);
                                                                                                                                                                PopChoice();
                                                                                                                                                                _fail(t);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                t = l_35;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = y_21;
                                                                                                                                                          t = bottomup_1_0(d_2, t);
                                                                                                                                                          LocalPopChoice(i_35);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = h_35;
                                                                                                                                                          t = s_22;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = s_22;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = s_22;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = s_22;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = s_22;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = s_22;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = r_22;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = o_22;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = s_22;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = r_22;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = o_22;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = s_22;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = r_22;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = o_22;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = s_22;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = r_22;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = o_22;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = s_22;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              r_22 = ATgetArgument(t, 0);
                                                                                                              o_22 = ATgetArgument(t, 1);
                                                                                                              t = r_22;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = o_22;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = s_22;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = s_22;
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
  t = bottomup_1_0(d_2, t);
  return(t);
}
ATerm SubsArgCall2_0_0 (ATerm t)
{
  ATerm f_81 = NULL,h_81 = NULL,i_81 = NULL,j_81 = NULL,d_18 = NULL,e_18 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm p_35 = ATgetArgument(t, 0);
      if(match_cons(p_35, sym_SVar_1))
        {
          i_81 = ATgetArgument(p_35, 0);
        }
      else
        _fail(t);
      f_81 = ATgetArgument(t, 1);
      h_81 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_81), (ATerm)ATempty, (ATerm) ATempty);
  d_18 = t;
  t = term_r_35;
  e_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_35, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_81), (ATerm)ATempty, (ATerm) ATempty));
  t = b_7(e_18, d_18, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm s_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_35) != ATmakeSymbol("n_0", 0, ATtrue)))
        _fail(t);
      j_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_81), f_81, h_81);
  return(t);
}
ATerm SubsArgCall1_0_0 (ATerm t)
{
  ATerm l_81 = NULL,m_81 = NULL,h_18 = NULL;
  l_81 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm t_35 = ATgetArgument(t, 0);
      if(match_cons(t_35, sym_SVar_1))
        {
          ATerm x_35 = ATgetArgument(t_35, 0);
        }
      else
        _fail(t);
      {
        ATerm v_35 = ATgetArgument(t, 1);
        if(((ATgetType(v_35) != AT_LIST) || !(ATisEmpty(v_35))))
          _fail(t);
      }
      {
        ATerm w_35 = ATgetArgument(t, 2);
        if(((ATgetType(w_35) != AT_LIST) || !(ATisEmpty(w_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_y_35;
  h_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_35, l_81);
  t = b_7(h_18, l_81, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm z_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_35) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      m_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_81;
  t = strename_0_0(t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_r_35;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_y_35;
  return(t);
}
ATerm substitute_arg_0_0 (ATerm t)
{
  ATerm f_82 = NULL,g_82 = NULL,i_82 = NULL,j_82 = NULL,m_82 = NULL,n_82 = NULL,o_82 = NULL,p_82 = NULL,q_82 = NULL,s_82 = NULL,u_82 = NULL;
  m_82 = t;
  if(match_cons(t, sym__2))
    {
      n_82 = ATgetArgument(t, 0);
      u_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_82;
  if(match_cons(t, sym_VarDec_2))
    {
      o_82 = ATgetArgument(t, 0);
      p_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_82;
  if(match_cons(t, sym_FunType_2))
    {
      q_82 = ATgetArgument(t, 0);
      {
        ATerm a_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = q_82;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_36 = ATgetFirst((ATermList) t);
      s_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_82;
  {
    ATerm g_36 = t;
    int i_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_36 = ATgetFirst((ATermList) t);
            ATerm q_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_36);
        {
          ATerm y_82 = NULL,z_82 = NULL;
          t = u_82;
          if(match_cons(t, sym_CallT_3))
            {
              f_82 = ATgetArgument(t, 0);
              i_82 = ATgetArgument(t, 1);
              j_82 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = f_82;
          if(match_cons(t, sym_SVar_1))
            {
              g_82 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_82;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = j_82;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_82), (ATerm)ATempty, (ATerm) ATempty);
          y_82 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_s_36, g_82);
          z_82 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_82), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_s_36, g_82));
          t = p_13(h_3, y_82, z_82, t);
          t = m_82;
        }
      }
    else
      {
        t = g_36;
        {
          ATerm f_83 = NULL,h_83 = NULL;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_82), (ATerm)ATempty, (ATerm) ATempty);
          f_83 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_36, u_82);
          h_83 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_82), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_x_36, u_82));
          t = p_13(i_3, f_83, h_83, t);
          t = m_82;
        }
      }
  }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_y_35;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_r_35;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_36 = ATgetArgument(t, 0);
      if(((ATgetType(y_36) != AT_LIST) || !(ATisEmpty(y_36))))
        _fail(t);
      {
        ATerm a_37 = ATgetArgument(t, 1);
        if(((ATgetType(a_37) != AT_LIST) || !(ATisEmpty(a_37))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm p_83 = NULL,q_83 = NULL,s_83 = NULL,t_83 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_37 = ATgetArgument(t, 0);
      if(((ATgetType(b_37) == AT_LIST) && !(ATisEmpty(b_37))))
        {
          p_83 = ATgetFirst((ATermList) b_37);
          q_83 = (ATerm) ATgetNext((ATermList) b_37);
        }
      else
        _fail(t);
      {
        ATerm c_37 = ATgetArgument(t, 1);
        if(((ATgetType(c_37) == AT_LIST) && !(ATisEmpty(c_37))))
          {
            s_83 = ATgetFirst((ATermList) c_37);
            t_83 = (ATerm) ATgetNext((ATermList) c_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_83, s_83), (ATerm) ATmakeAppl(sym__2, q_83, t_83));
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm v_83 = NULL,w_83 = NULL;
  if(match_cons(t, sym__2))
    {
      v_83 = ATgetArgument(t, 0);
      w_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_83), v_83);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm e_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_37 = t;
      int j_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SubsArgCall1_0_0(t);
          LocalPopChoice(j_37);
        }
      else
        {
          t = i_37;
          t = SubsArgCall2_0_0(t);
        }
      LocalPopChoice(g_37);
    }
  else
    {
      t = e_37;
    }
  return(t);
}
ATerm substitute_args_0_0 (ATerm t)
{
  ATerm j_83 = NULL,m_83 = NULL,n_83 = NULL;
  static ATerm k_3 (ATerm t)
  {
    static ATerm m_3 (ATerm t)
    {
      if(match_cons(t, sym__3))
        {
          if(((j_83 != NULL) && (j_83 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            j_83 = ATgetArgument(t, 0);
          if(((m_83 != NULL) && (m_83 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            m_83 = ATgetArgument(t, 1);
          if(((n_83 != NULL) && (n_83 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            n_83 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, j_83, m_83);
      t = genzip_4_0(n_3, o_3, p_3, substitute_arg_0_0, t);
      t = n_83;
      t = topdown_1_0(q_3, t);
      return(t);
    }
    t = scope_2_0(l_3, m_3, t);
    return(t);
  }
  t = scope_2_0(j_3, k_3, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_37 = ATgetArgument(t, 0);
      if(((ATgetType(k_37) != AT_LIST) || !(ATisEmpty(k_37))))
        _fail(t);
      {
        ATerm l_37 = ATgetArgument(t, 1);
        if(((ATgetType(l_37) != AT_LIST) || !(ATisEmpty(l_37))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_37 = ATgetArgument(t, 0);
      if(((ATgetType(n_37) == AT_LIST) && !(ATisEmpty(n_37))))
        {
          s_18 = ATgetFirst((ATermList) n_37);
          t_18 = (ATerm) ATgetNext((ATermList) n_37);
        }
      else
        _fail(t);
      {
        ATerm o_37 = ATgetArgument(t, 1);
        if(((ATgetType(o_37) == AT_LIST) && !(ATisEmpty(o_37))))
          {
            u_18 = ATgetFirst((ATermList) o_37);
            v_18 = (ATerm) ATgetNext((ATermList) o_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_18, u_18), (ATerm) ATmakeAppl(sym__2, t_18, v_18));
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL;
  if(match_cons(t, sym__2))
    {
      w_18 = ATgetArgument(t, 0);
      x_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_18), w_18);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm z_18 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
  if(match_cons(t, sym__2))
    {
      z_18 = ATgetArgument(t, 0);
      e_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_18;
  {
    ATerm p_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm r_37 = ATgetArgument(t, 0);
            b_19 = ATgetArgument(t, 1);
            c_19 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(q_37);
        t = (ATerm) ATmakeAppl(sym_SDef_3, e_19, b_19, c_19);
      }
    else
      {
        t = p_37;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm s_37 = ATgetArgument(t, 0);
            b_19 = ATgetArgument(t, 1);
            c_19 = ATgetArgument(t, 2);
            d_19 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, e_19, b_19, c_19, d_19);
      }
  }
  return(t);
}
static ATerm v_3 (ATerm t)
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
static ATerm w_3 (ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_37 = ATgetArgument(t, 0);
      if(((ATgetType(v_37) == AT_LIST) && !(ATisEmpty(v_37))))
        {
          a_20 = ATgetFirst((ATermList) v_37);
          b_20 = (ATerm) ATgetNext((ATermList) v_37);
        }
      else
        _fail(t);
      {
        ATerm w_37 = ATgetArgument(t, 1);
        if(((ATgetType(w_37) == AT_LIST) && !(ATisEmpty(w_37))))
          {
            c_20 = ATgetFirst((ATermList) w_37);
            d_20 = (ATerm) ATgetNext((ATermList) w_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_20, c_20), (ATerm) ATmakeAppl(sym__2, b_20, d_20));
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL;
  if(match_cons(t, sym__2))
    {
      e_20 = ATgetArgument(t, 0);
      f_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_20), e_20);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm h_20 = NULL,j_20 = NULL,k_20 = NULL;
  if(match_cons(t, sym__2))
    {
      h_20 = ATgetArgument(t, 0);
      k_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_20;
  {
    ATerm x_37 = t;
    int y_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm z_37 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_37);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, k_20);
      }
    else
      {
        t = x_37;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm a_38 = ATgetArgument(t, 0);
            j_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, k_20, j_20);
      }
  }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_38 = ATgetArgument(t, 0);
      if(((ATgetType(b_38) != AT_LIST) || !(ATisEmpty(b_38))))
        _fail(t);
      {
        ATerm c_38 = ATgetArgument(t, 1);
        if(((ATgetType(c_38) != AT_LIST) || !(ATisEmpty(c_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm k_22 = NULL,p_22 = NULL,q_22 = NULL,u_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_38 = ATgetArgument(t, 0);
      if(((ATgetType(g_38) == AT_LIST) && !(ATisEmpty(g_38))))
        {
          k_22 = ATgetFirst((ATermList) g_38);
          p_22 = (ATerm) ATgetNext((ATermList) g_38);
        }
      else
        _fail(t);
      {
        ATerm h_38 = ATgetArgument(t, 1);
        if(((ATgetType(h_38) == AT_LIST) && !(ATisEmpty(h_38))))
          {
            q_22 = ATgetFirst((ATermList) h_38);
            u_22 = (ATerm) ATgetNext((ATermList) h_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_22, q_22), (ATerm) ATmakeAppl(sym__2, p_22, u_22));
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL;
  if(match_cons(t, sym__2))
    {
      v_22 = ATgetArgument(t, 0);
      w_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_22), v_22);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm y_22 = NULL,a_23 = NULL,c_23 = NULL;
  if(match_cons(t, sym__2))
    {
      y_22 = ATgetArgument(t, 0);
      c_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_22;
  {
    ATerm i_38 = t;
    int j_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm k_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(j_38);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_23);
      }
    else
      {
        t = i_38;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm m_38 = ATgetArgument(t, 0);
            a_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, c_23, a_23);
      }
  }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_38 = ATgetArgument(t, 0);
      if(((ATgetType(p_38) != AT_LIST) || !(ATisEmpty(p_38))))
        _fail(t);
      {
        ATerm q_38 = ATgetArgument(t, 1);
        if(((ATgetType(q_38) != AT_LIST) || !(ATisEmpty(q_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,k_24 = NULL,l_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_38 = ATgetArgument(t, 0);
      if(((ATgetType(w_38) == AT_LIST) && !(ATisEmpty(w_38))))
        {
          h_24 = ATgetFirst((ATermList) w_38);
          i_24 = (ATerm) ATgetNext((ATermList) w_38);
        }
      else
        _fail(t);
      {
        ATerm y_38 = ATgetArgument(t, 1);
        if(((ATgetType(y_38) == AT_LIST) && !(ATisEmpty(y_38))))
          {
            k_24 = ATgetFirst((ATermList) y_38);
            l_24 = (ATerm) ATgetNext((ATermList) y_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_24, k_24), (ATerm) ATmakeAppl(sym__2, i_24, l_24));
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL;
  if(match_cons(t, sym__2))
    {
      m_24 = ATgetArgument(t, 0);
      n_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_24), m_24);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm p_24 = NULL,v_24 = NULL,z_24 = NULL;
  if(match_cons(t, sym__2))
    {
      p_24 = ATgetArgument(t, 0);
      z_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_24;
  {
    ATerm z_38 = t;
    int a_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm b_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(a_39);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, z_24);
      }
    else
      {
        t = z_38;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm d_39 = ATgetArgument(t, 0);
            v_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, z_24, v_24);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm f_106 (ATerm), ATerm t)
{
  ATerm a_91 = NULL,b_91 = NULL,d_91 = NULL,e_91 = NULL,f_91 = NULL;
  d_91 = t;
  if(match_cons(t, sym_Let_2))
    {
      e_91 = ATgetArgument(t, 0);
      f_91 = ATgetArgument(t, 1);
      {
        ATerm m_18 = NULL,p_18 = NULL,q_18 = NULL,s_4 = NULL;
        t = SSLgetAnnotations(d_91);
        m_18 = t;
        t = e_91;
        t = f_106(t);
        q_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_91, q_18);
        t = genzip_4_0(r_3, s_3, t_3, u_3, t);
        p_18 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, p_18, f_91);
        s_4 = t;
        t = SSLsetAnnotations(s_4, m_18);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          e_91 = ATgetArgument(t, 0);
          f_91 = ATgetArgument(t, 1);
          a_91 = ATgetArgument(t, 2);
          {
            ATerm t_19 = NULL,x_19 = NULL,y_19 = NULL,u_4 = NULL;
            t = SSLgetAnnotations(d_91);
            t_19 = t;
            t = f_91;
            t = f_106(t);
            y_19 = t;
            t = (ATerm) ATmakeAppl(sym__2, f_91, y_19);
            t = genzip_4_0(v_3, w_3, x_3, y_3, t);
            x_19 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, e_91, x_19, a_91);
            u_4 = t;
            t = SSLsetAnnotations(u_4, t_19);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              e_91 = ATgetArgument(t, 0);
              f_91 = ATgetArgument(t, 1);
              a_91 = ATgetArgument(t, 2);
              b_91 = ATgetArgument(t, 3);
              {
                ATerm o_21 = NULL,v_21 = NULL,e_22 = NULL,v_4 = NULL;
                t = SSLgetAnnotations(d_91);
                o_21 = t;
                t = f_91;
                t = f_106(t);
                e_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, f_91, e_22);
                t = genzip_4_0(z_3, b_4, c_4, d_4, t);
                v_21 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, e_91, v_21, a_91, b_91);
                v_4 = t;
                t = SSLsetAnnotations(v_4, o_21);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  e_91 = ATgetArgument(t, 0);
                  f_91 = ATgetArgument(t, 1);
                  a_91 = ATgetArgument(t, 2);
                  b_91 = ATgetArgument(t, 3);
                  {
                    ATerm y_23 = NULL,d_24 = NULL,f_24 = NULL,w_4 = NULL;
                    t = SSLgetAnnotations(d_91);
                    y_23 = t;
                    t = f_91;
                    t = f_106(t);
                    f_24 = t;
                    t = (ATerm) ATmakeAppl(sym__2, f_91, f_24);
                    t = genzip_4_0(e_4, f_4, g_4, l_4, t);
                    d_24 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, e_91, d_24, a_91, b_91);
                    w_4 = t;
                    t = SSLsetAnnotations(w_4, y_23);
                  }
                }
              else
                {
                  ATerm x_25 = NULL,d_26 = NULL,y_4 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      e_91 = ATgetArgument(t, 0);
                      f_91 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(d_91);
                  x_25 = t;
                  t = e_91;
                  t = f_106(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      d_26 = ATgetFirst((ATermList) t);
                      {
                        ATerm g_39 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, d_26, f_91);
                  y_4 = t;
                  t = SSLsetAnnotations(y_4, x_25);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm t)
{
  ATerm c_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL,i_94 = NULL;
  g_94 = t;
  if(match_cons(t, sym_Let_2))
    {
      h_94 = ATgetArgument(t, 0);
      i_94 = ATgetArgument(t, 1);
      {
        ATerm s_26 = NULL,w_26 = NULL,x_26 = NULL,f_5 = NULL;
        t = SSLgetAnnotations(g_94);
        s_26 = t;
        t = h_94;
        t = g_106(t);
        w_26 = t;
        t = i_94;
        t = g_106(t);
        x_26 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, w_26, x_26);
        f_5 = t;
        t = SSLsetAnnotations(f_5, s_26);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          h_94 = ATgetArgument(t, 0);
          i_94 = ATgetArgument(t, 1);
          c_94 = ATgetArgument(t, 2);
          {
            ATerm q_27 = NULL,f_28 = NULL,h_28 = NULL,i_28 = NULL,h_5 = NULL;
            t = SSLgetAnnotations(g_94);
            q_27 = t;
            t = h_94;
            t = i_106(t);
            f_28 = t;
            t = i_94;
            t = i_106(t);
            h_28 = t;
            t = c_94;
            t = g_106(t);
            i_28 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, f_28, h_28, i_28);
            h_5 = t;
            t = SSLsetAnnotations(h_5, q_27);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              h_94 = ATgetArgument(t, 0);
              i_94 = ATgetArgument(t, 1);
              c_94 = ATgetArgument(t, 2);
              f_94 = ATgetArgument(t, 3);
              {
                ATerm j_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,e_30 = NULL,i_5 = NULL;
                t = SSLgetAnnotations(g_94);
                j_29 = t;
                t = h_94;
                t = i_106(t);
                t_29 = t;
                t = i_94;
                t = i_106(t);
                u_29 = t;
                t = c_94;
                t = i_106(t);
                v_29 = t;
                t = f_94;
                t = g_106(t);
                e_30 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, t_29, u_29, v_29, e_30);
                i_5 = t;
                t = SSLsetAnnotations(i_5, j_29);
              }
            }
          else
            {
              ATerm z_30 = NULL,f_31 = NULL,g_31 = NULL,j_5 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  h_94 = ATgetArgument(t, 0);
                  i_94 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(g_94);
              z_30 = t;
              t = h_94;
              t = i_106(t);
              f_31 = t;
              t = i_94;
              t = g_106(t);
              g_31 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, f_31, g_31);
              j_5 = t;
              t = SSLsetAnnotations(j_5, z_30);
            }
        }
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm q_94 = NULL;
  ATerm i_39 = t;
  int j_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          q_94 = ATgetArgument(t, 0);
          {
            ATerm k_39 = ATgetArgument(t, 1);
          }
          {
            ATerm l_39 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_39);
      t = q_94;
    }
  else
    {
      t = i_39;
      if(match_cons(t, sym_SDefT_4))
        {
          q_94 = ATgetArgument(t, 0);
          {
            ATerm m_39 = ATgetArgument(t, 1);
          }
          {
            ATerm n_39 = ATgetArgument(t, 2);
          }
          {
            ATerm o_39 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = q_94;
    }
  return(t);
}
static ATerm w_12 (ATerm o_25, ATerm n_25, ATerm t)
{
  t = o_25;
  t = map_1_0(n_4, t);
  return(t);
}
ATerm SVar_1_0 (ATerm n_88 (ATerm), ATerm t)
{
  ATerm w_94 = NULL,x_94 = NULL,a_95 = NULL,d_95 = NULL,o_5 = NULL;
  d_95 = t;
  if(match_cons(t, sym_SVar_1))
    {
      x_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_95);
  w_94 = t;
  t = x_94;
  t = n_88(t);
  a_95 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, a_95);
  o_5 = t;
  t = SSLsetAnnotations(o_5, w_94);
  return(t);
}
static ATerm h_13 (ATerm n_122 (ATerm), ATerm o_122 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm e_44, ATerm d_44, ATerm c_44, ATerm t)
{
  static ATerm o_4 (ATerm t)
  {
    ATerm f_95 = NULL;
    f_95 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_95, c_44);
    t = n_122(t);
    return(t);
  }
  static ATerm p_4 (ATerm t)
  {
    ATerm g_95 = NULL;
    g_95 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_95, d_44);
    t = n_122(t);
    return(t);
  }
  t = e_44;
  t = o_122(o_4, p_4, _id, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm q_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_39 = ATgetArgument(t, 0);
      if(((ATgetType(q_39) != AT_LIST) || !(ATisEmpty(q_39))))
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
static ATerm r_4 (ATerm t)
{
  ATerm b_96 = NULL,c_96 = NULL,d_96 = NULL,h_96 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_39 = ATgetArgument(t, 0);
      if(((ATgetType(s_39) == AT_LIST) && !(ATisEmpty(s_39))))
        {
          b_96 = ATgetFirst((ATermList) s_39);
          c_96 = (ATerm) ATgetNext((ATermList) s_39);
        }
      else
        _fail(t);
      {
        ATerm t_39 = ATgetArgument(t, 1);
        if(((ATgetType(t_39) == AT_LIST) && !(ATisEmpty(t_39))))
          {
            d_96 = ATgetFirst((ATermList) t_39);
            h_96 = (ATerm) ATgetNext((ATermList) t_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_96, d_96), (ATerm) ATmakeAppl(sym__2, c_96, h_96));
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm l_96 = NULL,m_96 = NULL;
  if(match_cons(t, sym__2))
    {
      l_96 = ATgetArgument(t, 0);
      m_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_96), l_96);
  return(t);
}
static ATerm i_13 (ATerm h_122 (ATerm), ATerm i_122 (ATerm (ATerm), ATerm), ATerm w_43, ATerm z_43, ATerm t)
{
  ATerm p_95 = NULL,s_95 = NULL,v_95 = NULL,w_95 = NULL,y_95 = NULL;
  t = w_43;
  t = h_122(t);
  p_95 = t;
  t = map_1_0(new_0_0, t);
  s_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_95, s_95);
  t = genzip_4_0(q_4, r_4, t_4, _id, t);
  y_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_95, z_43);
  t = conc_0_0(t);
  v_95 = t;
  t = w_43;
  {
    static ATerm x_4 (ATerm t)
    {
      t = s_95;
      return(t);
    }
    t = i_122(x_4, t);
  }
  w_95 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_95, z_43, v_95);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm r_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL,v_96 = NULL,w_96 = NULL,x_96 = NULL;
  t_96 = t;
  if(match_cons(t, sym__2))
    {
      u_96 = ATgetArgument(t, 0);
      v_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_96;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_96 = ATgetFirst((ATermList) t);
      x_96 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_96;
  if(match_cons(t, sym__2))
    {
      r_96 = ATgetArgument(t, 0);
      s_96 = ATgetArgument(t, 1);
      {
        ATerm u_39 = t;
        int v_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_96;
            if((u_96 != t))
              {
                _fail(t);
              }
            t = s_96;
            LocalPopChoice(v_39);
          }
        else
          {
            t = u_39;
            t = (ATerm) ATmakeAppl(sym__2, u_96, x_96);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, u_96, x_96);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm v_122 (ATerm), ATerm t)
{
  static ATerm t_97 (ATerm t)
  {
    ATerm w_39 = t;
    int x_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_122(t);
        LocalPopChoice(x_39);
      }
    else
      {
        t = w_39;
        {
          ATerm q_97 = NULL,r_97 = NULL,s_97 = NULL;
          static ATerm z_4 (ATerm t)
          {
            ATerm k_32 = NULL;
            k_32 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_32, not_null(s_97));
            t = t_97(t);
            return(t);
          }
          q_97 = t;
          if(match_cons(t, sym__2))
            {
              r_97 = ATgetArgument(t, 0);
              if(((s_97 != NULL) && (s_97 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                s_97 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_97;
          t = SRTS_all(z_4, t);
        }
      }
    return(t);
  }
  t = t_97(t);
  return(t);
}
ATerm rename_4_0 (ATerm c_122 (ATerm (ATerm), ATerm), ATerm d_122 (ATerm), ATerm e_122 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm f_122 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm z_97 = NULL;
  static ATerm o_98 (ATerm t)
  {
    static ATerm a_5 (ATerm t)
    {
      ATerm i_98 = NULL,j_98 = NULL,k_98 = NULL;
      i_98 = t;
      if(match_cons(t, sym__2))
        {
          j_98 = ATgetArgument(t, 0);
          k_98 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm y_39 = t;
        int z_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_5 (ATerm t)
            {
              ATerm n_98 = NULL;
              n_98 = t;
              t = (ATerm) ATmakeAppl(sym__2, n_98, k_98);
              t = lookup_0_0(t);
              return(t);
            }
            t = j_98;
            t = c_122(b_5, t);
            LocalPopChoice(z_39);
          }
        else
          {
            t = y_39;
            {
              ATerm u_32 = NULL,w_32 = NULL,x_32 = NULL;
              t = i_98;
              t = i_13(d_122, f_122, j_98, k_98, t);
              if(match_cons(t, sym__3))
                {
                  u_32 = ATgetArgument(t, 0);
                  w_32 = ATgetArgument(t, 1);
                  x_32 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = h_13(o_98, e_122, u_32, w_32, x_32, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(a_5, t);
    return(t);
  }
  z_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_97, (ATerm) ATempty);
  t = o_98(t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_40 = ATgetArgument(t, 0);
      if(((ATgetType(b_40) != AT_LIST) || !(ATisEmpty(b_40))))
        _fail(t);
      {
        ATerm c_40 = ATgetArgument(t, 1);
        if(((ATgetType(c_40) != AT_LIST) || !(ATisEmpty(c_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL,n_36 = NULL,o_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_40 = ATgetArgument(t, 0);
      if(((ATgetType(d_40) == AT_LIST) && !(ATisEmpty(d_40))))
        {
          j_36 = ATgetFirst((ATermList) d_40);
          k_36 = (ATerm) ATgetNext((ATermList) d_40);
        }
      else
        _fail(t);
      {
        ATerm e_40 = ATgetArgument(t, 1);
        if(((ATgetType(e_40) == AT_LIST) && !(ATisEmpty(e_40))))
          {
            n_36 = ATgetFirst((ATermList) e_40);
            o_36 = (ATerm) ATgetNext((ATermList) e_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_36, n_36), (ATerm) ATmakeAppl(sym__2, k_36, o_36));
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm u_36 = NULL,w_36 = NULL;
  if(match_cons(t, sym__2))
    {
      u_36 = ATgetArgument(t, 0);
      w_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_36), u_36);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm d_37 = NULL,f_37 = NULL,h_37 = NULL;
  if(match_cons(t, sym__2))
    {
      d_37 = ATgetArgument(t, 0);
      h_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_37;
  {
    ATerm f_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_40);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_37);
      }
    else
      {
        t = f_40;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm i_40 = ATgetArgument(t, 0);
            f_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, h_37, f_37);
      }
  }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_40 = ATgetArgument(t, 0);
      if(((ATgetType(j_40) != AT_LIST) || !(ATisEmpty(j_40))))
        _fail(t);
      {
        ATerm l_40 = ATgetArgument(t, 1);
        if(((ATgetType(l_40) != AT_LIST) || !(ATisEmpty(l_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_40 = ATgetArgument(t, 0);
      if(((ATgetType(n_40) == AT_LIST) && !(ATisEmpty(n_40))))
        {
          r_38 = ATgetFirst((ATermList) n_40);
          s_38 = (ATerm) ATgetNext((ATermList) n_40);
        }
      else
        _fail(t);
      {
        ATerm o_40 = ATgetArgument(t, 1);
        if(((ATgetType(o_40) == AT_LIST) && !(ATisEmpty(o_40))))
          {
            t_38 = ATgetFirst((ATermList) o_40);
            u_38 = (ATerm) ATgetNext((ATermList) o_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_38, t_38), (ATerm) ATmakeAppl(sym__2, s_38, u_38));
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm v_38 = NULL,x_38 = NULL;
  if(match_cons(t, sym__2))
    {
      v_38 = ATgetArgument(t, 0);
      x_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_38), v_38);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm c_39 = NULL,e_39 = NULL,f_39 = NULL;
  if(match_cons(t, sym__2))
    {
      c_39 = ATgetArgument(t, 0);
      f_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_39;
  {
    ATerm p_40 = t;
    int q_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm s_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_40);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, f_39);
      }
    else
      {
        t = p_40;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm v_40 = ATgetArgument(t, 0);
            e_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, f_39, e_39);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm b_106 (ATerm), ATerm t)
{
  ATerm j_101 = NULL,k_101 = NULL,l_101 = NULL,m_101 = NULL,n_101 = NULL;
  j_101 = t;
  if(match_cons(t, sym_Scope_2))
    {
      k_101 = ATgetArgument(t, 0);
      l_101 = ATgetArgument(t, 1);
      {
        ATerm m_33 = NULL,k_34 = NULL,r_5 = NULL;
        t = SSLgetAnnotations(j_101);
        m_33 = t;
        t = k_101;
        t = b_106(t);
        k_34 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, k_34, l_101);
        r_5 = t;
        t = SSLsetAnnotations(r_5, m_33);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          k_101 = ATgetArgument(t, 0);
          l_101 = ATgetArgument(t, 1);
          m_101 = ATgetArgument(t, 2);
          n_101 = ATgetArgument(t, 3);
          {
            ATerm u_35 = NULL,c_36 = NULL,h_36 = NULL,s_5 = NULL;
            t = SSLgetAnnotations(j_101);
            u_35 = t;
            t = m_101;
            t = b_106(t);
            h_36 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_101, h_36);
            t = genzip_4_0(c_5, d_5, e_5, k_5, t);
            c_36 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, k_101, l_101, c_36, n_101);
            s_5 = t;
            t = SSLsetAnnotations(s_5, u_35);
          }
        }
      else
        {
          ATerm f_38 = NULL,l_38 = NULL,n_38 = NULL,t_5 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              k_101 = ATgetArgument(t, 0);
              l_101 = ATgetArgument(t, 1);
              m_101 = ATgetArgument(t, 2);
              n_101 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_101);
          f_38 = t;
          t = m_101;
          t = b_106(t);
          n_38 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_101, n_38);
          t = genzip_4_0(l_5, m_5, n_5, p_5, t);
          l_38 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, k_101, l_101, l_38, n_101);
          t_5 = t;
          t = SSLsetAnnotations(t_5, f_38);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm t)
{
  ATerm m_104 = NULL,n_104 = NULL,o_104 = NULL,p_104 = NULL,q_104 = NULL;
  p_104 = t;
  if(match_cons(t, sym_Scope_2))
    {
      q_104 = ATgetArgument(t, 0);
      m_104 = ATgetArgument(t, 1);
      {
        ATerm m_40 = NULL,y_40 = NULL,z_40 = NULL,y_5 = NULL;
        t = SSLgetAnnotations(p_104);
        m_40 = t;
        t = q_104;
        t = e_106(t);
        y_40 = t;
        t = m_104;
        t = c_106(t);
        z_40 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, y_40, z_40);
        y_5 = t;
        t = SSLsetAnnotations(y_5, m_40);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          q_104 = ATgetArgument(t, 0);
          m_104 = ATgetArgument(t, 1);
          n_104 = ATgetArgument(t, 2);
          o_104 = ATgetArgument(t, 3);
          {
            ATerm h_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,z_5 = NULL;
            t = SSLgetAnnotations(p_104);
            h_42 = t;
            t = q_104;
            t = e_106(t);
            m_42 = t;
            t = m_104;
            t = e_106(t);
            n_42 = t;
            t = n_104;
            t = e_106(t);
            o_42 = t;
            t = o_104;
            t = c_106(t);
            p_42 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, m_42, n_42, o_42, p_42);
            z_5 = t;
            t = SSLsetAnnotations(z_5, h_42);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              q_104 = ATgetArgument(t, 0);
              m_104 = ATgetArgument(t, 1);
              n_104 = ATgetArgument(t, 2);
              o_104 = ATgetArgument(t, 3);
              {
                ATerm e_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,n_43 = NULL,a_6 = NULL;
                t = SSLgetAnnotations(p_104);
                e_43 = t;
                t = q_104;
                t = e_106(t);
                j_43 = t;
                t = m_104;
                t = e_106(t);
                k_43 = t;
                t = n_104;
                t = e_106(t);
                l_43 = t;
                t = o_104;
                t = c_106(t);
                n_43 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, j_43, k_43, l_43, n_43);
                a_6 = t;
                t = SSLsetAnnotations(a_6, e_43);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  q_104 = ATgetArgument(t, 0);
                  {
                    ATerm a_44 = NULL,g_44 = NULL,b_6 = NULL;
                    t = SSLgetAnnotations(p_104);
                    a_44 = t;
                    t = q_104;
                    t = c_106(t);
                    g_44 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, g_44);
                    b_6 = t;
                    t = SSLsetAnnotations(b_6, a_44);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      q_104 = ATgetArgument(t, 0);
                      {
                        ATerm u_44 = NULL,d_45 = NULL,d_6 = NULL;
                        t = SSLgetAnnotations(p_104);
                        u_44 = t;
                        t = q_104;
                        t = c_106(t);
                        d_45 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, d_45);
                        d_6 = t;
                        t = SSLsetAnnotations(d_6, u_44);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          q_104 = ATgetArgument(t, 0);
                          {
                            ATerm n_45 = NULL,w_45 = NULL,e_6 = NULL;
                            t = SSLgetAnnotations(p_104);
                            n_45 = t;
                            t = q_104;
                            t = c_106(t);
                            w_45 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, w_45);
                            e_6 = t;
                            t = SSLsetAnnotations(e_6, n_45);
                          }
                        }
                      else
                        {
                          ATerm i_46 = NULL,k_46 = NULL,g_6 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              q_104 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(p_104);
                          i_46 = t;
                          t = q_104;
                          t = c_106(t);
                          k_46 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, k_46);
                          g_6 = t;
                          t = SSLsetAnnotations(g_6, i_46);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm s_105 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_105);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm x_40 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_41);
    }
  else
    {
      t = x_40;
      {
        ATerm d_41 = t;
        int e_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_41);
          }
        else
          {
            t = d_41;
            {
              ATerm u_105 = NULL,v_105 = NULL,w_105 = NULL,x_105 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  u_105 = ATgetArgument(t, 0);
                  v_105 = ATgetArgument(t, 1);
                  w_105 = ATgetArgument(t, 2);
                  x_105 = ATgetArgument(t, 3);
                  t = w_105;
                  t = map_1_0(v_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      u_105 = ATgetArgument(t, 0);
                      v_105 = ATgetArgument(t, 1);
                      w_105 = ATgetArgument(t, 2);
                      x_105 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_105;
                  t = map_1_0(w_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm o_106 = NULL;
  ATerm f_41 = t;
  int g_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_106 = ATgetArgument(t, 0);
          {
            ATerm i_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_41);
      t = o_106;
    }
  else
    {
      t = f_41;
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
static ATerm w_5 (ATerm t)
{
  ATerm x_106 = NULL;
  ATerm j_41 = t;
  int k_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_106 = ATgetArgument(t, 0);
          {
            ATerm l_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_41);
      t = x_106;
    }
  else
    {
      t = j_41;
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
static ATerm x_5 (ATerm t)
{
  ATerm f_107 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_107);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm n_41 = t;
  int o_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_41);
    }
  else
    {
      t = n_41;
      {
        ATerm u_41 = t;
        int y_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(y_41);
          }
        else
          {
            t = u_41;
            {
              ATerm h_107 = NULL,i_107 = NULL,j_107 = NULL,k_107 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  h_107 = ATgetArgument(t, 0);
                  i_107 = ATgetArgument(t, 1);
                  j_107 = ATgetArgument(t, 2);
                  k_107 = ATgetArgument(t, 3);
                  t = j_107;
                  t = map_1_0(f_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      h_107 = ATgetArgument(t, 0);
                      i_107 = ATgetArgument(t, 1);
                      j_107 = ATgetArgument(t, 2);
                      k_107 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_107;
                  t = map_1_0(h_6, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm r_107 = NULL;
  ATerm z_41 = t;
  int a_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_107 = ATgetArgument(t, 0);
          {
            ATerm b_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_42);
      t = r_107;
    }
  else
    {
      t = z_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_107 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_107;
    }
  return(t);
}
static ATerm h_6 (ATerm t)
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
static ATerm i_6 (ATerm t)
{
  ATerm k_108 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_108);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm f_42 = t;
  int g_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_42);
    }
  else
    {
      t = f_42;
      {
        ATerm i_42 = t;
        int j_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_42);
          }
        else
          {
            t = i_42;
            {
              ATerm m_108 = NULL,n_108 = NULL,o_108 = NULL,p_108 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  m_108 = ATgetArgument(t, 0);
                  n_108 = ATgetArgument(t, 1);
                  o_108 = ATgetArgument(t, 2);
                  p_108 = ATgetArgument(t, 3);
                  t = o_108;
                  t = map_1_0(k_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      m_108 = ATgetArgument(t, 0);
                      n_108 = ATgetArgument(t, 1);
                      o_108 = ATgetArgument(t, 2);
                      p_108 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_108;
                  t = map_1_0(l_6, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm w_108 = NULL;
  ATerm k_42 = t;
  int l_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_108 = ATgetArgument(t, 0);
          {
            ATerm q_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_42);
      t = w_108;
    }
  else
    {
      t = k_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_108 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_108;
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm f_109 = NULL;
  ATerm r_42 = t;
  int s_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_109 = ATgetArgument(t, 0);
          {
            ATerm t_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_42);
      t = f_109;
    }
  else
    {
      t = r_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_109 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_109;
    }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm j_109 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_109);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm u_42 = t;
  int v_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_42);
    }
  else
    {
      t = u_42;
      {
        ATerm w_42 = t;
        int x_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_42);
          }
        else
          {
            t = w_42;
            {
              ATerm m_109 = NULL,n_109 = NULL,p_109 = NULL,q_109 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  m_109 = ATgetArgument(t, 0);
                  n_109 = ATgetArgument(t, 1);
                  p_109 = ATgetArgument(t, 2);
                  q_109 = ATgetArgument(t, 3);
                  t = p_109;
                  t = map_1_0(o_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      m_109 = ATgetArgument(t, 0);
                      n_109 = ATgetArgument(t, 1);
                      p_109 = ATgetArgument(t, 2);
                      q_109 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_109;
                  t = map_1_0(q_6, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm x_109 = NULL;
  ATerm y_42 = t;
  int z_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_109 = ATgetArgument(t, 0);
          {
            ATerm a_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_42);
      t = x_109;
    }
  else
    {
      t = y_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_109 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_109;
    }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm l_110 = NULL;
  ATerm b_43 = t;
  int c_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_110 = ATgetArgument(t, 0);
          {
            ATerm d_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_43);
      t = l_110;
    }
  else
    {
      t = b_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_110;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm q_105 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      q_105 = ATgetArgument(t, 0);
      t = q_105;
      t = free_vars_3_0(q_5, u_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          q_105 = ATgetArgument(t, 0);
          t = q_105;
          t = free_vars_3_0(x_5, c_6, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              q_105 = ATgetArgument(t, 0);
              t = q_105;
              t = free_vars_3_0(i_6, j_6, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  q_105 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = q_105;
              t = free_vars_3_0(m_6, n_6, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm b_13 (ATerm y_117 (ATerm), ATerm w_40, ATerm u_40, ATerm t)
{
  static ATerm d_111 (ATerm t)
  {
    ATerm y_110 = NULL,z_110 = NULL,a_111 = NULL;
    y_110 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_40;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_110 = ATgetFirst((ATermList) t);
            a_111 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_43 = t;
          int g_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_110;
              {
                static ATerm s_6 (ATerm t)
                {
                  t = u_40;
                  return(t);
                }
                t = c_13(y_117, s_6, z_110, a_111, t);
              }
              t = d_111(t);
              LocalPopChoice(g_43);
            }
          else
            {
              t = f_43;
              {
                ATerm b_47 = NULL,k_47 = NULL,p_6 = NULL;
                t = SSLgetAnnotations(y_110);
                b_47 = t;
                t = a_111;
                t = d_111(t);
                k_47 = t;
                t = (ATerm) ATinsert(CheckATermList(k_47), z_110);
                p_6 = t;
                t = SSLsetAnnotations(p_6, b_47);
              }
            }
        }
      }
    return(t);
  }
  t = w_40;
  t = d_111(t);
  return(t);
}
static ATerm c_13 (ATerm b_118 (ATerm), ATerm c_118 (ATerm), ATerm b_41, ATerm a_41, ATerm t)
{
  t = c_118(t);
  {
    static ATerm t_6 (ATerm t)
    {
      ATerm f_111 = NULL;
      f_111 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_41, f_111);
      t = b_118(t);
      return(t);
    }
    t = fetch_1_0(t_6, t);
  }
  t = a_41;
  return(t);
}
static ATerm d_13 (ATerm t_117 (ATerm), ATerm t_40, ATerm r_40, ATerm t)
{
  static ATerm a_112 (ATerm t)
  {
    ATerm v_111 = NULL,w_111 = NULL,x_111 = NULL;
    v_111 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_111;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_111 = ATgetFirst((ATermList) t);
            x_111 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_43 = t;
          int i_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_111;
              {
                static ATerm w_6 (ATerm t)
                {
                  t = r_40;
                  return(t);
                }
                t = c_13(t_117, w_6, w_111, x_111, t);
              }
              t = a_112(t);
              LocalPopChoice(i_43);
            }
          else
            {
              t = h_43;
              {
                ATerm i_48 = NULL,l_48 = NULL,r_6 = NULL;
                t = SSLgetAnnotations(v_111);
                i_48 = t;
                t = x_111;
                t = a_112(t);
                l_48 = t;
                t = (ATerm) ATinsert(CheckATermList(l_48), w_111);
                r_6 = t;
                t = SSLsetAnnotations(r_6, i_48);
              }
            }
        }
      }
    return(t);
  }
  t = t_40;
  t = a_112(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_43 = ATgetArgument(t, 0);
      if(((ATgetType(o_43) != AT_LIST) || !(ATisEmpty(o_43))))
        _fail(t);
      {
        ATerm p_43 = ATgetArgument(t, 1);
        if(((ATgetType(p_43) != AT_LIST) || !(ATisEmpty(p_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm i_112 = NULL,j_112 = NULL,k_112 = NULL,l_112 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_43 = ATgetArgument(t, 0);
      if(((ATgetType(q_43) == AT_LIST) && !(ATisEmpty(q_43))))
        {
          i_112 = ATgetFirst((ATermList) q_43);
          j_112 = (ATerm) ATgetNext((ATermList) q_43);
        }
      else
        _fail(t);
      {
        ATerm r_43 = ATgetArgument(t, 1);
        if(((ATgetType(r_43) == AT_LIST) && !(ATisEmpty(r_43))))
          {
            k_112 = ATgetFirst((ATermList) r_43);
            l_112 = (ATerm) ATgetNext((ATermList) r_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_112, k_112), (ATerm) ATmakeAppl(sym__2, j_112, l_112));
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm m_112 = NULL,n_112 = NULL;
  if(match_cons(t, sym__2))
    {
      m_112 = ATgetArgument(t, 0);
      n_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_112), m_112);
  return(t);
}
static ATerm f_13 (ATerm t_614, ATerm y_614, ATerm a_60, ATerm t)
{
  ATerm d_112 = NULL,e_112 = NULL,f_112 = NULL,g_112 = NULL;
  t = SSL_explode_term(y_614);
  if(match_cons(t, sym__2))
    {
      d_112 = ATgetArgument(t, 0);
      f_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(t_614);
  if(match_cons(t, sym__2))
    {
      if((d_112 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      e_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_112, f_112);
  t = genzip_4_0(y_6, a_7, c_7, _id, t);
  g_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_112, a_60);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t)
{
  static ATerm p_112 (ATerm t)
  {
    ATerm s_43 = t;
    int t_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_113(t);
        LocalPopChoice(t_43);
      }
    else
      {
        t = s_43;
        t = o_113(t);
        t = p_112(t);
      }
    return(t);
  }
  t = p_112(t);
  return(t);
}
ATerm for_3_0 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm t)
{
  t = q_113(t);
  t = while_not_2_0(r_113, s_113, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm z_112 = NULL;
  z_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, z_112);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm a_113 = NULL,b_113 = NULL,c_113 = NULL,d_113 = NULL,u_6 = NULL;
  d_113 = t;
  if(match_cons(t, sym__2))
    {
      b_113 = ATgetArgument(t, 0);
      c_113 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_113);
  a_113 = t;
  t = c_113;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_113, c_113);
  u_6 = t;
  t = SSLsetAnnotations(u_6, a_113);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm d_114 = NULL,e_114 = NULL,g_114 = NULL,h_114 = NULL,i_114 = NULL;
  d_114 = t;
  if(match_cons(t, sym__2))
    {
      e_114 = ATgetArgument(t, 0);
      g_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_114;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_114 = ATgetFirst((ATermList) t);
      i_114 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_43 = t;
        int v_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_115(e_114, g_114, d_114, t);
            LocalPopChoice(v_43);
          }
        else
          {
            t = u_43;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_114), h_114), i_114);
          }
      }
    }
  else
    {
      t = b_115(e_114, g_114, d_114, t);
    }
  return(t);
}
static ATerm b_115 (ATerm e_113, ATerm f_113, ATerm g_113, ATerm t)
{
  ATerm h_113 = NULL,k_113 = NULL,v_6 = NULL,t_113 = NULL,u_113 = NULL,v_113 = NULL,w_113 = NULL;
  t = SSLgetAnnotations(g_113);
  h_113 = t;
  t = f_113;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_113 = ATgetFirst((ATermList) t);
      w_113 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_113;
  if(match_cons(t, sym__2))
    {
      u_113 = ATgetArgument(t, 0);
      v_113 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_43 = t;
    int y_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_113;
        if((u_113 != t))
          {
            _fail(t);
          }
        t = w_113;
        LocalPopChoice(y_43);
      }
    else
      {
        t = x_43;
        t = f_113;
        t = f_13(u_113, v_113, w_113, t);
      }
  }
  k_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_113, k_113);
  v_6 = t;
  t = SSLsetAnnotations(v_6, h_113);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm a_115 = NULL;
  if(match_cons(t, sym__2))
    {
      a_115 = ATgetArgument(t, 0);
      if((a_115 != ATgetArgument(t, 1)))
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
  ATerm b_44 = t;
  int f_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(e_7, g_7, i_7, t);
      LocalPopChoice(f_44);
    }
  else
    {
      t = b_44;
      {
        ATerm o_114 = NULL,p_114 = NULL,q_114 = NULL;
        o_114 = t;
        if(match_cons(t, sym__2))
          {
            p_114 = ATgetArgument(t, 0);
            q_114 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_114;
        t = d_13(j_7, p_114, q_114, t);
      }
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm n_49 = NULL,p_49 = NULL;
  if(match_cons(t, sym__2))
    {
      n_49 = ATgetArgument(t, 0);
      p_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_13(r_7, n_49, p_49, t);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm q_49 = NULL;
  if(match_cons(t, sym__2))
    {
      q_49 = ATgetArgument(t, 0);
      if((q_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm d_50 = NULL,i_50 = NULL;
  if(match_cons(t, sym__2))
    {
      d_50 = ATgetArgument(t, 0);
      i_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_13(w_7, d_50, i_50, t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm l_50 = NULL;
  if(match_cons(t, sym__2))
    {
      l_50 = ATgetArgument(t, 0);
      if((l_50 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm f_124 (ATerm), ATerm g_124 (ATerm), ATerm h_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm s_115 (ATerm t)
  {
    ATerm h_44 = t;
    int i_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_124(t);
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
              ATerm d_115 = NULL,e_115 = NULL,b_49 = NULL,e_49 = NULL;
              d_115 = t;
              t = g_124(t);
              e_115 = t;
              t = d_115;
              {
                static ATerm k_7 (ATerm t)
                {
                  ATerm g_115 = NULL;
                  t = s_115(t);
                  g_115 = t;
                  t = (ATerm) ATmakeAppl(sym__2, g_115, e_115);
                  t = diff_0_0(t);
                  return(t);
                }
                t = h_124(k_7, s_115, m_7, t);
              }
              e_49 = t;
              t = SSL_explode_term(e_49);
              if(match_cons(t, sym__2))
                {
                  ATerm l_44 = ATgetArgument(t, 0);
                  b_49 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_49;
              t = foldr_3_0(n_7, p_7, _id, t);
              LocalPopChoice(k_44);
            }
          else
            {
              t = j_44;
              {
                ATerm t_49 = NULL,x_49 = NULL;
                x_49 = t;
                t = SSL_explode_term(x_49);
                if(match_cons(t, sym__2))
                  {
                    ATerm m_44 = ATgetArgument(t, 0);
                    t_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_49;
                t = foldr_3_0(t_7, v_7, s_115, t);
              }
            }
        }
      }
    return(t);
  }
  t = s_115(t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm n_116 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_116);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm o_44 = t;
  int p_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_44);
    }
  else
    {
      t = o_44;
      {
        ATerm q_44 = t;
        int r_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_44);
          }
        else
          {
            t = q_44;
            {
              ATerm p_116 = NULL,q_116 = NULL,r_116 = NULL,s_116 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  p_116 = ATgetArgument(t, 0);
                  q_116 = ATgetArgument(t, 1);
                  r_116 = ATgetArgument(t, 2);
                  s_116 = ATgetArgument(t, 3);
                  t = r_116;
                  t = map_1_0(d_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_116 = ATgetArgument(t, 0);
                      q_116 = ATgetArgument(t, 1);
                      r_116 = ATgetArgument(t, 2);
                      s_116 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_116;
                  t = map_1_0(e_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm z_116 = NULL;
  ATerm s_44 = t;
  int t_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_116 = ATgetArgument(t, 0);
          {
            ATerm v_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_44);
      t = z_116;
    }
  else
    {
      t = s_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_116 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_116;
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm i_117 = NULL;
  ATerm w_44 = t;
  int x_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_117 = ATgetArgument(t, 0);
          {
            ATerm y_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_44);
      t = i_117;
    }
  else
    {
      t = w_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_117 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_117;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm d_116 = NULL,j_116 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      j_116 = ATgetArgument(t, 0);
      t = j_116;
      if(match_cons(t, sym_Rule_3))
        {
          d_116 = ATgetArgument(t, 0);
          {
            ATerm z_44 = ATgetArgument(t, 1);
          }
          {
            ATerm a_45 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = d_116;
      t = free_vars_3_0(y_7, z_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          j_116 = ATgetArgument(t, 0);
          {
            ATerm b_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = j_116;
    }
  return(t);
}
ATerm Var_1_0 (ATerm c_85 (ATerm), ATerm t)
{
  ATerm m_117 = NULL,n_117 = NULL,p_117 = NULL,q_117 = NULL,z_6 = NULL;
  q_117 = t;
  if(match_cons(t, sym_Var_1))
    {
      n_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_117);
  m_117 = t;
  t = n_117;
  t = c_85(t);
  p_117 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, p_117);
  z_6 = t;
  t = SSLsetAnnotations(z_6, m_117);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm e_45 = t;
  int f_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_45);
    }
  else
    {
      t = e_45;
      {
        ATerm h_118 = NULL,n_118 = NULL,o_118 = NULL,q_118 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            h_118 = ATgetArgument(t, 0);
            n_118 = ATgetArgument(t, 1);
            o_118 = ATgetArgument(t, 2);
            q_118 = ATgetArgument(t, 3);
            t = o_118;
            t = map_1_0(g_8, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                h_118 = ATgetArgument(t, 0);
                n_118 = ATgetArgument(t, 1);
                o_118 = ATgetArgument(t, 2);
                q_118 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = o_118;
            t = map_1_0(h_8, t);
          }
      }
    }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm z_118 = NULL;
  ATerm g_45 = t;
  int h_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_118 = ATgetArgument(t, 0);
          {
            ATerm i_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_45);
      t = z_118;
    }
  else
    {
      t = g_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_118 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_118;
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm i_119 = NULL;
  ATerm j_45 = t;
  int k_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_119 = ATgetArgument(t, 0);
          {
            ATerm l_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_45);
      t = i_119;
    }
  else
    {
      t = j_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_119 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_119;
    }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm l_119 = NULL,m_119 = NULL,n_119 = NULL,o_119 = NULL,p_119 = NULL;
  l_119 = t;
  if(match_cons(t, sym_Let_2))
    {
      m_119 = ATgetArgument(t, 0);
      n_119 = ATgetArgument(t, 1);
      t = l_119;
      t = w_12(m_119, n_119, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          m_119 = ATgetArgument(t, 0);
          n_119 = ATgetArgument(t, 1);
          o_119 = ATgetArgument(t, 2);
          t = n_119;
          t = map_1_0(j_8, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              m_119 = ATgetArgument(t, 0);
              n_119 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, m_119);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  m_119 = ATgetArgument(t, 0);
                  n_119 = ATgetArgument(t, 1);
                  o_119 = ATgetArgument(t, 2);
                  p_119 = ATgetArgument(t, 3);
                  t = n_119;
                  t = map_1_0(l_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      m_119 = ATgetArgument(t, 0);
                      n_119 = ATgetArgument(t, 1);
                      o_119 = ATgetArgument(t, 2);
                      p_119 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_119;
                  t = map_1_0(m_8, t);
                }
            }
        }
    }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm x_119 = NULL;
  ATerm m_45 = t;
  int o_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_119 = ATgetArgument(t, 0);
          {
            ATerm p_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_45);
      t = x_119;
    }
  else
    {
      t = m_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_119 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_119;
    }
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm j_120 = NULL;
  ATerm q_45 = t;
  int r_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_120 = ATgetArgument(t, 0);
          {
            ATerm t_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_45);
      t = j_120;
    }
  else
    {
      t = q_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_120 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_120;
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm x_120 = NULL;
  ATerm u_45 = t;
  int v_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_120 = ATgetArgument(t, 0);
          {
            ATerm x_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_45);
      t = x_120;
    }
  else
    {
      t = u_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_120 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_120;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, f_8, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, i_8, sboundin_3_0, spaste_1_0, t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm e_54 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      e_54 = ATgetArgument(t, 0);
      {
        ATerm y_45 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = e_54;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_45 = ATgetArgument(t, 0);
      if(((ATgetType(z_45) != AT_LIST) || !(ATisEmpty(z_45))))
        _fail(t);
      {
        ATerm a_46 = ATgetArgument(t, 1);
        if(((ATgetType(a_46) != AT_LIST) || !(ATisEmpty(a_46))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_46 = ATgetArgument(t, 0);
      if(((ATgetType(c_46) == AT_LIST) && !(ATisEmpty(c_46))))
        {
          f_54 = ATgetFirst((ATermList) c_46);
          g_54 = (ATerm) ATgetNext((ATermList) c_46);
        }
      else
        _fail(t);
      {
        ATerm d_46 = ATgetArgument(t, 1);
        if(((ATgetType(d_46) == AT_LIST) && !(ATisEmpty(d_46))))
          {
            h_54 = ATgetFirst((ATermList) d_46);
            i_54 = (ATerm) ATgetNext((ATermList) d_46);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_54, h_54), (ATerm) ATmakeAppl(sym__2, g_54, i_54));
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm j_54 = NULL,k_54 = NULL;
  if(match_cons(t, sym__2))
    {
      j_54 = ATgetArgument(t, 0);
      k_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_54), j_54);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL;
  if(match_cons(t, sym__2))
    {
      l_54 = ATgetArgument(t, 0);
      m_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_54), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_54))));
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_a_14;
  return(t);
}
ATerm InlineCall_0_0 (ATerm t)
{
  ATerm d_123 = NULL,e_123 = NULL,f_123 = NULL,g_123 = NULL,h_123 = NULL;
  d_123 = t;
  if(match_cons(t, sym_CallT_3))
    {
      e_123 = ATgetArgument(t, 0);
      g_123 = ATgetArgument(t, 1);
      h_123 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_123;
  if(match_cons(t, sym_SVar_1))
    {
      f_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_46 = t;
    int f_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_51 = NULL,v_51 = NULL;
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_123), (ATerm)ATempty, (ATerm) ATempty);
        t_51 = t;
        t = term_a_14;
        v_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_14, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_123), (ATerm)ATempty, (ATerm) ATempty));
        t = b_7(v_51, t_51, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = d_123;
        _fail(t);
        LocalPopChoice(f_46);
      }
    else
      {
        t = e_46;
        {
          ATerm g_46 = t;
          int h_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_52 = NULL,r_52 = NULL;
              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_123), (ATerm)ATempty, (ATerm) ATempty);
              q_52 = t;
              t = term_a_14;
              r_52 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_a_14, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_123), (ATerm)ATempty, (ATerm) ATempty));
              t = b_7(r_52, q_52, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = d_123;
              _fail(t);
              LocalPopChoice(h_46);
            }
          else
            {
              t = g_46;
              {
                ATerm j_46 = t;
                int l_46 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_53 = NULL,f_53 = NULL,h_53 = NULL,i_53 = NULL,q_53 = NULL,r_53 = NULL,v_53 = NULL,a_54 = NULL,b_54 = NULL,x_54 = NULL,y_54 = NULL;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_123), (ATerm)ATempty, (ATerm) ATempty);
                    x_54 = t;
                    t = term_a_14;
                    y_54 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_a_14, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_123), (ATerm)ATempty, (ATerm) ATempty));
                    t = b_7(y_54, x_54, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm m_46 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) m_46) != ATmakeSymbol("d_0", 0, ATtrue)))
                          _fail(t);
                        e_53 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = e_53;
                    t = strename_0_0(t);
                    if(match_cons(t, sym_SDefT_4))
                      {
                        if((f_123 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        f_53 = ATgetArgument(t, 1);
                        i_53 = ATgetArgument(t, 2);
                        h_53 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__3, f_53, g_123, h_53);
                    t = substitute_args_0_0(t);
                    r_53 = t;
                    t = i_53;
                    t = map_1_0(s_8, t);
                    q_53 = t;
                    t = (ATerm) ATmakeAppl(sym__2, h_123, q_53);
                    t = genzip_4_0(w_8, x_8, y_8, z_8, t);
                    v_53 = t;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_123), (ATerm)ATempty, (ATerm) ATempty);
                    a_54 = t;
                    t = term_n_46;
                    b_54 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_123), (ATerm)ATempty, (ATerm) ATempty), term_n_46);
                    t = p_13(a_9, a_54, b_54, t);
                    t = (ATerm) ATmakeAppl(sym_Scope_2, q_53, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_53), r_53));
                    t = simplify_0_0(t);
                    LocalPopChoice(l_46);
                  }
                else
                  {
                    t = j_46;
                    {
                      ATerm h_55 = NULL,i_55 = NULL;
                      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_123), (ATerm)ATempty, (ATerm) ATempty);
                      h_55 = t;
                      t = term_a_14;
                      i_55 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_a_14, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_123), (ATerm)ATempty, (ATerm) ATempty));
                      t = b_7(i_55, h_55, t);
                      if(!(match_cons(t, sym_Undefined_0)))
                        _fail(t);
                      t = d_123;
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
ATerm leq_0_0 (ATerm t)
{
  ATerm p_46 = t;
  if((PushChoice() == 0))
    {
      ATerm m_123 = NULL,n_123 = NULL;
      if(match_cons(t, sym__2))
        {
          m_123 = ATgetArgument(t, 0);
          n_123 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, m_123, n_123);
      {
        ATerm q_46 = t;
        int r_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(m_123, n_123);
            LocalPopChoice(r_46);
          }
        else
          {
            t = q_46;
            t = SSL_gtr(m_123, n_123);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, m_123, n_123);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_46;
    }
  return(t);
}
ATerm foldr_3_0 (ATerm o_120 (ATerm), ATerm p_120 (ATerm), ATerm q_120 (ATerm), ATerm t)
{
  ATerm p_123 = NULL,q_123 = NULL,r_123 = NULL;
  p_123 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_123;
      t = o_120(t);
    }
  else
    {
      ATerm u_123 = NULL,v_123 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_123 = ATgetFirst((ATermList) t);
          r_123 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_123;
      t = q_120(t);
      u_123 = t;
      t = r_123;
      t = foldr_3_0(o_120, p_120, q_120, t);
      v_123 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_123, v_123);
      t = p_120(t);
    }
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = term_s_46;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL;
  if(match_cons(t, sym__2))
    {
      r_55 = ATgetArgument(t, 0);
      s_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_15(r_55, s_55, t);
  return(t);
}
ATerm occurrences_1_0 (ATerm f_118 (ATerm), ATerm t)
{
  ATerm y_123 = NULL,z_123 = NULL,a_124 = NULL,k_55 = NULL;
  a_124 = t;
  {
    ATerm t_46 = t;
    int u_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_118(t);
        t = term_j_14;
        LocalPopChoice(u_46);
      }
    else
      {
        t = t_46;
        t = term_s_46;
      }
  }
  y_123 = t;
  t = SSL_explode_term(a_124);
  if(match_cons(t, sym__2))
    {
      ATerm v_46 = ATgetArgument(t, 0);
      k_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_55;
  {
    static ATerm e_9 (ATerm t)
    {
      t = occurrences_1_0(f_118, t);
      return(t);
    }
    t = foldr_3_0(b_9, c_9, e_9, t);
  }
  z_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_123, z_123);
  t = g_15(y_123, z_123, t);
  return(t);
}
static ATerm n_13 (ATerm g_105 (ATerm), ATerm r_24, ATerm q_24, ATerm t)
{
  ATerm d_124 = NULL,e_124 = NULL;
  d_124 = t;
  t = q_24;
  {
    ATerm w_46 = t;
    if((PushChoice() == 0))
      {
        static ATerm f_9 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm x_46 = ATgetArgument(t, 0);
              if(match_cons(x_46, sym_SVar_1))
                {
                  if((r_24 != ATgetArgument(x_46, 0)))
                    {
                      _fail(ATgetArgument(x_46, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm y_46 = ATgetArgument(t, 1);
              }
              {
                ATerm z_46 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(f_9, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_46;
      }
  }
  t = g_105(t);
  {
    static ATerm j_9 (ATerm t)
    {
      if(match_cons(t, sym_CallT_3))
        {
          ATerm a_47 = ATgetArgument(t, 0);
          if(match_cons(a_47, sym_SVar_1))
            {
              if((r_24 != ATgetArgument(a_47, 0)))
                {
                  _fail(ATgetArgument(a_47, 0));
                }
            }
          else
            _fail(t);
          {
            ATerm c_47 = ATgetArgument(t, 1);
          }
          {
            ATerm d_47 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      return(t);
    }
    t = occurrences_1_0(j_9, t);
  }
  e_124 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_124, term_j_14);
  t = leq_0_0(t);
  t = d_124;
  return(t);
}
static ATerm p_13 (ATerm w_114 (ATerm), ATerm r_34, ATerm p_34, ATerm t)
{
  ATerm j_124 = NULL,k_124 = NULL,l_124 = NULL,m_124 = NULL,n_124 = NULL,o_124 = NULL;
  m_124 = t;
  t = w_114(t);
  j_124 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_124, r_34, p_34);
  t = m_15(j_124, r_34, p_34, t);
  {
    ATerm f_47 = t;
    int g_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_124 = NULL;
        t = term_h_47;
        p_124 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_124, term_h_47);
        t = l_15(j_124, p_124, t);
        LocalPopChoice(g_47);
      }
    else
      {
        t = f_47;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_124 = ATgetFirst((ATermList) t);
      l_124 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_h_47;
  n_124 = t;
  t = (ATerm) ATinsert(CheckATermList(l_124), (ATerm) ATinsert(CheckATermList(k_124), r_34));
  o_124 = t;
  t = SSL_table_put(j_124, n_124, o_124);
  t = m_124;
  return(t);
}
static ATerm r_13 (ATerm l_36, ATerm m_36, ATerm t)
{
  ATerm q_124 = NULL,r_124 = NULL;
  r_124 = t;
  {
    ATerm i_47 = t;
    int j_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_36, m_36);
        t = l_15(l_36, m_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm l_47 = ATgetFirst((ATermList) t);
            q_124 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(j_47);
        t = SSL_table_put(l_36, m_36, q_124);
        t = (ATerm) ATmakeAppl(sym__3, l_36, m_36, q_124);
      }
    else
      {
        t = i_47;
        t = SSL_table_remove(l_36, m_36);
        t = (ATerm) ATmakeAppl(sym__2, l_36, m_36);
      }
  }
  t = r_124;
  return(t);
}
ATerm end_scope_1_0 (ATerm t_114 (ATerm), ATerm t)
{
  ATerm s_124 = NULL,t_124 = NULL,u_124 = NULL,v_124 = NULL,w_124 = NULL;
  v_124 = t;
  t = t_114(t);
  u_124 = t;
  {
    ATerm m_47 = t;
    int o_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_124 = NULL;
        t = term_h_47;
        x_124 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_124, term_h_47);
        t = l_15(u_124, x_124, t);
        LocalPopChoice(o_47);
      }
    else
      {
        t = m_47;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_124 = ATgetFirst((ATermList) t);
      s_124 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_h_47;
  w_124 = t;
  t = SSL_table_put(u_124, w_124, s_124);
  t = t_124;
  {
    static ATerm k_9 (ATerm t)
    {
      ATerm y_124 = NULL;
      y_124 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_124, y_124);
      t = r_13(u_124, y_124, t);
      return(t);
    }
    t = map_1_0(k_9, t);
  }
  t = v_124;
  return(t);
}
ATerm restore_always_2_0 (ATerm i_110 (ATerm), ATerm j_110 (ATerm), ATerm t)
{
  ATerm p_47 = t;
  int q_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_110(t);
      t = j_110(t);
      LocalPopChoice(q_47);
    }
  else
    {
      t = p_47;
      t = j_110(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm s_114 (ATerm), ATerm t)
{
  ATerm a_125 = NULL,b_125 = NULL,c_125 = NULL,d_125 = NULL,e_125 = NULL;
  b_125 = t;
  t = s_114(t);
  a_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_125, term_h_47);
  {
    ATerm r_47 = t;
    int s_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_125 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm t_47 = ATgetArgument(t, 0);
            ATerm u_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_h_47;
        i_125 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_125, term_h_47);
        t = l_15(a_125, i_125, t);
        LocalPopChoice(s_47);
      }
    else
      {
        t = r_47;
        t = (ATerm) ATempty;
      }
  }
  c_125 = t;
  t = term_h_47;
  d_125 = t;
  t = (ATerm) ATinsert(CheckATermList(c_125), (ATerm) ATempty);
  e_125 = t;
  t = SSL_table_put(a_125, d_125, e_125);
  t = b_125;
  return(t);
}
ATerm scope_2_0 (ATerm u_114 (ATerm), ATerm v_114 (ATerm), ATerm t)
{
  static ATerm l_9 (ATerm t)
  {
    t = end_scope_1_0(u_114, t);
    return(t);
  }
  t = begin_scope_1_0(u_114, t);
  t = restore_always_2_0(v_114, l_9, t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_a_14;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_a_14;
  return(t);
}
ATerm inline_sdef_0_0 (ATerm t)
{
  static ATerm n_9 (ATerm t)
  {
    static ATerm p_9 (ATerm t)
    {
      ATerm v_47 = t;
      int w_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_125 = NULL,o_125 = NULL,p_125 = NULL;
          n_125 = t;
          {
            ATerm x_47 = t;
            int y_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    o_125 = ATgetArgument(t, 0);
                    {
                      ATerm z_47 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm a_48 = ATgetArgument(t, 2);
                    }
                    {
                      ATerm c_48 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(y_47);
                {
                  ATerm s_125 = NULL,t_125 = NULL;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_125), (ATerm)ATempty, (ATerm) ATempty);
                  s_125 = t;
                  t = term_n_46;
                  t_125 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_125), (ATerm)ATempty, (ATerm) ATempty), term_n_46);
                  t = p_13(r_9, s_125, t_125, t);
                  t = n_125;
                }
              }
            else
              {
                t = x_47;
                if(match_cons(t, sym_Let_2))
                  {
                    o_125 = ATgetArgument(t, 0);
                    p_125 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = o_125;
                {
                  static ATerm s_9 (ATerm t)
                  {
                    ATerm w_125 = NULL,x_125 = NULL;
                    if(match_cons(t, sym_SDefT_4))
                      {
                        w_125 = ATgetArgument(t, 0);
                        {
                          ATerm d_48 = ATgetArgument(t, 1);
                        }
                        {
                          ATerm e_48 = ATgetArgument(t, 2);
                        }
                        x_125 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    {
                      static ATerm t_9 (ATerm t)
                      {
                        t = p_125;
                        return(t);
                      }
                      t = n_13(t_9, w_125, x_125, t);
                    }
                    t = AddSDef_0_0(t);
                    return(t);
                  }
                  t = map_1_0(s_9, t);
                }
                t = (ATerm) ATmakeAppl(sym_Let_2, o_125, p_125);
              }
          }
          LocalPopChoice(w_47);
        }
      else
        {
          t = v_47;
          t = repeat_2_0(InlineCall_0_0, _id, t);
        }
      t = SRTS_all(inline_sdef_0_0, t);
      return(t);
    }
    t = scope_2_0(o_9, p_9, t);
    return(t);
  }
  t = scope_2_0(m_9, n_9, t);
  return(t);
}
ATerm topdown_1_0 (ATerm b_107 (ATerm), ATerm t)
{
  static ATerm v_9 (ATerm t)
  {
    t = topdown_1_0(b_107, t);
    return(t);
  }
  t = b_107(t);
  t = SRTS_all(v_9, t);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm f_48 = t;
  int g_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm h_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(g_48);
      {
        ATerm b_126 = NULL,c_126 = NULL;
        b_126 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm j_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        c_126 = t;
        t = SSLgetAnnotations(b_126);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_48 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) k_48) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm m_48 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(m_48) != AT_LIST) || !(ATisEmpty(m_48))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = c_126;
      }
    }
  else
    {
      t = f_48;
      {
        ATerm n_48 = t;
        int o_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm p_48 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) p_48) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm r_48 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(o_48);
            _fail(t);
          }
        else
          {
            t = n_48;
          }
      }
    }
  return(t);
}
static ATerm t_13 (ATerm j_76, ATerm i_76, ATerm t)
{
  t = j_76;
  t = topdown_1_0(x_9, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, j_76);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm l_126 = NULL,m_126 = NULL,o_126 = NULL,p_126 = NULL,q_126 = NULL,r_126 = NULL,s_126 = NULL,t_126 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      o_126 = ATgetArgument(t, 0);
      r_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_126;
  if(match_cons(t, sym_Match_1))
    {
      p_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_126;
  if(match_cons(t, sym_Var_1))
    {
      q_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_126;
  if(match_cons(t, sym_Seq_2))
    {
      s_126 = ATgetArgument(t, 0);
      m_126 = ATgetArgument(t, 1);
      t = s_126;
      if(match_cons(t, sym_Build_1))
        {
          t_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_126;
      if(match_cons(t, sym_Var_1))
        {
          l_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_126;
      if((q_126 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_126)), m_126);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          s_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_126;
      if(match_cons(t, sym_Var_1))
        {
          t_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_126;
      if((q_126 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_126));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm b_127 = NULL,c_127 = NULL,e_127 = NULL,f_127 = NULL,g_127 = NULL,h_127 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      e_127 = ATgetArgument(t, 0);
      g_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_127;
  if(match_cons(t, sym_Build_1))
    {
      f_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_127;
  if(match_cons(t, sym_Seq_2))
    {
      h_127 = ATgetArgument(t, 0);
      c_127 = ATgetArgument(t, 1);
      t = h_127;
      if(match_cons(t, sym_Match_1))
        {
          b_127 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_127;
      if((f_127 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_127), c_127);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          h_127 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_127;
      if((f_127 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, f_127);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm p_127 = NULL,q_127 = NULL,s_127 = NULL,t_127 = NULL,u_127 = NULL,v_127 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      s_127 = ATgetArgument(t, 0);
      u_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_127;
  if(match_cons(t, sym_Match_1))
    {
      t_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_127;
  if(match_cons(t, sym_Seq_2))
    {
      v_127 = ATgetArgument(t, 0);
      q_127 = ATgetArgument(t, 1);
      t = v_127;
      if(match_cons(t, sym_Match_1))
        {
          p_127 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_127;
      if((t_127 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_127), q_127);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          v_127 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_127;
      if((t_127 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, t_127);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm d_128 = NULL,e_128 = NULL,f_128 = NULL,h_128 = NULL,j_128 = NULL,k_128 = NULL,l_128 = NULL,m_128 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      h_128 = ATgetArgument(t, 0);
      j_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_128;
  if(match_cons(t, sym_Build_1))
    {
      ATerm s_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_128;
  if(match_cons(t, sym_Seq_2))
    {
      k_128 = ATgetArgument(t, 0);
      l_128 = ATgetArgument(t, 1);
      t = k_128;
      if(match_cons(t, sym_PrimT_3))
        {
          d_128 = ATgetArgument(t, 0);
          e_128 = ATgetArgument(t, 1);
          f_128 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, d_128, e_128, f_128), l_128);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          k_128 = ATgetArgument(t, 0);
          l_128 = ATgetArgument(t, 1);
          m_128 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, k_128, l_128, m_128);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm y_128 = NULL,z_128 = NULL,b_129 = NULL,d_129 = NULL,e_129 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      b_129 = ATgetArgument(t, 0);
      d_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_129;
  if(match_cons(t, sym_Build_1))
    {
      ATerm t_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_129;
  if(match_cons(t, sym_Seq_2))
    {
      e_129 = ATgetArgument(t, 0);
      z_128 = ATgetArgument(t, 1);
      t = e_129;
      if(match_cons(t, sym_Build_1))
        {
          y_128 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, y_128), z_128);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          e_129 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, e_129);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm t)
{
  static ATerm o_129 (ATerm t)
  {
    ATerm u_48 = t;
    int v_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_111(t);
        LocalPopChoice(v_48);
      }
    else
      {
        t = u_48;
        {
          ATerm i_129 = NULL,j_129 = NULL,k_129 = NULL,l_129 = NULL,m_129 = NULL,n_129 = NULL,d_7 = NULL;
          t = o_111(t);
          n_129 = t;
          if(match_cons(t, sym__2))
            {
              j_129 = ATgetArgument(t, 0);
              k_129 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_129);
          i_129 = t;
          t = j_129;
          t = q_111(t);
          l_129 = t;
          t = k_129;
          t = o_129(t);
          m_129 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_129, m_129);
          d_7 = t;
          t = SSLsetAnnotations(d_7, i_129);
          t = p_111(t);
        }
      }
    return(t);
  }
  t = o_129(t);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_48 = ATgetArgument(t, 0);
      if(((ATgetType(w_48) != AT_LIST) || !(ATisEmpty(w_48))))
        _fail(t);
      {
        ATerm x_48 = ATgetArgument(t, 1);
        if(((ATgetType(x_48) != AT_LIST) || !(ATisEmpty(x_48))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm o_130 = NULL,p_130 = NULL,q_130 = NULL,r_130 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_48 = ATgetArgument(t, 0);
      if(((ATgetType(y_48) == AT_LIST) && !(ATisEmpty(y_48))))
        {
          o_130 = ATgetFirst((ATermList) y_48);
          p_130 = (ATerm) ATgetNext((ATermList) y_48);
        }
      else
        _fail(t);
      {
        ATerm z_48 = ATgetArgument(t, 1);
        if(((ATgetType(z_48) == AT_LIST) && !(ATisEmpty(z_48))))
          {
            q_130 = ATgetFirst((ATermList) z_48);
            r_130 = (ATerm) ATgetNext((ATermList) z_48);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_130, q_130), (ATerm) ATmakeAppl(sym__2, p_130, r_130));
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm s_130 = NULL,t_130 = NULL;
  if(match_cons(t, sym__2))
    {
      s_130 = ATgetArgument(t, 0);
      t_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_130), s_130);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm u_130 = NULL,v_130 = NULL;
  if(match_cons(t, sym__2))
    {
      u_130 = ATgetArgument(t, 0);
      v_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_130), (ATerm) ATmakeAppl(sym_Match_1, v_130));
  return(t);
}
static ATerm k_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_49 = ATgetArgument(t, 0);
      if(((ATgetType(a_49) != AT_LIST) || !(ATisEmpty(a_49))))
        _fail(t);
      {
        ATerm c_49 = ATgetArgument(t, 1);
        if(((ATgetType(c_49) != AT_LIST) || !(ATisEmpty(c_49))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm a_131 = NULL,b_131 = NULL,c_131 = NULL,d_131 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_49 = ATgetArgument(t, 0);
      if(((ATgetType(d_49) == AT_LIST) && !(ATisEmpty(d_49))))
        {
          a_131 = ATgetFirst((ATermList) d_49);
          b_131 = (ATerm) ATgetNext((ATermList) d_49);
        }
      else
        _fail(t);
      {
        ATerm f_49 = ATgetArgument(t, 1);
        if(((ATgetType(f_49) == AT_LIST) && !(ATisEmpty(f_49))))
          {
            c_131 = ATgetFirst((ATermList) f_49);
            d_131 = (ATerm) ATgetNext((ATermList) f_49);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_131, c_131), (ATerm) ATmakeAppl(sym__2, b_131, d_131));
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm e_131 = NULL,f_131 = NULL;
  if(match_cons(t, sym__2))
    {
      e_131 = ATgetArgument(t, 0);
      f_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_131), e_131);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm g_131 = NULL,h_131 = NULL;
  if(match_cons(t, sym__2))
    {
      g_131 = ATgetArgument(t, 0);
      h_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_131), (ATerm) ATmakeAppl(sym_Match_1, h_131));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm w_129 = NULL,x_129 = NULL,y_129 = NULL,a_130 = NULL,b_130 = NULL,c_130 = NULL,d_130 = NULL,e_130 = NULL,g_130 = NULL,h_130 = NULL,i_130 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      a_130 = ATgetArgument(t, 0);
      e_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_130;
  if(match_cons(t, sym_Build_1))
    {
      b_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_130;
  if(match_cons(t, sym_Op_2))
    {
      c_130 = ATgetArgument(t, 0);
      d_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_130;
  if(match_cons(t, sym_Seq_2))
    {
      g_130 = ATgetArgument(t, 0);
      y_129 = ATgetArgument(t, 1);
      {
        ATerm n_130 = NULL;
        t = g_130;
        if(match_cons(t, sym_Match_1))
          {
            h_130 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_130;
        if(match_cons(t, sym_Op_2))
          {
            w_129 = ATgetArgument(t, 0);
            x_129 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_129;
        if((c_130 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, d_130, x_129);
        t = genzip_4_0(b_10, f_10, i_10, j_10, t);
        n_130 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_130), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, c_130, d_130)), y_129));
      }
    }
  else
    {
      ATerm z_130 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          g_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_130;
      if(match_cons(t, sym_Op_2))
        {
          h_130 = ATgetArgument(t, 0);
          i_130 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_130;
      if((c_130 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, d_130, i_130);
      t = genzip_4_0(k_10, m_10, o_10, p_10, t);
      z_130 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, z_130), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, c_130, d_130)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm d_132 = NULL,g_132 = NULL,h_132 = NULL,i_132 = NULL,j_132 = NULL,l_132 = NULL,m_132 = NULL,n_132 = NULL;
  g_132 = t;
  if(match_cons(t, sym_Seq_2))
    {
      h_132 = ATgetArgument(t, 0);
      l_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_132;
  if(match_cons(t, sym_Build_1))
    {
      i_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_132;
  if(match_cons(t, sym_Op_2))
    {
      j_132 = ATgetArgument(t, 0);
      {
        ATerm g_49 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = l_132;
  {
    ATerm h_49 = t;
    int i_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            m_132 = ATgetArgument(t, 0);
            {
              ATerm j_49 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(i_49);
        t = m_132;
        if(match_cons(t, sym_Match_1))
          {
            n_132 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = n_132;
        if(match_cons(t, sym_Op_2))
          {
            d_132 = ATgetArgument(t, 0);
            {
              ATerm k_49 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_132, d_132);
        {
          ATerm m_49 = t;
          if((PushChoice() == 0))
            {
              ATerm y_55 = NULL;
              if(match_cons(t, sym__2))
                {
                  y_55 = ATgetArgument(t, 0);
                  if((y_55 != ATgetArgument(t, 1)))
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
              t = m_49;
            }
        }
        t = term_b_17;
      }
    else
      {
        t = h_49;
        if(match_cons(t, sym_Match_1))
          {
            m_132 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = m_132;
        if(match_cons(t, sym_Op_2))
          {
            n_132 = ATgetArgument(t, 0);
            {
              ATerm o_49 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_132, n_132);
        {
          ATerm r_49 = t;
          if((PushChoice() == 0))
            {
              ATerm q_56 = NULL;
              if(match_cons(t, sym__2))
                {
                  q_56 = ATgetArgument(t, 0);
                  if((q_56 != ATgetArgument(t, 1)))
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
              t = r_49;
            }
        }
        t = term_b_17;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm f_108 (ATerm), ATerm t)
{
  static ATerm w_132 (ATerm t)
  {
    ATerm s_49 = t;
    int u_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_108(t);
        LocalPopChoice(u_49);
      }
    else
      {
        t = s_49;
        t = SRTS_one(w_132, t);
      }
    return(t);
  }
  t = w_132(t);
  return(t);
}
ATerm at_end_1_0 (ATerm b_116 (ATerm), ATerm t)
{
  static ATerm t_133 (ATerm t)
  {
    ATerm q_133 = NULL,r_133 = NULL,s_133 = NULL;
    s_133 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_133 = ATgetFirst((ATermList) t);
        r_133 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm i_57 = NULL,p_57 = NULL,f_7 = NULL;
          t = SSLgetAnnotations(s_133);
          i_57 = t;
          t = r_133;
          t = t_133(t);
          p_57 = t;
          t = (ATerm) ATinsert(CheckATermList(p_57), q_133);
          f_7 = t;
          t = SSLsetAnnotations(f_7, i_57);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_133;
        t = b_116(t);
      }
    return(t);
  }
  t = t_133(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_132 = NULL,b_133 = NULL,c_133 = NULL;
  y_132 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_132;
    }
  else
    {
      static ATerm q_10 (ATerm t)
      {
        t = not_null(c_133);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_133 = ATgetFirst((ATermList) t);
          if(((c_133 != NULL) && (c_133 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_133 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_133;
      t = at_end_1_0(q_10, t);
    }
  return(t);
}
static ATerm f_134 (ATerm x_133, ATerm t)
{
  ATerm y_133 = NULL;
  t = SSL_explode_term(x_133);
  if(match_cons(t, sym__2))
    {
      ATerm w_49 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_49) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_133;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_134 = NULL,b_134 = NULL,c_134 = NULL;
  c_134 = t;
  if(match_cons(t, sym__2))
    {
      a_134 = ATgetArgument(t, 0);
      b_134 = ATgetArgument(t, 1);
      {
        ATerm y_49 = t;
        int z_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm r_10 (ATerm t)
            {
              t = b_134;
              return(t);
            }
            t = a_134;
            t = at_end_1_0(r_10, t);
            LocalPopChoice(z_49);
          }
        else
          {
            t = y_49;
            t = f_134(c_134, t);
          }
      }
    }
  else
    {
      t = f_134(c_134, t);
    }
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm a_135 = NULL,b_135 = NULL,c_135 = NULL,d_135 = NULL,e_135 = NULL,f_135 = NULL,g_135 = NULL,h_135 = NULL,i_135 = NULL,j_135 = NULL,k_135 = NULL,l_135 = NULL,m_135 = NULL;
  a_135 = t;
  if(match_cons(t, sym_Let_2))
    {
      b_135 = ATgetArgument(t, 0);
      i_135 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_135;
  if(match_cons(t, sym_Let_2))
    {
      j_135 = ATgetArgument(t, 0);
      l_135 = ATgetArgument(t, 1);
      {
        ATerm q_135 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, b_135, j_135);
        t = conc_0_0(t);
        q_135 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, q_135, l_135);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          j_135 = ATgetArgument(t, 0);
          l_135 = ATgetArgument(t, 1);
          m_135 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = b_135;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_135 = ATgetFirst((ATermList) t);
          h_135 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_135;
      if(match_cons(t, sym_SDefT_4))
        {
          d_135 = ATgetArgument(t, 0);
          e_135 = ATgetArgument(t, 1);
          f_135 = ATgetArgument(t, 2);
          g_135 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = e_135;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_135;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_135;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_135;
      if(match_cons(t, sym_SVar_1))
        {
          k_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_135;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_135;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_135;
      if((d_135 != t))
        {
          _fail(t);
        }
      t = g_135;
      {
        ATerm c_50 = t;
        if((PushChoice() == 0))
          {
            static ATerm v_10 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm e_50 = ATgetArgument(t, 0);
                  if(match_cons(e_50, sym_SVar_1))
                    {
                      if((d_135 != ATgetArgument(e_50, 0)))
                        {
                          _fail(ATgetArgument(e_50, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm f_50 = ATgetArgument(t, 1);
                    if(((ATgetType(f_50) != AT_LIST) || !(ATisEmpty(f_50))))
                      _fail(t);
                  }
                  {
                    ATerm h_50 = ATgetArgument(t, 2);
                    if(((ATgetType(h_50) != AT_LIST) || !(ATisEmpty(h_50))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(v_10, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_50;
          }
      }
      t = g_135;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm z_135 = NULL,a_136 = NULL,b_136 = NULL,c_136 = NULL,d_136 = NULL,e_136 = NULL,g_136 = NULL,h_136 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      g_136 = ATgetArgument(t, 0);
      t = g_136;
      if(match_cons(t, sym_Seq_2))
        {
          e_136 = ATgetArgument(t, 0);
          a_136 = ATgetArgument(t, 1);
          t = e_136;
          if(match_cons(t, sym_Where_1))
            {
              z_135 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_136;
          if(match_cons(t, sym_Seq_2))
            {
              b_136 = ATgetArgument(t, 0);
              d_136 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_136;
          if(match_cons(t, sym_Build_1))
            {
              c_136 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, z_135, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_136), d_136)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              e_136 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, e_136);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          g_136 = ATgetArgument(t, 0);
          t = g_136;
          if(match_cons(t, sym_Test_1))
            {
              e_136 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, e_136);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              g_136 = ATgetArgument(t, 0);
              t = g_136;
              if(match_cons(t, sym_Not_1))
                {
                  e_136 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, e_136);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  g_136 = ATgetArgument(t, 0);
                  h_136 = ATgetArgument(t, 1);
                  t = h_136;
                  if((g_136 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      g_136 = ATgetArgument(t, 0);
                      h_136 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = h_136;
                  if((g_136 != t))
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
  ATerm v_136 = NULL,w_136 = NULL,x_136 = NULL,y_136 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      v_136 = ATgetArgument(t, 0);
      y_136 = ATgetArgument(t, 1);
      t = v_136;
      if(match_cons(t, sym_LChoice_2))
        {
          w_136 = ATgetArgument(t, 0);
          x_136 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, w_136, (ATerm) ATmakeAppl(sym_LChoice_2, x_136, y_136));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          v_136 = ATgetArgument(t, 0);
          y_136 = ATgetArgument(t, 1);
          t = v_136;
          if(match_cons(t, sym_Seq_2))
            {
              w_136 = ATgetArgument(t, 0);
              x_136 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, w_136, (ATerm) ATmakeAppl(sym_Seq_2, x_136, y_136));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              v_136 = ATgetArgument(t, 0);
              y_136 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_136;
          if(match_cons(t, sym_Choice_2))
            {
              w_136 = ATgetArgument(t, 0);
              x_136 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, w_136, (ATerm) ATmakeAppl(sym_Choice_2, x_136, y_136));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm m_137 = NULL,n_137 = NULL,o_137 = NULL,q_137 = NULL,r_137 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      q_137 = ATgetArgument(t, 0);
      r_137 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, q_137, r_137);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          q_137 = ATgetArgument(t, 0);
          t = q_137;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_137 = ATgetFirst((ATermList) t);
              n_137 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, m_137, (ATerm) ATmakeAppl(sym_LChoices_1, n_137));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_b_17;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              q_137 = ATgetArgument(t, 0);
              t = q_137;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_137 = ATgetFirst((ATermList) t);
                  n_137 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, m_137, (ATerm) ATmakeAppl(sym_Choices_1, n_137));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_b_17;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  q_137 = ATgetArgument(t, 0);
                  t = q_137;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      m_137 = ATgetFirst((ATermList) t);
                      n_137 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_137, (ATerm) ATmakeAppl(sym_Seqs_1, n_137));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_v_16;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      q_137 = ATgetArgument(t, 0);
                      r_137 = ATgetArgument(t, 1);
                      o_137 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, r_137, (ATerm) ATmakeAppl(sym_Op_2, term_u_34, (ATerm) ATinsert(ATinsert(ATempty, o_137), q_137)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          q_137 = ATgetArgument(t, 0);
                          r_137 = ATgetArgument(t, 1);
                          o_137 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, o_137)), q_137), (ATerm) ATmakeAppl(sym_Build_1, r_137)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              q_137 = ATgetArgument(t, 0);
                              r_137 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, q_137, (ATerm) ATmakeAppl(sym_Match_1, r_137));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  q_137 = ATgetArgument(t, 0);
                                  r_137 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_137), r_137);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      q_137 = ATgetArgument(t, 0);
                                      r_137 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, r_137), q_137);
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
static ATerm x_10 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm g_139 = NULL,h_139 = NULL,i_139 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      g_139 = ATgetArgument(t, 0);
      t = g_139;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_b_17;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          g_139 = ATgetArgument(t, 0);
          t = g_139;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_v_16;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              g_139 = ATgetArgument(t, 0);
              h_139 = ATgetArgument(t, 1);
              t = g_139;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_b_17;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  g_139 = ATgetArgument(t, 0);
                  h_139 = ATgetArgument(t, 1);
                  t = h_139;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_b_17;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      g_139 = ATgetArgument(t, 0);
                      h_139 = ATgetArgument(t, 1);
                      t = h_139;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_b_17;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          g_139 = ATgetArgument(t, 0);
                          t = g_139;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_b_17;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              g_139 = ATgetArgument(t, 0);
                              t = g_139;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_b_17;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  g_139 = ATgetArgument(t, 0);
                                  h_139 = ATgetArgument(t, 1);
                                  t = h_139;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_b_17;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      g_139 = ATgetArgument(t, 0);
                                      h_139 = ATgetArgument(t, 1);
                                      t = h_139;
                                      t = fetch_1_0(x_10, t);
                                      t = term_b_17;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          g_139 = ATgetArgument(t, 0);
                                          h_139 = ATgetArgument(t, 1);
                                          t = h_139;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = g_139;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = h_139;
                                                }
                                              else
                                                {
                                                  t = g_139;
                                                }
                                            }
                                          else
                                            {
                                              t = g_139;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = h_139;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              g_139 = ATgetArgument(t, 0);
                                              h_139 = ATgetArgument(t, 1);
                                              t = h_139;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = g_139;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = h_139;
                                                    }
                                                  else
                                                    {
                                                      t = g_139;
                                                    }
                                                }
                                              else
                                                {
                                                  t = g_139;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = h_139;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  g_139 = ATgetArgument(t, 0);
                                                  t = g_139;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_b_17;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      g_139 = ATgetArgument(t, 0);
                                                      h_139 = ATgetArgument(t, 1);
                                                      i_139 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = i_139;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_139, h_139);
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
  ATerm l_140 = NULL,n_140 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      n_140 = ATgetArgument(t, 0);
      t = n_140;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_v_16;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          n_140 = ATgetArgument(t, 0);
          t = n_140;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_b_17;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              n_140 = ATgetArgument(t, 0);
              l_140 = ATgetArgument(t, 1);
              t = l_140;
              if(match_cons(t, sym_Id_0))
                {
                  t = n_140;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = l_140;
                    }
                  else
                    {
                      t = n_140;
                    }
                }
              else
                {
                  t = n_140;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = l_140;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  n_140 = ATgetArgument(t, 0);
                  l_140 = ATgetArgument(t, 1);
                  t = n_140;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_v_16;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      n_140 = ATgetArgument(t, 0);
                      l_140 = ATgetArgument(t, 1);
                      t = l_140;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_v_16;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          n_140 = ATgetArgument(t, 0);
                          l_140 = ATgetArgument(t, 1);
                          t = l_140;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_v_16;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              n_140 = ATgetArgument(t, 0);
                              t = n_140;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_v_16;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  n_140 = ATgetArgument(t, 0);
                                  t = n_140;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_v_16;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      n_140 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = n_140;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_v_16;
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
  ATerm j_50 = t;
  int k_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(k_50);
    }
  else
    {
      t = j_50;
      {
        ATerm m_50 = t;
        int n_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(n_50);
          }
        else
          {
            t = m_50;
            {
              ATerm p_50 = t;
              int q_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(q_50);
                }
              else
                {
                  t = p_50;
                  {
                    ATerm r_50 = t;
                    int s_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(s_50);
                      }
                    else
                      {
                        t = r_50;
                        {
                          ATerm t_50 = t;
                          int u_50 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(u_50);
                            }
                          else
                            {
                              t = t_50;
                              {
                                ATerm w_50 = t;
                                int x_50 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_141 = NULL,d_141 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        c_141 = ATgetArgument(t, 0);
                                        d_141 = ATgetArgument(t, 1);
                                        t = c_141;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = d_141;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            c_141 = ATgetArgument(t, 0);
                                            d_141 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = c_141;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = d_141;
                                      }
                                    LocalPopChoice(x_50);
                                  }
                                else
                                  {
                                    t = w_50;
                                    {
                                      ATerm y_50 = t;
                                      int z_50 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
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
                                                t = MisMatch_0_0(t);
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
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(d_51);
                                                    }
                                                  else
                                                    {
                                                      t = c_51;
                                                      {
                                                        ATerm e_51 = t;
                                                        int f_51 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(f_51);
                                                          }
                                                        else
                                                          {
                                                            t = e_51;
                                                            {
                                                              ATerm k_51 = t;
                                                              int l_51 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(l_51);
                                                                }
                                                              else
                                                                {
                                                                  t = k_51;
                                                                  {
                                                                    ATerm m_51 = t;
                                                                    int n_51 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(n_51);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = m_51;
                                                                        {
                                                                          ATerm o_51 = t;
                                                                          int p_51 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(p_51);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = o_51;
                                                                              {
                                                                                ATerm q_51 = t;
                                                                                int r_51 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(r_51);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = q_51;
                                                                                    {
                                                                                      ATerm g_141 = NULL,h_141 = NULL,i_141 = NULL,j_141 = NULL;
                                                                                      h_141 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          i_141 = ATgetArgument(t, 0);
                                                                                          j_141 = ATgetArgument(t, 1);
                                                                                          t = i_141;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              g_141 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = h_141;
                                                                                          t = t_13(g_141, j_141, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              i_141 = ATgetArgument(t, 0);
                                                                                              j_141 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = i_141;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = j_141;
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
ATerm repeat_2_0 (ATerm w_112 (ATerm), ATerm x_112 (ATerm), ATerm t)
{
  static ATerm n_141 (ATerm t)
  {
    ATerm u_51 = t;
    int w_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_112(t);
        t = n_141(t);
        LocalPopChoice(w_51);
      }
    else
      {
        t = u_51;
        t = x_112(t);
      }
    return(t);
  }
  t = n_141(t);
  return(t);
}
ATerm downup_1_0 (ATerm d_107 (ATerm), ATerm t)
{
  t = d_107(t);
  {
    static ATerm y_10 (ATerm t)
    {
      t = downup_1_0(d_107, t);
      return(t);
    }
    t = SRTS_all(y_10, t);
  }
  t = d_107(t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = downup_1_0(a_11, t);
  {
    ATerm x_51 = t;
    int y_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        LocalPopChoice(y_51);
      }
    else
      {
        t = x_51;
      }
  }
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = repeat_2_0(Simplify_0_0, _id, t);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = inline_sdef_0_0(t);
  {
    ATerm z_51 = t;
    int a_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        LocalPopChoice(a_52);
      }
    else
      {
        t = z_51;
      }
  }
  return(t);
}
ATerm inline_sdefs_0_0 (ATerm t)
{
  t = map_1_0(z_10, t);
  t = map_1_0(d_11, t);
  return(t);
}
static ATerm z_14 (ATerm g_51, ATerm h_51, ATerm t)
{
  ATerm w_141 = NULL;
  t = SSL_fputc(g_51, h_51);
  w_141 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_141);
  return(t);
}
static ATerm a_15 (ATerm z_31, ATerm a_32, ATerm t)
{
  ATerm x_141 = NULL;
  t = SSL_write_term_to_stream_text(z_31, a_32);
  x_141 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_141);
  return(t);
}
static ATerm c_15 (ATerm l_114 (ATerm), ATerm a_233, ATerm d_32, ATerm t)
{
  ATerm y_141 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_233, term_b_52);
  t = f_15(t);
  y_141 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_141, d_32);
  t = l_114(t);
  t = fclose_0_0(t);
  t = d_32;
  return(t);
}
static ATerm b_15 (ATerm v_31, ATerm w_31, ATerm t)
{
  ATerm z_141 = NULL;
  t = SSL_write_term_to_stream_baf(v_31, w_31);
  z_141 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_141);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm c_142 = NULL,d_142 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_52 = ATgetArgument(t, 0);
      if(match_cons(c_52, sym_Stream_1))
        {
          c_142 = ATgetArgument(c_52, 0);
        }
      else
        _fail(t);
      d_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_15(c_142, d_142, t);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm e_142 = NULL,f_142 = NULL,g_142 = NULL,h_142 = NULL,i_142 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_52 = ATgetArgument(t, 0);
      if(match_cons(d_52, sym_Stream_1))
        {
          h_142 = ATgetArgument(d_52, 0);
        }
      else
        _fail(t);
      i_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_15(h_142, i_142, t);
  e_142 = t;
  t = term_e_52;
  f_142 = t;
  t = e_142;
  if(match_cons(t, sym_Stream_1))
    {
      g_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_e_52, e_142);
  t = z_14(f_142, g_142, t);
  return(t);
}
ATerm output_1_0 (ATerm z_132 (ATerm), ATerm t)
{
  ATerm a_142 = NULL,b_142 = NULL;
  t = z_132(t);
  b_142 = t;
  {
    ATerm f_52 = t;
    int g_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_52;
        t = get_config_0_0(t);
        LocalPopChoice(g_52);
      }
    else
      {
        t = f_52;
        t = term_i_52;
      }
  }
  a_142 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_142, b_142);
  {
    ATerm j_52 = t;
    int k_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_52;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, a_142, b_142);
        LocalPopChoice(k_52);
        if(match_cons(t, sym__2))
          {
            ATerm n_52 = ATgetArgument(t, 0);
            ATerm o_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_15(e_11, a_142, b_142, t);
      }
    else
      {
        t = j_52;
        if(match_cons(t, sym__2))
          {
            ATerm p_52 = ATgetArgument(t, 0);
            ATerm s_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_15(f_11, a_142, b_142, t);
      }
  }
  return(t);
}
static ATerm w_142 (ATerm q_142, ATerm t)
{
  t = SSL_fclose(q_142);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_142 = NULL,u_142 = NULL;
  u_142 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_142 = ATgetArgument(t, 0);
      {
        ATerm t_52 = t;
        int u_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_142);
            LocalPopChoice(u_52);
          }
        else
          {
            t = t_52;
            t = w_142(u_142, t);
          }
      }
    }
  else
    {
      t = w_142(u_142, t);
    }
  return(t);
}
static ATerm d_15 (ATerm b_32, ATerm t)
{
  t = SSL_read_term_from_stream(b_32);
  return(t);
}
static ATerm e_15 (ATerm i_51, ATerm j_51, ATerm t)
{
  ATerm x_142 = NULL;
  t = SSL_fopen(i_51, j_51);
  x_142 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_142);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_142 = NULL;
  t = SSL_stdin_stream();
  y_142 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_142);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_142 = NULL;
  t = SSL_stdout_stream();
  z_142 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_142);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_143 = NULL;
  t = SSL_stderr_stream();
  a_143 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_143);
  return(t);
}
static ATerm h_144 (ATerm g_143, ATerm t)
{
  ATerm h_143 = NULL;
  t = SSL_explode_term(g_143);
  if(match_cons(t, sym__2))
    {
      ATerm w_52 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_52) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_52 = ATgetArgument(t, 1);
        if(((ATgetType(x_52) == AT_LIST) && !(ATisEmpty(x_52))))
          {
            h_143 = ATgetFirst((ATermList) x_52);
            {
              ATerm y_52 = (ATerm) ATgetNext((ATermList) x_52);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_143;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_143;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_143;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_143;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_144 (ATerm k_143, ATerm l_143, ATerm m_143, ATerm t)
{
  ATerm n_143 = NULL,o_143 = NULL,p_143 = NULL,s_143 = NULL,h_7 = NULL;
  t = SSLgetAnnotations(m_143);
  p_143 = t;
  t = k_143;
  if(match_cons(t, sym_Path_1))
    {
      s_143 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_143, l_143);
  h_7 = t;
  t = SSLsetAnnotations(h_7, p_143);
  if(match_cons(t, sym__2))
    {
      n_143 = ATgetArgument(t, 0);
      o_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_15(n_143, o_143, t);
  return(t);
}
static ATerm j_144 (ATerm u_143, ATerm v_143, ATerm w_143, ATerm t)
{
  ATerm x_143 = NULL,y_143 = NULL,z_143 = NULL,c_144 = NULL,l_7 = NULL;
  t = SSLgetAnnotations(w_143);
  z_143 = t;
  t = SSL_is_string(u_143);
  c_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_144, v_143);
  l_7 = t;
  t = SSLsetAnnotations(l_7, z_143);
  if(match_cons(t, sym__2))
    {
      x_143 = ATgetArgument(t, 0);
      y_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_15(x_143, y_143, t);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm e_144 = NULL,f_144 = NULL,g_144 = NULL;
  e_144 = t;
  if(match_cons(t, sym__2))
    {
      f_144 = ATgetArgument(t, 0);
      g_144 = ATgetArgument(t, 1);
      {
        ATerm z_52 = t;
        int a_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_144(e_144, t);
            LocalPopChoice(a_53);
          }
        else
          {
            t = z_52;
            {
              ATerm b_53 = t;
              int d_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_144(f_144, g_144, e_144, t);
                  LocalPopChoice(d_53);
                }
              else
                {
                  t = b_53;
                  t = j_144(f_144, g_144, e_144, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_144(e_144, t);
    }
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_g_53;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_144 = NULL,l_144 = NULL,m_144 = NULL;
  ATerm j_53 = t;
  int k_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_144 = NULL;
      n_144 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_144, term_l_53);
      t = f_15(t);
      LocalPopChoice(k_53);
    }
  else
    {
      t = j_53;
      t = debug_1_0(g_11, t);
      _fail(t);
    }
  l_144 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_144 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_15(m_144, t);
  k_144 = t;
  t = l_144;
  t = fclose_0_0(t);
  t = k_144;
  return(t);
}
ATerm input_1_0 (ATerm a_133 (ATerm), ATerm t)
{
  ATerm m_53 = t;
  int o_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_53;
      t = get_config_0_0(t);
      LocalPopChoice(o_53);
    }
  else
    {
      t = m_53;
      t = term_s_53;
    }
  t = ReadFromFile_0_0(t);
  t = a_133(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_144 = NULL,q_144 = NULL,r_144 = NULL,s_144 = NULL,t_144 = NULL;
  p_144 = t;
  t = term_t_53;
  t = whoami_0_0(t);
  q_144 = t;
  t = term_u_53;
  s_144 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_54), q_144), term_x_53);
  t_144 = t;
  t = SSL_printnl(s_144, t_144);
  t = term_j_14;
  r_144 = t;
  t = SSL_exit(r_144);
  t = p_144;
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm v_144 = NULL;
  v_144 = t;
  if(match_string(t, "-k"))
    {
      t = v_144;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_144;
    }
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm w_144 = NULL,x_144 = NULL,y_144 = NULL;
  w_144 = t;
  t = SSL_string_to_int(w_144);
  x_144 = t;
  t = term_d_54;
  y_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_54, x_144);
  t = o_15(y_144, x_144, t);
  t = w_144;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  t = term_n_54;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_11, i_11, j_11, t);
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm a_145 = NULL;
  a_145 = t;
  if(match_string(t, "-S"))
    {
      t = a_145;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = a_145;
    }
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm b_145 = NULL,c_145 = NULL;
  t = term_o_54;
  b_145 = t;
  t = term_s_46;
  c_145 = t;
  t = term_p_54;
  t = o_15(b_145, c_145, t);
  t = term_q_54;
  return(t);
}
static ATerm n_11 (ATerm t)
{
  t = term_s_54;
  return(t);
}
static ATerm q_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm d_145 = NULL,e_145 = NULL,f_145 = NULL;
  d_145 = t;
  t = SSL_string_to_int(d_145);
  e_145 = t;
  t = term_o_54;
  f_145 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_54, e_145);
  t = o_15(f_145, e_145, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_145);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  t = term_t_54;
  return(t);
}
static ATerm t_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm g_145 = NULL,h_145 = NULL;
  t = term_u_54;
  g_145 = t;
  t = term_t_53;
  h_145 = t;
  t = term_v_54;
  t = o_15(g_145, h_145, t);
  t = term_w_54;
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = term_z_54;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_55 = t;
  int b_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_11, m_11, n_11, t);
      LocalPopChoice(b_55);
    }
  else
    {
      t = a_55;
      {
        ATerm c_55 = t;
        int d_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_11, r_11, s_11, t);
            LocalPopChoice(d_55);
          }
        else
          {
            t = c_55;
            t = Option_3_0(t_11, u_11, v_11, t);
          }
      }
    }
  return(t);
}
static ATerm o_15 (ATerm y_53, ATerm z_53, ATerm t)
{
  ATerm i_145 = NULL;
  t = term_e_55;
  i_145 = t;
  t = SSL_table_put(i_145, y_53, z_53);
  t = (ATerm) ATmakeAppl(sym__3, term_e_55, y_53, z_53);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm l_145 = NULL,m_145 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_145 = NULL,o_145 = NULL,p_145 = NULL;
      t = term_t_53;
      t = h_0(t);
      n_145 = t;
      t = term_f_55;
      o_145 = t;
      t = term_g_55;
      p_145 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_55, term_g_55, n_145);
      t = m_15(o_145, p_145, n_145, t);
      _fail(t);
    }
  else
    {
      ATerm s_145 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_145 = ATgetFirst((ATermList) t);
          m_145 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_145;
      t = c_0(t);
      t = term_t_53;
      t = e_0(t);
      s_145 = t;
      t = (ATerm) ATinsert(CheckATermList(m_145), s_145);
    }
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm u_145 = NULL;
  u_145 = t;
  if(match_string(t, "-o"))
    {
      t = u_145;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_145;
    }
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm v_145 = NULL,w_145 = NULL;
  v_145 = t;
  t = term_h_52;
  w_145 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_52, v_145);
  t = o_15(w_145, v_145, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_145);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_j_55;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_11, x_11, y_11, t);
  return(t);
}
static ATerm m_15 (ATerm e_36, ATerm f_36, ATerm d_36, ATerm t)
{
  ATerm y_145 = NULL,z_145 = NULL,a_146 = NULL;
  y_145 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_36, f_36);
  {
    ATerm l_55 = t;
    int m_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_55 = ATgetArgument(t, 0);
            ATerm o_55 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_36, f_36);
        t = l_15(e_36, f_36, t);
        LocalPopChoice(m_55);
      }
    else
      {
        t = l_55;
        t = (ATerm) ATempty;
      }
  }
  z_145 = t;
  t = (ATerm) ATinsert(CheckATermList(z_145), d_36);
  a_146 = t;
  t = SSL_table_put(e_36, f_36, a_146);
  t = y_145;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm h_146 = NULL,i_146 = NULL,j_146 = NULL,k_146 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_146 = NULL,m_146 = NULL,n_146 = NULL;
      t = term_t_53;
      t = v_0(t);
      l_146 = t;
      t = term_f_55;
      m_146 = t;
      t = term_g_55;
      n_146 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_55, term_g_55, l_146);
      t = m_15(m_146, n_146, l_146, t);
      _fail(t);
    }
  else
    {
      ATerm r_146 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_146 = ATgetFirst((ATermList) t);
          i_146 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_146;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_146 = ATgetFirst((ATermList) t);
          k_146 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_146;
      t = l_0(t);
      t = j_146;
      t = o_0(t);
      r_146 = t;
      t = (ATerm) ATinsert(CheckATermList(k_146), r_146);
    }
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm t_146 = NULL;
  t_146 = t;
  if(match_string(t, "-i"))
    {
      t = t_146;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = t_146;
    }
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm u_146 = NULL,v_146 = NULL;
  u_146 = t;
  t = term_p_53;
  v_146 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_53, u_146);
  t = o_15(v_146, u_146, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_146);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_p_55;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_11, b_12, c_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_146 = NULL,x_146 = NULL,y_146 = NULL,z_146 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_53;
  t = whoami_0_0(t);
  w_146 = t;
  t = term_u_53;
  y_146 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_55), w_146);
  z_146 = t;
  t = SSL_printnl(y_146, z_146);
  t = term_j_14;
  x_146 = t;
  t = SSL_exit(x_146);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_t_55;
  t = get_config_0_0(t);
  return(t);
}
static ATerm g_15 (ATerm d_33, ATerm e_33, ATerm t)
{
  ATerm u_55 = t;
  int v_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(d_33, e_33);
      LocalPopChoice(v_55);
    }
  else
    {
      t = u_55;
      t = SSL_addr(d_33, e_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm m_120 (ATerm), ATerm n_120 (ATerm), ATerm t)
{
  ATerm b_147 = NULL,c_147 = NULL,d_147 = NULL;
  b_147 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_147;
      t = m_120(t);
    }
  else
    {
      ATerm g_147 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_147 = ATgetFirst((ATermList) t);
          d_147 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_147;
      t = foldr_2_0(m_120, n_120, t);
      g_147 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_147, g_147);
      t = n_120(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = term_s_46;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm h_59 = NULL,k_59 = NULL;
  if(match_cons(t, sym__2))
    {
      h_59 = ATgetArgument(t, 0);
      k_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_15(h_59, k_59, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_147 = NULL,a_59 = NULL,b_59 = NULL;
  t = times_0_0(t);
  b_59 = t;
  t = SSL_explode_term(b_59);
  if(match_cons(t, sym__2))
    {
      ATerm w_55 = ATgetArgument(t, 0);
      a_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_59;
  t = foldr_2_0(d_12, f_12, t);
  j_147 = t;
  t = SSL_TicksToSeconds(j_147);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_147 = NULL,v_147 = NULL,w_147 = NULL;
  u_147 = t;
  if(match_cons(t, sym__2))
    {
      v_147 = ATgetArgument(t, 0);
      w_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_55 = t;
    int z_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_147;
        if((v_147 != t))
          {
            _fail(t);
          }
        t = u_147;
        LocalPopChoice(z_55);
      }
    else
      {
        t = x_55;
        t = (ATerm) ATmakeAppl(sym__2, v_147, w_147);
        {
          ATerm b_56 = t;
          int c_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_147, w_147);
              LocalPopChoice(c_56);
            }
          else
            {
              t = b_56;
              t = SSL_gtr(v_147, w_147);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, v_147, w_147);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_130 (ATerm), ATerm t)
{
  ATerm a_148 = NULL;
  a_148 = t;
  {
    ATerm d_56 = t;
    int e_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_148 = NULL;
        t = term_o_54;
        t = get_config_0_0(t);
        c_148 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_148, term_j_14);
        t = geq_0_0(t);
        t = a_148;
        t = f_130(t);
        LocalPopChoice(e_56);
      }
    else
      {
        t = d_56;
        t = a_148;
      }
  }
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm e_148 = NULL,f_148 = NULL,h_148 = NULL,i_148 = NULL;
  t = run_time_0_0(t);
  e_148 = t;
  t = term_t_53;
  t = whoami_0_0(t);
  f_148 = t;
  t = term_u_53;
  h_148 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_56), e_148), term_f_56), f_148);
  i_148 = t;
  t = SSL_printnl(h_148, i_148);
  t = (ATerm) ATmakeAppl(sym__2, term_u_53, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_56), e_148), term_f_56), f_148));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_148 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_46;
  j_148 = t;
  t = SSL_exit(j_148);
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm r_148 = NULL,s_148 = NULL;
  s_148 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = s_148;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          r_148 = ATgetArgument(t, 0);
          {
            ATerm j_60 = NULL,o_7 = NULL;
            t = SSLgetAnnotations(s_148);
            j_60 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, r_148);
            o_7 = t;
            t = SSLsetAnnotations(o_7, j_60);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = s_148;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_132 (ATerm), ATerm t)
{
  ATerm h_56 = t;
  int i_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_56;
      t = get_config_0_0(t);
      LocalPopChoice(i_56);
    }
  else
    {
      t = h_56;
      t = fetch_1_0(j_12, t);
    }
  t = q_132(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm v_148 = NULL,w_148 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_148 = ATgetFirst((ATermList) t);
      w_148 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_149 = NULL,b_149 = NULL;
        static ATerm k_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(a_149)), not_null(b_149));
          return(t);
        }
        t = w_148;
        t = j_0(t);
        if(((a_149 != NULL) && (a_149 != t)))
          _fail(t);
        else
          a_149 = t;
        t = v_148;
        t = i_0(t);
        if(((b_149 != NULL) && (b_149 != t)))
          _fail(t);
        else
          b_149 = t;
        t = w_148;
        t = reverse_acc_2_0(i_0, k_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_53;
      t = j_0(t);
    }
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm f_149 = NULL,g_149 = NULL,h_149 = NULL,q_7 = NULL;
  h_149 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_149 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_149);
  f_149 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_149);
  q_7 = t;
  t = SSLsetAnnotations(q_7, f_149);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm j_149 = NULL;
  j_149 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_149), term_k_56);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_149 = NULL,e_149 = NULL;
  ATerm l_56 = t;
  int n_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_55;
      t = get_config_0_0(t);
      LocalPopChoice(n_56);
    }
  else
    {
      t = l_56;
      t = fetch_1_0(l_12, t);
    }
  t = term_o_56;
  t = echo_0_0(t);
  t = term_f_55;
  d_149 = t;
  t = term_g_55;
  e_149 = t;
  t = term_p_56;
  t = l_15(d_149, e_149, t);
  t = reverse_acc_2_0(_id, m_12, t);
  t = map_1_0(n_12, t);
  return(t);
}
ATerm fetch_1_0 (ATerm v_115 (ATerm), ATerm t)
{
  static ATerm g_150 (ATerm t)
  {
    ATerm d_150 = NULL,e_150 = NULL,f_150 = NULL;
    d_150 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_150 = ATgetFirst((ATermList) t);
        f_150 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_56 = t;
      int s_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_60 = NULL,w_60 = NULL,s_7 = NULL;
          t = SSLgetAnnotations(d_150);
          t_60 = t;
          t = e_150;
          t = v_115(t);
          w_60 = t;
          t = (ATerm) ATinsert(CheckATermList(f_150), w_60);
          s_7 = t;
          t = SSLsetAnnotations(s_7, t_60);
          LocalPopChoice(s_56);
        }
      else
        {
          t = r_56;
          {
            ATerm j_61 = NULL,p_61 = NULL,u_7 = NULL;
            t = SSLgetAnnotations(d_150);
            j_61 = t;
            t = f_150;
            t = g_150(t);
            p_61 = t;
            t = (ATerm) ATinsert(CheckATermList(p_61), e_150);
            u_7 = t;
            t = SSLsetAnnotations(u_7, j_61);
          }
        }
    }
    return(t);
  }
  t = g_150(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_150 = NULL,l_150 = NULL,m_150 = NULL;
  k_150 = t;
  {
    ATerm t_56 = t;
    int u_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_150;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_56 = ATgetFirst((ATermList) t);
                ATerm w_56 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_150;
          }
        LocalPopChoice(u_56);
      }
    else
      {
        t = t_56;
        t = (ATerm) ATinsert(ATempty, k_150);
      }
  }
  l_150 = t;
  t = term_i_52;
  m_150 = t;
  t = SSL_printnl(m_150, l_150);
  t = k_150;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_t_55;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm k_15 (ATerm a_50, ATerm b_50, ATerm t)
{
  t = SSL_strcat(a_50, b_50);
  return(t);
}
ATerm debug_1_0 (ATerm j_114 (ATerm), ATerm t)
{
  ATerm q_150 = NULL,r_150 = NULL,s_150 = NULL,t_150 = NULL;
  q_150 = t;
  t = j_114(t);
  r_150 = t;
  t = term_u_53;
  s_150 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_150), r_150);
  t_150 = t;
  t = SSL_printnl(s_150, t_150);
  t = q_150;
  return(t);
}
ATerm map_1_0 (ATerm l_115 (ATerm), ATerm t)
{
  static ATerm i_151 (ATerm t)
  {
    ATerm f_151 = NULL,g_151 = NULL,h_151 = NULL;
    f_151 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_151;
      }
    else
      {
        ATerm h_62 = NULL,m_62 = NULL,w_62 = NULL,w_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_151 = ATgetFirst((ATermList) t);
            h_151 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_151);
        h_62 = t;
        t = g_151;
        t = l_115(t);
        m_62 = t;
        t = h_151;
        t = i_151(t);
        w_62 = t;
        t = (ATerm) ATinsert(CheckATermList(w_62), m_62);
        w_9 = t;
        t = SSLsetAnnotations(w_9, h_62);
      }
    return(t);
  }
  t = i_151(t);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm x_56 = t;
  int y_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(y_56);
    }
  else
    {
      t = x_56;
    }
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_z_56;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_57 = t;
  int b_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_151 = NULL;
      q_151 = t;
      t = SSL_is_string(q_151);
      LocalPopChoice(b_57);
    }
  else
    {
      t = a_57;
      {
        ATerm c_57 = t;
        int d_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(p_12, t);
            LocalPopChoice(d_57);
          }
        else
          {
            t = c_57;
            {
              ATerm x_151 = NULL,y_151 = NULL,z_151 = NULL;
              x_151 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_151 = ATgetArgument(t, 0);
                  t = y_151;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_151 = ATgetArgument(t, 0);
                      t = y_151;
                      {
                        ATerm e_57 = t;
                        int f_57 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(f_57);
                          }
                        else
                          {
                            t = e_57;
                            t = debug_1_0(q_12, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_152 = NULL,e_152 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_151 = ATgetArgument(t, 0);
                          z_151 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_151;
                      t = eval_config_0_0(t);
                      d_152 = t;
                      t = z_151;
                      t = eval_config_0_0(t);
                      e_152 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_152, e_152);
                      t = k_15(d_152, e_152, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_15 (ATerm d_38, ATerm e_38, ATerm t)
{
  t = SSL_table_get(d_38, e_38);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm i_152 = NULL,j_152 = NULL;
  i_152 = t;
  t = term_e_55;
  j_152 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_55, i_152);
  t = l_15(j_152, i_152, t);
  {
    ATerm g_57 = t;
    int h_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_152 = NULL,l_152 = NULL;
        t = eval_config_0_0(t);
        k_152 = t;
        t = term_e_55;
        l_152 = t;
        t = SSL_table_put(l_152, i_152, k_152);
        t = k_152;
        LocalPopChoice(h_57);
      }
    else
      {
        t = g_57;
      }
  }
  return(t);
}
static ATerm v_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm o_152 = NULL,p_152 = NULL;
  t = term_j_57;
  o_152 = t;
  t = term_t_53;
  p_152 = t;
  t = term_k_57;
  t = o_15(o_152, p_152, t);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_l_57;
  return(t);
}
static ATerm z_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm q_152 = NULL,r_152 = NULL,s_152 = NULL,t_152 = NULL;
  t = term_j_57;
  s_152 = t;
  t = term_t_53;
  t_152 = t;
  t = term_k_57;
  t = o_15(s_152, t_152, t);
  t = term_m_57;
  q_152 = t;
  t = term_t_53;
  r_152 = t;
  t = term_n_57;
  t = o_15(q_152, r_152, t);
  t = term_o_57;
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = term_q_57;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_57 = t;
  int s_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_12, x_12, y_12, t);
      LocalPopChoice(s_57);
    }
  else
    {
      t = r_57;
      t = Option_3_0(z_12, a_13, e_13, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_91 (ATerm), ATerm s_91 (ATerm), ATerm t)
{
  ATerm v_152 = NULL,w_152 = NULL,x_152 = NULL,y_152 = NULL,z_152 = NULL,a_153 = NULL,a_10 = NULL;
  a_153 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_152 = ATgetFirst((ATermList) t);
      x_152 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_153);
  v_152 = t;
  t = w_152;
  t = r_91(t);
  y_152 = t;
  t = x_152;
  t = s_91(t);
  z_152 = t;
  t = (ATerm) ATinsert(CheckATermList(z_152), y_152);
  a_10 = t;
  t = SSLsetAnnotations(a_10, v_152);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_134 (ATerm), ATerm t)
{
  ATerm f_153 = NULL,g_153 = NULL,h_153 = NULL,i_153 = NULL,k_153 = NULL,l_153 = NULL,c_10 = NULL;
  f_153 = t;
  {
    ATerm t_57 = t;
    int u_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_57;
        t = t_134(t);
        LocalPopChoice(u_57);
      }
    else
      {
        t = t_57;
      }
  }
  t = f_153;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_153 = ATgetFirst((ATermList) t);
      i_153 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_153);
  g_153 = t;
  t = term_t_55;
  l_153 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_55, h_153);
  t = o_15(l_153, h_153, t);
  t = i_153;
  {
    static ATerm v_153 (ATerm t)
    {
      ATerm w_57 = t;
      int x_57 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_57 = t;
          int z_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_153 = NULL;
              o_153 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_153;
              LocalPopChoice(z_57);
            }
          else
            {
              t = y_57;
              t = t_134(t);
              t = Cons_2_0(_id, v_153, t);
            }
          LocalPopChoice(x_57);
        }
      else
        {
          t = w_57;
          {
            ATerm r_153 = NULL,s_153 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_153 = ATgetFirst((ATermList) t);
                s_153 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_153), (ATerm) ATmakeAppl(sym_Undefined_1, r_153));
          }
        }
      return(t);
    }
    t = v_153(t);
  }
  k_153 = t;
  t = (ATerm) ATinsert(CheckATermList(k_153), (ATerm) ATmakeAppl(sym_Program_1, h_153));
  c_10 = t;
  t = SSLsetAnnotations(c_10, g_153);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm h_154 = NULL;
  h_154 = t;
  if(match_string(t, "--help"))
    {
      t = h_154;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_154;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_154;
        }
    }
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm i_154 = NULL,j_154 = NULL;
  t = term_j_56;
  i_154 = t;
  t = term_t_53;
  j_154 = t;
  t = term_a_58;
  t = o_15(i_154, j_154, t);
  t = term_b_58;
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = term_c_58;
  return(t);
}
static ATerm m_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_134 (ATerm), ATerm t)
{
  ATerm a_154 = NULL,b_154 = NULL,c_154 = NULL,d_154 = NULL,e_154 = NULL,f_154 = NULL,g_154 = NULL;
  c_154 = t;
  t = term_f_55;
  e_154 = t;
  t = term_g_55;
  f_154 = t;
  t = (ATerm) ATempty;
  g_154 = t;
  t = SSL_table_put(e_154, f_154, g_154);
  t = c_154;
  {
    static ATerm g_13 (ATerm t)
    {
      ATerm d_58 = t;
      int e_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_134(t);
          LocalPopChoice(e_58);
        }
      else
        {
          t = d_58;
          {
            ATerm f_58 = t;
            int g_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_13, k_13, l_13, t);
                LocalPopChoice(g_58);
              }
            else
              {
                t = f_58;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_13, t);
  }
  {
    ATerm h_58 = t;
    int i_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_154 = NULL;
        q_154 = t;
        {
          ATerm j_58 = t;
          int k_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_63 = NULL;
              t = q_154;
              {
                ATerm l_58 = t;
                int m_58 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_j_56;
                    t = get_config_0_0(t);
                    LocalPopChoice(m_58);
                  }
                else
                  {
                    t = l_58;
                    t = fetch_1_0(m_13, t);
                  }
              }
              t = q_154;
              t = default_system_usage_0_0(t);
              t = term_s_46;
              y_63 = t;
              t = SSL_exit(y_63);
              LocalPopChoice(k_58);
            }
          else
            {
              t = j_58;
              {
                ATerm f_64 = NULL;
                t = term_j_57;
                t = get_config_0_0(t);
                t = q_154;
                t = default_system_about_0_0(t);
                t = term_s_46;
                f_64 = t;
                t = SSL_exit(f_64);
              }
            }
        }
        LocalPopChoice(i_58);
      }
    else
      {
        t = h_58;
        {
          ATerm n_58 = t;
          int o_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_154 = NULL,s_154 = NULL,t_154 = NULL;
              static ATerm o_13 (ATerm t)
              {
                ATerm u_154 = NULL,v_154 = NULL,w_154 = NULL,l_10 = NULL;
                w_154 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_154 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_154);
                u_154 = t;
                t = v_154;
                if(((a_154 != NULL) && (a_154 != t)))
                  _fail(t);
                else
                  a_154 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_154);
                l_10 = t;
                t = SSLsetAnnotations(l_10, u_154);
                return(t);
              }
              t = fetch_1_0(o_13, t);
              t = term_u_53;
              s_154 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_154)), term_p_58);
              t_154 = t;
              t = SSL_printnl(s_154, t_154);
              t = (ATerm) ATmakeAppl(sym__2, term_u_53, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_154)), term_p_58));
              t = default_system_usage_0_0(t);
              t = term_j_14;
              r_154 = t;
              t = SSL_exit(r_154);
              LocalPopChoice(o_58);
            }
          else
            {
              t = n_58;
            }
        }
      }
  }
  b_154 = t;
  t = term_f_55;
  d_154 = t;
  t = SSL_table_destroy(d_154);
  t = b_154;
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_132 (ATerm), ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm t)
{
  ATerm b_155 = NULL,c_155 = NULL,d_155 = NULL,e_155 = NULL;
  t = parse_options_1_0(s_132, t);
  b_155 = t;
  t = term_q_58;
  e_155 = t;
  t = SSL_table_create(e_155);
  t = term_q_58;
  c_155 = t;
  t = term_r_58;
  d_155 = t;
  t = SSL_table_put(c_155, d_155, b_155);
  t = b_155;
  t = u_132(t);
  {
    ATerm s_58 = t;
    int t_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_132, t);
        LocalPopChoice(t_58);
      }
    else
      {
        t = s_58;
        {
          ATerm u_58 = t;
          int v_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_132(t);
              t = report_success_0_0(t);
              LocalPopChoice(v_58);
            }
          else
            {
              t = u_58;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm w_58 = t;
  int x_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(x_58);
    }
  else
    {
      t = w_58;
      {
        ATerm y_58 = t;
        int z_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(z_58);
          }
        else
          {
            t = y_58;
            {
              ATerm d_59 = t;
              int e_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(v_13, w_13, x_13, t);
                  LocalPopChoice(e_59);
                }
              else
                {
                  t = d_59;
                  {
                    ATerm f_59 = t;
                    int g_59 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(g_59);
                      }
                    else
                      {
                        t = f_59;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_13 (ATerm t)
{
  t = input_1_0(y_13, t);
  return(t);
}
static ATerm v_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm g_155 = NULL,h_155 = NULL;
  t = term_m_52;
  g_155 = t;
  t = term_t_53;
  h_155 = t;
  t = term_i_59;
  t = o_15(g_155, h_155, t);
  t = term_j_59;
  return(t);
}
static ATerm x_13 (ATerm t)
{
  t = term_m_59;
  return(t);
}
static ATerm y_13 (ATerm t)
{
  t = output_1_0(z_13, t);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm j_155 = NULL,k_155 = NULL,l_155 = NULL,m_155 = NULL,n_155 = NULL,o_155 = NULL,p_155 = NULL,q_155 = NULL,r_155 = NULL,s_155 = NULL,t_155 = NULL,u_155 = NULL,v_155 = NULL,w_155 = NULL,x_155 = NULL,u_10 = NULL,t_10 = NULL,s_10 = NULL,n_10 = NULL;
  x_155 = t;
  if(match_cons(t, sym_Specification_1))
    {
      k_155 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_155);
  j_155 = t;
  t = k_155;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_155 = ATgetFirst((ATermList) t);
      n_155 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_155);
  l_155 = t;
  t = n_155;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_155 = ATgetFirst((ATermList) t);
      r_155 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_155);
  p_155 = t;
  t = q_155;
  if(match_cons(t, sym_Strategies_1))
    {
      u_155 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_155);
  t_155 = t;
  t = u_155;
  t = inline_sdefs_0_0(t);
  v_155 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, v_155);
  n_10 = t;
  t = SSLsetAnnotations(n_10, t_155);
  w_155 = t;
  t = r_155;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_155), w_155);
  s_10 = t;
  t = SSLsetAnnotations(s_10, p_155);
  s_155 = t;
  t = (ATerm) ATinsert(CheckATermList(s_155), m_155);
  t_10 = t;
  t = SSLsetAnnotations(t_10, l_155);
  o_155 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, o_155);
  u_10 = t;
  t = SSLsetAnnotations(u_10, j_155);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(s_13, default_usage_0_0, _id, u_13, t);
  return(t);
}
