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
Symbol sym_OverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_RDecT_3;
Symbol sym_GenDynRules_1;
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
Symbol sym_DynamicRules_1;
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
Symbol sym_Hashtable_1;
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
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_GenDynRules_1 = ATmakeSymbol("GenDynRules", 1, ATfalse);
  ATprotectSymbol(sym_GenDynRules_1);
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
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_g_64;
ATerm term_f_64;
ATerm term_u_63;
ATerm term_y_61;
ATerm term_x_61;
ATerm term_w_61;
ATerm term_r_61;
ATerm term_e_61;
ATerm term_d_61;
ATerm term_c_61;
ATerm term_b_61;
ATerm term_v_60;
ATerm term_q_60;
ATerm term_p_60;
ATerm term_o_60;
ATerm term_n_60;
ATerm term_m_60;
ATerm term_l_60;
ATerm term_k_60;
ATerm term_d_60;
ATerm term_c_60;
ATerm term_z_59;
ATerm term_y_59;
ATerm term_x_59;
ATerm term_u_59;
ATerm term_t_59;
ATerm term_q_59;
ATerm term_k_59;
ATerm term_j_59;
ATerm term_t_58;
ATerm term_s_58;
ATerm term_r_58;
ATerm term_q_58;
ATerm term_k_58;
ATerm term_i_58;
ATerm term_h_58;
ATerm term_c_58;
ATerm term_b_58;
ATerm term_a_58;
ATerm term_z_57;
ATerm term_y_57;
ATerm term_x_57;
ATerm term_v_57;
ATerm term_u_57;
ATerm term_t_57;
ATerm term_q_57;
ATerm term_p_57;
ATerm term_o_57;
ATerm term_n_57;
ATerm term_m_57;
ATerm term_l_57;
ATerm term_k_57;
ATerm term_i_57;
ATerm term_h_57;
ATerm term_e_57;
ATerm term_d_57;
ATerm term_k_56;
ATerm term_j_56;
ATerm term_g_56;
ATerm term_e_56;
ATerm term_d_56;
ATerm term_c_56;
ATerm term_z_55;
ATerm term_w_55;
ATerm term_y_50;
ATerm term_g_50;
ATerm term_a_50;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_b_37;
ATerm term_v_36;
ATerm term_w_35;
ATerm term_r_17;
ATerm term_l_17;
ATerm term_v_15;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_m_14;
ATerm term_l_14;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(50);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(sym__2, term_c_56, term_d_56);
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_56));
  term_k_56 = (ATerm) ATmakeAppl(sym__2, term_c_56, term_j_56);
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_57));
  term_e_57 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(sym__2, term_c_56, term_h_57);
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_57));
  term_o_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_57));
  term_p_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_57));
  term_t_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(sym__2, term_t_57, term_g_50);
  ATprotect(&(term_v_57));
  term_v_57 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_50);
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_57));
  term_y_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_57));
  term_z_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_58));
  term_a_58 = (ATerm) ATmakeAppl(sym__2, term_z_57, term_l_57);
  ATprotect(&(term_b_58));
  term_b_58 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_58));
  term_c_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_58));
  term_h_58 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_58));
  term_i_58 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_58));
  term_k_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_58));
  term_q_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_58));
  term_r_58 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_58));
  term_s_58 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_58));
  term_t_58 = (ATerm) ATmakeAppl(sym__2, term_c_56, term_s_58);
  ATprotect(&(term_j_59));
  term_j_59 = (ATerm) ATmakeAppl(sym__2, term_c_56, term_t_57);
  ATprotect(&(term_k_59));
  term_k_59 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_59));
  term_q_59 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_59));
  term_t_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_59));
  term_u_59 = (ATerm) ATmakeAppl(sym__2, term_c_56, term_t_59);
  ATprotect(&(term_x_59));
  term_x_59 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_y_59));
  term_y_59 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_60));
  term_c_60 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_60));
  term_d_60 = (ATerm) ATmakeAppl(sym__2, term_h_58, term_i_58);
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_60));
  term_l_60 = (ATerm) ATmakeAppl(sym__2, term_k_60, term_l_57);
  ATprotect(&(term_m_60));
  term_m_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_60));
  term_n_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_60));
  term_o_60 = (ATerm) ATmakeAppl(sym__2, term_n_60, term_l_57);
  ATprotect(&(term_p_60));
  term_p_60 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_60));
  term_q_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_60));
  term_v_60 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_61));
  term_b_61 = (ATerm) ATmakeAppl(sym__2, term_t_59, term_l_57);
  ATprotect(&(term_c_61));
  term_c_61 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_61));
  term_d_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(sym__3, term_h_58, term_i_58, (ATerm) ATempty);
  ATprotect(&(term_r_61));
  term_r_61 = (ATerm) ATmakeAppl(sym__2, term_c_56, term_k_60);
  ATprotect(&(term_w_61));
  term_w_61 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_61));
  term_x_61 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_61));
  term_y_61 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_63));
  term_u_63 = (ATerm) ATmakeAppl(sym__2, term_j_56, term_l_57);
  ATprotect(&(term_f_64));
  term_f_64 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_64));
  term_g_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
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
ATerm Seq_2_0 (ATerm e_94 (ATerm), ATerm f_94 (ATerm), ATerm t);
static ATerm g_1 (ATerm t);
ATerm body_to_inline_0_0 (ATerm t);
ATerm inlineable_0_0 (ATerm t);
static ATerm j_7 (ATerm a_38, ATerm b_38, ATerm t);
ATerm bottomup_1_0 (ATerm l_112 (ATerm), ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm v_2 (ATerm t);
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
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm spaste_1_0 (ATerm o_111 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm d_13 (ATerm i_26, ATerm h_26, ATerm t);
ATerm SVar_1_0 (ATerm p_93 (ATerm), ATerm t);
static ATerm n_13 (ATerm t_128 (ATerm), ATerm u_128 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm v_47, ATerm u_47, ATerm t_47, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm o_13 (ATerm n_128 (ATerm), ATerm o_128 (ATerm (ATerm), ATerm), ATerm n_47, ATerm q_47, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm b_129 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm i_128 (ATerm (ATerm), ATerm), ATerm j_128 (ATerm), ATerm k_128 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_128 (ATerm (ATerm), ATerm), ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm tpaste_1_0 (ATerm k_111 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm l_111 (ATerm), ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm g_13 (ATerm p_123 (ATerm), ATerm o_44, ATerm n_44, ATerm t);
static ATerm i_13 (ATerm s_123 (ATerm), ATerm t_123 (ATerm), ATerm s_44, ATerm r_44, ATerm t);
static ATerm j_13 (ATerm k_123 (ATerm), ATerm m_44, ATerm l_44, ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm l_13 (ATerm e_649, ATerm j_649, ATerm o_63, ATerm t);
ATerm while_not_2_0 (ATerm w_118 (ATerm), ATerm x_118 (ATerm), ATerm t);
ATerm for_3_0 (ATerm z_118 (ATerm), ATerm a_119 (ATerm), ATerm b_119 (ATerm), ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm b_125 (ATerm j_123, ATerm m_123, ATerm n_123, ATerm t);
static ATerm a_8 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm m_8 (ATerm t);
ATerm free_vars_3_0 (ATerm l_130 (ATerm), ATerm m_130 (ATerm), ATerm n_130 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm n_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm x_8 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm m_89 (ATerm), ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
ATerm InlineCall_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm u_126 (ATerm), ATerm v_126 (ATerm), ATerm w_126 (ATerm), ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
ATerm occurrences_1_0 (ATerm w_123 (ATerm), ATerm t);
static ATerm t_13 (ATerm p_110 (ATerm), ATerm l_25, ATerm k_25, ATerm t);
static ATerm v_13 (ATerm f_120 (ATerm), ATerm u_35, ATerm s_35, ATerm t);
static ATerm x_13 (ATerm r_37, ATerm t_37, ATerm t);
ATerm end_scope_1_0 (ATerm c_120 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm r_115 (ATerm), ATerm s_115 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm b_120 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm d_120 (ATerm), ATerm e_120 (ATerm), ATerm t);
static ATerm c_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm i_10 (ATerm t);
ATerm inline_sdef_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm k_112 (ATerm), ATerm t);
static ATerm o_10 (ATerm t);
static ATerm z_13 (ATerm y_80, ATerm x_80, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm z_116 (ATerm), ATerm t);
static ATerm p_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm c_11 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm o_113 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm m_121 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm l_142 (ATerm d_142, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm h_11 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm f_118 (ATerm), ATerm g_118 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm m_112 (ATerm), ATerm t);
static ATerm j_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm m_11 (ATerm t);
ATerm inline_sdefs_0_0 (ATerm t);
static ATerm f_15 (ATerm y_54, ATerm z_54, ATerm t);
static ATerm g_15 (ATerm a_33, ATerm b_33, ATerm t);
static ATerm i_15 (ATerm u_119 (ATerm), ATerm r_241, ATerm g_33, ATerm t);
static ATerm h_15 (ATerm w_32, ATerm x_32, ATerm t);
static ATerm o_11 (ATerm t);
static ATerm r_11 (ATerm t);
ATerm output_1_0 (ATerm f_139 (ATerm), ATerm t);
static ATerm d_151 (ATerm x_150, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm j_15 (ATerm c_33, ATerm t);
static ATerm k_15 (ATerm r_53, ATerm s_53, ATerm t);
static ATerm l_15 (ATerm a_55, ATerm b_55, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_152 (ATerm n_151, ATerm t);
static ATerm p_152 (ATerm r_151, ATerm s_151, ATerm t_151, ATerm t);
static ATerm q_152 (ATerm b_152, ATerm c_152, ATerm d_152, ATerm t);
static ATerm m_15 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm g_139 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm i_12 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm w_15 (ATerm r_57, ATerm s_57, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm u_15 (ATerm k_37, ATerm m_37, ATerm j_37, ATerm t);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm m_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm n_15 (ATerm g_34, ATerm h_34, ATerm t);
ATerm foldr_2_0 (ATerm s_126 (ATerm), ATerm t_126 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm s_12 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm l_136 (ATerm), ATerm t);
static ATerm t_12 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm u_12 (ATerm t);
ATerm need_help_1_0 (ATerm w_138 (ATerm), ATerm t);
static ATerm x_15 (ATerm h_41, ATerm i_41, ATerm j_41, ATerm t);
ATerm lookup_table_0_1 (ATerm b_39, ATerm t);
ATerm new_hashtable_0_2 (ATerm q_41, ATerm r_41, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm q_15 (ATerm m_41, ATerm n_41, ATerm t);
static ATerm r_15 (ATerm t_41, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm v_120 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm c_13 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm f_121 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm y_15 (ATerm k_41, ATerm l_41, ATerm t);
static ATerm t_15 (ATerm i_39, ATerm j_39, ATerm t);
static ATerm m_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm u_13 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm z_96 (ATerm), ATerm a_97 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm z_140 (ATerm), ATerm t);
static ATerm y_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm c_14 (ATerm t);
ATerm parse_options_1_0 (ATerm y_140 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm y_138 (ATerm), ATerm z_138 (ATerm), ATerm a_139 (ATerm), ATerm b_139 (ATerm), ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_l_14;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_m_14;
  return(t);
}
ATerm AddSDef_0_0 (ATerm t)
{
  ATerm o_0 = NULL,p_0 = NULL,r_0 = NULL,s_0 = NULL,t_0 = NULL;
  o_0 = t;
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDefT_4))
          {
            p_0 = ATgetArgument(t, 0);
            {
              ATerm p_14 = ATgetArgument(t, 1);
            }
            {
              ATerm q_14 = ATgetArgument(t, 2);
            }
            {
              ATerm r_14 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(o_14);
        {
          ATerm x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL;
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_0), (ATerm)ATempty, (ATerm) ATempty);
          z_0 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_s_14, o_0);
          a_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_0), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_s_14, o_0));
          t = v_13(u_0, z_0, a_1, t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_0), (ATerm)ATempty, (ATerm) ATempty);
          x_0 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_14, o_0);
          y_0 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_0), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_t_14, o_0));
          t = v_13(v_0, x_0, y_0, t);
          t = o_0;
        }
      }
    else
      {
        t = n_14;
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
  t = term_u_14;
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
  t = n_15(e_1, t_1, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_u_14;
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
  t = n_15(z_1, a_2, t);
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_0 = NULL,m_0 = NULL;
      m_0 = t;
      t = SSL_explode_term(m_0);
      if(match_cons(t, sym__2))
        {
          ATerm x_14 = ATgetArgument(t, 0);
          a_0 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_0;
      t = foldr_3_0(w_0, b_1, term_size_0_0, t);
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      {
        static ATerm m_1 (ATerm t)
        {
          ATerm u_1 = NULL,v_1 = NULL;
          v_1 = t;
          t = SSL_explode_term(v_1);
          if(match_cons(t, sym__2))
            {
              ATerm y_14 = ATgetArgument(t, 0);
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
ATerm Seq_2_0 (ATerm e_94 (ATerm), ATerm f_94 (ATerm), ATerm t)
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
  t = e_94(t);
  q_1 = t;
  t = p_1;
  t = f_94(t);
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, q_1, r_1);
  q_0 = t;
  t = SSLsetAnnotations(q_0, n_1);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL,n_2 = NULL;
  w_8 = t;
  if(match_cons(t, sym_Match_1))
    {
      v_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_8);
  u_8 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, v_8);
  n_2 = t;
  t = SSLsetAnnotations(n_2, u_8);
  return(t);
}
ATerm body_to_inline_0_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL;
  static ATerm b_13 (ATerm t)
  {
    ATerm n_12 = NULL,w_12 = NULL,z_12 = NULL,a_13 = NULL;
    w_12 = t;
    if(match_cons(t, sym_Id_0))
      {
        t = w_12;
      }
    else
      {
        if(match_cons(t, sym_Fail_0))
          {
            t = w_12;
          }
        else
          {
            if(match_cons(t, sym_CallT_3))
              {
                z_12 = ATgetArgument(t, 0);
                a_13 = ATgetArgument(t, 1);
                n_12 = ATgetArgument(t, 2);
                {
                  ATerm f_2 = NULL,j_2 = NULL,m_2 = NULL,o_2 = NULL,i_1 = NULL,d_1 = NULL;
                  t = SSLgetAnnotations(w_12);
                  f_2 = t;
                  t = z_12;
                  if(match_cons(t, sym_SVar_1))
                    {
                      m_2 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_12);
                  j_2 = t;
                  t = (ATerm) ATmakeAppl(sym_SVar_1, m_2);
                  d_1 = t;
                  t = SSLsetAnnotations(d_1, j_2);
                  o_2 = t;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, o_2, a_13, n_12);
                  i_1 = t;
                  t = SSLsetAnnotations(i_1, f_2);
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    z_12 = ATgetArgument(t, 0);
                    a_13 = ATgetArgument(t, 1);
                    n_12 = ATgetArgument(t, 2);
                    {
                      ATerm d_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,k_1 = NULL,j_1 = NULL;
                      t = SSLgetAnnotations(w_12);
                      d_4 = t;
                      t = z_12;
                      if(match_cons(t, sym_SVar_1))
                        {
                          m_4 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(z_12);
                      l_4 = t;
                      t = (ATerm) ATmakeAppl(sym_SVar_1, m_4);
                      j_1 = t;
                      t = SSLsetAnnotations(j_1, l_4);
                      n_4 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, n_4, a_13, n_12);
                      k_1 = t;
                      t = SSLsetAnnotations(k_1, d_4);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Build_1))
                      {
                        z_12 = ATgetArgument(t, 0);
                        {
                          ATerm h_5 = NULL,l_1 = NULL;
                          t = SSLgetAnnotations(w_12);
                          h_5 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, z_12);
                          l_1 = t;
                          t = SSLsetAnnotations(l_1, h_5);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            z_12 = ATgetArgument(t, 0);
                            {
                              ATerm k_6 = NULL,w_1 = NULL;
                              t = SSLgetAnnotations(w_12);
                              k_6 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, z_12);
                              w_1 = t;
                              t = SSLsetAnnotations(w_1, k_6);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                z_12 = ATgetArgument(t, 0);
                                a_13 = ATgetArgument(t, 1);
                                {
                                  ATerm z_14 = t;
                                  int a_15 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm i_7 = NULL,s_7 = NULL,b_8 = NULL,d_8 = NULL,y_1 = NULL,x_1 = NULL;
                                      t = SSLgetAnnotations(w_12);
                                      i_7 = t;
                                      t = z_12;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          b_8 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(z_12);
                                      s_7 = t;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, b_8);
                                      x_1 = t;
                                      t = SSLsetAnnotations(x_1, s_7);
                                      d_8 = t;
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_8, a_13);
                                      y_1 = t;
                                      t = SSLsetAnnotations(y_1, i_7);
                                      LocalPopChoice(a_15);
                                    }
                                  else
                                    {
                                      t = z_14;
                                      {
                                        ATerm l_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,q_2 = NULL,p_2 = NULL;
                                        t = SSLgetAnnotations(w_12);
                                        l_8 = t;
                                        t = z_12;
                                        if(match_cons(t, sym_Scope_2))
                                          {
                                            p_8 = ATgetArgument(t, 0);
                                            q_8 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = SSLgetAnnotations(z_12);
                                        o_8 = t;
                                        t = q_8;
                                        t = Seq_2_0(g_1, _id, t);
                                        r_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Scope_2, p_8, r_8);
                                        p_2 = t;
                                        t = SSLsetAnnotations(p_2, o_8);
                                        s_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, s_8, a_13);
                                        q_2 = t;
                                        t = SSLsetAnnotations(q_2, l_8);
                                      }
                                    }
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    z_12 = ATgetArgument(t, 0);
                                    a_13 = ATgetArgument(t, 1);
                                    {
                                      ATerm b_15 = t;
                                      int s_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm e_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,t_2 = NULL,r_2 = NULL;
                                          t = SSLgetAnnotations(w_12);
                                          e_9 = t;
                                          t = a_13;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              i_9 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = SSLgetAnnotations(a_13);
                                          h_9 = t;
                                          t = (ATerm) ATmakeAppl(sym_Match_1, i_9);
                                          r_2 = t;
                                          t = SSLsetAnnotations(r_2, h_9);
                                          j_9 = t;
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, z_12, j_9);
                                          t_2 = t;
                                          t = SSLsetAnnotations(t_2, e_9);
                                          LocalPopChoice(s_15);
                                        }
                                      else
                                        {
                                          t = b_15;
                                          {
                                            ATerm r_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,b_10 = NULL,x_2 = NULL,w_2 = NULL,u_2 = NULL;
                                            t = SSLgetAnnotations(w_12);
                                            r_9 = t;
                                            t = a_13;
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                v_9 = ATgetArgument(t, 0);
                                                w_9 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(a_13);
                                            u_9 = t;
                                            t = v_9;
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                z_9 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(v_9);
                                            y_9 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, z_9);
                                            u_2 = t;
                                            t = SSLsetAnnotations(u_2, y_9);
                                            b_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, b_10, w_9);
                                            w_2 = t;
                                            t = SSLsetAnnotations(w_2, u_9);
                                            x_9 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, z_12, x_9);
                                            x_2 = t;
                                            t = SSLsetAnnotations(x_2, r_9);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Choice_2))
                                      {
                                        z_12 = ATgetArgument(t, 0);
                                        a_13 = ATgetArgument(t, 1);
                                        {
                                          ATerm q_10 = NULL,w_10 = NULL,x_10 = NULL,y_2 = NULL;
                                          t = SSLgetAnnotations(w_12);
                                          q_10 = t;
                                          t = z_12;
                                          t = b_13(t);
                                          w_10 = t;
                                          t = a_13;
                                          t = b_13(t);
                                          x_10 = t;
                                          t = (ATerm) ATmakeAppl(sym_Choice_2, w_10, x_10);
                                          y_2 = t;
                                          t = SSLsetAnnotations(y_2, q_10);
                                        }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_LChoice_2))
                                          {
                                            z_12 = ATgetArgument(t, 0);
                                            a_13 = ATgetArgument(t, 1);
                                            {
                                              ATerm l_11 = NULL,p_11 = NULL,q_11 = NULL,z_2 = NULL;
                                              t = SSLgetAnnotations(w_12);
                                              l_11 = t;
                                              t = z_12;
                                              t = b_13(t);
                                              p_11 = t;
                                              t = a_13;
                                              t = b_13(t);
                                              q_11 = t;
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, p_11, q_11);
                                              z_2 = t;
                                              t = SSLsetAnnotations(z_2, l_11);
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_GuardedLChoice_3))
                                              {
                                                z_12 = ATgetArgument(t, 0);
                                                a_13 = ATgetArgument(t, 1);
                                                n_12 = ATgetArgument(t, 2);
                                                {
                                                  ATerm z_11 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,a_3 = NULL;
                                                  t = SSLgetAnnotations(w_12);
                                                  z_11 = t;
                                                  t = z_12;
                                                  t = b_13(t);
                                                  f_12 = t;
                                                  t = a_13;
                                                  t = b_13(t);
                                                  g_12 = t;
                                                  t = n_12;
                                                  t = b_13(t);
                                                  h_12 = t;
                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, f_12, g_12, h_12);
                                                  a_3 = t;
                                                  t = SSLsetAnnotations(a_3, z_11);
                                                }
                                              }
                                            else
                                              {
                                                ATerm r_12 = NULL,b_3 = NULL;
                                                if(match_cons(t, sym_Cong_2))
                                                  {
                                                    z_12 = ATgetArgument(t, 0);
                                                    a_13 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSLgetAnnotations(w_12);
                                                r_12 = t;
                                                t = (ATerm) ATmakeAppl(sym_Cong_2, z_12, a_13);
                                                b_3 = t;
                                                t = SSLsetAnnotations(b_3, r_12);
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
  t = b_13(t);
  k_2 = t;
  t = term_size_0_0(t);
  l_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_2, term_v_15);
  t = leq_0_0(t);
  t = k_2;
  return(t);
}
ATerm inlineable_0_0 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,o_15 = NULL,p_15 = NULL;
  c_15 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      d_15 = ATgetArgument(t, 0);
      e_15 = ATgetArgument(t, 1);
      o_15 = ATgetArgument(t, 2);
      p_15 = ATgetArgument(t, 3);
      {
        ATerm c_16 = NULL,d_16 = NULL,k_16 = NULL,e_4 = NULL;
        t = SSLgetAnnotations(c_15);
        d_16 = t;
        t = d_15;
        {
          ATerm z_15 = t;
          if((PushChoice() == 0))
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_15;
            }
        }
        c_16 = t;
        t = p_15;
        {
          ATerm a_16 = t;
          if((PushChoice() == 0))
            {
              static ATerm h_1 (ATerm t)
              {
                if(match_cons(t, sym_CallT_3))
                  {
                    ATerm e_16 = ATgetArgument(t, 0);
                    if(match_cons(e_16, sym_SVar_1))
                      {
                        if((c_16 != ATgetArgument(e_16, 0)))
                          {
                            _fail(ATgetArgument(e_16, 0));
                          }
                      }
                    else
                      _fail(t);
                    {
                      ATerm f_16 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm g_16 = ATgetArgument(t, 2);
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
              t = a_16;
            }
        }
        t = p_15;
        t = body_to_inline_0_0(t);
        k_16 = t;
        t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, c_16, e_15, o_15, k_16);
        e_4 = t;
        t = SSLsetAnnotations(e_4, d_16);
      }
    }
  else
    {
      ATerm w_16 = NULL,x_16 = NULL,c_17 = NULL,g_4 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          d_15 = ATgetArgument(t, 0);
          e_15 = ATgetArgument(t, 1);
          o_15 = ATgetArgument(t, 2);
          p_15 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_15);
      x_16 = t;
      t = d_15;
      {
        ATerm h_16 = t;
        if((PushChoice() == 0))
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_16;
          }
      }
      w_16 = t;
      t = p_15;
      {
        ATerm i_16 = t;
        if((PushChoice() == 0))
          {
            static ATerm b_2 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm j_16 = ATgetArgument(t, 0);
                  if(match_cons(j_16, sym_SVar_1))
                    {
                      if((w_16 != ATgetArgument(j_16, 0)))
                        {
                          _fail(ATgetArgument(j_16, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm l_16 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm m_16 = ATgetArgument(t, 2);
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
            t = i_16;
          }
      }
      t = p_15;
      t = body_to_inline_0_0(t);
      c_17 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, w_16, e_15, o_15, c_17);
      g_4 = t;
      t = SSLsetAnnotations(g_4, x_16);
    }
  return(t);
}
static ATerm j_7 (ATerm a_38, ATerm b_38, ATerm t)
{
  ATerm b_16 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_38, b_38);
  t = t_15(a_38, b_38, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_16 = ATgetFirst((ATermList) t);
      {
        ATerm n_16 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_16;
  return(t);
}
ATerm bottomup_1_0 (ATerm l_112 (ATerm), ATerm t)
{
  static ATerm c_2 (ATerm t)
  {
    t = bottomup_1_0(l_112, t);
    return(t);
  }
  t = SRTS_all(c_2, t);
  t = l_112(t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_16 = ATgetArgument(t, 0);
      if(((ATgetType(o_16) != AT_LIST) || !(ATisEmpty(o_16))))
        _fail(t);
      {
        ATerm p_16 = ATgetArgument(t, 1);
        if(((ATgetType(p_16) != AT_LIST) || !(ATisEmpty(p_16))))
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
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_16 = ATgetArgument(t, 0);
      if(((ATgetType(q_16) == AT_LIST) && !(ATisEmpty(q_16))))
        {
          y_30 = ATgetFirst((ATermList) q_16);
          z_30 = (ATerm) ATgetNext((ATermList) q_16);
        }
      else
        _fail(t);
      {
        ATerm r_16 = ATgetArgument(t, 1);
        if(((ATgetType(r_16) == AT_LIST) && !(ATisEmpty(r_16))))
          {
            a_31 = ATgetFirst((ATermList) r_16);
            b_31 = (ATerm) ATgetNext((ATermList) r_16);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_30, a_31), (ATerm) ATmakeAppl(sym__2, z_30, b_31));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm c_31 = NULL,e_31 = NULL;
  if(match_cons(t, sym__2))
    {
      c_31 = ATgetArgument(t, 0);
      e_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_31), c_31);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL;
  if(match_cons(t, sym__2))
    {
      f_31 = ATgetArgument(t, 0);
      g_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_31), (ATerm) ATmakeAppl(sym_Match_1, g_31));
  return(t);
}
static ATerm s_2 (ATerm t)
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
static ATerm v_2 (ATerm t)
{
  ATerm o_41 = NULL,s_41 = NULL,v_41 = NULL,w_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_16 = ATgetArgument(t, 0);
      if(((ATgetType(u_16) == AT_LIST) && !(ATisEmpty(u_16))))
        {
          o_41 = ATgetFirst((ATermList) u_16);
          s_41 = (ATerm) ATgetNext((ATermList) u_16);
        }
      else
        _fail(t);
      {
        ATerm v_16 = ATgetArgument(t, 1);
        if(((ATgetType(v_16) == AT_LIST) && !(ATisEmpty(v_16))))
          {
            v_41 = ATgetFirst((ATermList) v_16);
            w_41 = (ATerm) ATgetNext((ATermList) v_16);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_41, v_41), (ATerm) ATmakeAppl(sym__2, s_41, w_41));
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm x_41 = NULL,z_41 = NULL;
  if(match_cons(t, sym__2))
    {
      x_41 = ATgetArgument(t, 0);
      z_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_41), x_41);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL;
  if(match_cons(t, sym__2))
    {
      j_42 = ATgetArgument(t, 0);
      k_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_42), (ATerm) ATmakeAppl(sym_Match_1, k_42));
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm y_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm a_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(z_16);
      {
        ATerm n_59 = NULL,o_59 = NULL;
        n_59 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm b_17 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        o_59 = t;
        t = SSLgetAnnotations(n_59);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_17 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) d_17) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm e_17 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(e_17) != AT_LIST) || !(ATisEmpty(e_17))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = o_59;
      }
    }
  else
    {
      t = y_16;
      {
        ATerm f_17 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm h_17 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) h_17) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm i_17 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(g_17);
            _fail(t);
          }
        else
          {
            t = f_17;
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
    ATerm w_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,w_22 = NULL,x_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
    b_23 = t;
    if(match_cons(t, sym_Test_1))
      {
        a_23 = ATgetArgument(t, 0);
        t = a_23;
        if(match_cons(t, sym_Id_0))
          {
            ATerm j_17 = t;
            int k_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_l_17;
                t = d_2(t);
                LocalPopChoice(k_17);
              }
            else
              {
                t = j_17;
                {
                  ATerm m_17 = t;
                  int o_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,v_23 = NULL,e_24 = NULL,h_24 = NULL,i_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL;
                      t = b_23;
                      t = new_0_0(t);
                      f_23 = t;
                      t = bottomup_1_0(d_2, t);
                      m_24 = t;
                      t = (ATerm) ATempty;
                      t = d_2(t);
                      n_24 = t;
                      t = (ATerm) ATinsert(CheckATermList(n_24), m_24);
                      t = d_2(t);
                      g_23 = t;
                      t = f_23;
                      t = bottomup_1_0(d_2, t);
                      l_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, l_24);
                      t = d_2(t);
                      i_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, i_24);
                      t = d_2(t);
                      l_23 = t;
                      t = a_23;
                      t = bottomup_1_0(d_2, t);
                      n_23 = t;
                      t = f_23;
                      t = bottomup_1_0(d_2, t);
                      h_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, h_24);
                      t = d_2(t);
                      e_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, e_24);
                      t = d_2(t);
                      v_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_23, v_23);
                      t = d_2(t);
                      m_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_23, m_23);
                      t = d_2(t);
                      h_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, g_23, h_23);
                      t = d_2(t);
                      LocalPopChoice(o_17);
                    }
                  else
                    {
                      t = m_17;
                      t = b_23;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm p_17 = t;
                int q_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_r_17;
                    t = d_2(t);
                    LocalPopChoice(q_17);
                  }
                else
                  {
                    t = p_17;
                    {
                      ATerm s_17 = t;
                      int t_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm y_24 = NULL,d_25 = NULL,o_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,v_25 = NULL,w_25 = NULL,b_26 = NULL,c_26 = NULL,e_26 = NULL,f_26 = NULL,j_26 = NULL;
                          t = b_23;
                          t = new_0_0(t);
                          y_24 = t;
                          t = bottomup_1_0(d_2, t);
                          f_26 = t;
                          t = (ATerm) ATempty;
                          t = d_2(t);
                          j_26 = t;
                          t = (ATerm) ATinsert(CheckATermList(j_26), f_26);
                          t = d_2(t);
                          d_25 = t;
                          t = y_24;
                          t = bottomup_1_0(d_2, t);
                          e_26 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, e_26);
                          t = d_2(t);
                          c_26 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, c_26);
                          t = d_2(t);
                          q_25 = t;
                          t = a_23;
                          t = bottomup_1_0(d_2, t);
                          s_25 = t;
                          t = y_24;
                          t = bottomup_1_0(d_2, t);
                          b_26 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, b_26);
                          t = d_2(t);
                          w_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, w_25);
                          t = d_2(t);
                          v_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, s_25, v_25);
                          t = d_2(t);
                          r_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, q_25, r_25);
                          t = d_2(t);
                          o_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, d_25, o_25);
                          t = d_2(t);
                          LocalPopChoice(t_17);
                        }
                      else
                        {
                          t = s_17;
                          t = b_23;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    w_22 = ATgetArgument(t, 0);
                    {
                      ATerm v_17 = t;
                      int w_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, w_22);
                          t = d_2(t);
                          LocalPopChoice(w_17);
                        }
                      else
                        {
                          t = v_17;
                          {
                            ATerm x_17 = t;
                            int y_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm t_26 = NULL,w_26 = NULL,x_26 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,f_27 = NULL,g_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,m_27 = NULL,n_27 = NULL;
                                t = b_23;
                                t = new_0_0(t);
                                t_26 = t;
                                t = bottomup_1_0(d_2, t);
                                m_27 = t;
                                t = (ATerm) ATempty;
                                t = d_2(t);
                                n_27 = t;
                                t = (ATerm) ATinsert(CheckATermList(n_27), m_27);
                                t = d_2(t);
                                w_26 = t;
                                t = t_26;
                                t = bottomup_1_0(d_2, t);
                                k_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, k_27);
                                t = d_2(t);
                                j_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, j_27);
                                t = d_2(t);
                                b_27 = t;
                                t = a_23;
                                t = bottomup_1_0(d_2, t);
                                d_27 = t;
                                t = t_26;
                                t = bottomup_1_0(d_2, t);
                                i_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, i_27);
                                t = d_2(t);
                                g_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, g_27);
                                t = d_2(t);
                                f_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, d_27, f_27);
                                t = d_2(t);
                                c_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, b_27, c_27);
                                t = d_2(t);
                                x_26 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, w_26, x_26);
                                t = d_2(t);
                                LocalPopChoice(y_17);
                              }
                            else
                              {
                                t = x_17;
                                t = b_23;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm z_17 = t;
                    int a_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL;
                        t = b_23;
                        t = new_0_0(t);
                        z_27 = t;
                        t = bottomup_1_0(d_2, t);
                        m_28 = t;
                        t = (ATerm) ATempty;
                        t = d_2(t);
                        n_28 = t;
                        t = (ATerm) ATinsert(CheckATermList(n_28), m_28);
                        t = d_2(t);
                        a_28 = t;
                        t = z_27;
                        t = bottomup_1_0(d_2, t);
                        l_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, l_28);
                        t = d_2(t);
                        k_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, k_28);
                        t = d_2(t);
                        c_28 = t;
                        t = a_23;
                        t = bottomup_1_0(d_2, t);
                        e_28 = t;
                        t = z_27;
                        t = bottomup_1_0(d_2, t);
                        j_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, j_28);
                        t = d_2(t);
                        i_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, i_28);
                        t = d_2(t);
                        h_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, e_28, h_28);
                        t = d_2(t);
                        d_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, c_28, d_28);
                        t = d_2(t);
                        b_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, a_28, b_28);
                        t = d_2(t);
                        LocalPopChoice(a_18);
                      }
                    else
                      {
                        t = z_17;
                        t = b_23;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            a_23 = ATgetArgument(t, 0);
            t = a_23;
            if(match_cons(t, sym_Id_0))
              {
                ATerm b_18 = t;
                int c_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_r_17;
                    t = d_2(t);
                    LocalPopChoice(c_18);
                  }
                else
                  {
                    t = b_18;
                    t = b_23;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm d_18 = t;
                    int e_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_l_17;
                        t = d_2(t);
                        LocalPopChoice(e_18);
                      }
                    else
                      {
                        t = d_18;
                        t = b_23;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        w_22 = ATgetArgument(t, 0);
                        {
                          ATerm f_18 = t;
                          int g_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, w_22);
                              t = d_2(t);
                              LocalPopChoice(g_18);
                            }
                          else
                            {
                              t = f_18;
                              t = b_23;
                            }
                        }
                      }
                    else
                      {
                        t = b_23;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                a_23 = ATgetArgument(t, 0);
                z_22 = ATgetArgument(t, 1);
                t = z_22;
                if(match_cons(t, sym_Id_0))
                  {
                    t = a_23;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = z_22;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = a_23;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                w_22 = ATgetArgument(t, 0);
                                x_22 = ATgetArgument(t, 1);
                                t = a_23;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    w_22 = ATgetArgument(t, 0);
                                    x_22 = ATgetArgument(t, 1);
                                    t = a_23;
                                  }
                                else
                                  {
                                    t = a_23;
                                  }
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
                        t = s_22;
                        if(match_cons(t, sym_Match_1))
                          {
                            r_22 = ATgetArgument(t, 0);
                            t = r_22;
                            if(match_cons(t, sym_Op_2))
                              {
                                n_22 = ATgetArgument(t, 0);
                                i_22 = ATgetArgument(t, 1);
                                t = a_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = z_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm j_18 = t;
                                        int k_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_r_17;
                                            t = d_2(t);
                                            LocalPopChoice(k_18);
                                          }
                                        else
                                          {
                                            t = j_18;
                                            t = b_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            w_22 = ATgetArgument(t, 0);
                                            x_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm m_18 = t;
                                              int n_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm p_30 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                  t = d_2(t);
                                                  p_30 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, p_30);
                                                  t = d_2(t);
                                                  LocalPopChoice(n_18);
                                                }
                                              else
                                                {
                                                  t = m_18;
                                                  t = b_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                t = w_22;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    q_22 = ATgetArgument(t, 0);
                                                    j_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm o_18 = t;
                                                      int p_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, q_22, n_22);
                                                          {
                                                            ATerm r_18 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm n_17 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    n_17 = ATgetArgument(t, 0);
                                                                    if((n_17 != ATgetArgument(t, 1)))
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
                                                                t = r_18;
                                                              }
                                                          }
                                                          t = term_r_17;
                                                          t = bottomup_1_0(d_2, t);
                                                          LocalPopChoice(p_18);
                                                        }
                                                      else
                                                        {
                                                          t = o_18;
                                                          {
                                                            ATerm s_18 = t;
                                                            int v_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm x_30 = NULL;
                                                                t = n_22;
                                                                if((q_22 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, j_22, i_22);
                                                                t = genzip_4_0(e_2, g_2, h_2, i_2, t);
                                                                x_30 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_30), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, q_22, j_22)), t_22));
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(v_18);
                                                              }
                                                            else
                                                              {
                                                                t = s_18;
                                                                {
                                                                  ATerm c_19 = t;
                                                                  int e_19 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm q_31 = NULL;
                                                                      t = r_22;
                                                                      if((w_22 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                                      t = d_2(t);
                                                                      q_31 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_31, t_22);
                                                                      t = d_2(t);
                                                                      LocalPopChoice(e_19);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = c_19;
                                                                      t = b_23;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm j_19 = t;
                                                    int k_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm d_32 = NULL;
                                                        t = r_22;
                                                        if((w_22 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                        t = d_2(t);
                                                        d_32 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, d_32, t_22);
                                                        t = d_2(t);
                                                        LocalPopChoice(k_19);
                                                      }
                                                    else
                                                      {
                                                        t = j_19;
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm l_19 = t;
                                                      int m_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm h_32 = NULL;
                                                          t = r_22;
                                                          if((w_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, w_22);
                                                          t = d_2(t);
                                                          h_32 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_32, t_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(m_19);
                                                        }
                                                      else
                                                        {
                                                          t = l_19;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        x_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm n_19 = t;
                                                          int o_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm o_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                              t = d_2(t);
                                                              o_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, o_32);
                                                              t = d_2(t);
                                                              LocalPopChoice(o_19);
                                                            }
                                                          else
                                                            {
                                                              t = n_19;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = a_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = z_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm p_19 = t;
                                        int q_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_r_17;
                                            t = d_2(t);
                                            LocalPopChoice(q_19);
                                          }
                                        else
                                          {
                                            t = p_19;
                                            t = b_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            w_22 = ATgetArgument(t, 0);
                                            x_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm r_19 = t;
                                              int s_19 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm k_33 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                  t = d_2(t);
                                                  k_33 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, k_33);
                                                  t = d_2(t);
                                                  LocalPopChoice(s_19);
                                                }
                                              else
                                                {
                                                  t = r_19;
                                                  t = b_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                {
                                                  ATerm t_19 = t;
                                                  int u_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm v_33 = NULL;
                                                      t = r_22;
                                                      if((w_22 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, w_22);
                                                      t = d_2(t);
                                                      v_33 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_33, t_22);
                                                      t = d_2(t);
                                                      LocalPopChoice(u_19);
                                                    }
                                                  else
                                                    {
                                                      t = t_19;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm v_19 = t;
                                                      int w_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm z_33 = NULL;
                                                          t = r_22;
                                                          if((w_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                          t = d_2(t);
                                                          z_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, z_33, t_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(w_19);
                                                        }
                                                      else
                                                        {
                                                          t = v_19;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        x_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm y_19 = t;
                                                          int z_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm j_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                              t = d_2(t);
                                                              j_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, j_34);
                                                              t = d_2(t);
                                                              LocalPopChoice(z_19);
                                                            }
                                                          else
                                                            {
                                                              t = y_19;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
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
                                r_22 = ATgetArgument(t, 0);
                                t = r_22;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    n_22 = ATgetArgument(t, 0);
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm a_20 = t;
                                            int d_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_r_17;
                                                t = d_2(t);
                                                LocalPopChoice(d_20);
                                              }
                                            else
                                              {
                                                t = a_20;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                x_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm k_20 = t;
                                                  int m_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm l_35 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                      t = d_2(t);
                                                      l_35 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, l_35);
                                                      t = d_2(t);
                                                      LocalPopChoice(m_20);
                                                    }
                                                  else
                                                    {
                                                      t = k_20;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm p_20 = t;
                                                int q_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm r_20 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(q_20);
                                                    {
                                                      ATerm s_20 = t;
                                                      int t_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm i_36 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, r_22);
                                                          t = d_2(t);
                                                          i_36 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_36, t_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(t_20);
                                                        }
                                                      else
                                                        {
                                                          t = s_20;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = p_20;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        t = w_22;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            q_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm u_20 = t;
                                                              int v_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm n_36 = NULL,o_36 = NULL;
                                                                  t = n_22;
                                                                  if((q_22 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, q_22);
                                                                  t = d_2(t);
                                                                  o_36 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, o_36);
                                                                  t = d_2(t);
                                                                  n_36 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_36, t_22);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(v_20);
                                                                }
                                                              else
                                                                {
                                                                  t = u_20;
                                                                  t = b_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = b_23;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            w_22 = ATgetArgument(t, 0);
                                                            x_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm w_20 = t;
                                                              int x_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm u_36 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                                  t = d_2(t);
                                                                  u_36 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, u_36);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(x_20);
                                                                }
                                                              else
                                                                {
                                                                  t = w_20;
                                                                  t = b_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = b_23;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm y_20 = t;
                                            int z_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_r_17;
                                                t = d_2(t);
                                                LocalPopChoice(z_20);
                                              }
                                            else
                                              {
                                                t = y_20;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                x_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm a_21 = t;
                                                  int b_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm d_37 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                      t = d_2(t);
                                                      d_37 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, d_37);
                                                      t = d_2(t);
                                                      LocalPopChoice(b_21);
                                                    }
                                                  else
                                                    {
                                                      t = a_21;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm c_21 = t;
                                                int d_21 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm f_21 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(d_21);
                                                    {
                                                      ATerm g_21 = t;
                                                      int h_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm h_37 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, r_22);
                                                          t = d_2(t);
                                                          h_37 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_37, t_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(h_21);
                                                        }
                                                      else
                                                        {
                                                          t = g_21;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = c_21;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        x_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm i_21 = t;
                                                          int j_21 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm s_37 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                              t = d_2(t);
                                                              s_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, s_37);
                                                              t = d_2(t);
                                                              LocalPopChoice(j_21);
                                                            }
                                                          else
                                                            {
                                                              t = i_21;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
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
                                    r_22 = ATgetArgument(t, 0);
                                    k_22 = ATgetArgument(t, 1);
                                    l_22 = ATgetArgument(t, 2);
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm k_21 = t;
                                            int l_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_r_17;
                                                t = d_2(t);
                                                LocalPopChoice(l_21);
                                              }
                                            else
                                              {
                                                t = k_21;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                x_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm m_21 = t;
                                                  int n_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_38 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                      t = d_2(t);
                                                      e_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, e_38);
                                                      t = d_2(t);
                                                      LocalPopChoice(n_21);
                                                    }
                                                  else
                                                    {
                                                      t = m_21;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm o_21 = t;
                                                int p_21 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm q_21 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(p_21);
                                                    {
                                                      ATerm r_21 = t;
                                                      int s_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm l_38 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, r_22, k_22, l_22);
                                                          t = d_2(t);
                                                          l_38 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, l_38, t_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(s_21);
                                                        }
                                                      else
                                                        {
                                                          t = r_21;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = o_21;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        x_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_21 = t;
                                                          int u_21 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_39 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                              t = d_2(t);
                                                              g_39 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, g_39);
                                                              t = d_2(t);
                                                              LocalPopChoice(u_21);
                                                            }
                                                          else
                                                            {
                                                              t = t_21;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm v_21 = t;
                                            int c_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_r_17;
                                                t = d_2(t);
                                                LocalPopChoice(c_22);
                                              }
                                            else
                                              {
                                                t = v_21;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                x_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm v_22 = t;
                                                  int c_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_39 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                      t = d_2(t);
                                                      x_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, x_39);
                                                      t = d_2(t);
                                                      LocalPopChoice(c_23);
                                                    }
                                                  else
                                                    {
                                                      t = v_22;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    x_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm d_23 = t;
                                                      int j_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm k_40 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                          t = d_2(t);
                                                          k_40 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, k_40);
                                                          t = d_2(t);
                                                          LocalPopChoice(j_23);
                                                        }
                                                      else
                                                        {
                                                          t = d_23;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = b_23;
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
                            s_22 = ATgetArgument(t, 0);
                            t = s_22;
                            if(match_cons(t, sym_Op_2))
                              {
                                r_22 = ATgetArgument(t, 0);
                                k_22 = ATgetArgument(t, 1);
                                t = a_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = z_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm k_23 = t;
                                        int o_23 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_r_17;
                                            t = d_2(t);
                                            LocalPopChoice(o_23);
                                          }
                                        else
                                          {
                                            t = k_23;
                                            t = b_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            w_22 = ATgetArgument(t, 0);
                                            x_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm p_23 = t;
                                              int q_23 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm w_40 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                  t = d_2(t);
                                                  w_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, w_40);
                                                  t = d_2(t);
                                                  LocalPopChoice(q_23);
                                                }
                                              else
                                                {
                                                  t = p_23;
                                                  t = b_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                t = w_22;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    q_22 = ATgetArgument(t, 0);
                                                    j_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm r_23 = t;
                                                      int s_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, q_22, r_22);
                                                          {
                                                            ATerm t_23 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm u_17 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    u_17 = ATgetArgument(t, 0);
                                                                    if((u_17 != ATgetArgument(t, 1)))
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
                                                                t = t_23;
                                                              }
                                                          }
                                                          t = term_r_17;
                                                          t = bottomup_1_0(d_2, t);
                                                          LocalPopChoice(s_23);
                                                        }
                                                      else
                                                        {
                                                          t = r_23;
                                                          {
                                                            ATerm u_23 = t;
                                                            int w_23 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm c_41 = NULL;
                                                                t = r_22;
                                                                if((q_22 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, j_22, k_22);
                                                                t = genzip_4_0(s_2, v_2, c_3, d_3, t);
                                                                c_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_41), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, q_22, j_22)));
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(w_23);
                                                              }
                                                            else
                                                              {
                                                                t = u_23;
                                                                {
                                                                  ATerm x_23 = t;
                                                                  int y_23 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = s_22;
                                                                      if((w_22 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                                      t = d_2(t);
                                                                      LocalPopChoice(y_23);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = x_23;
                                                                      t = b_23;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm z_23 = t;
                                                    int b_24 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = s_22;
                                                        if((w_22 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                        t = d_2(t);
                                                        LocalPopChoice(b_24);
                                                      }
                                                    else
                                                      {
                                                        t = z_23;
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm c_24 = t;
                                                      int d_24 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = s_22;
                                                          if((w_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, w_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(d_24);
                                                        }
                                                      else
                                                        {
                                                          t = c_24;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        x_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm f_24 = t;
                                                          int k_24 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm w_42 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                              t = d_2(t);
                                                              w_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, w_42);
                                                              t = d_2(t);
                                                              LocalPopChoice(k_24);
                                                            }
                                                          else
                                                            {
                                                              t = f_24;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = a_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = z_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm p_24 = t;
                                        int r_24 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_r_17;
                                            t = d_2(t);
                                            LocalPopChoice(r_24);
                                          }
                                        else
                                          {
                                            t = p_24;
                                            t = b_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            w_22 = ATgetArgument(t, 0);
                                            x_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm w_24 = t;
                                              int z_24 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm r_43 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                  t = d_2(t);
                                                  r_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, r_43);
                                                  t = d_2(t);
                                                  LocalPopChoice(z_24);
                                                }
                                              else
                                                {
                                                  t = w_24;
                                                  t = b_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                {
                                                  ATerm c_25 = t;
                                                  int e_25 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = s_22;
                                                      if((w_22 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, w_22);
                                                      t = d_2(t);
                                                      LocalPopChoice(e_25);
                                                    }
                                                  else
                                                    {
                                                      t = c_25;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm f_25 = t;
                                                      int g_25 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = s_22;
                                                          if((w_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(g_25);
                                                        }
                                                      else
                                                        {
                                                          t = f_25;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        x_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_25 = t;
                                                          int i_25 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_44 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                              t = d_2(t);
                                                              f_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, f_44);
                                                              t = d_2(t);
                                                              LocalPopChoice(i_25);
                                                            }
                                                          else
                                                            {
                                                              t = h_25;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
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
                                s_22 = ATgetArgument(t, 0);
                                t = s_22;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    r_22 = ATgetArgument(t, 0);
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm j_25 = t;
                                            int m_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_r_17;
                                                t = d_2(t);
                                                LocalPopChoice(m_25);
                                              }
                                            else
                                              {
                                                t = j_25;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                x_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm n_25 = t;
                                                  int p_25 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm d_45 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                      t = d_2(t);
                                                      d_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, d_45);
                                                      t = d_2(t);
                                                      LocalPopChoice(p_25);
                                                    }
                                                  else
                                                    {
                                                      t = n_25;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm t_25 = t;
                                                int u_25 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm y_25 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(u_25);
                                                    {
                                                      ATerm z_25 = t;
                                                      int a_26 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(a_26);
                                                        }
                                                      else
                                                        {
                                                          t = z_25;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = t_25;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        t = w_22;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            q_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm k_26 = t;
                                                              int l_26 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm t_45 = NULL;
                                                                  t = r_22;
                                                                  if((q_22 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, q_22);
                                                                  t = d_2(t);
                                                                  t_45 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, t_45);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(l_26);
                                                                }
                                                              else
                                                                {
                                                                  t = k_26;
                                                                  t = b_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = b_23;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            w_22 = ATgetArgument(t, 0);
                                                            x_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm m_26 = t;
                                                              int n_26 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm p_46 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                                  t = d_2(t);
                                                                  p_46 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, p_46);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(n_26);
                                                                }
                                                              else
                                                                {
                                                                  t = m_26;
                                                                  t = b_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = b_23;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm v_26 = t;
                                            int z_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_r_17;
                                                t = d_2(t);
                                                LocalPopChoice(z_26);
                                              }
                                            else
                                              {
                                                t = v_26;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                x_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm h_27 = t;
                                                  int l_27 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm g_47 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                      t = d_2(t);
                                                      g_47 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, g_47);
                                                      t = d_2(t);
                                                      LocalPopChoice(l_27);
                                                    }
                                                  else
                                                    {
                                                      t = h_27;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm o_27 = t;
                                                int p_27 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm q_27 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(p_27);
                                                    {
                                                      ATerm r_27 = t;
                                                      int s_27 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(s_27);
                                                        }
                                                      else
                                                        {
                                                          t = r_27;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = o_27;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        x_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_27 = t;
                                                          int u_27 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_48 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                              t = d_2(t);
                                                              a_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, a_48);
                                                              t = d_2(t);
                                                              LocalPopChoice(u_27);
                                                            }
                                                          else
                                                            {
                                                              t = t_27;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
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
                                    s_22 = ATgetArgument(t, 0);
                                    t_22 = ATgetArgument(t, 1);
                                    m_22 = ATgetArgument(t, 2);
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm v_27 = t;
                                            int x_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_r_17;
                                                t = d_2(t);
                                                LocalPopChoice(x_27);
                                              }
                                            else
                                              {
                                                t = v_27;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                x_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm y_27 = t;
                                                  int f_28 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm m_48 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                      t = d_2(t);
                                                      m_48 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, m_48);
                                                      t = d_2(t);
                                                      LocalPopChoice(f_28);
                                                    }
                                                  else
                                                    {
                                                      t = y_27;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm g_28 = t;
                                                int o_28 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm q_28 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(o_28);
                                                    {
                                                      ATerm r_28 = t;
                                                      int s_28 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, s_22, t_22, m_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(s_28);
                                                        }
                                                      else
                                                        {
                                                          t = r_28;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = g_28;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        x_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_28 = t;
                                                          int u_28 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_48 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                              t = d_2(t);
                                                              z_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, z_48);
                                                              t = d_2(t);
                                                              LocalPopChoice(u_28);
                                                            }
                                                          else
                                                            {
                                                              t = t_28;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
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
                                        s_22 = ATgetArgument(t, 0);
                                        t_22 = ATgetArgument(t, 1);
                                        t = a_23;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = z_22;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm v_28 = t;
                                                int w_28 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_r_17;
                                                    t = d_2(t);
                                                    LocalPopChoice(w_28);
                                                  }
                                                else
                                                  {
                                                    t = v_28;
                                                    {
                                                      ATerm x_28 = t;
                                                      int y_28 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm t_49 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, t_22);
                                                          t = d_2(t);
                                                          t_49 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, s_22, t_49);
                                                          t = d_2(t);
                                                          LocalPopChoice(y_28);
                                                        }
                                                      else
                                                        {
                                                          t = x_28;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    x_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm z_28 = t;
                                                      int a_29 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm f_50 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                          t = d_2(t);
                                                          f_50 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, f_50);
                                                          t = d_2(t);
                                                          LocalPopChoice(a_29);
                                                        }
                                                      else
                                                        {
                                                          t = z_28;
                                                          {
                                                            ATerm b_29 = t;
                                                            int d_29 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm j_50 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, t_22);
                                                                t = d_2(t);
                                                                j_50 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, s_22, j_50);
                                                                t = d_2(t);
                                                                LocalPopChoice(d_29);
                                                              }
                                                            else
                                                              {
                                                                t = b_29;
                                                                t = b_23;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        x_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm e_29 = t;
                                                          int f_29 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_50 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, t_22);
                                                              t = d_2(t);
                                                              r_50 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, s_22, r_50);
                                                              t = d_2(t);
                                                              LocalPopChoice(f_29);
                                                            }
                                                          else
                                                            {
                                                              t = e_29;
                                                              {
                                                                ATerm g_29 = t;
                                                                int h_29 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm c_51 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                                    t = d_2(t);
                                                                    c_51 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, c_51);
                                                                    t = d_2(t);
                                                                    LocalPopChoice(h_29);
                                                                  }
                                                                else
                                                                  {
                                                                    t = g_29;
                                                                    t = b_23;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm i_29 = t;
                                                        int j_29 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm k_51 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, t_22);
                                                            t = d_2(t);
                                                            k_51 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, s_22, k_51);
                                                            t = d_2(t);
                                                            LocalPopChoice(j_29);
                                                          }
                                                        else
                                                          {
                                                            t = i_29;
                                                            t = b_23;
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
                                            s_22 = ATgetArgument(t, 0);
                                            t_22 = ATgetArgument(t, 1);
                                            t = a_23;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = z_22;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm k_29 = t;
                                                    int l_29 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_r_17;
                                                        t = d_2(t);
                                                        LocalPopChoice(l_29);
                                                      }
                                                    else
                                                      {
                                                        t = k_29;
                                                        {
                                                          ATerm m_29 = t;
                                                          int n_29 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm v_52 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, t_22);
                                                              t = d_2(t);
                                                              v_52 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, v_52);
                                                              t = d_2(t);
                                                              LocalPopChoice(n_29);
                                                            }
                                                          else
                                                            {
                                                              t = m_29;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        x_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm o_29 = t;
                                                          int p_29 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm c_53 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                              t = d_2(t);
                                                              c_53 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, c_53);
                                                              t = d_2(t);
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
                                                                    ATerm m_53 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, t_22);
                                                                    t = d_2(t);
                                                                    m_53 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, m_53);
                                                                    t = d_2(t);
                                                                    LocalPopChoice(r_29);
                                                                  }
                                                                else
                                                                  {
                                                                    t = q_29;
                                                                    t = b_23;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            w_22 = ATgetArgument(t, 0);
                                                            x_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm s_29 = t;
                                                              int u_29 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm e_54 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, t_22);
                                                                  t = d_2(t);
                                                                  e_54 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, e_54);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(u_29);
                                                                }
                                                              else
                                                                {
                                                                  t = s_29;
                                                                  {
                                                                    ATerm w_29 = t;
                                                                    int x_29 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm i_54 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                                        t = d_2(t);
                                                                        i_54 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, i_54);
                                                                        t = d_2(t);
                                                                        LocalPopChoice(x_29);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = w_29;
                                                                        t = b_23;
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
                                                                ATerm n_55 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, t_22);
                                                                t = d_2(t);
                                                                n_55 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, n_55);
                                                                t = d_2(t);
                                                                LocalPopChoice(z_29);
                                                              }
                                                            else
                                                              {
                                                                t = y_29;
                                                                t = b_23;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = a_23;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = z_22;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm a_30 = t;
                                                    int b_30 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_r_17;
                                                        t = d_2(t);
                                                        LocalPopChoice(b_30);
                                                      }
                                                    else
                                                      {
                                                        t = a_30;
                                                        t = b_23;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        x_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm c_30 = t;
                                                          int d_30 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_56 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                              t = d_2(t);
                                                              n_56 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, n_56);
                                                              t = d_2(t);
                                                              LocalPopChoice(d_30);
                                                            }
                                                          else
                                                            {
                                                              t = c_30;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            w_22 = ATgetArgument(t, 0);
                                                            x_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm e_30 = t;
                                                              int f_30 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm u_56 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                                  t = d_2(t);
                                                                  u_56 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, u_56);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(f_30);
                                                                }
                                                              else
                                                                {
                                                                  t = e_30;
                                                                  t = b_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = b_23;
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
                    a_23 = ATgetArgument(t, 0);
                    z_22 = ATgetArgument(t, 1);
                    t = z_22;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = a_23;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm g_30 = t;
                            int h_30 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_l_17;
                                t = d_2(t);
                                LocalPopChoice(h_30);
                              }
                            else
                              {
                                t = g_30;
                                t = a_23;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = z_22;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    w_22 = ATgetArgument(t, 0);
                                    x_22 = ATgetArgument(t, 1);
                                    t = a_23;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        w_22 = ATgetArgument(t, 0);
                                        t = a_23;
                                      }
                                    else
                                      {
                                        t = a_23;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = a_23;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm i_30 = t;
                            int j_30 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_l_17;
                                t = d_2(t);
                                LocalPopChoice(j_30);
                              }
                            else
                              {
                                t = i_30;
                                {
                                  ATerm k_30 = t;
                                  int l_30 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = z_22;
                                      if((a_23 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(l_30);
                                    }
                                  else
                                    {
                                      t = k_30;
                                      t = b_23;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = z_22;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    w_22 = ATgetArgument(t, 0);
                                    x_22 = ATgetArgument(t, 1);
                                    {
                                      ATerm n_30 = t;
                                      int o_30 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm y_58 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, x_22, z_22);
                                          t = d_2(t);
                                          y_58 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, w_22, y_58);
                                          t = d_2(t);
                                          LocalPopChoice(o_30);
                                        }
                                      else
                                        {
                                          t = n_30;
                                          {
                                            ATerm q_30 = t;
                                            int r_30 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = z_22;
                                                if((a_23 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(r_30);
                                              }
                                            else
                                              {
                                                t = q_30;
                                                t = b_23;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        w_22 = ATgetArgument(t, 0);
                                        {
                                          ATerm s_30 = t;
                                          int t_30 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = z_22;
                                              if((a_23 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(t_30);
                                            }
                                          else
                                            {
                                              t = s_30;
                                              {
                                                ATerm u_30 = t;
                                                int v_30 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = w_22;
                                                    t = topdown_1_0(e_3, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                    t = bottomup_1_0(d_2, t);
                                                    LocalPopChoice(v_30);
                                                  }
                                                else
                                                  {
                                                    t = u_30;
                                                    t = b_23;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm w_30 = t;
                                        int d_31 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = z_22;
                                            if((a_23 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(d_31);
                                          }
                                        else
                                          {
                                            t = w_30;
                                            t = b_23;
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
                        a_23 = ATgetArgument(t, 0);
                        z_22 = ATgetArgument(t, 1);
                        t = z_22;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = a_23;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm i_31 = t;
                                int l_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_l_17;
                                    t = d_2(t);
                                    LocalPopChoice(l_31);
                                  }
                                else
                                  {
                                    t = i_31;
                                    t = z_22;
                                  }
                              }
                            else
                              {
                                ATerm m_31 = t;
                                int n_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_l_17;
                                    t = d_2(t);
                                    LocalPopChoice(n_31);
                                  }
                                else
                                  {
                                    t = m_31;
                                    t = b_23;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = a_23;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm o_31 = t;
                                    int p_31 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_r_17;
                                        t = d_2(t);
                                        LocalPopChoice(p_31);
                                      }
                                    else
                                      {
                                        t = o_31;
                                        t = z_22;
                                      }
                                  }
                                else
                                  {
                                    ATerm r_31 = t;
                                    int s_31 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_r_17;
                                        t = d_2(t);
                                        LocalPopChoice(s_31);
                                      }
                                    else
                                      {
                                        t = r_31;
                                        t = b_23;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    s_22 = ATgetArgument(t, 0);
                                    t_22 = ATgetArgument(t, 1);
                                    t = a_23;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        ATerm t_31 = t;
                                        int u_31 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm w_60 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, a_23, s_22);
                                            t = conc_0_0(t);
                                            w_60 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, w_60, t_22);
                                            t = bottomup_1_0(d_2, t);
                                            LocalPopChoice(u_31);
                                          }
                                        else
                                          {
                                            t = t_31;
                                            t = b_23;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = a_23;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        t = b_23;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm v_31 = t;
                        int w_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm x_31 = ATgetArgument(t, 0);
                                z_22 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(w_31);
                            t = z_22;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm y_31 = t;
                                int z_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_l_17;
                                    t = d_2(t);
                                    LocalPopChoice(z_31);
                                  }
                                else
                                  {
                                    t = y_31;
                                    t = b_23;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm b_32 = t;
                                    int c_32 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_r_17;
                                        t = d_2(t);
                                        LocalPopChoice(c_32);
                                      }
                                    else
                                      {
                                        t = b_32;
                                        t = b_23;
                                      }
                                  }
                                else
                                  {
                                    t = b_23;
                                  }
                              }
                          }
                        else
                          {
                            t = v_31;
                            if(match_cons(t, sym_All_1))
                              {
                                a_23 = ATgetArgument(t, 0);
                                t = a_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm e_32 = t;
                                    int f_32 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_l_17;
                                        t = d_2(t);
                                        LocalPopChoice(f_32);
                                      }
                                    else
                                      {
                                        t = e_32;
                                        t = b_23;
                                      }
                                  }
                                else
                                  {
                                    t = b_23;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    a_23 = ATgetArgument(t, 0);
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm g_32 = t;
                                        int i_32 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_l_17;
                                            t = d_2(t);
                                            LocalPopChoice(i_32);
                                          }
                                        else
                                          {
                                            t = g_32;
                                            {
                                              ATerm j_32 = t;
                                              int k_32 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm b_62 = NULL,d_62 = NULL,e_62 = NULL,g_62 = NULL,h_62 = NULL,j_62 = NULL,k_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL;
                                                  t = b_23;
                                                  t = new_0_0(t);
                                                  b_62 = t;
                                                  t = bottomup_1_0(d_2, t);
                                                  x_62 = t;
                                                  t = (ATerm) ATempty;
                                                  t = d_2(t);
                                                  y_62 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(y_62), x_62);
                                                  t = d_2(t);
                                                  d_62 = t;
                                                  t = b_62;
                                                  t = bottomup_1_0(d_2, t);
                                                  w_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, w_62);
                                                  t = d_2(t);
                                                  v_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, v_62);
                                                  t = d_2(t);
                                                  g_62 = t;
                                                  t = a_23;
                                                  t = bottomup_1_0(d_2, t);
                                                  j_62 = t;
                                                  t = b_62;
                                                  t = bottomup_1_0(d_2, t);
                                                  u_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, u_62);
                                                  t = d_2(t);
                                                  t_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, t_62);
                                                  t = d_2(t);
                                                  k_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, j_62, k_62);
                                                  t = d_2(t);
                                                  h_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_62, h_62);
                                                  t = d_2(t);
                                                  e_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, d_62, e_62);
                                                  t = d_2(t);
                                                  LocalPopChoice(k_32);
                                                }
                                              else
                                                {
                                                  t = j_32;
                                                  t = b_23;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm l_32 = t;
                                            int m_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_r_17;
                                                t = d_2(t);
                                                LocalPopChoice(m_32);
                                              }
                                            else
                                              {
                                                t = l_32;
                                                {
                                                  ATerm n_32 = t;
                                                  int p_32 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm d_63 = NULL,e_63 = NULL,h_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,h_64 = NULL,i_64 = NULL;
                                                      t = b_23;
                                                      t = new_0_0(t);
                                                      d_63 = t;
                                                      t = bottomup_1_0(d_2, t);
                                                      h_64 = t;
                                                      t = (ATerm) ATempty;
                                                      t = d_2(t);
                                                      i_64 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(i_64), h_64);
                                                      t = d_2(t);
                                                      e_63 = t;
                                                      t = d_63;
                                                      t = bottomup_1_0(d_2, t);
                                                      e_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, e_64);
                                                      t = d_2(t);
                                                      d_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, d_64);
                                                      t = d_2(t);
                                                      v_63 = t;
                                                      t = a_23;
                                                      t = bottomup_1_0(d_2, t);
                                                      x_63 = t;
                                                      t = d_63;
                                                      t = bottomup_1_0(d_2, t);
                                                      c_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, c_64);
                                                      t = d_2(t);
                                                      z_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, z_63);
                                                      t = d_2(t);
                                                      y_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_63, y_63);
                                                      t = d_2(t);
                                                      w_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_63, w_63);
                                                      t = d_2(t);
                                                      h_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, e_63, h_63);
                                                      t = d_2(t);
                                                      LocalPopChoice(p_32);
                                                    }
                                                  else
                                                    {
                                                      t = n_32;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                x_22 = ATgetArgument(t, 1);
                                                t = x_22;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    z_21 = ATgetArgument(t, 0);
                                                    b_22 = ATgetArgument(t, 1);
                                                    t = z_21;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        a_22 = ATgetArgument(t, 0);
                                                        t = w_22;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            q_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm q_32 = t;
                                                              int r_32 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm i_65 = NULL,j_65 = NULL,k_65 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, a_22);
                                                                  t = d_2(t);
                                                                  k_65 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, k_65, b_22);
                                                                  t = d_2(t);
                                                                  j_65 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, j_65);
                                                                  t = d_2(t);
                                                                  i_65 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, i_65);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(r_32);
                                                                }
                                                              else
                                                                {
                                                                  t = q_32;
                                                                  {
                                                                    ATerm t_32 = t;
                                                                    int u_32 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm m_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL;
                                                                        t = b_23;
                                                                        t = new_0_0(t);
                                                                        m_65 = t;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        g_66 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = d_2(t);
                                                                        h_66 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(h_66), g_66);
                                                                        t = d_2(t);
                                                                        p_65 = t;
                                                                        t = m_65;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        f_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, f_66);
                                                                        t = d_2(t);
                                                                        e_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, e_66);
                                                                        t = d_2(t);
                                                                        r_65 = t;
                                                                        t = a_23;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        a_66 = t;
                                                                        t = m_65;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        d_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, d_66);
                                                                        t = d_2(t);
                                                                        c_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, c_66);
                                                                        t = d_2(t);
                                                                        b_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, a_66, b_66);
                                                                        t = d_2(t);
                                                                        s_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, r_65, s_65);
                                                                        t = d_2(t);
                                                                        q_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, p_65, q_65);
                                                                        t = d_2(t);
                                                                        LocalPopChoice(u_32);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_32;
                                                                        t = b_23;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm v_32 = t;
                                                            int e_33 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm m_66 = NULL,n_66 = NULL,o_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL,c_67 = NULL,i_67 = NULL,j_67 = NULL,l_67 = NULL;
                                                                t = b_23;
                                                                t = new_0_0(t);
                                                                m_66 = t;
                                                                t = bottomup_1_0(d_2, t);
                                                                j_67 = t;
                                                                t = (ATerm) ATempty;
                                                                t = d_2(t);
                                                                l_67 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(l_67), j_67);
                                                                t = d_2(t);
                                                                n_66 = t;
                                                                t = m_66;
                                                                t = bottomup_1_0(d_2, t);
                                                                i_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, i_67);
                                                                t = d_2(t);
                                                                c_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, c_67);
                                                                t = d_2(t);
                                                                u_66 = t;
                                                                t = a_23;
                                                                t = bottomup_1_0(d_2, t);
                                                                w_66 = t;
                                                                t = m_66;
                                                                t = bottomup_1_0(d_2, t);
                                                                z_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, z_66);
                                                                t = d_2(t);
                                                                y_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, y_66);
                                                                t = d_2(t);
                                                                x_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, w_66, x_66);
                                                                t = d_2(t);
                                                                v_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, u_66, v_66);
                                                                t = d_2(t);
                                                                o_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, n_66, o_66);
                                                                t = d_2(t);
                                                                LocalPopChoice(e_33);
                                                              }
                                                            else
                                                              {
                                                                t = v_32;
                                                                t = b_23;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = w_22;
                                                        {
                                                          ATerm f_33 = t;
                                                          int h_33 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm x_67 = NULL,y_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL,i_68 = NULL,k_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL;
                                                              t = b_23;
                                                              t = new_0_0(t);
                                                              x_67 = t;
                                                              t = bottomup_1_0(d_2, t);
                                                              y_68 = t;
                                                              t = (ATerm) ATempty;
                                                              t = d_2(t);
                                                              z_68 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(z_68), y_68);
                                                              t = d_2(t);
                                                              y_67 = t;
                                                              t = x_67;
                                                              t = bottomup_1_0(d_2, t);
                                                              x_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, x_68);
                                                              t = d_2(t);
                                                              w_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, w_68);
                                                              t = d_2(t);
                                                              b_68 = t;
                                                              t = a_23;
                                                              t = bottomup_1_0(d_2, t);
                                                              d_68 = t;
                                                              t = x_67;
                                                              t = bottomup_1_0(d_2, t);
                                                              v_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, v_68);
                                                              t = d_2(t);
                                                              k_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, k_68);
                                                              t = d_2(t);
                                                              i_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_68, i_68);
                                                              t = d_2(t);
                                                              c_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_68, c_68);
                                                              t = d_2(t);
                                                              a_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, y_67, a_68);
                                                              t = d_2(t);
                                                              LocalPopChoice(h_33);
                                                            }
                                                          else
                                                            {
                                                              t = f_33;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = w_22;
                                                    {
                                                      ATerm i_33 = t;
                                                      int j_33 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm c_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL,o_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL;
                                                          t = b_23;
                                                          t = new_0_0(t);
                                                          c_69 = t;
                                                          t = bottomup_1_0(d_2, t);
                                                          s_69 = t;
                                                          t = (ATerm) ATempty;
                                                          t = d_2(t);
                                                          t_69 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(t_69), s_69);
                                                          t = d_2(t);
                                                          f_69 = t;
                                                          t = c_69;
                                                          t = bottomup_1_0(d_2, t);
                                                          r_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, r_69);
                                                          t = d_2(t);
                                                          q_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, q_69);
                                                          t = d_2(t);
                                                          h_69 = t;
                                                          t = a_23;
                                                          t = bottomup_1_0(d_2, t);
                                                          j_69 = t;
                                                          t = c_69;
                                                          t = bottomup_1_0(d_2, t);
                                                          o_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, o_69);
                                                          t = d_2(t);
                                                          l_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, l_69);
                                                          t = d_2(t);
                                                          k_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_69, k_69);
                                                          t = d_2(t);
                                                          i_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_69, i_69);
                                                          t = d_2(t);
                                                          g_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, f_69, g_69);
                                                          t = d_2(t);
                                                          LocalPopChoice(j_33);
                                                        }
                                                      else
                                                        {
                                                          t = i_33;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm l_33 = t;
                                                      int m_33 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, w_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(m_33);
                                                        }
                                                      else
                                                        {
                                                          t = l_33;
                                                          {
                                                            ATerm n_33 = t;
                                                            int o_33 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm a_70 = NULL,b_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,x_70 = NULL,z_70 = NULL,a_71 = NULL,m_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL;
                                                                t = b_23;
                                                                t = new_0_0(t);
                                                                a_70 = t;
                                                                t = bottomup_1_0(d_2, t);
                                                                q_71 = t;
                                                                t = (ATerm) ATempty;
                                                                t = d_2(t);
                                                                r_71 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(r_71), q_71);
                                                                t = d_2(t);
                                                                b_70 = t;
                                                                t = a_70;
                                                                t = bottomup_1_0(d_2, t);
                                                                p_71 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, p_71);
                                                                t = d_2(t);
                                                                m_71 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, m_71);
                                                                t = d_2(t);
                                                                q_70 = t;
                                                                t = a_23;
                                                                t = bottomup_1_0(d_2, t);
                                                                s_70 = t;
                                                                t = a_70;
                                                                t = bottomup_1_0(d_2, t);
                                                                a_71 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, a_71);
                                                                t = d_2(t);
                                                                z_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, z_70);
                                                                t = d_2(t);
                                                                x_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, s_70, x_70);
                                                                t = d_2(t);
                                                                r_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, q_70, r_70);
                                                                t = d_2(t);
                                                                p_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, b_70, p_70);
                                                                t = d_2(t);
                                                                LocalPopChoice(o_33);
                                                              }
                                                            else
                                                              {
                                                                t = n_33;
                                                                t = b_23;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm p_33 = t;
                                                    int q_33 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm v_71 = NULL,y_71 = NULL,c_72 = NULL,h_72 = NULL,m_72 = NULL,r_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL;
                                                        t = b_23;
                                                        t = new_0_0(t);
                                                        v_71 = t;
                                                        t = bottomup_1_0(d_2, t);
                                                        b_73 = t;
                                                        t = (ATerm) ATempty;
                                                        t = d_2(t);
                                                        c_73 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(c_73), b_73);
                                                        t = d_2(t);
                                                        y_71 = t;
                                                        t = v_71;
                                                        t = bottomup_1_0(d_2, t);
                                                        a_73 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, a_73);
                                                        t = d_2(t);
                                                        z_72 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, z_72);
                                                        t = d_2(t);
                                                        h_72 = t;
                                                        t = a_23;
                                                        t = bottomup_1_0(d_2, t);
                                                        r_72 = t;
                                                        t = v_71;
                                                        t = bottomup_1_0(d_2, t);
                                                        y_72 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, y_72);
                                                        t = d_2(t);
                                                        x_72 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, x_72);
                                                        t = d_2(t);
                                                        w_72 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, r_72, w_72);
                                                        t = d_2(t);
                                                        m_72 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, h_72, m_72);
                                                        t = d_2(t);
                                                        c_72 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, y_71, c_72);
                                                        t = d_2(t);
                                                        LocalPopChoice(q_33);
                                                      }
                                                    else
                                                      {
                                                        t = p_33;
                                                        t = b_23;
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
                                        a_23 = ATgetArgument(t, 0);
                                        t = a_23;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm r_33 = t;
                                            int s_33 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_l_17;
                                                t = d_2(t);
                                                LocalPopChoice(s_33);
                                              }
                                            else
                                              {
                                                t = r_33;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            t = b_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            a_23 = ATgetArgument(t, 0);
                                            t = a_23;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm t_33 = t;
                                                int u_33 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_r_17;
                                                    t = d_2(t);
                                                    LocalPopChoice(u_33);
                                                  }
                                                else
                                                  {
                                                    t = t_33;
                                                    t = b_23;
                                                  }
                                              }
                                            else
                                              {
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                a_23 = ATgetArgument(t, 0);
                                                t = a_23;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm w_33 = t;
                                                    int x_33 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_r_17;
                                                        t = d_2(t);
                                                        LocalPopChoice(x_33);
                                                      }
                                                    else
                                                      {
                                                        t = w_33;
                                                        t = b_23;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = b_23;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm y_33 = t;
                                                int a_34 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm b_34 = ATgetArgument(t, 0);
                                                        z_22 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(a_34);
                                                    t = z_22;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm d_34 = t;
                                                        int e_34 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_r_17;
                                                            t = d_2(t);
                                                            LocalPopChoice(e_34);
                                                          }
                                                        else
                                                          {
                                                            t = d_34;
                                                            t = b_23;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = y_33;
                                                    {
                                                      ATerm f_34 = t;
                                                      int i_34 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm k_34 = ATgetArgument(t, 0);
                                                              z_22 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(i_34);
                                                          {
                                                            ATerm l_34 = t;
                                                            int m_34 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = z_22;
                                                                t = fetch_1_0(f_3, t);
                                                                t = term_r_17;
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(m_34);
                                                              }
                                                            else
                                                              {
                                                                t = l_34;
                                                                t = b_23;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = f_34;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              a_23 = ATgetArgument(t, 0);
                                                              z_22 = ATgetArgument(t, 1);
                                                              t = z_22;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = a_23;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = z_22;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          w_22 = ATgetArgument(t, 0);
                                                                          x_22 = ATgetArgument(t, 1);
                                                                          t = a_23;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = a_23;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = a_23;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = z_22;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          w_22 = ATgetArgument(t, 0);
                                                                          x_22 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm n_34 = t;
                                                                            int o_34 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm w_74 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, x_22, z_22);
                                                                                t = d_2(t);
                                                                                w_74 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, w_22, w_74);
                                                                                t = d_2(t);
                                                                                LocalPopChoice(o_34);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = n_34;
                                                                                {
                                                                                  ATerm q_34 = t;
                                                                                  int s_34 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = z_22;
                                                                                      if((a_23 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(s_34);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = q_34;
                                                                                      t = b_23;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm t_34 = t;
                                                                          int u_34 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = z_22;
                                                                              if((a_23 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(u_34);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = t_34;
                                                                              t = b_23;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  a_23 = ATgetArgument(t, 0);
                                                                  z_22 = ATgetArgument(t, 1);
                                                                  w_21 = ATgetArgument(t, 2);
                                                                  t = w_21;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm x_34 = t;
                                                                      int y_34 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, z_22);
                                                                          t = d_2(t);
                                                                          LocalPopChoice(y_34);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = x_34;
                                                                          t = b_23;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = b_23;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      a_23 = ATgetArgument(t, 0);
                                                                      z_22 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm z_34 = t;
                                                                        int a_35 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, a_23, z_22);
                                                                            t = d_2(t);
                                                                            LocalPopChoice(a_35);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = z_34;
                                                                            t = b_23;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          a_23 = ATgetArgument(t, 0);
                                                                          t = a_23;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              w_22 = ATgetFirst((ATermList) t);
                                                                              x_22 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm b_35 = t;
                                                                                int c_35 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm y_75 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, x_22);
                                                                                    t = d_2(t);
                                                                                    y_75 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, w_22, y_75);
                                                                                    t = d_2(t);
                                                                                    LocalPopChoice(c_35);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = b_35;
                                                                                    t = b_23;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm d_35 = t;
                                                                                  int e_35 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_r_17;
                                                                                      t = d_2(t);
                                                                                      LocalPopChoice(e_35);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = d_35;
                                                                                      t = b_23;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = b_23;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              a_23 = ATgetArgument(t, 0);
                                                                              t = a_23;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  w_22 = ATgetFirst((ATermList) t);
                                                                                  x_22 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm f_35 = t;
                                                                                    int g_35 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm h_76 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, x_22);
                                                                                        t = d_2(t);
                                                                                        h_76 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, w_22, h_76);
                                                                                        t = d_2(t);
                                                                                        LocalPopChoice(g_35);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = f_35;
                                                                                        t = b_23;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm h_35 = t;
                                                                                      int j_35 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_r_17;
                                                                                          t = d_2(t);
                                                                                          LocalPopChoice(j_35);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = h_35;
                                                                                          t = b_23;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = b_23;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  a_23 = ATgetArgument(t, 0);
                                                                                  t = a_23;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      w_22 = ATgetFirst((ATermList) t);
                                                                                      x_22 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm k_35 = t;
                                                                                        int m_35 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm t_76 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, x_22);
                                                                                            t = d_2(t);
                                                                                            t_76 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, t_76);
                                                                                            t = d_2(t);
                                                                                            LocalPopChoice(m_35);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = k_35;
                                                                                            t = b_23;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm n_35 = t;
                                                                                          int r_35 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_l_17;
                                                                                              t = d_2(t);
                                                                                              LocalPopChoice(r_35);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = n_35;
                                                                                              t = b_23;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = b_23;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      a_23 = ATgetArgument(t, 0);
                                                                                      z_22 = ATgetArgument(t, 1);
                                                                                      w_21 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm t_35 = t;
                                                                                        int v_35 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL,j_77 = NULL,k_77 = NULL;
                                                                                            t = term_w_35;
                                                                                            t = bottomup_1_0(d_2, t);
                                                                                            g_77 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = d_2(t);
                                                                                            k_77 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(k_77), w_21);
                                                                                            t = d_2(t);
                                                                                            j_77 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(j_77), a_23);
                                                                                            t = d_2(t);
                                                                                            h_77 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, g_77, h_77);
                                                                                            t = d_2(t);
                                                                                            f_77 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, z_22, f_77);
                                                                                            t = d_2(t);
                                                                                            LocalPopChoice(v_35);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = t_35;
                                                                                            t = b_23;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          a_23 = ATgetArgument(t, 0);
                                                                                          z_22 = ATgetArgument(t, 1);
                                                                                          w_21 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm x_35 = t;
                                                                                            int y_35 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm r_77 = NULL,s_77 = NULL,u_77 = NULL,v_77 = NULL,x_77 = NULL,y_77 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, z_22);
                                                                                                t = d_2(t);
                                                                                                s_77 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, w_21);
                                                                                                t = d_2(t);
                                                                                                x_77 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = d_2(t);
                                                                                                y_77 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(y_77), x_77);
                                                                                                t = d_2(t);
                                                                                                v_77 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(v_77), a_23);
                                                                                                t = d_2(t);
                                                                                                u_77 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(u_77), s_77);
                                                                                                t = d_2(t);
                                                                                                r_77 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, r_77);
                                                                                                t = d_2(t);
                                                                                                LocalPopChoice(y_35);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = x_35;
                                                                                                t = b_23;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              a_23 = ATgetArgument(t, 0);
                                                                                              z_22 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm z_35 = t;
                                                                                                int a_36 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm g_78 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, z_22);
                                                                                                    t = d_2(t);
                                                                                                    g_78 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, g_78);
                                                                                                    t = d_2(t);
                                                                                                    LocalPopChoice(a_36);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = z_35;
                                                                                                    t = b_23;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  a_23 = ATgetArgument(t, 0);
                                                                                                  z_22 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm b_36 = t;
                                                                                                    int c_36 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm m_78 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, a_23);
                                                                                                        t = d_2(t);
                                                                                                        m_78 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, m_78, z_22);
                                                                                                        t = d_2(t);
                                                                                                        LocalPopChoice(c_36);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = b_36;
                                                                                                        t = b_23;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      a_23 = ATgetArgument(t, 0);
                                                                                                      z_22 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm d_36 = t;
                                                                                                        int f_36 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm b_79 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, z_22);
                                                                                                            t = d_2(t);
                                                                                                            b_79 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, b_79, a_23);
                                                                                                            t = d_2(t);
                                                                                                            LocalPopChoice(f_36);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = d_36;
                                                                                                            t = b_23;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          a_23 = ATgetArgument(t, 0);
                                                                                                          z_22 = ATgetArgument(t, 1);
                                                                                                          t = z_22;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              s_22 = ATgetArgument(t, 0);
                                                                                                              t_22 = ATgetArgument(t, 1);
                                                                                                              t = a_23;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = z_22;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm g_36 = t;
                                                                                                                  int j_36 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm x_79 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, a_23, s_22);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      x_79 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, x_79, t_22);
                                                                                                                      t = bottomup_1_0(d_2, t);
                                                                                                                      LocalPopChoice(j_36);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = g_36;
                                                                                                                      t = b_23;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  s_22 = ATgetArgument(t, 0);
                                                                                                                  t_22 = ATgetArgument(t, 1);
                                                                                                                  m_22 = ATgetArgument(t, 2);
                                                                                                                  t = m_22;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = t_22;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = s_22;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              r_22 = ATgetArgument(t, 0);
                                                                                                                              t = a_23;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = z_22;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      w_22 = ATgetFirst((ATermList) t);
                                                                                                                                      x_22 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = x_22;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = w_22;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              q_22 = ATgetArgument(t, 0);
                                                                                                                                              j_22 = ATgetArgument(t, 1);
                                                                                                                                              g_22 = ATgetArgument(t, 2);
                                                                                                                                              h_22 = ATgetArgument(t, 3);
                                                                                                                                              t = g_22;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = j_22;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm l_36 = t;
                                                                                                                                                      int m_36 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = r_22;
                                                                                                                                                          if((q_22 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = h_22;
                                                                                                                                                          {
                                                                                                                                                            ATerm p_36 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm g_3 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm q_36 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(q_36, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((q_22 != ATgetArgument(q_36, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(q_36, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm r_36 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(r_36) != AT_LIST) || !(ATisEmpty(r_36))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm s_36 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(s_36) != AT_LIST) || !(ATisEmpty(s_36))))
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
                                                                                                                                                                t = p_36;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = h_22;
                                                                                                                                                          t = bottomup_1_0(d_2, t);
                                                                                                                                                          LocalPopChoice(m_36);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = l_36;
                                                                                                                                                          t = b_23;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = b_23;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = b_23;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = b_23;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = b_23;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = b_23;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = a_23;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = z_22;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = b_23;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = a_23;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = z_22;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = b_23;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = a_23;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = z_22;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = b_23;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = a_23;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = z_22;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = b_23;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              a_23 = ATgetArgument(t, 0);
                                                                                                              z_22 = ATgetArgument(t, 1);
                                                                                                              t = a_23;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = z_22;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = b_23;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = b_23;
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
  ATerm e_82 = NULL,i_82 = NULL,w_82 = NULL,x_82 = NULL,h_18 = NULL,i_18 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm t_36 = ATgetArgument(t, 0);
      if(match_cons(t_36, sym_SVar_1))
        {
          w_82 = ATgetArgument(t_36, 0);
        }
      else
        _fail(t);
      e_82 = ATgetArgument(t, 1);
      i_82 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, w_82), (ATerm)ATempty, (ATerm) ATempty);
  h_18 = t;
  t = term_v_36;
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_36, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, w_82), (ATerm)ATempty, (ATerm) ATempty));
  t = j_7(i_18, h_18, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm w_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_36) != ATmakeSymbol("n_0", 0, ATtrue)))
        _fail(t);
      x_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_82), e_82, i_82);
  return(t);
}
ATerm SubsArgCall1_0_0 (ATerm t)
{
  ATerm a_83 = NULL,c_83 = NULL,l_18 = NULL;
  a_83 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm x_36 = ATgetArgument(t, 0);
      if(match_cons(x_36, sym_SVar_1))
        {
          ATerm a_37 = ATgetArgument(x_36, 0);
        }
      else
        _fail(t);
      {
        ATerm y_36 = ATgetArgument(t, 1);
        if(((ATgetType(y_36) != AT_LIST) || !(ATisEmpty(y_36))))
          _fail(t);
      }
      {
        ATerm z_36 = ATgetArgument(t, 2);
        if(((ATgetType(z_36) != AT_LIST) || !(ATisEmpty(z_36))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_b_37;
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_37, a_83);
  t = j_7(l_18, a_83, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm c_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_37) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      c_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_83;
  t = strename_0_0(t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_v_36;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_b_37;
  return(t);
}
ATerm substitute_arg_0_0 (ATerm t)
{
  ATerm b_84 = NULL,c_84 = NULL,d_84 = NULL,e_84 = NULL,g_84 = NULL,h_84 = NULL,p_84 = NULL,q_84 = NULL,t_84 = NULL,w_84 = NULL,b_85 = NULL;
  g_84 = t;
  if(match_cons(t, sym__2))
    {
      h_84 = ATgetArgument(t, 0);
      b_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_84;
  if(match_cons(t, sym_VarDec_2))
    {
      p_84 = ATgetArgument(t, 0);
      q_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_84;
  if(match_cons(t, sym_FunType_2))
    {
      t_84 = ATgetArgument(t, 0);
      {
        ATerm e_37 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = t_84;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_37 = ATgetFirst((ATermList) t);
      w_84 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_84;
  {
    ATerm g_37 = t;
    int i_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm l_37 = ATgetFirst((ATermList) t);
            ATerm n_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_37);
        {
          ATerm k_85 = NULL,n_85 = NULL;
          t = b_85;
          if(match_cons(t, sym_CallT_3))
            {
              b_84 = ATgetArgument(t, 0);
              d_84 = ATgetArgument(t, 1);
              e_84 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = b_84;
          if(match_cons(t, sym_SVar_1))
            {
              c_84 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_84;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = e_84;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_84), (ATerm)ATempty, (ATerm) ATempty);
          k_85 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_37, c_84);
          n_85 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_84), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_o_37, c_84));
          t = v_13(h_3, k_85, n_85, t);
          t = g_84;
        }
      }
    else
      {
        t = g_37;
        {
          ATerm v_85 = NULL,z_85 = NULL;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_84), (ATerm)ATempty, (ATerm) ATempty);
          v_85 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_37, b_85);
          z_85 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_84), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_p_37, b_85));
          t = v_13(i_3, v_85, z_85, t);
          t = g_84;
        }
      }
  }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_b_37;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_v_36;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_37 = ATgetArgument(t, 0);
      if(((ATgetType(q_37) != AT_LIST) || !(ATisEmpty(q_37))))
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
static ATerm o_3 (ATerm t)
{
  ATerm n_86 = NULL,p_86 = NULL,q_86 = NULL,t_86 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_37 = ATgetArgument(t, 0);
      if(((ATgetType(v_37) == AT_LIST) && !(ATisEmpty(v_37))))
        {
          n_86 = ATgetFirst((ATermList) v_37);
          p_86 = (ATerm) ATgetNext((ATermList) v_37);
        }
      else
        _fail(t);
      {
        ATerm w_37 = ATgetArgument(t, 1);
        if(((ATgetType(w_37) == AT_LIST) && !(ATisEmpty(w_37))))
          {
            q_86 = ATgetFirst((ATermList) w_37);
            t_86 = (ATerm) ATgetNext((ATermList) w_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_86, q_86), (ATerm) ATmakeAppl(sym__2, p_86, t_86));
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm u_86 = NULL,v_86 = NULL;
  if(match_cons(t, sym__2))
    {
      u_86 = ATgetArgument(t, 0);
      v_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_86), u_86);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm x_37 = t;
  int y_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_37 = t;
      int c_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SubsArgCall1_0_0(t);
          LocalPopChoice(c_38);
        }
      else
        {
          t = z_37;
          t = SubsArgCall2_0_0(t);
        }
      LocalPopChoice(y_37);
    }
  else
    {
      t = x_37;
    }
  return(t);
}
ATerm substitute_args_0_0 (ATerm t)
{
  ATerm h_86 = NULL,i_86 = NULL,k_86 = NULL;
  static ATerm k_3 (ATerm t)
  {
    static ATerm m_3 (ATerm t)
    {
      if(match_cons(t, sym__3))
        {
          if(((h_86 != NULL) && (h_86 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            h_86 = ATgetArgument(t, 0);
          if(((i_86 != NULL) && (i_86 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            i_86 = ATgetArgument(t, 1);
          if(((k_86 != NULL) && (k_86 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            k_86 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, h_86, i_86);
      t = genzip_4_0(n_3, o_3, p_3, substitute_arg_0_0, t);
      t = k_86;
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
      ATerm d_38 = ATgetArgument(t, 0);
      if(((ATgetType(d_38) != AT_LIST) || !(ATisEmpty(d_38))))
        _fail(t);
      {
        ATerm f_38 = ATgetArgument(t, 1);
        if(((ATgetType(f_38) != AT_LIST) || !(ATisEmpty(f_38))))
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
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_38 = ATgetArgument(t, 0);
      if(((ATgetType(g_38) == AT_LIST) && !(ATisEmpty(g_38))))
        {
          w_18 = ATgetFirst((ATermList) g_38);
          x_18 = (ATerm) ATgetNext((ATermList) g_38);
        }
      else
        _fail(t);
      {
        ATerm h_38 = ATgetArgument(t, 1);
        if(((ATgetType(h_38) == AT_LIST) && !(ATisEmpty(h_38))))
          {
            y_18 = ATgetFirst((ATermList) h_38);
            z_18 = (ATerm) ATgetNext((ATermList) h_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_18, y_18), (ATerm) ATmakeAppl(sym__2, x_18, z_18));
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL;
  if(match_cons(t, sym__2))
    {
      a_19 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_19), a_19);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm d_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
  if(match_cons(t, sym__2))
    {
      d_19 = ATgetArgument(t, 0);
      i_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_19;
  {
    ATerm i_38 = t;
    int j_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm k_38 = ATgetArgument(t, 0);
            f_19 = ATgetArgument(t, 1);
            g_19 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(j_38);
        t = (ATerm) ATmakeAppl(sym_SDef_3, i_19, f_19, g_19);
      }
    else
      {
        t = i_38;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm m_38 = ATgetArgument(t, 0);
            f_19 = ATgetArgument(t, 1);
            g_19 = ATgetArgument(t, 2);
            h_19 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, i_19, f_19, g_19, h_19);
      }
  }
  return(t);
}
static ATerm v_3 (ATerm t)
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
static ATerm w_3 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_38 = ATgetArgument(t, 0);
      if(((ATgetType(p_38) == AT_LIST) && !(ATisEmpty(p_38))))
        {
          e_20 = ATgetFirst((ATermList) p_38);
          f_20 = (ATerm) ATgetNext((ATermList) p_38);
        }
      else
        _fail(t);
      {
        ATerm q_38 = ATgetArgument(t, 1);
        if(((ATgetType(q_38) == AT_LIST) && !(ATisEmpty(q_38))))
          {
            g_20 = ATgetFirst((ATermList) q_38);
            h_20 = (ATerm) ATgetNext((ATermList) q_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_20, g_20), (ATerm) ATmakeAppl(sym__2, f_20, h_20));
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL;
  if(match_cons(t, sym__2))
    {
      i_20 = ATgetArgument(t, 0);
      j_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_20), i_20);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm l_20 = NULL,n_20 = NULL,o_20 = NULL;
  if(match_cons(t, sym__2))
    {
      l_20 = ATgetArgument(t, 0);
      o_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_20;
  {
    ATerm r_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm t_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_38);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_20);
      }
    else
      {
        t = r_38;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm u_38 = ATgetArgument(t, 0);
            n_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_20, n_20);
      }
  }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_38 = ATgetArgument(t, 0);
      if(((ATgetType(w_38) != AT_LIST) || !(ATisEmpty(w_38))))
        _fail(t);
      {
        ATerm x_38 = ATgetArgument(t, 1);
        if(((ATgetType(x_38) != AT_LIST) || !(ATisEmpty(x_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL,o_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_38 = ATgetArgument(t, 0);
      if(((ATgetType(y_38) == AT_LIST) && !(ATisEmpty(y_38))))
        {
          d_22 = ATgetFirst((ATermList) y_38);
          e_22 = (ATerm) ATgetNext((ATermList) y_38);
        }
      else
        _fail(t);
      {
        ATerm z_38 = ATgetArgument(t, 1);
        if(((ATgetType(z_38) == AT_LIST) && !(ATisEmpty(z_38))))
          {
            f_22 = ATgetFirst((ATermList) z_38);
            o_22 = (ATerm) ATgetNext((ATermList) z_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_22, f_22), (ATerm) ATmakeAppl(sym__2, e_22, o_22));
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm p_22 = NULL,u_22 = NULL;
  if(match_cons(t, sym__2))
    {
      p_22 = ATgetArgument(t, 0);
      u_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_22), p_22);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm y_22 = NULL,e_23 = NULL,i_23 = NULL;
  if(match_cons(t, sym__2))
    {
      y_22 = ATgetArgument(t, 0);
      i_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_22;
  {
    ATerm a_39 = t;
    int c_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm d_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_39);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_23);
      }
    else
      {
        t = a_39;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm h_39 = ATgetArgument(t, 0);
            e_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, i_23, e_23);
      }
  }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_39 = ATgetArgument(t, 0);
      if(((ATgetType(k_39) != AT_LIST) || !(ATisEmpty(k_39))))
        _fail(t);
      {
        ATerm m_39 = ATgetArgument(t, 1);
        if(((ATgetType(m_39) != AT_LIST) || !(ATisEmpty(m_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm o_24 = NULL,q_24 = NULL,s_24 = NULL,t_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_39 = ATgetArgument(t, 0);
      if(((ATgetType(n_39) == AT_LIST) && !(ATisEmpty(n_39))))
        {
          o_24 = ATgetFirst((ATermList) n_39);
          q_24 = (ATerm) ATgetNext((ATermList) n_39);
        }
      else
        _fail(t);
      {
        ATerm o_39 = ATgetArgument(t, 1);
        if(((ATgetType(o_39) == AT_LIST) && !(ATisEmpty(o_39))))
          {
            s_24 = ATgetFirst((ATermList) o_39);
            t_24 = (ATerm) ATgetNext((ATermList) o_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_24, s_24), (ATerm) ATmakeAppl(sym__2, q_24, t_24));
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL;
  if(match_cons(t, sym__2))
    {
      u_24 = ATgetArgument(t, 0);
      v_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_24), u_24);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm x_24 = NULL,a_25 = NULL,b_25 = NULL;
  if(match_cons(t, sym__2))
    {
      x_24 = ATgetArgument(t, 0);
      b_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_24;
  {
    ATerm p_39 = t;
    int q_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm r_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_39);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, b_25);
      }
    else
      {
        t = p_39;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm s_39 = ATgetArgument(t, 0);
            a_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, b_25, a_25);
      }
  }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_39 = ATgetArgument(t, 0);
      if(((ATgetType(t_39) != AT_LIST) || !(ATisEmpty(t_39))))
        _fail(t);
      {
        ATerm u_39 = ATgetArgument(t, 1);
        if(((ATgetType(u_39) != AT_LIST) || !(ATisEmpty(u_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_39 = ATgetArgument(t, 0);
      if(((ATgetType(v_39) == AT_LIST) && !(ATisEmpty(v_39))))
        {
          o_26 = ATgetFirst((ATermList) v_39);
          p_26 = (ATerm) ATgetNext((ATermList) v_39);
        }
      else
        _fail(t);
      {
        ATerm w_39 = ATgetArgument(t, 1);
        if(((ATgetType(w_39) == AT_LIST) && !(ATisEmpty(w_39))))
          {
            q_26 = ATgetFirst((ATermList) w_39);
            r_26 = (ATerm) ATgetNext((ATermList) w_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_26, q_26), (ATerm) ATmakeAppl(sym__2, p_26, r_26));
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm s_26 = NULL,u_26 = NULL;
  if(match_cons(t, sym__2))
    {
      s_26 = ATgetArgument(t, 0);
      u_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_26), s_26);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm y_26 = NULL,a_27 = NULL,e_27 = NULL;
  if(match_cons(t, sym__2))
    {
      y_26 = ATgetArgument(t, 0);
      e_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_26;
  {
    ATerm y_39 = t;
    int z_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm a_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(z_39);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_27);
      }
    else
      {
        t = y_39;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm b_40 = ATgetArgument(t, 0);
            a_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, e_27, a_27);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm o_111 (ATerm), ATerm t)
{
  ATerm n_97 = NULL,o_97 = NULL,r_97 = NULL,s_97 = NULL,t_97 = NULL;
  r_97 = t;
  if(match_cons(t, sym_Let_2))
    {
      s_97 = ATgetArgument(t, 0);
      t_97 = ATgetArgument(t, 1);
      {
        ATerm q_18 = NULL,t_18 = NULL,u_18 = NULL,p_4 = NULL;
        t = SSLgetAnnotations(r_97);
        q_18 = t;
        t = s_97;
        t = o_111(t);
        u_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_97, u_18);
        t = genzip_4_0(r_3, s_3, t_3, u_3, t);
        t_18 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, t_18, t_97);
        p_4 = t;
        t = SSLsetAnnotations(p_4, q_18);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          s_97 = ATgetArgument(t, 0);
          t_97 = ATgetArgument(t, 1);
          o_97 = ATgetArgument(t, 2);
          {
            ATerm x_19 = NULL,b_20 = NULL,c_20 = NULL,t_4 = NULL;
            t = SSLgetAnnotations(r_97);
            x_19 = t;
            t = t_97;
            t = o_111(t);
            c_20 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_97, c_20);
            t = genzip_4_0(v_3, w_3, x_3, y_3, t);
            b_20 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, s_97, b_20, o_97);
            t_4 = t;
            t = SSLsetAnnotations(t_4, x_19);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              s_97 = ATgetArgument(t, 0);
              t_97 = ATgetArgument(t, 1);
              o_97 = ATgetArgument(t, 2);
              n_97 = ATgetArgument(t, 3);
              {
                ATerm e_21 = NULL,x_21 = NULL,y_21 = NULL,v_4 = NULL;
                t = SSLgetAnnotations(r_97);
                e_21 = t;
                t = t_97;
                t = o_111(t);
                y_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, t_97, y_21);
                t = genzip_4_0(z_3, a_4, b_4, c_4, t);
                x_21 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, s_97, x_21, o_97, n_97);
                v_4 = t;
                t = SSLsetAnnotations(v_4, e_21);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  s_97 = ATgetArgument(t, 0);
                  t_97 = ATgetArgument(t, 1);
                  o_97 = ATgetArgument(t, 2);
                  n_97 = ATgetArgument(t, 3);
                  {
                    ATerm a_24 = NULL,g_24 = NULL,j_24 = NULL,w_4 = NULL;
                    t = SSLgetAnnotations(r_97);
                    a_24 = t;
                    t = t_97;
                    t = o_111(t);
                    j_24 = t;
                    t = (ATerm) ATmakeAppl(sym__2, t_97, j_24);
                    t = genzip_4_0(f_4, h_4, i_4, j_4, t);
                    g_24 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, s_97, g_24, o_97, n_97);
                    w_4 = t;
                    t = SSLsetAnnotations(w_4, a_24);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      s_97 = ATgetArgument(t, 0);
                      t_97 = ATgetArgument(t, 1);
                      o_97 = ATgetArgument(t, 2);
                      {
                        ATerm x_25 = NULL,d_26 = NULL,g_26 = NULL,y_4 = NULL;
                        t = SSLgetAnnotations(r_97);
                        x_25 = t;
                        t = t_97;
                        t = o_111(t);
                        g_26 = t;
                        t = (ATerm) ATmakeAppl(sym__2, t_97, g_26);
                        t = genzip_4_0(k_4, o_4, q_4, r_4, t);
                        d_26 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, s_97, d_26, o_97);
                        y_4 = t;
                        t = SSLsetAnnotations(y_4, x_25);
                      }
                    }
                  else
                    {
                      ATerm w_27 = NULL,p_28 = NULL,z_4 = NULL;
                      if(match_cons(t, sym_Rec_2))
                        {
                          s_97 = ATgetArgument(t, 0);
                          t_97 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(r_97);
                      w_27 = t;
                      t = s_97;
                      t = o_111(t);
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          p_28 = ATgetFirst((ATermList) t);
                          {
                            ATerm c_40 = (ATerm) ATgetNext((ATermList) t);
                          }
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Rec_2, p_28, t_97);
                      z_4 = t;
                      t = SSLsetAnnotations(z_4, w_27);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm t)
{
  ATerm k_101 = NULL,l_101 = NULL,m_101 = NULL,n_101 = NULL,o_101 = NULL;
  m_101 = t;
  if(match_cons(t, sym_Let_2))
    {
      n_101 = ATgetArgument(t, 0);
      o_101 = ATgetArgument(t, 1);
      {
        ATerm c_29 = NULL,t_29 = NULL,v_29 = NULL,i_5 = NULL;
        t = SSLgetAnnotations(m_101);
        c_29 = t;
        t = n_101;
        t = p_111(t);
        t_29 = t;
        t = o_101;
        t = p_111(t);
        v_29 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, t_29, v_29);
        i_5 = t;
        t = SSLsetAnnotations(i_5, c_29);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          n_101 = ATgetArgument(t, 0);
          o_101 = ATgetArgument(t, 1);
          l_101 = ATgetArgument(t, 2);
          {
            ATerm m_30 = NULL,h_31 = NULL,j_31 = NULL,k_31 = NULL,j_5 = NULL;
            t = SSLgetAnnotations(m_101);
            m_30 = t;
            t = n_101;
            t = r_111(t);
            h_31 = t;
            t = o_101;
            t = r_111(t);
            j_31 = t;
            t = l_101;
            t = p_111(t);
            k_31 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, h_31, j_31, k_31);
            j_5 = t;
            t = SSLsetAnnotations(j_5, m_30);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              n_101 = ATgetArgument(t, 0);
              o_101 = ATgetArgument(t, 1);
              l_101 = ATgetArgument(t, 2);
              k_101 = ATgetArgument(t, 3);
              {
                ATerm a_32 = NULL,s_32 = NULL,y_32 = NULL,z_32 = NULL,d_33 = NULL,l_5 = NULL;
                t = SSLgetAnnotations(m_101);
                a_32 = t;
                t = n_101;
                t = r_111(t);
                s_32 = t;
                t = o_101;
                t = r_111(t);
                y_32 = t;
                t = l_101;
                t = r_111(t);
                z_32 = t;
                t = k_101;
                t = p_111(t);
                d_33 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, s_32, y_32, z_32, d_33);
                l_5 = t;
                t = SSLsetAnnotations(l_5, a_32);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  n_101 = ATgetArgument(t, 0);
                  o_101 = ATgetArgument(t, 1);
                  l_101 = ATgetArgument(t, 2);
                  k_101 = ATgetArgument(t, 3);
                  {
                    ATerm c_34 = NULL,p_34 = NULL,r_34 = NULL,v_34 = NULL,w_34 = NULL,m_5 = NULL;
                    t = SSLgetAnnotations(m_101);
                    c_34 = t;
                    t = n_101;
                    t = r_111(t);
                    p_34 = t;
                    t = o_101;
                    t = r_111(t);
                    r_34 = t;
                    t = l_101;
                    t = r_111(t);
                    v_34 = t;
                    t = k_101;
                    t = p_111(t);
                    w_34 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, p_34, r_34, v_34, w_34);
                    m_5 = t;
                    t = SSLsetAnnotations(m_5, c_34);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      n_101 = ATgetArgument(t, 0);
                      o_101 = ATgetArgument(t, 1);
                      l_101 = ATgetArgument(t, 2);
                      {
                        ATerm i_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,n_5 = NULL;
                        t = SSLgetAnnotations(m_101);
                        i_35 = t;
                        t = n_101;
                        t = r_111(t);
                        o_35 = t;
                        t = o_101;
                        t = r_111(t);
                        p_35 = t;
                        t = l_101;
                        t = r_111(t);
                        q_35 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, o_35, p_35, q_35);
                        n_5 = t;
                        t = SSLsetAnnotations(n_5, i_35);
                      }
                    }
                  else
                    {
                      ATerm e_36 = NULL,h_36 = NULL,k_36 = NULL,o_5 = NULL;
                      if(match_cons(t, sym_Rec_2))
                        {
                          n_101 = ATgetArgument(t, 0);
                          o_101 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(m_101);
                      e_36 = t;
                      t = n_101;
                      t = r_111(t);
                      h_36 = t;
                      t = o_101;
                      t = p_111(t);
                      k_36 = t;
                      t = (ATerm) ATmakeAppl(sym_Rec_2, h_36, k_36);
                      o_5 = t;
                      t = SSLsetAnnotations(o_5, e_36);
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm g_102 = NULL;
  ATerm d_40 = t;
  int e_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_102 = ATgetArgument(t, 0);
          {
            ATerm g_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_40);
      t = g_102;
    }
  else
    {
      t = d_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_102 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_102;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm m_102 = NULL;
  ATerm h_40 = t;
  int j_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_102 = ATgetArgument(t, 0);
          {
            ATerm l_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_40);
      t = m_102;
    }
  else
    {
      t = h_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_102 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_102;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm a_102 = NULL;
  ATerm m_40 = t;
  int n_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm o_40 = ATgetArgument(t, 0);
          a_102 = ATgetArgument(t, 1);
          {
            ATerm p_40 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_40);
      t = a_102;
      t = map_1_0(s_4, t);
    }
  else
    {
      t = m_40;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm q_40 = ATgetArgument(t, 0);
          a_102 = ATgetArgument(t, 1);
          {
            ATerm r_40 = ATgetArgument(t, 2);
          }
          {
            ATerm s_40 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = a_102;
      t = map_1_0(u_4, t);
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm r_102 = NULL;
  ATerm t_40 = t;
  int u_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          r_102 = ATgetArgument(t, 0);
          {
            ATerm v_40 = ATgetArgument(t, 1);
          }
          {
            ATerm x_40 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_40);
      t = r_102;
    }
  else
    {
      t = t_40;
      if(match_cons(t, sym_SDefT_4))
        {
          r_102 = ATgetArgument(t, 0);
          {
            ATerm y_40 = ATgetArgument(t, 1);
          }
          {
            ATerm z_40 = ATgetArgument(t, 2);
          }
          {
            ATerm a_41 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = r_102;
    }
  return(t);
}
static ATerm d_13 (ATerm i_26, ATerm h_26, ATerm t)
{
  t = i_26;
  t = map_1_0(x_4, t);
  return(t);
}
ATerm SVar_1_0 (ATerm p_93 (ATerm), ATerm t)
{
  ATerm x_102 = NULL,y_102 = NULL,z_102 = NULL,a_103 = NULL,z_5 = NULL;
  a_103 = t;
  if(match_cons(t, sym_SVar_1))
    {
      y_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_103);
  x_102 = t;
  t = y_102;
  t = p_93(t);
  z_102 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, z_102);
  z_5 = t;
  t = SSLsetAnnotations(z_5, x_102);
  return(t);
}
static ATerm n_13 (ATerm t_128 (ATerm), ATerm u_128 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm v_47, ATerm u_47, ATerm t_47, ATerm t)
{
  static ATerm a_5 (ATerm t)
  {
    ATerm c_103 = NULL;
    c_103 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_103, t_47);
    t = t_128(t);
    return(t);
  }
  static ATerm b_5 (ATerm t)
  {
    ATerm d_103 = NULL;
    d_103 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_103, u_47);
    t = t_128(t);
    return(t);
  }
  t = v_47;
  t = u_128(a_5, b_5, _id, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_41 = ATgetArgument(t, 0);
      if(((ATgetType(b_41) != AT_LIST) || !(ATisEmpty(b_41))))
        _fail(t);
      {
        ATerm d_41 = ATgetArgument(t, 1);
        if(((ATgetType(d_41) != AT_LIST) || !(ATisEmpty(d_41))))
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
  ATerm m_103 = NULL,n_103 = NULL,o_103 = NULL,p_103 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_41 = ATgetArgument(t, 0);
      if(((ATgetType(e_41) == AT_LIST) && !(ATisEmpty(e_41))))
        {
          m_103 = ATgetFirst((ATermList) e_41);
          n_103 = (ATerm) ATgetNext((ATermList) e_41);
        }
      else
        _fail(t);
      {
        ATerm f_41 = ATgetArgument(t, 1);
        if(((ATgetType(f_41) == AT_LIST) && !(ATisEmpty(f_41))))
          {
            o_103 = ATgetFirst((ATermList) f_41);
            p_103 = (ATerm) ATgetNext((ATermList) f_41);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_103, o_103), (ATerm) ATmakeAppl(sym__2, n_103, p_103));
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm q_103 = NULL,r_103 = NULL;
  if(match_cons(t, sym__2))
    {
      q_103 = ATgetArgument(t, 0);
      r_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_103), q_103);
  return(t);
}
static ATerm o_13 (ATerm n_128 (ATerm), ATerm o_128 (ATerm (ATerm), ATerm), ATerm n_47, ATerm q_47, ATerm t)
{
  ATerm g_103 = NULL,h_103 = NULL,i_103 = NULL,j_103 = NULL,l_103 = NULL;
  t = n_47;
  t = n_128(t);
  g_103 = t;
  t = map_1_0(new_0_0, t);
  h_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_103, h_103);
  t = genzip_4_0(c_5, d_5, e_5, _id, t);
  l_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_103, q_47);
  t = conc_0_0(t);
  i_103 = t;
  t = n_47;
  {
    static ATerm f_5 (ATerm t)
    {
      t = h_103;
      return(t);
    }
    t = o_128(f_5, t);
  }
  j_103 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_103, q_47, i_103);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm w_103 = NULL,x_103 = NULL,y_103 = NULL,a_104 = NULL,b_104 = NULL,c_104 = NULL,d_104 = NULL;
  y_103 = t;
  if(match_cons(t, sym__2))
    {
      a_104 = ATgetArgument(t, 0);
      b_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_104;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_104 = ATgetFirst((ATermList) t);
      d_104 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_104;
  if(match_cons(t, sym__2))
    {
      w_103 = ATgetArgument(t, 0);
      x_103 = ATgetArgument(t, 1);
      {
        ATerm p_41 = t;
        int u_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_103;
            if((a_104 != t))
              {
                _fail(t);
              }
            t = x_103;
            LocalPopChoice(u_41);
          }
        else
          {
            t = p_41;
            t = (ATerm) ATmakeAppl(sym__2, a_104, d_104);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, a_104, d_104);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm b_129 (ATerm), ATerm t)
{
  static ATerm z_104 (ATerm t)
  {
    ATerm y_41 = t;
    int c_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_129(t);
        LocalPopChoice(c_42);
      }
    else
      {
        t = y_41;
        {
          ATerm w_104 = NULL,x_104 = NULL,y_104 = NULL;
          static ATerm g_5 (ATerm t)
          {
            ATerm v_38 = NULL;
            v_38 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_38, not_null(y_104));
            t = z_104(t);
            return(t);
          }
          w_104 = t;
          if(match_cons(t, sym__2))
            {
              x_104 = ATgetArgument(t, 0);
              if(((y_104 != NULL) && (y_104 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                y_104 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_104;
          t = SRTS_all(g_5, t);
        }
      }
    return(t);
  }
  t = z_104(t);
  return(t);
}
ATerm rename_4_0 (ATerm i_128 (ATerm (ATerm), ATerm), ATerm j_128 (ATerm), ATerm k_128 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_128 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm d_105 = NULL;
  static ATerm t_105 (ATerm t)
  {
    static ATerm k_5 (ATerm t)
    {
      ATerm n_105 = NULL,o_105 = NULL,p_105 = NULL;
      n_105 = t;
      if(match_cons(t, sym__2))
        {
          o_105 = ATgetArgument(t, 0);
          p_105 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm l_42 = t;
        int m_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm p_5 (ATerm t)
            {
              ATerm s_105 = NULL;
              s_105 = t;
              t = (ATerm) ATmakeAppl(sym__2, s_105, p_105);
              t = lookup_0_0(t);
              return(t);
            }
            t = o_105;
            t = i_128(p_5, t);
            LocalPopChoice(m_42);
          }
        else
          {
            t = l_42;
            {
              ATerm e_39 = NULL,f_39 = NULL,l_39 = NULL;
              t = n_105;
              t = o_13(j_128, l_128, o_105, p_105, t);
              if(match_cons(t, sym__3))
                {
                  e_39 = ATgetArgument(t, 0);
                  f_39 = ATgetArgument(t, 1);
                  l_39 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = n_13(t_105, k_128, e_39, f_39, l_39, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(k_5, t);
    return(t);
  }
  d_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_105, (ATerm) ATempty);
  t = t_105(t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_42 = ATgetArgument(t, 0);
      if(((ATgetType(n_42) != AT_LIST) || !(ATisEmpty(n_42))))
        _fail(t);
      {
        ATerm o_42 = ATgetArgument(t, 1);
        if(((ATgetType(o_42) != AT_LIST) || !(ATisEmpty(o_42))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_42 = ATgetArgument(t, 0);
      if(((ATgetType(p_42) == AT_LIST) && !(ATisEmpty(p_42))))
        {
          d_42 = ATgetFirst((ATermList) p_42);
          e_42 = (ATerm) ATgetNext((ATermList) p_42);
        }
      else
        _fail(t);
      {
        ATerm q_42 = ATgetArgument(t, 1);
        if(((ATgetType(q_42) == AT_LIST) && !(ATisEmpty(q_42))))
          {
            f_42 = ATgetFirst((ATermList) q_42);
            g_42 = (ATerm) ATgetNext((ATermList) q_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_42, f_42), (ATerm) ATmakeAppl(sym__2, e_42, g_42));
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL;
  if(match_cons(t, sym__2))
    {
      h_42 = ATgetArgument(t, 0);
      i_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_42), h_42);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm t_42 = NULL,y_42 = NULL,a_43 = NULL;
  if(match_cons(t, sym__2))
    {
      t_42 = ATgetArgument(t, 0);
      a_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_42;
  {
    ATerm r_42 = t;
    int s_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm u_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_42);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, a_43);
      }
    else
      {
        t = r_42;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm v_42 = ATgetArgument(t, 0);
            y_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, a_43, y_42);
      }
  }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_42 = ATgetArgument(t, 0);
      if(((ATgetType(x_42) != AT_LIST) || !(ATisEmpty(x_42))))
        _fail(t);
      {
        ATerm z_42 = ATgetArgument(t, 1);
        if(((ATgetType(z_42) != AT_LIST) || !(ATisEmpty(z_42))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL,c_45 = NULL,e_45 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_43 = ATgetArgument(t, 0);
      if(((ATgetType(b_43) == AT_LIST) && !(ATisEmpty(b_43))))
        {
          y_44 = ATgetFirst((ATermList) b_43);
          z_44 = (ATerm) ATgetNext((ATermList) b_43);
        }
      else
        _fail(t);
      {
        ATerm c_43 = ATgetArgument(t, 1);
        if(((ATgetType(c_43) == AT_LIST) && !(ATisEmpty(c_43))))
          {
            c_45 = ATgetFirst((ATermList) c_43);
            e_45 = (ATerm) ATgetNext((ATermList) c_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_44, c_45), (ATerm) ATmakeAppl(sym__2, z_44, e_45));
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL;
  if(match_cons(t, sym__2))
    {
      f_45 = ATgetArgument(t, 0);
      g_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_45), f_45);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm i_45 = NULL,n_45 = NULL,p_45 = NULL;
  if(match_cons(t, sym__2))
    {
      i_45 = ATgetArgument(t, 0);
      p_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_45;
  {
    ATerm d_43 = t;
    int e_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm f_43 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_43);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, p_45);
      }
    else
      {
        t = d_43;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm g_43 = ATgetArgument(t, 0);
            n_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, p_45, n_45);
      }
  }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_43 = ATgetArgument(t, 0);
      if(((ATgetType(h_43) != AT_LIST) || !(ATisEmpty(h_43))))
        _fail(t);
      {
        ATerm i_43 = ATgetArgument(t, 1);
        if(((ATgetType(i_43) != AT_LIST) || !(ATisEmpty(i_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm y_46 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_43 = ATgetArgument(t, 0);
      if(((ATgetType(j_43) == AT_LIST) && !(ATisEmpty(j_43))))
        {
          y_46 = ATgetFirst((ATermList) j_43);
          b_47 = (ATerm) ATgetNext((ATermList) j_43);
        }
      else
        _fail(t);
      {
        ATerm k_43 = ATgetArgument(t, 1);
        if(((ATgetType(k_43) == AT_LIST) && !(ATisEmpty(k_43))))
          {
            c_47 = ATgetFirst((ATermList) k_43);
            d_47 = (ATerm) ATgetNext((ATermList) k_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_46, c_47), (ATerm) ATmakeAppl(sym__2, b_47, d_47));
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL;
  if(match_cons(t, sym__2))
    {
      e_47 = ATgetArgument(t, 0);
      f_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_47), e_47);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm o_47 = NULL,r_47 = NULL,s_47 = NULL;
  if(match_cons(t, sym__2))
    {
      o_47 = ATgetArgument(t, 0);
      s_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_47;
  {
    ATerm l_43 = t;
    int m_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm n_43 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_43);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_47);
      }
    else
      {
        t = l_43;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm o_43 = ATgetArgument(t, 0);
            r_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, s_47, r_47);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm k_111 (ATerm), ATerm t)
{
  ATerm x_109 = NULL,y_109 = NULL,a_110 = NULL,b_110 = NULL,c_110 = NULL;
  x_109 = t;
  if(match_cons(t, sym_Scope_2))
    {
      y_109 = ATgetArgument(t, 0);
      a_110 = ATgetArgument(t, 1);
      {
        ATerm f_40 = NULL,i_40 = NULL,b_6 = NULL;
        t = SSLgetAnnotations(x_109);
        f_40 = t;
        t = y_109;
        t = k_111(t);
        i_40 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, i_40, a_110);
        b_6 = t;
        t = SSLsetAnnotations(b_6, f_40);
      }
    }
  else
    {
      if(match_cons(t, sym_RDecT_3))
        {
          y_109 = ATgetArgument(t, 0);
          a_110 = ATgetArgument(t, 1);
          b_110 = ATgetArgument(t, 2);
          {
            ATerm g_41 = NULL,a_42 = NULL,b_42 = NULL,c_6 = NULL;
            t = SSLgetAnnotations(x_109);
            g_41 = t;
            t = b_110;
            t = k_111(t);
            b_42 = t;
            t = (ATerm) ATmakeAppl(sym__2, b_110, b_42);
            t = genzip_4_0(q_5, r_5, s_5, t_5, t);
            a_42 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, y_109, a_110, a_42);
            c_6 = t;
            t = SSLsetAnnotations(c_6, g_41);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              y_109 = ATgetArgument(t, 0);
              a_110 = ATgetArgument(t, 1);
              b_110 = ATgetArgument(t, 2);
              c_110 = ATgetArgument(t, 3);
              {
                ATerm w_43 = NULL,u_44 = NULL,v_44 = NULL,d_6 = NULL;
                t = SSLgetAnnotations(x_109);
                w_43 = t;
                t = b_110;
                t = k_111(t);
                v_44 = t;
                t = (ATerm) ATmakeAppl(sym__2, b_110, v_44);
                t = genzip_4_0(u_5, v_5, w_5, x_5, t);
                u_44 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, y_109, a_110, u_44, c_110);
                d_6 = t;
                t = SSLsetAnnotations(d_6, w_43);
              }
            }
          else
            {
              ATerm g_46 = NULL,o_46 = NULL,v_46 = NULL,e_6 = NULL;
              if(match_cons(t, sym_RDefT_4))
                {
                  y_109 = ATgetArgument(t, 0);
                  a_110 = ATgetArgument(t, 1);
                  b_110 = ATgetArgument(t, 2);
                  c_110 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(x_109);
              g_46 = t;
              t = b_110;
              t = k_111(t);
              v_46 = t;
              t = (ATerm) ATmakeAppl(sym__2, b_110, v_46);
              t = genzip_4_0(y_5, a_6, f_6, g_6, t);
              o_46 = t;
              t = (ATerm) ATmakeAppl(sym_RDefT_4, y_109, a_110, o_46, c_110);
              e_6 = t;
              t = SSLsetAnnotations(e_6, g_46);
            }
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm l_111 (ATerm), ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm t)
{
  ATerm q_114 = NULL,r_114 = NULL,s_114 = NULL,t_114 = NULL,u_114 = NULL;
  t_114 = t;
  if(match_cons(t, sym_Scope_2))
    {
      u_114 = ATgetArgument(t, 0);
      q_114 = ATgetArgument(t, 1);
      {
        ATerm c_49 = NULL,h_49 = NULL,i_49 = NULL,l_6 = NULL;
        t = SSLgetAnnotations(t_114);
        c_49 = t;
        t = u_114;
        t = n_111(t);
        h_49 = t;
        t = q_114;
        t = l_111(t);
        i_49 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, h_49, i_49);
        l_6 = t;
        t = SSLsetAnnotations(l_6, c_49);
      }
    }
  else
    {
      if(match_cons(t, sym_RDecT_3))
        {
          u_114 = ATgetArgument(t, 0);
          q_114 = ATgetArgument(t, 1);
          r_114 = ATgetArgument(t, 2);
          {
            ATerm e_50 = NULL,s_50 = NULL,t_50 = NULL,v_50 = NULL,m_6 = NULL;
            t = SSLgetAnnotations(t_114);
            e_50 = t;
            t = u_114;
            t = n_111(t);
            s_50 = t;
            t = q_114;
            t = n_111(t);
            t_50 = t;
            t = r_114;
            t = n_111(t);
            v_50 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, s_50, t_50, v_50);
            m_6 = t;
            t = SSLsetAnnotations(m_6, e_50);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              u_114 = ATgetArgument(t, 0);
              q_114 = ATgetArgument(t, 1);
              r_114 = ATgetArgument(t, 2);
              s_114 = ATgetArgument(t, 3);
              {
                ATerm s_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL,n_6 = NULL;
                t = SSLgetAnnotations(t_114);
                s_51 = t;
                t = u_114;
                t = n_111(t);
                y_51 = t;
                t = q_114;
                t = n_111(t);
                z_51 = t;
                t = r_114;
                t = n_111(t);
                a_52 = t;
                t = s_114;
                t = l_111(t);
                b_52 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, y_51, z_51, a_52, b_52);
                n_6 = t;
                t = SSLsetAnnotations(n_6, s_51);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  u_114 = ATgetArgument(t, 0);
                  q_114 = ATgetArgument(t, 1);
                  r_114 = ATgetArgument(t, 2);
                  s_114 = ATgetArgument(t, 3);
                  {
                    ATerm o_52 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL,p_6 = NULL;
                    t = SSLgetAnnotations(t_114);
                    o_52 = t;
                    t = u_114;
                    t = n_111(t);
                    f_53 = t;
                    t = q_114;
                    t = n_111(t);
                    g_53 = t;
                    t = r_114;
                    t = n_111(t);
                    h_53 = t;
                    t = s_114;
                    t = l_111(t);
                    i_53 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, f_53, g_53, h_53, i_53);
                    p_6 = t;
                    t = SSLsetAnnotations(p_6, o_52);
                  }
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      u_114 = ATgetArgument(t, 0);
                      {
                        ATerm z_53 = NULL,b_54 = NULL,q_6 = NULL;
                        t = SSLgetAnnotations(t_114);
                        z_53 = t;
                        t = u_114;
                        t = l_111(t);
                        b_54 = t;
                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, b_54);
                        q_6 = t;
                        t = SSLsetAnnotations(q_6, z_53);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          u_114 = ATgetArgument(t, 0);
                          {
                            ATerm n_54 = NULL,r_54 = NULL,r_6 = NULL;
                            t = SSLgetAnnotations(t_114);
                            n_54 = t;
                            t = u_114;
                            t = l_111(t);
                            r_54 = t;
                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, r_54);
                            r_6 = t;
                            t = SSLsetAnnotations(r_6, n_54);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_OverrideDynamicRules_1))
                            {
                              u_114 = ATgetArgument(t, 0);
                              {
                                ATerm c_55 = NULL,e_55 = NULL,t_6 = NULL;
                                t = SSLgetAnnotations(t_114);
                                c_55 = t;
                                t = u_114;
                                t = l_111(t);
                                e_55 = t;
                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, e_55);
                                t_6 = t;
                                t = SSLsetAnnotations(t_6, c_55);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                {
                                  u_114 = ATgetArgument(t, 0);
                                  {
                                    ATerm k_55 = NULL,m_55 = NULL,u_6 = NULL;
                                    t = SSLgetAnnotations(t_114);
                                    k_55 = t;
                                    t = u_114;
                                    t = l_111(t);
                                    m_55 = t;
                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, m_55);
                                    u_6 = t;
                                    t = SSLsetAnnotations(u_6, k_55);
                                  }
                                }
                              else
                                {
                                  ATerm t_55 = NULL,v_55 = NULL,v_6 = NULL;
                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                    {
                                      u_114 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(t_114);
                                  t_55 = t;
                                  t = u_114;
                                  t = l_111(t);
                                  v_55 = t;
                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, v_55);
                                  v_6 = t;
                                  t = SSLsetAnnotations(v_6, t_55);
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
static ATerm h_6 (ATerm t)
{
  ATerm q_115 = NULL;
  ATerm p_43 = t;
  int q_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_115 = ATgetArgument(t, 0);
          {
            ATerm s_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_43);
      t = q_115;
    }
  else
    {
      t = p_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_115 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_115;
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm z_115 = NULL;
  ATerm t_43 = t;
  int u_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_115 = ATgetArgument(t, 0);
          {
            ATerm v_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_43);
      t = z_115;
    }
  else
    {
      t = t_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_115 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_115;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm l_115 = NULL;
  ATerm x_43 = t;
  int y_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm z_43 = ATgetArgument(t, 0);
          ATerm a_44 = ATgetArgument(t, 1);
          l_115 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(y_43);
      t = l_115;
      t = map_1_0(h_6, t);
    }
  else
    {
      t = x_43;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm b_44 = ATgetArgument(t, 0);
          ATerm c_44 = ATgetArgument(t, 1);
          l_115 = ATgetArgument(t, 2);
          {
            ATerm d_44 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = l_115;
      t = map_1_0(i_6, t);
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm t_116 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_116);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm e_44 = t;
  int g_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_44);
    }
  else
    {
      t = e_44;
      {
        ATerm h_44 = t;
        int i_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm v_116 = NULL,b_117 = NULL,c_117 = NULL,d_117 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      v_116 = ATgetArgument(t, 0);
                      b_117 = ATgetArgument(t, 1);
                      c_117 = ATgetArgument(t, 2);
                      d_117 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_117;
                  t = map_1_0(s_6, t);
                  LocalPopChoice(k_44);
                }
              else
                {
                  t = j_44;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm k_117 = NULL;
  ATerm p_44 = t;
  int q_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_117 = ATgetArgument(t, 0);
          {
            ATerm t_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_44);
      t = k_117;
    }
  else
    {
      t = p_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_117 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_117;
    }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm o_117 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_117);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm w_44 = t;
  int x_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_44);
    }
  else
    {
      t = w_44;
      {
        ATerm a_45 = t;
        int b_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_45);
          }
        else
          {
            t = a_45;
            {
              ATerm h_45 = t;
              int j_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_117 = NULL,s_117 = NULL,t_117 = NULL,v_117 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_117 = ATgetArgument(t, 0);
                      s_117 = ATgetArgument(t, 1);
                      t_117 = ATgetArgument(t, 2);
                      v_117 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_117;
                  t = map_1_0(y_6, t);
                  LocalPopChoice(j_45);
                }
              else
                {
                  t = h_45;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm c_118 = NULL;
  ATerm k_45 = t;
  int l_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_118 = ATgetArgument(t, 0);
          {
            ATerm m_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_45);
      t = c_118;
    }
  else
    {
      t = k_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_118 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_118;
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm j_118 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_118);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm o_45 = t;
  int q_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_45);
    }
  else
    {
      t = o_45;
      {
        ATerm r_45 = t;
        int s_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_45);
          }
        else
          {
            t = r_45;
            {
              ATerm u_45 = t;
              int v_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_118 = NULL,o_118 = NULL,p_118 = NULL,r_118 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_118 = ATgetArgument(t, 0);
                      o_118 = ATgetArgument(t, 1);
                      p_118 = ATgetArgument(t, 2);
                      r_118 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_118;
                  t = map_1_0(b_7, t);
                  LocalPopChoice(v_45);
                }
              else
                {
                  t = u_45;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm e_119 = NULL;
  ATerm w_45 = t;
  int x_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_119 = ATgetArgument(t, 0);
          {
            ATerm y_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_45);
      t = e_119;
    }
  else
    {
      t = w_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_119 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_119;
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm i_119 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_119 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_119);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm z_45 = t;
  int a_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_46);
    }
  else
    {
      t = z_45;
      {
        ATerm b_46 = t;
        int c_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_46);
          }
        else
          {
            t = b_46;
            {
              ATerm d_46 = t;
              int e_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_119 = NULL,l_119 = NULL,m_119 = NULL,n_119 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      k_119 = ATgetArgument(t, 0);
                      l_119 = ATgetArgument(t, 1);
                      m_119 = ATgetArgument(t, 2);
                      n_119 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_119;
                  t = map_1_0(e_7, t);
                  LocalPopChoice(e_46);
                }
              else
                {
                  t = d_46;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm v_119 = NULL;
  ATerm f_46 = t;
  int h_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_119 = ATgetArgument(t, 0);
          {
            ATerm i_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_46);
      t = v_119;
    }
  else
    {
      t = f_46;
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
static ATerm f_7 (ATerm t)
{
  ATerm z_119 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_119 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_119);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm j_46 = t;
  int k_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_46);
    }
  else
    {
      t = j_46;
      {
        ATerm l_46 = t;
        int m_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_46);
          }
        else
          {
            t = l_46;
            {
              ATerm n_46 = t;
              int q_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_120 = NULL,i_120 = NULL,j_120 = NULL,k_120 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_120 = ATgetArgument(t, 0);
                      i_120 = ATgetArgument(t, 1);
                      j_120 = ATgetArgument(t, 2);
                      k_120 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_120;
                  t = map_1_0(h_7, t);
                  LocalPopChoice(q_46);
                }
              else
                {
                  t = n_46;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm r_120 = NULL;
  ATerm r_46 = t;
  int s_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_120 = ATgetArgument(t, 0);
          {
            ATerm t_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_46);
      t = r_120;
    }
  else
    {
      t = r_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_120 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_120;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm r_116 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      r_116 = ATgetArgument(t, 0);
      t = r_116;
      t = free_vars_3_0(j_6, o_6, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          r_116 = ATgetArgument(t, 0);
          t = r_116;
          t = free_vars_3_0(w_6, x_6, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              r_116 = ATgetArgument(t, 0);
              t = r_116;
              t = free_vars_3_0(z_6, a_7, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  r_116 = ATgetArgument(t, 0);
                  t = r_116;
                  t = free_vars_3_0(c_7, d_7, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      r_116 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = r_116;
                  t = free_vars_3_0(f_7, g_7, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm g_13 (ATerm p_123 (ATerm), ATerm o_44, ATerm n_44, ATerm t)
{
  static ATerm q_121 (ATerm t)
  {
    ATerm j_121 = NULL,k_121 = NULL,l_121 = NULL;
    j_121 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_44;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_121 = ATgetFirst((ATermList) t);
            l_121 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_46 = t;
          int w_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_121;
              {
                static ATerm k_7 (ATerm t)
                {
                  t = n_44;
                  return(t);
                }
                t = i_13(p_123, k_7, k_121, l_121, t);
              }
              t = q_121(t);
              LocalPopChoice(w_46);
            }
          else
            {
              t = u_46;
              {
                ATerm f_56 = NULL,m_56 = NULL,m_7 = NULL;
                t = SSLgetAnnotations(j_121);
                f_56 = t;
                t = l_121;
                t = q_121(t);
                m_56 = t;
                t = (ATerm) ATinsert(CheckATermList(m_56), k_121);
                m_7 = t;
                t = SSLsetAnnotations(m_7, f_56);
              }
            }
        }
      }
    return(t);
  }
  t = o_44;
  t = q_121(t);
  return(t);
}
static ATerm i_13 (ATerm s_123 (ATerm), ATerm t_123 (ATerm), ATerm s_44, ATerm r_44, ATerm t)
{
  t = t_123(t);
  {
    static ATerm l_7 (ATerm t)
    {
      ATerm s_121 = NULL;
      s_121 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_44, s_121);
      t = s_123(t);
      return(t);
    }
    t = fetch_1_0(l_7, t);
  }
  t = r_44;
  return(t);
}
static ATerm j_13 (ATerm k_123 (ATerm), ATerm m_44, ATerm l_44, ATerm t)
{
  static ATerm i_122 (ATerm t)
  {
    ATerm d_122 = NULL,e_122 = NULL,f_122 = NULL;
    d_122 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_122;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_122 = ATgetFirst((ATermList) t);
            f_122 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm x_46 = t;
          int z_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_122;
              {
                static ATerm n_7 (ATerm t)
                {
                  t = l_44;
                  return(t);
                }
                t = i_13(k_123, n_7, e_122, f_122, t);
              }
              t = i_122(t);
              LocalPopChoice(z_46);
            }
          else
            {
              t = x_46;
              {
                ATerm j_57 = NULL,w_57 = NULL,o_7 = NULL;
                t = SSLgetAnnotations(d_122);
                j_57 = t;
                t = f_122;
                t = i_122(t);
                w_57 = t;
                t = (ATerm) ATinsert(CheckATermList(w_57), e_122);
                o_7 = t;
                t = SSLsetAnnotations(o_7, j_57);
              }
            }
        }
      }
    return(t);
  }
  t = m_44;
  t = i_122(t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_47 = ATgetArgument(t, 0);
      if(((ATgetType(a_47) != AT_LIST) || !(ATisEmpty(a_47))))
        _fail(t);
      {
        ATerm h_47 = ATgetArgument(t, 1);
        if(((ATgetType(h_47) != AT_LIST) || !(ATisEmpty(h_47))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm q_122 = NULL,r_122 = NULL,s_122 = NULL,t_122 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_47 = ATgetArgument(t, 0);
      if(((ATgetType(i_47) == AT_LIST) && !(ATisEmpty(i_47))))
        {
          q_122 = ATgetFirst((ATermList) i_47);
          r_122 = (ATerm) ATgetNext((ATermList) i_47);
        }
      else
        _fail(t);
      {
        ATerm j_47 = ATgetArgument(t, 1);
        if(((ATgetType(j_47) == AT_LIST) && !(ATisEmpty(j_47))))
          {
            s_122 = ATgetFirst((ATermList) j_47);
            t_122 = (ATerm) ATgetNext((ATermList) j_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_122, s_122), (ATerm) ATmakeAppl(sym__2, r_122, t_122));
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm u_122 = NULL,v_122 = NULL;
  if(match_cons(t, sym__2))
    {
      u_122 = ATgetArgument(t, 0);
      v_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_122), u_122);
  return(t);
}
static ATerm l_13 (ATerm e_649, ATerm j_649, ATerm o_63, ATerm t)
{
  ATerm l_122 = NULL,m_122 = NULL,n_122 = NULL,o_122 = NULL;
  t = SSL_explode_term(j_649);
  if(match_cons(t, sym__2))
    {
      l_122 = ATgetArgument(t, 0);
      n_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(e_649);
  if(match_cons(t, sym__2))
    {
      if((l_122 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      m_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_122, n_122);
  t = genzip_4_0(p_7, q_7, r_7, _id, t);
  o_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_122, o_63);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm w_118 (ATerm), ATerm x_118 (ATerm), ATerm t)
{
  static ATerm x_122 (ATerm t)
  {
    ATerm k_47 = t;
    int l_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_118(t);
        LocalPopChoice(l_47);
      }
    else
      {
        t = k_47;
        t = x_118(t);
        t = x_122(t);
      }
    return(t);
  }
  t = x_122(t);
  return(t);
}
ATerm for_3_0 (ATerm z_118 (ATerm), ATerm a_119 (ATerm), ATerm b_119 (ATerm), ATerm t)
{
  t = z_118(t);
  t = while_not_2_0(a_119, b_119, t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm e_123 = NULL;
  e_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, e_123);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm f_123 = NULL,g_123 = NULL,h_123 = NULL,i_123 = NULL,t_7 = NULL;
  i_123 = t;
  if(match_cons(t, sym__2))
    {
      g_123 = ATgetArgument(t, 0);
      h_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_123);
  f_123 = t;
  t = h_123;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_123, h_123);
  t_7 = t;
  t = SSLsetAnnotations(t_7, f_123);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm n_124 = NULL,o_124 = NULL,p_124 = NULL,q_124 = NULL,r_124 = NULL;
  n_124 = t;
  if(match_cons(t, sym__2))
    {
      o_124 = ATgetArgument(t, 0);
      p_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_124;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_124 = ATgetFirst((ATermList) t);
      r_124 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_47 = t;
        int p_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_125(o_124, p_124, n_124, t);
            LocalPopChoice(p_47);
          }
        else
          {
            t = m_47;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_124), q_124), r_124);
          }
      }
    }
  else
    {
      t = b_125(o_124, p_124, n_124, t);
    }
  return(t);
}
static ATerm b_125 (ATerm j_123, ATerm m_123, ATerm n_123, ATerm t)
{
  ATerm o_123 = NULL,v_123 = NULL,u_7 = NULL,e_124 = NULL,f_124 = NULL,g_124 = NULL,h_124 = NULL;
  t = SSLgetAnnotations(n_123);
  o_123 = t;
  t = m_123;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_124 = ATgetFirst((ATermList) t);
      h_124 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_124;
  if(match_cons(t, sym__2))
    {
      f_124 = ATgetArgument(t, 0);
      g_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_47 = t;
    int x_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_124;
        if((f_124 != t))
          {
            _fail(t);
          }
        t = h_124;
        LocalPopChoice(x_47);
      }
    else
      {
        t = w_47;
        t = m_123;
        t = l_13(f_124, g_124, h_124, t);
      }
  }
  v_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_123, v_123);
  u_7 = t;
  t = SSLsetAnnotations(u_7, o_123);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm a_125 = NULL;
  if(match_cons(t, sym__2))
    {
      a_125 = ATgetArgument(t, 0);
      if((a_125 != ATgetArgument(t, 1)))
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
  ATerm y_47 = t;
  int z_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(v_7, w_7, y_7, t);
      LocalPopChoice(z_47);
    }
  else
    {
      t = y_47;
      {
        ATerm v_124 = NULL,w_124 = NULL,x_124 = NULL;
        v_124 = t;
        if(match_cons(t, sym__2))
          {
            w_124 = ATgetArgument(t, 0);
            x_124 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_124;
        t = j_13(a_8, w_124, x_124, t);
      }
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm w_58 = NULL,a_59 = NULL;
  if(match_cons(t, sym__2))
    {
      w_58 = ATgetArgument(t, 0);
      a_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_13(i_8, w_58, a_59, t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm c_59 = NULL;
  if(match_cons(t, sym__2))
    {
      c_59 = ATgetArgument(t, 0);
      if((c_59 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL;
  if(match_cons(t, sym__2))
    {
      l_59 = ATgetArgument(t, 0);
      m_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_13(m_8, l_59, m_59, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm p_59 = NULL;
  if(match_cons(t, sym__2))
    {
      p_59 = ATgetArgument(t, 0);
      if((p_59 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm l_130 (ATerm), ATerm m_130 (ATerm), ATerm n_130 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm p_125 (ATerm t)
  {
    ATerm b_48 = t;
    int c_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_130(t);
        LocalPopChoice(c_48);
      }
    else
      {
        t = b_48;
        {
          ATerm d_48 = t;
          int e_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_125 = NULL,e_125 = NULL,j_58 = NULL,m_58 = NULL;
              d_125 = t;
              t = m_130(t);
              e_125 = t;
              t = d_125;
              {
                static ATerm e_8 (ATerm t)
                {
                  ATerm g_125 = NULL;
                  t = p_125(t);
                  g_125 = t;
                  t = (ATerm) ATmakeAppl(sym__2, g_125, e_125);
                  t = diff_0_0(t);
                  return(t);
                }
                t = n_130(e_8, p_125, f_8, t);
              }
              m_58 = t;
              t = SSL_explode_term(m_58);
              if(match_cons(t, sym__2))
                {
                  ATerm f_48 = ATgetArgument(t, 0);
                  j_58 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = j_58;
              t = foldr_3_0(g_8, h_8, _id, t);
              LocalPopChoice(e_48);
            }
          else
            {
              t = d_48;
              {
                ATerm e_59 = NULL,f_59 = NULL;
                f_59 = t;
                t = SSL_explode_term(f_59);
                if(match_cons(t, sym__2))
                  {
                    ATerm g_48 = ATgetArgument(t, 0);
                    e_59 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_59;
                t = foldr_3_0(j_8, k_8, p_125, t);
              }
            }
        }
      }
    return(t);
  }
  t = p_125(t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm c_126 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_126);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm h_48 = t;
  int i_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_48);
    }
  else
    {
      t = h_48;
      {
        ATerm j_48 = t;
        int k_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_48);
          }
        else
          {
            t = j_48;
            {
              ATerm l_48 = t;
              int n_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_126 = NULL,f_126 = NULL,g_126 = NULL,h_126 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_126 = ATgetArgument(t, 0);
                      f_126 = ATgetArgument(t, 1);
                      g_126 = ATgetArgument(t, 2);
                      h_126 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_126;
                  t = map_1_0(x_8, t);
                  LocalPopChoice(n_48);
                }
              else
                {
                  t = l_48;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm o_126 = NULL;
  ATerm o_48 = t;
  int p_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_126 = ATgetArgument(t, 0);
          {
            ATerm q_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_48);
      t = o_126;
    }
  else
    {
      t = o_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_126;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm u_125 = NULL,y_125 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      y_125 = ATgetArgument(t, 0);
      t = y_125;
      if(match_cons(t, sym_Rule_3))
        {
          u_125 = ATgetArgument(t, 0);
          {
            ATerm r_48 = ATgetArgument(t, 1);
          }
          {
            ATerm s_48 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = u_125;
      t = free_vars_3_0(n_8, t_8, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          y_125 = ATgetArgument(t, 0);
          {
            ATerm t_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = y_125;
    }
  return(t);
}
ATerm Var_1_0 (ATerm m_89 (ATerm), ATerm t)
{
  ATerm x_126 = NULL,y_126 = NULL,z_126 = NULL,a_127 = NULL,x_7 = NULL;
  a_127 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_127);
  x_126 = t;
  t = y_126;
  t = m_89(t);
  z_126 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_126);
  x_7 = t;
  t = SSLsetAnnotations(x_7, x_126);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm u_48 = t;
  int v_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_48);
    }
  else
    {
      t = u_48;
      {
        ATerm w_48 = t;
        int x_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_127 = NULL,i_127 = NULL,j_127 = NULL,k_127 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                h_127 = ATgetArgument(t, 0);
                i_127 = ATgetArgument(t, 1);
                j_127 = ATgetArgument(t, 2);
                k_127 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = j_127;
            t = map_1_0(z_8, t);
            LocalPopChoice(x_48);
          }
        else
          {
            t = w_48;
            t = Bind8_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm r_127 = NULL;
  ATerm y_48 = t;
  int a_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_127 = ATgetArgument(t, 0);
          {
            ATerm b_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_49);
      t = r_127;
    }
  else
    {
      t = y_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_127 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_127;
    }
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm d_49 = t;
  int e_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_127 = NULL,v_127 = NULL,w_127 = NULL,x_127 = NULL,y_127 = NULL;
      u_127 = t;
      if(match_cons(t, sym_Let_2))
        {
          v_127 = ATgetArgument(t, 0);
          w_127 = ATgetArgument(t, 1);
          t = u_127;
          t = d_13(v_127, w_127, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              v_127 = ATgetArgument(t, 0);
              w_127 = ATgetArgument(t, 1);
              x_127 = ATgetArgument(t, 2);
              t = w_127;
              t = map_1_0(b_9, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  v_127 = ATgetArgument(t, 0);
                  w_127 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, v_127);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      v_127 = ATgetArgument(t, 0);
                      w_127 = ATgetArgument(t, 1);
                      x_127 = ATgetArgument(t, 2);
                      y_127 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_127;
                  t = map_1_0(c_9, t);
                }
            }
        }
      LocalPopChoice(e_49);
    }
  else
    {
      t = d_49;
      t = Bind7_0_0(t);
    }
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm g_128 = NULL;
  ATerm f_49 = t;
  int g_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_128 = ATgetArgument(t, 0);
          {
            ATerm j_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_49);
      t = g_128;
    }
  else
    {
      t = f_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_128 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_128;
    }
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm a_129 = NULL;
  ATerm k_49 = t;
  int l_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_129 = ATgetArgument(t, 0);
          {
            ATerm m_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_49);
      t = a_129;
    }
  else
    {
      t = k_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_129 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_129;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, y_8, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, a_9, sboundin_3_0, spaste_1_0, t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm g_63 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      g_63 = ATgetArgument(t, 0);
      {
        ATerm n_49 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = g_63;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_49 = ATgetArgument(t, 0);
      if(((ATgetType(o_49) != AT_LIST) || !(ATisEmpty(o_49))))
        _fail(t);
      {
        ATerm p_49 = ATgetArgument(t, 1);
        if(((ATgetType(p_49) != AT_LIST) || !(ATisEmpty(p_49))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_49 = ATgetArgument(t, 0);
      if(((ATgetType(q_49) == AT_LIST) && !(ATisEmpty(q_49))))
        {
          i_63 = ATgetFirst((ATermList) q_49);
          j_63 = (ATerm) ATgetNext((ATermList) q_49);
        }
      else
        _fail(t);
      {
        ATerm r_49 = ATgetArgument(t, 1);
        if(((ATgetType(r_49) == AT_LIST) && !(ATisEmpty(r_49))))
          {
            k_63 = ATgetFirst((ATermList) r_49);
            l_63 = (ATerm) ATgetNext((ATermList) r_49);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_63, k_63), (ATerm) ATmakeAppl(sym__2, j_63, l_63));
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL;
  if(match_cons(t, sym__2))
    {
      m_63 = ATgetArgument(t, 0);
      n_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_63), m_63);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm p_63 = NULL,q_63 = NULL;
  if(match_cons(t, sym__2))
    {
      p_63 = ATgetArgument(t, 0);
      q_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_63), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_63))));
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_l_14;
  return(t);
}
ATerm InlineCall_0_0 (ATerm t)
{
  ATerm b_131 = NULL,c_131 = NULL,d_131 = NULL,e_131 = NULL,f_131 = NULL;
  b_131 = t;
  if(match_cons(t, sym_CallT_3))
    {
      c_131 = ATgetArgument(t, 0);
      e_131 = ATgetArgument(t, 1);
      f_131 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = c_131;
  if(match_cons(t, sym_SVar_1))
    {
      d_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_49 = t;
    int u_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_61 = NULL,g_61 = NULL;
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_131), (ATerm)ATempty, (ATerm) ATempty);
        f_61 = t;
        t = term_l_14;
        g_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_14, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_131), (ATerm)ATempty, (ATerm) ATempty));
        t = j_7(g_61, f_61, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = b_131;
        _fail(t);
        LocalPopChoice(u_49);
      }
    else
      {
        t = s_49;
        {
          ATerm v_49 = t;
          int w_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_61 = NULL,u_61 = NULL;
              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_131), (ATerm)ATempty, (ATerm) ATempty);
              t_61 = t;
              t = term_l_14;
              u_61 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_l_14, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_131), (ATerm)ATempty, (ATerm) ATempty));
              t = j_7(u_61, t_61, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = b_131;
              _fail(t);
              LocalPopChoice(w_49);
            }
          else
            {
              t = v_49;
              {
                ATerm x_49 = t;
                int y_49 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_62 = NULL,i_62 = NULL,m_62 = NULL,n_62 = NULL,p_62 = NULL,q_62 = NULL,z_62 = NULL,a_63 = NULL,f_63 = NULL,a_64 = NULL,b_64 = NULL;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_131), (ATerm)ATempty, (ATerm) ATempty);
                    a_64 = t;
                    t = term_l_14;
                    b_64 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_l_14, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_131), (ATerm)ATempty, (ATerm) ATempty));
                    t = j_7(b_64, a_64, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm z_49 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) z_49) != ATmakeSymbol("d_0", 0, ATtrue)))
                          _fail(t);
                        f_62 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = f_62;
                    t = strename_0_0(t);
                    if(match_cons(t, sym_SDefT_4))
                      {
                        if((d_131 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        i_62 = ATgetArgument(t, 1);
                        n_62 = ATgetArgument(t, 2);
                        m_62 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__3, i_62, e_131, m_62);
                    t = substitute_args_0_0(t);
                    q_62 = t;
                    t = n_62;
                    t = map_1_0(d_9, t);
                    p_62 = t;
                    t = (ATerm) ATmakeAppl(sym__2, f_131, p_62);
                    t = genzip_4_0(f_9, g_9, k_9, l_9, t);
                    z_62 = t;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_131), (ATerm)ATempty, (ATerm) ATempty);
                    a_63 = t;
                    t = term_a_50;
                    f_63 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_131), (ATerm)ATempty, (ATerm) ATempty), term_a_50);
                    t = v_13(m_9, a_63, f_63, t);
                    t = (ATerm) ATmakeAppl(sym_Scope_2, p_62, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, z_62), q_62));
                    t = simplify_0_0(t);
                    LocalPopChoice(y_49);
                  }
                else
                  {
                    t = x_49;
                    {
                      ATerm q_64 = NULL,r_64 = NULL;
                      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_131), (ATerm)ATempty, (ATerm) ATempty);
                      q_64 = t;
                      t = term_l_14;
                      r_64 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_l_14, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_131), (ATerm)ATempty, (ATerm) ATempty));
                      t = j_7(r_64, q_64, t);
                      if(!(match_cons(t, sym_Undefined_0)))
                        _fail(t);
                      t = b_131;
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
  ATerm b_50 = t;
  if((PushChoice() == 0))
    {
      ATerm k_131 = NULL,l_131 = NULL;
      if(match_cons(t, sym__2))
        {
          k_131 = ATgetArgument(t, 0);
          l_131 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, k_131, l_131);
      {
        ATerm c_50 = t;
        int d_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(k_131, l_131);
            LocalPopChoice(d_50);
          }
        else
          {
            t = c_50;
            t = SSL_gtr(k_131, l_131);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, k_131, l_131);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_50;
    }
  return(t);
}
ATerm foldr_3_0 (ATerm u_126 (ATerm), ATerm v_126 (ATerm), ATerm w_126 (ATerm), ATerm t)
{
  ATerm n_131 = NULL,o_131 = NULL,p_131 = NULL;
  n_131 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_131;
      t = u_126(t);
    }
  else
    {
      ATerm s_131 = NULL,t_131 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_131 = ATgetFirst((ATermList) t);
          p_131 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_131;
      t = w_126(t);
      s_131 = t;
      t = p_131;
      t = foldr_3_0(u_126, v_126, w_126, t);
      t_131 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_131, t_131);
      t = v_126(t);
    }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_g_50;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm y_64 = NULL,z_64 = NULL;
  if(match_cons(t, sym__2))
    {
      y_64 = ATgetArgument(t, 0);
      z_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(y_64, z_64, t);
  return(t);
}
ATerm occurrences_1_0 (ATerm w_123 (ATerm), ATerm t)
{
  ATerm w_131 = NULL,x_131 = NULL,y_131 = NULL,t_64 = NULL;
  y_131 = t;
  {
    ATerm h_50 = t;
    int i_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_123(t);
        t = term_u_14;
        LocalPopChoice(i_50);
      }
    else
      {
        t = h_50;
        t = term_g_50;
      }
  }
  w_131 = t;
  t = SSL_explode_term(y_131);
  if(match_cons(t, sym__2))
    {
      ATerm k_50 = ATgetArgument(t, 0);
      t_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_64;
  {
    static ATerm p_9 (ATerm t)
    {
      t = occurrences_1_0(w_123, t);
      return(t);
    }
    t = foldr_3_0(n_9, o_9, p_9, t);
  }
  x_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_131, x_131);
  t = n_15(w_131, x_131, t);
  return(t);
}
static ATerm t_13 (ATerm p_110 (ATerm), ATerm l_25, ATerm k_25, ATerm t)
{
  ATerm b_132 = NULL,c_132 = NULL;
  b_132 = t;
  t = k_25;
  {
    ATerm l_50 = t;
    if((PushChoice() == 0))
      {
        static ATerm q_9 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm m_50 = ATgetArgument(t, 0);
              if(match_cons(m_50, sym_SVar_1))
                {
                  if((l_25 != ATgetArgument(m_50, 0)))
                    {
                      _fail(ATgetArgument(m_50, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm n_50 = ATgetArgument(t, 1);
              }
              {
                ATerm o_50 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(q_9, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_50;
      }
  }
  t = p_110(t);
  {
    static ATerm s_9 (ATerm t)
    {
      if(match_cons(t, sym_CallT_3))
        {
          ATerm p_50 = ATgetArgument(t, 0);
          if(match_cons(p_50, sym_SVar_1))
            {
              if((l_25 != ATgetArgument(p_50, 0)))
                {
                  _fail(ATgetArgument(p_50, 0));
                }
            }
          else
            _fail(t);
          {
            ATerm q_50 = ATgetArgument(t, 1);
          }
          {
            ATerm u_50 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      return(t);
    }
    t = occurrences_1_0(s_9, t);
  }
  c_132 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_132, term_u_14);
  t = leq_0_0(t);
  t = b_132;
  return(t);
}
static ATerm v_13 (ATerm f_120 (ATerm), ATerm u_35, ATerm s_35, ATerm t)
{
  ATerm d_132 = NULL,e_132 = NULL,f_132 = NULL,g_132 = NULL,h_132 = NULL,i_132 = NULL,j_132 = NULL,k_132 = NULL;
  g_132 = t;
  t = f_120(t);
  d_132 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_132, u_35, s_35);
  t = u_15(d_132, u_35, s_35, t);
  {
    ATerm w_50 = t;
    int x_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_132 = NULL;
        t = term_y_50;
        l_132 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_132, term_y_50);
        t = t_15(d_132, l_132, t);
        LocalPopChoice(x_50);
      }
    else
      {
        t = w_50;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_132 = ATgetFirst((ATermList) t);
      f_132 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, d_132, term_y_50, (ATerm) ATinsert(CheckATermList(f_132), (ATerm) ATinsert(CheckATermList(e_132), u_35)));
  t = lookup_table_0_1(d_132, t);
  k_132 = t;
  t = term_y_50;
  h_132 = t;
  t = (ATerm) ATinsert(CheckATermList(f_132), (ATerm) ATinsert(CheckATermList(e_132), u_35));
  i_132 = t;
  t = k_132;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(h_132, i_132, j_132, t);
  t = g_132;
  return(t);
}
static ATerm x_13 (ATerm r_37, ATerm t_37, ATerm t)
{
  ATerm m_132 = NULL,n_132 = NULL;
  n_132 = t;
  {
    ATerm z_50 = t;
    int a_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_37, t_37);
        t = t_15(r_37, t_37, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_51 = ATgetFirst((ATermList) t);
            m_132 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(a_51);
        {
          ATerm o_132 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, r_37, t_37, m_132);
          t = lookup_table_0_1(r_37, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              o_132 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_15(t_37, m_132, o_132, t);
          t = (ATerm) ATmakeAppl(sym__3, r_37, t_37, m_132);
        }
      }
    else
      {
        t = z_50;
        {
          ATerm q_132 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, r_37, t_37);
          t = lookup_table_0_1(r_37, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              q_132 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_15(t_37, q_132, t);
          t = (ATerm) ATmakeAppl(sym__2, r_37, t_37);
        }
      }
  }
  t = n_132;
  return(t);
}
ATerm end_scope_1_0 (ATerm c_120 (ATerm), ATerm t)
{
  ATerm s_132 = NULL,t_132 = NULL,u_132 = NULL,v_132 = NULL,w_132 = NULL,x_132 = NULL,y_132 = NULL;
  v_132 = t;
  t = c_120(t);
  u_132 = t;
  {
    ATerm d_51 = t;
    int e_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_132 = NULL;
        t = term_y_50;
        z_132 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_132, term_y_50);
        t = t_15(u_132, z_132, t);
        LocalPopChoice(e_51);
      }
    else
      {
        t = d_51;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_132 = ATgetFirst((ATermList) t);
      s_132 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, u_132, term_y_50, s_132);
  t = lookup_table_0_1(u_132, t);
  y_132 = t;
  t = term_y_50;
  w_132 = t;
  t = y_132;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(w_132, s_132, x_132, t);
  t = t_132;
  {
    static ATerm t_9 (ATerm t)
    {
      ATerm a_133 = NULL;
      a_133 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_132, a_133);
      t = x_13(u_132, a_133, t);
      return(t);
    }
    t = map_1_0(t_9, t);
  }
  t = v_132;
  return(t);
}
ATerm restore_always_2_0 (ATerm r_115 (ATerm), ATerm s_115 (ATerm), ATerm t)
{
  ATerm f_51 = t;
  int g_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_115(t);
      t = s_115(t);
      LocalPopChoice(g_51);
    }
  else
    {
      t = f_51;
      t = s_115(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm b_120 (ATerm), ATerm t)
{
  ATerm c_133 = NULL,d_133 = NULL,e_133 = NULL,f_133 = NULL,g_133 = NULL,h_133 = NULL,i_133 = NULL;
  d_133 = t;
  t = b_120(t);
  c_133 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_133, term_y_50);
  {
    ATerm h_51 = t;
    int i_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_133 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm j_51 = ATgetArgument(t, 0);
            ATerm l_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_y_50;
        m_133 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_133, term_y_50);
        t = t_15(c_133, m_133, t);
        LocalPopChoice(i_51);
      }
    else
      {
        t = h_51;
        t = (ATerm) ATempty;
      }
  }
  e_133 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_133, term_y_50, (ATerm) ATinsert(CheckATermList(e_133), (ATerm) ATempty));
  t = lookup_table_0_1(c_133, t);
  i_133 = t;
  t = term_y_50;
  f_133 = t;
  t = (ATerm) ATinsert(CheckATermList(e_133), (ATerm) ATempty);
  g_133 = t;
  t = i_133;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(f_133, g_133, h_133, t);
  t = d_133;
  return(t);
}
ATerm scope_2_0 (ATerm d_120 (ATerm), ATerm e_120 (ATerm), ATerm t)
{
  static ATerm a_10 (ATerm t)
  {
    t = end_scope_1_0(d_120, t);
    return(t);
  }
  t = begin_scope_1_0(d_120, t);
  t = restore_always_2_0(e_120, a_10, t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  t = term_l_14;
  return(t);
}
static ATerm g_10 (ATerm t)
{
  t = term_m_14;
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = term_l_14;
  return(t);
}
ATerm inline_sdef_0_0 (ATerm t)
{
  static ATerm f_10 (ATerm t)
  {
    static ATerm h_10 (ATerm t)
    {
      ATerm m_51 = t;
      int n_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_133 = NULL,s_133 = NULL,t_133 = NULL;
          r_133 = t;
          {
            ATerm o_51 = t;
            int p_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    s_133 = ATgetArgument(t, 0);
                    {
                      ATerm q_51 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm r_51 = ATgetArgument(t, 2);
                    }
                    {
                      ATerm t_51 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(p_51);
                {
                  ATerm w_133 = NULL,x_133 = NULL;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_133), (ATerm)ATempty, (ATerm) ATempty);
                  w_133 = t;
                  t = term_a_50;
                  x_133 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_133), (ATerm)ATempty, (ATerm) ATempty), term_a_50);
                  t = v_13(i_10, w_133, x_133, t);
                  t = r_133;
                }
              }
            else
              {
                t = o_51;
                if(match_cons(t, sym_Let_2))
                  {
                    s_133 = ATgetArgument(t, 0);
                    t_133 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = s_133;
                {
                  static ATerm k_10 (ATerm t)
                  {
                    ATerm a_134 = NULL,b_134 = NULL;
                    if(match_cons(t, sym_SDefT_4))
                      {
                        a_134 = ATgetArgument(t, 0);
                        {
                          ATerm u_51 = ATgetArgument(t, 1);
                        }
                        {
                          ATerm v_51 = ATgetArgument(t, 2);
                        }
                        b_134 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    {
                      static ATerm l_10 (ATerm t)
                      {
                        t = t_133;
                        return(t);
                      }
                      t = t_13(l_10, a_134, b_134, t);
                    }
                    t = AddSDef_0_0(t);
                    return(t);
                  }
                  t = map_1_0(k_10, t);
                }
                t = (ATerm) ATmakeAppl(sym_Let_2, s_133, t_133);
              }
          }
          LocalPopChoice(n_51);
        }
      else
        {
          t = m_51;
          t = repeat_2_0(InlineCall_0_0, _id, t);
        }
      t = SRTS_all(inline_sdef_0_0, t);
      return(t);
    }
    t = scope_2_0(g_10, h_10, t);
    return(t);
  }
  t = scope_2_0(c_10, f_10, t);
  return(t);
}
ATerm topdown_1_0 (ATerm k_112 (ATerm), ATerm t)
{
  static ATerm m_10 (ATerm t)
  {
    t = topdown_1_0(k_112, t);
    return(t);
  }
  t = k_112(t);
  t = SRTS_all(m_10, t);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm w_51 = t;
  int x_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm c_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(x_51);
      {
        ATerm f_134 = NULL,g_134 = NULL;
        f_134 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm d_52 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        g_134 = t;
        t = SSLgetAnnotations(f_134);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_52 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) e_52) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm f_52 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(f_52) != AT_LIST) || !(ATisEmpty(f_52))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_134;
      }
    }
  else
    {
      t = w_51;
      {
        ATerm g_52 = t;
        int h_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm i_52 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) i_52) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm j_52 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(h_52);
            _fail(t);
          }
        else
          {
            t = g_52;
          }
      }
    }
  return(t);
}
static ATerm z_13 (ATerm y_80, ATerm x_80, ATerm t)
{
  t = y_80;
  t = topdown_1_0(o_10, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, y_80);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm p_134 = NULL,q_134 = NULL,s_134 = NULL,t_134 = NULL,u_134 = NULL,v_134 = NULL,w_134 = NULL,x_134 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      s_134 = ATgetArgument(t, 0);
      v_134 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_134;
  if(match_cons(t, sym_Match_1))
    {
      t_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_134;
  if(match_cons(t, sym_Var_1))
    {
      u_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_134;
  if(match_cons(t, sym_Seq_2))
    {
      w_134 = ATgetArgument(t, 0);
      q_134 = ATgetArgument(t, 1);
      t = w_134;
      if(match_cons(t, sym_Build_1))
        {
          x_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_134;
      if(match_cons(t, sym_Var_1))
        {
          p_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_134;
      if((u_134 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_134)), q_134);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          w_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_134;
      if(match_cons(t, sym_Var_1))
        {
          x_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_134;
      if((u_134 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_134));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm f_135 = NULL,g_135 = NULL,i_135 = NULL,j_135 = NULL,k_135 = NULL,l_135 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      i_135 = ATgetArgument(t, 0);
      k_135 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_135;
  if(match_cons(t, sym_Build_1))
    {
      j_135 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_135;
  if(match_cons(t, sym_Seq_2))
    {
      l_135 = ATgetArgument(t, 0);
      g_135 = ATgetArgument(t, 1);
      t = l_135;
      if(match_cons(t, sym_Match_1))
        {
          f_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_135;
      if((j_135 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_135), g_135);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          l_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_135;
      if((j_135 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, j_135);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm t_135 = NULL,u_135 = NULL,w_135 = NULL,x_135 = NULL,y_135 = NULL,z_135 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      w_135 = ATgetArgument(t, 0);
      y_135 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_135;
  if(match_cons(t, sym_Match_1))
    {
      x_135 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_135;
  if(match_cons(t, sym_Seq_2))
    {
      z_135 = ATgetArgument(t, 0);
      u_135 = ATgetArgument(t, 1);
      t = z_135;
      if(match_cons(t, sym_Match_1))
        {
          t_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_135;
      if((x_135 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_135), u_135);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          z_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_135;
      if((x_135 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, x_135);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm h_136 = NULL,i_136 = NULL,j_136 = NULL,m_136 = NULL,o_136 = NULL,p_136 = NULL,q_136 = NULL,r_136 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      m_136 = ATgetArgument(t, 0);
      o_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_136;
  if(match_cons(t, sym_Build_1))
    {
      ATerm k_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_136;
  if(match_cons(t, sym_Seq_2))
    {
      p_136 = ATgetArgument(t, 0);
      q_136 = ATgetArgument(t, 1);
      t = p_136;
      if(match_cons(t, sym_PrimT_3))
        {
          h_136 = ATgetArgument(t, 0);
          i_136 = ATgetArgument(t, 1);
          j_136 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, h_136, i_136, j_136), q_136);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          p_136 = ATgetArgument(t, 0);
          q_136 = ATgetArgument(t, 1);
          r_136 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, p_136, q_136, r_136);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm d_137 = NULL,e_137 = NULL,g_137 = NULL,i_137 = NULL,j_137 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      g_137 = ATgetArgument(t, 0);
      i_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_137;
  if(match_cons(t, sym_Build_1))
    {
      ATerm l_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_137;
  if(match_cons(t, sym_Seq_2))
    {
      j_137 = ATgetArgument(t, 0);
      e_137 = ATgetArgument(t, 1);
      t = j_137;
      if(match_cons(t, sym_Build_1))
        {
          d_137 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_137), e_137);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          j_137 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, j_137);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm z_116 (ATerm), ATerm t)
{
  static ATerm t_137 (ATerm t)
  {
    ATerm m_52 = t;
    int n_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_116(t);
        LocalPopChoice(n_52);
      }
    else
      {
        t = m_52;
        {
          ATerm n_137 = NULL,o_137 = NULL,p_137 = NULL,q_137 = NULL,r_137 = NULL,s_137 = NULL,z_7 = NULL;
          t = x_116(t);
          s_137 = t;
          if(match_cons(t, sym__2))
            {
              o_137 = ATgetArgument(t, 0);
              p_137 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_137);
          n_137 = t;
          t = o_137;
          t = z_116(t);
          q_137 = t;
          t = p_137;
          t = t_137(t);
          r_137 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_137, r_137);
          z_7 = t;
          t = SSLsetAnnotations(z_7, n_137);
          t = y_116(t);
        }
      }
    return(t);
  }
  t = t_137(t);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_52 = ATgetArgument(t, 0);
      if(((ATgetType(p_52) != AT_LIST) || !(ATisEmpty(p_52))))
        _fail(t);
      {
        ATerm q_52 = ATgetArgument(t, 1);
        if(((ATgetType(q_52) != AT_LIST) || !(ATisEmpty(q_52))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm s_138 = NULL,t_138 = NULL,u_138 = NULL,v_138 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_52 = ATgetArgument(t, 0);
      if(((ATgetType(r_52) == AT_LIST) && !(ATisEmpty(r_52))))
        {
          s_138 = ATgetFirst((ATermList) r_52);
          t_138 = (ATerm) ATgetNext((ATermList) r_52);
        }
      else
        _fail(t);
      {
        ATerm s_52 = ATgetArgument(t, 1);
        if(((ATgetType(s_52) == AT_LIST) && !(ATisEmpty(s_52))))
          {
            u_138 = ATgetFirst((ATermList) s_52);
            v_138 = (ATerm) ATgetNext((ATermList) s_52);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_138, u_138), (ATerm) ATmakeAppl(sym__2, t_138, v_138));
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm x_138 = NULL,c_139 = NULL;
  if(match_cons(t, sym__2))
    {
      x_138 = ATgetArgument(t, 0);
      c_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_139), x_138);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm d_139 = NULL,e_139 = NULL;
  if(match_cons(t, sym__2))
    {
      d_139 = ATgetArgument(t, 0);
      e_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_139), (ATerm) ATmakeAppl(sym_Match_1, e_139));
  return(t);
}
static ATerm v_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_52 = ATgetArgument(t, 0);
      if(((ATgetType(t_52) != AT_LIST) || !(ATisEmpty(t_52))))
        _fail(t);
      {
        ATerm u_52 = ATgetArgument(t, 1);
        if(((ATgetType(u_52) != AT_LIST) || !(ATisEmpty(u_52))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm l_139 = NULL,m_139 = NULL,n_139 = NULL,o_139 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_52 = ATgetArgument(t, 0);
      if(((ATgetType(w_52) == AT_LIST) && !(ATisEmpty(w_52))))
        {
          l_139 = ATgetFirst((ATermList) w_52);
          m_139 = (ATerm) ATgetNext((ATermList) w_52);
        }
      else
        _fail(t);
      {
        ATerm x_52 = ATgetArgument(t, 1);
        if(((ATgetType(x_52) == AT_LIST) && !(ATisEmpty(x_52))))
          {
            n_139 = ATgetFirst((ATermList) x_52);
            o_139 = (ATerm) ATgetNext((ATermList) x_52);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_139, n_139), (ATerm) ATmakeAppl(sym__2, m_139, o_139));
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm p_139 = NULL,q_139 = NULL;
  if(match_cons(t, sym__2))
    {
      p_139 = ATgetArgument(t, 0);
      q_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_139), p_139);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm r_139 = NULL,s_139 = NULL;
  if(match_cons(t, sym__2))
    {
      r_139 = ATgetArgument(t, 0);
      s_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, r_139), (ATerm) ATmakeAppl(sym_Match_1, s_139));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm b_138 = NULL,c_138 = NULL,d_138 = NULL,f_138 = NULL,g_138 = NULL,h_138 = NULL,i_138 = NULL,j_138 = NULL,k_138 = NULL,l_138 = NULL,m_138 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      f_138 = ATgetArgument(t, 0);
      j_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_138;
  if(match_cons(t, sym_Build_1))
    {
      g_138 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_138;
  if(match_cons(t, sym_Op_2))
    {
      h_138 = ATgetArgument(t, 0);
      i_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_138;
  if(match_cons(t, sym_Seq_2))
    {
      k_138 = ATgetArgument(t, 0);
      d_138 = ATgetArgument(t, 1);
      {
        ATerm r_138 = NULL;
        t = k_138;
        if(match_cons(t, sym_Match_1))
          {
            l_138 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_138;
        if(match_cons(t, sym_Op_2))
          {
            b_138 = ATgetArgument(t, 0);
            c_138 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_138;
        if((h_138 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, i_138, c_138);
        t = genzip_4_0(p_10, r_10, s_10, t_10, t);
        r_138 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_138), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, h_138, i_138)), d_138));
      }
    }
  else
    {
      ATerm k_139 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          k_138 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_138;
      if(match_cons(t, sym_Op_2))
        {
          l_138 = ATgetArgument(t, 0);
          m_138 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_138;
      if((h_138 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, i_138, m_138);
      t = genzip_4_0(v_10, y_10, z_10, c_11, t);
      k_139 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, k_139), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, h_138, i_138)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm o_140 = NULL,r_140 = NULL,s_140 = NULL,t_140 = NULL,u_140 = NULL,w_140 = NULL,x_140 = NULL,a_141 = NULL;
  r_140 = t;
  if(match_cons(t, sym_Seq_2))
    {
      s_140 = ATgetArgument(t, 0);
      w_140 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_140;
  if(match_cons(t, sym_Build_1))
    {
      t_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_140;
  if(match_cons(t, sym_Op_2))
    {
      u_140 = ATgetArgument(t, 0);
      {
        ATerm y_52 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = w_140;
  {
    ATerm z_52 = t;
    int a_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            x_140 = ATgetArgument(t, 0);
            {
              ATerm b_53 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(a_53);
        t = x_140;
        if(match_cons(t, sym_Match_1))
          {
            a_141 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_141;
        if(match_cons(t, sym_Op_2))
          {
            o_140 = ATgetArgument(t, 0);
            {
              ATerm d_53 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_140, o_140);
        {
          ATerm e_53 = t;
          if((PushChoice() == 0))
            {
              ATerm f_65 = NULL;
              if(match_cons(t, sym__2))
                {
                  f_65 = ATgetArgument(t, 0);
                  if((f_65 != ATgetArgument(t, 1)))
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
              t = e_53;
            }
        }
        t = term_r_17;
      }
    else
      {
        t = z_52;
        if(match_cons(t, sym_Match_1))
          {
            x_140 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_140;
        if(match_cons(t, sym_Op_2))
          {
            a_141 = ATgetArgument(t, 0);
            {
              ATerm j_53 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_140, a_141);
        {
          ATerm k_53 = t;
          if((PushChoice() == 0))
            {
              ATerm z_65 = NULL;
              if(match_cons(t, sym__2))
                {
                  z_65 = ATgetArgument(t, 0);
                  if((z_65 != ATgetArgument(t, 1)))
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
              t = k_53;
            }
        }
        t = term_r_17;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm o_113 (ATerm), ATerm t)
{
  static ATerm e_141 (ATerm t)
  {
    ATerm l_53 = t;
    int n_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_113(t);
        LocalPopChoice(n_53);
      }
    else
      {
        t = l_53;
        t = SRTS_one(e_141, t);
      }
    return(t);
  }
  t = e_141(t);
  return(t);
}
ATerm at_end_1_0 (ATerm m_121 (ATerm), ATerm t)
{
  static ATerm z_141 (ATerm t)
  {
    ATerm w_141 = NULL,x_141 = NULL,y_141 = NULL;
    y_141 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_141 = ATgetFirst((ATermList) t);
        x_141 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_66 = NULL,d_67 = NULL,c_8 = NULL;
          t = SSLgetAnnotations(y_141);
          t_66 = t;
          t = x_141;
          t = z_141(t);
          d_67 = t;
          t = (ATerm) ATinsert(CheckATermList(d_67), w_141);
          c_8 = t;
          t = SSLsetAnnotations(c_8, t_66);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_141;
        t = m_121(t);
      }
    return(t);
  }
  t = z_141(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_141 = NULL,h_141 = NULL,i_141 = NULL;
  g_141 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_141;
    }
  else
    {
      static ATerm d_11 (ATerm t)
      {
        t = not_null(i_141);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_141 = ATgetFirst((ATermList) t);
          if(((i_141 != NULL) && (i_141 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_141 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_141;
      t = at_end_1_0(d_11, t);
    }
  return(t);
}
static ATerm l_142 (ATerm d_142, ATerm t)
{
  ATerm e_142 = NULL;
  t = SSL_explode_term(d_142);
  if(match_cons(t, sym__2))
    {
      ATerm o_53 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_53) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_142;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_142 = NULL,h_142 = NULL,i_142 = NULL;
  i_142 = t;
  if(match_cons(t, sym__2))
    {
      g_142 = ATgetArgument(t, 0);
      h_142 = ATgetArgument(t, 1);
      {
        ATerm p_53 = t;
        int q_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm e_11 (ATerm t)
            {
              t = h_142;
              return(t);
            }
            t = g_142;
            t = at_end_1_0(e_11, t);
            LocalPopChoice(q_53);
          }
        else
          {
            t = p_53;
            t = l_142(i_142, t);
          }
      }
    }
  else
    {
      t = l_142(i_142, t);
    }
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm e_143 = NULL,f_143 = NULL,g_143 = NULL,h_143 = NULL,i_143 = NULL,j_143 = NULL,k_143 = NULL,l_143 = NULL,m_143 = NULL,n_143 = NULL,o_143 = NULL,p_143 = NULL,q_143 = NULL;
  e_143 = t;
  if(match_cons(t, sym_Let_2))
    {
      f_143 = ATgetArgument(t, 0);
      m_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_143;
  if(match_cons(t, sym_Let_2))
    {
      n_143 = ATgetArgument(t, 0);
      p_143 = ATgetArgument(t, 1);
      {
        ATerm u_143 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, f_143, n_143);
        t = conc_0_0(t);
        u_143 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, u_143, p_143);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          n_143 = ATgetArgument(t, 0);
          p_143 = ATgetArgument(t, 1);
          q_143 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = f_143;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_143 = ATgetFirst((ATermList) t);
          l_143 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_143;
      if(match_cons(t, sym_SDefT_4))
        {
          h_143 = ATgetArgument(t, 0);
          i_143 = ATgetArgument(t, 1);
          j_143 = ATgetArgument(t, 2);
          k_143 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = i_143;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_143;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_143;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_143;
      if(match_cons(t, sym_SVar_1))
        {
          o_143 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_143;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_143;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_143;
      if((h_143 != t))
        {
          _fail(t);
        }
      t = k_143;
      {
        ATerm t_53 = t;
        if((PushChoice() == 0))
          {
            static ATerm f_11 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm u_53 = ATgetArgument(t, 0);
                  if(match_cons(u_53, sym_SVar_1))
                    {
                      if((h_143 != ATgetArgument(u_53, 0)))
                        {
                          _fail(ATgetArgument(u_53, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm v_53 = ATgetArgument(t, 1);
                    if(((ATgetType(v_53) != AT_LIST) || !(ATisEmpty(v_53))))
                      _fail(t);
                  }
                  {
                    ATerm w_53 = ATgetArgument(t, 2);
                    if(((ATgetType(w_53) != AT_LIST) || !(ATisEmpty(w_53))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(f_11, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = t_53;
          }
      }
      t = k_143;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm d_144 = NULL,e_144 = NULL,f_144 = NULL,g_144 = NULL,h_144 = NULL,i_144 = NULL,k_144 = NULL,l_144 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      k_144 = ATgetArgument(t, 0);
      t = k_144;
      if(match_cons(t, sym_Seq_2))
        {
          i_144 = ATgetArgument(t, 0);
          e_144 = ATgetArgument(t, 1);
          t = i_144;
          if(match_cons(t, sym_Where_1))
            {
              d_144 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_144;
          if(match_cons(t, sym_Seq_2))
            {
              f_144 = ATgetArgument(t, 0);
              h_144 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_144;
          if(match_cons(t, sym_Build_1))
            {
              g_144 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, d_144, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_144), h_144)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              i_144 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, i_144);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          k_144 = ATgetArgument(t, 0);
          t = k_144;
          if(match_cons(t, sym_Test_1))
            {
              i_144 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, i_144);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              k_144 = ATgetArgument(t, 0);
              t = k_144;
              if(match_cons(t, sym_Not_1))
                {
                  i_144 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, i_144);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  k_144 = ATgetArgument(t, 0);
                  l_144 = ATgetArgument(t, 1);
                  t = l_144;
                  if((k_144 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      k_144 = ATgetArgument(t, 0);
                      l_144 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = l_144;
                  if((k_144 != t))
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
  ATerm a_145 = NULL,b_145 = NULL,c_145 = NULL,d_145 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      a_145 = ATgetArgument(t, 0);
      d_145 = ATgetArgument(t, 1);
      t = a_145;
      if(match_cons(t, sym_LChoice_2))
        {
          b_145 = ATgetArgument(t, 0);
          c_145 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, b_145, (ATerm) ATmakeAppl(sym_LChoice_2, c_145, d_145));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          a_145 = ATgetArgument(t, 0);
          d_145 = ATgetArgument(t, 1);
          t = a_145;
          if(match_cons(t, sym_Seq_2))
            {
              b_145 = ATgetArgument(t, 0);
              c_145 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, b_145, (ATerm) ATmakeAppl(sym_Seq_2, c_145, d_145));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              a_145 = ATgetArgument(t, 0);
              d_145 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_145;
          if(match_cons(t, sym_Choice_2))
            {
              b_145 = ATgetArgument(t, 0);
              c_145 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, b_145, (ATerm) ATmakeAppl(sym_Choice_2, c_145, d_145));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm r_145 = NULL,s_145 = NULL,t_145 = NULL,v_145 = NULL,w_145 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      v_145 = ATgetArgument(t, 0);
      w_145 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, v_145, w_145);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          v_145 = ATgetArgument(t, 0);
          t = v_145;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_145 = ATgetFirst((ATermList) t);
              s_145 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, r_145, (ATerm) ATmakeAppl(sym_LChoices_1, s_145));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_r_17;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              v_145 = ATgetArgument(t, 0);
              t = v_145;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  r_145 = ATgetFirst((ATermList) t);
                  s_145 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, r_145, (ATerm) ATmakeAppl(sym_Choices_1, s_145));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_r_17;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  v_145 = ATgetArgument(t, 0);
                  t = v_145;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      r_145 = ATgetFirst((ATermList) t);
                      s_145 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, r_145, (ATerm) ATmakeAppl(sym_Seqs_1, s_145));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_l_17;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      v_145 = ATgetArgument(t, 0);
                      w_145 = ATgetArgument(t, 1);
                      t_145 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, w_145, (ATerm) ATmakeAppl(sym_Op_2, term_w_35, (ATerm) ATinsert(ATinsert(ATempty, t_145), v_145)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          v_145 = ATgetArgument(t, 0);
                          w_145 = ATgetArgument(t, 1);
                          t_145 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, t_145)), v_145), (ATerm) ATmakeAppl(sym_Build_1, w_145)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              v_145 = ATgetArgument(t, 0);
                              w_145 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_145, (ATerm) ATmakeAppl(sym_Match_1, w_145));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  v_145 = ATgetArgument(t, 0);
                                  w_145 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_145), w_145);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      v_145 = ATgetArgument(t, 0);
                                      w_145 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_145), v_145);
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
static ATerm h_11 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm j_147 = NULL,k_147 = NULL,l_147 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      j_147 = ATgetArgument(t, 0);
      t = j_147;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_r_17;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          j_147 = ATgetArgument(t, 0);
          t = j_147;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_l_17;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              j_147 = ATgetArgument(t, 0);
              k_147 = ATgetArgument(t, 1);
              t = j_147;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_r_17;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  j_147 = ATgetArgument(t, 0);
                  k_147 = ATgetArgument(t, 1);
                  t = k_147;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_r_17;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      j_147 = ATgetArgument(t, 0);
                      k_147 = ATgetArgument(t, 1);
                      t = k_147;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_r_17;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          j_147 = ATgetArgument(t, 0);
                          t = j_147;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_r_17;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              j_147 = ATgetArgument(t, 0);
                              t = j_147;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_r_17;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  j_147 = ATgetArgument(t, 0);
                                  k_147 = ATgetArgument(t, 1);
                                  t = k_147;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_r_17;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      j_147 = ATgetArgument(t, 0);
                                      k_147 = ATgetArgument(t, 1);
                                      t = k_147;
                                      t = fetch_1_0(h_11, t);
                                      t = term_r_17;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          j_147 = ATgetArgument(t, 0);
                                          k_147 = ATgetArgument(t, 1);
                                          t = k_147;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = j_147;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = k_147;
                                                }
                                              else
                                                {
                                                  t = j_147;
                                                }
                                            }
                                          else
                                            {
                                              t = j_147;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = k_147;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              j_147 = ATgetArgument(t, 0);
                                              k_147 = ATgetArgument(t, 1);
                                              t = k_147;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = j_147;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = k_147;
                                                    }
                                                  else
                                                    {
                                                      t = j_147;
                                                    }
                                                }
                                              else
                                                {
                                                  t = j_147;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = k_147;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  j_147 = ATgetArgument(t, 0);
                                                  t = j_147;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_r_17;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      j_147 = ATgetArgument(t, 0);
                                                      k_147 = ATgetArgument(t, 1);
                                                      l_147 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = l_147;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, j_147, k_147);
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
  ATerm o_148 = NULL,q_148 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      q_148 = ATgetArgument(t, 0);
      t = q_148;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_l_17;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          q_148 = ATgetArgument(t, 0);
          t = q_148;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_r_17;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              q_148 = ATgetArgument(t, 0);
              o_148 = ATgetArgument(t, 1);
              t = o_148;
              if(match_cons(t, sym_Id_0))
                {
                  t = q_148;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = o_148;
                    }
                  else
                    {
                      t = q_148;
                    }
                }
              else
                {
                  t = q_148;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = o_148;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  q_148 = ATgetArgument(t, 0);
                  o_148 = ATgetArgument(t, 1);
                  t = q_148;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_l_17;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      q_148 = ATgetArgument(t, 0);
                      o_148 = ATgetArgument(t, 1);
                      t = o_148;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_l_17;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          q_148 = ATgetArgument(t, 0);
                          o_148 = ATgetArgument(t, 1);
                          t = o_148;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_l_17;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              q_148 = ATgetArgument(t, 0);
                              t = q_148;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_l_17;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  q_148 = ATgetArgument(t, 0);
                                  t = q_148;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_l_17;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      q_148 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = q_148;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_l_17;
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
  ATerm x_53 = t;
  int y_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(y_53);
    }
  else
    {
      t = x_53;
      {
        ATerm a_54 = t;
        int c_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(c_54);
          }
        else
          {
            t = a_54;
            {
              ATerm d_54 = t;
              int f_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(f_54);
                }
              else
                {
                  t = d_54;
                  {
                    ATerm g_54 = t;
                    int h_54 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(h_54);
                      }
                    else
                      {
                        t = g_54;
                        {
                          ATerm j_54 = t;
                          int k_54 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(k_54);
                            }
                          else
                            {
                              t = j_54;
                              {
                                ATerm l_54 = t;
                                int m_54 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm f_149 = NULL,g_149 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        f_149 = ATgetArgument(t, 0);
                                        g_149 = ATgetArgument(t, 1);
                                        t = f_149;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = g_149;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            f_149 = ATgetArgument(t, 0);
                                            g_149 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = f_149;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = g_149;
                                      }
                                    LocalPopChoice(m_54);
                                  }
                                else
                                  {
                                    t = l_54;
                                    {
                                      ATerm o_54 = t;
                                      int p_54 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(p_54);
                                        }
                                      else
                                        {
                                          t = o_54;
                                          {
                                            ATerm q_54 = t;
                                            int s_54 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(s_54);
                                              }
                                            else
                                              {
                                                t = q_54;
                                                {
                                                  ATerm t_54 = t;
                                                  int u_54 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(u_54);
                                                    }
                                                  else
                                                    {
                                                      t = t_54;
                                                      {
                                                        ATerm v_54 = t;
                                                        int w_54 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(w_54);
                                                          }
                                                        else
                                                          {
                                                            t = v_54;
                                                            {
                                                              ATerm x_54 = t;
                                                              int d_55 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(d_55);
                                                                }
                                                              else
                                                                {
                                                                  t = x_54;
                                                                  {
                                                                    ATerm f_55 = t;
                                                                    int g_55 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(g_55);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = f_55;
                                                                        {
                                                                          ATerm h_55 = t;
                                                                          int i_55 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(i_55);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = h_55;
                                                                              {
                                                                                ATerm j_55 = t;
                                                                                int l_55 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(l_55);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = j_55;
                                                                                    {
                                                                                      ATerm j_149 = NULL,k_149 = NULL,l_149 = NULL,m_149 = NULL;
                                                                                      k_149 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          l_149 = ATgetArgument(t, 0);
                                                                                          m_149 = ATgetArgument(t, 1);
                                                                                          t = l_149;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              j_149 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = k_149;
                                                                                          t = z_13(j_149, m_149, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              l_149 = ATgetArgument(t, 0);
                                                                                              m_149 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = l_149;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = m_149;
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
ATerm repeat_2_0 (ATerm f_118 (ATerm), ATerm g_118 (ATerm), ATerm t)
{
  static ATerm q_149 (ATerm t)
  {
    ATerm o_55 = t;
    int p_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_118(t);
        t = q_149(t);
        LocalPopChoice(p_55);
      }
    else
      {
        t = o_55;
        t = g_118(t);
      }
    return(t);
  }
  t = q_149(t);
  return(t);
}
ATerm downup_1_0 (ATerm m_112 (ATerm), ATerm t)
{
  t = m_112(t);
  {
    static ATerm i_11 (ATerm t)
    {
      t = downup_1_0(m_112, t);
      return(t);
    }
    t = SRTS_all(i_11, t);
  }
  t = m_112(t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  t = downup_1_0(k_11, t);
  {
    ATerm q_55 = t;
    int r_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        LocalPopChoice(r_55);
      }
    else
      {
        t = q_55;
      }
  }
  return(t);
}
static ATerm k_11 (ATerm t)
{
  t = repeat_2_0(Simplify_0_0, _id, t);
  return(t);
}
static ATerm m_11 (ATerm t)
{
  t = inline_sdef_0_0(t);
  {
    ATerm s_55 = t;
    int u_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        LocalPopChoice(u_55);
      }
    else
      {
        t = s_55;
      }
  }
  return(t);
}
ATerm inline_sdefs_0_0 (ATerm t)
{
  t = map_1_0(j_11, t);
  t = map_1_0(m_11, t);
  return(t);
}
static ATerm f_15 (ATerm y_54, ATerm z_54, ATerm t)
{
  ATerm z_149 = NULL;
  t = SSL_fputc(y_54, z_54);
  z_149 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_149);
  return(t);
}
static ATerm g_15 (ATerm a_33, ATerm b_33, ATerm t)
{
  ATerm a_150 = NULL;
  t = SSL_write_term_to_stream_text(a_33, b_33);
  a_150 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_150);
  return(t);
}
static ATerm i_15 (ATerm u_119 (ATerm), ATerm r_241, ATerm g_33, ATerm t)
{
  ATerm b_150 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_241, term_w_55);
  t = m_15(t);
  b_150 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_150, g_33);
  t = u_119(t);
  t = fclose_0_0(t);
  t = g_33;
  return(t);
}
static ATerm h_15 (ATerm w_32, ATerm x_32, ATerm t)
{
  ATerm c_150 = NULL;
  t = SSL_write_term_to_stream_baf(w_32, x_32);
  c_150 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_150);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm j_150 = NULL,k_150 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_55 = ATgetArgument(t, 0);
      if(match_cons(x_55, sym_Stream_1))
        {
          j_150 = ATgetArgument(x_55, 0);
        }
      else
        _fail(t);
      k_150 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_15(j_150, k_150, t);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm l_150 = NULL,m_150 = NULL,n_150 = NULL,o_150 = NULL,p_150 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_55 = ATgetArgument(t, 0);
      if(match_cons(y_55, sym_Stream_1))
        {
          o_150 = ATgetArgument(y_55, 0);
        }
      else
        _fail(t);
      p_150 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_15(o_150, p_150, t);
  l_150 = t;
  t = term_z_55;
  m_150 = t;
  t = l_150;
  if(match_cons(t, sym_Stream_1))
    {
      n_150 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_55, l_150);
  t = f_15(m_150, n_150, t);
  return(t);
}
ATerm output_1_0 (ATerm f_139 (ATerm), ATerm t)
{
  ATerm d_150 = NULL,e_150 = NULL;
  t = f_139(t);
  e_150 = t;
  {
    ATerm a_56 = t;
    int b_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_150 = NULL,g_150 = NULL;
        t = term_c_56;
        f_150 = t;
        t = term_d_56;
        g_150 = t;
        t = term_e_56;
        t = t_15(f_150, g_150, t);
        LocalPopChoice(b_56);
      }
    else
      {
        t = a_56;
        t = term_g_56;
      }
  }
  d_150 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_150, e_150);
  {
    ATerm h_56 = t;
    int i_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_150 = NULL,i_150 = NULL;
        t = term_c_56;
        h_150 = t;
        t = term_j_56;
        i_150 = t;
        t = term_k_56;
        t = t_15(h_150, i_150, t);
        t = (ATerm) ATmakeAppl(sym__2, d_150, e_150);
        LocalPopChoice(i_56);
        if(match_cons(t, sym__2))
          {
            ATerm l_56 = ATgetArgument(t, 0);
            ATerm o_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_15(o_11, d_150, e_150, t);
      }
    else
      {
        t = h_56;
        if(match_cons(t, sym__2))
          {
            ATerm p_56 = ATgetArgument(t, 0);
            ATerm q_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_15(r_11, d_150, e_150, t);
      }
  }
  return(t);
}
static ATerm d_151 (ATerm x_150, ATerm t)
{
  t = SSL_fclose(x_150);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_151 = NULL,b_151 = NULL;
  b_151 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_151 = ATgetArgument(t, 0);
      {
        ATerm r_56 = t;
        int s_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_151);
            LocalPopChoice(s_56);
          }
        else
          {
            t = r_56;
            t = d_151(b_151, t);
          }
      }
    }
  else
    {
      t = d_151(b_151, t);
    }
  return(t);
}
static ATerm j_15 (ATerm c_33, ATerm t)
{
  t = SSL_read_term_from_stream(c_33);
  return(t);
}
static ATerm k_15 (ATerm r_53, ATerm s_53, ATerm t)
{
  t = SSL_strcat(r_53, s_53);
  return(t);
}
static ATerm l_15 (ATerm a_55, ATerm b_55, ATerm t)
{
  ATerm e_151 = NULL;
  t = SSL_fopen(a_55, b_55);
  e_151 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_151);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_151 = NULL;
  t = SSL_stdin_stream();
  f_151 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_151);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_151 = NULL;
  t = SSL_stdout_stream();
  g_151 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_151);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_151 = NULL;
  t = SSL_stderr_stream();
  h_151 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_151);
  return(t);
}
static ATerm o_152 (ATerm n_151, ATerm t)
{
  ATerm o_151 = NULL;
  t = SSL_explode_term(n_151);
  if(match_cons(t, sym__2))
    {
      ATerm t_56 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_56) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_56 = ATgetArgument(t, 1);
        if(((ATgetType(v_56) == AT_LIST) && !(ATisEmpty(v_56))))
          {
            o_151 = ATgetFirst((ATermList) v_56);
            {
              ATerm w_56 = (ATerm) ATgetNext((ATermList) v_56);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_151;
  if(match_cons(t, sym_stderr_0))
    {
      t = o_151;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_151;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_151;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm p_152 (ATerm r_151, ATerm s_151, ATerm t_151, ATerm t)
{
  ATerm u_151 = NULL,v_151 = NULL,w_151 = NULL,z_151 = NULL,d_10 = NULL;
  t = SSLgetAnnotations(t_151);
  w_151 = t;
  t = r_151;
  if(match_cons(t, sym_Path_1))
    {
      z_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_151, s_151);
  d_10 = t;
  t = SSLsetAnnotations(d_10, w_151);
  if(match_cons(t, sym__2))
    {
      u_151 = ATgetArgument(t, 0);
      v_151 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_15(u_151, v_151, t);
  return(t);
}
static ATerm q_152 (ATerm b_152, ATerm c_152, ATerm d_152, ATerm t)
{
  ATerm e_152 = NULL,f_152 = NULL,g_152 = NULL,j_152 = NULL,e_10 = NULL;
  t = SSLgetAnnotations(d_152);
  g_152 = t;
  t = SSL_is_string(b_152);
  j_152 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_152, c_152);
  e_10 = t;
  t = SSLsetAnnotations(e_10, g_152);
  if(match_cons(t, sym__2))
    {
      e_152 = ATgetArgument(t, 0);
      f_152 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_15(e_152, f_152, t);
  return(t);
}
static ATerm m_15 (ATerm t)
{
  ATerm l_152 = NULL,m_152 = NULL,n_152 = NULL;
  l_152 = t;
  if(match_cons(t, sym__2))
    {
      m_152 = ATgetArgument(t, 0);
      n_152 = ATgetArgument(t, 1);
      {
        ATerm x_56 = t;
        int y_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_152(l_152, t);
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
                  t = p_152(m_152, n_152, l_152, t);
                  LocalPopChoice(a_57);
                }
              else
                {
                  t = z_56;
                  t = q_152(m_152, n_152, l_152, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_152(l_152, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_152 = NULL,t_152 = NULL,u_152 = NULL,z_152 = NULL;
  z_152 = t;
  {
    ATerm b_57 = t;
    int c_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_152, term_d_57);
        t = m_15(t);
        LocalPopChoice(c_57);
      }
    else
      {
        t = b_57;
        {
          ATerm n_68 = NULL,o_68 = NULL;
          t = term_e_57;
          o_68 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_e_57, z_152);
          t = k_15(o_68, z_152, t);
          n_68 = t;
          t = SSL_perror(n_68);
          _fail(t);
        }
      }
  }
  t_152 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_152 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_15(u_152, t);
  s_152 = t;
  t = t_152;
  t = fclose_0_0(t);
  t = s_152;
  return(t);
}
ATerm input_1_0 (ATerm g_139 (ATerm), ATerm t)
{
  ATerm f_57 = t;
  int g_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_153 = NULL,d_153 = NULL;
      t = term_c_56;
      c_153 = t;
      t = term_h_57;
      d_153 = t;
      t = term_i_57;
      t = t_15(c_153, d_153, t);
      LocalPopChoice(g_57);
    }
  else
    {
      t = f_57;
      t = term_k_57;
    }
  t = ReadFromFile_0_0(t);
  t = g_139(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_153 = NULL,f_153 = NULL,g_153 = NULL,h_153 = NULL,i_153 = NULL;
  e_153 = t;
  t = term_l_57;
  t = whoami_0_0(t);
  f_153 = t;
  t = term_m_57;
  h_153 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_57), f_153), term_n_57);
  i_153 = t;
  t = SSL_printnl(h_153, i_153);
  t = term_u_14;
  g_153 = t;
  t = SSL_exit(g_153);
  t = e_153;
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm k_153 = NULL;
  k_153 = t;
  if(match_string(t, "-k"))
    {
      t = k_153;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_153;
    }
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm l_153 = NULL,m_153 = NULL,n_153 = NULL;
  l_153 = t;
  t = SSL_string_to_int(l_153);
  m_153 = t;
  t = term_p_57;
  n_153 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_57, m_153);
  t = w_15(n_153, m_153, t);
  t = l_153;
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = term_q_57;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_11, t_11, u_11, t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm p_153 = NULL;
  p_153 = t;
  if(match_string(t, "-S"))
    {
      t = p_153;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_153;
    }
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm q_153 = NULL,r_153 = NULL;
  t = term_t_57;
  q_153 = t;
  t = term_g_50;
  r_153 = t;
  t = term_u_57;
  t = w_15(q_153, r_153, t);
  t = term_v_57;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = term_x_57;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm s_153 = NULL,t_153 = NULL,u_153 = NULL;
  s_153 = t;
  t = SSL_string_to_int(s_153);
  t_153 = t;
  t = term_t_57;
  u_153 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_57, t_153);
  t = w_15(u_153, t_153, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_153);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = term_y_57;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm v_153 = NULL,w_153 = NULL;
  t = term_z_57;
  v_153 = t;
  t = term_l_57;
  w_153 = t;
  t = term_a_58;
  t = w_15(v_153, w_153, t);
  t = term_b_58;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_c_58;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_58 = t;
  int e_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_11, w_11, x_11, t);
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
            t = ArgOption_3_0(y_11, a_12, b_12, t);
            LocalPopChoice(g_58);
          }
        else
          {
            t = f_58;
            t = Option_3_0(d_12, e_12, i_12, t);
          }
      }
    }
  return(t);
}
static ATerm w_15 (ATerm r_57, ATerm s_57, ATerm t)
{
  ATerm x_153 = NULL,y_153 = NULL;
  t = term_c_56;
  x_153 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_56, r_57, s_57);
  t = lookup_table_0_1(x_153, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_153 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(r_57, s_57, y_153, t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_56, r_57, s_57);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm c_154 = NULL,d_154 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_154 = NULL,f_154 = NULL,g_154 = NULL;
      t = term_l_57;
      t = e_0(t);
      e_154 = t;
      t = term_h_58;
      f_154 = t;
      t = term_i_58;
      g_154 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_58, term_i_58, e_154);
      t = u_15(f_154, g_154, e_154, t);
      _fail(t);
    }
  else
    {
      ATerm j_154 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_154 = ATgetFirst((ATermList) t);
          d_154 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_154;
      t = b_0(t);
      t = term_l_57;
      t = c_0(t);
      j_154 = t;
      t = (ATerm) ATinsert(CheckATermList(d_154), j_154);
    }
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm l_154 = NULL;
  l_154 = t;
  if(match_string(t, "-o"))
    {
      t = l_154;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_154;
    }
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm m_154 = NULL,n_154 = NULL;
  m_154 = t;
  t = term_d_56;
  n_154 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_56, m_154);
  t = w_15(n_154, m_154, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_154);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = term_k_58;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_12, k_12, l_12, t);
  return(t);
}
static ATerm u_15 (ATerm k_37, ATerm m_37, ATerm j_37, ATerm t)
{
  ATerm p_154 = NULL,q_154 = NULL,r_154 = NULL,s_154 = NULL,t_154 = NULL;
  p_154 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_37, m_37);
  {
    ATerm l_58 = t;
    int n_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_58 = ATgetArgument(t, 0);
            ATerm p_58 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_37, m_37);
        t = t_15(k_37, m_37, t);
        LocalPopChoice(n_58);
      }
    else
      {
        t = l_58;
        t = (ATerm) ATempty;
      }
  }
  q_154 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_37, m_37, (ATerm) ATinsert(CheckATermList(q_154), j_37));
  t = lookup_table_0_1(k_37, t);
  t_154 = t;
  t = (ATerm) ATinsert(CheckATermList(q_154), j_37);
  r_154 = t;
  t = t_154;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_154 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(m_37, r_154, s_154, t);
  t = p_154;
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm a_155 = NULL,b_155 = NULL,c_155 = NULL,d_155 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_155 = NULL,f_155 = NULL,g_155 = NULL;
      t = term_l_57;
      t = l_0(t);
      e_155 = t;
      t = term_h_58;
      f_155 = t;
      t = term_i_58;
      g_155 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_58, term_i_58, e_155);
      t = u_15(f_155, g_155, e_155, t);
      _fail(t);
    }
  else
    {
      ATerm k_155 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_155 = ATgetFirst((ATermList) t);
          b_155 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_155;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_155 = ATgetFirst((ATermList) t);
          d_155 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_155;
      t = i_0(t);
      t = c_155;
      t = j_0(t);
      k_155 = t;
      t = (ATerm) ATinsert(CheckATermList(d_155), k_155);
    }
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm m_155 = NULL;
  m_155 = t;
  if(match_string(t, "-i"))
    {
      t = m_155;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_155;
    }
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm n_155 = NULL,o_155 = NULL;
  n_155 = t;
  t = term_h_57;
  o_155 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_57, n_155);
  t = w_15(o_155, n_155, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_155);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  t = term_q_58;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_12, o_12, p_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_155 = NULL,q_155 = NULL,r_155 = NULL,s_155 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_57;
  t = whoami_0_0(t);
  p_155 = t;
  t = term_m_57;
  r_155 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_58), p_155);
  s_155 = t;
  t = SSL_printnl(r_155, s_155);
  t = term_u_14;
  q_155 = t;
  t = SSL_exit(q_155);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm t_155 = NULL,u_155 = NULL;
  t = term_c_56;
  t_155 = t;
  t = term_s_58;
  u_155 = t;
  t = term_t_58;
  t = t_15(t_155, u_155, t);
  return(t);
}
static ATerm n_15 (ATerm g_34, ATerm h_34, ATerm t)
{
  ATerm u_58 = t;
  int v_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_34, h_34);
      LocalPopChoice(v_58);
    }
  else
    {
      t = u_58;
      t = SSL_addr(g_34, h_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_126 (ATerm), ATerm t_126 (ATerm), ATerm t)
{
  ATerm w_155 = NULL,x_155 = NULL,y_155 = NULL;
  w_155 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_155;
      t = s_126(t);
    }
  else
    {
      ATerm b_156 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_155 = ATgetFirst((ATermList) t);
          y_155 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_155;
      t = foldr_2_0(s_126, t_126, t);
      b_156 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_155, b_156);
      t = t_126(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_g_50;
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm u_68 = NULL,d_69 = NULL;
  if(match_cons(t, sym__2))
    {
      u_68 = ATgetArgument(t, 0);
      d_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(u_68, d_69, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_156 = NULL,q_68 = NULL,r_68 = NULL;
  t = times_0_0(t);
  r_68 = t;
  t = SSL_explode_term(r_68);
  if(match_cons(t, sym__2))
    {
      ATerm x_58 = ATgetArgument(t, 0);
      q_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_68;
  t = foldr_2_0(q_12, s_12, t);
  e_156 = t;
  t = SSL_TicksToSeconds(e_156);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_156 = NULL,q_156 = NULL,r_156 = NULL;
  p_156 = t;
  if(match_cons(t, sym__2))
    {
      q_156 = ATgetArgument(t, 0);
      r_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_58 = t;
    int b_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_156;
        if((q_156 != t))
          {
            _fail(t);
          }
        t = p_156;
        LocalPopChoice(b_59);
      }
    else
      {
        t = z_58;
        t = (ATerm) ATmakeAppl(sym__2, q_156, r_156);
        {
          ATerm d_59 = t;
          int g_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_156, r_156);
              LocalPopChoice(g_59);
            }
          else
            {
              t = d_59;
              t = SSL_gtr(q_156, r_156);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, q_156, r_156);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_136 (ATerm), ATerm t)
{
  ATerm v_156 = NULL;
  v_156 = t;
  {
    ATerm h_59 = t;
    int i_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_156 = NULL,y_156 = NULL,z_156 = NULL;
        t = term_c_56;
        y_156 = t;
        t = term_t_57;
        z_156 = t;
        t = term_j_59;
        t = t_15(y_156, z_156, t);
        x_156 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_156, term_u_14);
        t = geq_0_0(t);
        t = v_156;
        t = l_136(t);
        LocalPopChoice(i_59);
      }
    else
      {
        t = h_59;
        t = v_156;
      }
  }
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm b_157 = NULL,c_157 = NULL,e_157 = NULL,f_157 = NULL;
  t = run_time_0_0(t);
  b_157 = t;
  t = term_l_57;
  t = whoami_0_0(t);
  c_157 = t;
  t = term_m_57;
  e_157 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_59), b_157), term_k_59), c_157);
  f_157 = t;
  t = SSL_printnl(e_157, f_157);
  t = (ATerm) ATmakeAppl(sym__2, term_m_57, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_59), b_157), term_k_59), c_157));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_157 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_50;
  g_157 = t;
  t = SSL_exit(g_157);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm r_157 = NULL,s_157 = NULL;
  s_157 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = s_157;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          r_157 = ATgetArgument(t, 0);
          {
            ATerm g_70 = NULL,j_10 = NULL;
            t = SSLgetAnnotations(s_157);
            g_70 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, r_157);
            j_10 = t;
            t = SSLsetAnnotations(j_10, g_70);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = s_157;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_138 (ATerm), ATerm t)
{
  ATerm r_59 = t;
  int s_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_157 = NULL,k_157 = NULL;
      t = term_c_56;
      j_157 = t;
      t = term_t_59;
      k_157 = t;
      t = term_u_59;
      t = t_15(j_157, k_157, t);
      LocalPopChoice(s_59);
    }
  else
    {
      t = r_59;
      t = fetch_1_0(u_12, t);
    }
  t = w_138(t);
  return(t);
}
static ATerm x_15 (ATerm h_41, ATerm i_41, ATerm j_41, ATerm t)
{
  ATerm u_157 = NULL;
  t = SSL_hashtable_put(j_41, h_41, i_41);
  u_157 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_157);
  return(t);
}
ATerm lookup_table_0_1 (ATerm b_39, ATerm t)
{
  ATerm d_158 = NULL;
  t = table_hashtable_0_0(t);
  d_158 = t;
  {
    ATerm v_59 = t;
    int w_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_70 = NULL;
        t = d_158;
        if(match_cons(t, sym_Hashtable_1))
          {
            m_70 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = y_15(b_39, m_70, t);
        LocalPopChoice(w_59);
      }
    else
      {
        t = v_59;
        {
          ATerm v_70 = NULL;
          t = b_39;
          t = table_create_0_0(t);
          t = d_158;
          if(match_cons(t, sym_Hashtable_1))
            {
              v_70 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_15(b_39, v_70, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm q_41, ATerm r_41, ATerm t)
{
  ATerm g_158 = NULL;
  t = SSL_hashtable_create(q_41, r_41);
  g_158 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_158);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm h_158 = NULL,i_158 = NULL,j_158 = NULL,l_158 = NULL,m_158 = NULL;
  h_158 = t;
  t = term_x_59;
  l_158 = t;
  t = term_y_59;
  m_158 = t;
  t = h_158;
  t = new_hashtable_0_2(l_158, m_158, t);
  i_158 = t;
  t = h_158;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_158 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(h_158, i_158, j_158, t);
  t = h_158;
  return(t);
}
static ATerm q_15 (ATerm m_41, ATerm n_41, ATerm t)
{
  ATerm o_158 = NULL;
  t = SSL_hashtable_remove(n_41, m_41);
  o_158 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_158);
  return(t);
}
static ATerm r_15 (ATerm t_41, ATerm t)
{
  ATerm p_158 = NULL;
  t = SSL_hashtable_destroy(t_41);
  p_158 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_158);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm q_158 = NULL;
  t = SSL_table_hashtable();
  q_158 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_158);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm r_158 = NULL,s_158 = NULL,t_158 = NULL,u_158 = NULL;
  r_158 = t;
  t = table_hashtable_0_0(t);
  s_158 = t;
  t = lookup_table_0_1(r_158, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_158 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_15(u_158, t);
  t = s_158;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_158 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_15(r_158, t_158, t);
  t = r_158;
  return(t);
}
ATerm map_1_0 (ATerm v_120 (ATerm), ATerm t)
{
  static ATerm j_159 (ATerm t)
  {
    ATerm g_159 = NULL,h_159 = NULL,i_159 = NULL;
    g_159 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_159;
      }
    else
      {
        ATerm d_71 = NULL,g_71 = NULL,h_71 = NULL,n_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_159 = ATgetFirst((ATermList) t);
            i_159 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_159);
        d_71 = t;
        t = h_159;
        t = v_120(t);
        g_71 = t;
        t = i_159;
        t = j_159(t);
        h_71 = t;
        t = (ATerm) ATinsert(CheckATermList(h_71), g_71);
        n_10 = t;
        t = SSLsetAnnotations(n_10, d_71);
      }
    return(t);
  }
  t = j_159(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm m_159 = NULL,n_159 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_159 = ATgetFirst((ATermList) t);
      n_159 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_159 = NULL,s_159 = NULL;
        static ATerm v_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_159)), not_null(s_159));
          return(t);
        }
        t = n_159;
        t = h_0(t);
        if(((r_159 != NULL) && (r_159 != t)))
          _fail(t);
        else
          r_159 = t;
        t = m_159;
        t = f_0(t);
        if(((s_159 != NULL) && (s_159 != t)))
          _fail(t);
        else
          s_159 = t;
        t = n_159;
        t = reverse_acc_2_0(f_0, v_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_57;
      t = h_0(t);
    }
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm y_159 = NULL,z_159 = NULL,a_160 = NULL,u_10 = NULL;
  a_160 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_159 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_160);
  y_159 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_159);
  u_10 = t;
  t = SSLsetAnnotations(u_10, y_159);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm c_160 = NULL;
  c_160 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_160), term_z_59);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_159 = NULL,v_159 = NULL;
  ATerm a_60 = t;
  int b_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_159 = NULL,x_159 = NULL;
      t = term_c_56;
      w_159 = t;
      t = term_s_58;
      x_159 = t;
      t = term_t_58;
      t = t_15(w_159, x_159, t);
      LocalPopChoice(b_60);
    }
  else
    {
      t = a_60;
      t = fetch_1_0(x_12, t);
    }
  t = term_c_60;
  t = echo_0_0(t);
  t = term_h_58;
  u_159 = t;
  t = term_i_58;
  v_159 = t;
  t = term_d_60;
  t = t_15(u_159, v_159, t);
  t = reverse_acc_2_0(_id, y_12, t);
  t = map_1_0(c_13, t);
  return(t);
}
ATerm fetch_1_0 (ATerm f_121 (ATerm), ATerm t)
{
  static ATerm z_160 (ATerm t)
  {
    ATerm w_160 = NULL,x_160 = NULL,y_160 = NULL;
    w_160 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_160 = ATgetFirst((ATermList) t);
        y_160 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_60 = t;
      int f_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_71 = NULL,a_72 = NULL,a_11 = NULL;
          t = SSLgetAnnotations(w_160);
          w_71 = t;
          t = x_160;
          t = f_121(t);
          a_72 = t;
          t = (ATerm) ATinsert(CheckATermList(y_160), a_72);
          a_11 = t;
          t = SSLsetAnnotations(a_11, w_71);
          LocalPopChoice(f_60);
        }
      else
        {
          t = e_60;
          {
            ATerm k_72 = NULL,o_72 = NULL,b_11 = NULL;
            t = SSLgetAnnotations(w_160);
            k_72 = t;
            t = y_160;
            t = z_160(t);
            o_72 = t;
            t = (ATerm) ATinsert(CheckATermList(o_72), x_160);
            b_11 = t;
            t = SSLsetAnnotations(b_11, k_72);
          }
        }
    }
    return(t);
  }
  t = z_160(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_161 = NULL,e_161 = NULL,f_161 = NULL;
  d_161 = t;
  {
    ATerm g_60 = t;
    int h_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_161;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_60 = ATgetFirst((ATermList) t);
                ATerm j_60 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_161;
          }
        LocalPopChoice(h_60);
      }
    else
      {
        t = g_60;
        t = (ATerm) ATinsert(ATempty, d_161);
      }
  }
  e_161 = t;
  t = term_g_56;
  f_161 = t;
  t = SSL_printnl(f_161, e_161);
  t = d_161;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm j_161 = NULL,k_161 = NULL;
  t = term_c_56;
  j_161 = t;
  t = term_s_58;
  k_161 = t;
  t = term_t_58;
  t = t_15(j_161, k_161, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm y_15 (ATerm k_41, ATerm l_41, ATerm t)
{
  t = SSL_hashtable_get(l_41, k_41);
  return(t);
}
static ATerm t_15 (ATerm i_39, ATerm j_39, ATerm t)
{
  ATerm l_161 = NULL;
  t = lookup_table_0_1(i_39, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_161 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_15(j_39, l_161, t);
  return(t);
}
static ATerm m_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_13 (ATerm t)
{
  ATerm n_161 = NULL,o_161 = NULL;
  t = term_k_60;
  n_161 = t;
  t = term_l_57;
  o_161 = t;
  t = term_l_60;
  t = w_15(n_161, o_161, t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  t = term_m_60;
  return(t);
}
static ATerm r_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm p_161 = NULL,q_161 = NULL,r_161 = NULL,s_161 = NULL;
  t = term_k_60;
  r_161 = t;
  t = term_l_57;
  s_161 = t;
  t = term_l_60;
  t = w_15(r_161, s_161, t);
  t = term_n_60;
  p_161 = t;
  t = term_l_57;
  q_161 = t;
  t = term_o_60;
  t = w_15(p_161, q_161, t);
  t = term_p_60;
  return(t);
}
static ATerm u_13 (ATerm t)
{
  t = term_q_60;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_60 = t;
  int s_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_13, p_13, q_13, t);
      LocalPopChoice(s_60);
    }
  else
    {
      t = r_60;
      t = Option_3_0(r_13, s_13, u_13, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_96 (ATerm), ATerm a_97 (ATerm), ATerm t)
{
  ATerm t_161 = NULL,u_161 = NULL,v_161 = NULL,w_161 = NULL,x_161 = NULL,y_161 = NULL,g_11 = NULL;
  y_161 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_161 = ATgetFirst((ATermList) t);
      v_161 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_161);
  t_161 = t;
  t = u_161;
  t = z_96(t);
  w_161 = t;
  t = v_161;
  t = a_97(t);
  x_161 = t;
  t = (ATerm) ATinsert(CheckATermList(x_161), w_161);
  g_11 = t;
  t = SSLsetAnnotations(g_11, t_161);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_140 (ATerm), ATerm t)
{
  ATerm d_162 = NULL,e_162 = NULL,f_162 = NULL,g_162 = NULL,i_162 = NULL,j_162 = NULL,n_11 = NULL;
  d_162 = t;
  {
    ATerm t_60 = t;
    int u_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_60;
        t = z_140(t);
        LocalPopChoice(u_60);
      }
    else
      {
        t = t_60;
      }
  }
  t = d_162;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_162 = ATgetFirst((ATermList) t);
      g_162 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_162);
  e_162 = t;
  t = term_s_58;
  j_162 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_58, f_162);
  t = w_15(j_162, f_162, t);
  t = g_162;
  {
    static ATerm t_162 (ATerm t)
    {
      ATerm x_60 = t;
      int y_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_60 = t;
          int a_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_162 = NULL;
              m_162 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = m_162;
              LocalPopChoice(a_61);
            }
          else
            {
              t = z_60;
              t = z_140(t);
              t = Cons_2_0(_id, t_162, t);
            }
          LocalPopChoice(y_60);
        }
      else
        {
          t = x_60;
          {
            ATerm p_162 = NULL,q_162 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_162 = ATgetFirst((ATermList) t);
                q_162 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(q_162), (ATerm) ATmakeAppl(sym_Undefined_1, p_162));
          }
        }
      return(t);
    }
    t = t_162(t);
  }
  i_162 = t;
  t = (ATerm) ATinsert(CheckATermList(i_162), (ATerm) ATmakeAppl(sym_Program_1, f_162));
  n_11 = t;
  t = SSLsetAnnotations(n_11, e_162);
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm g_163 = NULL;
  g_163 = t;
  if(match_string(t, "--help"))
    {
      t = g_163;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_163;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_163;
        }
    }
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm h_163 = NULL,i_163 = NULL;
  t = term_t_59;
  h_163 = t;
  t = term_l_57;
  i_163 = t;
  t = term_b_61;
  t = w_15(h_163, i_163, t);
  t = term_c_61;
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = term_d_61;
  return(t);
}
static ATerm c_14 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_140 (ATerm), ATerm t)
{
  ATerm y_162 = NULL,z_162 = NULL,a_163 = NULL,b_163 = NULL,c_163 = NULL,d_163 = NULL,e_163 = NULL,f_163 = NULL;
  a_163 = t;
  t = term_h_58;
  b_163 = t;
  t = term_e_61;
  t = lookup_table_0_1(b_163, t);
  f_163 = t;
  t = term_i_58;
  c_163 = t;
  t = (ATerm) ATempty;
  d_163 = t;
  t = f_163;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(c_163, d_163, e_163, t);
  t = a_163;
  {
    static ATerm w_13 (ATerm t)
    {
      ATerm h_61 = t;
      int i_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_140(t);
          LocalPopChoice(i_61);
        }
      else
        {
          t = h_61;
          {
            ATerm j_61 = t;
            int k_61 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_13, a_14, b_14, t);
                LocalPopChoice(k_61);
              }
            else
              {
                t = j_61;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_13, t);
  }
  {
    ATerm l_61 = t;
    int m_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_163 = NULL;
        t_163 = t;
        {
          ATerm n_61 = t;
          int o_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_73 = NULL;
              t = t_163;
              {
                ATerm p_61 = t;
                int q_61 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_73 = NULL,o_73 = NULL;
                    t = term_c_56;
                    n_73 = t;
                    t = term_t_59;
                    o_73 = t;
                    t = term_u_59;
                    t = t_15(n_73, o_73, t);
                    LocalPopChoice(q_61);
                  }
                else
                  {
                    t = p_61;
                    t = fetch_1_0(c_14, t);
                  }
              }
              t = t_163;
              t = default_system_usage_0_0(t);
              t = term_g_50;
              m_73 = t;
              t = SSL_exit(m_73);
              LocalPopChoice(o_61);
            }
          else
            {
              t = n_61;
              {
                ATerm c_74 = NULL,d_74 = NULL,j_74 = NULL;
                t = term_c_56;
                d_74 = t;
                t = term_k_60;
                j_74 = t;
                t = term_r_61;
                t = t_15(d_74, j_74, t);
                t = t_163;
                t = default_system_about_0_0(t);
                t = term_g_50;
                c_74 = t;
                t = SSL_exit(c_74);
              }
            }
        }
        LocalPopChoice(m_61);
      }
    else
      {
        t = l_61;
        {
          ATerm s_61 = t;
          int v_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_163 = NULL,v_163 = NULL,w_163 = NULL;
              static ATerm d_14 (ATerm t)
              {
                ATerm x_163 = NULL,y_163 = NULL,z_163 = NULL,c_12 = NULL;
                z_163 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    y_163 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_163);
                x_163 = t;
                t = y_163;
                if(((y_162 != NULL) && (y_162 != t)))
                  _fail(t);
                else
                  y_162 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, y_163);
                c_12 = t;
                t = SSLsetAnnotations(c_12, x_163);
                return(t);
              }
              t = fetch_1_0(d_14, t);
              t = term_m_57;
              v_163 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_162)), term_w_61);
              w_163 = t;
              t = SSL_printnl(v_163, w_163);
              t = (ATerm) ATmakeAppl(sym__2, term_m_57, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_162)), term_w_61));
              t = default_system_usage_0_0(t);
              t = term_u_14;
              u_163 = t;
              t = SSL_exit(u_163);
              LocalPopChoice(v_61);
            }
          else
            {
              t = s_61;
            }
        }
      }
  }
  z_162 = t;
  t = term_h_58;
  t = table_destroy_0_0(t);
  t = z_162;
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_138 (ATerm), ATerm z_138 (ATerm), ATerm a_139 (ATerm), ATerm b_139 (ATerm), ATerm t)
{
  ATerm e_164 = NULL,f_164 = NULL,g_164 = NULL,h_164 = NULL,i_164 = NULL;
  t = parse_options_1_0(y_138, t);
  e_164 = t;
  t = term_x_61;
  t = table_create_0_0(t);
  t = term_x_61;
  f_164 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_61, term_y_61, e_164);
  t = lookup_table_0_1(f_164, t);
  i_164 = t;
  t = term_y_61;
  g_164 = t;
  t = i_164;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_164 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(g_164, e_164, h_164, t);
  t = e_164;
  t = a_139(t);
  {
    ATerm z_61 = t;
    int a_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_138, t);
        LocalPopChoice(a_62);
      }
    else
      {
        t = z_61;
        {
          ATerm c_62 = t;
          int l_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_139(t);
              t = report_success_0_0(t);
              LocalPopChoice(l_62);
            }
          else
            {
              t = c_62;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm o_62 = t;
  int r_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(r_62);
    }
  else
    {
      t = o_62;
      {
        ATerm s_62 = t;
        int b_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(b_63);
          }
        else
          {
            t = s_62;
            {
              ATerm c_63 = t;
              int r_63 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(g_14, h_14, i_14, t);
                  LocalPopChoice(r_63);
                }
              else
                {
                  t = c_63;
                  {
                    ATerm s_63 = t;
                    int t_63 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(t_63);
                      }
                    else
                      {
                        t = s_63;
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
static ATerm f_14 (ATerm t)
{
  t = input_1_0(j_14, t);
  return(t);
}
static ATerm g_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm l_164 = NULL,m_164 = NULL;
  t = term_j_56;
  l_164 = t;
  t = term_l_57;
  m_164 = t;
  t = term_u_63;
  t = w_15(l_164, m_164, t);
  t = term_f_64;
  return(t);
}
static ATerm i_14 (ATerm t)
{
  t = term_g_64;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  t = output_1_0(k_14, t);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm o_164 = NULL,p_164 = NULL,q_164 = NULL,r_164 = NULL,s_164 = NULL,t_164 = NULL,u_164 = NULL,w_164 = NULL,x_164 = NULL,y_164 = NULL,z_164 = NULL,a_165 = NULL,b_165 = NULL,c_165 = NULL,d_165 = NULL,k_13 = NULL,h_13 = NULL,f_13 = NULL,e_13 = NULL;
  d_165 = t;
  if(match_cons(t, sym_Specification_1))
    {
      p_164 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_165);
  o_164 = t;
  t = p_164;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_164 = ATgetFirst((ATermList) t);
      s_164 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_164);
  q_164 = t;
  t = s_164;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_164 = ATgetFirst((ATermList) t);
      x_164 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_164);
  u_164 = t;
  t = w_164;
  if(match_cons(t, sym_Strategies_1))
    {
      a_165 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_164);
  z_164 = t;
  t = a_165;
  t = inline_sdefs_0_0(t);
  b_165 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, b_165);
  e_13 = t;
  t = SSLsetAnnotations(e_13, z_164);
  c_165 = t;
  t = x_164;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_164), c_165);
  f_13 = t;
  t = SSLsetAnnotations(f_13, u_164);
  y_164 = t;
  t = (ATerm) ATinsert(CheckATermList(y_164), r_164);
  h_13 = t;
  t = SSLsetAnnotations(h_13, q_164);
  t_164 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, t_164);
  k_13 = t;
  t = SSLsetAnnotations(k_13, o_164);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(e_14, default_usage_0_0, _id, f_14, t);
  return(t);
}
