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
ATerm term_z_58;
ATerm term_y_58;
ATerm term_x_58;
ATerm term_k_58;
ATerm term_j_58;
ATerm term_i_58;
ATerm term_f_58;
ATerm term_u_57;
ATerm term_t_57;
ATerm term_s_57;
ATerm term_m_57;
ATerm term_h_57;
ATerm term_f_57;
ATerm term_e_57;
ATerm term_d_57;
ATerm term_c_57;
ATerm term_b_57;
ATerm term_a_57;
ATerm term_t_56;
ATerm term_s_56;
ATerm term_o_56;
ATerm term_n_56;
ATerm term_m_56;
ATerm term_j_56;
ATerm term_i_56;
ATerm term_g_56;
ATerm term_v_55;
ATerm term_t_55;
ATerm term_s_55;
ATerm term_r_55;
ATerm term_k_55;
ATerm term_j_55;
ATerm term_i_55;
ATerm term_z_54;
ATerm term_w_54;
ATerm term_v_54;
ATerm term_u_54;
ATerm term_t_54;
ATerm term_s_54;
ATerm term_p_54;
ATerm term_o_54;
ATerm term_n_54;
ATerm term_m_54;
ATerm term_l_54;
ATerm term_i_54;
ATerm term_h_54;
ATerm term_g_54;
ATerm term_e_54;
ATerm term_d_54;
ATerm term_c_54;
ATerm term_s_53;
ATerm term_n_53;
ATerm term_m_53;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_d_52;
ATerm term_c_52;
ATerm term_b_52;
ATerm term_a_52;
ATerm term_x_51;
ATerm term_u_51;
ATerm term_d_47;
ATerm term_o_46;
ATerm term_k_46;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_u_35;
ATerm term_n_35;
ATerm term_p_34;
ATerm term_x_16;
ATerm term_q_16;
ATerm term_p_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_y_13;
ATerm term_x_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(50);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(sym__2, term_a_52, term_b_52);
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(sym__2, term_a_52, term_m_52);
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(sym__2, term_a_52, term_s_53);
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(sym__2, term_n_54, term_o_46);
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_46);
  ATprotect(&(term_s_54));
  term_s_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeAppl(sym__2, term_u_54, term_e_54);
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(sym__2, term_a_52, term_t_55);
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(sym__2, term_a_52, term_n_54);
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(sym__2, term_a_52, term_m_56);
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(sym__2, term_i_55, term_j_55);
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(sym__2, term_a_57, term_e_54);
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_57));
  term_e_57 = (ATerm) ATmakeAppl(sym__2, term_d_57, term_e_54);
  ATprotect(&(term_f_57));
  term_f_57 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(sym__2, term_m_56, term_e_54);
  ATprotect(&(term_t_57));
  term_t_57 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_58));
  term_f_58 = (ATerm) ATmakeAppl(sym__2, term_a_52, term_a_57);
  ATprotect(&(term_i_58));
  term_i_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_58));
  term_j_58 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_58));
  term_k_58 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(sym__2, term_m_52, term_e_54);
  ATprotect(&(term_y_58));
  term_y_58 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_58));
  term_z_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm AddSDef_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm term_size_0_0 (ATerm t);
ATerm Seq_2_0 (ATerm x_90 (ATerm), ATerm y_90 (ATerm), ATerm t);
static ATerm g_1 (ATerm t);
ATerm body_to_inline_0_0 (ATerm t);
ATerm inlineable_0_0 (ATerm t);
static ATerm u_6 (ATerm z_36, ATerm b_37, ATerm t);
ATerm bottomup_1_0 (ATerm y_108 (ATerm), ATerm t);
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
ATerm spaste_1_0 (ATerm b_108 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm e_108 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_12 (ATerm p_25, ATerm o_25, ATerm t);
ATerm SVar_1_0 (ATerm i_90 (ATerm), ATerm t);
static ATerm a_13 (ATerm x_124 (ATerm), ATerm y_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm b_45, ATerm a_45, ATerm z_44, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm b_13 (ATerm r_124 (ATerm), ATerm s_124 (ATerm (ATerm), ATerm), ATerm t_44, ATerm w_44, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm f_125 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm m_124 (ATerm (ATerm), ATerm), ATerm n_124 (ATerm), ATerm o_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm p_124 (ATerm (ATerm), ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm tpaste_1_0 (ATerm x_107 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm y_107 (ATerm), ATerm z_107 (ATerm), ATerm a_108 (ATerm), ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm u_12 (ATerm b_120 (ATerm), ATerm u_41, ATerm t_41, ATerm t);
static ATerm v_12 (ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm y_41, ATerm x_41, ATerm t);
static ATerm w_12 (ATerm w_119 (ATerm), ATerm s_41, ATerm r_41, ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm y_12 (ATerm c_623, ATerm h_623, ATerm u_60, ATerm t);
ATerm while_not_2_0 (ATerm j_115 (ATerm), ATerm k_115 (ATerm), ATerm t);
ATerm for_3_0 (ATerm m_115 (ATerm), ATerm n_115 (ATerm), ATerm o_115 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm a_115 (ATerm o_113, ATerm p_113, ATerm q_113, ATerm t);
static ATerm h_7 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm w_7 (ATerm t);
ATerm free_vars_3_0 (ATerm p_126 (ATerm), ATerm q_126 (ATerm), ATerm r_126 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm x_86 (ATerm), ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm x_8 (ATerm t);
ATerm InlineCall_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm y_122 (ATerm), ATerm z_122 (ATerm), ATerm a_123 (ATerm), ATerm t);
static ATerm y_8 (ATerm t);
static ATerm c_9 (ATerm t);
ATerm occurrences_1_0 (ATerm i_120 (ATerm), ATerm t);
static ATerm g_13 (ATerm c_107 (ATerm), ATerm s_24, ATerm r_24, ATerm t);
static ATerm i_13 (ATerm s_116 (ATerm), ATerm u_34, ATerm s_34, ATerm t);
static ATerm k_13 (ATerm r_36, ATerm s_36, ATerm t);
ATerm end_scope_1_0 (ATerm p_116 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm o_116 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm q_116 (ATerm), ATerm r_116 (ATerm), ATerm t);
static ATerm i_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm p_9 (ATerm t);
ATerm inline_sdef_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm x_108 (ATerm), ATerm t);
static ATerm c_10 (ATerm t);
static ATerm m_13 (ATerm e_78, ATerm d_78, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm j_113 (ATerm), ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm t);
static ATerm d_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm m_10 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm b_110 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm y_117 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm i_134 (ATerm a_134, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm t_10 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm s_114 (ATerm), ATerm t_114 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm z_108 (ATerm), ATerm t);
static ATerm x_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm a_11 (ATerm t);
ATerm inline_sdefs_0_0 (ATerm t);
static ATerm s_14 (ATerm e_52, ATerm f_52, ATerm t);
static ATerm t_14 (ATerm a_32, ATerm b_32, ATerm t);
static ATerm v_14 (ATerm h_116 (ATerm), ATerm d_236, ATerm g_32, ATerm t);
static ATerm u_14 (ATerm w_31, ATerm x_31, ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
ATerm output_1_0 (ATerm j_135 (ATerm), ATerm t);
static ATerm k_143 (ATerm e_143, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm w_14 (ATerm c_32, ATerm t);
static ATerm x_14 (ATerm x_50, ATerm y_50, ATerm t);
static ATerm y_14 (ATerm g_52, ATerm h_52, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm v_144 (ATerm u_143, ATerm t);
static ATerm w_144 (ATerm y_143, ATerm z_143, ATerm a_144, ATerm t);
static ATerm x_144 (ATerm i_144, ATerm j_144, ATerm k_144, ATerm t);
static ATerm z_14 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm k_135 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm u_11 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm h_15 (ATerm x_54, ATerm y_54, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm v_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm b_12 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm f_15 (ATerm k_36, ATerm l_36, ATerm i_36, ATerm t);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm b_15 (ATerm g_33, ATerm h_33, ATerm t);
ATerm foldr_2_0 (ATerm w_122 (ATerm), ATerm x_122 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm p_132 (ATerm), ATerm t);
static ATerm h_12 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_12 (ATerm t);
ATerm need_help_1_0 (ATerm a_135 (ATerm), ATerm t);
ATerm map_1_0 (ATerm h_117 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_117 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm e_15 (ATerm g_38, ATerm h_38, ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm m_93 (ATerm), ATerm n_93 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm d_137 (ATerm), ATerm t);
static ATerm h_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm n_13 (ATerm t);
ATerm parse_options_1_0 (ATerm c_137 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm e_135 (ATerm), ATerm f_135 (ATerm), ATerm t);
static ATerm p_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_y_13;
  return(t);
}
ATerm AddSDef_0_0 (ATerm t)
{
  ATerm o_0 = NULL,p_0 = NULL,r_0 = NULL,s_0 = NULL,t_0 = NULL;
  o_0 = t;
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDefT_4))
          {
            p_0 = ATgetArgument(t, 0);
            {
              ATerm b_14 = ATgetArgument(t, 1);
            }
            {
              ATerm c_14 = ATgetArgument(t, 2);
            }
            {
              ATerm d_14 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(a_14);
        {
          ATerm x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL;
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_0), (ATerm)ATempty, (ATerm) ATempty);
          z_0 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_14, o_0);
          a_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_0), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_e_14, o_0));
          t = i_13(u_0, z_0, a_1, t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_0), (ATerm)ATempty, (ATerm) ATempty);
          x_0 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_14, o_0);
          y_0 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_0), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_f_14, o_0));
          t = i_13(v_0, x_0, y_0, t);
          t = o_0;
        }
      }
    else
      {
        t = z_13;
        if(match_cons(t, sym_ExtSDefInl_4))
          {
            p_0 = ATgetArgument(t, 0);
            r_0 = ATgetArgument(t, 1);
            s_0 = ATgetArgument(t, 2);
            t_0 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, p_0, r_0, s_0, t_0);
        t = AddSDef_0_0(t);
        t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, p_0, r_0, s_0, t_0);
      }
  }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_g_14;
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
  t = b_15(e_1, t_1, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_g_14;
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
  t = b_15(z_1, a_2, t);
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  ATerm h_14 = t;
  int i_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_0 = NULL,m_0 = NULL;
      m_0 = t;
      t = SSL_explode_term(m_0);
      if(match_cons(t, sym__2))
        {
          ATerm j_14 = ATgetArgument(t, 0);
          a_0 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_0;
      t = foldr_3_0(w_0, b_1, term_size_0_0, t);
      LocalPopChoice(i_14);
    }
  else
    {
      t = h_14;
      {
        static ATerm m_1 (ATerm t)
        {
          ATerm u_1 = NULL,v_1 = NULL;
          v_1 = t;
          t = SSL_explode_term(v_1);
          if(match_cons(t, sym__2))
            {
              ATerm k_14 = ATgetArgument(t, 0);
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
ATerm Seq_2_0 (ATerm x_90 (ATerm), ATerm y_90 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,q_0 = NULL;
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
  t = x_90(t);
  q_1 = t;
  t = p_1;
  t = y_90(t);
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, q_1, r_1);
  q_0 = t;
  t = SSLsetAnnotations(q_0, n_1);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL,o_2 = NULL;
  o_8 = t;
  if(match_cons(t, sym_Match_1))
    {
      n_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_8);
  m_8 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, n_8);
  o_2 = t;
  t = SSLsetAnnotations(o_2, m_8);
  return(t);
}
ATerm body_to_inline_0_0 (ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL;
  static ATerm z_12 (ATerm t)
  {
    ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL,x_12 = NULL;
    s_12 = t;
    if(match_cons(t, sym_Id_0))
      {
        t = s_12;
      }
    else
      {
        if(match_cons(t, sym_Fail_0))
          {
            t = s_12;
          }
        else
          {
            if(match_cons(t, sym_CallT_3))
              {
                t_12 = ATgetArgument(t, 0);
                x_12 = ATgetArgument(t, 1);
                r_12 = ATgetArgument(t, 2);
                {
                  ATerm f_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,i_1 = NULL,d_1 = NULL;
                  t = SSLgetAnnotations(s_12);
                  f_2 = t;
                  t = t_12;
                  if(match_cons(t, sym_SVar_1))
                    {
                      k_2 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_12);
                  j_2 = t;
                  t = (ATerm) ATmakeAppl(sym_SVar_1, k_2);
                  d_1 = t;
                  t = SSLsetAnnotations(d_1, j_2);
                  l_2 = t;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, l_2, x_12, r_12);
                  i_1 = t;
                  t = SSLsetAnnotations(i_1, f_2);
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    t_12 = ATgetArgument(t, 0);
                    x_12 = ATgetArgument(t, 1);
                    r_12 = ATgetArgument(t, 2);
                    {
                      ATerm a_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,k_1 = NULL,j_1 = NULL;
                      t = SSLgetAnnotations(s_12);
                      a_4 = t;
                      t = t_12;
                      if(match_cons(t, sym_SVar_1))
                        {
                          j_4 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(t_12);
                      i_4 = t;
                      t = (ATerm) ATmakeAppl(sym_SVar_1, j_4);
                      j_1 = t;
                      t = SSLsetAnnotations(j_1, i_4);
                      k_4 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, k_4, x_12, r_12);
                      k_1 = t;
                      t = SSLsetAnnotations(k_1, a_4);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Build_1))
                      {
                        t_12 = ATgetArgument(t, 0);
                        {
                          ATerm e_5 = NULL,l_1 = NULL;
                          t = SSLgetAnnotations(s_12);
                          e_5 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, t_12);
                          l_1 = t;
                          t = SSLsetAnnotations(l_1, e_5);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            t_12 = ATgetArgument(t, 0);
                            {
                              ATerm q_6 = NULL,w_1 = NULL;
                              t = SSLgetAnnotations(s_12);
                              q_6 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, t_12);
                              w_1 = t;
                              t = SSLsetAnnotations(w_1, q_6);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                t_12 = ATgetArgument(t, 0);
                                x_12 = ATgetArgument(t, 1);
                                {
                                  ATerm l_14 = t;
                                  int m_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm q_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,y_1 = NULL,x_1 = NULL;
                                      t = SSLgetAnnotations(s_12);
                                      q_7 = t;
                                      t = t_12;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          u_7 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(t_12);
                                      t_7 = t;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, u_7);
                                      x_1 = t;
                                      t = SSLsetAnnotations(x_1, t_7);
                                      v_7 = t;
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_7, x_12);
                                      y_1 = t;
                                      t = SSLsetAnnotations(y_1, q_7);
                                      LocalPopChoice(m_14);
                                    }
                                  else
                                    {
                                      t = l_14;
                                      {
                                        ATerm d_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,r_2 = NULL,q_2 = NULL;
                                        t = SSLgetAnnotations(s_12);
                                        d_8 = t;
                                        t = t_12;
                                        if(match_cons(t, sym_Scope_2))
                                          {
                                            h_8 = ATgetArgument(t, 0);
                                            i_8 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = SSLgetAnnotations(t_12);
                                        g_8 = t;
                                        t = i_8;
                                        t = Seq_2_0(g_1, _id, t);
                                        j_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Scope_2, h_8, j_8);
                                        q_2 = t;
                                        t = SSLsetAnnotations(q_2, g_8);
                                        k_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, k_8, x_12);
                                        r_2 = t;
                                        t = SSLsetAnnotations(r_2, d_8);
                                      }
                                    }
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    t_12 = ATgetArgument(t, 0);
                                    x_12 = ATgetArgument(t, 1);
                                    {
                                      ATerm n_14 = t;
                                      int o_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm w_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,u_2 = NULL,t_2 = NULL;
                                          t = SSLgetAnnotations(s_12);
                                          w_8 = t;
                                          t = x_12;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              a_9 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = SSLgetAnnotations(x_12);
                                          z_8 = t;
                                          t = (ATerm) ATmakeAppl(sym_Match_1, a_9);
                                          t_2 = t;
                                          t = SSLsetAnnotations(t_2, z_8);
                                          b_9 = t;
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, t_12, b_9);
                                          u_2 = t;
                                          t = SSLsetAnnotations(u_2, w_8);
                                          LocalPopChoice(o_14);
                                        }
                                      else
                                        {
                                          t = n_14;
                                          {
                                            ATerm j_9 = NULL,n_9 = NULL,r_9 = NULL,s_9 = NULL,w_9 = NULL,x_9 = NULL,z_9 = NULL,a_10 = NULL,x_2 = NULL,w_2 = NULL,v_2 = NULL;
                                            t = SSLgetAnnotations(s_12);
                                            j_9 = t;
                                            t = x_12;
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                r_9 = ATgetArgument(t, 0);
                                                s_9 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(x_12);
                                            n_9 = t;
                                            t = r_9;
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                z_9 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(r_9);
                                            x_9 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, z_9);
                                            v_2 = t;
                                            t = SSLsetAnnotations(v_2, x_9);
                                            a_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, a_10, s_9);
                                            w_2 = t;
                                            t = SSLsetAnnotations(w_2, n_9);
                                            w_9 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, t_12, w_9);
                                            x_2 = t;
                                            t = SSLsetAnnotations(x_2, j_9);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Choice_2))
                                      {
                                        t_12 = ATgetArgument(t, 0);
                                        x_12 = ATgetArgument(t, 1);
                                        {
                                          ATerm p_10 = NULL,u_10 = NULL,v_10 = NULL,y_2 = NULL;
                                          t = SSLgetAnnotations(s_12);
                                          p_10 = t;
                                          t = t_12;
                                          t = z_12(t);
                                          u_10 = t;
                                          t = x_12;
                                          t = z_12(t);
                                          v_10 = t;
                                          t = (ATerm) ATmakeAppl(sym_Choice_2, u_10, v_10);
                                          y_2 = t;
                                          t = SSLsetAnnotations(y_2, p_10);
                                        }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_LChoice_2))
                                          {
                                            t_12 = ATgetArgument(t, 0);
                                            x_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm e_11 = NULL,h_11 = NULL,i_11 = NULL,z_2 = NULL;
                                              t = SSLgetAnnotations(s_12);
                                              e_11 = t;
                                              t = t_12;
                                              t = z_12(t);
                                              h_11 = t;
                                              t = x_12;
                                              t = z_12(t);
                                              i_11 = t;
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, h_11, i_11);
                                              z_2 = t;
                                              t = SSLsetAnnotations(z_2, e_11);
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_GuardedLChoice_3))
                                              {
                                                t_12 = ATgetArgument(t, 0);
                                                x_12 = ATgetArgument(t, 1);
                                                r_12 = ATgetArgument(t, 2);
                                                {
                                                  ATerm t_11 = NULL,x_11 = NULL,z_11 = NULL,a_12 = NULL,a_3 = NULL;
                                                  t = SSLgetAnnotations(s_12);
                                                  t_11 = t;
                                                  t = t_12;
                                                  t = z_12(t);
                                                  x_11 = t;
                                                  t = x_12;
                                                  t = z_12(t);
                                                  z_11 = t;
                                                  t = r_12;
                                                  t = z_12(t);
                                                  a_12 = t;
                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, x_11, z_11, a_12);
                                                  a_3 = t;
                                                  t = SSLsetAnnotations(a_3, t_11);
                                                }
                                              }
                                            else
                                              {
                                                ATerm s_13 = NULL,b_3 = NULL;
                                                if(match_cons(t, sym_Cong_2))
                                                  {
                                                    t_12 = ATgetArgument(t, 0);
                                                    x_12 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSLgetAnnotations(s_12);
                                                s_13 = t;
                                                t = (ATerm) ATmakeAppl(sym_Cong_2, t_12, x_12);
                                                b_3 = t;
                                                t = SSLsetAnnotations(b_3, s_13);
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
  t = z_12(t);
  m_2 = t;
  t = term_size_0_0(t);
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_2, term_p_14);
  t = leq_0_0(t);
  t = m_2;
  return(t);
}
ATerm inlineable_0_0 (ATerm t)
{
  ATerm g_15 = NULL,k_15 = NULL,n_15 = NULL,s_15 = NULL,t_15 = NULL;
  g_15 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      k_15 = ATgetArgument(t, 0);
      n_15 = ATgetArgument(t, 1);
      s_15 = ATgetArgument(t, 2);
      t_15 = ATgetArgument(t, 3);
      {
        ATerm a_16 = NULL,b_16 = NULL,g_16 = NULL,h_4 = NULL;
        t = SSLgetAnnotations(g_15);
        b_16 = t;
        t = k_15;
        {
          ATerm q_14 = t;
          if((PushChoice() == 0))
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = q_14;
            }
        }
        a_16 = t;
        t = t_15;
        {
          ATerm r_14 = t;
          if((PushChoice() == 0))
            {
              static ATerm h_1 (ATerm t)
              {
                if(match_cons(t, sym_CallT_3))
                  {
                    ATerm a_15 = ATgetArgument(t, 0);
                    if(match_cons(a_15, sym_SVar_1))
                      {
                        if((a_16 != ATgetArgument(a_15, 0)))
                          {
                            _fail(ATgetArgument(a_15, 0));
                          }
                      }
                    else
                      _fail(t);
                    {
                      ATerm c_15 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm d_15 = ATgetArgument(t, 2);
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
              t = r_14;
            }
        }
        t = t_15;
        t = body_to_inline_0_0(t);
        g_16 = t;
        t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, a_16, n_15, s_15, g_16);
        h_4 = t;
        t = SSLsetAnnotations(h_4, b_16);
      }
    }
  else
    {
      ATerm s_16 = NULL,t_16 = NULL,y_16 = NULL,m_4 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          k_15 = ATgetArgument(t, 0);
          n_15 = ATgetArgument(t, 1);
          s_15 = ATgetArgument(t, 2);
          t_15 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_15);
      t_16 = t;
      t = k_15;
      {
        ATerm i_15 = t;
        if((PushChoice() == 0))
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = i_15;
          }
      }
      s_16 = t;
      t = t_15;
      {
        ATerm j_15 = t;
        if((PushChoice() == 0))
          {
            static ATerm b_2 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm l_15 = ATgetArgument(t, 0);
                  if(match_cons(l_15, sym_SVar_1))
                    {
                      if((s_16 != ATgetArgument(l_15, 0)))
                        {
                          _fail(ATgetArgument(l_15, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm m_15 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm o_15 = ATgetArgument(t, 2);
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
            t = j_15;
          }
      }
      t = t_15;
      t = body_to_inline_0_0(t);
      y_16 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, s_16, n_15, s_15, y_16);
      m_4 = t;
      t = SSLsetAnnotations(m_4, t_16);
    }
  return(t);
}
static ATerm u_6 (ATerm z_36, ATerm b_37, ATerm t)
{
  ATerm w_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_36, b_37);
  t = e_15(z_36, b_37, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_15 = ATgetFirst((ATermList) t);
      {
        ATerm p_15 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_15;
  return(t);
}
ATerm bottomup_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  static ATerm c_2 (ATerm t)
  {
    t = bottomup_1_0(y_108, t);
    return(t);
  }
  t = SRTS_all(c_2, t);
  t = y_108(t);
  return(t);
}
static ATerm e_2 (ATerm t)
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
static ATerm g_2 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_15 = ATgetArgument(t, 0);
      if(((ATgetType(u_15) == AT_LIST) && !(ATisEmpty(u_15))))
        {
          g_31 = ATgetFirst((ATermList) u_15);
          h_31 = (ATerm) ATgetNext((ATermList) u_15);
        }
      else
        _fail(t);
      {
        ATerm v_15 = ATgetArgument(t, 1);
        if(((ATgetType(v_15) == AT_LIST) && !(ATisEmpty(v_15))))
          {
            i_31 = ATgetFirst((ATermList) v_15);
            j_31 = (ATerm) ATgetNext((ATermList) v_15);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_31, i_31), (ATerm) ATmakeAppl(sym__2, h_31, j_31));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL;
  if(match_cons(t, sym__2))
    {
      k_31 = ATgetArgument(t, 0);
      l_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_31), k_31);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm m_31 = NULL,p_31 = NULL;
  if(match_cons(t, sym__2))
    {
      m_31 = ATgetArgument(t, 0);
      p_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_31), (ATerm) ATmakeAppl(sym_Match_1, p_31));
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_15 = ATgetArgument(t, 0);
      if(((ATgetType(x_15) != AT_LIST) || !(ATisEmpty(x_15))))
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
static ATerm s_2 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_15 = ATgetArgument(t, 0);
      if(((ATgetType(z_15) == AT_LIST) && !(ATisEmpty(z_15))))
        {
          j_41 = ATgetFirst((ATermList) z_15);
          k_41 = (ATerm) ATgetNext((ATermList) z_15);
        }
      else
        _fail(t);
      {
        ATerm c_16 = ATgetArgument(t, 1);
        if(((ATgetType(c_16) == AT_LIST) && !(ATisEmpty(c_16))))
          {
            l_41 = ATgetFirst((ATermList) c_16);
            m_41 = (ATerm) ATgetNext((ATermList) c_16);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_41, l_41), (ATerm) ATmakeAppl(sym__2, k_41, m_41));
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL;
  if(match_cons(t, sym__2))
    {
      n_41 = ATgetArgument(t, 0);
      o_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_41), n_41);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL;
  if(match_cons(t, sym__2))
    {
      p_41 = ATgetArgument(t, 0);
      q_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_41), (ATerm) ATmakeAppl(sym_Match_1, q_41));
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm d_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm f_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(e_16);
      {
        ATerm l_59 = NULL,m_59 = NULL;
        l_59 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm h_16 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        m_59 = t;
        t = SSLgetAnnotations(l_59);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_16 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) i_16) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm j_16 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(j_16) != AT_LIST) || !(ATisEmpty(j_16))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = m_59;
      }
    }
  else
    {
      t = d_16;
      {
        ATerm k_16 = t;
        int l_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm m_16 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) m_16) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm n_16 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(l_16);
            _fail(t);
          }
        else
          {
            t = k_16;
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
    ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,m_22 = NULL,n_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,c_23 = NULL,l_23 = NULL;
    l_23 = t;
    if(match_cons(t, sym_Test_1))
      {
        c_23 = ATgetArgument(t, 0);
        t = c_23;
        if(match_cons(t, sym_Id_0))
          {
            ATerm o_16 = t;
            int p_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_q_16;
                t = d_2(t);
                LocalPopChoice(p_16);
              }
            else
              {
                t = o_16;
                {
                  ATerm r_16 = t;
                  int u_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_23 = NULL,p_23 = NULL,s_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,f_24 = NULL,k_24 = NULL,t_24 = NULL,x_24 = NULL,a_25 = NULL;
                      t = l_23;
                      t = new_0_0(t);
                      o_23 = t;
                      t = bottomup_1_0(d_2, t);
                      x_24 = t;
                      t = (ATerm) ATempty;
                      t = d_2(t);
                      a_25 = t;
                      t = (ATerm) ATinsert(CheckATermList(a_25), x_24);
                      t = d_2(t);
                      p_23 = t;
                      t = o_23;
                      t = bottomup_1_0(d_2, t);
                      t_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, t_24);
                      t = d_2(t);
                      k_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, k_24);
                      t = d_2(t);
                      u_23 = t;
                      t = c_23;
                      t = bottomup_1_0(d_2, t);
                      w_23 = t;
                      t = o_23;
                      t = bottomup_1_0(d_2, t);
                      f_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, f_24);
                      t = d_2(t);
                      y_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, y_23);
                      t = d_2(t);
                      x_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_23, x_23);
                      t = d_2(t);
                      v_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_23, v_23);
                      t = d_2(t);
                      s_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, p_23, s_23);
                      t = d_2(t);
                      LocalPopChoice(u_16);
                    }
                  else
                    {
                      t = r_16;
                      t = l_23;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm v_16 = t;
                int w_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_x_16;
                    t = d_2(t);
                    LocalPopChoice(w_16);
                  }
                else
                  {
                    t = v_16;
                    {
                      ATerm z_16 = t;
                      int a_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm h_25 = NULL,j_25 = NULL,l_25 = NULL,m_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,a_26 = NULL,b_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL;
                          t = l_23;
                          t = new_0_0(t);
                          h_25 = t;
                          t = bottomup_1_0(d_2, t);
                          h_26 = t;
                          t = (ATerm) ATempty;
                          t = d_2(t);
                          i_26 = t;
                          t = (ATerm) ATinsert(CheckATermList(i_26), h_26);
                          t = d_2(t);
                          j_25 = t;
                          t = h_25;
                          t = bottomup_1_0(d_2, t);
                          g_26 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, g_26);
                          t = d_2(t);
                          b_26 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, b_26);
                          t = d_2(t);
                          m_25 = t;
                          t = c_23;
                          t = bottomup_1_0(d_2, t);
                          r_25 = t;
                          t = h_25;
                          t = bottomup_1_0(d_2, t);
                          a_26 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, a_26);
                          t = d_2(t);
                          t_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, t_25);
                          t = d_2(t);
                          s_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, r_25, s_25);
                          t = d_2(t);
                          q_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, m_25, q_25);
                          t = d_2(t);
                          l_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, j_25, l_25);
                          t = d_2(t);
                          LocalPopChoice(a_17);
                        }
                      else
                        {
                          t = z_16;
                          t = l_23;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    s_22 = ATgetArgument(t, 0);
                    {
                      ATerm b_17 = t;
                      int c_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, s_22);
                          t = d_2(t);
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
                                ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
                                t = l_23;
                                t = new_0_0(t);
                                z_26 = t;
                                t = bottomup_1_0(d_2, t);
                                m_27 = t;
                                t = (ATerm) ATempty;
                                t = d_2(t);
                                n_27 = t;
                                t = (ATerm) ATinsert(CheckATermList(n_27), m_27);
                                t = d_2(t);
                                a_27 = t;
                                t = z_26;
                                t = bottomup_1_0(d_2, t);
                                l_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, l_27);
                                t = d_2(t);
                                k_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, k_27);
                                t = d_2(t);
                                c_27 = t;
                                t = c_23;
                                t = bottomup_1_0(d_2, t);
                                e_27 = t;
                                t = z_26;
                                t = bottomup_1_0(d_2, t);
                                j_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, j_27);
                                t = d_2(t);
                                g_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, g_27);
                                t = d_2(t);
                                f_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, e_27, f_27);
                                t = d_2(t);
                                d_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, c_27, d_27);
                                t = d_2(t);
                                b_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, a_27, b_27);
                                t = d_2(t);
                                LocalPopChoice(e_17);
                              }
                            else
                              {
                                t = d_17;
                                t = l_23;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm f_17 = t;
                    int g_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,u_27 = NULL,v_27 = NULL,y_27 = NULL,a_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL;
                        t = l_23;
                        t = new_0_0(t);
                        q_27 = t;
                        t = bottomup_1_0(d_2, t);
                        j_28 = t;
                        t = (ATerm) ATempty;
                        t = d_2(t);
                        k_28 = t;
                        t = (ATerm) ATinsert(CheckATermList(k_28), j_28);
                        t = d_2(t);
                        r_27 = t;
                        t = q_27;
                        t = bottomup_1_0(d_2, t);
                        i_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, i_28);
                        t = d_2(t);
                        h_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, h_28);
                        t = d_2(t);
                        u_27 = t;
                        t = c_23;
                        t = bottomup_1_0(d_2, t);
                        y_27 = t;
                        t = q_27;
                        t = bottomup_1_0(d_2, t);
                        g_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, g_28);
                        t = d_2(t);
                        f_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, f_28);
                        t = d_2(t);
                        a_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, y_27, a_28);
                        t = d_2(t);
                        v_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, u_27, v_27);
                        t = d_2(t);
                        s_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, r_27, s_27);
                        t = d_2(t);
                        LocalPopChoice(g_17);
                      }
                    else
                      {
                        t = f_17;
                        t = l_23;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            c_23 = ATgetArgument(t, 0);
            t = c_23;
            if(match_cons(t, sym_Id_0))
              {
                ATerm h_17 = t;
                int i_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_x_16;
                    t = d_2(t);
                    LocalPopChoice(i_17);
                  }
                else
                  {
                    t = h_17;
                    t = l_23;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm k_17 = t;
                    int l_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_q_16;
                        t = d_2(t);
                        LocalPopChoice(l_17);
                      }
                    else
                      {
                        t = k_17;
                        t = l_23;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        s_22 = ATgetArgument(t, 0);
                        {
                          ATerm m_17 = t;
                          int n_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, s_22);
                              t = d_2(t);
                              LocalPopChoice(n_17);
                            }
                          else
                            {
                              t = m_17;
                              t = l_23;
                            }
                        }
                      }
                    else
                      {
                        t = l_23;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                c_23 = ATgetArgument(t, 0);
                u_22 = ATgetArgument(t, 1);
                t = u_22;
                if(match_cons(t, sym_Id_0))
                  {
                    t = c_23;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = u_22;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = c_23;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                s_22 = ATgetArgument(t, 0);
                                t_22 = ATgetArgument(t, 1);
                                t = c_23;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    s_22 = ATgetArgument(t, 0);
                                    t_22 = ATgetArgument(t, 1);
                                    t = c_23;
                                  }
                                else
                                  {
                                    t = c_23;
                                  }
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
                        t = m_22;
                        if(match_cons(t, sym_Match_1))
                          {
                            j_22 = ATgetArgument(t, 0);
                            t = j_22;
                            if(match_cons(t, sym_Op_2))
                              {
                                h_22 = ATgetArgument(t, 0);
                                b_22 = ATgetArgument(t, 1);
                                t = c_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = u_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm o_17 = t;
                                        int p_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_x_16;
                                            t = d_2(t);
                                            LocalPopChoice(p_17);
                                          }
                                        else
                                          {
                                            t = o_17;
                                            t = l_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            s_22 = ATgetArgument(t, 0);
                                            t_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm r_17 = t;
                                              int s_17 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm n_30 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                  t = d_2(t);
                                                  n_30 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, s_22, n_30);
                                                  t = d_2(t);
                                                  LocalPopChoice(s_17);
                                                }
                                              else
                                                {
                                                  t = r_17;
                                                  t = l_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                s_22 = ATgetArgument(t, 0);
                                                t = s_22;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    i_22 = ATgetArgument(t, 0);
                                                    c_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm t_17 = t;
                                                      int u_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, i_22, h_22);
                                                          {
                                                            ATerm v_17 = t;
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
                                                                t = v_17;
                                                              }
                                                          }
                                                          t = term_x_16;
                                                          t = bottomup_1_0(d_2, t);
                                                          LocalPopChoice(u_17);
                                                        }
                                                      else
                                                        {
                                                          t = t_17;
                                                          {
                                                            ATerm w_17 = t;
                                                            int x_17 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm f_31 = NULL;
                                                                t = h_22;
                                                                if((i_22 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, c_22, b_22);
                                                                t = genzip_4_0(e_2, g_2, h_2, i_2, t);
                                                                f_31 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, f_31), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, i_22, c_22)), n_22));
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(x_17);
                                                              }
                                                            else
                                                              {
                                                                t = w_17;
                                                                {
                                                                  ATerm y_17 = t;
                                                                  int z_17 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm s_31 = NULL;
                                                                      t = j_22;
                                                                      if((s_22 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, s_22);
                                                                      t = d_2(t);
                                                                      s_31 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_31, n_22);
                                                                      t = d_2(t);
                                                                      LocalPopChoice(z_17);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = y_17;
                                                                      t = l_23;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm a_18 = t;
                                                    int b_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm k_32 = NULL;
                                                        t = j_22;
                                                        if((s_22 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, s_22);
                                                        t = d_2(t);
                                                        k_32 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, k_32, n_22);
                                                        t = d_2(t);
                                                        LocalPopChoice(b_18);
                                                      }
                                                    else
                                                      {
                                                        t = a_18;
                                                        t = l_23;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    s_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm c_18 = t;
                                                      int f_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm z_32 = NULL;
                                                          t = j_22;
                                                          if((s_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, s_22);
                                                          t = d_2(t);
                                                          z_32 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, z_32, n_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(f_18);
                                                        }
                                                      else
                                                        {
                                                          t = c_18;
                                                          t = l_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        s_22 = ATgetArgument(t, 0);
                                                        t_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm g_18 = t;
                                                          int i_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm k_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                              t = d_2(t);
                                                              k_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, k_33);
                                                              t = d_2(t);
                                                              LocalPopChoice(i_18);
                                                            }
                                                          else
                                                            {
                                                              t = g_18;
                                                              t = l_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = l_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = c_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = u_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm j_18 = t;
                                        int k_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_x_16;
                                            t = d_2(t);
                                            LocalPopChoice(k_18);
                                          }
                                        else
                                          {
                                            t = j_18;
                                            t = l_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            s_22 = ATgetArgument(t, 0);
                                            t_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm l_18 = t;
                                              int n_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm t_33 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                  t = d_2(t);
                                                  t_33 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, s_22, t_33);
                                                  t = d_2(t);
                                                  LocalPopChoice(n_18);
                                                }
                                              else
                                                {
                                                  t = l_18;
                                                  t = l_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                s_22 = ATgetArgument(t, 0);
                                                {
                                                  ATerm o_18 = t;
                                                  int r_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_33 = NULL;
                                                      t = j_22;
                                                      if((s_22 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, s_22);
                                                      t = d_2(t);
                                                      x_33 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_33, n_22);
                                                      t = d_2(t);
                                                      LocalPopChoice(r_18);
                                                    }
                                                  else
                                                    {
                                                      t = o_18;
                                                      t = l_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    s_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm y_18 = t;
                                                      int a_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm b_34 = NULL;
                                                          t = j_22;
                                                          if((s_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_22);
                                                          t = d_2(t);
                                                          b_34 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_34, n_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(a_19);
                                                        }
                                                      else
                                                        {
                                                          t = y_18;
                                                          t = l_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        s_22 = ATgetArgument(t, 0);
                                                        t_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm f_19 = t;
                                                          int g_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                              t = d_2(t);
                                                              g_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, g_34);
                                                              t = d_2(t);
                                                              LocalPopChoice(g_19);
                                                            }
                                                          else
                                                            {
                                                              t = f_19;
                                                              t = l_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = l_23;
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
                                    h_22 = ATgetArgument(t, 0);
                                    t = c_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = u_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm h_19 = t;
                                            int i_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_x_16;
                                                t = d_2(t);
                                                LocalPopChoice(i_19);
                                              }
                                            else
                                              {
                                                t = h_19;
                                                t = l_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                s_22 = ATgetArgument(t, 0);
                                                t_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm j_19 = t;
                                                  int k_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm a_35 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                      t = d_2(t);
                                                      a_35 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_22, a_35);
                                                      t = d_2(t);
                                                      LocalPopChoice(k_19);
                                                    }
                                                  else
                                                    {
                                                      t = j_19;
                                                      t = l_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm l_19 = t;
                                                int m_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm n_19 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(m_19);
                                                    {
                                                      ATerm o_19 = t;
                                                      int p_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm f_35 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, j_22);
                                                          t = d_2(t);
                                                          f_35 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_35, n_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(p_19);
                                                        }
                                                      else
                                                        {
                                                          t = o_19;
                                                          t = l_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = l_19;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        s_22 = ATgetArgument(t, 0);
                                                        t = s_22;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            i_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm q_19 = t;
                                                              int r_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm j_35 = NULL,k_35 = NULL;
                                                                  t = h_22;
                                                                  if((i_22 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, i_22);
                                                                  t = d_2(t);
                                                                  k_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, k_35);
                                                                  t = d_2(t);
                                                                  j_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, j_35, n_22);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(r_19);
                                                                }
                                                              else
                                                                {
                                                                  t = q_19;
                                                                  t = l_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = l_23;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            s_22 = ATgetArgument(t, 0);
                                                            t_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm s_19 = t;
                                                              int u_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm x_35 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                                  t = d_2(t);
                                                                  x_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, x_35);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(u_19);
                                                                }
                                                              else
                                                                {
                                                                  t = s_19;
                                                                  t = l_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = l_23;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = c_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = u_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm v_19 = t;
                                            int w_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_x_16;
                                                t = d_2(t);
                                                LocalPopChoice(w_19);
                                              }
                                            else
                                              {
                                                t = v_19;
                                                t = l_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                s_22 = ATgetArgument(t, 0);
                                                t_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm z_19 = t;
                                                  int g_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_36 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                      t = d_2(t);
                                                      t_36 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_22, t_36);
                                                      t = d_2(t);
                                                      LocalPopChoice(g_20);
                                                    }
                                                  else
                                                    {
                                                      t = z_19;
                                                      t = l_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm i_20 = t;
                                                int l_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm m_20 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(l_20);
                                                    {
                                                      ATerm n_20 = t;
                                                      int o_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm j_37 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, j_22);
                                                          t = d_2(t);
                                                          j_37 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_37, n_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(o_20);
                                                        }
                                                      else
                                                        {
                                                          t = n_20;
                                                          t = l_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = i_20;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        s_22 = ATgetArgument(t, 0);
                                                        t_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm p_20 = t;
                                                          int q_20 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm w_37 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                              t = d_2(t);
                                                              w_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, w_37);
                                                              t = d_2(t);
                                                              LocalPopChoice(q_20);
                                                            }
                                                          else
                                                            {
                                                              t = p_20;
                                                              t = l_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = l_23;
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
                                    d_22 = ATgetArgument(t, 1);
                                    f_22 = ATgetArgument(t, 2);
                                    t = c_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = u_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm r_20 = t;
                                            int s_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_x_16;
                                                t = d_2(t);
                                                LocalPopChoice(s_20);
                                              }
                                            else
                                              {
                                                t = r_20;
                                                t = l_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                s_22 = ATgetArgument(t, 0);
                                                t_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm t_20 = t;
                                                  int u_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm v_38 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                      t = d_2(t);
                                                      v_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_22, v_38);
                                                      t = d_2(t);
                                                      LocalPopChoice(u_20);
                                                    }
                                                  else
                                                    {
                                                      t = t_20;
                                                      t = l_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm v_20 = t;
                                                int w_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm x_20 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(w_20);
                                                    {
                                                      ATerm y_20 = t;
                                                      int z_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm b_39 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, j_22, d_22, f_22);
                                                          t = d_2(t);
                                                          b_39 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_39, n_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(z_20);
                                                        }
                                                      else
                                                        {
                                                          t = y_20;
                                                          t = l_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = v_20;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        s_22 = ATgetArgument(t, 0);
                                                        t_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm a_21 = t;
                                                          int b_21 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_39 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                              t = d_2(t);
                                                              n_39 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, n_39);
                                                              t = d_2(t);
                                                              LocalPopChoice(b_21);
                                                            }
                                                          else
                                                            {
                                                              t = a_21;
                                                              t = l_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = l_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = c_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = u_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm c_21 = t;
                                            int d_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_x_16;
                                                t = d_2(t);
                                                LocalPopChoice(d_21);
                                              }
                                            else
                                              {
                                                t = c_21;
                                                t = l_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                s_22 = ATgetArgument(t, 0);
                                                t_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm e_21 = t;
                                                  int f_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm g_40 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                      t = d_2(t);
                                                      g_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_22, g_40);
                                                      t = d_2(t);
                                                      LocalPopChoice(f_21);
                                                    }
                                                  else
                                                    {
                                                      t = e_21;
                                                      t = l_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    s_22 = ATgetArgument(t, 0);
                                                    t_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm g_21 = t;
                                                      int h_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm p_40 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                          t = d_2(t);
                                                          p_40 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, p_40);
                                                          t = d_2(t);
                                                          LocalPopChoice(h_21);
                                                        }
                                                      else
                                                        {
                                                          t = g_21;
                                                          t = l_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = l_23;
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
                            m_22 = ATgetArgument(t, 0);
                            t = m_22;
                            if(match_cons(t, sym_Op_2))
                              {
                                j_22 = ATgetArgument(t, 0);
                                d_22 = ATgetArgument(t, 1);
                                t = c_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = u_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm j_21 = t;
                                        int k_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_x_16;
                                            t = d_2(t);
                                            LocalPopChoice(k_21);
                                          }
                                        else
                                          {
                                            t = j_21;
                                            t = l_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            s_22 = ATgetArgument(t, 0);
                                            t_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm l_21 = t;
                                              int m_21 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm a_41 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                  t = d_2(t);
                                                  a_41 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, s_22, a_41);
                                                  t = d_2(t);
                                                  LocalPopChoice(m_21);
                                                }
                                              else
                                                {
                                                  t = l_21;
                                                  t = l_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                s_22 = ATgetArgument(t, 0);
                                                t = s_22;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    i_22 = ATgetArgument(t, 0);
                                                    c_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm n_21 = t;
                                                      int p_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, i_22, j_22);
                                                          {
                                                            ATerm q_21 = t;
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
                                                                t = q_21;
                                                              }
                                                          }
                                                          t = term_x_16;
                                                          t = bottomup_1_0(d_2, t);
                                                          LocalPopChoice(p_21);
                                                        }
                                                      else
                                                        {
                                                          t = n_21;
                                                          {
                                                            ATerm r_21 = t;
                                                            int s_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm g_41 = NULL;
                                                                t = j_22;
                                                                if((i_22 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, c_22, d_22);
                                                                t = genzip_4_0(p_2, s_2, c_3, d_3, t);
                                                                g_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_41), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, i_22, c_22)));
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(s_21);
                                                              }
                                                            else
                                                              {
                                                                t = r_21;
                                                                {
                                                                  ATerm y_21 = t;
                                                                  int r_22 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = m_22;
                                                                      if((s_22 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, s_22);
                                                                      t = d_2(t);
                                                                      LocalPopChoice(r_22);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = y_21;
                                                                      t = l_23;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm w_22 = t;
                                                    int z_22 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = m_22;
                                                        if((s_22 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, s_22);
                                                        t = d_2(t);
                                                        LocalPopChoice(z_22);
                                                      }
                                                    else
                                                      {
                                                        t = w_22;
                                                        t = l_23;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    s_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm a_23 = t;
                                                      int b_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = m_22;
                                                          if((s_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, s_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(b_23);
                                                        }
                                                      else
                                                        {
                                                          t = a_23;
                                                          t = l_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        s_22 = ATgetArgument(t, 0);
                                                        t_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm d_23 = t;
                                                          int e_23 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm t_43 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                              t = d_2(t);
                                                              t_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, t_43);
                                                              t = d_2(t);
                                                              LocalPopChoice(e_23);
                                                            }
                                                          else
                                                            {
                                                              t = d_23;
                                                              t = l_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = l_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = c_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = u_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm f_23 = t;
                                        int g_23 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_x_16;
                                            t = d_2(t);
                                            LocalPopChoice(g_23);
                                          }
                                        else
                                          {
                                            t = f_23;
                                            t = l_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            s_22 = ATgetArgument(t, 0);
                                            t_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm h_23 = t;
                                              int i_23 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm i_44 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                  t = d_2(t);
                                                  i_44 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, s_22, i_44);
                                                  t = d_2(t);
                                                  LocalPopChoice(i_23);
                                                }
                                              else
                                                {
                                                  t = h_23;
                                                  t = l_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                s_22 = ATgetArgument(t, 0);
                                                {
                                                  ATerm j_23 = t;
                                                  int k_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = m_22;
                                                      if((s_22 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, s_22);
                                                      t = d_2(t);
                                                      LocalPopChoice(k_23);
                                                    }
                                                  else
                                                    {
                                                      t = j_23;
                                                      t = l_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    s_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm m_23 = t;
                                                      int n_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = m_22;
                                                          if((s_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(n_23);
                                                        }
                                                      else
                                                        {
                                                          t = m_23;
                                                          t = l_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        s_22 = ATgetArgument(t, 0);
                                                        t_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm q_23 = t;
                                                          int t_23 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_45 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                              t = d_2(t);
                                                              g_45 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, g_45);
                                                              t = d_2(t);
                                                              LocalPopChoice(t_23);
                                                            }
                                                          else
                                                            {
                                                              t = q_23;
                                                              t = l_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = l_23;
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
                                m_22 = ATgetArgument(t, 0);
                                t = m_22;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    j_22 = ATgetArgument(t, 0);
                                    t = c_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = u_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm z_23 = t;
                                            int a_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_x_16;
                                                t = d_2(t);
                                                LocalPopChoice(a_24);
                                              }
                                            else
                                              {
                                                t = z_23;
                                                t = l_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                s_22 = ATgetArgument(t, 0);
                                                t_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm b_24 = t;
                                                  int e_24 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm u_45 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                      t = d_2(t);
                                                      u_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_22, u_45);
                                                      t = d_2(t);
                                                      LocalPopChoice(e_24);
                                                    }
                                                  else
                                                    {
                                                      t = b_24;
                                                      t = l_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm n_24 = t;
                                                int p_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm v_24 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(p_24);
                                                    {
                                                      ATerm w_24 = t;
                                                      int y_24 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, m_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(y_24);
                                                        }
                                                      else
                                                        {
                                                          t = w_24;
                                                          t = l_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = n_24;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        s_22 = ATgetArgument(t, 0);
                                                        t = s_22;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            i_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm z_24 = t;
                                                              int b_25 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm h_46 = NULL;
                                                                  t = j_22;
                                                                  if((i_22 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, i_22);
                                                                  t = d_2(t);
                                                                  h_46 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, h_46);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(b_25);
                                                                }
                                                              else
                                                                {
                                                                  t = z_24;
                                                                  t = l_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = l_23;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            s_22 = ATgetArgument(t, 0);
                                                            t_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm c_25 = t;
                                                              int d_25 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm q_46 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                                  t = d_2(t);
                                                                  q_46 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, q_46);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(d_25);
                                                                }
                                                              else
                                                                {
                                                                  t = c_25;
                                                                  t = l_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = l_23;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = c_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = u_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm e_25 = t;
                                            int f_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_x_16;
                                                t = d_2(t);
                                                LocalPopChoice(f_25);
                                              }
                                            else
                                              {
                                                t = e_25;
                                                t = l_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                s_22 = ATgetArgument(t, 0);
                                                t_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm g_25 = t;
                                                  int i_25 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm f_47 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                      t = d_2(t);
                                                      f_47 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_22, f_47);
                                                      t = d_2(t);
                                                      LocalPopChoice(i_25);
                                                    }
                                                  else
                                                    {
                                                      t = g_25;
                                                      t = l_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm k_25 = t;
                                                int n_25 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm v_25 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(n_25);
                                                    {
                                                      ATerm w_25 = t;
                                                      int y_25 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, m_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(y_25);
                                                        }
                                                      else
                                                        {
                                                          t = w_25;
                                                          t = l_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = k_25;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        s_22 = ATgetArgument(t, 0);
                                                        t_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm z_25 = t;
                                                          int c_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_47 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                              t = d_2(t);
                                                              r_47 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, r_47);
                                                              t = d_2(t);
                                                              LocalPopChoice(c_26);
                                                            }
                                                          else
                                                            {
                                                              t = z_25;
                                                              t = l_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = l_23;
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
                                    m_22 = ATgetArgument(t, 0);
                                    n_22 = ATgetArgument(t, 1);
                                    g_22 = ATgetArgument(t, 2);
                                    t = c_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = u_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm d_26 = t;
                                            int e_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_x_16;
                                                t = d_2(t);
                                                LocalPopChoice(e_26);
                                              }
                                            else
                                              {
                                                t = d_26;
                                                t = l_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                s_22 = ATgetArgument(t, 0);
                                                t_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm f_26 = t;
                                                  int j_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm g_48 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                      t = d_2(t);
                                                      g_48 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_22, g_48);
                                                      t = d_2(t);
                                                      LocalPopChoice(j_26);
                                                    }
                                                  else
                                                    {
                                                      t = f_26;
                                                      t = l_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm l_26 = t;
                                                int m_26 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm n_26 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(m_26);
                                                    {
                                                      ATerm o_26 = t;
                                                      int r_26 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, m_22, n_22, g_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(r_26);
                                                        }
                                                      else
                                                        {
                                                          t = o_26;
                                                          t = l_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = l_26;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        s_22 = ATgetArgument(t, 0);
                                                        t_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm s_26 = t;
                                                          int t_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm s_48 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                              t = d_2(t);
                                                              s_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, s_48);
                                                              t = d_2(t);
                                                              LocalPopChoice(t_26);
                                                            }
                                                          else
                                                            {
                                                              t = s_26;
                                                              t = l_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = l_23;
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
                                        m_22 = ATgetArgument(t, 0);
                                        n_22 = ATgetArgument(t, 1);
                                        t = c_23;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = u_22;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm u_26 = t;
                                                int v_26 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_x_16;
                                                    t = d_2(t);
                                                    LocalPopChoice(v_26);
                                                  }
                                                else
                                                  {
                                                    t = u_26;
                                                    {
                                                      ATerm w_26 = t;
                                                      int x_26 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm p_49 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_23, n_22);
                                                          t = d_2(t);
                                                          p_49 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, m_22, p_49);
                                                          t = d_2(t);
                                                          LocalPopChoice(x_26);
                                                        }
                                                      else
                                                        {
                                                          t = w_26;
                                                          t = l_23;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    s_22 = ATgetArgument(t, 0);
                                                    t_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm y_26 = t;
                                                      int h_27 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm z_49 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                          t = d_2(t);
                                                          z_49 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, s_22, z_49);
                                                          t = d_2(t);
                                                          LocalPopChoice(h_27);
                                                        }
                                                      else
                                                        {
                                                          t = y_26;
                                                          {
                                                            ATerm o_27 = t;
                                                            int p_27 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm f_50 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, c_23, n_22);
                                                                t = d_2(t);
                                                                f_50 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, m_22, f_50);
                                                                t = d_2(t);
                                                                LocalPopChoice(p_27);
                                                              }
                                                            else
                                                              {
                                                                t = o_27;
                                                                t = l_23;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        s_22 = ATgetArgument(t, 0);
                                                        t_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_27 = t;
                                                          int w_27 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm v_50 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, c_23, n_22);
                                                              t = d_2(t);
                                                              v_50 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, m_22, v_50);
                                                              t = d_2(t);
                                                              LocalPopChoice(w_27);
                                                            }
                                                          else
                                                            {
                                                              t = t_27;
                                                              {
                                                                ATerm x_27 = t;
                                                                int d_28 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm i_51 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                                    t = d_2(t);
                                                                    i_51 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, i_51);
                                                                    t = d_2(t);
                                                                    LocalPopChoice(d_28);
                                                                  }
                                                                else
                                                                  {
                                                                    t = x_27;
                                                                    t = l_23;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm e_28 = t;
                                                        int l_28 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm r_51 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, c_23, n_22);
                                                            t = d_2(t);
                                                            r_51 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, m_22, r_51);
                                                            t = d_2(t);
                                                            LocalPopChoice(l_28);
                                                          }
                                                        else
                                                          {
                                                            t = e_28;
                                                            t = l_23;
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
                                            m_22 = ATgetArgument(t, 0);
                                            n_22 = ATgetArgument(t, 1);
                                            t = c_23;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = u_22;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm m_28 = t;
                                                    int n_28 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_x_16;
                                                        t = d_2(t);
                                                        LocalPopChoice(n_28);
                                                      }
                                                    else
                                                      {
                                                        t = m_28;
                                                        {
                                                          ATerm o_28 = t;
                                                          int p_28 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm t_52 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, c_23, n_22);
                                                              t = d_2(t);
                                                              t_52 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, t_52);
                                                              t = d_2(t);
                                                              LocalPopChoice(p_28);
                                                            }
                                                          else
                                                            {
                                                              t = o_28;
                                                              t = l_23;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        s_22 = ATgetArgument(t, 0);
                                                        t_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm q_28 = t;
                                                          int r_28 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm e_53 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                              t = d_2(t);
                                                              e_53 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, s_22, e_53);
                                                              t = d_2(t);
                                                              LocalPopChoice(r_28);
                                                            }
                                                          else
                                                            {
                                                              t = q_28;
                                                              {
                                                                ATerm s_28 = t;
                                                                int t_28 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm i_53 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, c_23, n_22);
                                                                    t = d_2(t);
                                                                    i_53 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, i_53);
                                                                    t = d_2(t);
                                                                    LocalPopChoice(t_28);
                                                                  }
                                                                else
                                                                  {
                                                                    t = s_28;
                                                                    t = l_23;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            s_22 = ATgetArgument(t, 0);
                                                            t_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm u_28 = t;
                                                              int v_28 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm t_53 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, c_23, n_22);
                                                                  t = d_2(t);
                                                                  t_53 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, t_53);
                                                                  t = d_2(t);
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
                                                                        ATerm f_54 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                                        t = d_2(t);
                                                                        f_54 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, f_54);
                                                                        t = d_2(t);
                                                                        LocalPopChoice(x_28);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = w_28;
                                                                        t = l_23;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm y_28 = t;
                                                            int z_28 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm c_55 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, c_23, n_22);
                                                                t = d_2(t);
                                                                c_55 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, c_55);
                                                                t = d_2(t);
                                                                LocalPopChoice(z_28);
                                                              }
                                                            else
                                                              {
                                                                t = y_28;
                                                                t = l_23;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = c_23;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = u_22;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm a_29 = t;
                                                    int b_29 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_x_16;
                                                        t = d_2(t);
                                                        LocalPopChoice(b_29);
                                                      }
                                                    else
                                                      {
                                                        t = a_29;
                                                        t = l_23;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        s_22 = ATgetArgument(t, 0);
                                                        t_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm c_29 = t;
                                                          int d_29 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_56 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                              t = d_2(t);
                                                              a_56 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, s_22, a_56);
                                                              t = d_2(t);
                                                              LocalPopChoice(d_29);
                                                            }
                                                          else
                                                            {
                                                              t = c_29;
                                                              t = l_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            s_22 = ATgetArgument(t, 0);
                                                            t_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm f_29 = t;
                                                              int g_29 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm h_56 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, u_22);
                                                                  t = d_2(t);
                                                                  h_56 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, h_56);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(g_29);
                                                                }
                                                              else
                                                                {
                                                                  t = f_29;
                                                                  t = l_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = l_23;
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
                    c_23 = ATgetArgument(t, 0);
                    u_22 = ATgetArgument(t, 1);
                    t = u_22;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = c_23;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm h_29 = t;
                            int i_29 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_q_16;
                                t = d_2(t);
                                LocalPopChoice(i_29);
                              }
                            else
                              {
                                t = h_29;
                                t = c_23;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = u_22;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    s_22 = ATgetArgument(t, 0);
                                    t_22 = ATgetArgument(t, 1);
                                    t = c_23;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        s_22 = ATgetArgument(t, 0);
                                        t = c_23;
                                      }
                                    else
                                      {
                                        t = c_23;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = c_23;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm j_29 = t;
                            int k_29 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_q_16;
                                t = d_2(t);
                                LocalPopChoice(k_29);
                              }
                            else
                              {
                                t = j_29;
                                {
                                  ATerm l_29 = t;
                                  int m_29 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = u_22;
                                      if((c_23 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(m_29);
                                    }
                                  else
                                    {
                                      t = l_29;
                                      t = l_23;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = u_22;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    s_22 = ATgetArgument(t, 0);
                                    t_22 = ATgetArgument(t, 1);
                                    {
                                      ATerm p_29 = t;
                                      int q_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm f_59 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, t_22, u_22);
                                          t = d_2(t);
                                          f_59 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, s_22, f_59);
                                          t = d_2(t);
                                          LocalPopChoice(q_29);
                                        }
                                      else
                                        {
                                          t = p_29;
                                          {
                                            ATerm r_29 = t;
                                            int s_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = u_22;
                                                if((c_23 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(s_29);
                                              }
                                            else
                                              {
                                                t = r_29;
                                                t = l_23;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        s_22 = ATgetArgument(t, 0);
                                        {
                                          ATerm t_29 = t;
                                          int u_29 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = u_22;
                                              if((c_23 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(u_29);
                                            }
                                          else
                                            {
                                              t = t_29;
                                              {
                                                ATerm v_29 = t;
                                                int w_29 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = s_22;
                                                    t = topdown_1_0(e_3, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, s_22);
                                                    t = bottomup_1_0(d_2, t);
                                                    LocalPopChoice(w_29);
                                                  }
                                                else
                                                  {
                                                    t = v_29;
                                                    t = l_23;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm z_29 = t;
                                        int a_30 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = u_22;
                                            if((c_23 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(a_30);
                                          }
                                        else
                                          {
                                            t = z_29;
                                            t = l_23;
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
                        c_23 = ATgetArgument(t, 0);
                        u_22 = ATgetArgument(t, 1);
                        t = u_22;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = c_23;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm b_30 = t;
                                int c_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_q_16;
                                    t = d_2(t);
                                    LocalPopChoice(c_30);
                                  }
                                else
                                  {
                                    t = b_30;
                                    t = u_22;
                                  }
                              }
                            else
                              {
                                ATerm d_30 = t;
                                int e_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_q_16;
                                    t = d_2(t);
                                    LocalPopChoice(e_30);
                                  }
                                else
                                  {
                                    t = d_30;
                                    t = l_23;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = c_23;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm f_30 = t;
                                    int g_30 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_x_16;
                                        t = d_2(t);
                                        LocalPopChoice(g_30);
                                      }
                                    else
                                      {
                                        t = f_30;
                                        t = u_22;
                                      }
                                  }
                                else
                                  {
                                    ATerm h_30 = t;
                                    int i_30 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_x_16;
                                        t = d_2(t);
                                        LocalPopChoice(i_30);
                                      }
                                    else
                                      {
                                        t = h_30;
                                        t = l_23;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    m_22 = ATgetArgument(t, 0);
                                    n_22 = ATgetArgument(t, 1);
                                    t = c_23;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = u_22;
                                      }
                                    else
                                      {
                                        ATerm j_30 = t;
                                        int k_30 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm y_60 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, c_23, m_22);
                                            t = conc_0_0(t);
                                            y_60 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, y_60, n_22);
                                            t = bottomup_1_0(d_2, t);
                                            LocalPopChoice(k_30);
                                          }
                                        else
                                          {
                                            t = j_30;
                                            t = l_23;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = c_23;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = u_22;
                                      }
                                    else
                                      {
                                        t = l_23;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm l_30 = t;
                        int m_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm o_30 = ATgetArgument(t, 0);
                                u_22 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(m_30);
                            t = u_22;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm p_30 = t;
                                int q_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_q_16;
                                    t = d_2(t);
                                    LocalPopChoice(q_30);
                                  }
                                else
                                  {
                                    t = p_30;
                                    t = l_23;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm r_30 = t;
                                    int s_30 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_x_16;
                                        t = d_2(t);
                                        LocalPopChoice(s_30);
                                      }
                                    else
                                      {
                                        t = r_30;
                                        t = l_23;
                                      }
                                  }
                                else
                                  {
                                    t = l_23;
                                  }
                              }
                          }
                        else
                          {
                            t = l_30;
                            if(match_cons(t, sym_All_1))
                              {
                                c_23 = ATgetArgument(t, 0);
                                t = c_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm u_30 = t;
                                    int v_30 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_q_16;
                                        t = d_2(t);
                                        LocalPopChoice(v_30);
                                      }
                                    else
                                      {
                                        t = u_30;
                                        t = l_23;
                                      }
                                  }
                                else
                                  {
                                    t = l_23;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    c_23 = ATgetArgument(t, 0);
                                    t = c_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm w_30 = t;
                                        int x_30 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_q_16;
                                            t = d_2(t);
                                            LocalPopChoice(x_30);
                                          }
                                        else
                                          {
                                            t = w_30;
                                            {
                                              ATerm y_30 = t;
                                              int b_31 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm p_61 = NULL,q_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,m_62 = NULL,n_62 = NULL,q_62 = NULL,r_62 = NULL,y_62 = NULL,z_62 = NULL,b_63 = NULL,f_63 = NULL;
                                                  t = l_23;
                                                  t = new_0_0(t);
                                                  p_61 = t;
                                                  t = bottomup_1_0(d_2, t);
                                                  b_63 = t;
                                                  t = (ATerm) ATempty;
                                                  t = d_2(t);
                                                  f_63 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(f_63), b_63);
                                                  t = d_2(t);
                                                  q_61 = t;
                                                  t = p_61;
                                                  t = bottomup_1_0(d_2, t);
                                                  z_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, z_62);
                                                  t = d_2(t);
                                                  y_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, y_62);
                                                  t = d_2(t);
                                                  b_62 = t;
                                                  t = c_23;
                                                  t = bottomup_1_0(d_2, t);
                                                  m_62 = t;
                                                  t = p_61;
                                                  t = bottomup_1_0(d_2, t);
                                                  r_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, r_62);
                                                  t = d_2(t);
                                                  q_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, q_62);
                                                  t = d_2(t);
                                                  n_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_62, n_62);
                                                  t = d_2(t);
                                                  c_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_62, c_62);
                                                  t = d_2(t);
                                                  a_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, q_61, a_62);
                                                  t = d_2(t);
                                                  LocalPopChoice(b_31);
                                                }
                                              else
                                                {
                                                  t = y_30;
                                                  t = l_23;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm c_31 = t;
                                            int d_31 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_x_16;
                                                t = d_2(t);
                                                LocalPopChoice(d_31);
                                              }
                                            else
                                              {
                                                t = c_31;
                                                {
                                                  ATerm e_31 = t;
                                                  int n_31 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,x_63 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL;
                                                      t = l_23;
                                                      t = new_0_0(t);
                                                      k_63 = t;
                                                      t = bottomup_1_0(d_2, t);
                                                      l_64 = t;
                                                      t = (ATerm) ATempty;
                                                      t = d_2(t);
                                                      m_64 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(m_64), l_64);
                                                      t = d_2(t);
                                                      l_63 = t;
                                                      t = k_63;
                                                      t = bottomup_1_0(d_2, t);
                                                      k_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, k_64);
                                                      t = d_2(t);
                                                      d_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, d_64);
                                                      t = d_2(t);
                                                      r_63 = t;
                                                      t = c_23;
                                                      t = bottomup_1_0(d_2, t);
                                                      t_63 = t;
                                                      t = k_63;
                                                      t = bottomup_1_0(d_2, t);
                                                      c_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, c_64);
                                                      t = d_2(t);
                                                      b_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, b_64);
                                                      t = d_2(t);
                                                      x_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_63, x_63);
                                                      t = d_2(t);
                                                      s_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, r_63, s_63);
                                                      t = d_2(t);
                                                      m_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, l_63, m_63);
                                                      t = d_2(t);
                                                      LocalPopChoice(n_31);
                                                    }
                                                  else
                                                    {
                                                      t = e_31;
                                                      t = l_23;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                s_22 = ATgetArgument(t, 0);
                                                t_22 = ATgetArgument(t, 1);
                                                t = t_22;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    u_21 = ATgetArgument(t, 0);
                                                    w_21 = ATgetArgument(t, 1);
                                                    t = u_21;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        v_21 = ATgetArgument(t, 0);
                                                        t = s_22;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            i_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm o_31 = t;
                                                              int q_31 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm t_64 = NULL,u_64 = NULL,v_64 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, v_21);
                                                                  t = d_2(t);
                                                                  v_64 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_64, w_21);
                                                                  t = d_2(t);
                                                                  u_64 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_22, u_64);
                                                                  t = d_2(t);
                                                                  t_64 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, t_64);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(q_31);
                                                                }
                                                              else
                                                                {
                                                                  t = o_31;
                                                                  {
                                                                    ATerm r_31 = t;
                                                                    int t_31 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,u_65 = NULL,v_65 = NULL;
                                                                        t = l_23;
                                                                        t = new_0_0(t);
                                                                        b_65 = t;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        u_65 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = d_2(t);
                                                                        v_65 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(v_65), u_65);
                                                                        t = d_2(t);
                                                                        c_65 = t;
                                                                        t = b_65;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        n_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, n_65);
                                                                        t = d_2(t);
                                                                        m_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, m_65);
                                                                        t = d_2(t);
                                                                        e_65 = t;
                                                                        t = c_23;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        g_65 = t;
                                                                        t = b_65;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        l_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, l_65);
                                                                        t = d_2(t);
                                                                        k_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, k_65);
                                                                        t = d_2(t);
                                                                        j_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, g_65, j_65);
                                                                        t = d_2(t);
                                                                        f_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, e_65, f_65);
                                                                        t = d_2(t);
                                                                        d_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, c_65, d_65);
                                                                        t = d_2(t);
                                                                        LocalPopChoice(t_31);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_31;
                                                                        t = l_23;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm u_31 = t;
                                                            int v_31 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm y_65 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL;
                                                                t = l_23;
                                                                t = new_0_0(t);
                                                                y_65 = t;
                                                                t = bottomup_1_0(d_2, t);
                                                                r_66 = t;
                                                                t = (ATerm) ATempty;
                                                                t = d_2(t);
                                                                s_66 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(s_66), r_66);
                                                                t = d_2(t);
                                                                b_66 = t;
                                                                t = y_65;
                                                                t = bottomup_1_0(d_2, t);
                                                                q_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, q_66);
                                                                t = d_2(t);
                                                                p_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, p_66);
                                                                t = d_2(t);
                                                                d_66 = t;
                                                                t = c_23;
                                                                t = bottomup_1_0(d_2, t);
                                                                h_66 = t;
                                                                t = y_65;
                                                                t = bottomup_1_0(d_2, t);
                                                                o_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, o_66);
                                                                t = d_2(t);
                                                                j_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, j_66);
                                                                t = d_2(t);
                                                                i_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, h_66, i_66);
                                                                t = d_2(t);
                                                                g_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, d_66, g_66);
                                                                t = d_2(t);
                                                                c_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, b_66, c_66);
                                                                t = d_2(t);
                                                                LocalPopChoice(v_31);
                                                              }
                                                            else
                                                              {
                                                                t = u_31;
                                                                t = l_23;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = s_22;
                                                        {
                                                          ATerm y_31 = t;
                                                          int z_31 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL,u_67 = NULL,v_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL;
                                                              t = l_23;
                                                              t = new_0_0(t);
                                                              x_66 = t;
                                                              t = bottomup_1_0(d_2, t);
                                                              a_68 = t;
                                                              t = (ATerm) ATempty;
                                                              t = d_2(t);
                                                              b_68 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(b_68), a_68);
                                                              t = d_2(t);
                                                              y_66 = t;
                                                              t = x_66;
                                                              t = bottomup_1_0(d_2, t);
                                                              z_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, z_67);
                                                              t = d_2(t);
                                                              y_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, y_67);
                                                              t = d_2(t);
                                                              e_67 = t;
                                                              t = c_23;
                                                              t = bottomup_1_0(d_2, t);
                                                              g_67 = t;
                                                              t = x_66;
                                                              t = bottomup_1_0(d_2, t);
                                                              v_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, v_67);
                                                              t = d_2(t);
                                                              u_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, u_67);
                                                              t = d_2(t);
                                                              h_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_67, h_67);
                                                              t = d_2(t);
                                                              f_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, e_67, f_67);
                                                              t = d_2(t);
                                                              z_66 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, y_66, z_66);
                                                              t = d_2(t);
                                                              LocalPopChoice(z_31);
                                                            }
                                                          else
                                                            {
                                                              t = y_31;
                                                              t = l_23;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = s_22;
                                                    {
                                                      ATerm d_32 = t;
                                                      int f_32 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL;
                                                          t = l_23;
                                                          t = new_0_0(t);
                                                          s_68 = t;
                                                          t = bottomup_1_0(d_2, t);
                                                          f_69 = t;
                                                          t = (ATerm) ATempty;
                                                          t = d_2(t);
                                                          g_69 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(g_69), f_69);
                                                          t = d_2(t);
                                                          t_68 = t;
                                                          t = s_68;
                                                          t = bottomup_1_0(d_2, t);
                                                          e_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, e_69);
                                                          t = d_2(t);
                                                          d_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, d_69);
                                                          t = d_2(t);
                                                          v_68 = t;
                                                          t = c_23;
                                                          t = bottomup_1_0(d_2, t);
                                                          x_68 = t;
                                                          t = s_68;
                                                          t = bottomup_1_0(d_2, t);
                                                          a_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, a_69);
                                                          t = d_2(t);
                                                          z_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, z_68);
                                                          t = d_2(t);
                                                          y_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_68, y_68);
                                                          t = d_2(t);
                                                          w_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_68, w_68);
                                                          t = d_2(t);
                                                          u_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, t_68, u_68);
                                                          t = d_2(t);
                                                          LocalPopChoice(f_32);
                                                        }
                                                      else
                                                        {
                                                          t = d_32;
                                                          t = l_23;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    s_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm h_32 = t;
                                                      int i_32 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, s_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(i_32);
                                                        }
                                                      else
                                                        {
                                                          t = h_32;
                                                          {
                                                            ATerm j_32 = t;
                                                            int l_32 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm p_69 = NULL,q_69 = NULL,t_69 = NULL,w_69 = NULL,z_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL,g_70 = NULL,h_70 = NULL,j_70 = NULL,m_70 = NULL,n_70 = NULL;
                                                                t = l_23;
                                                                t = new_0_0(t);
                                                                p_69 = t;
                                                                t = bottomup_1_0(d_2, t);
                                                                m_70 = t;
                                                                t = (ATerm) ATempty;
                                                                t = d_2(t);
                                                                n_70 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(n_70), m_70);
                                                                t = d_2(t);
                                                                q_69 = t;
                                                                t = p_69;
                                                                t = bottomup_1_0(d_2, t);
                                                                j_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, j_70);
                                                                t = d_2(t);
                                                                h_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, h_70);
                                                                t = d_2(t);
                                                                w_69 = t;
                                                                t = c_23;
                                                                t = bottomup_1_0(d_2, t);
                                                                a_70 = t;
                                                                t = p_69;
                                                                t = bottomup_1_0(d_2, t);
                                                                g_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, g_70);
                                                                t = d_2(t);
                                                                c_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, c_70);
                                                                t = d_2(t);
                                                                b_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, a_70, b_70);
                                                                t = d_2(t);
                                                                z_69 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, w_69, z_69);
                                                                t = d_2(t);
                                                                t_69 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, q_69, t_69);
                                                                t = d_2(t);
                                                                LocalPopChoice(l_32);
                                                              }
                                                            else
                                                              {
                                                                t = j_32;
                                                                t = l_23;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm m_32 = t;
                                                    int n_32 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm q_70 = NULL,r_70 = NULL,t_70 = NULL,w_70 = NULL,z_70 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL;
                                                        t = l_23;
                                                        t = new_0_0(t);
                                                        q_70 = t;
                                                        t = bottomup_1_0(d_2, t);
                                                        h_71 = t;
                                                        t = (ATerm) ATempty;
                                                        t = d_2(t);
                                                        i_71 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(i_71), h_71);
                                                        t = d_2(t);
                                                        r_70 = t;
                                                        t = q_70;
                                                        t = bottomup_1_0(d_2, t);
                                                        g_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, g_71);
                                                        t = d_2(t);
                                                        f_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, f_71);
                                                        t = d_2(t);
                                                        w_70 = t;
                                                        t = c_23;
                                                        t = bottomup_1_0(d_2, t);
                                                        b_71 = t;
                                                        t = q_70;
                                                        t = bottomup_1_0(d_2, t);
                                                        e_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, e_71);
                                                        t = d_2(t);
                                                        d_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, d_71);
                                                        t = d_2(t);
                                                        c_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, b_71, c_71);
                                                        t = d_2(t);
                                                        z_70 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, w_70, z_70);
                                                        t = d_2(t);
                                                        t_70 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, r_70, t_70);
                                                        t = d_2(t);
                                                        LocalPopChoice(n_32);
                                                      }
                                                    else
                                                      {
                                                        t = m_32;
                                                        t = l_23;
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
                                        c_23 = ATgetArgument(t, 0);
                                        t = c_23;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm p_32 = t;
                                            int s_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_16;
                                                t = d_2(t);
                                                LocalPopChoice(s_32);
                                              }
                                            else
                                              {
                                                t = p_32;
                                                t = l_23;
                                              }
                                          }
                                        else
                                          {
                                            t = l_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            c_23 = ATgetArgument(t, 0);
                                            t = c_23;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm t_32 = t;
                                                int u_32 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_x_16;
                                                    t = d_2(t);
                                                    LocalPopChoice(u_32);
                                                  }
                                                else
                                                  {
                                                    t = t_32;
                                                    t = l_23;
                                                  }
                                              }
                                            else
                                              {
                                                t = l_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                c_23 = ATgetArgument(t, 0);
                                                t = c_23;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm v_32 = t;
                                                    int w_32 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_x_16;
                                                        t = d_2(t);
                                                        LocalPopChoice(w_32);
                                                      }
                                                    else
                                                      {
                                                        t = v_32;
                                                        t = l_23;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = l_23;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm x_32 = t;
                                                int y_32 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm a_33 = ATgetArgument(t, 0);
                                                        u_22 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(y_32);
                                                    t = u_22;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm b_33 = t;
                                                        int c_33 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_x_16;
                                                            t = d_2(t);
                                                            LocalPopChoice(c_33);
                                                          }
                                                        else
                                                          {
                                                            t = b_33;
                                                            t = l_23;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = l_23;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = x_32;
                                                    {
                                                      ATerm d_33 = t;
                                                      int f_33 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm i_33 = ATgetArgument(t, 0);
                                                              u_22 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(f_33);
                                                          {
                                                            ATerm j_33 = t;
                                                            int l_33 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = u_22;
                                                                t = fetch_1_0(f_3, t);
                                                                t = term_x_16;
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(l_33);
                                                              }
                                                            else
                                                              {
                                                                t = j_33;
                                                                t = l_23;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = d_33;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              c_23 = ATgetArgument(t, 0);
                                                              u_22 = ATgetArgument(t, 1);
                                                              t = u_22;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = c_23;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = u_22;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          s_22 = ATgetArgument(t, 0);
                                                                          t_22 = ATgetArgument(t, 1);
                                                                          t = c_23;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = c_23;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = c_23;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = u_22;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          s_22 = ATgetArgument(t, 0);
                                                                          t_22 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm m_33 = t;
                                                                            int n_33 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm k_73 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, t_22, u_22);
                                                                                t = d_2(t);
                                                                                k_73 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, s_22, k_73);
                                                                                t = d_2(t);
                                                                                LocalPopChoice(n_33);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = m_33;
                                                                                {
                                                                                  ATerm o_33 = t;
                                                                                  int p_33 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = u_22;
                                                                                      if((c_23 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(p_33);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = o_33;
                                                                                      t = l_23;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm q_33 = t;
                                                                          int r_33 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = u_22;
                                                                              if((c_23 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(r_33);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = q_33;
                                                                              t = l_23;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  c_23 = ATgetArgument(t, 0);
                                                                  u_22 = ATgetArgument(t, 1);
                                                                  t_21 = ATgetArgument(t, 2);
                                                                  t = t_21;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm s_33 = t;
                                                                      int u_33 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_23, u_22);
                                                                          t = d_2(t);
                                                                          LocalPopChoice(u_33);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = s_33;
                                                                          t = l_23;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = l_23;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      c_23 = ATgetArgument(t, 0);
                                                                      u_22 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm v_33 = t;
                                                                        int w_33 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, c_23, u_22);
                                                                            t = d_2(t);
                                                                            LocalPopChoice(w_33);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = v_33;
                                                                            t = l_23;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          c_23 = ATgetArgument(t, 0);
                                                                          t = c_23;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              s_22 = ATgetFirst((ATermList) t);
                                                                              t_22 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm y_33 = t;
                                                                                int z_33 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm k_74 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, t_22);
                                                                                    t = d_2(t);
                                                                                    k_74 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, s_22, k_74);
                                                                                    t = d_2(t);
                                                                                    LocalPopChoice(z_33);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = y_33;
                                                                                    t = l_23;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm a_34 = t;
                                                                                  int c_34 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_x_16;
                                                                                      t = d_2(t);
                                                                                      LocalPopChoice(c_34);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = a_34;
                                                                                      t = l_23;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = l_23;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              c_23 = ATgetArgument(t, 0);
                                                                              t = c_23;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  s_22 = ATgetFirst((ATermList) t);
                                                                                  t_22 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm d_34 = t;
                                                                                    int e_34 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm b_75 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, t_22);
                                                                                        t = d_2(t);
                                                                                        b_75 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, s_22, b_75);
                                                                                        t = d_2(t);
                                                                                        LocalPopChoice(e_34);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = d_34;
                                                                                        t = l_23;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm f_34 = t;
                                                                                      int h_34 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_x_16;
                                                                                          t = d_2(t);
                                                                                          LocalPopChoice(h_34);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = f_34;
                                                                                          t = l_23;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = l_23;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  c_23 = ATgetArgument(t, 0);
                                                                                  t = c_23;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      s_22 = ATgetFirst((ATermList) t);
                                                                                      t_22 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm i_34 = t;
                                                                                        int j_34 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm h_75 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, t_22);
                                                                                            t = d_2(t);
                                                                                            h_75 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, s_22, h_75);
                                                                                            t = d_2(t);
                                                                                            LocalPopChoice(j_34);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = i_34;
                                                                                            t = l_23;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm k_34 = t;
                                                                                          int l_34 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_q_16;
                                                                                              t = d_2(t);
                                                                                              LocalPopChoice(l_34);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = k_34;
                                                                                              t = l_23;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = l_23;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      c_23 = ATgetArgument(t, 0);
                                                                                      u_22 = ATgetArgument(t, 1);
                                                                                      t_21 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm m_34 = t;
                                                                                        int o_34 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm s_75 = NULL,z_75 = NULL,a_76 = NULL,h_76 = NULL,m_76 = NULL;
                                                                                            t = term_p_34;
                                                                                            t = bottomup_1_0(d_2, t);
                                                                                            z_75 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = d_2(t);
                                                                                            m_76 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(m_76), t_21);
                                                                                            t = d_2(t);
                                                                                            h_76 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(h_76), c_23);
                                                                                            t = d_2(t);
                                                                                            a_76 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, z_75, a_76);
                                                                                            t = d_2(t);
                                                                                            s_75 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, u_22, s_75);
                                                                                            t = d_2(t);
                                                                                            LocalPopChoice(o_34);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = m_34;
                                                                                            t = l_23;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          c_23 = ATgetArgument(t, 0);
                                                                                          u_22 = ATgetArgument(t, 1);
                                                                                          t_21 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm q_34 = t;
                                                                                            int r_34 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm r_76 = NULL,s_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL,z_76 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, u_22);
                                                                                                t = d_2(t);
                                                                                                s_76 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, t_21);
                                                                                                t = d_2(t);
                                                                                                x_76 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = d_2(t);
                                                                                                z_76 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(z_76), x_76);
                                                                                                t = d_2(t);
                                                                                                w_76 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(w_76), c_23);
                                                                                                t = d_2(t);
                                                                                                v_76 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(v_76), s_76);
                                                                                                t = d_2(t);
                                                                                                r_76 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, r_76);
                                                                                                t = d_2(t);
                                                                                                LocalPopChoice(r_34);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = q_34;
                                                                                                t = l_23;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              c_23 = ATgetArgument(t, 0);
                                                                                              u_22 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm t_34 = t;
                                                                                                int v_34 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm d_77 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, u_22);
                                                                                                    t = d_2(t);
                                                                                                    d_77 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, c_23, d_77);
                                                                                                    t = d_2(t);
                                                                                                    LocalPopChoice(v_34);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = t_34;
                                                                                                    t = l_23;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  c_23 = ATgetArgument(t, 0);
                                                                                                  u_22 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm w_34 = t;
                                                                                                    int x_34 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm j_77 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, c_23);
                                                                                                        t = d_2(t);
                                                                                                        j_77 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, j_77, u_22);
                                                                                                        t = d_2(t);
                                                                                                        LocalPopChoice(x_34);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = w_34;
                                                                                                        t = l_23;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      c_23 = ATgetArgument(t, 0);
                                                                                                      u_22 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm y_34 = t;
                                                                                                        int z_34 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm p_77 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, u_22);
                                                                                                            t = d_2(t);
                                                                                                            p_77 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, p_77, c_23);
                                                                                                            t = d_2(t);
                                                                                                            LocalPopChoice(z_34);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = y_34;
                                                                                                            t = l_23;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          c_23 = ATgetArgument(t, 0);
                                                                                                          u_22 = ATgetArgument(t, 1);
                                                                                                          t = u_22;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              m_22 = ATgetArgument(t, 0);
                                                                                                              n_22 = ATgetArgument(t, 1);
                                                                                                              t = c_23;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = u_22;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm b_35 = t;
                                                                                                                  int c_35 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm r_78 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, c_23, m_22);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      r_78 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, r_78, n_22);
                                                                                                                      t = bottomup_1_0(d_2, t);
                                                                                                                      LocalPopChoice(c_35);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = b_35;
                                                                                                                      t = l_23;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  m_22 = ATgetArgument(t, 0);
                                                                                                                  n_22 = ATgetArgument(t, 1);
                                                                                                                  g_22 = ATgetArgument(t, 2);
                                                                                                                  t = g_22;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = n_22;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = m_22;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              j_22 = ATgetArgument(t, 0);
                                                                                                                              t = c_23;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = u_22;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      s_22 = ATgetFirst((ATermList) t);
                                                                                                                                      t_22 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = t_22;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = s_22;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              i_22 = ATgetArgument(t, 0);
                                                                                                                                              c_22 = ATgetArgument(t, 1);
                                                                                                                                              z_21 = ATgetArgument(t, 2);
                                                                                                                                              a_22 = ATgetArgument(t, 3);
                                                                                                                                              t = z_21;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = c_22;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm d_35 = t;
                                                                                                                                                      int e_35 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = j_22;
                                                                                                                                                          if((i_22 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = a_22;
                                                                                                                                                          {
                                                                                                                                                            ATerm g_35 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm g_3 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm h_35 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(h_35, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((i_22 != ATgetArgument(h_35, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(h_35, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm i_35 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(i_35) != AT_LIST) || !(ATisEmpty(i_35))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm l_35 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(l_35) != AT_LIST) || !(ATisEmpty(l_35))))
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
                                                                                                                                                                t = g_35;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = a_22;
                                                                                                                                                          t = bottomup_1_0(d_2, t);
                                                                                                                                                          LocalPopChoice(e_35);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = d_35;
                                                                                                                                                          t = l_23;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = l_23;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = l_23;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = l_23;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = l_23;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = l_23;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = c_23;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = u_22;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = l_23;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = c_23;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = u_22;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = l_23;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = c_23;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = u_22;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = l_23;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = c_23;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = u_22;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = l_23;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              c_23 = ATgetArgument(t, 0);
                                                                                                              u_22 = ATgetArgument(t, 1);
                                                                                                              t = c_23;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = u_22;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = l_23;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = l_23;
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
  ATerm c_81 = NULL,e_81 = NULL,f_81 = NULL,i_81 = NULL,d_18 = NULL,e_18 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm m_35 = ATgetArgument(t, 0);
      if(match_cons(m_35, sym_SVar_1))
        {
          f_81 = ATgetArgument(m_35, 0);
        }
      else
        _fail(t);
      c_81 = ATgetArgument(t, 1);
      e_81 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_81), (ATerm)ATempty, (ATerm) ATempty);
  d_18 = t;
  t = term_n_35;
  e_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_35, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_81), (ATerm)ATempty, (ATerm) ATempty));
  t = u_6(e_18, d_18, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm p_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_35) != ATmakeSymbol("n_0", 0, ATtrue)))
        _fail(t);
      i_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_81), c_81, e_81);
  return(t);
}
ATerm SubsArgCall1_0_0 (ATerm t)
{
  ATerm j_81 = NULL,k_81 = NULL,h_18 = NULL;
  j_81 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm q_35 = ATgetArgument(t, 0);
      if(match_cons(q_35, sym_SVar_1))
        {
          ATerm t_35 = ATgetArgument(q_35, 0);
        }
      else
        _fail(t);
      {
        ATerm r_35 = ATgetArgument(t, 1);
        if(((ATgetType(r_35) != AT_LIST) || !(ATisEmpty(r_35))))
          _fail(t);
      }
      {
        ATerm s_35 = ATgetArgument(t, 2);
        if(((ATgetType(s_35) != AT_LIST) || !(ATisEmpty(s_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_u_35;
  h_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_35, j_81);
  t = u_6(h_18, j_81, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm v_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_35) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      k_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_81;
  t = strename_0_0(t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_n_35;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_u_35;
  return(t);
}
ATerm substitute_arg_0_0 (ATerm t)
{
  ATerm d_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL,k_82 = NULL,l_82 = NULL,n_82 = NULL,q_82 = NULL;
  h_82 = t;
  if(match_cons(t, sym__2))
    {
      i_82 = ATgetArgument(t, 0);
      q_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_82;
  if(match_cons(t, sym_VarDec_2))
    {
      j_82 = ATgetArgument(t, 0);
      k_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_82;
  if(match_cons(t, sym_FunType_2))
    {
      l_82 = ATgetArgument(t, 0);
      {
        ATerm z_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = l_82;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_36 = ATgetFirst((ATermList) t);
      n_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_82;
  {
    ATerm e_36 = t;
    int f_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_36 = ATgetFirst((ATermList) t);
            ATerm m_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(f_36);
        {
          ATerm w_82 = NULL,x_82 = NULL;
          t = q_82;
          if(match_cons(t, sym_CallT_3))
            {
              d_82 = ATgetArgument(t, 0);
              f_82 = ATgetArgument(t, 1);
              g_82 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = d_82;
          if(match_cons(t, sym_SVar_1))
            {
              e_82 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_82;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = g_82;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_82), (ATerm)ATempty, (ATerm) ATempty);
          w_82 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_36, e_82);
          x_82 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_82), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_n_36, e_82));
          t = i_13(h_3, w_82, x_82, t);
          t = h_82;
        }
      }
    else
      {
        t = e_36;
        {
          ATerm e_83 = NULL,f_83 = NULL;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_82), (ATerm)ATempty, (ATerm) ATempty);
          e_83 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_36, q_82);
          f_83 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_82), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_o_36, q_82));
          t = i_13(i_3, e_83, f_83, t);
          t = h_82;
        }
      }
  }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_u_35;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_n_35;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_36 = ATgetArgument(t, 0);
      if(((ATgetType(q_36) != AT_LIST) || !(ATisEmpty(q_36))))
        _fail(t);
      {
        ATerm u_36 = ATgetArgument(t, 1);
        if(((ATgetType(u_36) != AT_LIST) || !(ATisEmpty(u_36))))
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
  ATerm p_83 = NULL,q_83 = NULL,r_83 = NULL,s_83 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_36 = ATgetArgument(t, 0);
      if(((ATgetType(w_36) == AT_LIST) && !(ATisEmpty(w_36))))
        {
          p_83 = ATgetFirst((ATermList) w_36);
          q_83 = (ATerm) ATgetNext((ATermList) w_36);
        }
      else
        _fail(t);
      {
        ATerm y_36 = ATgetArgument(t, 1);
        if(((ATgetType(y_36) == AT_LIST) && !(ATisEmpty(y_36))))
          {
            r_83 = ATgetFirst((ATermList) y_36);
            s_83 = (ATerm) ATgetNext((ATermList) y_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_83, r_83), (ATerm) ATmakeAppl(sym__2, q_83, s_83));
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm t_83 = NULL,u_83 = NULL;
  if(match_cons(t, sym__2))
    {
      t_83 = ATgetArgument(t, 0);
      u_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_83), t_83);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm c_37 = t;
  int d_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_37 = t;
      int f_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SubsArgCall1_0_0(t);
          LocalPopChoice(f_37);
        }
      else
        {
          t = e_37;
          t = SubsArgCall2_0_0(t);
        }
      LocalPopChoice(d_37);
    }
  else
    {
      t = c_37;
    }
  return(t);
}
ATerm substitute_args_0_0 (ATerm t)
{
  ATerm i_83 = NULL,k_83 = NULL,l_83 = NULL;
  static ATerm k_3 (ATerm t)
  {
    static ATerm m_3 (ATerm t)
    {
      if(match_cons(t, sym__3))
        {
          if(((i_83 != NULL) && (i_83 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            i_83 = ATgetArgument(t, 0);
          if(((k_83 != NULL) && (k_83 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            k_83 = ATgetArgument(t, 1);
          if(((l_83 != NULL) && (l_83 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            l_83 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, i_83, k_83);
      t = genzip_4_0(n_3, o_3, p_3, substitute_arg_0_0, t);
      t = l_83;
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
      ATerm g_37 = ATgetArgument(t, 0);
      if(((ATgetType(g_37) != AT_LIST) || !(ATisEmpty(g_37))))
        _fail(t);
      {
        ATerm h_37 = ATgetArgument(t, 1);
        if(((ATgetType(h_37) != AT_LIST) || !(ATisEmpty(h_37))))
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
      ATerm i_37 = ATgetArgument(t, 0);
      if(((ATgetType(i_37) == AT_LIST) && !(ATisEmpty(i_37))))
        {
          s_18 = ATgetFirst((ATermList) i_37);
          t_18 = (ATerm) ATgetNext((ATermList) i_37);
        }
      else
        _fail(t);
      {
        ATerm k_37 = ATgetArgument(t, 1);
        if(((ATgetType(k_37) == AT_LIST) && !(ATisEmpty(k_37))))
          {
            u_18 = ATgetFirst((ATermList) k_37);
            v_18 = (ATerm) ATgetNext((ATermList) k_37);
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
    ATerm l_37 = t;
    int m_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm n_37 = ATgetArgument(t, 0);
            b_19 = ATgetArgument(t, 1);
            c_19 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(m_37);
        t = (ATerm) ATmakeAppl(sym_SDef_3, e_19, b_19, c_19);
      }
    else
      {
        t = l_37;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm o_37 = ATgetArgument(t, 0);
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
      ATerm p_37 = ATgetArgument(t, 0);
      if(((ATgetType(p_37) != AT_LIST) || !(ATisEmpty(p_37))))
        _fail(t);
      {
        ATerm q_37 = ATgetArgument(t, 1);
        if(((ATgetType(q_37) != AT_LIST) || !(ATisEmpty(q_37))))
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
      ATerm r_37 = ATgetArgument(t, 0);
      if(((ATgetType(r_37) == AT_LIST) && !(ATisEmpty(r_37))))
        {
          a_20 = ATgetFirst((ATermList) r_37);
          b_20 = (ATerm) ATgetNext((ATermList) r_37);
        }
      else
        _fail(t);
      {
        ATerm s_37 = ATgetArgument(t, 1);
        if(((ATgetType(s_37) == AT_LIST) && !(ATisEmpty(s_37))))
          {
            c_20 = ATgetFirst((ATermList) s_37);
            d_20 = (ATerm) ATgetNext((ATermList) s_37);
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
    ATerm t_37 = t;
    int u_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm v_37 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(u_37);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, k_20);
      }
    else
      {
        t = t_37;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm y_37 = ATgetArgument(t, 0);
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
      ATerm z_37 = ATgetArgument(t, 0);
      if(((ATgetType(z_37) != AT_LIST) || !(ATisEmpty(z_37))))
        _fail(t);
      {
        ATerm a_38 = ATgetArgument(t, 1);
        if(((ATgetType(a_38) != AT_LIST) || !(ATisEmpty(a_38))))
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
  ATerm e_22 = NULL,k_22 = NULL,l_22 = NULL,o_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_38 = ATgetArgument(t, 0);
      if(((ATgetType(b_38) == AT_LIST) && !(ATisEmpty(b_38))))
        {
          e_22 = ATgetFirst((ATermList) b_38);
          k_22 = (ATerm) ATgetNext((ATermList) b_38);
        }
      else
        _fail(t);
      {
        ATerm c_38 = ATgetArgument(t, 1);
        if(((ATgetType(c_38) == AT_LIST) && !(ATisEmpty(c_38))))
          {
            l_22 = ATgetFirst((ATermList) c_38);
            o_22 = (ATerm) ATgetNext((ATermList) c_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_22, l_22), (ATerm) ATmakeAppl(sym__2, k_22, o_22));
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL;
  if(match_cons(t, sym__2))
    {
      p_22 = ATgetArgument(t, 0);
      q_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_22), p_22);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm v_22 = NULL,x_22 = NULL,y_22 = NULL;
  if(match_cons(t, sym__2))
    {
      v_22 = ATgetArgument(t, 0);
      y_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_22;
  {
    ATerm e_38 = t;
    int i_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm j_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(i_38);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, y_22);
      }
    else
      {
        t = e_38;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm k_38 = ATgetArgument(t, 0);
            x_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, y_22, x_22);
      }
  }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_38 = ATgetArgument(t, 0);
      if(((ATgetType(l_38) != AT_LIST) || !(ATisEmpty(l_38))))
        _fail(t);
      {
        ATerm m_38 = ATgetArgument(t, 1);
        if(((ATgetType(m_38) != AT_LIST) || !(ATisEmpty(m_38))))
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
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_38 = ATgetArgument(t, 0);
      if(((ATgetType(n_38) == AT_LIST) && !(ATisEmpty(n_38))))
        {
          g_24 = ATgetFirst((ATermList) n_38);
          h_24 = (ATerm) ATgetNext((ATermList) n_38);
        }
      else
        _fail(t);
      {
        ATerm p_38 = ATgetArgument(t, 1);
        if(((ATgetType(p_38) == AT_LIST) && !(ATisEmpty(p_38))))
          {
            i_24 = ATgetFirst((ATermList) p_38);
            j_24 = (ATerm) ATgetNext((ATermList) p_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_24, i_24), (ATerm) ATmakeAppl(sym__2, h_24, j_24));
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL;
  if(match_cons(t, sym__2))
    {
      l_24 = ATgetArgument(t, 0);
      m_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_24), l_24);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm o_24 = NULL,q_24 = NULL,u_24 = NULL;
  if(match_cons(t, sym__2))
    {
      o_24 = ATgetArgument(t, 0);
      u_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_24;
  {
    ATerm w_38 = t;
    int x_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm y_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(x_38);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, u_24);
      }
    else
      {
        t = w_38;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm z_38 = ATgetArgument(t, 0);
            q_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, u_24, q_24);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm b_108 (ATerm), ATerm t)
{
  ATerm i_91 = NULL,j_91 = NULL,k_91 = NULL,l_91 = NULL,o_91 = NULL;
  k_91 = t;
  if(match_cons(t, sym_Let_2))
    {
      l_91 = ATgetArgument(t, 0);
      o_91 = ATgetArgument(t, 1);
      {
        ATerm m_18 = NULL,p_18 = NULL,q_18 = NULL,t_4 = NULL;
        t = SSLgetAnnotations(k_91);
        m_18 = t;
        t = l_91;
        t = b_108(t);
        q_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_91, q_18);
        t = genzip_4_0(r_3, s_3, t_3, u_3, t);
        p_18 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, p_18, o_91);
        t_4 = t;
        t = SSLsetAnnotations(t_4, m_18);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          l_91 = ATgetArgument(t, 0);
          o_91 = ATgetArgument(t, 1);
          i_91 = ATgetArgument(t, 2);
          {
            ATerm t_19 = NULL,x_19 = NULL,y_19 = NULL,v_4 = NULL;
            t = SSLgetAnnotations(k_91);
            t_19 = t;
            t = o_91;
            t = b_108(t);
            y_19 = t;
            t = (ATerm) ATmakeAppl(sym__2, o_91, y_19);
            t = genzip_4_0(v_3, w_3, x_3, y_3, t);
            x_19 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, l_91, x_19, i_91);
            v_4 = t;
            t = SSLsetAnnotations(v_4, t_19);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              l_91 = ATgetArgument(t, 0);
              o_91 = ATgetArgument(t, 1);
              i_91 = ATgetArgument(t, 2);
              j_91 = ATgetArgument(t, 3);
              {
                ATerm i_21 = NULL,o_21 = NULL,x_21 = NULL,w_4 = NULL;
                t = SSLgetAnnotations(k_91);
                i_21 = t;
                t = o_91;
                t = b_108(t);
                x_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, o_91, x_21);
                t = genzip_4_0(z_3, b_4, c_4, d_4, t);
                o_21 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, l_91, o_21, i_91, j_91);
                w_4 = t;
                t = SSLsetAnnotations(w_4, i_21);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  l_91 = ATgetArgument(t, 0);
                  o_91 = ATgetArgument(t, 1);
                  i_91 = ATgetArgument(t, 2);
                  j_91 = ATgetArgument(t, 3);
                  {
                    ATerm r_23 = NULL,c_24 = NULL,d_24 = NULL,x_4 = NULL;
                    t = SSLgetAnnotations(k_91);
                    r_23 = t;
                    t = o_91;
                    t = b_108(t);
                    d_24 = t;
                    t = (ATerm) ATmakeAppl(sym__2, o_91, d_24);
                    t = genzip_4_0(e_4, f_4, g_4, l_4, t);
                    c_24 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, l_91, c_24, i_91, j_91);
                    x_4 = t;
                    t = SSLsetAnnotations(x_4, r_23);
                  }
                }
              else
                {
                  ATerm u_25 = NULL,x_25 = NULL,z_4 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      l_91 = ATgetArgument(t, 0);
                      o_91 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(k_91);
                  u_25 = t;
                  t = l_91;
                  t = b_108(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      x_25 = ATgetFirst((ATermList) t);
                      {
                        ATerm a_39 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, x_25, o_91);
                  z_4 = t;
                  t = SSLsetAnnotations(z_4, u_25);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm e_108 (ATerm), ATerm t)
{
  ATerm l_94 = NULL,m_94 = NULL,n_94 = NULL,o_94 = NULL,p_94 = NULL;
  n_94 = t;
  if(match_cons(t, sym_Let_2))
    {
      o_94 = ATgetArgument(t, 0);
      p_94 = ATgetArgument(t, 1);
      {
        ATerm k_26 = NULL,p_26 = NULL,q_26 = NULL,g_5 = NULL;
        t = SSLgetAnnotations(n_94);
        k_26 = t;
        t = o_94;
        t = c_108(t);
        p_26 = t;
        t = p_94;
        t = c_108(t);
        q_26 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, p_26, q_26);
        g_5 = t;
        t = SSLsetAnnotations(g_5, k_26);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          o_94 = ATgetArgument(t, 0);
          p_94 = ATgetArgument(t, 1);
          l_94 = ATgetArgument(t, 2);
          {
            ATerm i_27 = NULL,z_27 = NULL,b_28 = NULL,c_28 = NULL,i_5 = NULL;
            t = SSLgetAnnotations(n_94);
            i_27 = t;
            t = o_94;
            t = e_108(t);
            z_27 = t;
            t = p_94;
            t = e_108(t);
            b_28 = t;
            t = l_94;
            t = c_108(t);
            c_28 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, z_27, b_28, c_28);
            i_5 = t;
            t = SSLsetAnnotations(i_5, i_27);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              o_94 = ATgetArgument(t, 0);
              p_94 = ATgetArgument(t, 1);
              l_94 = ATgetArgument(t, 2);
              m_94 = ATgetArgument(t, 3);
              {
                ATerm e_29 = NULL,n_29 = NULL,o_29 = NULL,x_29 = NULL,y_29 = NULL,j_5 = NULL;
                t = SSLgetAnnotations(n_94);
                e_29 = t;
                t = o_94;
                t = e_108(t);
                n_29 = t;
                t = p_94;
                t = e_108(t);
                o_29 = t;
                t = l_94;
                t = e_108(t);
                x_29 = t;
                t = m_94;
                t = c_108(t);
                y_29 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, n_29, o_29, x_29, y_29);
                j_5 = t;
                t = SSLsetAnnotations(j_5, e_29);
              }
            }
          else
            {
              ATerm t_30 = NULL,z_30 = NULL,a_31 = NULL,k_5 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  o_94 = ATgetArgument(t, 0);
                  p_94 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(n_94);
              t_30 = t;
              t = o_94;
              t = e_108(t);
              z_30 = t;
              t = p_94;
              t = c_108(t);
              a_31 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, z_30, a_31);
              k_5 = t;
              t = SSLsetAnnotations(k_5, t_30);
            }
        }
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm x_94 = NULL;
  ATerm c_39 = t;
  int d_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          x_94 = ATgetArgument(t, 0);
          {
            ATerm e_39 = ATgetArgument(t, 1);
          }
          {
            ATerm g_39 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_39);
      t = x_94;
    }
  else
    {
      t = c_39;
      if(match_cons(t, sym_SDefT_4))
        {
          x_94 = ATgetArgument(t, 0);
          {
            ATerm j_39 = ATgetArgument(t, 1);
          }
          {
            ATerm k_39 = ATgetArgument(t, 2);
          }
          {
            ATerm l_39 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = x_94;
    }
  return(t);
}
static ATerm p_12 (ATerm p_25, ATerm o_25, ATerm t)
{
  t = p_25;
  t = map_1_0(n_4, t);
  return(t);
}
ATerm SVar_1_0 (ATerm i_90 (ATerm), ATerm t)
{
  ATerm e_95 = NULL,h_95 = NULL,k_95 = NULL,l_95 = NULL,p_5 = NULL;
  l_95 = t;
  if(match_cons(t, sym_SVar_1))
    {
      h_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_95);
  e_95 = t;
  t = h_95;
  t = i_90(t);
  k_95 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, k_95);
  p_5 = t;
  t = SSLsetAnnotations(p_5, e_95);
  return(t);
}
static ATerm a_13 (ATerm x_124 (ATerm), ATerm y_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm b_45, ATerm a_45, ATerm z_44, ATerm t)
{
  static ATerm o_4 (ATerm t)
  {
    ATerm n_95 = NULL;
    n_95 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_95, z_44);
    t = x_124(t);
    return(t);
  }
  static ATerm p_4 (ATerm t)
  {
    ATerm r_95 = NULL;
    r_95 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_95, a_45);
    t = x_124(t);
    return(t);
  }
  t = b_45;
  t = y_124(o_4, p_4, _id, t);
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
      ATerm m_39 = ATgetArgument(t, 0);
      if(((ATgetType(m_39) != AT_LIST) || !(ATisEmpty(m_39))))
        _fail(t);
      {
        ATerm o_39 = ATgetArgument(t, 1);
        if(((ATgetType(o_39) != AT_LIST) || !(ATisEmpty(o_39))))
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
  ATerm k_96 = NULL,l_96 = NULL,m_96 = NULL,n_96 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_39 = ATgetArgument(t, 0);
      if(((ATgetType(p_39) == AT_LIST) && !(ATisEmpty(p_39))))
        {
          k_96 = ATgetFirst((ATermList) p_39);
          l_96 = (ATerm) ATgetNext((ATermList) p_39);
        }
      else
        _fail(t);
      {
        ATerm q_39 = ATgetArgument(t, 1);
        if(((ATgetType(q_39) == AT_LIST) && !(ATisEmpty(q_39))))
          {
            m_96 = ATgetFirst((ATermList) q_39);
            n_96 = (ATerm) ATgetNext((ATermList) q_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_96, m_96), (ATerm) ATmakeAppl(sym__2, l_96, n_96));
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm q_96 = NULL,r_96 = NULL;
  if(match_cons(t, sym__2))
    {
      q_96 = ATgetArgument(t, 0);
      r_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_96), q_96);
  return(t);
}
static ATerm b_13 (ATerm r_124 (ATerm), ATerm s_124 (ATerm (ATerm), ATerm), ATerm t_44, ATerm w_44, ATerm t)
{
  ATerm y_95 = NULL,b_96 = NULL,d_96 = NULL,e_96 = NULL,j_96 = NULL;
  t = t_44;
  t = r_124(t);
  y_95 = t;
  t = map_1_0(new_0_0, t);
  b_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_95, b_96);
  t = genzip_4_0(q_4, r_4, s_4, _id, t);
  j_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_96, w_44);
  t = conc_0_0(t);
  d_96 = t;
  t = t_44;
  {
    static ATerm u_4 (ATerm t)
    {
      t = b_96;
      return(t);
    }
    t = s_124(u_4, t);
  }
  e_96 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_96, w_44, d_96);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm c_97 = NULL,d_97 = NULL,e_97 = NULL,f_97 = NULL,g_97 = NULL,h_97 = NULL,i_97 = NULL;
  e_97 = t;
  if(match_cons(t, sym__2))
    {
      f_97 = ATgetArgument(t, 0);
      g_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_97;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_97 = ATgetFirst((ATermList) t);
      i_97 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_97;
  if(match_cons(t, sym__2))
    {
      c_97 = ATgetArgument(t, 0);
      d_97 = ATgetArgument(t, 1);
      {
        ATerm r_39 = t;
        int s_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_97;
            if((f_97 != t))
              {
                _fail(t);
              }
            t = d_97;
            LocalPopChoice(s_39);
          }
        else
          {
            t = r_39;
            t = (ATerm) ATmakeAppl(sym__2, f_97, i_97);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, f_97, i_97);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm f_125 (ATerm), ATerm t)
{
  static ATerm e_98 (ATerm t)
  {
    ATerm t_39 = t;
    int u_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_125(t);
        LocalPopChoice(u_39);
      }
    else
      {
        t = t_39;
        {
          ATerm b_98 = NULL,c_98 = NULL,d_98 = NULL;
          static ATerm y_4 (ATerm t)
          {
            ATerm e_32 = NULL;
            e_32 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_32, not_null(d_98));
            t = e_98(t);
            return(t);
          }
          b_98 = t;
          if(match_cons(t, sym__2))
            {
              c_98 = ATgetArgument(t, 0);
              if(((d_98 != NULL) && (d_98 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                d_98 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_98;
          t = SRTS_all(y_4, t);
        }
      }
    return(t);
  }
  t = e_98(t);
  return(t);
}
ATerm rename_4_0 (ATerm m_124 (ATerm (ATerm), ATerm), ATerm n_124 (ATerm), ATerm o_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm p_124 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm k_98 = NULL;
  static ATerm z_98 (ATerm t)
  {
    static ATerm a_5 (ATerm t)
    {
      ATerm t_98 = NULL,u_98 = NULL,v_98 = NULL;
      t_98 = t;
      if(match_cons(t, sym__2))
        {
          u_98 = ATgetArgument(t, 0);
          v_98 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm v_39 = t;
        int w_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_5 (ATerm t)
            {
              ATerm y_98 = NULL;
              y_98 = t;
              t = (ATerm) ATmakeAppl(sym__2, y_98, v_98);
              t = lookup_0_0(t);
              return(t);
            }
            t = u_98;
            t = m_124(b_5, t);
            LocalPopChoice(w_39);
          }
        else
          {
            t = v_39;
            {
              ATerm o_32 = NULL,q_32 = NULL,r_32 = NULL;
              t = t_98;
              t = b_13(n_124, p_124, u_98, v_98, t);
              if(match_cons(t, sym__3))
                {
                  o_32 = ATgetArgument(t, 0);
                  q_32 = ATgetArgument(t, 1);
                  r_32 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = a_13(z_98, o_124, o_32, q_32, r_32, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(a_5, t);
    return(t);
  }
  k_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_98, (ATerm) ATempty);
  t = z_98(t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_39 = ATgetArgument(t, 0);
      if(((ATgetType(x_39) != AT_LIST) || !(ATisEmpty(x_39))))
        _fail(t);
      {
        ATerm y_39 = ATgetArgument(t, 1);
        if(((ATgetType(y_39) != AT_LIST) || !(ATisEmpty(y_39))))
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
  ATerm a_36 = NULL,b_36 = NULL,d_36 = NULL,h_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_39 = ATgetArgument(t, 0);
      if(((ATgetType(z_39) == AT_LIST) && !(ATisEmpty(z_39))))
        {
          a_36 = ATgetFirst((ATermList) z_39);
          b_36 = (ATerm) ATgetNext((ATermList) z_39);
        }
      else
        _fail(t);
      {
        ATerm a_40 = ATgetArgument(t, 1);
        if(((ATgetType(a_40) == AT_LIST) && !(ATisEmpty(a_40))))
          {
            d_36 = ATgetFirst((ATermList) a_40);
            h_36 = (ATerm) ATgetNext((ATermList) a_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_36, d_36), (ATerm) ATmakeAppl(sym__2, b_36, h_36));
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm j_36 = NULL,p_36 = NULL;
  if(match_cons(t, sym__2))
    {
      j_36 = ATgetArgument(t, 0);
      p_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_36), j_36);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm v_36 = NULL,x_36 = NULL,a_37 = NULL;
  if(match_cons(t, sym__2))
    {
      v_36 = ATgetArgument(t, 0);
      a_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_36;
  {
    ATerm b_40 = t;
    int c_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm d_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_40);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, a_37);
      }
    else
      {
        t = b_40;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm e_40 = ATgetArgument(t, 0);
            x_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, a_37, x_36);
      }
  }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_40 = ATgetArgument(t, 0);
      if(((ATgetType(h_40) != AT_LIST) || !(ATisEmpty(h_40))))
        _fail(t);
      {
        ATerm i_40 = ATgetArgument(t, 1);
        if(((ATgetType(i_40) != AT_LIST) || !(ATisEmpty(i_40))))
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
  ATerm o_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_40 = ATgetArgument(t, 0);
      if(((ATgetType(j_40) == AT_LIST) && !(ATisEmpty(j_40))))
        {
          o_38 = ATgetFirst((ATermList) j_40);
          q_38 = (ATerm) ATgetNext((ATermList) j_40);
        }
      else
        _fail(t);
      {
        ATerm k_40 = ATgetArgument(t, 1);
        if(((ATgetType(k_40) == AT_LIST) && !(ATisEmpty(k_40))))
          {
            r_38 = ATgetFirst((ATermList) k_40);
            s_38 = (ATerm) ATgetNext((ATermList) k_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_38, r_38), (ATerm) ATmakeAppl(sym__2, q_38, s_38));
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL;
  if(match_cons(t, sym__2))
    {
      t_38 = ATgetArgument(t, 0);
      u_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_38), t_38);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm f_39 = NULL,h_39 = NULL,i_39 = NULL;
  if(match_cons(t, sym__2))
    {
      f_39 = ATgetArgument(t, 0);
      i_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_39;
  {
    ATerm l_40 = t;
    int m_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm q_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_40);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_39);
      }
    else
      {
        t = l_40;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm r_40 = ATgetArgument(t, 0);
            h_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, i_39, h_39);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm x_107 (ATerm), ATerm t)
{
  ATerm u_101 = NULL,v_101 = NULL,w_101 = NULL,x_101 = NULL,y_101 = NULL;
  u_101 = t;
  if(match_cons(t, sym_Scope_2))
    {
      v_101 = ATgetArgument(t, 0);
      w_101 = ATgetArgument(t, 1);
      {
        ATerm e_33 = NULL,n_34 = NULL,s_5 = NULL;
        t = SSLgetAnnotations(u_101);
        e_33 = t;
        t = v_101;
        t = x_107(t);
        n_34 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, n_34, w_101);
        s_5 = t;
        t = SSLsetAnnotations(s_5, e_33);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          v_101 = ATgetArgument(t, 0);
          w_101 = ATgetArgument(t, 1);
          x_101 = ATgetArgument(t, 2);
          y_101 = ATgetArgument(t, 3);
          {
            ATerm o_35 = NULL,w_35 = NULL,y_35 = NULL,t_5 = NULL;
            t = SSLgetAnnotations(u_101);
            o_35 = t;
            t = x_101;
            t = x_107(t);
            y_35 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_101, y_35);
            t = genzip_4_0(c_5, d_5, f_5, h_5, t);
            w_35 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, v_101, w_101, w_35, y_101);
            t_5 = t;
            t = SSLsetAnnotations(t_5, o_35);
          }
        }
      else
        {
          ATerm x_37 = NULL,d_38 = NULL,f_38 = NULL,u_5 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              v_101 = ATgetArgument(t, 0);
              w_101 = ATgetArgument(t, 1);
              x_101 = ATgetArgument(t, 2);
              y_101 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_101);
          x_37 = t;
          t = x_101;
          t = x_107(t);
          f_38 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_101, f_38);
          t = genzip_4_0(l_5, m_5, n_5, o_5, t);
          d_38 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, v_101, w_101, d_38, y_101);
          u_5 = t;
          t = SSLsetAnnotations(u_5, x_37);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm y_107 (ATerm), ATerm z_107 (ATerm), ATerm a_108 (ATerm), ATerm t)
{
  ATerm x_104 = NULL,y_104 = NULL,z_104 = NULL,a_105 = NULL,b_105 = NULL;
  a_105 = t;
  if(match_cons(t, sym_Scope_2))
    {
      b_105 = ATgetArgument(t, 0);
      x_104 = ATgetArgument(t, 1);
      {
        ATerm f_40 = NULL,n_40 = NULL,o_40 = NULL,z_5 = NULL;
        t = SSLgetAnnotations(a_105);
        f_40 = t;
        t = b_105;
        t = a_108(t);
        n_40 = t;
        t = x_104;
        t = y_107(t);
        o_40 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, n_40, o_40);
        z_5 = t;
        t = SSLsetAnnotations(z_5, f_40);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          b_105 = ATgetArgument(t, 0);
          x_104 = ATgetArgument(t, 1);
          y_104 = ATgetArgument(t, 2);
          z_104 = ATgetArgument(t, 3);
          {
            ATerm b_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,l_42 = NULL,a_6 = NULL;
            t = SSLgetAnnotations(a_105);
            b_42 = t;
            t = b_105;
            t = a_108(t);
            h_42 = t;
            t = x_104;
            t = a_108(t);
            i_42 = t;
            t = y_104;
            t = a_108(t);
            j_42 = t;
            t = z_104;
            t = y_107(t);
            l_42 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, h_42, i_42, j_42, l_42);
            a_6 = t;
            t = SSLsetAnnotations(a_6, b_42);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              b_105 = ATgetArgument(t, 0);
              x_104 = ATgetArgument(t, 1);
              y_104 = ATgetArgument(t, 2);
              z_104 = ATgetArgument(t, 3);
              {
                ATerm y_42 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL,b_6 = NULL;
                t = SSLgetAnnotations(a_105);
                y_42 = t;
                t = b_105;
                t = a_108(t);
                e_43 = t;
                t = x_104;
                t = a_108(t);
                f_43 = t;
                t = y_104;
                t = a_108(t);
                g_43 = t;
                t = z_104;
                t = y_107(t);
                h_43 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, e_43, f_43, g_43, h_43);
                b_6 = t;
                t = SSLsetAnnotations(b_6, y_42);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  b_105 = ATgetArgument(t, 0);
                  {
                    ATerm x_43 = NULL,g_44 = NULL,c_6 = NULL;
                    t = SSLgetAnnotations(a_105);
                    x_43 = t;
                    t = b_105;
                    t = y_107(t);
                    g_44 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, g_44);
                    c_6 = t;
                    t = SSLsetAnnotations(c_6, x_43);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      b_105 = ATgetArgument(t, 0);
                      {
                        ATerm s_44 = NULL,v_44 = NULL,e_6 = NULL;
                        t = SSLgetAnnotations(a_105);
                        s_44 = t;
                        t = b_105;
                        t = y_107(t);
                        v_44 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, v_44);
                        e_6 = t;
                        t = SSLsetAnnotations(e_6, s_44);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          b_105 = ATgetArgument(t, 0);
                          {
                            ATerm m_45 = NULL,s_45 = NULL,f_6 = NULL;
                            t = SSLgetAnnotations(a_105);
                            m_45 = t;
                            t = b_105;
                            t = y_107(t);
                            s_45 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, s_45);
                            f_6 = t;
                            t = SSLsetAnnotations(f_6, m_45);
                          }
                        }
                      else
                        {
                          ATerm c_46 = NULL,g_46 = NULL,g_6 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              b_105 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(a_105);
                          c_46 = t;
                          t = b_105;
                          t = y_107(t);
                          g_46 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, g_46);
                          g_6 = t;
                          t = SSLsetAnnotations(g_6, c_46);
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
  ATerm c_106 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_106);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm s_40 = t;
  int t_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_40);
    }
  else
    {
      t = s_40;
      {
        ATerm u_40 = t;
        int v_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_40);
          }
        else
          {
            t = u_40;
            {
              ATerm e_106 = NULL,f_106 = NULL,g_106 = NULL,h_106 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  e_106 = ATgetArgument(t, 0);
                  f_106 = ATgetArgument(t, 1);
                  g_106 = ATgetArgument(t, 2);
                  h_106 = ATgetArgument(t, 3);
                  t = g_106;
                  t = map_1_0(v_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_106 = ATgetArgument(t, 0);
                      f_106 = ATgetArgument(t, 1);
                      g_106 = ATgetArgument(t, 2);
                      h_106 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_106;
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
  ATerm w_40 = t;
  int x_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_106 = ATgetArgument(t, 0);
          {
            ATerm y_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_40);
      t = o_106;
    }
  else
    {
      t = w_40;
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
  ATerm y_106 = NULL;
  ATerm z_40 = t;
  int b_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_106 = ATgetArgument(t, 0);
          {
            ATerm c_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_41);
      t = y_106;
    }
  else
    {
      t = z_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_106 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_106;
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm i_107 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_107);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm d_41 = t;
  int e_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(h_41);
          }
        else
          {
            t = f_41;
            {
              ATerm l_107 = NULL,m_107 = NULL,n_107 = NULL,o_107 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  l_107 = ATgetArgument(t, 0);
                  m_107 = ATgetArgument(t, 1);
                  n_107 = ATgetArgument(t, 2);
                  o_107 = ATgetArgument(t, 3);
                  t = n_107;
                  t = map_1_0(d_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      l_107 = ATgetArgument(t, 0);
                      m_107 = ATgetArgument(t, 1);
                      n_107 = ATgetArgument(t, 2);
                      o_107 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_107;
                  t = map_1_0(h_6, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm v_107 = NULL;
  ATerm i_41 = t;
  int v_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_107 = ATgetArgument(t, 0);
          {
            ATerm w_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_41);
      t = v_107;
    }
  else
    {
      t = i_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_107 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_107;
    }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm m_108 = NULL;
  ATerm z_41 = t;
  int a_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_108 = ATgetArgument(t, 0);
          {
            ATerm c_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_42);
      t = m_108;
    }
  else
    {
      t = z_41;
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
static ATerm i_6 (ATerm t)
{
  ATerm q_108 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_108);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm d_42 = t;
  int e_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(g_42);
          }
        else
          {
            t = f_42;
            {
              ATerm s_108 = NULL,t_108 = NULL,u_108 = NULL,w_108 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  s_108 = ATgetArgument(t, 0);
                  t_108 = ATgetArgument(t, 1);
                  u_108 = ATgetArgument(t, 2);
                  w_108 = ATgetArgument(t, 3);
                  t = u_108;
                  t = map_1_0(k_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      s_108 = ATgetArgument(t, 0);
                      t_108 = ATgetArgument(t, 1);
                      u_108 = ATgetArgument(t, 2);
                      w_108 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_108;
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
  ATerm h_109 = NULL;
  ATerm k_42 = t;
  int m_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_109 = ATgetArgument(t, 0);
          {
            ATerm n_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_42);
      t = h_109;
    }
  else
    {
      t = k_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_109 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_109;
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm s_109 = NULL;
  ATerm o_42 = t;
  int p_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_109 = ATgetArgument(t, 0);
          {
            ATerm q_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_42);
      t = s_109;
    }
  else
    {
      t = o_42;
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
static ATerm m_6 (ATerm t)
{
  ATerm x_109 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_109);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm r_42 = t;
  int s_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_42);
    }
  else
    {
      t = r_42;
      {
        ATerm t_42 = t;
        int u_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(u_42);
          }
        else
          {
            t = t_42;
            {
              ATerm z_109 = NULL,a_110 = NULL,d_110 = NULL,e_110 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  z_109 = ATgetArgument(t, 0);
                  a_110 = ATgetArgument(t, 1);
                  d_110 = ATgetArgument(t, 2);
                  e_110 = ATgetArgument(t, 3);
                  t = d_110;
                  t = map_1_0(o_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      z_109 = ATgetArgument(t, 0);
                      a_110 = ATgetArgument(t, 1);
                      d_110 = ATgetArgument(t, 2);
                      e_110 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_110;
                  t = map_1_0(p_6, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm l_110 = NULL;
  ATerm v_42 = t;
  int w_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_110 = ATgetArgument(t, 0);
          {
            ATerm x_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_42);
      t = l_110;
    }
  else
    {
      t = v_42;
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
static ATerm p_6 (ATerm t)
{
  ATerm u_110 = NULL;
  ATerm z_42 = t;
  int a_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_110 = ATgetArgument(t, 0);
          {
            ATerm b_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_43);
      t = u_110;
    }
  else
    {
      t = z_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_110;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm z_105 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      z_105 = ATgetArgument(t, 0);
      t = z_105;
      t = free_vars_3_0(q_5, r_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          z_105 = ATgetArgument(t, 0);
          t = z_105;
          t = free_vars_3_0(x_5, y_5, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              z_105 = ATgetArgument(t, 0);
              t = z_105;
              t = free_vars_3_0(i_6, j_6, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  z_105 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = z_105;
              t = free_vars_3_0(m_6, n_6, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm u_12 (ATerm b_120 (ATerm), ATerm u_41, ATerm t_41, ATerm t)
{
  static ATerm m_111 (ATerm t)
  {
    ATerm h_111 = NULL,i_111 = NULL,j_111 = NULL;
    h_111 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_41;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_111 = ATgetFirst((ATermList) t);
            j_111 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_43 = t;
          int d_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_111;
              {
                static ATerm s_6 (ATerm t)
                {
                  t = t_41;
                  return(t);
                }
                t = v_12(b_120, s_6, i_111, j_111, t);
              }
              t = m_111(t);
              LocalPopChoice(d_43);
            }
          else
            {
              t = c_43;
              {
                ATerm v_46 = NULL,i_47 = NULL,r_6 = NULL;
                t = SSLgetAnnotations(h_111);
                v_46 = t;
                t = j_111;
                t = m_111(t);
                i_47 = t;
                t = (ATerm) ATinsert(CheckATermList(i_47), i_111);
                r_6 = t;
                t = SSLsetAnnotations(r_6, v_46);
              }
            }
        }
      }
    return(t);
  }
  t = u_41;
  t = m_111(t);
  return(t);
}
static ATerm v_12 (ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm y_41, ATerm x_41, ATerm t)
{
  t = f_120(t);
  {
    static ATerm t_6 (ATerm t)
    {
      ATerm o_111 = NULL;
      o_111 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_41, o_111);
      t = e_120(t);
      return(t);
    }
    t = fetch_1_0(t_6, t);
  }
  t = x_41;
  return(t);
}
static ATerm w_12 (ATerm w_119 (ATerm), ATerm s_41, ATerm r_41, ATerm t)
{
  static ATerm g_112 (ATerm t)
  {
    ATerm z_111 = NULL,a_112 = NULL,b_112 = NULL;
    z_111 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_111;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_112 = ATgetFirst((ATermList) t);
            b_112 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_43 = t;
          int j_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_111;
              {
                static ATerm w_6 (ATerm t)
                {
                  t = r_41;
                  return(t);
                }
                t = v_12(w_119, w_6, a_112, b_112, t);
              }
              t = g_112(t);
              LocalPopChoice(j_43);
            }
          else
            {
              t = i_43;
              {
                ATerm c_48 = NULL,l_48 = NULL,v_6 = NULL;
                t = SSLgetAnnotations(z_111);
                c_48 = t;
                t = b_112;
                t = g_112(t);
                l_48 = t;
                t = (ATerm) ATinsert(CheckATermList(l_48), a_112);
                v_6 = t;
                t = SSLsetAnnotations(v_6, c_48);
              }
            }
        }
      }
    return(t);
  }
  t = s_41;
  t = g_112(t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_43 = ATgetArgument(t, 0);
      if(((ATgetType(k_43) != AT_LIST) || !(ATisEmpty(k_43))))
        _fail(t);
      {
        ATerm l_43 = ATgetArgument(t, 1);
        if(((ATgetType(l_43) != AT_LIST) || !(ATisEmpty(l_43))))
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
  ATerm o_112 = NULL,p_112 = NULL,q_112 = NULL,r_112 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_43 = ATgetArgument(t, 0);
      if(((ATgetType(m_43) == AT_LIST) && !(ATisEmpty(m_43))))
        {
          o_112 = ATgetFirst((ATermList) m_43);
          p_112 = (ATerm) ATgetNext((ATermList) m_43);
        }
      else
        _fail(t);
      {
        ATerm n_43 = ATgetArgument(t, 1);
        if(((ATgetType(n_43) == AT_LIST) && !(ATisEmpty(n_43))))
          {
            q_112 = ATgetFirst((ATermList) n_43);
            r_112 = (ATerm) ATgetNext((ATermList) n_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_112, q_112), (ATerm) ATmakeAppl(sym__2, p_112, r_112));
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm s_112 = NULL,t_112 = NULL;
  if(match_cons(t, sym__2))
    {
      s_112 = ATgetArgument(t, 0);
      t_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_112), s_112);
  return(t);
}
static ATerm y_12 (ATerm c_623, ATerm h_623, ATerm u_60, ATerm t)
{
  ATerm j_112 = NULL,k_112 = NULL,l_112 = NULL,m_112 = NULL;
  t = SSL_explode_term(h_623);
  if(match_cons(t, sym__2))
    {
      j_112 = ATgetArgument(t, 0);
      l_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(c_623);
  if(match_cons(t, sym__2))
    {
      if((j_112 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      k_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_112, l_112);
  t = genzip_4_0(z_6, a_7, b_7, _id, t);
  m_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_112, u_60);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm j_115 (ATerm), ATerm k_115 (ATerm), ATerm t)
{
  static ATerm v_112 (ATerm t)
  {
    ATerm o_43 = t;
    int p_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_115(t);
        LocalPopChoice(p_43);
      }
    else
      {
        t = o_43;
        t = k_115(t);
        t = v_112(t);
      }
    return(t);
  }
  t = v_112(t);
  return(t);
}
ATerm for_3_0 (ATerm m_115 (ATerm), ATerm n_115 (ATerm), ATerm o_115 (ATerm), ATerm t)
{
  t = m_115(t);
  t = while_not_2_0(n_115, o_115, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm d_113 = NULL;
  d_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, d_113);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm f_113 = NULL,g_113 = NULL,h_113 = NULL,i_113 = NULL,x_6 = NULL;
  i_113 = t;
  if(match_cons(t, sym__2))
    {
      g_113 = ATgetArgument(t, 0);
      h_113 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_113);
  f_113 = t;
  t = h_113;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_113, h_113);
  x_6 = t;
  t = SSLsetAnnotations(x_6, f_113);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm h_114 = NULL,i_114 = NULL,j_114 = NULL,k_114 = NULL,l_114 = NULL;
  h_114 = t;
  if(match_cons(t, sym__2))
    {
      i_114 = ATgetArgument(t, 0);
      j_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_114;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_114 = ATgetFirst((ATermList) t);
      l_114 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_43 = t;
        int r_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_115(i_114, j_114, h_114, t);
            LocalPopChoice(r_43);
          }
        else
          {
            t = q_43;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_114), k_114), l_114);
          }
      }
    }
  else
    {
      t = a_115(i_114, j_114, h_114, t);
    }
  return(t);
}
static ATerm a_115 (ATerm o_113, ATerm p_113, ATerm q_113, ATerm t)
{
  ATerm r_113 = NULL,u_113 = NULL,y_6 = NULL,y_113 = NULL,z_113 = NULL,a_114 = NULL,b_114 = NULL;
  t = SSLgetAnnotations(q_113);
  r_113 = t;
  t = p_113;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_113 = ATgetFirst((ATermList) t);
      b_114 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_113;
  if(match_cons(t, sym__2))
    {
      z_113 = ATgetArgument(t, 0);
      a_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_43 = t;
    int u_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_114;
        if((z_113 != t))
          {
            _fail(t);
          }
        t = b_114;
        LocalPopChoice(u_43);
      }
    else
      {
        t = s_43;
        t = p_113;
        t = y_12(z_113, a_114, b_114, t);
      }
  }
  u_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_113, u_113);
  y_6 = t;
  t = SSLsetAnnotations(y_6, r_113);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm z_114 = NULL;
  if(match_cons(t, sym__2))
    {
      z_114 = ATgetArgument(t, 0);
      if((z_114 != ATgetArgument(t, 1)))
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
  ATerm v_43 = t;
  int w_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(c_7, d_7, f_7, t);
      LocalPopChoice(w_43);
    }
  else
    {
      t = v_43;
      {
        ATerm p_114 = NULL,q_114 = NULL,v_114 = NULL;
        p_114 = t;
        if(match_cons(t, sym__2))
          {
            q_114 = ATgetArgument(t, 0);
            v_114 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_114;
        t = w_12(h_7, q_114, v_114, t);
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
static ATerm o_7 (ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL;
  if(match_cons(t, sym__2))
    {
      i_49 = ATgetArgument(t, 0);
      j_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_12(p_7, i_49, j_49, t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm k_49 = NULL;
  if(match_cons(t, sym__2))
    {
      k_49 = ATgetArgument(t, 0);
      if((k_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL;
  if(match_cons(t, sym__2))
    {
      b_50 = ATgetArgument(t, 0);
      c_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_12(w_7, b_50, c_50, t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm h_50 = NULL;
  if(match_cons(t, sym__2))
    {
      h_50 = ATgetArgument(t, 0);
      if((h_50 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm p_126 (ATerm), ATerm q_126 (ATerm), ATerm r_126 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm w_115 (ATerm t)
  {
    ATerm y_43 = t;
    int z_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_126(t);
        LocalPopChoice(z_43);
      }
    else
      {
        t = y_43;
        {
          ATerm a_44 = t;
          int b_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_115 = NULL,f_115 = NULL,x_48 = NULL,y_48 = NULL;
              d_115 = t;
              t = q_126(t);
              f_115 = t;
              t = d_115;
              {
                static ATerm j_7 (ATerm t)
                {
                  ATerm h_115 = NULL;
                  t = w_115(t);
                  h_115 = t;
                  t = (ATerm) ATmakeAppl(sym__2, h_115, f_115);
                  t = diff_0_0(t);
                  return(t);
                }
                t = r_126(j_7, w_115, m_7, t);
              }
              y_48 = t;
              t = SSL_explode_term(y_48);
              if(match_cons(t, sym__2))
                {
                  ATerm c_44 = ATgetArgument(t, 0);
                  x_48 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_48;
              t = foldr_3_0(n_7, o_7, _id, t);
              LocalPopChoice(b_44);
            }
          else
            {
              t = a_44;
              {
                ATerm q_49 = NULL,r_49 = NULL;
                r_49 = t;
                t = SSL_explode_term(r_49);
                if(match_cons(t, sym__2))
                  {
                    ATerm d_44 = ATgetArgument(t, 0);
                    q_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = q_49;
                t = foldr_3_0(r_7, s_7, w_115, t);
              }
            }
        }
      }
    return(t);
  }
  t = w_115(t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm k_116 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_116);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm e_44 = t;
  int f_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_44);
    }
  else
    {
      t = e_44;
      {
        ATerm h_44 = t;
        int j_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_44);
          }
        else
          {
            t = h_44;
            {
              ATerm m_116 = NULL,n_116 = NULL,t_116 = NULL,w_116 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  m_116 = ATgetArgument(t, 0);
                  n_116 = ATgetArgument(t, 1);
                  t_116 = ATgetArgument(t, 2);
                  w_116 = ATgetArgument(t, 3);
                  t = t_116;
                  t = map_1_0(z_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      m_116 = ATgetArgument(t, 0);
                      n_116 = ATgetArgument(t, 1);
                      t_116 = ATgetArgument(t, 2);
                      w_116 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_116;
                  t = map_1_0(a_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm e_117 = NULL;
  ATerm k_44 = t;
  int l_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_117 = ATgetArgument(t, 0);
          {
            ATerm m_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_44);
      t = e_117;
    }
  else
    {
      t = k_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_117 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_117;
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm u_117 = NULL;
  ATerm n_44 = t;
  int o_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_117 = ATgetArgument(t, 0);
          {
            ATerm p_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_44);
      t = u_117;
    }
  else
    {
      t = n_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_117 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_117;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm c_116 = NULL,g_116 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      g_116 = ATgetArgument(t, 0);
      t = g_116;
      if(match_cons(t, sym_Rule_3))
        {
          c_116 = ATgetArgument(t, 0);
          {
            ATerm q_44 = ATgetArgument(t, 1);
          }
          {
            ATerm r_44 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = c_116;
      t = free_vars_3_0(x_7, y_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          g_116 = ATgetArgument(t, 0);
          {
            ATerm u_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = g_116;
    }
  return(t);
}
ATerm Var_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm b_118 = NULL,c_118 = NULL,d_118 = NULL,e_118 = NULL,e_7 = NULL;
  e_118 = t;
  if(match_cons(t, sym_Var_1))
    {
      c_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_118);
  b_118 = t;
  t = c_118;
  t = x_86(t);
  d_118 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, d_118);
  e_7 = t;
  t = SSLsetAnnotations(e_7, b_118);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm x_44 = t;
  int y_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_44);
    }
  else
    {
      t = x_44;
      {
        ATerm n_118 = NULL,o_118 = NULL,p_118 = NULL,q_118 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            n_118 = ATgetArgument(t, 0);
            o_118 = ATgetArgument(t, 1);
            p_118 = ATgetArgument(t, 2);
            q_118 = ATgetArgument(t, 3);
            t = p_118;
            t = map_1_0(c_8, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                n_118 = ATgetArgument(t, 0);
                o_118 = ATgetArgument(t, 1);
                p_118 = ATgetArgument(t, 2);
                q_118 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = p_118;
            t = map_1_0(e_8, t);
          }
      }
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm x_118 = NULL;
  ATerm c_45 = t;
  int d_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_118 = ATgetArgument(t, 0);
          {
            ATerm e_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_45);
      t = x_118;
    }
  else
    {
      t = c_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_118 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_118;
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm g_119 = NULL;
  ATerm f_45 = t;
  int h_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_119 = ATgetArgument(t, 0);
          {
            ATerm i_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_45);
      t = g_119;
    }
  else
    {
      t = f_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_119 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_119;
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm j_119 = NULL,k_119 = NULL,l_119 = NULL,m_119 = NULL,n_119 = NULL;
  j_119 = t;
  if(match_cons(t, sym_Let_2))
    {
      k_119 = ATgetArgument(t, 0);
      l_119 = ATgetArgument(t, 1);
      t = j_119;
      t = p_12(k_119, l_119, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          k_119 = ATgetArgument(t, 0);
          l_119 = ATgetArgument(t, 1);
          m_119 = ATgetArgument(t, 2);
          t = l_119;
          t = map_1_0(l_8, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              k_119 = ATgetArgument(t, 0);
              l_119 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, k_119);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  k_119 = ATgetArgument(t, 0);
                  l_119 = ATgetArgument(t, 1);
                  m_119 = ATgetArgument(t, 2);
                  n_119 = ATgetArgument(t, 3);
                  t = l_119;
                  t = map_1_0(p_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_119 = ATgetArgument(t, 0);
                      l_119 = ATgetArgument(t, 1);
                      m_119 = ATgetArgument(t, 2);
                      n_119 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_119;
                  t = map_1_0(q_8, t);
                }
            }
        }
    }
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm v_119 = NULL;
  ATerm j_45 = t;
  int k_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_119 = ATgetArgument(t, 0);
          {
            ATerm l_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_45);
      t = v_119;
    }
  else
    {
      t = j_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_119 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_119;
    }
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm s_120 = NULL;
  ATerm n_45 = t;
  int o_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_120 = ATgetArgument(t, 0);
          {
            ATerm p_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_45);
      t = s_120;
    }
  else
    {
      t = n_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_120 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_120;
    }
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm b_121 = NULL;
  ATerm q_45 = t;
  int r_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_121 = ATgetArgument(t, 0);
          {
            ATerm t_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_45);
      t = b_121;
    }
  else
    {
      t = q_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_121 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_121;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, b_8, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, f_8, sboundin_3_0, spaste_1_0, t);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm v_53 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      v_53 = ATgetArgument(t, 0);
      {
        ATerm v_45 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = v_53;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_45 = ATgetArgument(t, 0);
      if(((ATgetType(w_45) != AT_LIST) || !(ATisEmpty(w_45))))
        _fail(t);
      {
        ATerm x_45 = ATgetArgument(t, 1);
        if(((ATgetType(x_45) != AT_LIST) || !(ATisEmpty(x_45))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_45 = ATgetArgument(t, 0);
      if(((ATgetType(y_45) == AT_LIST) && !(ATisEmpty(y_45))))
        {
          w_53 = ATgetFirst((ATermList) y_45);
          x_53 = (ATerm) ATgetNext((ATermList) y_45);
        }
      else
        _fail(t);
      {
        ATerm z_45 = ATgetArgument(t, 1);
        if(((ATgetType(z_45) == AT_LIST) && !(ATisEmpty(z_45))))
          {
            y_53 = ATgetFirst((ATermList) z_45);
            z_53 = (ATerm) ATgetNext((ATermList) z_45);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_53, y_53), (ATerm) ATmakeAppl(sym__2, x_53, z_53));
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm a_54 = NULL,b_54 = NULL;
  if(match_cons(t, sym__2))
    {
      a_54 = ATgetArgument(t, 0);
      b_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_54), a_54);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm j_54 = NULL,k_54 = NULL;
  if(match_cons(t, sym__2))
    {
      j_54 = ATgetArgument(t, 0);
      k_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_54), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_54))));
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm InlineCall_0_0 (ATerm t)
{
  ATerm c_123 = NULL,d_123 = NULL,e_123 = NULL,f_123 = NULL,g_123 = NULL;
  c_123 = t;
  if(match_cons(t, sym_CallT_3))
    {
      d_123 = ATgetArgument(t, 0);
      f_123 = ATgetArgument(t, 1);
      g_123 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_123;
  if(match_cons(t, sym_SVar_1))
    {
      e_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_46 = t;
    int b_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_51 = NULL,l_51 = NULL;
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_123), (ATerm)ATempty, (ATerm) ATempty);
        k_51 = t;
        t = term_x_13;
        l_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_123), (ATerm)ATempty, (ATerm) ATempty));
        t = u_6(l_51, k_51, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = c_123;
        _fail(t);
        LocalPopChoice(b_46);
      }
    else
      {
        t = a_46;
        {
          ATerm d_46 = t;
          int e_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_52 = NULL,l_52 = NULL;
              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_123), (ATerm)ATempty, (ATerm) ATempty);
              k_52 = t;
              t = term_x_13;
              l_52 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_123), (ATerm)ATempty, (ATerm) ATempty));
              t = u_6(l_52, k_52, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = c_123;
              _fail(t);
              LocalPopChoice(e_46);
            }
          else
            {
              t = d_46;
              {
                ATerm f_46 = t;
                int i_46 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_52 = NULL,y_52 = NULL,a_53 = NULL,b_53 = NULL,j_53 = NULL,k_53 = NULL,q_53 = NULL,r_53 = NULL,u_53 = NULL,q_54 = NULL,r_54 = NULL;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_123), (ATerm)ATempty, (ATerm) ATempty);
                    q_54 = t;
                    t = term_x_13;
                    r_54 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_123), (ATerm)ATempty, (ATerm) ATempty));
                    t = u_6(r_54, q_54, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm j_46 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) j_46) != ATmakeSymbol("d_0", 0, ATtrue)))
                          _fail(t);
                        x_52 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = x_52;
                    t = strename_0_0(t);
                    if(match_cons(t, sym_SDefT_4))
                      {
                        if((e_123 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        y_52 = ATgetArgument(t, 1);
                        b_53 = ATgetArgument(t, 2);
                        a_53 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__3, y_52, f_123, a_53);
                    t = substitute_args_0_0(t);
                    k_53 = t;
                    t = b_53;
                    t = map_1_0(r_8, t);
                    j_53 = t;
                    t = (ATerm) ATmakeAppl(sym__2, g_123, j_53);
                    t = genzip_4_0(s_8, t_8, u_8, v_8, t);
                    q_53 = t;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_123), (ATerm)ATempty, (ATerm) ATempty);
                    r_53 = t;
                    t = term_k_46;
                    u_53 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_123), (ATerm)ATempty, (ATerm) ATempty), term_k_46);
                    t = i_13(x_8, r_53, u_53, t);
                    t = (ATerm) ATmakeAppl(sym_Scope_2, j_53, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, q_53), k_53));
                    t = simplify_0_0(t);
                    LocalPopChoice(i_46);
                  }
                else
                  {
                    t = f_46;
                    {
                      ATerm b_55 = NULL,e_55 = NULL;
                      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_123), (ATerm)ATempty, (ATerm) ATempty);
                      b_55 = t;
                      t = term_x_13;
                      e_55 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_123), (ATerm)ATempty, (ATerm) ATempty));
                      t = u_6(e_55, b_55, t);
                      if(!(match_cons(t, sym_Undefined_0)))
                        _fail(t);
                      t = c_123;
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
  ATerm l_46 = t;
  if((PushChoice() == 0))
    {
      ATerm l_123 = NULL,m_123 = NULL;
      if(match_cons(t, sym__2))
        {
          l_123 = ATgetArgument(t, 0);
          m_123 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, l_123, m_123);
      {
        ATerm m_46 = t;
        int n_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(l_123, m_123);
            LocalPopChoice(n_46);
          }
        else
          {
            t = m_46;
            t = SSL_gtr(l_123, m_123);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, l_123, m_123);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_46;
    }
  return(t);
}
ATerm foldr_3_0 (ATerm y_122 (ATerm), ATerm z_122 (ATerm), ATerm a_123 (ATerm), ATerm t)
{
  ATerm o_123 = NULL,p_123 = NULL,q_123 = NULL;
  o_123 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_123;
      t = y_122(t);
    }
  else
    {
      ATerm t_123 = NULL,u_123 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_123 = ATgetFirst((ATermList) t);
          q_123 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_123;
      t = a_123(t);
      t_123 = t;
      t = q_123;
      t = foldr_3_0(y_122, z_122, a_123, t);
      u_123 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_123, u_123);
      t = z_122(t);
    }
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_o_46;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm l_55 = NULL,m_55 = NULL;
  if(match_cons(t, sym__2))
    {
      l_55 = ATgetArgument(t, 0);
      m_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_15(l_55, m_55, t);
  return(t);
}
ATerm occurrences_1_0 (ATerm i_120 (ATerm), ATerm t)
{
  ATerm x_123 = NULL,y_123 = NULL,z_123 = NULL,g_55 = NULL;
  z_123 = t;
  {
    ATerm p_46 = t;
    int r_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_120(t);
        t = term_g_14;
        LocalPopChoice(r_46);
      }
    else
      {
        t = p_46;
        t = term_o_46;
      }
  }
  x_123 = t;
  t = SSL_explode_term(z_123);
  if(match_cons(t, sym__2))
    {
      ATerm s_46 = ATgetArgument(t, 0);
      g_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_55;
  {
    static ATerm d_9 (ATerm t)
    {
      t = occurrences_1_0(i_120, t);
      return(t);
    }
    t = foldr_3_0(y_8, c_9, d_9, t);
  }
  y_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_123, y_123);
  t = b_15(x_123, y_123, t);
  return(t);
}
static ATerm g_13 (ATerm c_107 (ATerm), ATerm s_24, ATerm r_24, ATerm t)
{
  ATerm c_124 = NULL,d_124 = NULL;
  c_124 = t;
  t = r_24;
  {
    ATerm t_46 = t;
    if((PushChoice() == 0))
      {
        static ATerm e_9 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm u_46 = ATgetArgument(t, 0);
              if(match_cons(u_46, sym_SVar_1))
                {
                  if((s_24 != ATgetArgument(u_46, 0)))
                    {
                      _fail(ATgetArgument(u_46, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm w_46 = ATgetArgument(t, 1);
              }
              {
                ATerm x_46 = ATgetArgument(t, 2);
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
        t = t_46;
      }
  }
  t = c_107(t);
  {
    static ATerm f_9 (ATerm t)
    {
      if(match_cons(t, sym_CallT_3))
        {
          ATerm y_46 = ATgetArgument(t, 0);
          if(match_cons(y_46, sym_SVar_1))
            {
              if((s_24 != ATgetArgument(y_46, 0)))
                {
                  _fail(ATgetArgument(y_46, 0));
                }
            }
          else
            _fail(t);
          {
            ATerm z_46 = ATgetArgument(t, 1);
          }
          {
            ATerm a_47 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      return(t);
    }
    t = occurrences_1_0(f_9, t);
  }
  d_124 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_124, term_g_14);
  t = leq_0_0(t);
  t = c_124;
  return(t);
}
static ATerm i_13 (ATerm s_116 (ATerm), ATerm u_34, ATerm s_34, ATerm t)
{
  ATerm e_124 = NULL,f_124 = NULL,g_124 = NULL,h_124 = NULL,i_124 = NULL,j_124 = NULL;
  h_124 = t;
  t = s_116(t);
  e_124 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_124, u_34, s_34);
  t = f_15(e_124, u_34, s_34, t);
  {
    ATerm b_47 = t;
    int c_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_124 = NULL;
        t = term_d_47;
        k_124 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_124, term_d_47);
        t = e_15(e_124, k_124, t);
        LocalPopChoice(c_47);
      }
    else
      {
        t = b_47;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_124 = ATgetFirst((ATermList) t);
      g_124 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_d_47;
  i_124 = t;
  t = (ATerm) ATinsert(CheckATermList(g_124), (ATerm) ATinsert(CheckATermList(f_124), u_34));
  j_124 = t;
  t = SSL_table_put(e_124, i_124, j_124);
  t = h_124;
  return(t);
}
static ATerm k_13 (ATerm r_36, ATerm s_36, ATerm t)
{
  ATerm l_124 = NULL,t_124 = NULL;
  t_124 = t;
  {
    ATerm e_47 = t;
    int g_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
        t = e_15(r_36, s_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_47 = ATgetFirst((ATermList) t);
            l_124 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(g_47);
        t = SSL_table_put(r_36, s_36, l_124);
        t = (ATerm) ATmakeAppl(sym__3, r_36, s_36, l_124);
      }
    else
      {
        t = e_47;
        t = SSL_table_remove(r_36, s_36);
        t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
      }
  }
  t = t_124;
  return(t);
}
ATerm end_scope_1_0 (ATerm p_116 (ATerm), ATerm t)
{
  ATerm u_124 = NULL,v_124 = NULL,w_124 = NULL,z_124 = NULL,a_125 = NULL;
  z_124 = t;
  t = p_116(t);
  w_124 = t;
  {
    ATerm j_47 = t;
    int k_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_125 = NULL;
        t = term_d_47;
        b_125 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_124, term_d_47);
        t = e_15(w_124, b_125, t);
        LocalPopChoice(k_47);
      }
    else
      {
        t = j_47;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_124 = ATgetFirst((ATermList) t);
      u_124 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_d_47;
  a_125 = t;
  t = SSL_table_put(w_124, a_125, u_124);
  t = v_124;
  {
    static ATerm g_9 (ATerm t)
    {
      ATerm c_125 = NULL;
      c_125 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_124, c_125);
      t = k_13(w_124, c_125, t);
      return(t);
    }
    t = map_1_0(g_9, t);
  }
  t = z_124;
  return(t);
}
ATerm restore_always_2_0 (ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm t)
{
  ATerm l_47 = t;
  int m_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_112(t);
      t = f_112(t);
      LocalPopChoice(m_47);
    }
  else
    {
      t = l_47;
      t = f_112(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm o_116 (ATerm), ATerm t)
{
  ATerm e_125 = NULL,h_125 = NULL,i_125 = NULL,j_125 = NULL,k_125 = NULL;
  h_125 = t;
  t = o_116(t);
  e_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_125, term_d_47);
  {
    ATerm n_47 = t;
    int o_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_125 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm p_47 = ATgetArgument(t, 0);
            ATerm q_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_d_47;
        o_125 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_125, term_d_47);
        t = e_15(e_125, o_125, t);
        LocalPopChoice(o_47);
      }
    else
      {
        t = n_47;
        t = (ATerm) ATempty;
      }
  }
  i_125 = t;
  t = term_d_47;
  j_125 = t;
  t = (ATerm) ATinsert(CheckATermList(i_125), (ATerm) ATempty);
  k_125 = t;
  t = SSL_table_put(e_125, j_125, k_125);
  t = h_125;
  return(t);
}
ATerm scope_2_0 (ATerm q_116 (ATerm), ATerm r_116 (ATerm), ATerm t)
{
  static ATerm h_9 (ATerm t)
  {
    t = end_scope_1_0(q_116, t);
    return(t);
  }
  t = begin_scope_1_0(q_116, t);
  t = restore_always_2_0(r_116, h_9, t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = term_y_13;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm inline_sdef_0_0 (ATerm t)
{
  static ATerm k_9 (ATerm t)
  {
    static ATerm m_9 (ATerm t)
    {
      ATerm s_47 = t;
      int t_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_125 = NULL,u_125 = NULL,v_125 = NULL;
          t_125 = t;
          {
            ATerm u_47 = t;
            int v_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    u_125 = ATgetArgument(t, 0);
                    {
                      ATerm w_47 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm x_47 = ATgetArgument(t, 2);
                    }
                    {
                      ATerm y_47 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(v_47);
                {
                  ATerm y_125 = NULL,z_125 = NULL;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_125), (ATerm)ATempty, (ATerm) ATempty);
                  y_125 = t;
                  t = term_k_46;
                  z_125 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_125), (ATerm)ATempty, (ATerm) ATempty), term_k_46);
                  t = i_13(p_9, y_125, z_125, t);
                  t = t_125;
                }
              }
            else
              {
                t = u_47;
                if(match_cons(t, sym_Let_2))
                  {
                    u_125 = ATgetArgument(t, 0);
                    v_125 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_125;
                {
                  static ATerm t_9 (ATerm t)
                  {
                    ATerm c_126 = NULL,d_126 = NULL;
                    if(match_cons(t, sym_SDefT_4))
                      {
                        c_126 = ATgetArgument(t, 0);
                        {
                          ATerm z_47 = ATgetArgument(t, 1);
                        }
                        {
                          ATerm a_48 = ATgetArgument(t, 2);
                        }
                        d_126 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    {
                      static ATerm v_9 (ATerm t)
                      {
                        t = v_125;
                        return(t);
                      }
                      t = g_13(v_9, c_126, d_126, t);
                    }
                    t = AddSDef_0_0(t);
                    return(t);
                  }
                  t = map_1_0(t_9, t);
                }
                t = (ATerm) ATmakeAppl(sym_Let_2, u_125, v_125);
              }
          }
          LocalPopChoice(t_47);
        }
      else
        {
          t = s_47;
          t = repeat_2_0(InlineCall_0_0, _id, t);
        }
      t = SRTS_all(inline_sdef_0_0, t);
      return(t);
    }
    t = scope_2_0(l_9, m_9, t);
    return(t);
  }
  t = scope_2_0(i_9, k_9, t);
  return(t);
}
ATerm topdown_1_0 (ATerm x_108 (ATerm), ATerm t)
{
  static ATerm b_10 (ATerm t)
  {
    t = topdown_1_0(x_108, t);
    return(t);
  }
  t = x_108(t);
  t = SRTS_all(b_10, t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm b_48 = t;
  int d_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm e_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(d_48);
      {
        ATerm h_126 = NULL,i_126 = NULL;
        h_126 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm f_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        i_126 = t;
        t = SSLgetAnnotations(h_126);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_48 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) h_48) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm i_48 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(i_48) != AT_LIST) || !(ATisEmpty(i_48))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = i_126;
      }
    }
  else
    {
      t = b_48;
      {
        ATerm j_48 = t;
        int k_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm m_48 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) m_48) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm n_48 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(k_48);
            _fail(t);
          }
        else
          {
            t = j_48;
          }
      }
    }
  return(t);
}
static ATerm m_13 (ATerm e_78, ATerm d_78, ATerm t)
{
  t = e_78;
  t = topdown_1_0(c_10, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, e_78);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm v_126 = NULL,w_126 = NULL,y_126 = NULL,z_126 = NULL,a_127 = NULL,b_127 = NULL,c_127 = NULL,d_127 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      y_126 = ATgetArgument(t, 0);
      b_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_126;
  if(match_cons(t, sym_Match_1))
    {
      z_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_126;
  if(match_cons(t, sym_Var_1))
    {
      a_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_127;
  if(match_cons(t, sym_Seq_2))
    {
      c_127 = ATgetArgument(t, 0);
      w_126 = ATgetArgument(t, 1);
      t = c_127;
      if(match_cons(t, sym_Build_1))
        {
          d_127 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_127;
      if(match_cons(t, sym_Var_1))
        {
          v_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_126;
      if((a_127 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_127)), w_126);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          c_127 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_127;
      if(match_cons(t, sym_Var_1))
        {
          d_127 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_127;
      if((a_127 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_127));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm l_127 = NULL,m_127 = NULL,o_127 = NULL,p_127 = NULL,q_127 = NULL,r_127 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      o_127 = ATgetArgument(t, 0);
      q_127 = ATgetArgument(t, 1);
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
  t = q_127;
  if(match_cons(t, sym_Seq_2))
    {
      r_127 = ATgetArgument(t, 0);
      m_127 = ATgetArgument(t, 1);
      t = r_127;
      if(match_cons(t, sym_Match_1))
        {
          l_127 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_127;
      if((p_127 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_127), m_127);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          r_127 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_127;
      if((p_127 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, p_127);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm z_127 = NULL,a_128 = NULL,c_128 = NULL,d_128 = NULL,e_128 = NULL,f_128 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      c_128 = ATgetArgument(t, 0);
      e_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_128;
  if(match_cons(t, sym_Match_1))
    {
      d_128 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_128;
  if(match_cons(t, sym_Seq_2))
    {
      f_128 = ATgetArgument(t, 0);
      a_128 = ATgetArgument(t, 1);
      t = f_128;
      if(match_cons(t, sym_Match_1))
        {
          z_127 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_127;
      if((d_128 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_128), a_128);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          f_128 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_128;
      if((d_128 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, d_128);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm n_128 = NULL,o_128 = NULL,p_128 = NULL,r_128 = NULL,t_128 = NULL,u_128 = NULL,v_128 = NULL,w_128 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      r_128 = ATgetArgument(t, 0);
      t_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_128;
  if(match_cons(t, sym_Build_1))
    {
      ATerm o_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_128;
  if(match_cons(t, sym_Seq_2))
    {
      u_128 = ATgetArgument(t, 0);
      v_128 = ATgetArgument(t, 1);
      t = u_128;
      if(match_cons(t, sym_PrimT_3))
        {
          n_128 = ATgetArgument(t, 0);
          o_128 = ATgetArgument(t, 1);
          p_128 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, n_128, o_128, p_128), v_128);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          u_128 = ATgetArgument(t, 0);
          v_128 = ATgetArgument(t, 1);
          w_128 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, u_128, v_128, w_128);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm i_129 = NULL,j_129 = NULL,l_129 = NULL,n_129 = NULL,o_129 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      l_129 = ATgetArgument(t, 0);
      n_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_129;
  if(match_cons(t, sym_Build_1))
    {
      ATerm p_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_129;
  if(match_cons(t, sym_Seq_2))
    {
      o_129 = ATgetArgument(t, 0);
      j_129 = ATgetArgument(t, 1);
      t = o_129;
      if(match_cons(t, sym_Build_1))
        {
          i_129 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_129), j_129);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          o_129 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, o_129);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm j_113 (ATerm), ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm t)
{
  static ATerm y_129 (ATerm t)
  {
    ATerm q_48 = t;
    int r_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_113(t);
        LocalPopChoice(r_48);
      }
    else
      {
        t = q_48;
        {
          ATerm s_129 = NULL,t_129 = NULL,u_129 = NULL,v_129 = NULL,w_129 = NULL,x_129 = NULL,g_7 = NULL;
          t = k_113(t);
          x_129 = t;
          if(match_cons(t, sym__2))
            {
              t_129 = ATgetArgument(t, 0);
              u_129 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_129);
          s_129 = t;
          t = t_129;
          t = m_113(t);
          v_129 = t;
          t = u_129;
          t = y_129(t);
          w_129 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_129, w_129);
          g_7 = t;
          t = SSLsetAnnotations(g_7, s_129);
          t = l_113(t);
        }
      }
    return(t);
  }
  t = y_129(t);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_48 = ATgetArgument(t, 0);
      if(((ATgetType(t_48) != AT_LIST) || !(ATisEmpty(t_48))))
        _fail(t);
      {
        ATerm u_48 = ATgetArgument(t, 1);
        if(((ATgetType(u_48) != AT_LIST) || !(ATisEmpty(u_48))))
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
  ATerm x_130 = NULL,y_130 = NULL,z_130 = NULL,a_131 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_48 = ATgetArgument(t, 0);
      if(((ATgetType(v_48) == AT_LIST) && !(ATisEmpty(v_48))))
        {
          x_130 = ATgetFirst((ATermList) v_48);
          y_130 = (ATerm) ATgetNext((ATermList) v_48);
        }
      else
        _fail(t);
      {
        ATerm w_48 = ATgetArgument(t, 1);
        if(((ATgetType(w_48) == AT_LIST) && !(ATisEmpty(w_48))))
          {
            z_130 = ATgetFirst((ATermList) w_48);
            a_131 = (ATerm) ATgetNext((ATermList) w_48);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_130, z_130), (ATerm) ATmakeAppl(sym__2, y_130, a_131));
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm b_131 = NULL,c_131 = NULL;
  if(match_cons(t, sym__2))
    {
      b_131 = ATgetArgument(t, 0);
      c_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_131), b_131);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm d_131 = NULL,e_131 = NULL;
  if(match_cons(t, sym__2))
    {
      d_131 = ATgetArgument(t, 0);
      e_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_131), (ATerm) ATmakeAppl(sym_Match_1, e_131));
  return(t);
}
static ATerm i_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_48 = ATgetArgument(t, 0);
      if(((ATgetType(z_48) != AT_LIST) || !(ATisEmpty(z_48))))
        _fail(t);
      {
        ATerm a_49 = ATgetArgument(t, 1);
        if(((ATgetType(a_49) != AT_LIST) || !(ATisEmpty(a_49))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm j_131 = NULL,k_131 = NULL,l_131 = NULL,m_131 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_49 = ATgetArgument(t, 0);
      if(((ATgetType(b_49) == AT_LIST) && !(ATisEmpty(b_49))))
        {
          j_131 = ATgetFirst((ATermList) b_49);
          k_131 = (ATerm) ATgetNext((ATermList) b_49);
        }
      else
        _fail(t);
      {
        ATerm c_49 = ATgetArgument(t, 1);
        if(((ATgetType(c_49) == AT_LIST) && !(ATisEmpty(c_49))))
          {
            l_131 = ATgetFirst((ATermList) c_49);
            m_131 = (ATerm) ATgetNext((ATermList) c_49);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_131, l_131), (ATerm) ATmakeAppl(sym__2, k_131, m_131));
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm n_131 = NULL,o_131 = NULL;
  if(match_cons(t, sym__2))
    {
      n_131 = ATgetArgument(t, 0);
      o_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_131), n_131);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm p_131 = NULL,q_131 = NULL;
  if(match_cons(t, sym__2))
    {
      p_131 = ATgetArgument(t, 0);
      q_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_131), (ATerm) ATmakeAppl(sym_Match_1, q_131));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm g_130 = NULL,h_130 = NULL,i_130 = NULL,k_130 = NULL,l_130 = NULL,m_130 = NULL,n_130 = NULL,o_130 = NULL,p_130 = NULL,q_130 = NULL,r_130 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      k_130 = ATgetArgument(t, 0);
      o_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_130;
  if(match_cons(t, sym_Build_1))
    {
      l_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_130;
  if(match_cons(t, sym_Op_2))
    {
      m_130 = ATgetArgument(t, 0);
      n_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_130;
  if(match_cons(t, sym_Seq_2))
    {
      p_130 = ATgetArgument(t, 0);
      i_130 = ATgetArgument(t, 1);
      {
        ATerm w_130 = NULL;
        t = p_130;
        if(match_cons(t, sym_Match_1))
          {
            q_130 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_130;
        if(match_cons(t, sym_Op_2))
          {
            g_130 = ATgetArgument(t, 0);
            h_130 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_130;
        if((m_130 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, n_130, h_130);
        t = genzip_4_0(d_10, f_10, g_10, h_10, t);
        w_130 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_130), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, m_130, n_130)), i_130));
      }
    }
  else
    {
      ATerm i_131 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          p_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_130;
      if(match_cons(t, sym_Op_2))
        {
          q_130 = ATgetArgument(t, 0);
          r_130 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_130;
      if((m_130 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, n_130, r_130);
      t = genzip_4_0(i_10, j_10, k_10, m_10, t);
      i_131 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_131), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, m_130, n_130)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm m_132 = NULL,q_132 = NULL,r_132 = NULL,s_132 = NULL,t_132 = NULL,v_132 = NULL,w_132 = NULL,x_132 = NULL;
  q_132 = t;
  if(match_cons(t, sym_Seq_2))
    {
      r_132 = ATgetArgument(t, 0);
      v_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_132;
  if(match_cons(t, sym_Build_1))
    {
      s_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_132;
  if(match_cons(t, sym_Op_2))
    {
      t_132 = ATgetArgument(t, 0);
      {
        ATerm d_49 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = v_132;
  {
    ATerm e_49 = t;
    int f_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            w_132 = ATgetArgument(t, 0);
            {
              ATerm g_49 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(f_49);
        t = w_132;
        if(match_cons(t, sym_Match_1))
          {
            x_132 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_132;
        if(match_cons(t, sym_Op_2))
          {
            m_132 = ATgetArgument(t, 0);
            {
              ATerm h_49 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_132, m_132);
        {
          ATerm l_49 = t;
          if((PushChoice() == 0))
            {
              ATerm u_55 = NULL;
              if(match_cons(t, sym__2))
                {
                  u_55 = ATgetArgument(t, 0);
                  if((u_55 != ATgetArgument(t, 1)))
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
              t = l_49;
            }
        }
        t = term_x_16;
      }
    else
      {
        t = e_49;
        if(match_cons(t, sym_Match_1))
          {
            w_132 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_132;
        if(match_cons(t, sym_Op_2))
          {
            x_132 = ATgetArgument(t, 0);
            {
              ATerm m_49 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_132, x_132);
        {
          ATerm n_49 = t;
          if((PushChoice() == 0))
            {
              ATerm p_56 = NULL;
              if(match_cons(t, sym__2))
                {
                  p_56 = ATgetArgument(t, 0);
                  if((p_56 != ATgetArgument(t, 1)))
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
              t = n_49;
            }
        }
        t = term_x_16;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm b_110 (ATerm), ATerm t)
{
  static ATerm b_133 (ATerm t)
  {
    ATerm o_49 = t;
    int s_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_110(t);
        LocalPopChoice(s_49);
      }
    else
      {
        t = o_49;
        t = SRTS_one(b_133, t);
      }
    return(t);
  }
  t = b_133(t);
  return(t);
}
ATerm at_end_1_0 (ATerm y_117 (ATerm), ATerm t)
{
  static ATerm w_133 (ATerm t)
  {
    ATerm t_133 = NULL,u_133 = NULL,v_133 = NULL;
    v_133 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_133 = ATgetFirst((ATermList) t);
        u_133 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm g_57 = NULL,r_57 = NULL,i_7 = NULL;
          t = SSLgetAnnotations(v_133);
          g_57 = t;
          t = u_133;
          t = w_133(t);
          r_57 = t;
          t = (ATerm) ATinsert(CheckATermList(r_57), t_133);
          i_7 = t;
          t = SSLsetAnnotations(i_7, g_57);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_133;
        t = y_117(t);
      }
    return(t);
  }
  t = w_133(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_133 = NULL,e_133 = NULL,f_133 = NULL;
  d_133 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_133;
    }
  else
    {
      static ATerm o_10 (ATerm t)
      {
        t = not_null(f_133);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_133 = ATgetFirst((ATermList) t);
          if(((f_133 != NULL) && (f_133 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_133 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_133;
      t = at_end_1_0(o_10, t);
    }
  return(t);
}
static ATerm i_134 (ATerm a_134, ATerm t)
{
  ATerm b_134 = NULL;
  t = SSL_explode_term(a_134);
  if(match_cons(t, sym__2))
    {
      ATerm t_49 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_49) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_134 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_134;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_134 = NULL,e_134 = NULL,f_134 = NULL;
  f_134 = t;
  if(match_cons(t, sym__2))
    {
      d_134 = ATgetArgument(t, 0);
      e_134 = ATgetArgument(t, 1);
      {
        ATerm u_49 = t;
        int v_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm q_10 (ATerm t)
            {
              t = e_134;
              return(t);
            }
            t = d_134;
            t = at_end_1_0(q_10, t);
            LocalPopChoice(v_49);
          }
        else
          {
            t = u_49;
            t = i_134(f_134, t);
          }
      }
    }
  else
    {
      t = i_134(f_134, t);
    }
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm g_135 = NULL,h_135 = NULL,i_135 = NULL,l_135 = NULL,m_135 = NULL,n_135 = NULL,o_135 = NULL,p_135 = NULL,q_135 = NULL,r_135 = NULL,s_135 = NULL,t_135 = NULL,u_135 = NULL;
  g_135 = t;
  if(match_cons(t, sym_Let_2))
    {
      h_135 = ATgetArgument(t, 0);
      q_135 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_135;
  if(match_cons(t, sym_Let_2))
    {
      r_135 = ATgetArgument(t, 0);
      t_135 = ATgetArgument(t, 1);
      {
        ATerm y_135 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, h_135, r_135);
        t = conc_0_0(t);
        y_135 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, y_135, t_135);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          r_135 = ATgetArgument(t, 0);
          t_135 = ATgetArgument(t, 1);
          u_135 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = h_135;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_135 = ATgetFirst((ATermList) t);
          p_135 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_135;
      if(match_cons(t, sym_SDefT_4))
        {
          l_135 = ATgetArgument(t, 0);
          m_135 = ATgetArgument(t, 1);
          n_135 = ATgetArgument(t, 2);
          o_135 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = m_135;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_135;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_135;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_135;
      if(match_cons(t, sym_SVar_1))
        {
          s_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_135;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_135;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_135;
      if((l_135 != t))
        {
          _fail(t);
        }
      t = o_135;
      {
        ATerm w_49 = t;
        if((PushChoice() == 0))
          {
            static ATerm s_10 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm x_49 = ATgetArgument(t, 0);
                  if(match_cons(x_49, sym_SVar_1))
                    {
                      if((l_135 != ATgetArgument(x_49, 0)))
                        {
                          _fail(ATgetArgument(x_49, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm y_49 = ATgetArgument(t, 1);
                    if(((ATgetType(y_49) != AT_LIST) || !(ATisEmpty(y_49))))
                      _fail(t);
                  }
                  {
                    ATerm a_50 = ATgetArgument(t, 2);
                    if(((ATgetType(a_50) != AT_LIST) || !(ATisEmpty(a_50))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(s_10, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = w_49;
          }
      }
      t = o_135;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm h_136 = NULL,i_136 = NULL,j_136 = NULL,k_136 = NULL,l_136 = NULL,m_136 = NULL,o_136 = NULL,p_136 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      o_136 = ATgetArgument(t, 0);
      t = o_136;
      if(match_cons(t, sym_Seq_2))
        {
          m_136 = ATgetArgument(t, 0);
          i_136 = ATgetArgument(t, 1);
          t = m_136;
          if(match_cons(t, sym_Where_1))
            {
              h_136 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_136;
          if(match_cons(t, sym_Seq_2))
            {
              j_136 = ATgetArgument(t, 0);
              l_136 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_136;
          if(match_cons(t, sym_Build_1))
            {
              k_136 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, h_136, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_136), l_136)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              m_136 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, m_136);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          o_136 = ATgetArgument(t, 0);
          t = o_136;
          if(match_cons(t, sym_Test_1))
            {
              m_136 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, m_136);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              o_136 = ATgetArgument(t, 0);
              t = o_136;
              if(match_cons(t, sym_Not_1))
                {
                  m_136 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, m_136);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  o_136 = ATgetArgument(t, 0);
                  p_136 = ATgetArgument(t, 1);
                  t = p_136;
                  if((o_136 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      o_136 = ATgetArgument(t, 0);
                      p_136 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = p_136;
                  if((o_136 != t))
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
  ATerm f_137 = NULL,g_137 = NULL,h_137 = NULL,i_137 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      f_137 = ATgetArgument(t, 0);
      i_137 = ATgetArgument(t, 1);
      t = f_137;
      if(match_cons(t, sym_LChoice_2))
        {
          g_137 = ATgetArgument(t, 0);
          h_137 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, g_137, (ATerm) ATmakeAppl(sym_LChoice_2, h_137, i_137));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          f_137 = ATgetArgument(t, 0);
          i_137 = ATgetArgument(t, 1);
          t = f_137;
          if(match_cons(t, sym_Seq_2))
            {
              g_137 = ATgetArgument(t, 0);
              h_137 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, g_137, (ATerm) ATmakeAppl(sym_Seq_2, h_137, i_137));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              f_137 = ATgetArgument(t, 0);
              i_137 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_137;
          if(match_cons(t, sym_Choice_2))
            {
              g_137 = ATgetArgument(t, 0);
              h_137 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, g_137, (ATerm) ATmakeAppl(sym_Choice_2, h_137, i_137));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm w_137 = NULL,x_137 = NULL,y_137 = NULL,a_138 = NULL,b_138 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      a_138 = ATgetArgument(t, 0);
      b_138 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, a_138, b_138);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          a_138 = ATgetArgument(t, 0);
          t = a_138;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_137 = ATgetFirst((ATermList) t);
              x_137 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, w_137, (ATerm) ATmakeAppl(sym_LChoices_1, x_137));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_x_16;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              a_138 = ATgetArgument(t, 0);
              t = a_138;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_137 = ATgetFirst((ATermList) t);
                  x_137 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, w_137, (ATerm) ATmakeAppl(sym_Choices_1, x_137));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_x_16;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  a_138 = ATgetArgument(t, 0);
                  t = a_138;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_137 = ATgetFirst((ATermList) t);
                      x_137 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_137, (ATerm) ATmakeAppl(sym_Seqs_1, x_137));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_q_16;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      a_138 = ATgetArgument(t, 0);
                      b_138 = ATgetArgument(t, 1);
                      y_137 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, b_138, (ATerm) ATmakeAppl(sym_Op_2, term_p_34, (ATerm) ATinsert(ATinsert(ATempty, y_137), a_138)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          a_138 = ATgetArgument(t, 0);
                          b_138 = ATgetArgument(t, 1);
                          y_137 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, y_137)), a_138), (ATerm) ATmakeAppl(sym_Build_1, b_138)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              a_138 = ATgetArgument(t, 0);
                              b_138 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_138, (ATerm) ATmakeAppl(sym_Match_1, b_138));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  a_138 = ATgetArgument(t, 0);
                                  b_138 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_138), b_138);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      a_138 = ATgetArgument(t, 0);
                                      b_138 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_138), a_138);
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
static ATerm t_10 (ATerm t)
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
      t = term_x_16;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          o_139 = ATgetArgument(t, 0);
          t = o_139;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_q_16;
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
              t = term_x_16;
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
                  t = term_x_16;
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
                      t = term_x_16;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          o_139 = ATgetArgument(t, 0);
                          t = o_139;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_x_16;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              o_139 = ATgetArgument(t, 0);
                              t = o_139;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_x_16;
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
                                  t = term_x_16;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      o_139 = ATgetArgument(t, 0);
                                      p_139 = ATgetArgument(t, 1);
                                      t = p_139;
                                      t = fetch_1_0(t_10, t);
                                      t = term_x_16;
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
                                                  t = term_x_16;
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
  ATerm t_140 = NULL,v_140 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      v_140 = ATgetArgument(t, 0);
      t = v_140;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_q_16;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          v_140 = ATgetArgument(t, 0);
          t = v_140;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_x_16;
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
                  t = term_q_16;
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
                      t = term_q_16;
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
                          t = term_q_16;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              v_140 = ATgetArgument(t, 0);
                              t = v_140;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_q_16;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  v_140 = ATgetArgument(t, 0);
                                  t = v_140;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_q_16;
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
                                  t = term_q_16;
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
      LocalPopChoice(e_50);
    }
  else
    {
      t = d_50;
      {
        ATerm g_50 = t;
        int i_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(i_50);
          }
        else
          {
            t = g_50;
            {
              ATerm j_50 = t;
              int k_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(k_50);
                }
              else
                {
                  t = j_50;
                  {
                    ATerm l_50 = t;
                    int m_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(m_50);
                      }
                    else
                      {
                        t = l_50;
                        {
                          ATerm n_50 = t;
                          int o_50 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(o_50);
                            }
                          else
                            {
                              t = n_50;
                              {
                                ATerm p_50 = t;
                                int q_50 = stack_ptr;
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
                                          t = LetHoist_0_0(t);
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
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(u_50);
                                              }
                                            else
                                              {
                                                t = t_50;
                                                {
                                                  ATerm w_50 = t;
                                                  int z_50 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(z_50);
                                                    }
                                                  else
                                                    {
                                                      t = w_50;
                                                      {
                                                        ATerm a_51 = t;
                                                        int b_51 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
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
                                                                  t = BuildPrim_0_0(t);
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
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(f_51);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_51;
                                                                        {
                                                                          ATerm g_51 = t;
                                                                          int h_51 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(h_51);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = g_51;
                                                                              {
                                                                                ATerm j_51 = t;
                                                                                int m_51 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(m_51);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = j_51;
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
                                                                                          t = m_13(p_141, t_141, t);
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
ATerm repeat_2_0 (ATerm s_114 (ATerm), ATerm t_114 (ATerm), ATerm t)
{
  static ATerm x_141 (ATerm t)
  {
    ATerm n_51 = t;
    int o_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_114(t);
        t = x_141(t);
        LocalPopChoice(o_51);
      }
    else
      {
        t = n_51;
        t = t_114(t);
      }
    return(t);
  }
  t = x_141(t);
  return(t);
}
ATerm downup_1_0 (ATerm z_108 (ATerm), ATerm t)
{
  t = z_108(t);
  {
    static ATerm w_10 (ATerm t)
    {
      t = downup_1_0(z_108, t);
      return(t);
    }
    t = SRTS_all(w_10, t);
  }
  t = z_108(t);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = downup_1_0(z_10, t);
  {
    ATerm p_51 = t;
    int q_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        LocalPopChoice(q_51);
      }
    else
      {
        t = p_51;
      }
  }
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = repeat_2_0(Simplify_0_0, _id, t);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = inline_sdef_0_0(t);
  {
    ATerm s_51 = t;
    int t_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        LocalPopChoice(t_51);
      }
    else
      {
        t = s_51;
      }
  }
  return(t);
}
ATerm inline_sdefs_0_0 (ATerm t)
{
  t = map_1_0(x_10, t);
  t = map_1_0(a_11, t);
  return(t);
}
static ATerm s_14 (ATerm e_52, ATerm f_52, ATerm t)
{
  ATerm g_142 = NULL;
  t = SSL_fputc(e_52, f_52);
  g_142 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_142);
  return(t);
}
static ATerm t_14 (ATerm a_32, ATerm b_32, ATerm t)
{
  ATerm h_142 = NULL;
  t = SSL_write_term_to_stream_text(a_32, b_32);
  h_142 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_142);
  return(t);
}
static ATerm v_14 (ATerm h_116 (ATerm), ATerm d_236, ATerm g_32, ATerm t)
{
  ATerm i_142 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_236, term_u_51);
  t = z_14(t);
  i_142 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_142, g_32);
  t = h_116(t);
  t = fclose_0_0(t);
  t = g_32;
  return(t);
}
static ATerm u_14 (ATerm w_31, ATerm x_31, ATerm t)
{
  ATerm j_142 = NULL;
  t = SSL_write_term_to_stream_baf(w_31, x_31);
  j_142 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_142);
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm q_142 = NULL,r_142 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_51 = ATgetArgument(t, 0);
      if(match_cons(v_51, sym_Stream_1))
        {
          q_142 = ATgetArgument(v_51, 0);
        }
      else
        _fail(t);
      r_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_14(q_142, r_142, t);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm s_142 = NULL,t_142 = NULL,u_142 = NULL,v_142 = NULL,w_142 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_51 = ATgetArgument(t, 0);
      if(match_cons(w_51, sym_Stream_1))
        {
          v_142 = ATgetArgument(w_51, 0);
        }
      else
        _fail(t);
      w_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_14(v_142, w_142, t);
  s_142 = t;
  t = term_x_51;
  t_142 = t;
  t = s_142;
  if(match_cons(t, sym_Stream_1))
    {
      u_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_x_51, s_142);
  t = s_14(t_142, u_142, t);
  return(t);
}
ATerm output_1_0 (ATerm j_135 (ATerm), ATerm t)
{
  ATerm k_142 = NULL,l_142 = NULL;
  t = j_135(t);
  l_142 = t;
  {
    ATerm y_51 = t;
    int z_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_142 = NULL,n_142 = NULL;
        t = term_a_52;
        m_142 = t;
        t = term_b_52;
        n_142 = t;
        t = term_c_52;
        t = e_15(m_142, n_142, t);
        LocalPopChoice(z_51);
      }
    else
      {
        t = y_51;
        t = term_d_52;
      }
  }
  k_142 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_142, l_142);
  {
    ATerm i_52 = t;
    int j_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_142 = NULL,p_142 = NULL;
        t = term_a_52;
        o_142 = t;
        t = term_m_52;
        p_142 = t;
        t = term_n_52;
        t = e_15(o_142, p_142, t);
        t = (ATerm) ATmakeAppl(sym__2, k_142, l_142);
        LocalPopChoice(j_52);
        if(match_cons(t, sym__2))
          {
            ATerm o_52 = ATgetArgument(t, 0);
            ATerm p_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_14(b_11, k_142, l_142, t);
      }
    else
      {
        t = i_52;
        if(match_cons(t, sym__2))
          {
            ATerm q_52 = ATgetArgument(t, 0);
            ATerm r_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_14(c_11, k_142, l_142, t);
      }
  }
  return(t);
}
static ATerm k_143 (ATerm e_143, ATerm t)
{
  t = SSL_fclose(e_143);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_143 = NULL,i_143 = NULL;
  i_143 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_143 = ATgetArgument(t, 0);
      {
        ATerm s_52 = t;
        int u_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_143);
            LocalPopChoice(u_52);
          }
        else
          {
            t = s_52;
            t = k_143(i_143, t);
          }
      }
    }
  else
    {
      t = k_143(i_143, t);
    }
  return(t);
}
static ATerm w_14 (ATerm c_32, ATerm t)
{
  t = SSL_read_term_from_stream(c_32);
  return(t);
}
static ATerm x_14 (ATerm x_50, ATerm y_50, ATerm t)
{
  t = SSL_strcat(x_50, y_50);
  return(t);
}
static ATerm y_14 (ATerm g_52, ATerm h_52, ATerm t)
{
  ATerm l_143 = NULL;
  t = SSL_fopen(g_52, h_52);
  l_143 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_143);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_143 = NULL;
  t = SSL_stdin_stream();
  m_143 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_143);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_143 = NULL;
  t = SSL_stdout_stream();
  n_143 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_143);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_143 = NULL;
  t = SSL_stderr_stream();
  o_143 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_143);
  return(t);
}
static ATerm v_144 (ATerm u_143, ATerm t)
{
  ATerm v_143 = NULL;
  t = SSL_explode_term(u_143);
  if(match_cons(t, sym__2))
    {
      ATerm v_52 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_52) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_52 = ATgetArgument(t, 1);
        if(((ATgetType(w_52) == AT_LIST) && !(ATisEmpty(w_52))))
          {
            v_143 = ATgetFirst((ATermList) w_52);
            {
              ATerm z_52 = (ATerm) ATgetNext((ATermList) w_52);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_143;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_143;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_143;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_143;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm w_144 (ATerm y_143, ATerm z_143, ATerm a_144, ATerm t)
{
  ATerm b_144 = NULL,c_144 = NULL,d_144 = NULL,g_144 = NULL,k_7 = NULL;
  t = SSLgetAnnotations(a_144);
  d_144 = t;
  t = y_143;
  if(match_cons(t, sym_Path_1))
    {
      g_144 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_144, z_143);
  k_7 = t;
  t = SSLsetAnnotations(k_7, d_144);
  if(match_cons(t, sym__2))
    {
      b_144 = ATgetArgument(t, 0);
      c_144 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_14(b_144, c_144, t);
  return(t);
}
static ATerm x_144 (ATerm i_144, ATerm j_144, ATerm k_144, ATerm t)
{
  ATerm l_144 = NULL,m_144 = NULL,n_144 = NULL,q_144 = NULL,l_7 = NULL;
  t = SSLgetAnnotations(k_144);
  n_144 = t;
  t = SSL_is_string(i_144);
  q_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_144, j_144);
  l_7 = t;
  t = SSLsetAnnotations(l_7, n_144);
  if(match_cons(t, sym__2))
    {
      l_144 = ATgetArgument(t, 0);
      m_144 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_14(l_144, m_144, t);
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm s_144 = NULL,t_144 = NULL,u_144 = NULL;
  s_144 = t;
  if(match_cons(t, sym__2))
    {
      t_144 = ATgetArgument(t, 0);
      u_144 = ATgetArgument(t, 1);
      {
        ATerm c_53 = t;
        int d_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_144(s_144, t);
            LocalPopChoice(d_53);
          }
        else
          {
            t = c_53;
            {
              ATerm f_53 = t;
              int g_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_144(t_144, u_144, s_144, t);
                  LocalPopChoice(g_53);
                }
              else
                {
                  t = f_53;
                  t = x_144(t_144, u_144, s_144, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_144(s_144, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_144 = NULL,a_145 = NULL,b_145 = NULL,g_145 = NULL;
  g_145 = t;
  {
    ATerm h_53 = t;
    int l_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_145, term_m_53);
        t = z_14(t);
        LocalPopChoice(l_53);
      }
    else
      {
        t = h_53;
        {
          ATerm c_59 = NULL,d_59 = NULL;
          t = term_n_53;
          d_59 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_53, g_145);
          t = x_14(d_59, g_145, t);
          c_59 = t;
          t = SSL_perror(c_59);
          _fail(t);
        }
      }
  }
  a_145 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_14(b_145, t);
  z_144 = t;
  t = a_145;
  t = fclose_0_0(t);
  t = z_144;
  return(t);
}
ATerm input_1_0 (ATerm k_135 (ATerm), ATerm t)
{
  ATerm o_53 = t;
  int p_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_145 = NULL,k_145 = NULL;
      t = term_a_52;
      j_145 = t;
      t = term_s_53;
      k_145 = t;
      t = term_c_54;
      t = e_15(j_145, k_145, t);
      LocalPopChoice(p_53);
    }
  else
    {
      t = o_53;
      t = term_d_54;
    }
  t = ReadFromFile_0_0(t);
  t = k_135(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_145 = NULL,m_145 = NULL,n_145 = NULL,o_145 = NULL,p_145 = NULL;
  l_145 = t;
  t = term_e_54;
  t = whoami_0_0(t);
  m_145 = t;
  t = term_g_54;
  o_145 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_54), m_145), term_h_54);
  p_145 = t;
  t = SSL_printnl(o_145, p_145);
  t = term_g_14;
  n_145 = t;
  t = SSL_exit(n_145);
  t = l_145;
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm r_145 = NULL;
  r_145 = t;
  if(match_string(t, "-k"))
    {
      t = r_145;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_145;
    }
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm s_145 = NULL,t_145 = NULL,u_145 = NULL;
  s_145 = t;
  t = SSL_string_to_int(s_145);
  t_145 = t;
  t = term_l_54;
  u_145 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_54, t_145);
  t = h_15(u_145, t_145, t);
  t = s_145;
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_m_54;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_11, f_11, g_11, t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm w_145 = NULL;
  w_145 = t;
  if(match_string(t, "-S"))
    {
      t = w_145;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_145;
    }
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm x_145 = NULL,y_145 = NULL;
  t = term_n_54;
  x_145 = t;
  t = term_o_46;
  y_145 = t;
  t = term_o_54;
  t = h_15(x_145, y_145, t);
  t = term_p_54;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  t = term_s_54;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm z_145 = NULL,a_146 = NULL,b_146 = NULL;
  z_145 = t;
  t = SSL_string_to_int(z_145);
  a_146 = t;
  t = term_n_54;
  b_146 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_54, a_146);
  t = h_15(b_146, a_146, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_145);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = term_t_54;
  return(t);
}
static ATerm r_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm c_146 = NULL,d_146 = NULL;
  t = term_u_54;
  c_146 = t;
  t = term_e_54;
  d_146 = t;
  t = term_v_54;
  t = h_15(c_146, d_146, t);
  t = term_w_54;
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = term_z_54;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_55 = t;
  int d_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_11, k_11, m_11, t);
      LocalPopChoice(d_55);
    }
  else
    {
      t = a_55;
      {
        ATerm f_55 = t;
        int h_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_11, p_11, q_11, t);
            LocalPopChoice(h_55);
          }
        else
          {
            t = f_55;
            t = Option_3_0(r_11, s_11, u_11, t);
          }
      }
    }
  return(t);
}
static ATerm h_15 (ATerm x_54, ATerm y_54, ATerm t)
{
  ATerm e_146 = NULL;
  t = term_a_52;
  e_146 = t;
  t = SSL_table_put(e_146, x_54, y_54);
  t = (ATerm) ATmakeAppl(sym__3, term_a_52, x_54, y_54);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm h_146 = NULL,i_146 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_146 = NULL,k_146 = NULL,l_146 = NULL;
      t = term_e_54;
      t = e_0(t);
      j_146 = t;
      t = term_i_55;
      k_146 = t;
      t = term_j_55;
      l_146 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_55, term_j_55, j_146);
      t = f_15(k_146, l_146, j_146, t);
      _fail(t);
    }
  else
    {
      ATerm o_146 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_146 = ATgetFirst((ATermList) t);
          i_146 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_146;
      t = b_0(t);
      t = term_e_54;
      t = c_0(t);
      o_146 = t;
      t = (ATerm) ATinsert(CheckATermList(i_146), o_146);
    }
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm q_146 = NULL;
  q_146 = t;
  if(match_string(t, "-o"))
    {
      t = q_146;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_146;
    }
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm r_146 = NULL,s_146 = NULL;
  r_146 = t;
  t = term_b_52;
  s_146 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_52, r_146);
  t = h_15(s_146, r_146, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_146);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = term_k_55;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_11, w_11, b_12, t);
  return(t);
}
static ATerm f_15 (ATerm k_36, ATerm l_36, ATerm i_36, ATerm t)
{
  ATerm u_146 = NULL,v_146 = NULL,w_146 = NULL;
  u_146 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_36, l_36);
  {
    ATerm n_55 = t;
    int o_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_55 = ATgetArgument(t, 0);
            ATerm q_55 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_36, l_36);
        t = e_15(k_36, l_36, t);
        LocalPopChoice(o_55);
      }
    else
      {
        t = n_55;
        t = (ATerm) ATempty;
      }
  }
  v_146 = t;
  t = (ATerm) ATinsert(CheckATermList(v_146), i_36);
  w_146 = t;
  t = SSL_table_put(k_36, l_36, w_146);
  t = u_146;
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm d_147 = NULL,e_147 = NULL,f_147 = NULL,g_147 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_147 = NULL,i_147 = NULL,j_147 = NULL;
      t = term_e_54;
      t = l_0(t);
      h_147 = t;
      t = term_i_55;
      i_147 = t;
      t = term_j_55;
      j_147 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_55, term_j_55, h_147);
      t = f_15(i_147, j_147, h_147, t);
      _fail(t);
    }
  else
    {
      ATerm n_147 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_147 = ATgetFirst((ATermList) t);
          e_147 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_147;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_147 = ATgetFirst((ATermList) t);
          g_147 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_147;
      t = i_0(t);
      t = f_147;
      t = j_0(t);
      n_147 = t;
      t = (ATerm) ATinsert(CheckATermList(g_147), n_147);
    }
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm p_147 = NULL;
  p_147 = t;
  if(match_string(t, "-i"))
    {
      t = p_147;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_147;
    }
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm q_147 = NULL,r_147 = NULL;
  q_147 = t;
  t = term_s_53;
  r_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_53, q_147);
  t = h_15(r_147, q_147, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_147);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = term_r_55;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_12, d_12, e_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_147 = NULL,t_147 = NULL,u_147 = NULL,v_147 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_54;
  t = whoami_0_0(t);
  s_147 = t;
  t = term_g_54;
  u_147 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_55), s_147);
  v_147 = t;
  t = SSL_printnl(u_147, v_147);
  t = term_g_14;
  t_147 = t;
  t = SSL_exit(t_147);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm w_147 = NULL,x_147 = NULL;
  t = term_a_52;
  w_147 = t;
  t = term_t_55;
  x_147 = t;
  t = term_v_55;
  t = e_15(w_147, x_147, t);
  return(t);
}
static ATerm b_15 (ATerm g_33, ATerm h_33, ATerm t)
{
  ATerm w_55 = t;
  int x_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_33, h_33);
      LocalPopChoice(x_55);
    }
  else
    {
      t = w_55;
      t = SSL_addr(g_33, h_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_122 (ATerm), ATerm x_122 (ATerm), ATerm t)
{
  ATerm z_147 = NULL,a_148 = NULL,b_148 = NULL;
  z_147 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_147;
      t = w_122(t);
    }
  else
    {
      ATerm e_148 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_148 = ATgetFirst((ATermList) t);
          b_148 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_148;
      t = foldr_2_0(w_122, x_122, t);
      e_148 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_148, e_148);
      t = x_122(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = term_o_46;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm a_60 = NULL,c_60 = NULL;
  if(match_cons(t, sym__2))
    {
      a_60 = ATgetArgument(t, 0);
      c_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_15(a_60, c_60, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_148 = NULL,j_59 = NULL,o_59 = NULL;
  t = times_0_0(t);
  o_59 = t;
  t = SSL_explode_term(o_59);
  if(match_cons(t, sym__2))
    {
      ATerm y_55 = ATgetArgument(t, 0);
      j_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_59;
  t = foldr_2_0(f_12, g_12, t);
  h_148 = t;
  t = SSL_TicksToSeconds(h_148);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_148 = NULL,t_148 = NULL,u_148 = NULL;
  s_148 = t;
  if(match_cons(t, sym__2))
    {
      t_148 = ATgetArgument(t, 0);
      u_148 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_55 = t;
    int b_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_148;
        if((t_148 != t))
          {
            _fail(t);
          }
        t = s_148;
        LocalPopChoice(b_56);
      }
    else
      {
        t = z_55;
        t = (ATerm) ATmakeAppl(sym__2, t_148, u_148);
        {
          ATerm c_56 = t;
          int d_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_148, u_148);
              LocalPopChoice(d_56);
            }
          else
            {
              t = c_56;
              t = SSL_gtr(t_148, u_148);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_148, u_148);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_132 (ATerm), ATerm t)
{
  ATerm y_148 = NULL;
  y_148 = t;
  {
    ATerm e_56 = t;
    int f_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_149 = NULL,b_149 = NULL,c_149 = NULL;
        t = term_a_52;
        b_149 = t;
        t = term_n_54;
        c_149 = t;
        t = term_g_56;
        t = e_15(b_149, c_149, t);
        a_149 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_149, term_g_14);
        t = geq_0_0(t);
        t = y_148;
        t = p_132(t);
        LocalPopChoice(f_56);
      }
    else
      {
        t = e_56;
        t = y_148;
      }
  }
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm e_149 = NULL,f_149 = NULL,h_149 = NULL,i_149 = NULL;
  t = run_time_0_0(t);
  e_149 = t;
  t = term_e_54;
  t = whoami_0_0(t);
  f_149 = t;
  t = term_g_54;
  h_149 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_56), e_149), term_i_56), f_149);
  i_149 = t;
  t = SSL_printnl(h_149, i_149);
  t = (ATerm) ATmakeAppl(sym__2, term_g_54, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_56), e_149), term_i_56), f_149));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_149 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_46;
  j_149 = t;
  t = SSL_exit(j_149);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm t_149 = NULL,u_149 = NULL;
  u_149 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_149;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_149 = ATgetArgument(t, 0);
          {
            ATerm x_60 = NULL,o_9 = NULL;
            t = SSLgetAnnotations(u_149);
            x_60 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_149);
            o_9 = t;
            t = SSLsetAnnotations(o_9, x_60);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_149;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_135 (ATerm), ATerm t)
{
  ATerm k_56 = t;
  int l_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_149 = NULL,n_149 = NULL;
      t = term_a_52;
      m_149 = t;
      t = term_m_56;
      n_149 = t;
      t = term_n_56;
      t = e_15(m_149, n_149, t);
      LocalPopChoice(l_56);
    }
  else
    {
      t = k_56;
      t = fetch_1_0(i_12, t);
    }
  t = a_135(t);
  return(t);
}
ATerm map_1_0 (ATerm h_117 (ATerm), ATerm t)
{
  static ATerm k_150 (ATerm t)
  {
    ATerm h_150 = NULL,i_150 = NULL,j_150 = NULL;
    h_150 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_150;
      }
    else
      {
        ATerm s_61 = NULL,v_61 = NULL,w_61 = NULL,q_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_150 = ATgetFirst((ATermList) t);
            j_150 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_150);
        s_61 = t;
        t = i_150;
        t = h_117(t);
        v_61 = t;
        t = j_150;
        t = k_150(t);
        w_61 = t;
        t = (ATerm) ATinsert(CheckATermList(w_61), v_61);
        q_9 = t;
        t = SSLsetAnnotations(q_9, s_61);
      }
    return(t);
  }
  t = k_150(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm n_150 = NULL,o_150 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_150 = ATgetFirst((ATermList) t);
      o_150 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_150 = NULL,t_150 = NULL;
        static ATerm j_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_150)), not_null(t_150));
          return(t);
        }
        t = o_150;
        t = h_0(t);
        if(((s_150 != NULL) && (s_150 != t)))
          _fail(t);
        else
          s_150 = t;
        t = n_150;
        t = f_0(t);
        if(((t_150 != NULL) && (t_150 != t)))
          _fail(t);
        else
          t_150 = t;
        t = o_150;
        t = reverse_acc_2_0(f_0, j_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_54;
      t = h_0(t);
    }
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm z_150 = NULL,a_151 = NULL,b_151 = NULL,u_9 = NULL;
  b_151 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_151);
  z_150 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_151);
  u_9 = t;
  t = SSLsetAnnotations(u_9, z_150);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm d_151 = NULL;
  d_151 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_151), term_o_56);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_150 = NULL,w_150 = NULL;
  ATerm q_56 = t;
  int r_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_150 = NULL,y_150 = NULL;
      t = term_a_52;
      x_150 = t;
      t = term_t_55;
      y_150 = t;
      t = term_v_55;
      t = e_15(x_150, y_150, t);
      LocalPopChoice(r_56);
    }
  else
    {
      t = q_56;
      t = fetch_1_0(k_12, t);
    }
  t = term_s_56;
  t = echo_0_0(t);
  t = term_i_55;
  v_150 = t;
  t = term_j_55;
  w_150 = t;
  t = term_t_56;
  t = e_15(v_150, w_150, t);
  t = reverse_acc_2_0(_id, l_12, t);
  t = map_1_0(m_12, t);
  return(t);
}
ATerm fetch_1_0 (ATerm r_117 (ATerm), ATerm t)
{
  static ATerm a_152 (ATerm t)
  {
    ATerm x_151 = NULL,y_151 = NULL,z_151 = NULL;
    x_151 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_151 = ATgetFirst((ATermList) t);
        z_151 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_56 = t;
      int v_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_62 = NULL,k_62 = NULL,y_9 = NULL;
          t = SSLgetAnnotations(x_151);
          h_62 = t;
          t = y_151;
          t = r_117(t);
          k_62 = t;
          t = (ATerm) ATinsert(CheckATermList(z_151), k_62);
          y_9 = t;
          t = SSLsetAnnotations(y_9, h_62);
          LocalPopChoice(v_56);
        }
      else
        {
          t = u_56;
          {
            ATerm w_62 = NULL,c_63 = NULL,e_10 = NULL;
            t = SSLgetAnnotations(x_151);
            w_62 = t;
            t = z_151;
            t = a_152(t);
            c_63 = t;
            t = (ATerm) ATinsert(CheckATermList(c_63), y_151);
            e_10 = t;
            t = SSLsetAnnotations(e_10, w_62);
          }
        }
    }
    return(t);
  }
  t = a_152(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_152 = NULL,f_152 = NULL,g_152 = NULL;
  e_152 = t;
  {
    ATerm w_56 = t;
    int x_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_152;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_56 = ATgetFirst((ATermList) t);
                ATerm z_56 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_152;
          }
        LocalPopChoice(x_56);
      }
    else
      {
        t = w_56;
        t = (ATerm) ATinsert(ATempty, e_152);
      }
  }
  f_152 = t;
  t = term_d_52;
  g_152 = t;
  t = SSL_printnl(g_152, f_152);
  t = e_152;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm k_152 = NULL,l_152 = NULL;
  t = term_a_52;
  k_152 = t;
  t = term_t_55;
  l_152 = t;
  t = term_v_55;
  t = e_15(k_152, l_152, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm e_15 (ATerm g_38, ATerm h_38, ATerm t)
{
  t = SSL_table_get(g_38, h_38);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm m_152 = NULL,n_152 = NULL;
  t = term_a_57;
  m_152 = t;
  t = term_e_54;
  n_152 = t;
  t = term_b_57;
  t = h_15(m_152, n_152, t);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_c_57;
  return(t);
}
static ATerm c_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm o_152 = NULL,p_152 = NULL,q_152 = NULL,r_152 = NULL;
  t = term_a_57;
  q_152 = t;
  t = term_e_54;
  r_152 = t;
  t = term_b_57;
  t = h_15(q_152, r_152, t);
  t = term_d_57;
  o_152 = t;
  t = term_e_54;
  p_152 = t;
  t = term_e_57;
  t = h_15(o_152, p_152, t);
  t = term_f_57;
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = term_h_57;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_57 = t;
  int j_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_12, o_12, q_12, t);
      LocalPopChoice(j_57);
    }
  else
    {
      t = i_57;
      t = Option_3_0(c_13, d_13, e_13, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_93 (ATerm), ATerm n_93 (ATerm), ATerm t)
{
  ATerm s_152 = NULL,t_152 = NULL,u_152 = NULL,v_152 = NULL,w_152 = NULL,x_152 = NULL,l_10 = NULL;
  x_152 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_152 = ATgetFirst((ATermList) t);
      u_152 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_152);
  s_152 = t;
  t = t_152;
  t = m_93(t);
  v_152 = t;
  t = u_152;
  t = n_93(t);
  w_152 = t;
  t = (ATerm) ATinsert(CheckATermList(w_152), v_152);
  l_10 = t;
  t = SSLsetAnnotations(l_10, s_152);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_137 (ATerm), ATerm t)
{
  ATerm c_153 = NULL,d_153 = NULL,e_153 = NULL,f_153 = NULL,h_153 = NULL,i_153 = NULL,n_10 = NULL;
  c_153 = t;
  {
    ATerm k_57 = t;
    int l_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_57;
        t = d_137(t);
        LocalPopChoice(l_57);
      }
    else
      {
        t = k_57;
      }
  }
  t = c_153;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_153 = ATgetFirst((ATermList) t);
      f_153 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_153);
  d_153 = t;
  t = term_t_55;
  i_153 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_55, e_153);
  t = h_15(i_153, e_153, t);
  t = f_153;
  {
    static ATerm s_153 (ATerm t)
    {
      ATerm n_57 = t;
      int o_57 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_57 = t;
          int q_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_153 = NULL;
              l_153 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_153;
              LocalPopChoice(q_57);
            }
          else
            {
              t = p_57;
              t = d_137(t);
              t = Cons_2_0(_id, s_153, t);
            }
          LocalPopChoice(o_57);
        }
      else
        {
          t = n_57;
          {
            ATerm o_153 = NULL,p_153 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_153 = ATgetFirst((ATermList) t);
                p_153 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(p_153), (ATerm) ATmakeAppl(sym_Undefined_1, o_153));
          }
        }
      return(t);
    }
    t = s_153(t);
  }
  h_153 = t;
  t = (ATerm) ATinsert(CheckATermList(h_153), (ATerm) ATmakeAppl(sym_Program_1, e_153));
  n_10 = t;
  t = SSLsetAnnotations(n_10, d_153);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm e_154 = NULL;
  e_154 = t;
  if(match_string(t, "--help"))
    {
      t = e_154;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_154;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_154;
        }
    }
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm f_154 = NULL,g_154 = NULL;
  t = term_m_56;
  f_154 = t;
  t = term_e_54;
  g_154 = t;
  t = term_s_57;
  t = h_15(f_154, g_154, t);
  t = term_t_57;
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = term_u_57;
  return(t);
}
static ATerm n_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_137 (ATerm), ATerm t)
{
  ATerm x_153 = NULL,y_153 = NULL,z_153 = NULL,a_154 = NULL,b_154 = NULL,c_154 = NULL,d_154 = NULL;
  z_153 = t;
  t = term_i_55;
  b_154 = t;
  t = term_j_55;
  c_154 = t;
  t = (ATerm) ATempty;
  d_154 = t;
  t = SSL_table_put(b_154, c_154, d_154);
  t = z_153;
  {
    static ATerm f_13 (ATerm t)
    {
      ATerm v_57 = t;
      int w_57 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_137(t);
          LocalPopChoice(w_57);
        }
      else
        {
          t = v_57;
          {
            ATerm x_57 = t;
            int y_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_13, j_13, l_13, t);
                LocalPopChoice(y_57);
              }
            else
              {
                t = x_57;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_13, t);
  }
  {
    ATerm z_57 = t;
    int a_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_154 = NULL;
        s_154 = t;
        {
          ATerm b_58 = t;
          int c_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_63 = NULL;
              t = s_154;
              {
                ATerm d_58 = t;
                int e_58 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_63 = NULL,u_63 = NULL;
                    t = term_a_52;
                    q_63 = t;
                    t = term_m_56;
                    u_63 = t;
                    t = term_n_56;
                    t = e_15(q_63, u_63, t);
                    LocalPopChoice(e_58);
                  }
                else
                  {
                    t = d_58;
                    t = fetch_1_0(n_13, t);
                  }
              }
              t = s_154;
              t = default_system_usage_0_0(t);
              t = term_o_46;
              p_63 = t;
              t = SSL_exit(p_63);
              LocalPopChoice(c_58);
            }
          else
            {
              t = b_58;
              {
                ATerm z_63 = NULL,a_64 = NULL,e_64 = NULL;
                t = term_a_52;
                a_64 = t;
                t = term_a_57;
                e_64 = t;
                t = term_f_58;
                t = e_15(a_64, e_64, t);
                t = s_154;
                t = default_system_about_0_0(t);
                t = term_o_46;
                z_63 = t;
                t = SSL_exit(z_63);
              }
            }
        }
        LocalPopChoice(a_58);
      }
    else
      {
        t = z_57;
        {
          ATerm g_58 = t;
          int h_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_154 = NULL,u_154 = NULL,v_154 = NULL;
              static ATerm o_13 (ATerm t)
              {
                ATerm w_154 = NULL,x_154 = NULL,y_154 = NULL,r_10 = NULL;
                y_154 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    x_154 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_154);
                w_154 = t;
                t = x_154;
                if(((x_153 != NULL) && (x_153 != t)))
                  _fail(t);
                else
                  x_153 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, x_154);
                r_10 = t;
                t = SSLsetAnnotations(r_10, w_154);
                return(t);
              }
              t = fetch_1_0(o_13, t);
              t = term_g_54;
              u_154 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_153)), term_i_58);
              v_154 = t;
              t = SSL_printnl(u_154, v_154);
              t = (ATerm) ATmakeAppl(sym__2, term_g_54, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_153)), term_i_58));
              t = default_system_usage_0_0(t);
              t = term_g_14;
              t_154 = t;
              t = SSL_exit(t_154);
              LocalPopChoice(h_58);
            }
          else
            {
              t = g_58;
            }
        }
      }
  }
  y_153 = t;
  t = term_i_55;
  a_154 = t;
  t = SSL_table_destroy(a_154);
  t = y_153;
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm e_135 (ATerm), ATerm f_135 (ATerm), ATerm t)
{
  ATerm d_155 = NULL,e_155 = NULL,f_155 = NULL,g_155 = NULL;
  t = parse_options_1_0(c_135, t);
  d_155 = t;
  t = term_j_58;
  g_155 = t;
  t = SSL_table_create(g_155);
  t = term_j_58;
  e_155 = t;
  t = term_k_58;
  f_155 = t;
  t = SSL_table_put(e_155, f_155, d_155);
  t = d_155;
  t = e_135(t);
  {
    ATerm l_58 = t;
    int m_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_135, t);
        LocalPopChoice(m_58);
      }
    else
      {
        t = l_58;
        {
          ATerm n_58 = t;
          int o_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_135(t);
              t = report_success_0_0(t);
              LocalPopChoice(o_58);
            }
          else
            {
              t = n_58;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm p_13 (ATerm t)
{
  ATerm p_58 = t;
  int q_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(q_58);
    }
  else
    {
      t = p_58;
      {
        ATerm r_58 = t;
        int s_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(s_58);
          }
        else
          {
            t = r_58;
            {
              ATerm t_58 = t;
              int u_58 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(r_13, t_13, u_13, t);
                  LocalPopChoice(u_58);
                }
              else
                {
                  t = t_58;
                  {
                    ATerm v_58 = t;
                    int w_58 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(w_58);
                      }
                    else
                      {
                        t = v_58;
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
static ATerm q_13 (ATerm t)
{
  t = input_1_0(v_13, t);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm i_155 = NULL,j_155 = NULL;
  t = term_m_52;
  i_155 = t;
  t = term_e_54;
  j_155 = t;
  t = term_x_58;
  t = h_15(i_155, j_155, t);
  t = term_y_58;
  return(t);
}
static ATerm u_13 (ATerm t)
{
  t = term_z_58;
  return(t);
}
static ATerm v_13 (ATerm t)
{
  t = output_1_0(w_13, t);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm m_155 = NULL,n_155 = NULL,o_155 = NULL,p_155 = NULL,q_155 = NULL,r_155 = NULL,s_155 = NULL,t_155 = NULL,u_155 = NULL,v_155 = NULL,w_155 = NULL,x_155 = NULL,y_155 = NULL,z_155 = NULL,a_156 = NULL,y_11 = NULL,n_11 = NULL,l_11 = NULL,y_10 = NULL;
  a_156 = t;
  if(match_cons(t, sym_Specification_1))
    {
      n_155 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_156);
  m_155 = t;
  t = n_155;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_155 = ATgetFirst((ATermList) t);
      q_155 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_155);
  o_155 = t;
  t = q_155;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_155 = ATgetFirst((ATermList) t);
      u_155 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_155);
  s_155 = t;
  t = t_155;
  if(match_cons(t, sym_Strategies_1))
    {
      x_155 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_155);
  w_155 = t;
  t = x_155;
  t = inline_sdefs_0_0(t);
  y_155 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, y_155);
  y_10 = t;
  t = SSLsetAnnotations(y_10, w_155);
  z_155 = t;
  t = u_155;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_155), z_155);
  l_11 = t;
  t = SSLsetAnnotations(l_11, s_155);
  v_155 = t;
  t = (ATerm) ATinsert(CheckATermList(v_155), p_155);
  n_11 = t;
  t = SSLsetAnnotations(n_11, o_155);
  r_155 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, r_155);
  y_11 = t;
  t = SSLsetAnnotations(y_11, m_155);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(p_13, default_usage_0_0, _id, q_13, t);
  return(t);
}
