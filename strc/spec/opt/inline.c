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
ATerm term_x_59;
ATerm term_v_59;
ATerm term_t_59;
ATerm term_e_59;
ATerm term_d_59;
ATerm term_c_59;
ATerm term_z_58;
ATerm term_o_58;
ATerm term_n_58;
ATerm term_m_58;
ATerm term_l_58;
ATerm term_g_58;
ATerm term_b_58;
ATerm term_a_58;
ATerm term_z_57;
ATerm term_y_57;
ATerm term_w_57;
ATerm term_v_57;
ATerm term_u_57;
ATerm term_m_57;
ATerm term_l_57;
ATerm term_i_57;
ATerm term_h_57;
ATerm term_g_57;
ATerm term_c_57;
ATerm term_b_57;
ATerm term_x_56;
ATerm term_w_56;
ATerm term_u_56;
ATerm term_j_56;
ATerm term_i_56;
ATerm term_f_56;
ATerm term_e_56;
ATerm term_x_55;
ATerm term_w_55;
ATerm term_v_55;
ATerm term_n_55;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_k_55;
ATerm term_i_55;
ATerm term_h_55;
ATerm term_g_55;
ATerm term_f_55;
ATerm term_d_55;
ATerm term_c_55;
ATerm term_z_54;
ATerm term_y_54;
ATerm term_x_54;
ATerm term_w_54;
ATerm term_v_54;
ATerm term_s_54;
ATerm term_r_54;
ATerm term_n_54;
ATerm term_i_54;
ATerm term_g_54;
ATerm term_y_52;
ATerm term_x_52;
ATerm term_u_52;
ATerm term_t_52;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_n_52;
ATerm term_i_52;
ATerm term_t_47;
ATerm term_e_47;
ATerm term_y_46;
ATerm term_z_36;
ATerm term_v_36;
ATerm term_z_35;
ATerm term_r_35;
ATerm term_t_34;
ATerm term_b_17;
ATerm term_u_16;
ATerm term_p_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_x_13;
ATerm term_v_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(50);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(sym__2, term_r_52, term_s_52);
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(sym__2, term_r_52, term_x_52);
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(sym__2, term_r_52, term_n_54);
  ATprotect(&(term_s_54));
  term_s_54 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(sym__2, term_d_55, term_e_47);
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_47);
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(sym__2, term_k_55, term_v_54);
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_55));
  term_x_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(sym__2, term_r_52, term_i_56);
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(sym__2, term_r_52, term_d_55);
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(sym__2, term_r_52, term_b_57);
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(sym__2, term_v_55, term_w_55);
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_57));
  term_v_57 = (ATerm) ATmakeAppl(sym__2, term_u_57, term_v_54);
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_57));
  term_y_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_57));
  term_z_57 = (ATerm) ATmakeAppl(sym__2, term_y_57, term_v_54);
  ATprotect(&(term_a_58));
  term_a_58 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_58));
  term_b_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_58));
  term_g_58 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_58));
  term_l_58 = (ATerm) ATmakeAppl(sym__2, term_b_57, term_v_54);
  ATprotect(&(term_m_58));
  term_m_58 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_58));
  term_n_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_58));
  term_o_58 = (ATerm) ATmakeAppl(sym__3, term_v_55, term_w_55, (ATerm) ATempty);
  ATprotect(&(term_z_58));
  term_z_58 = (ATerm) ATmakeAppl(sym__2, term_r_52, term_u_57);
  ATprotect(&(term_c_59));
  term_c_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_59));
  term_d_59 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_59));
  term_t_59 = (ATerm) ATmakeAppl(sym__2, term_x_52, term_v_54);
  ATprotect(&(term_v_59));
  term_v_59 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_59));
  term_x_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
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
ATerm Seq_2_0 (ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm t);
static ATerm g_1 (ATerm t);
ATerm body_to_inline_0_0 (ATerm t);
ATerm inlineable_0_0 (ATerm t);
static ATerm g_7 (ATerm y_36, ATerm a_37, ATerm t);
ATerm bottomup_1_0 (ATerm h_110 (ATerm), ATerm t);
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
ATerm spaste_1_0 (ATerm k_109 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm l_109 (ATerm), ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm b_13 (ATerm p_25, ATerm o_25, ATerm t);
ATerm SVar_1_0 (ATerm r_91 (ATerm), ATerm t);
static ATerm m_13 (ATerm g_126 (ATerm), ATerm h_126 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_46, ATerm j_46, ATerm i_46, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm n_13 (ATerm a_126 (ATerm), ATerm b_126 (ATerm (ATerm), ATerm), ATerm c_46, ATerm f_46, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm o_126 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm v_125 (ATerm (ATerm), ATerm), ATerm w_125 (ATerm), ATerm x_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm y_125 (ATerm (ATerm), ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm tpaste_1_0 (ATerm g_109 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm g_13 (ATerm k_121 (ATerm), ATerm d_43, ATerm c_43, ATerm t);
static ATerm h_13 (ATerm n_121 (ATerm), ATerm o_121 (ATerm), ATerm h_43, ATerm g_43, ATerm t);
static ATerm i_13 (ATerm f_121 (ATerm), ATerm b_43, ATerm a_43, ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm k_13 (ATerm r_639, ATerm w_639, ATerm d_62, ATerm t);
ATerm while_not_2_0 (ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm t);
ATerm for_3_0 (ATerm v_116 (ATerm), ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm i_117 (ATerm q_115, ATerm r_115, ATerm t_115, ATerm t);
static ATerm e_7 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm free_vars_3_0 (ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm a_128 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm w_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm g_88 (ATerm), ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
ATerm InlineCall_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm h_124 (ATerm), ATerm i_124 (ATerm), ATerm j_124 (ATerm), ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
ATerm occurrences_1_0 (ATerm r_121 (ATerm), ATerm t);
static ATerm s_13 (ATerm l_108 (ATerm), ATerm s_24, ATerm r_24, ATerm t);
static ATerm u_13 (ATerm b_118 (ATerm), ATerm u_34, ATerm s_34, ATerm t);
static ATerm w_13 (ATerm q_36, ATerm r_36, ATerm t);
ATerm end_scope_1_0 (ATerm y_117 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm x_117 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm z_117 (ATerm), ATerm a_118 (ATerm), ATerm t);
static ATerm k_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm p_9 (ATerm t);
ATerm inline_sdef_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm g_110 (ATerm), ATerm t);
static ATerm d_10 (ATerm t);
static ATerm y_13 (ATerm n_79, ATerm m_79, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm s_114 (ATerm), ATerm t_114 (ATerm), ATerm u_114 (ATerm), ATerm v_114 (ATerm), ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm m_10 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm k_111 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm h_119 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm z_136 (ATerm p_136, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm v_10 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm b_116 (ATerm), ATerm c_116 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm i_110 (ATerm), ATerm t);
static ATerm x_10 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
ATerm inline_sdefs_0_0 (ATerm t);
static ATerm e_15 (ATerm n_53, ATerm o_53, ATerm t);
static ATerm f_15 (ATerm a_32, ATerm b_32, ATerm t);
static ATerm h_15 (ATerm q_117 (ATerm), ATerm m_237, ATerm g_32, ATerm t);
static ATerm g_15 (ATerm w_31, ATerm x_31, ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
ATerm output_1_0 (ATerm s_136 (ATerm), ATerm t);
static ATerm u_145 (ATerm o_145, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm i_15 (ATerm c_32, ATerm t);
static ATerm j_15 (ATerm g_52, ATerm h_52, ATerm t);
static ATerm k_15 (ATerm p_53, ATerm q_53, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm f_147 (ATerm e_146, ATerm t);
static ATerm g_147 (ATerm i_146, ATerm j_146, ATerm k_146, ATerm t);
static ATerm h_147 (ATerm s_146, ATerm t_146, ATerm u_146, ATerm t);
static ATerm l_15 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm t_136 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm j_11 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm v_15 (ATerm g_56, ATerm h_56, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm v_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm t_15 (ATerm j_36, ATerm k_36, ATerm h_36, ATerm t);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm n_15 (ATerm g_33, ATerm h_33, ATerm t);
ATerm foldr_2_0 (ATerm f_124 (ATerm), ATerm g_124 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm y_133 (ATerm), ATerm t);
static ATerm h_12 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_12 (ATerm t);
ATerm need_help_1_0 (ATerm j_136 (ATerm), ATerm t);
static ATerm w_15 (ATerm w_39, ATerm x_39, ATerm y_39, ATerm t);
ATerm lookup_table_0_1 (ATerm b_38, ATerm t);
ATerm new_hashtable_0_2 (ATerm e_40, ATerm f_40, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm p_15 (ATerm b_40, ATerm c_40, ATerm t);
static ATerm q_15 (ATerm g_40, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_118 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_119 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm x_15 (ATerm z_39, ATerm a_40, ATerm t);
static ATerm s_15 (ATerm i_38, ATerm j_38, ATerm t);
static ATerm n_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm v_94 (ATerm), ATerm w_94 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm m_138 (ATerm), ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
ATerm parse_options_1_0 (ATerm l_138 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm l_136 (ATerm), ATerm m_136 (ATerm), ATerm n_136 (ATerm), ATerm o_136 (ATerm), ATerm t);
static ATerm j_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm t_13 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_v_13;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_x_13;
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
          t = u_13(u_0, z_0, a_1, t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_0), (ATerm)ATempty, (ATerm) ATempty);
          x_0 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_14, o_0);
          y_0 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_0), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_f_14, o_0));
          t = u_13(v_0, x_0, y_0, t);
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
  t = n_15(e_1, t_1, t);
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
  t = n_15(z_1, a_2, t);
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
ATerm Seq_2_0 (ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm t)
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
  t = g_92(t);
  q_1 = t;
  t = p_1;
  t = h_92(t);
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, q_1, r_1);
  q_0 = t;
  t = SSLsetAnnotations(q_0, n_1);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL,o_2 = NULL;
  t_8 = t;
  if(match_cons(t, sym_Match_1))
    {
      s_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_8);
  r_8 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, s_8);
  o_2 = t;
  t = SSLsetAnnotations(o_2, r_8);
  return(t);
}
ATerm body_to_inline_0_0 (ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL;
  static ATerm c_13 (ATerm t)
  {
    ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
    y_12 = t;
    if(match_cons(t, sym_Id_0))
      {
        t = y_12;
      }
    else
      {
        if(match_cons(t, sym_Fail_0))
          {
            t = y_12;
          }
        else
          {
            if(match_cons(t, sym_CallT_3))
              {
                z_12 = ATgetArgument(t, 0);
                a_13 = ATgetArgument(t, 1);
                x_12 = ATgetArgument(t, 2);
                {
                  ATerm f_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,i_1 = NULL,d_1 = NULL;
                  t = SSLgetAnnotations(y_12);
                  f_2 = t;
                  t = z_12;
                  if(match_cons(t, sym_SVar_1))
                    {
                      k_2 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_12);
                  j_2 = t;
                  t = (ATerm) ATmakeAppl(sym_SVar_1, k_2);
                  d_1 = t;
                  t = SSLsetAnnotations(d_1, j_2);
                  l_2 = t;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, l_2, a_13, x_12);
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
                    x_12 = ATgetArgument(t, 2);
                    {
                      ATerm a_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,k_1 = NULL,j_1 = NULL;
                      t = SSLgetAnnotations(y_12);
                      a_4 = t;
                      t = z_12;
                      if(match_cons(t, sym_SVar_1))
                        {
                          j_4 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(z_12);
                      i_4 = t;
                      t = (ATerm) ATmakeAppl(sym_SVar_1, j_4);
                      j_1 = t;
                      t = SSLsetAnnotations(j_1, i_4);
                      k_4 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, k_4, a_13, x_12);
                      k_1 = t;
                      t = SSLsetAnnotations(k_1, a_4);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Build_1))
                      {
                        z_12 = ATgetArgument(t, 0);
                        {
                          ATerm e_5 = NULL,l_1 = NULL;
                          t = SSLgetAnnotations(y_12);
                          e_5 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, z_12);
                          l_1 = t;
                          t = SSLsetAnnotations(l_1, e_5);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            z_12 = ATgetArgument(t, 0);
                            {
                              ATerm h_6 = NULL,w_1 = NULL;
                              t = SSLgetAnnotations(y_12);
                              h_6 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, z_12);
                              w_1 = t;
                              t = SSLsetAnnotations(w_1, h_6);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                z_12 = ATgetArgument(t, 0);
                                a_13 = ATgetArgument(t, 1);
                                {
                                  ATerm l_14 = t;
                                  int m_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm f_7 = NULL,p_7 = NULL,y_7 = NULL,a_8 = NULL,y_1 = NULL,x_1 = NULL;
                                      t = SSLgetAnnotations(y_12);
                                      f_7 = t;
                                      t = z_12;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          y_7 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(z_12);
                                      p_7 = t;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, y_7);
                                      x_1 = t;
                                      t = SSLsetAnnotations(x_1, p_7);
                                      a_8 = t;
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_8, a_13);
                                      y_1 = t;
                                      t = SSLsetAnnotations(y_1, f_7);
                                      LocalPopChoice(m_14);
                                    }
                                  else
                                    {
                                      t = l_14;
                                      {
                                        ATerm i_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL,r_2 = NULL,q_2 = NULL;
                                        t = SSLgetAnnotations(y_12);
                                        i_8 = t;
                                        t = z_12;
                                        if(match_cons(t, sym_Scope_2))
                                          {
                                            m_8 = ATgetArgument(t, 0);
                                            n_8 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = SSLgetAnnotations(z_12);
                                        l_8 = t;
                                        t = n_8;
                                        t = Seq_2_0(g_1, _id, t);
                                        o_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Scope_2, m_8, o_8);
                                        q_2 = t;
                                        t = SSLsetAnnotations(q_2, l_8);
                                        p_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, p_8, a_13);
                                        r_2 = t;
                                        t = SSLsetAnnotations(r_2, i_8);
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
                                      ATerm n_14 = t;
                                      int o_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm b_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,u_2 = NULL,t_2 = NULL;
                                          t = SSLgetAnnotations(y_12);
                                          b_9 = t;
                                          t = a_13;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              f_9 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = SSLgetAnnotations(a_13);
                                          e_9 = t;
                                          t = (ATerm) ATmakeAppl(sym_Match_1, f_9);
                                          t_2 = t;
                                          t = SSLsetAnnotations(t_2, e_9);
                                          g_9 = t;
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, z_12, g_9);
                                          u_2 = t;
                                          t = SSLsetAnnotations(u_2, b_9);
                                          LocalPopChoice(o_14);
                                        }
                                      else
                                        {
                                          t = n_14;
                                          {
                                            ATerm o_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,y_9 = NULL,x_2 = NULL,w_2 = NULL,v_2 = NULL;
                                            t = SSLgetAnnotations(y_12);
                                            o_9 = t;
                                            t = a_13;
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                s_9 = ATgetArgument(t, 0);
                                                t_9 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(a_13);
                                            r_9 = t;
                                            t = s_9;
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                w_9 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(s_9);
                                            v_9 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, w_9);
                                            v_2 = t;
                                            t = SSLsetAnnotations(v_2, v_9);
                                            y_9 = t;
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, y_9, t_9);
                                            w_2 = t;
                                            t = SSLsetAnnotations(w_2, r_9);
                                            u_9 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, z_12, u_9);
                                            x_2 = t;
                                            t = SSLsetAnnotations(x_2, o_9);
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
                                          ATerm n_10 = NULL,t_10 = NULL,u_10 = NULL,y_2 = NULL;
                                          t = SSLgetAnnotations(y_12);
                                          n_10 = t;
                                          t = z_12;
                                          t = c_13(t);
                                          t_10 = t;
                                          t = a_13;
                                          t = c_13(t);
                                          u_10 = t;
                                          t = (ATerm) ATmakeAppl(sym_Choice_2, t_10, u_10);
                                          y_2 = t;
                                          t = SSLsetAnnotations(y_2, n_10);
                                        }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_LChoice_2))
                                          {
                                            z_12 = ATgetArgument(t, 0);
                                            a_13 = ATgetArgument(t, 1);
                                            {
                                              ATerm i_11 = NULL,m_11 = NULL,n_11 = NULL,z_2 = NULL;
                                              t = SSLgetAnnotations(y_12);
                                              i_11 = t;
                                              t = z_12;
                                              t = c_13(t);
                                              m_11 = t;
                                              t = a_13;
                                              t = c_13(t);
                                              n_11 = t;
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, m_11, n_11);
                                              z_2 = t;
                                              t = SSLsetAnnotations(z_2, i_11);
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_GuardedLChoice_3))
                                              {
                                                z_12 = ATgetArgument(t, 0);
                                                a_13 = ATgetArgument(t, 1);
                                                x_12 = ATgetArgument(t, 2);
                                                {
                                                  ATerm w_11 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,a_3 = NULL;
                                                  t = SSLgetAnnotations(y_12);
                                                  w_11 = t;
                                                  t = z_12;
                                                  t = c_13(t);
                                                  c_12 = t;
                                                  t = a_13;
                                                  t = c_13(t);
                                                  d_12 = t;
                                                  t = x_12;
                                                  t = c_13(t);
                                                  e_12 = t;
                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, c_12, d_12, e_12);
                                                  a_3 = t;
                                                  t = SSLsetAnnotations(a_3, w_11);
                                                }
                                              }
                                            else
                                              {
                                                ATerm o_12 = NULL,b_3 = NULL;
                                                if(match_cons(t, sym_Cong_2))
                                                  {
                                                    z_12 = ATgetArgument(t, 0);
                                                    a_13 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSLgetAnnotations(y_12);
                                                o_12 = t;
                                                t = (ATerm) ATmakeAppl(sym_Cong_2, z_12, a_13);
                                                b_3 = t;
                                                t = SSLsetAnnotations(b_3, o_12);
                                              }
                                          }
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
  t = c_13(t);
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
  ATerm c_15 = NULL,d_15 = NULL,m_15 = NULL,o_15 = NULL,r_15 = NULL;
  c_15 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      d_15 = ATgetArgument(t, 0);
      m_15 = ATgetArgument(t, 1);
      o_15 = ATgetArgument(t, 2);
      r_15 = ATgetArgument(t, 3);
      {
        ATerm b_16 = NULL,c_16 = NULL,k_16 = NULL,h_4 = NULL;
        t = SSLgetAnnotations(c_15);
        c_16 = t;
        t = d_15;
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
        b_16 = t;
        t = r_15;
        {
          ATerm r_14 = t;
          if((PushChoice() == 0))
            {
              static ATerm h_1 (ATerm t)
              {
                if(match_cons(t, sym_CallT_3))
                  {
                    ATerm s_14 = ATgetArgument(t, 0);
                    if(match_cons(s_14, sym_SVar_1))
                      {
                        if((b_16 != ATgetArgument(s_14, 0)))
                          {
                            _fail(ATgetArgument(s_14, 0));
                          }
                      }
                    else
                      _fail(t);
                    {
                      ATerm t_14 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm u_14 = ATgetArgument(t, 2);
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
        t = r_15;
        t = body_to_inline_0_0(t);
        k_16 = t;
        t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, b_16, m_15, o_15, k_16);
        h_4 = t;
        t = SSLsetAnnotations(h_4, c_16);
      }
    }
  else
    {
      ATerm w_16 = NULL,x_16 = NULL,c_17 = NULL,m_4 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          d_15 = ATgetArgument(t, 0);
          m_15 = ATgetArgument(t, 1);
          o_15 = ATgetArgument(t, 2);
          r_15 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_15);
      x_16 = t;
      t = d_15;
      {
        ATerm v_14 = t;
        if((PushChoice() == 0))
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = v_14;
          }
      }
      w_16 = t;
      t = r_15;
      {
        ATerm w_14 = t;
        if((PushChoice() == 0))
          {
            static ATerm b_2 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm x_14 = ATgetArgument(t, 0);
                  if(match_cons(x_14, sym_SVar_1))
                    {
                      if((w_16 != ATgetArgument(x_14, 0)))
                        {
                          _fail(ATgetArgument(x_14, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm y_14 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm z_14 = ATgetArgument(t, 2);
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
            t = w_14;
          }
      }
      t = r_15;
      t = body_to_inline_0_0(t);
      c_17 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, w_16, m_15, o_15, c_17);
      m_4 = t;
      t = SSLsetAnnotations(m_4, x_16);
    }
  return(t);
}
static ATerm g_7 (ATerm y_36, ATerm a_37, ATerm t)
{
  ATerm d_16 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_36, a_37);
  t = s_15(y_36, a_37, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_16 = ATgetFirst((ATermList) t);
      {
        ATerm a_15 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = d_16;
  return(t);
}
ATerm bottomup_1_0 (ATerm h_110 (ATerm), ATerm t)
{
  static ATerm c_2 (ATerm t)
  {
    t = bottomup_1_0(h_110, t);
    return(t);
  }
  t = SRTS_all(c_2, t);
  t = h_110(t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_15 = ATgetArgument(t, 0);
      if(((ATgetType(b_15) != AT_LIST) || !(ATisEmpty(b_15))))
        _fail(t);
      {
        ATerm u_15 = ATgetArgument(t, 1);
        if(((ATgetType(u_15) != AT_LIST) || !(ATisEmpty(u_15))))
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
  ATerm m_31 = NULL,n_31 = NULL,p_31 = NULL,z_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_15 = ATgetArgument(t, 0);
      if(((ATgetType(y_15) == AT_LIST) && !(ATisEmpty(y_15))))
        {
          m_31 = ATgetFirst((ATermList) y_15);
          n_31 = (ATerm) ATgetNext((ATermList) y_15);
        }
      else
        _fail(t);
      {
        ATerm z_15 = ATgetArgument(t, 1);
        if(((ATgetType(z_15) == AT_LIST) && !(ATisEmpty(z_15))))
          {
            p_31 = ATgetFirst((ATermList) z_15);
            z_31 = (ATerm) ATgetNext((ATermList) z_15);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_31, p_31), (ATerm) ATmakeAppl(sym__2, n_31, z_31));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL;
  if(match_cons(t, sym__2))
    {
      d_32 = ATgetArgument(t, 0);
      e_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_32), d_32);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL;
  if(match_cons(t, sym__2))
    {
      h_32 = ATgetArgument(t, 0);
      i_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_32), (ATerm) ATmakeAppl(sym_Match_1, i_32));
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_16 = ATgetArgument(t, 0);
      if(((ATgetType(a_16) != AT_LIST) || !(ATisEmpty(a_16))))
        _fail(t);
      {
        ATerm e_16 = ATgetArgument(t, 1);
        if(((ATgetType(e_16) != AT_LIST) || !(ATisEmpty(e_16))))
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
  ATerm f_42 = NULL,g_42 = NULL,i_42 = NULL,l_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_16 = ATgetArgument(t, 0);
      if(((ATgetType(f_16) == AT_LIST) && !(ATisEmpty(f_16))))
        {
          f_42 = ATgetFirst((ATermList) f_16);
          g_42 = (ATerm) ATgetNext((ATermList) f_16);
        }
      else
        _fail(t);
      {
        ATerm g_16 = ATgetArgument(t, 1);
        if(((ATgetType(g_16) == AT_LIST) && !(ATisEmpty(g_16))))
          {
            i_42 = ATgetFirst((ATermList) g_16);
            l_42 = (ATerm) ATgetNext((ATermList) g_16);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_42, i_42), (ATerm) ATmakeAppl(sym__2, g_42, l_42));
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL;
  if(match_cons(t, sym__2))
    {
      m_42 = ATgetArgument(t, 0);
      n_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_42), m_42);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL;
  if(match_cons(t, sym__2))
    {
      o_42 = ATgetArgument(t, 0);
      p_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_42), (ATerm) ATmakeAppl(sym_Match_1, p_42));
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
        ATerm f_60 = NULL,g_60 = NULL;
        f_60 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm l_16 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        g_60 = t;
        t = SSLgetAnnotations(f_60);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm m_16 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) m_16) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm n_16 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(n_16) != AT_LIST) || !(ATisEmpty(n_16))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_60;
      }
    }
  else
    {
      t = h_16;
      {
        ATerm o_16 = t;
        int p_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm q_16 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) q_16) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm r_16 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(p_16);
            _fail(t);
          }
        else
          {
            t = o_16;
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
    ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,c_23 = NULL,l_23 = NULL,n_23 = NULL,p_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
    t_23 = t;
    if(match_cons(t, sym_Test_1))
      {
        s_23 = ATgetArgument(t, 0);
        t = s_23;
        if(match_cons(t, sym_Id_0))
          {
            ATerm s_16 = t;
            int t_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_u_16;
                t = d_2(t);
                LocalPopChoice(t_16);
              }
            else
              {
                t = s_16;
                {
                  ATerm v_16 = t;
                  int y_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_23 = NULL,x_23 = NULL,y_23 = NULL,f_24 = NULL,k_24 = NULL,t_24 = NULL,y_24 = NULL,z_24 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,h_25 = NULL;
                      t = t_23;
                      t = new_0_0(t);
                      v_23 = t;
                      t = bottomup_1_0(d_2, t);
                      e_25 = t;
                      t = (ATerm) ATempty;
                      t = d_2(t);
                      h_25 = t;
                      t = (ATerm) ATinsert(CheckATermList(h_25), e_25);
                      t = d_2(t);
                      x_23 = t;
                      t = v_23;
                      t = bottomup_1_0(d_2, t);
                      d_25 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, d_25);
                      t = d_2(t);
                      c_25 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, c_25);
                      t = d_2(t);
                      f_24 = t;
                      t = s_23;
                      t = bottomup_1_0(d_2, t);
                      t_24 = t;
                      t = v_23;
                      t = bottomup_1_0(d_2, t);
                      b_25 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, b_25);
                      t = d_2(t);
                      z_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, z_24);
                      t = d_2(t);
                      y_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_24, y_24);
                      t = d_2(t);
                      k_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_24, k_24);
                      t = d_2(t);
                      y_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, x_23, y_23);
                      t = d_2(t);
                      LocalPopChoice(y_16);
                    }
                  else
                    {
                      t = v_16;
                      t = t_23;
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
                      ATerm d_17 = t;
                      int e_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm l_25 = NULL,m_25 = NULL,u_25 = NULL,z_25 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,h_26 = NULL,i_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL;
                          t = t_23;
                          t = new_0_0(t);
                          l_25 = t;
                          t = bottomup_1_0(d_2, t);
                          o_26 = t;
                          t = (ATerm) ATempty;
                          t = d_2(t);
                          p_26 = t;
                          t = (ATerm) ATinsert(CheckATermList(p_26), o_26);
                          t = d_2(t);
                          m_25 = t;
                          t = l_25;
                          t = bottomup_1_0(d_2, t);
                          n_26 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, n_26);
                          t = d_2(t);
                          i_26 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, i_26);
                          t = d_2(t);
                          z_25 = t;
                          t = s_23;
                          t = bottomup_1_0(d_2, t);
                          c_26 = t;
                          t = l_25;
                          t = bottomup_1_0(d_2, t);
                          h_26 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, h_26);
                          t = d_2(t);
                          e_26 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, e_26);
                          t = d_2(t);
                          d_26 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_26, d_26);
                          t = d_2(t);
                          b_26 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, z_25, b_26);
                          t = d_2(t);
                          u_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, m_25, u_25);
                          t = d_2(t);
                          LocalPopChoice(e_17);
                        }
                      else
                        {
                          t = d_17;
                          t = t_23;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    n_23 = ATgetArgument(t, 0);
                    {
                      ATerm f_17 = t;
                      int g_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, n_23);
                          t = d_2(t);
                          LocalPopChoice(g_17);
                        }
                      else
                        {
                          t = f_17;
                          {
                            ATerm h_17 = t;
                            int i_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm y_26 = NULL,z_26 = NULL,b_27 = NULL,c_27 = NULL,e_27 = NULL,k_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL;
                                t = t_23;
                                t = new_0_0(t);
                                y_26 = t;
                                t = bottomup_1_0(d_2, t);
                                v_27 = t;
                                t = (ATerm) ATempty;
                                t = d_2(t);
                                w_27 = t;
                                t = (ATerm) ATinsert(CheckATermList(w_27), v_27);
                                t = d_2(t);
                                z_26 = t;
                                t = y_26;
                                t = bottomup_1_0(d_2, t);
                                u_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, u_27);
                                t = d_2(t);
                                t_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, t_27);
                                t = d_2(t);
                                c_27 = t;
                                t = s_23;
                                t = bottomup_1_0(d_2, t);
                                k_27 = t;
                                t = y_26;
                                t = bottomup_1_0(d_2, t);
                                s_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, s_27);
                                t = d_2(t);
                                r_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, r_27);
                                t = d_2(t);
                                q_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, k_27, q_27);
                                t = d_2(t);
                                e_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, c_27, e_27);
                                t = d_2(t);
                                b_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, z_26, b_27);
                                t = d_2(t);
                                LocalPopChoice(i_17);
                              }
                            else
                              {
                                t = h_17;
                                t = t_23;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm j_17 = t;
                    int k_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,i_28 = NULL,k_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL;
                        t = t_23;
                        t = new_0_0(t);
                        c_28 = t;
                        t = bottomup_1_0(d_2, t);
                        w_28 = t;
                        t = (ATerm) ATempty;
                        t = d_2(t);
                        x_28 = t;
                        t = (ATerm) ATinsert(CheckATermList(x_28), w_28);
                        t = d_2(t);
                        d_28 = t;
                        t = c_28;
                        t = bottomup_1_0(d_2, t);
                        v_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, v_28);
                        t = d_2(t);
                        o_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, o_28);
                        t = d_2(t);
                        f_28 = t;
                        t = s_23;
                        t = bottomup_1_0(d_2, t);
                        i_28 = t;
                        t = c_28;
                        t = bottomup_1_0(d_2, t);
                        n_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, n_28);
                        t = d_2(t);
                        m_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, m_28);
                        t = d_2(t);
                        k_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, i_28, k_28);
                        t = d_2(t);
                        g_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, f_28, g_28);
                        t = d_2(t);
                        e_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, d_28, e_28);
                        t = d_2(t);
                        LocalPopChoice(k_17);
                      }
                    else
                      {
                        t = j_17;
                        t = t_23;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            s_23 = ATgetArgument(t, 0);
            t = s_23;
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
                    t = t_23;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm o_17 = t;
                    int p_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_u_16;
                        t = d_2(t);
                        LocalPopChoice(p_17);
                      }
                    else
                      {
                        t = o_17;
                        t = t_23;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        n_23 = ATgetArgument(t, 0);
                        {
                          ATerm q_17 = t;
                          int r_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, n_23);
                              t = d_2(t);
                              LocalPopChoice(r_17);
                            }
                          else
                            {
                              t = q_17;
                              t = t_23;
                            }
                        }
                      }
                    else
                      {
                        t = t_23;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                s_23 = ATgetArgument(t, 0);
                r_23 = ATgetArgument(t, 1);
                t = r_23;
                if(match_cons(t, sym_Id_0))
                  {
                    t = s_23;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = r_23;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = s_23;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                n_23 = ATgetArgument(t, 0);
                                p_23 = ATgetArgument(t, 1);
                                t = s_23;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    n_23 = ATgetArgument(t, 0);
                                    p_23 = ATgetArgument(t, 1);
                                    t = s_23;
                                  }
                                else
                                  {
                                    t = s_23;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        c_23 = ATgetArgument(t, 0);
                        l_23 = ATgetArgument(t, 1);
                        t = c_23;
                        if(match_cons(t, sym_Match_1))
                          {
                            u_22 = ATgetArgument(t, 0);
                            t = u_22;
                            if(match_cons(t, sym_Op_2))
                              {
                                s_22 = ATgetArgument(t, 0);
                                l_22 = ATgetArgument(t, 1);
                                t = s_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = r_23;
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
                                            t = t_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            n_23 = ATgetArgument(t, 0);
                                            p_23 = ATgetArgument(t, 1);
                                            {
                                              ATerm v_17 = t;
                                              int w_17 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm x_30 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                  t = d_2(t);
                                                  x_30 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_23, x_30);
                                                  t = d_2(t);
                                                  LocalPopChoice(w_17);
                                                }
                                              else
                                                {
                                                  t = v_17;
                                                  t = t_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                n_23 = ATgetArgument(t, 0);
                                                t = n_23;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    t_22 = ATgetArgument(t, 0);
                                                    m_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm x_17 = t;
                                                      int y_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, t_22, s_22);
                                                          {
                                                            ATerm z_17 = t;
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
                                                                t = z_17;
                                                              }
                                                          }
                                                          t = term_b_17;
                                                          t = bottomup_1_0(d_2, t);
                                                          LocalPopChoice(y_17);
                                                        }
                                                      else
                                                        {
                                                          t = x_17;
                                                          {
                                                            ATerm a_18 = t;
                                                            int b_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm k_31 = NULL;
                                                                t = s_22;
                                                                if((t_22 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, m_22, l_22);
                                                                t = genzip_4_0(e_2, g_2, h_2, i_2, t);
                                                                k_31 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, k_31), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, t_22, m_22)), l_23));
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(b_18);
                                                              }
                                                            else
                                                              {
                                                                t = a_18;
                                                                {
                                                                  ATerm c_18 = t;
                                                                  int d_18 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm l_32 = NULL;
                                                                      t = u_22;
                                                                      if((n_23 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, n_23);
                                                                      t = d_2(t);
                                                                      l_32 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_32, l_23);
                                                                      t = d_2(t);
                                                                      LocalPopChoice(d_18);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = c_18;
                                                                      t = t_23;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm e_18 = t;
                                                    int f_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm r_32 = NULL;
                                                        t = u_22;
                                                        if((n_23 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, n_23);
                                                        t = d_2(t);
                                                        r_32 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, r_32, l_23);
                                                        t = d_2(t);
                                                        LocalPopChoice(f_18);
                                                      }
                                                    else
                                                      {
                                                        t = e_18;
                                                        t = t_23;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    n_23 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm g_18 = t;
                                                      int j_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm c_33 = NULL;
                                                          t = u_22;
                                                          if((n_23 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, n_23);
                                                          t = d_2(t);
                                                          c_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_33, l_23);
                                                          t = d_2(t);
                                                          LocalPopChoice(j_18);
                                                        }
                                                      else
                                                        {
                                                          t = g_18;
                                                          t = t_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        n_23 = ATgetArgument(t, 0);
                                                        p_23 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm k_18 = t;
                                                          int m_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                              t = d_2(t);
                                                              r_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, n_23, r_33);
                                                              t = d_2(t);
                                                              LocalPopChoice(m_18);
                                                            }
                                                          else
                                                            {
                                                              t = k_18;
                                                              t = t_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = t_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = s_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = r_23;
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
                                            t = t_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            n_23 = ATgetArgument(t, 0);
                                            p_23 = ATgetArgument(t, 1);
                                            {
                                              ATerm p_18 = t;
                                              int r_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm e_34 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                  t = d_2(t);
                                                  e_34 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_23, e_34);
                                                  t = d_2(t);
                                                  LocalPopChoice(r_18);
                                                }
                                              else
                                                {
                                                  t = p_18;
                                                  t = t_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                n_23 = ATgetArgument(t, 0);
                                                {
                                                  ATerm s_18 = t;
                                                  int v_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm i_34 = NULL;
                                                      t = u_22;
                                                      if((n_23 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, n_23);
                                                      t = d_2(t);
                                                      i_34 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_34, l_23);
                                                      t = d_2(t);
                                                      LocalPopChoice(v_18);
                                                    }
                                                  else
                                                    {
                                                      t = s_18;
                                                      t = t_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    n_23 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm c_19 = t;
                                                      int e_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm x_34 = NULL;
                                                          t = u_22;
                                                          if((n_23 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, n_23);
                                                          t = d_2(t);
                                                          x_34 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_34, l_23);
                                                          t = d_2(t);
                                                          LocalPopChoice(e_19);
                                                        }
                                                      else
                                                        {
                                                          t = c_19;
                                                          t = t_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        n_23 = ATgetArgument(t, 0);
                                                        p_23 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_19 = t;
                                                          int k_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm d_35 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                              t = d_2(t);
                                                              d_35 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, n_23, d_35);
                                                              t = d_2(t);
                                                              LocalPopChoice(k_19);
                                                            }
                                                          else
                                                            {
                                                              t = j_19;
                                                              t = t_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = t_23;
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
                                u_22 = ATgetArgument(t, 0);
                                t = u_22;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    s_22 = ATgetArgument(t, 0);
                                    t = s_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = r_23;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm l_19 = t;
                                            int m_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_17;
                                                t = d_2(t);
                                                LocalPopChoice(m_19);
                                              }
                                            else
                                              {
                                                t = l_19;
                                                t = t_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                n_23 = ATgetArgument(t, 0);
                                                p_23 = ATgetArgument(t, 1);
                                                {
                                                  ATerm n_19 = t;
                                                  int o_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm m_35 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                      t = d_2(t);
                                                      m_35 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_23, m_35);
                                                      t = d_2(t);
                                                      LocalPopChoice(o_19);
                                                    }
                                                  else
                                                    {
                                                      t = n_19;
                                                      t = t_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm p_19 = t;
                                                int q_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm r_19 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(q_19);
                                                    {
                                                      ATerm s_19 = t;
                                                      int t_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm q_35 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, u_22);
                                                          t = d_2(t);
                                                          q_35 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, q_35, l_23);
                                                          t = d_2(t);
                                                          LocalPopChoice(t_19);
                                                        }
                                                      else
                                                        {
                                                          t = s_19;
                                                          t = t_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = p_19;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        n_23 = ATgetArgument(t, 0);
                                                        t = n_23;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            t_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm u_19 = t;
                                                              int v_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm u_35 = NULL,v_35 = NULL;
                                                                  t = s_22;
                                                                  if((t_22 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, t_22);
                                                                  t = d_2(t);
                                                                  v_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, v_35);
                                                                  t = d_2(t);
                                                                  u_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_35, l_23);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(v_19);
                                                                }
                                                              else
                                                                {
                                                                  t = u_19;
                                                                  t = t_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = t_23;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            n_23 = ATgetArgument(t, 0);
                                                            p_23 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm w_19 = t;
                                                              int y_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm g_36 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                                  t = d_2(t);
                                                                  g_36 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, n_23, g_36);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(y_19);
                                                                }
                                                              else
                                                                {
                                                                  t = w_19;
                                                                  t = t_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = t_23;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = s_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = r_23;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm z_19 = t;
                                            int a_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_17;
                                                t = d_2(t);
                                                LocalPopChoice(a_20);
                                              }
                                            else
                                              {
                                                t = z_19;
                                                t = t_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                n_23 = ATgetArgument(t, 0);
                                                p_23 = ATgetArgument(t, 1);
                                                {
                                                  ATerm d_20 = t;
                                                  int k_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm g_37 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                      t = d_2(t);
                                                      g_37 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_23, g_37);
                                                      t = d_2(t);
                                                      LocalPopChoice(k_20);
                                                    }
                                                  else
                                                    {
                                                      t = d_20;
                                                      t = t_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm m_20 = t;
                                                int p_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm q_20 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(p_20);
                                                    {
                                                      ATerm r_20 = t;
                                                      int s_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm o_37 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, u_22);
                                                          t = d_2(t);
                                                          o_37 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, o_37, l_23);
                                                          t = d_2(t);
                                                          LocalPopChoice(s_20);
                                                        }
                                                      else
                                                        {
                                                          t = r_20;
                                                          t = t_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = m_20;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        n_23 = ATgetArgument(t, 0);
                                                        p_23 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_20 = t;
                                                          int u_20 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_38 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                              t = d_2(t);
                                                              f_38 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, n_23, f_38);
                                                              t = d_2(t);
                                                              LocalPopChoice(u_20);
                                                            }
                                                          else
                                                            {
                                                              t = t_20;
                                                              t = t_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = t_23;
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
                                    u_22 = ATgetArgument(t, 0);
                                    p_22 = ATgetArgument(t, 1);
                                    q_22 = ATgetArgument(t, 2);
                                    t = s_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = r_23;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm v_20 = t;
                                            int w_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_17;
                                                t = d_2(t);
                                                LocalPopChoice(w_20);
                                              }
                                            else
                                              {
                                                t = v_20;
                                                t = t_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                n_23 = ATgetArgument(t, 0);
                                                p_23 = ATgetArgument(t, 1);
                                                {
                                                  ATerm x_20 = t;
                                                  int y_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_39 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                      t = d_2(t);
                                                      e_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_23, e_39);
                                                      t = d_2(t);
                                                      LocalPopChoice(y_20);
                                                    }
                                                  else
                                                    {
                                                      t = x_20;
                                                      t = t_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm z_20 = t;
                                                int a_21 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm b_21 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(a_21);
                                                    {
                                                      ATerm d_21 = t;
                                                      int e_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm q_39 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, u_22, p_22, q_22);
                                                          t = d_2(t);
                                                          q_39 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, q_39, l_23);
                                                          t = d_2(t);
                                                          LocalPopChoice(e_21);
                                                        }
                                                      else
                                                        {
                                                          t = d_21;
                                                          t = t_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = z_20;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        n_23 = ATgetArgument(t, 0);
                                                        p_23 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm f_21 = t;
                                                          int g_21 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm v_39 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                              t = d_2(t);
                                                              v_39 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, n_23, v_39);
                                                              t = d_2(t);
                                                              LocalPopChoice(g_21);
                                                            }
                                                          else
                                                            {
                                                              t = f_21;
                                                              t = t_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = t_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = s_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = r_23;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm h_21 = t;
                                            int i_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_17;
                                                t = d_2(t);
                                                LocalPopChoice(i_21);
                                              }
                                            else
                                              {
                                                t = h_21;
                                                t = t_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                n_23 = ATgetArgument(t, 0);
                                                p_23 = ATgetArgument(t, 1);
                                                {
                                                  ATerm j_21 = t;
                                                  int k_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm b_41 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                      t = d_2(t);
                                                      b_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_23, b_41);
                                                      t = d_2(t);
                                                      LocalPopChoice(k_21);
                                                    }
                                                  else
                                                    {
                                                      t = j_21;
                                                      t = t_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    n_23 = ATgetArgument(t, 0);
                                                    p_23 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm l_21 = t;
                                                      int m_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm i_41 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                          t = d_2(t);
                                                          i_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, n_23, i_41);
                                                          t = d_2(t);
                                                          LocalPopChoice(m_21);
                                                        }
                                                      else
                                                        {
                                                          t = l_21;
                                                          t = t_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = t_23;
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
                            c_23 = ATgetArgument(t, 0);
                            t = c_23;
                            if(match_cons(t, sym_Op_2))
                              {
                                u_22 = ATgetArgument(t, 0);
                                p_22 = ATgetArgument(t, 1);
                                t = s_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = r_23;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm n_21 = t;
                                        int o_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_b_17;
                                            t = d_2(t);
                                            LocalPopChoice(o_21);
                                          }
                                        else
                                          {
                                            t = n_21;
                                            t = t_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            n_23 = ATgetArgument(t, 0);
                                            p_23 = ATgetArgument(t, 1);
                                            {
                                              ATerm p_21 = t;
                                              int q_21 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm x_41 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                  t = d_2(t);
                                                  x_41 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_23, x_41);
                                                  t = d_2(t);
                                                  LocalPopChoice(q_21);
                                                }
                                              else
                                                {
                                                  t = p_21;
                                                  t = t_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                n_23 = ATgetArgument(t, 0);
                                                t = n_23;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    t_22 = ATgetArgument(t, 0);
                                                    m_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm r_21 = t;
                                                      int s_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, t_22, u_22);
                                                          {
                                                            ATerm t_21 = t;
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
                                                                t = t_21;
                                                              }
                                                          }
                                                          t = term_b_17;
                                                          t = bottomup_1_0(d_2, t);
                                                          LocalPopChoice(s_21);
                                                        }
                                                      else
                                                        {
                                                          t = r_21;
                                                          {
                                                            ATerm w_21 = t;
                                                            int y_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm e_42 = NULL;
                                                                t = u_22;
                                                                if((t_22 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, m_22, p_22);
                                                                t = genzip_4_0(p_2, s_2, c_3, d_3, t);
                                                                e_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, e_42), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, t_22, m_22)));
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(y_21);
                                                              }
                                                            else
                                                              {
                                                                t = w_21;
                                                                {
                                                                  ATerm z_21 = t;
                                                                  int n_22 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = c_23;
                                                                      if((n_23 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, n_23);
                                                                      t = d_2(t);
                                                                      LocalPopChoice(n_22);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = z_21;
                                                                      t = t_23;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm v_22 = t;
                                                    int y_22 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = c_23;
                                                        if((n_23 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, n_23);
                                                        t = d_2(t);
                                                        LocalPopChoice(y_22);
                                                      }
                                                    else
                                                      {
                                                        t = v_22;
                                                        t = t_23;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    n_23 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm z_22 = t;
                                                      int a_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = c_23;
                                                          if((n_23 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, n_23);
                                                          t = d_2(t);
                                                          LocalPopChoice(a_23);
                                                        }
                                                      else
                                                        {
                                                          t = z_22;
                                                          t = t_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        n_23 = ATgetArgument(t, 0);
                                                        p_23 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_23 = t;
                                                          int d_23 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_44 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                              t = d_2(t);
                                                              r_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, n_23, r_44);
                                                              t = d_2(t);
                                                              LocalPopChoice(d_23);
                                                            }
                                                          else
                                                            {
                                                              t = b_23;
                                                              t = t_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = t_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = s_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = r_23;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm e_23 = t;
                                        int f_23 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_b_17;
                                            t = d_2(t);
                                            LocalPopChoice(f_23);
                                          }
                                        else
                                          {
                                            t = e_23;
                                            t = t_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            n_23 = ATgetArgument(t, 0);
                                            p_23 = ATgetArgument(t, 1);
                                            {
                                              ATerm g_23 = t;
                                              int h_23 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm f_45 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                  t = d_2(t);
                                                  f_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_23, f_45);
                                                  t = d_2(t);
                                                  LocalPopChoice(h_23);
                                                }
                                              else
                                                {
                                                  t = g_23;
                                                  t = t_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                n_23 = ATgetArgument(t, 0);
                                                {
                                                  ATerm i_23 = t;
                                                  int j_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = c_23;
                                                      if((n_23 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, n_23);
                                                      t = d_2(t);
                                                      LocalPopChoice(j_23);
                                                    }
                                                  else
                                                    {
                                                      t = i_23;
                                                      t = t_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    n_23 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm k_23 = t;
                                                      int m_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = c_23;
                                                          if((n_23 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, n_23);
                                                          t = d_2(t);
                                                          LocalPopChoice(m_23);
                                                        }
                                                      else
                                                        {
                                                          t = k_23;
                                                          t = t_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        n_23 = ATgetArgument(t, 0);
                                                        p_23 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm q_23 = t;
                                                          int u_23 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_45 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                              t = d_2(t);
                                                              u_45 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, n_23, u_45);
                                                              t = d_2(t);
                                                              LocalPopChoice(u_23);
                                                            }
                                                          else
                                                            {
                                                              t = q_23;
                                                              t = t_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = t_23;
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
                                c_23 = ATgetArgument(t, 0);
                                t = c_23;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    u_22 = ATgetArgument(t, 0);
                                    t = s_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = r_23;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm w_23 = t;
                                            int z_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_17;
                                                t = d_2(t);
                                                LocalPopChoice(z_23);
                                              }
                                            else
                                              {
                                                t = w_23;
                                                t = t_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                n_23 = ATgetArgument(t, 0);
                                                p_23 = ATgetArgument(t, 1);
                                                {
                                                  ATerm a_24 = t;
                                                  int d_24 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm s_46 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                      t = d_2(t);
                                                      s_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_23, s_46);
                                                      t = d_2(t);
                                                      LocalPopChoice(d_24);
                                                    }
                                                  else
                                                    {
                                                      t = a_24;
                                                      t = t_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm m_24 = t;
                                                int o_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm u_24 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(o_24);
                                                    {
                                                      ATerm v_24 = t;
                                                      int w_24 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, c_23);
                                                          t = d_2(t);
                                                          LocalPopChoice(w_24);
                                                        }
                                                      else
                                                        {
                                                          t = v_24;
                                                          t = t_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = m_24;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        n_23 = ATgetArgument(t, 0);
                                                        t = n_23;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            t_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm x_24 = t;
                                                              int a_25 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm a_47 = NULL;
                                                                  t = u_22;
                                                                  if((t_22 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, t_22);
                                                                  t = d_2(t);
                                                                  a_47 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, a_47);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(a_25);
                                                                }
                                                              else
                                                                {
                                                                  t = x_24;
                                                                  t = t_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = t_23;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            n_23 = ATgetArgument(t, 0);
                                                            p_23 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm f_25 = t;
                                                              int g_25 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm m_47 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                                  t = d_2(t);
                                                                  m_47 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, n_23, m_47);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(g_25);
                                                                }
                                                              else
                                                                {
                                                                  t = f_25;
                                                                  t = t_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = t_23;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = s_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = r_23;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm i_25 = t;
                                            int j_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_17;
                                                t = d_2(t);
                                                LocalPopChoice(j_25);
                                              }
                                            else
                                              {
                                                t = i_25;
                                                t = t_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                n_23 = ATgetArgument(t, 0);
                                                p_23 = ATgetArgument(t, 1);
                                                {
                                                  ATerm k_25 = t;
                                                  int n_25 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm c_48 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                      t = d_2(t);
                                                      c_48 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_23, c_48);
                                                      t = d_2(t);
                                                      LocalPopChoice(n_25);
                                                    }
                                                  else
                                                    {
                                                      t = k_25;
                                                      t = t_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm q_25 = t;
                                                int r_25 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm t_25 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(r_25);
                                                    {
                                                      ATerm v_25 = t;
                                                      int x_25 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, c_23);
                                                          t = d_2(t);
                                                          LocalPopChoice(x_25);
                                                        }
                                                      else
                                                        {
                                                          t = v_25;
                                                          t = t_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = q_25;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        n_23 = ATgetArgument(t, 0);
                                                        p_23 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm y_25 = t;
                                                          int a_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm m_48 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                              t = d_2(t);
                                                              m_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, n_23, m_48);
                                                              t = d_2(t);
                                                              LocalPopChoice(a_26);
                                                            }
                                                          else
                                                            {
                                                              t = y_25;
                                                              t = t_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = t_23;
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
                                    c_23 = ATgetArgument(t, 0);
                                    l_23 = ATgetArgument(t, 1);
                                    r_22 = ATgetArgument(t, 2);
                                    t = s_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = r_23;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm f_26 = t;
                                            int g_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_17;
                                                t = d_2(t);
                                                LocalPopChoice(g_26);
                                              }
                                            else
                                              {
                                                t = f_26;
                                                t = t_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                n_23 = ATgetArgument(t, 0);
                                                p_23 = ATgetArgument(t, 1);
                                                {
                                                  ATerm j_26 = t;
                                                  int k_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm b_49 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                      t = d_2(t);
                                                      b_49 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_23, b_49);
                                                      t = d_2(t);
                                                      LocalPopChoice(k_26);
                                                    }
                                                  else
                                                    {
                                                      t = j_26;
                                                      t = t_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm m_26 = t;
                                                int q_26 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm t_26 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(q_26);
                                                    {
                                                      ATerm u_26 = t;
                                                      int v_26 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, c_23, l_23, r_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(v_26);
                                                        }
                                                      else
                                                        {
                                                          t = u_26;
                                                          t = t_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = m_26;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        n_23 = ATgetArgument(t, 0);
                                                        p_23 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm w_26 = t;
                                                          int x_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_49 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                              t = d_2(t);
                                                              r_49 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, n_23, r_49);
                                                              t = d_2(t);
                                                              LocalPopChoice(x_26);
                                                            }
                                                          else
                                                            {
                                                              t = w_26;
                                                              t = t_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = t_23;
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
                                        c_23 = ATgetArgument(t, 0);
                                        l_23 = ATgetArgument(t, 1);
                                        t = s_23;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = r_23;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm a_27 = t;
                                                int d_27 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_b_17;
                                                    t = d_2(t);
                                                    LocalPopChoice(d_27);
                                                  }
                                                else
                                                  {
                                                    t = a_27;
                                                    {
                                                      ATerm f_27 = t;
                                                      int g_27 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm o_50 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, s_23, l_23);
                                                          t = d_2(t);
                                                          o_50 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, c_23, o_50);
                                                          t = d_2(t);
                                                          LocalPopChoice(g_27);
                                                        }
                                                      else
                                                        {
                                                          t = f_27;
                                                          t = t_23;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    n_23 = ATgetArgument(t, 0);
                                                    p_23 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm h_27 = t;
                                                      int i_27 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm y_50 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                          t = d_2(t);
                                                          y_50 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_23, y_50);
                                                          t = d_2(t);
                                                          LocalPopChoice(i_27);
                                                        }
                                                      else
                                                        {
                                                          t = h_27;
                                                          {
                                                            ATerm l_27 = t;
                                                            int m_27 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm c_51 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, s_23, l_23);
                                                                t = d_2(t);
                                                                c_51 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, c_23, c_51);
                                                                t = d_2(t);
                                                                LocalPopChoice(m_27);
                                                              }
                                                            else
                                                              {
                                                                t = l_27;
                                                                t = t_23;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        n_23 = ATgetArgument(t, 0);
                                                        p_23 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm n_27 = t;
                                                          int x_27 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm o_51 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, s_23, l_23);
                                                              t = d_2(t);
                                                              o_51 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, c_23, o_51);
                                                              t = d_2(t);
                                                              LocalPopChoice(x_27);
                                                            }
                                                          else
                                                            {
                                                              t = n_27;
                                                              {
                                                                ATerm z_27 = t;
                                                                int a_28 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm z_51 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                                    t = d_2(t);
                                                                    z_51 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, n_23, z_51);
                                                                    t = d_2(t);
                                                                    LocalPopChoice(a_28);
                                                                  }
                                                                else
                                                                  {
                                                                    t = z_27;
                                                                    t = t_23;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm b_28 = t;
                                                        int h_28 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm q_52 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, s_23, l_23);
                                                            t = d_2(t);
                                                            q_52 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, c_23, q_52);
                                                            t = d_2(t);
                                                            LocalPopChoice(h_28);
                                                          }
                                                        else
                                                          {
                                                            t = b_28;
                                                            t = t_23;
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
                                            l_23 = ATgetArgument(t, 1);
                                            t = s_23;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = r_23;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm j_28 = t;
                                                    int l_28 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_b_17;
                                                        t = d_2(t);
                                                        LocalPopChoice(l_28);
                                                      }
                                                    else
                                                      {
                                                        t = j_28;
                                                        {
                                                          ATerm p_28 = t;
                                                          int q_28 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm e_53 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, s_23, l_23);
                                                              t = d_2(t);
                                                              e_53 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, c_23, e_53);
                                                              t = d_2(t);
                                                              LocalPopChoice(q_28);
                                                            }
                                                          else
                                                            {
                                                              t = p_28;
                                                              t = t_23;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        n_23 = ATgetArgument(t, 0);
                                                        p_23 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm r_28 = t;
                                                          int s_28 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm x_53 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                              t = d_2(t);
                                                              x_53 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_23, x_53);
                                                              t = d_2(t);
                                                              LocalPopChoice(s_28);
                                                            }
                                                          else
                                                            {
                                                              t = r_28;
                                                              {
                                                                ATerm t_28 = t;
                                                                int y_28 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm h_54 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, s_23, l_23);
                                                                    t = d_2(t);
                                                                    h_54 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, c_23, h_54);
                                                                    t = d_2(t);
                                                                    LocalPopChoice(y_28);
                                                                  }
                                                                else
                                                                  {
                                                                    t = t_28;
                                                                    t = t_23;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            n_23 = ATgetArgument(t, 0);
                                                            p_23 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm z_28 = t;
                                                              int a_29 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm q_54 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, s_23, l_23);
                                                                  t = d_2(t);
                                                                  q_54 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, c_23, q_54);
                                                                  t = d_2(t);
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
                                                                        ATerm e_55 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                                        t = d_2(t);
                                                                        e_55 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, n_23, e_55);
                                                                        t = d_2(t);
                                                                        LocalPopChoice(c_29);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = b_29;
                                                                        t = t_23;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm d_29 = t;
                                                            int e_29 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm j_55 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, s_23, l_23);
                                                                t = d_2(t);
                                                                j_55 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, c_23, j_55);
                                                                t = d_2(t);
                                                                LocalPopChoice(e_29);
                                                              }
                                                            else
                                                              {
                                                                t = d_29;
                                                                t = t_23;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = s_23;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = r_23;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm f_29 = t;
                                                    int g_29 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_b_17;
                                                        t = d_2(t);
                                                        LocalPopChoice(g_29);
                                                      }
                                                    else
                                                      {
                                                        t = f_29;
                                                        t = t_23;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        n_23 = ATgetArgument(t, 0);
                                                        p_23 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_29 = t;
                                                          int i_29 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_56 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                              t = d_2(t);
                                                              z_56 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_23, z_56);
                                                              t = d_2(t);
                                                              LocalPopChoice(i_29);
                                                            }
                                                          else
                                                            {
                                                              t = h_29;
                                                              t = t_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            n_23 = ATgetArgument(t, 0);
                                                            p_23 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm j_29 = t;
                                                              int k_29 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm e_57 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_23, r_23);
                                                                  t = d_2(t);
                                                                  e_57 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, n_23, e_57);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(k_29);
                                                                }
                                                              else
                                                                {
                                                                  t = j_29;
                                                                  t = t_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = t_23;
                                                          }
                                                      }
                                                  }
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
                    s_23 = ATgetArgument(t, 0);
                    r_23 = ATgetArgument(t, 1);
                    t = r_23;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = s_23;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm l_29 = t;
                            int m_29 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_u_16;
                                t = d_2(t);
                                LocalPopChoice(m_29);
                              }
                            else
                              {
                                t = l_29;
                                t = s_23;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = r_23;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    n_23 = ATgetArgument(t, 0);
                                    p_23 = ATgetArgument(t, 1);
                                    t = s_23;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        n_23 = ATgetArgument(t, 0);
                                        t = s_23;
                                      }
                                    else
                                      {
                                        t = s_23;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = s_23;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm n_29 = t;
                            int q_29 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_u_16;
                                t = d_2(t);
                                LocalPopChoice(q_29);
                              }
                            else
                              {
                                t = n_29;
                                {
                                  ATerm s_29 = t;
                                  int t_29 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = r_23;
                                      if((s_23 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(t_29);
                                    }
                                  else
                                    {
                                      t = s_29;
                                      t = t_23;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = r_23;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    n_23 = ATgetArgument(t, 0);
                                    p_23 = ATgetArgument(t, 1);
                                    {
                                      ATerm u_29 = t;
                                      int w_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm r_59 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, p_23, r_23);
                                          t = d_2(t);
                                          r_59 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, n_23, r_59);
                                          t = d_2(t);
                                          LocalPopChoice(w_29);
                                        }
                                      else
                                        {
                                          t = u_29;
                                          {
                                            ATerm x_29 = t;
                                            int y_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = r_23;
                                                if((s_23 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(y_29);
                                              }
                                            else
                                              {
                                                t = x_29;
                                                t = t_23;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        n_23 = ATgetArgument(t, 0);
                                        {
                                          ATerm z_29 = t;
                                          int a_30 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = r_23;
                                              if((s_23 != t))
                                                {
                                                  _fail(t);
                                                }
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
                                                    t = n_23;
                                                    t = topdown_1_0(e_3, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, n_23);
                                                    t = bottomup_1_0(d_2, t);
                                                    LocalPopChoice(c_30);
                                                  }
                                                else
                                                  {
                                                    t = b_30;
                                                    t = t_23;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm d_30 = t;
                                        int e_30 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = r_23;
                                            if((s_23 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(e_30);
                                          }
                                        else
                                          {
                                            t = d_30;
                                            t = t_23;
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
                        s_23 = ATgetArgument(t, 0);
                        r_23 = ATgetArgument(t, 1);
                        t = r_23;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = s_23;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm f_30 = t;
                                int g_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_u_16;
                                    t = d_2(t);
                                    LocalPopChoice(g_30);
                                  }
                                else
                                  {
                                    t = f_30;
                                    t = r_23;
                                  }
                              }
                            else
                              {
                                ATerm h_30 = t;
                                int i_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_u_16;
                                    t = d_2(t);
                                    LocalPopChoice(i_30);
                                  }
                                else
                                  {
                                    t = h_30;
                                    t = t_23;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = s_23;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm j_30 = t;
                                    int k_30 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_b_17;
                                        t = d_2(t);
                                        LocalPopChoice(k_30);
                                      }
                                    else
                                      {
                                        t = j_30;
                                        t = r_23;
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
                                        t = t_23;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    c_23 = ATgetArgument(t, 0);
                                    l_23 = ATgetArgument(t, 1);
                                    t = s_23;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = r_23;
                                      }
                                    else
                                      {
                                        ATerm n_30 = t;
                                        int o_30 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm n_61 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, s_23, c_23);
                                            t = conc_0_0(t);
                                            n_61 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, n_61, l_23);
                                            t = bottomup_1_0(d_2, t);
                                            LocalPopChoice(o_30);
                                          }
                                        else
                                          {
                                            t = n_30;
                                            t = t_23;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = s_23;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = r_23;
                                      }
                                    else
                                      {
                                        t = t_23;
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
                                ATerm s_30 = ATgetArgument(t, 0);
                                r_23 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(q_30);
                            t = r_23;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm t_30 = t;
                                int u_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_u_16;
                                    t = d_2(t);
                                    LocalPopChoice(u_30);
                                  }
                                else
                                  {
                                    t = t_30;
                                    t = t_23;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm v_30 = t;
                                    int w_30 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_b_17;
                                        t = d_2(t);
                                        LocalPopChoice(w_30);
                                      }
                                    else
                                      {
                                        t = v_30;
                                        t = t_23;
                                      }
                                  }
                                else
                                  {
                                    t = t_23;
                                  }
                              }
                          }
                        else
                          {
                            t = p_30;
                            if(match_cons(t, sym_All_1))
                              {
                                s_23 = ATgetArgument(t, 0);
                                t = s_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm y_30 = t;
                                    int z_30 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_u_16;
                                        t = d_2(t);
                                        LocalPopChoice(z_30);
                                      }
                                    else
                                      {
                                        t = y_30;
                                        t = t_23;
                                      }
                                  }
                                else
                                  {
                                    t = t_23;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    s_23 = ATgetArgument(t, 0);
                                    t = s_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm a_31 = t;
                                        int b_31 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_u_16;
                                            t = d_2(t);
                                            LocalPopChoice(b_31);
                                          }
                                        else
                                          {
                                            t = a_31;
                                            {
                                              ATerm d_31 = t;
                                              int f_31 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,x_62 = NULL,y_62 = NULL,k_63 = NULL,l_63 = NULL,a_64 = NULL;
                                                  t = t_23;
                                                  t = new_0_0(t);
                                                  o_62 = t;
                                                  t = bottomup_1_0(d_2, t);
                                                  l_63 = t;
                                                  t = (ATerm) ATempty;
                                                  t = d_2(t);
                                                  a_64 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(a_64), l_63);
                                                  t = d_2(t);
                                                  p_62 = t;
                                                  t = o_62;
                                                  t = bottomup_1_0(d_2, t);
                                                  k_63 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, k_63);
                                                  t = d_2(t);
                                                  y_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, y_62);
                                                  t = d_2(t);
                                                  r_62 = t;
                                                  t = s_23;
                                                  t = bottomup_1_0(d_2, t);
                                                  t_62 = t;
                                                  t = o_62;
                                                  t = bottomup_1_0(d_2, t);
                                                  x_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, x_62);
                                                  t = d_2(t);
                                                  v_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, v_62);
                                                  t = d_2(t);
                                                  u_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_62, u_62);
                                                  t = d_2(t);
                                                  s_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, r_62, s_62);
                                                  t = d_2(t);
                                                  q_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, p_62, q_62);
                                                  t = d_2(t);
                                                  LocalPopChoice(f_31);
                                                }
                                              else
                                                {
                                                  t = d_31;
                                                  t = t_23;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm g_31 = t;
                                            int h_31 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_17;
                                                t = d_2(t);
                                                LocalPopChoice(h_31);
                                              }
                                            else
                                              {
                                                t = g_31;
                                                {
                                                  ATerm i_31 = t;
                                                  int j_31 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm h_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL;
                                                      t = t_23;
                                                      t = new_0_0(t);
                                                      h_64 = t;
                                                      t = bottomup_1_0(d_2, t);
                                                      e_65 = t;
                                                      t = (ATerm) ATempty;
                                                      t = d_2(t);
                                                      f_65 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(f_65), e_65);
                                                      t = d_2(t);
                                                      k_64 = t;
                                                      t = h_64;
                                                      t = bottomup_1_0(d_2, t);
                                                      d_65 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, d_65);
                                                      t = d_2(t);
                                                      w_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, w_64);
                                                      t = d_2(t);
                                                      m_64 = t;
                                                      t = s_23;
                                                      t = bottomup_1_0(d_2, t);
                                                      o_64 = t;
                                                      t = h_64;
                                                      t = bottomup_1_0(d_2, t);
                                                      v_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, v_64);
                                                      t = d_2(t);
                                                      u_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, u_64);
                                                      t = d_2(t);
                                                      t_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_64, t_64);
                                                      t = d_2(t);
                                                      n_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_64, n_64);
                                                      t = d_2(t);
                                                      l_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, k_64, l_64);
                                                      t = d_2(t);
                                                      LocalPopChoice(j_31);
                                                    }
                                                  else
                                                    {
                                                      t = i_31;
                                                      t = t_23;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                n_23 = ATgetArgument(t, 0);
                                                p_23 = ATgetArgument(t, 1);
                                                t = p_23;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    g_22 = ATgetArgument(t, 0);
                                                    i_22 = ATgetArgument(t, 1);
                                                    t = g_22;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        h_22 = ATgetArgument(t, 0);
                                                        t = n_23;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            t_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm l_31 = t;
                                                              int o_31 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm q_65 = NULL,r_65 = NULL,s_65 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, h_22);
                                                                  t = d_2(t);
                                                                  s_65 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, s_65, i_22);
                                                                  t = d_2(t);
                                                                  r_65 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, r_65);
                                                                  t = d_2(t);
                                                                  q_65 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, q_65);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(o_31);
                                                                }
                                                              else
                                                                {
                                                                  t = l_31;
                                                                  {
                                                                    ATerm q_31 = t;
                                                                    int r_31 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm w_65 = NULL,x_65 = NULL,y_65 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL;
                                                                        t = t_23;
                                                                        t = new_0_0(t);
                                                                        w_65 = t;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        n_66 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = d_2(t);
                                                                        o_66 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(o_66), n_66);
                                                                        t = d_2(t);
                                                                        x_65 = t;
                                                                        t = w_65;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        m_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, m_66);
                                                                        t = d_2(t);
                                                                        l_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, l_66);
                                                                        t = d_2(t);
                                                                        d_66 = t;
                                                                        t = s_23;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        f_66 = t;
                                                                        t = w_65;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        i_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, i_66);
                                                                        t = d_2(t);
                                                                        h_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, h_66);
                                                                        t = d_2(t);
                                                                        g_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, f_66, g_66);
                                                                        t = d_2(t);
                                                                        e_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, d_66, e_66);
                                                                        t = d_2(t);
                                                                        y_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, x_65, y_65);
                                                                        t = d_2(t);
                                                                        LocalPopChoice(r_31);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_31;
                                                                        t = t_23;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm t_31 = t;
                                                            int u_31 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL,q_67 = NULL,r_67 = NULL;
                                                                t = t_23;
                                                                t = new_0_0(t);
                                                                x_66 = t;
                                                                t = bottomup_1_0(d_2, t);
                                                                q_67 = t;
                                                                t = (ATerm) ATempty;
                                                                t = d_2(t);
                                                                r_67 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(r_67), q_67);
                                                                t = d_2(t);
                                                                y_66 = t;
                                                                t = x_66;
                                                                t = bottomup_1_0(d_2, t);
                                                                l_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, l_67);
                                                                t = d_2(t);
                                                                k_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, k_67);
                                                                t = d_2(t);
                                                                a_67 = t;
                                                                t = s_23;
                                                                t = bottomup_1_0(d_2, t);
                                                                e_67 = t;
                                                                t = x_66;
                                                                t = bottomup_1_0(d_2, t);
                                                                j_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, j_67);
                                                                t = d_2(t);
                                                                i_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, i_67);
                                                                t = d_2(t);
                                                                f_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, e_67, f_67);
                                                                t = d_2(t);
                                                                d_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, a_67, d_67);
                                                                t = d_2(t);
                                                                z_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, y_66, z_66);
                                                                t = d_2(t);
                                                                LocalPopChoice(u_31);
                                                              }
                                                            else
                                                              {
                                                                t = t_31;
                                                                t = t_23;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = n_23;
                                                        {
                                                          ATerm v_31 = t;
                                                          int y_31 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_67 = NULL,v_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL,o_68 = NULL;
                                                              t = t_23;
                                                              t = new_0_0(t);
                                                              u_67 = t;
                                                              t = bottomup_1_0(d_2, t);
                                                              l_68 = t;
                                                              t = (ATerm) ATempty;
                                                              t = d_2(t);
                                                              o_68 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(o_68), l_68);
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
                                                              z_67 = t;
                                                              t = s_23;
                                                              t = bottomup_1_0(d_2, t);
                                                              b_68 = t;
                                                              t = u_67;
                                                              t = bottomup_1_0(d_2, t);
                                                              i_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, i_68);
                                                              t = d_2(t);
                                                              h_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, h_68);
                                                              t = d_2(t);
                                                              g_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_68, g_68);
                                                              t = d_2(t);
                                                              a_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_67, a_68);
                                                              t = d_2(t);
                                                              y_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, v_67, y_67);
                                                              t = d_2(t);
                                                              LocalPopChoice(y_31);
                                                            }
                                                          else
                                                            {
                                                              t = v_31;
                                                              t = t_23;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = n_23;
                                                    {
                                                      ATerm f_32 = t;
                                                      int j_32 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm d_69 = NULL,e_69 = NULL,h_69 = NULL,k_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL,f_70 = NULL;
                                                          t = t_23;
                                                          t = new_0_0(t);
                                                          d_69 = t;
                                                          t = bottomup_1_0(d_2, t);
                                                          c_70 = t;
                                                          t = (ATerm) ATempty;
                                                          t = d_2(t);
                                                          f_70 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(f_70), c_70);
                                                          t = d_2(t);
                                                          e_69 = t;
                                                          t = d_69;
                                                          t = bottomup_1_0(d_2, t);
                                                          b_70 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, b_70);
                                                          t = d_2(t);
                                                          a_70 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, a_70);
                                                          t = d_2(t);
                                                          k_69 = t;
                                                          t = s_23;
                                                          t = bottomup_1_0(d_2, t);
                                                          o_69 = t;
                                                          t = d_69;
                                                          t = bottomup_1_0(d_2, t);
                                                          z_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, z_69);
                                                          t = d_2(t);
                                                          y_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, y_69);
                                                          t = d_2(t);
                                                          p_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, o_69, p_69);
                                                          t = d_2(t);
                                                          n_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, k_69, n_69);
                                                          t = d_2(t);
                                                          h_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, e_69, h_69);
                                                          t = d_2(t);
                                                          LocalPopChoice(j_32);
                                                        }
                                                      else
                                                        {
                                                          t = f_32;
                                                          t = t_23;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    n_23 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm k_32 = t;
                                                      int m_32 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, n_23);
                                                          t = d_2(t);
                                                          LocalPopChoice(m_32);
                                                        }
                                                      else
                                                        {
                                                          t = k_32;
                                                          {
                                                            ATerm o_32 = t;
                                                            int p_32 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,v_70 = NULL,y_70 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,i_71 = NULL,j_71 = NULL;
                                                                t = t_23;
                                                                t = new_0_0(t);
                                                                o_70 = t;
                                                                t = bottomup_1_0(d_2, t);
                                                                i_71 = t;
                                                                t = (ATerm) ATempty;
                                                                t = d_2(t);
                                                                j_71 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(j_71), i_71);
                                                                t = d_2(t);
                                                                p_70 = t;
                                                                t = o_70;
                                                                t = bottomup_1_0(d_2, t);
                                                                e_71 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, e_71);
                                                                t = d_2(t);
                                                                d_71 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, d_71);
                                                                t = d_2(t);
                                                                r_70 = t;
                                                                t = s_23;
                                                                t = bottomup_1_0(d_2, t);
                                                                v_70 = t;
                                                                t = o_70;
                                                                t = bottomup_1_0(d_2, t);
                                                                c_71 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, c_71);
                                                                t = d_2(t);
                                                                b_71 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, b_71);
                                                                t = d_2(t);
                                                                y_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, v_70, y_70);
                                                                t = d_2(t);
                                                                s_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, r_70, s_70);
                                                                t = d_2(t);
                                                                q_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, p_70, q_70);
                                                                t = d_2(t);
                                                                LocalPopChoice(p_32);
                                                              }
                                                            else
                                                              {
                                                                t = o_32;
                                                                t = t_23;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm q_32 = t;
                                                    int s_32 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm n_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,d_72 = NULL,g_72 = NULL,i_72 = NULL,j_72 = NULL;
                                                        t = t_23;
                                                        t = new_0_0(t);
                                                        n_71 = t;
                                                        t = bottomup_1_0(d_2, t);
                                                        i_72 = t;
                                                        t = (ATerm) ATempty;
                                                        t = d_2(t);
                                                        j_72 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(j_72), i_72);
                                                        t = d_2(t);
                                                        q_71 = t;
                                                        t = n_71;
                                                        t = bottomup_1_0(d_2, t);
                                                        g_72 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, g_72);
                                                        t = d_2(t);
                                                        d_72 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, d_72);
                                                        t = d_2(t);
                                                        s_71 = t;
                                                        t = s_23;
                                                        t = bottomup_1_0(d_2, t);
                                                        v_71 = t;
                                                        t = n_71;
                                                        t = bottomup_1_0(d_2, t);
                                                        y_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, y_71);
                                                        t = d_2(t);
                                                        x_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, x_71);
                                                        t = d_2(t);
                                                        w_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, v_71, w_71);
                                                        t = d_2(t);
                                                        t_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, s_71, t_71);
                                                        t = d_2(t);
                                                        r_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, q_71, r_71);
                                                        t = d_2(t);
                                                        LocalPopChoice(s_32);
                                                      }
                                                    else
                                                      {
                                                        t = q_32;
                                                        t = t_23;
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
                                        s_23 = ATgetArgument(t, 0);
                                        t = s_23;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm u_32 = t;
                                            int w_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_u_16;
                                                t = d_2(t);
                                                LocalPopChoice(w_32);
                                              }
                                            else
                                              {
                                                t = u_32;
                                                t = t_23;
                                              }
                                          }
                                        else
                                          {
                                            t = t_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            s_23 = ATgetArgument(t, 0);
                                            t = s_23;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm x_32 = t;
                                                int y_32 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_b_17;
                                                    t = d_2(t);
                                                    LocalPopChoice(y_32);
                                                  }
                                                else
                                                  {
                                                    t = x_32;
                                                    t = t_23;
                                                  }
                                              }
                                            else
                                              {
                                                t = t_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                s_23 = ATgetArgument(t, 0);
                                                t = s_23;
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
                                                        t = t_23;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = t_23;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm b_33 = t;
                                                int d_33 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm e_33 = ATgetArgument(t, 0);
                                                        r_23 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(d_33);
                                                    t = r_23;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm f_33 = t;
                                                        int i_33 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_b_17;
                                                            t = d_2(t);
                                                            LocalPopChoice(i_33);
                                                          }
                                                        else
                                                          {
                                                            t = f_33;
                                                            t = t_23;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = t_23;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = b_33;
                                                    {
                                                      ATerm k_33 = t;
                                                      int l_33 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm n_33 = ATgetArgument(t, 0);
                                                              r_23 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(l_33);
                                                          {
                                                            ATerm o_33 = t;
                                                            int p_33 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = r_23;
                                                                t = fetch_1_0(f_3, t);
                                                                t = term_b_17;
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(p_33);
                                                              }
                                                            else
                                                              {
                                                                t = o_33;
                                                                t = t_23;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = k_33;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              s_23 = ATgetArgument(t, 0);
                                                              r_23 = ATgetArgument(t, 1);
                                                              t = r_23;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = s_23;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = r_23;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          n_23 = ATgetArgument(t, 0);
                                                                          p_23 = ATgetArgument(t, 1);
                                                                          t = s_23;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = s_23;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = s_23;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = r_23;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          n_23 = ATgetArgument(t, 0);
                                                                          p_23 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm q_33 = t;
                                                                            int s_33 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm d_74 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, p_23, r_23);
                                                                                t = d_2(t);
                                                                                d_74 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, n_23, d_74);
                                                                                t = d_2(t);
                                                                                LocalPopChoice(s_33);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = q_33;
                                                                                {
                                                                                  ATerm t_33 = t;
                                                                                  int u_33 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = r_23;
                                                                                      if((s_23 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(u_33);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = t_33;
                                                                                      t = t_23;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm v_33 = t;
                                                                          int w_33 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = r_23;
                                                                              if((s_23 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(w_33);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = v_33;
                                                                              t = t_23;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  s_23 = ATgetArgument(t, 0);
                                                                  r_23 = ATgetArgument(t, 1);
                                                                  f_22 = ATgetArgument(t, 2);
                                                                  t = f_22;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm x_33 = t;
                                                                      int y_33 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, s_23, r_23);
                                                                          t = d_2(t);
                                                                          LocalPopChoice(y_33);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = x_33;
                                                                          t = t_23;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = t_23;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      s_23 = ATgetArgument(t, 0);
                                                                      r_23 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm z_33 = t;
                                                                        int a_34 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, s_23, r_23);
                                                                            t = d_2(t);
                                                                            LocalPopChoice(a_34);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = z_33;
                                                                            t = t_23;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          s_23 = ATgetArgument(t, 0);
                                                                          t = s_23;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              n_23 = ATgetFirst((ATermList) t);
                                                                              p_23 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm b_34 = t;
                                                                                int c_34 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm d_75 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, p_23);
                                                                                    t = d_2(t);
                                                                                    d_75 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, n_23, d_75);
                                                                                    t = d_2(t);
                                                                                    LocalPopChoice(c_34);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = b_34;
                                                                                    t = t_23;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm d_34 = t;
                                                                                  int f_34 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_b_17;
                                                                                      t = d_2(t);
                                                                                      LocalPopChoice(f_34);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = d_34;
                                                                                      t = t_23;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = t_23;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              s_23 = ATgetArgument(t, 0);
                                                                              t = s_23;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  n_23 = ATgetFirst((ATermList) t);
                                                                                  p_23 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm g_34 = t;
                                                                                    int h_34 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm n_75 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, p_23);
                                                                                        t = d_2(t);
                                                                                        n_75 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, n_23, n_75);
                                                                                        t = d_2(t);
                                                                                        LocalPopChoice(h_34);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = g_34;
                                                                                        t = t_23;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm j_34 = t;
                                                                                      int k_34 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_b_17;
                                                                                          t = d_2(t);
                                                                                          LocalPopChoice(k_34);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = j_34;
                                                                                          t = t_23;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = t_23;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  s_23 = ATgetArgument(t, 0);
                                                                                  t = s_23;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      n_23 = ATgetFirst((ATermList) t);
                                                                                      p_23 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm l_34 = t;
                                                                                        int m_34 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm w_75 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, p_23);
                                                                                            t = d_2(t);
                                                                                            w_75 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, n_23, w_75);
                                                                                            t = d_2(t);
                                                                                            LocalPopChoice(m_34);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = l_34;
                                                                                            t = t_23;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm n_34 = t;
                                                                                          int o_34 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_u_16;
                                                                                              t = d_2(t);
                                                                                              LocalPopChoice(o_34);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = n_34;
                                                                                              t = t_23;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = t_23;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      s_23 = ATgetArgument(t, 0);
                                                                                      r_23 = ATgetArgument(t, 1);
                                                                                      f_22 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm p_34 = t;
                                                                                        int r_34 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm n_76 = NULL,o_76 = NULL,p_76 = NULL,w_76 = NULL,x_76 = NULL;
                                                                                            t = term_t_34;
                                                                                            t = bottomup_1_0(d_2, t);
                                                                                            o_76 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = d_2(t);
                                                                                            x_76 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(x_76), f_22);
                                                                                            t = d_2(t);
                                                                                            w_76 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(w_76), s_23);
                                                                                            t = d_2(t);
                                                                                            p_76 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, o_76, p_76);
                                                                                            t = d_2(t);
                                                                                            n_76 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, r_23, n_76);
                                                                                            t = d_2(t);
                                                                                            LocalPopChoice(r_34);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = p_34;
                                                                                            t = t_23;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          s_23 = ATgetArgument(t, 0);
                                                                                          r_23 = ATgetArgument(t, 1);
                                                                                          f_22 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm v_34 = t;
                                                                                            int w_34 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm q_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL,x_77 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, r_23);
                                                                                                t = d_2(t);
                                                                                                t_77 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, f_22);
                                                                                                t = d_2(t);
                                                                                                w_77 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = d_2(t);
                                                                                                x_77 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(x_77), w_77);
                                                                                                t = d_2(t);
                                                                                                v_77 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(v_77), s_23);
                                                                                                t = d_2(t);
                                                                                                u_77 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(u_77), t_77);
                                                                                                t = d_2(t);
                                                                                                q_77 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, q_77);
                                                                                                t = d_2(t);
                                                                                                LocalPopChoice(w_34);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = v_34;
                                                                                                t = t_23;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              s_23 = ATgetArgument(t, 0);
                                                                                              r_23 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm y_34 = t;
                                                                                                int z_34 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm e_78 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, r_23);
                                                                                                    t = d_2(t);
                                                                                                    e_78 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, s_23, e_78);
                                                                                                    t = d_2(t);
                                                                                                    LocalPopChoice(z_34);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = y_34;
                                                                                                    t = t_23;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  s_23 = ATgetArgument(t, 0);
                                                                                                  r_23 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm a_35 = t;
                                                                                                    int b_35 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm i_78 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, s_23);
                                                                                                        t = d_2(t);
                                                                                                        i_78 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, i_78, r_23);
                                                                                                        t = d_2(t);
                                                                                                        LocalPopChoice(b_35);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = a_35;
                                                                                                        t = t_23;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      s_23 = ATgetArgument(t, 0);
                                                                                                      r_23 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm e_35 = t;
                                                                                                        int f_35 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm m_78 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, r_23);
                                                                                                            t = d_2(t);
                                                                                                            m_78 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, m_78, s_23);
                                                                                                            t = d_2(t);
                                                                                                            LocalPopChoice(f_35);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = e_35;
                                                                                                            t = t_23;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          s_23 = ATgetArgument(t, 0);
                                                                                                          r_23 = ATgetArgument(t, 1);
                                                                                                          t = r_23;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              c_23 = ATgetArgument(t, 0);
                                                                                                              l_23 = ATgetArgument(t, 1);
                                                                                                              t = s_23;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = r_23;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm g_35 = t;
                                                                                                                  int h_35 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm g_79 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, s_23, c_23);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      g_79 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, g_79, l_23);
                                                                                                                      t = bottomup_1_0(d_2, t);
                                                                                                                      LocalPopChoice(h_35);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = g_35;
                                                                                                                      t = t_23;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  c_23 = ATgetArgument(t, 0);
                                                                                                                  l_23 = ATgetArgument(t, 1);
                                                                                                                  r_22 = ATgetArgument(t, 2);
                                                                                                                  t = r_22;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = l_23;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = c_23;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              u_22 = ATgetArgument(t, 0);
                                                                                                                              t = s_23;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = r_23;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      n_23 = ATgetFirst((ATermList) t);
                                                                                                                                      p_23 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = p_23;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = n_23;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              t_22 = ATgetArgument(t, 0);
                                                                                                                                              m_22 = ATgetArgument(t, 1);
                                                                                                                                              j_22 = ATgetArgument(t, 2);
                                                                                                                                              k_22 = ATgetArgument(t, 3);
                                                                                                                                              t = j_22;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = m_22;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm i_35 = t;
                                                                                                                                                      int j_35 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = u_22;
                                                                                                                                                          if((t_22 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = k_22;
                                                                                                                                                          {
                                                                                                                                                            ATerm k_35 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm g_3 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm l_35 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(l_35, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((t_22 != ATgetArgument(l_35, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(l_35, 0));
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
                                                                                                                                                                t = k_35;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = k_22;
                                                                                                                                                          t = bottomup_1_0(d_2, t);
                                                                                                                                                          LocalPopChoice(j_35);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = i_35;
                                                                                                                                                          t = t_23;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = t_23;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = t_23;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = t_23;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = t_23;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = t_23;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = s_23;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = r_23;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = t_23;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = s_23;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = r_23;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = t_23;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = s_23;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = r_23;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = t_23;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = s_23;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = r_23;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = t_23;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              s_23 = ATgetArgument(t, 0);
                                                                                                              r_23 = ATgetArgument(t, 1);
                                                                                                              t = s_23;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = r_23;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = t_23;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = t_23;
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                  }
                                              }
                                          }
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
  ATerm i_82 = NULL,j_82 = NULL,k_82 = NULL,l_82 = NULL,h_18 = NULL,i_18 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm p_35 = ATgetArgument(t, 0);
      if(match_cons(p_35, sym_SVar_1))
        {
          k_82 = ATgetArgument(p_35, 0);
        }
      else
        _fail(t);
      i_82 = ATgetArgument(t, 1);
      j_82 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_82), (ATerm)ATempty, (ATerm) ATempty);
  h_18 = t;
  t = term_r_35;
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_35, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_82), (ATerm)ATempty, (ATerm) ATempty));
  t = g_7(i_18, h_18, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm s_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_35) != ATmakeSymbol("n_0", 0, ATtrue)))
        _fail(t);
      l_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_82), i_82, j_82);
  return(t);
}
ATerm SubsArgCall1_0_0 (ATerm t)
{
  ATerm m_82 = NULL,n_82 = NULL,l_18 = NULL;
  m_82 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm t_35 = ATgetArgument(t, 0);
      if(match_cons(t_35, sym_SVar_1))
        {
          ATerm y_35 = ATgetArgument(t_35, 0);
        }
      else
        _fail(t);
      {
        ATerm w_35 = ATgetArgument(t, 1);
        if(((ATgetType(w_35) != AT_LIST) || !(ATisEmpty(w_35))))
          _fail(t);
      }
      {
        ATerm x_35 = ATgetArgument(t, 2);
        if(((ATgetType(x_35) != AT_LIST) || !(ATisEmpty(x_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_z_35;
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_35, m_82);
  t = g_7(l_18, m_82, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm a_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_36) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      n_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_82;
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
  t = term_z_35;
  return(t);
}
ATerm substitute_arg_0_0 (ATerm t)
{
  ATerm d_83 = NULL,e_83 = NULL,g_83 = NULL,h_83 = NULL,k_83 = NULL,l_83 = NULL,m_83 = NULL,n_83 = NULL,o_83 = NULL,r_83 = NULL,u_83 = NULL;
  k_83 = t;
  if(match_cons(t, sym__2))
    {
      l_83 = ATgetArgument(t, 0);
      u_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_83;
  if(match_cons(t, sym_VarDec_2))
    {
      m_83 = ATgetArgument(t, 0);
      n_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_83;
  if(match_cons(t, sym_FunType_2))
    {
      o_83 = ATgetArgument(t, 0);
      {
        ATerm c_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = o_83;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_36 = ATgetFirst((ATermList) t);
      r_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_83;
  {
    ATerm l_36 = t;
    int o_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_36 = ATgetFirst((ATermList) t);
            ATerm u_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(o_36);
        {
          ATerm b_84 = NULL,c_84 = NULL;
          t = u_83;
          if(match_cons(t, sym_CallT_3))
            {
              d_83 = ATgetArgument(t, 0);
              g_83 = ATgetArgument(t, 1);
              h_83 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = d_83;
          if(match_cons(t, sym_SVar_1))
            {
              e_83 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_83;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = h_83;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_83), (ATerm)ATempty, (ATerm) ATempty);
          b_84 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_36, e_83);
          c_84 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_83), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_v_36, e_83));
          t = u_13(h_3, b_84, c_84, t);
          t = k_83;
        }
      }
    else
      {
        t = l_36;
        {
          ATerm i_84 = NULL,j_84 = NULL;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_83), (ATerm)ATempty, (ATerm) ATempty);
          i_84 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_36, u_83);
          j_84 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_83), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_z_36, u_83));
          t = u_13(i_3, i_84, j_84, t);
          t = k_83;
        }
      }
  }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_z_35;
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
static ATerm o_3 (ATerm t)
{
  ATerm o_84 = NULL,p_84 = NULL,q_84 = NULL,r_84 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_37 = ATgetArgument(t, 0);
      if(((ATgetType(d_37) == AT_LIST) && !(ATisEmpty(d_37))))
        {
          o_84 = ATgetFirst((ATermList) d_37);
          p_84 = (ATerm) ATgetNext((ATermList) d_37);
        }
      else
        _fail(t);
      {
        ATerm e_37 = ATgetArgument(t, 1);
        if(((ATgetType(e_37) == AT_LIST) && !(ATisEmpty(e_37))))
          {
            q_84 = ATgetFirst((ATermList) e_37);
            r_84 = (ATerm) ATgetNext((ATermList) e_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_84, q_84), (ATerm) ATmakeAppl(sym__2, p_84, r_84));
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm s_84 = NULL,u_84 = NULL;
  if(match_cons(t, sym__2))
    {
      s_84 = ATgetArgument(t, 0);
      u_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_84), s_84);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm f_37 = t;
  int h_37 = stack_ptr;
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
      LocalPopChoice(h_37);
    }
  else
    {
      t = f_37;
    }
  return(t);
}
ATerm substitute_args_0_0 (ATerm t)
{
  ATerm l_84 = NULL,m_84 = NULL,n_84 = NULL;
  static ATerm k_3 (ATerm t)
  {
    static ATerm m_3 (ATerm t)
    {
      if(match_cons(t, sym__3))
        {
          if(((l_84 != NULL) && (l_84 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            l_84 = ATgetArgument(t, 0);
          if(((m_84 != NULL) && (m_84 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            m_84 = ATgetArgument(t, 1);
          if(((n_84 != NULL) && (n_84 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            n_84 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, l_84, m_84);
      t = genzip_4_0(n_3, o_3, p_3, substitute_arg_0_0, t);
      t = n_84;
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
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_37 = ATgetArgument(t, 0);
      if(((ATgetType(m_37) == AT_LIST) && !(ATisEmpty(m_37))))
        {
          w_18 = ATgetFirst((ATermList) m_37);
          x_18 = (ATerm) ATgetNext((ATermList) m_37);
        }
      else
        _fail(t);
      {
        ATerm n_37 = ATgetArgument(t, 1);
        if(((ATgetType(n_37) == AT_LIST) && !(ATisEmpty(n_37))))
          {
            y_18 = ATgetFirst((ATermList) n_37);
            z_18 = (ATerm) ATgetNext((ATermList) n_37);
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
    ATerm p_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm r_37 = ATgetArgument(t, 0);
            f_19 = ATgetArgument(t, 1);
            g_19 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(q_37);
        t = (ATerm) ATmakeAppl(sym_SDef_3, i_19, f_19, g_19);
      }
    else
      {
        t = p_37;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm s_37 = ATgetArgument(t, 0);
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
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_37 = ATgetArgument(t, 0);
      if(((ATgetType(v_37) == AT_LIST) && !(ATisEmpty(v_37))))
        {
          e_20 = ATgetFirst((ATermList) v_37);
          f_20 = (ATerm) ATgetNext((ATermList) v_37);
        }
      else
        _fail(t);
      {
        ATerm w_37 = ATgetArgument(t, 1);
        if(((ATgetType(w_37) == AT_LIST) && !(ATisEmpty(w_37))))
          {
            g_20 = ATgetFirst((ATermList) w_37);
            h_20 = (ATerm) ATgetNext((ATermList) w_37);
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_20);
      }
    else
      {
        t = x_37;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm c_38 = ATgetArgument(t, 0);
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
      ATerm d_38 = ATgetArgument(t, 0);
      if(((ATgetType(d_38) != AT_LIST) || !(ATisEmpty(d_38))))
        _fail(t);
      {
        ATerm e_38 = ATgetArgument(t, 1);
        if(((ATgetType(e_38) != AT_LIST) || !(ATisEmpty(e_38))))
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
  ATerm x_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_38 = ATgetArgument(t, 0);
      if(((ATgetType(g_38) == AT_LIST) && !(ATisEmpty(g_38))))
        {
          x_21 = ATgetFirst((ATermList) g_38);
          a_22 = (ATerm) ATgetNext((ATermList) g_38);
        }
      else
        _fail(t);
      {
        ATerm l_38 = ATgetArgument(t, 1);
        if(((ATgetType(l_38) == AT_LIST) && !(ATisEmpty(l_38))))
          {
            b_22 = ATgetFirst((ATermList) l_38);
            c_22 = (ATerm) ATgetNext((ATermList) l_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_21, b_22), (ATerm) ATmakeAppl(sym__2, a_22, c_22));
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL;
  if(match_cons(t, sym__2))
    {
      d_22 = ATgetArgument(t, 0);
      e_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_22), d_22);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm o_22 = NULL,w_22 = NULL,x_22 = NULL;
  if(match_cons(t, sym__2))
    {
      o_22 = ATgetArgument(t, 0);
      x_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_22;
  {
    ATerm n_38 = t;
    int p_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm q_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_38);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_22);
      }
    else
      {
        t = n_38;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm s_38 = ATgetArgument(t, 0);
            w_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, x_22, w_22);
      }
  }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_38 = ATgetArgument(t, 0);
      if(((ATgetType(w_38) != AT_LIST) || !(ATisEmpty(w_38))))
        _fail(t);
      {
        ATerm y_38 = ATgetArgument(t, 1);
        if(((ATgetType(y_38) != AT_LIST) || !(ATisEmpty(y_38))))
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
  ATerm e_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_38 = ATgetArgument(t, 0);
      if(((ATgetType(z_38) == AT_LIST) && !(ATisEmpty(z_38))))
        {
          e_24 = ATgetFirst((ATermList) z_38);
          g_24 = (ATerm) ATgetNext((ATermList) z_38);
        }
      else
        _fail(t);
      {
        ATerm a_39 = ATgetArgument(t, 1);
        if(((ATgetType(a_39) == AT_LIST) && !(ATisEmpty(a_39))))
          {
            h_24 = ATgetFirst((ATermList) a_39);
            i_24 = (ATerm) ATgetNext((ATermList) a_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_24, h_24), (ATerm) ATmakeAppl(sym__2, g_24, i_24));
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm j_24 = NULL,l_24 = NULL;
  if(match_cons(t, sym__2))
    {
      j_24 = ATgetArgument(t, 0);
      l_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_24), j_24);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm n_24 = NULL,p_24 = NULL,q_24 = NULL;
  if(match_cons(t, sym__2))
    {
      n_24 = ATgetArgument(t, 0);
      q_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_24;
  {
    ATerm b_39 = t;
    int c_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm f_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_39);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, q_24);
      }
    else
      {
        t = b_39;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm h_39 = ATgetArgument(t, 0);
            p_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, q_24, p_24);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm k_109 (ATerm), ATerm t)
{
  ATerm l_92 = NULL,m_92 = NULL,n_92 = NULL,o_92 = NULL,p_92 = NULL;
  n_92 = t;
  if(match_cons(t, sym_Let_2))
    {
      o_92 = ATgetArgument(t, 0);
      p_92 = ATgetArgument(t, 1);
      {
        ATerm q_18 = NULL,t_18 = NULL,u_18 = NULL,t_4 = NULL;
        t = SSLgetAnnotations(n_92);
        q_18 = t;
        t = o_92;
        t = k_109(t);
        u_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_92, u_18);
        t = genzip_4_0(r_3, s_3, t_3, u_3, t);
        t_18 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, t_18, p_92);
        t_4 = t;
        t = SSLsetAnnotations(t_4, q_18);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          o_92 = ATgetArgument(t, 0);
          p_92 = ATgetArgument(t, 1);
          l_92 = ATgetArgument(t, 2);
          {
            ATerm x_19 = NULL,b_20 = NULL,c_20 = NULL,v_4 = NULL;
            t = SSLgetAnnotations(n_92);
            x_19 = t;
            t = p_92;
            t = k_109(t);
            c_20 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_92, c_20);
            t = genzip_4_0(v_3, w_3, x_3, y_3, t);
            b_20 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, o_92, b_20, l_92);
            v_4 = t;
            t = SSLsetAnnotations(v_4, x_19);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              o_92 = ATgetArgument(t, 0);
              p_92 = ATgetArgument(t, 1);
              l_92 = ATgetArgument(t, 2);
              m_92 = ATgetArgument(t, 3);
              {
                ATerm c_21 = NULL,u_21 = NULL,v_21 = NULL,w_4 = NULL;
                t = SSLgetAnnotations(n_92);
                c_21 = t;
                t = p_92;
                t = k_109(t);
                v_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, p_92, v_21);
                t = genzip_4_0(z_3, b_4, c_4, d_4, t);
                u_21 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, o_92, u_21, l_92, m_92);
                w_4 = t;
                t = SSLsetAnnotations(w_4, c_21);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  o_92 = ATgetArgument(t, 0);
                  p_92 = ATgetArgument(t, 1);
                  l_92 = ATgetArgument(t, 2);
                  m_92 = ATgetArgument(t, 3);
                  {
                    ATerm o_23 = NULL,b_24 = NULL,c_24 = NULL,x_4 = NULL;
                    t = SSLgetAnnotations(n_92);
                    o_23 = t;
                    t = p_92;
                    t = k_109(t);
                    c_24 = t;
                    t = (ATerm) ATmakeAppl(sym__2, p_92, c_24);
                    t = genzip_4_0(e_4, f_4, g_4, l_4, t);
                    b_24 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, o_92, b_24, l_92, m_92);
                    x_4 = t;
                    t = SSLsetAnnotations(x_4, o_23);
                  }
                }
              else
                {
                  ATerm s_25 = NULL,w_25 = NULL,z_4 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      o_92 = ATgetArgument(t, 0);
                      p_92 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(n_92);
                  s_25 = t;
                  t = o_92;
                  t = k_109(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_25 = ATgetFirst((ATermList) t);
                      {
                        ATerm i_39 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, w_25, p_92);
                  z_4 = t;
                  t = SSLsetAnnotations(z_4, s_25);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm l_109 (ATerm), ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t)
{
  ATerm j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL;
  l_95 = t;
  if(match_cons(t, sym_Let_2))
    {
      m_95 = ATgetArgument(t, 0);
      n_95 = ATgetArgument(t, 1);
      {
        ATerm l_26 = NULL,r_26 = NULL,s_26 = NULL,g_5 = NULL;
        t = SSLgetAnnotations(l_95);
        l_26 = t;
        t = m_95;
        t = l_109(t);
        r_26 = t;
        t = n_95;
        t = l_109(t);
        s_26 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, r_26, s_26);
        g_5 = t;
        t = SSLsetAnnotations(g_5, l_26);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          m_95 = ATgetArgument(t, 0);
          n_95 = ATgetArgument(t, 1);
          j_95 = ATgetArgument(t, 2);
          {
            ATerm j_27 = NULL,o_27 = NULL,p_27 = NULL,y_27 = NULL,i_5 = NULL;
            t = SSLgetAnnotations(l_95);
            j_27 = t;
            t = m_95;
            t = n_109(t);
            o_27 = t;
            t = n_95;
            t = n_109(t);
            p_27 = t;
            t = j_95;
            t = l_109(t);
            y_27 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, o_27, p_27, y_27);
            i_5 = t;
            t = SSLsetAnnotations(i_5, j_27);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              m_95 = ATgetArgument(t, 0);
              n_95 = ATgetArgument(t, 1);
              j_95 = ATgetArgument(t, 2);
              k_95 = ATgetArgument(t, 3);
              {
                ATerm u_28 = NULL,o_29 = NULL,p_29 = NULL,r_29 = NULL,v_29 = NULL,j_5 = NULL;
                t = SSLgetAnnotations(l_95);
                u_28 = t;
                t = m_95;
                t = n_109(t);
                o_29 = t;
                t = n_95;
                t = n_109(t);
                p_29 = t;
                t = j_95;
                t = n_109(t);
                r_29 = t;
                t = k_95;
                t = l_109(t);
                v_29 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, o_29, p_29, r_29, v_29);
                j_5 = t;
                t = SSLsetAnnotations(j_5, u_28);
              }
            }
          else
            {
              ATerm r_30 = NULL,c_31 = NULL,e_31 = NULL,k_5 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  m_95 = ATgetArgument(t, 0);
                  n_95 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(l_95);
              r_30 = t;
              t = m_95;
              t = n_109(t);
              c_31 = t;
              t = n_95;
              t = l_109(t);
              e_31 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, c_31, e_31);
              k_5 = t;
              t = SSLsetAnnotations(k_5, r_30);
            }
        }
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm v_95 = NULL;
  ATerm j_39 = t;
  int k_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          v_95 = ATgetArgument(t, 0);
          {
            ATerm l_39 = ATgetArgument(t, 1);
          }
          {
            ATerm m_39 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_39);
      t = v_95;
    }
  else
    {
      t = j_39;
      if(match_cons(t, sym_SDefT_4))
        {
          v_95 = ATgetArgument(t, 0);
          {
            ATerm n_39 = ATgetArgument(t, 1);
          }
          {
            ATerm o_39 = ATgetArgument(t, 2);
          }
          {
            ATerm p_39 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = v_95;
    }
  return(t);
}
static ATerm b_13 (ATerm p_25, ATerm o_25, ATerm t)
{
  t = p_25;
  t = map_1_0(n_4, t);
  return(t);
}
ATerm SVar_1_0 (ATerm r_91 (ATerm), ATerm t)
{
  ATerm m_96 = NULL,n_96 = NULL,o_96 = NULL,p_96 = NULL,p_5 = NULL;
  p_96 = t;
  if(match_cons(t, sym_SVar_1))
    {
      n_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_96);
  m_96 = t;
  t = n_96;
  t = r_91(t);
  o_96 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, o_96);
  p_5 = t;
  t = SSLsetAnnotations(p_5, m_96);
  return(t);
}
static ATerm m_13 (ATerm g_126 (ATerm), ATerm h_126 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_46, ATerm j_46, ATerm i_46, ATerm t)
{
  static ATerm o_4 (ATerm t)
  {
    ATerm r_96 = NULL;
    r_96 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_96, i_46);
    t = g_126(t);
    return(t);
  }
  static ATerm p_4 (ATerm t)
  {
    ATerm v_96 = NULL;
    v_96 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_96, j_46);
    t = g_126(t);
    return(t);
  }
  t = k_46;
  t = h_126(o_4, p_4, _id, t);
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
      ATerm r_39 = ATgetArgument(t, 0);
      if(((ATgetType(r_39) != AT_LIST) || !(ATisEmpty(r_39))))
        _fail(t);
      {
        ATerm s_39 = ATgetArgument(t, 1);
        if(((ATgetType(s_39) != AT_LIST) || !(ATisEmpty(s_39))))
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
  ATerm h_97 = NULL,i_97 = NULL,j_97 = NULL,k_97 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_39 = ATgetArgument(t, 0);
      if(((ATgetType(t_39) == AT_LIST) && !(ATisEmpty(t_39))))
        {
          h_97 = ATgetFirst((ATermList) t_39);
          i_97 = (ATerm) ATgetNext((ATermList) t_39);
        }
      else
        _fail(t);
      {
        ATerm u_39 = ATgetArgument(t, 1);
        if(((ATgetType(u_39) == AT_LIST) && !(ATisEmpty(u_39))))
          {
            j_97 = ATgetFirst((ATermList) u_39);
            k_97 = (ATerm) ATgetNext((ATermList) u_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_97, j_97), (ATerm) ATmakeAppl(sym__2, i_97, k_97));
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm l_97 = NULL,m_97 = NULL;
  if(match_cons(t, sym__2))
    {
      l_97 = ATgetArgument(t, 0);
      m_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_97), l_97);
  return(t);
}
static ATerm n_13 (ATerm a_126 (ATerm), ATerm b_126 (ATerm (ATerm), ATerm), ATerm c_46, ATerm f_46, ATerm t)
{
  ATerm y_96 = NULL,a_97 = NULL,b_97 = NULL,e_97 = NULL,g_97 = NULL;
  t = c_46;
  t = a_126(t);
  y_96 = t;
  t = map_1_0(new_0_0, t);
  a_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_96, a_97);
  t = genzip_4_0(q_4, r_4, s_4, _id, t);
  g_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_97, f_46);
  t = conc_0_0(t);
  b_97 = t;
  t = c_46;
  {
    static ATerm u_4 (ATerm t)
    {
      t = a_97;
      return(t);
    }
    t = b_126(u_4, t);
  }
  e_97 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_97, f_46, b_97);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm s_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL,z_97 = NULL,a_98 = NULL;
  w_97 = t;
  if(match_cons(t, sym__2))
    {
      x_97 = ATgetArgument(t, 0);
      y_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_97;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_97 = ATgetFirst((ATermList) t);
      a_98 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_97;
  if(match_cons(t, sym__2))
    {
      s_97 = ATgetArgument(t, 0);
      v_97 = ATgetArgument(t, 1);
      {
        ATerm d_40 = t;
        int h_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_97;
            if((x_97 != t))
              {
                _fail(t);
              }
            t = v_97;
            LocalPopChoice(h_40);
          }
        else
          {
            t = d_40;
            t = (ATerm) ATmakeAppl(sym__2, x_97, a_98);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, x_97, a_98);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm o_126 (ATerm), ATerm t)
{
  static ATerm i_99 (ATerm t)
  {
    ATerm i_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_126(t);
        LocalPopChoice(j_40);
      }
    else
      {
        t = i_40;
        {
          ATerm e_99 = NULL,f_99 = NULL,g_99 = NULL;
          static ATerm y_4 (ATerm t)
          {
            ATerm s_31 = NULL;
            s_31 = t;
            t = (ATerm) ATmakeAppl(sym__2, s_31, not_null(g_99));
            t = i_99(t);
            return(t);
          }
          e_99 = t;
          if(match_cons(t, sym__2))
            {
              f_99 = ATgetArgument(t, 0);
              if(((g_99 != NULL) && (g_99 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                g_99 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_99;
          t = SRTS_all(y_4, t);
        }
      }
    return(t);
  }
  t = i_99(t);
  return(t);
}
ATerm rename_4_0 (ATerm v_125 (ATerm (ATerm), ATerm), ATerm w_125 (ATerm), ATerm x_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm y_125 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm s_99 = NULL;
  static ATerm v_100 (ATerm t)
  {
    static ATerm a_5 (ATerm t)
    {
      ATerm k_100 = NULL,l_100 = NULL,o_100 = NULL;
      k_100 = t;
      if(match_cons(t, sym__2))
        {
          l_100 = ATgetArgument(t, 0);
          o_100 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm k_40 = t;
        int l_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_5 (ATerm t)
            {
              ATerm t_100 = NULL;
              t_100 = t;
              t = (ATerm) ATmakeAppl(sym__2, t_100, o_100);
              t = lookup_0_0(t);
              return(t);
            }
            t = l_100;
            t = v_125(b_5, t);
            LocalPopChoice(l_40);
          }
        else
          {
            t = k_40;
            {
              ATerm n_32 = NULL,t_32 = NULL,v_32 = NULL;
              t = k_100;
              t = n_13(w_125, y_125, l_100, o_100, t);
              if(match_cons(t, sym__3))
                {
                  n_32 = ATgetArgument(t, 0);
                  t_32 = ATgetArgument(t, 1);
                  v_32 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = m_13(v_100, x_125, n_32, t_32, v_32, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(a_5, t);
    return(t);
  }
  s_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_99, (ATerm) ATempty);
  t = v_100(t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_40 = ATgetArgument(t, 0);
      if(((ATgetType(m_40) != AT_LIST) || !(ATisEmpty(m_40))))
        _fail(t);
      {
        ATerm n_40 = ATgetArgument(t, 1);
        if(((ATgetType(n_40) != AT_LIST) || !(ATisEmpty(n_40))))
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
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL,m_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_40 = ATgetArgument(t, 0);
      if(((ATgetType(o_40) == AT_LIST) && !(ATisEmpty(o_40))))
        {
          d_36 = ATgetFirst((ATermList) o_40);
          e_36 = (ATerm) ATgetNext((ATermList) o_40);
        }
      else
        _fail(t);
      {
        ATerm p_40 = ATgetArgument(t, 1);
        if(((ATgetType(p_40) == AT_LIST) && !(ATisEmpty(p_40))))
          {
            f_36 = ATgetFirst((ATermList) p_40);
            m_36 = (ATerm) ATgetNext((ATermList) p_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_36, f_36), (ATerm) ATmakeAppl(sym__2, e_36, m_36));
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm n_36 = NULL,p_36 = NULL;
  if(match_cons(t, sym__2))
    {
      n_36 = ATgetArgument(t, 0);
      p_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_36), n_36);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm t_36 = NULL,w_36 = NULL,x_36 = NULL;
  if(match_cons(t, sym__2))
    {
      t_36 = ATgetArgument(t, 0);
      x_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_36;
  {
    ATerm q_40 = t;
    int s_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm t_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_40);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_36);
      }
    else
      {
        t = q_40;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm u_40 = ATgetArgument(t, 0);
            w_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, x_36, w_36);
      }
  }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_40 = ATgetArgument(t, 0);
      if(((ATgetType(v_40) != AT_LIST) || !(ATisEmpty(v_40))))
        _fail(t);
      {
        ATerm y_40 = ATgetArgument(t, 1);
        if(((ATgetType(y_40) != AT_LIST) || !(ATisEmpty(y_40))))
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
  ATerm m_38 = NULL,o_38 = NULL,r_38 = NULL,t_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_40 = ATgetArgument(t, 0);
      if(((ATgetType(z_40) == AT_LIST) && !(ATisEmpty(z_40))))
        {
          m_38 = ATgetFirst((ATermList) z_40);
          o_38 = (ATerm) ATgetNext((ATermList) z_40);
        }
      else
        _fail(t);
      {
        ATerm a_41 = ATgetArgument(t, 1);
        if(((ATgetType(a_41) == AT_LIST) && !(ATisEmpty(a_41))))
          {
            r_38 = ATgetFirst((ATermList) a_41);
            t_38 = (ATerm) ATgetNext((ATermList) a_41);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_38, r_38), (ATerm) ATmakeAppl(sym__2, o_38, t_38));
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL;
  if(match_cons(t, sym__2))
    {
      u_38 = ATgetArgument(t, 0);
      v_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_38), u_38);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm x_38 = NULL,d_39 = NULL,g_39 = NULL;
  if(match_cons(t, sym__2))
    {
      x_38 = ATgetArgument(t, 0);
      g_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_38;
  {
    ATerm c_41 = t;
    int d_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm e_41 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(d_41);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_39);
      }
    else
      {
        t = c_41;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm f_41 = ATgetArgument(t, 0);
            d_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, g_39, d_39);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm g_109 (ATerm), ATerm t)
{
  ATerm v_103 = NULL,w_103 = NULL,x_103 = NULL,y_103 = NULL,z_103 = NULL;
  v_103 = t;
  if(match_cons(t, sym_Scope_2))
    {
      w_103 = ATgetArgument(t, 0);
      x_103 = ATgetArgument(t, 1);
      {
        ATerm j_33 = NULL,m_33 = NULL,s_5 = NULL;
        t = SSLgetAnnotations(v_103);
        j_33 = t;
        t = w_103;
        t = g_109(t);
        m_33 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, m_33, x_103);
        s_5 = t;
        t = SSLsetAnnotations(s_5, j_33);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          w_103 = ATgetArgument(t, 0);
          x_103 = ATgetArgument(t, 1);
          y_103 = ATgetArgument(t, 2);
          z_103 = ATgetArgument(t, 3);
          {
            ATerm q_34 = NULL,c_35 = NULL,b_36 = NULL,w_5 = NULL;
            t = SSLgetAnnotations(v_103);
            q_34 = t;
            t = y_103;
            t = g_109(t);
            b_36 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_103, b_36);
            t = genzip_4_0(c_5, d_5, f_5, h_5, t);
            c_35 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, w_103, x_103, c_35, z_103);
            w_5 = t;
            t = SSLsetAnnotations(w_5, q_34);
          }
        }
      else
        {
          ATerm a_38 = NULL,h_38 = NULL,k_38 = NULL,x_5 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              w_103 = ATgetArgument(t, 0);
              x_103 = ATgetArgument(t, 1);
              y_103 = ATgetArgument(t, 2);
              z_103 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_103);
          a_38 = t;
          t = y_103;
          t = g_109(t);
          k_38 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_103, k_38);
          t = genzip_4_0(l_5, m_5, n_5, o_5, t);
          h_38 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, w_103, x_103, h_38, z_103);
          x_5 = t;
          t = SSLsetAnnotations(x_5, a_38);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm t)
{
  ATerm a_107 = NULL,b_107 = NULL,c_107 = NULL,d_107 = NULL,e_107 = NULL;
  d_107 = t;
  if(match_cons(t, sym_Scope_2))
    {
      e_107 = ATgetArgument(t, 0);
      a_107 = ATgetArgument(t, 1);
      {
        ATerm r_40 = NULL,w_40 = NULL,x_40 = NULL,b_6 = NULL;
        t = SSLgetAnnotations(d_107);
        r_40 = t;
        t = e_107;
        t = j_109(t);
        w_40 = t;
        t = a_107;
        t = h_109(t);
        x_40 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, w_40, x_40);
        b_6 = t;
        t = SSLsetAnnotations(b_6, r_40);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          e_107 = ATgetArgument(t, 0);
          a_107 = ATgetArgument(t, 1);
          b_107 = ATgetArgument(t, 2);
          c_107 = ATgetArgument(t, 3);
          {
            ATerm q_41 = NULL,k_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,d_6 = NULL;
            t = SSLgetAnnotations(d_107);
            q_41 = t;
            t = e_107;
            t = j_109(t);
            k_42 = t;
            t = a_107;
            t = j_109(t);
            t_42 = t;
            t = b_107;
            t = j_109(t);
            u_42 = t;
            t = c_107;
            t = h_109(t);
            v_42 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, k_42, t_42, u_42, v_42);
            d_6 = t;
            t = SSLsetAnnotations(d_6, q_41);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              e_107 = ATgetArgument(t, 0);
              a_107 = ATgetArgument(t, 1);
              b_107 = ATgetArgument(t, 2);
              c_107 = ATgetArgument(t, 3);
              {
                ATerm p_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,e_6 = NULL;
                t = SSLgetAnnotations(d_107);
                p_43 = t;
                t = e_107;
                t = j_109(t);
                v_43 = t;
                t = a_107;
                t = j_109(t);
                w_43 = t;
                t = b_107;
                t = j_109(t);
                x_43 = t;
                t = c_107;
                t = h_109(t);
                y_43 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, v_43, w_43, x_43, y_43);
                e_6 = t;
                t = SSLsetAnnotations(e_6, p_43);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  e_107 = ATgetArgument(t, 0);
                  {
                    ATerm i_44 = NULL,k_44 = NULL,f_6 = NULL;
                    t = SSLgetAnnotations(d_107);
                    i_44 = t;
                    t = e_107;
                    t = h_109(t);
                    k_44 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, k_44);
                    f_6 = t;
                    t = SSLsetAnnotations(f_6, i_44);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      e_107 = ATgetArgument(t, 0);
                      {
                        ATerm y_44 = NULL,a_45 = NULL,g_6 = NULL;
                        t = SSLgetAnnotations(d_107);
                        y_44 = t;
                        t = e_107;
                        t = h_109(t);
                        a_45 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, a_45);
                        g_6 = t;
                        t = SSLsetAnnotations(g_6, y_44);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          e_107 = ATgetArgument(t, 0);
                          {
                            ATerm q_45 = NULL,v_45 = NULL,i_6 = NULL;
                            t = SSLgetAnnotations(d_107);
                            q_45 = t;
                            t = e_107;
                            t = h_109(t);
                            v_45 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, v_45);
                            i_6 = t;
                            t = SSLsetAnnotations(i_6, q_45);
                          }
                        }
                      else
                        {
                          ATerm h_46 = NULL,m_46 = NULL,j_6 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              e_107 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(d_107);
                          h_46 = t;
                          t = e_107;
                          t = h_109(t);
                          m_46 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, m_46);
                          j_6 = t;
                          t = SSLsetAnnotations(j_6, h_46);
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
  ATerm g_108 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_108);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm g_41 = t;
  int h_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_41);
    }
  else
    {
      t = g_41;
      {
        ATerm j_41 = t;
        int k_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_41);
          }
        else
          {
            t = j_41;
            {
              ATerm i_108 = NULL,j_108 = NULL,o_108 = NULL,p_108 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  i_108 = ATgetArgument(t, 0);
                  j_108 = ATgetArgument(t, 1);
                  o_108 = ATgetArgument(t, 2);
                  p_108 = ATgetArgument(t, 3);
                  t = o_108;
                  t = map_1_0(t_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_108 = ATgetArgument(t, 0);
                      j_108 = ATgetArgument(t, 1);
                      o_108 = ATgetArgument(t, 2);
                      p_108 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_108;
                  t = map_1_0(u_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm w_108 = NULL;
  ATerm l_41 = t;
  int m_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_108 = ATgetArgument(t, 0);
          {
            ATerm n_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_41);
      t = w_108;
    }
  else
    {
      t = l_41;
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
static ATerm u_5 (ATerm t)
{
  ATerm f_109 = NULL;
  ATerm o_41 = t;
  int p_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_109 = ATgetArgument(t, 0);
          {
            ATerm r_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_41);
      t = f_109;
    }
  else
    {
      t = o_41;
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
static ATerm v_5 (ATerm t)
{
  ATerm r_109 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_109);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm s_41 = t;
  int t_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_41);
    }
  else
    {
      t = s_41;
      {
        ATerm u_41 = t;
        int v_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_41);
          }
        else
          {
            t = u_41;
            {
              ATerm u_109 = NULL,v_109 = NULL,x_109 = NULL,y_109 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  u_109 = ATgetArgument(t, 0);
                  v_109 = ATgetArgument(t, 1);
                  x_109 = ATgetArgument(t, 2);
                  y_109 = ATgetArgument(t, 3);
                  t = x_109;
                  t = map_1_0(z_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      u_109 = ATgetArgument(t, 0);
                      v_109 = ATgetArgument(t, 1);
                      x_109 = ATgetArgument(t, 2);
                      y_109 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_109;
                  t = map_1_0(a_6, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm f_110 = NULL;
  ATerm w_41 = t;
  int y_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_110 = ATgetArgument(t, 0);
          {
            ATerm z_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_41);
      t = f_110;
    }
  else
    {
      t = w_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_110;
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm u_110 = NULL;
  ATerm a_42 = t;
  int b_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_110 = ATgetArgument(t, 0);
          {
            ATerm c_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_42);
      t = u_110;
    }
  else
    {
      t = a_42;
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
static ATerm c_6 (ATerm t)
{
  ATerm y_110 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_110);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm d_42 = t;
  int h_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_42);
    }
  else
    {
      t = d_42;
      {
        ATerm j_42 = t;
        int q_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_42);
          }
        else
          {
            t = j_42;
            {
              ATerm a_111 = NULL,b_111 = NULL,c_111 = NULL,d_111 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  a_111 = ATgetArgument(t, 0);
                  b_111 = ATgetArgument(t, 1);
                  c_111 = ATgetArgument(t, 2);
                  d_111 = ATgetArgument(t, 3);
                  t = c_111;
                  t = map_1_0(l_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      a_111 = ATgetArgument(t, 0);
                      b_111 = ATgetArgument(t, 1);
                      c_111 = ATgetArgument(t, 2);
                      d_111 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_111;
                  t = map_1_0(m_6, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm m_111 = NULL;
  ATerm r_42 = t;
  int s_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_111 = ATgetArgument(t, 0);
          {
            ATerm w_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_42);
      t = m_111;
    }
  else
    {
      t = r_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_111 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_111;
    }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm v_111 = NULL;
  ATerm x_42 = t;
  int y_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_111 = ATgetArgument(t, 0);
          {
            ATerm z_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_42);
      t = v_111;
    }
  else
    {
      t = x_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_111 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_111;
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm z_111 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_111);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm e_43 = t;
  int f_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_43);
    }
  else
    {
      t = e_43;
      {
        ATerm i_43 = t;
        int j_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_43);
          }
        else
          {
            t = i_43;
            {
              ATerm b_112 = NULL,c_112 = NULL,d_112 = NULL,e_112 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  b_112 = ATgetArgument(t, 0);
                  c_112 = ATgetArgument(t, 1);
                  d_112 = ATgetArgument(t, 2);
                  e_112 = ATgetArgument(t, 3);
                  t = d_112;
                  t = map_1_0(p_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      b_112 = ATgetArgument(t, 0);
                      c_112 = ATgetArgument(t, 1);
                      d_112 = ATgetArgument(t, 2);
                      e_112 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_112;
                  t = map_1_0(q_6, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm l_112 = NULL;
  ATerm k_43 = t;
  int l_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_112 = ATgetArgument(t, 0);
          {
            ATerm m_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_43);
      t = l_112;
    }
  else
    {
      t = k_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_112 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_112;
    }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm u_112 = NULL;
  ATerm n_43 = t;
  int o_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_112 = ATgetArgument(t, 0);
          {
            ATerm q_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_43);
      t = u_112;
    }
  else
    {
      t = n_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_112 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_112;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm e_108 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      e_108 = ATgetArgument(t, 0);
      t = e_108;
      t = free_vars_3_0(q_5, r_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          e_108 = ATgetArgument(t, 0);
          t = e_108;
          t = free_vars_3_0(v_5, y_5, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              e_108 = ATgetArgument(t, 0);
              t = e_108;
              t = free_vars_3_0(c_6, k_6, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  e_108 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = e_108;
              t = free_vars_3_0(n_6, o_6, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm g_13 (ATerm k_121 (ATerm), ATerm d_43, ATerm c_43, ATerm t)
{
  static ATerm m_113 (ATerm t)
  {
    ATerm h_113 = NULL,i_113 = NULL,j_113 = NULL;
    h_113 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_43;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_113 = ATgetFirst((ATermList) t);
            j_113 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_43 = t;
          int s_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_113;
              {
                static ATerm r_6 (ATerm t)
                {
                  t = c_43;
                  return(t);
                }
                t = h_13(k_121, r_6, i_113, j_113, t);
              }
              t = m_113(t);
              LocalPopChoice(s_43);
            }
          else
            {
              t = r_43;
              {
                ATerm d_47 = NULL,g_47 = NULL,v_6 = NULL;
                t = SSLgetAnnotations(h_113);
                d_47 = t;
                t = j_113;
                t = m_113(t);
                g_47 = t;
                t = (ATerm) ATinsert(CheckATermList(g_47), i_113);
                v_6 = t;
                t = SSLsetAnnotations(v_6, d_47);
              }
            }
        }
      }
    return(t);
  }
  t = d_43;
  t = m_113(t);
  return(t);
}
static ATerm h_13 (ATerm n_121 (ATerm), ATerm o_121 (ATerm), ATerm h_43, ATerm g_43, ATerm t)
{
  t = o_121(t);
  {
    static ATerm s_6 (ATerm t)
    {
      ATerm q_113 = NULL;
      q_113 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_43, q_113);
      t = n_121(t);
      return(t);
    }
    t = fetch_1_0(s_6, t);
  }
  t = g_43;
  return(t);
}
static ATerm i_13 (ATerm f_121 (ATerm), ATerm b_43, ATerm a_43, ATerm t)
{
  static ATerm i_114 (ATerm t)
  {
    ATerm d_114 = NULL,e_114 = NULL,f_114 = NULL;
    d_114 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_114;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_114 = ATgetFirst((ATermList) t);
            f_114 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_43 = t;
          int u_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_114;
              {
                static ATerm t_6 (ATerm t)
                {
                  t = a_43;
                  return(t);
                }
                t = h_13(f_121, t_6, e_114, f_114, t);
              }
              t = i_114(t);
              LocalPopChoice(u_43);
            }
          else
            {
              t = t_43;
              {
                ATerm e_48 = NULL,n_48 = NULL,x_6 = NULL;
                t = SSLgetAnnotations(d_114);
                e_48 = t;
                t = f_114;
                t = i_114(t);
                n_48 = t;
                t = (ATerm) ATinsert(CheckATermList(n_48), e_114);
                x_6 = t;
                t = SSLsetAnnotations(x_6, e_48);
              }
            }
        }
      }
    return(t);
  }
  t = b_43;
  t = i_114(t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_43 = ATgetArgument(t, 0);
      if(((ATgetType(z_43) != AT_LIST) || !(ATisEmpty(z_43))))
        _fail(t);
      {
        ATerm a_44 = ATgetArgument(t, 1);
        if(((ATgetType(a_44) != AT_LIST) || !(ATisEmpty(a_44))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm r_114 = NULL,x_114 = NULL,y_114 = NULL,z_114 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_44 = ATgetArgument(t, 0);
      if(((ATgetType(b_44) == AT_LIST) && !(ATisEmpty(b_44))))
        {
          r_114 = ATgetFirst((ATermList) b_44);
          x_114 = (ATerm) ATgetNext((ATermList) b_44);
        }
      else
        _fail(t);
      {
        ATerm c_44 = ATgetArgument(t, 1);
        if(((ATgetType(c_44) == AT_LIST) && !(ATisEmpty(c_44))))
          {
            y_114 = ATgetFirst((ATermList) c_44);
            z_114 = (ATerm) ATgetNext((ATermList) c_44);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_114, y_114), (ATerm) ATmakeAppl(sym__2, x_114, z_114));
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm a_115 = NULL,b_115 = NULL;
  if(match_cons(t, sym__2))
    {
      a_115 = ATgetArgument(t, 0);
      b_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_115), a_115);
  return(t);
}
static ATerm k_13 (ATerm r_639, ATerm w_639, ATerm d_62, ATerm t)
{
  ATerm l_114 = NULL,m_114 = NULL,n_114 = NULL,p_114 = NULL;
  t = SSL_explode_term(w_639);
  if(match_cons(t, sym__2))
    {
      l_114 = ATgetArgument(t, 0);
      n_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(r_639);
  if(match_cons(t, sym__2))
    {
      if((l_114 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      m_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_114, n_114);
  t = genzip_4_0(u_6, w_6, y_6, _id, t);
  p_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_114, d_62);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm t)
{
  static ATerm d_115 (ATerm t)
  {
    ATerm d_44 = t;
    int e_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_116(t);
        LocalPopChoice(e_44);
      }
    else
      {
        t = d_44;
        t = t_116(t);
        t = d_115(t);
      }
    return(t);
  }
  t = d_115(t);
  return(t);
}
ATerm for_3_0 (ATerm v_116 (ATerm), ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm t)
{
  t = v_116(t);
  t = while_not_2_0(w_116, x_116, t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm k_115 = NULL;
  k_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, k_115);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm l_115 = NULL,m_115 = NULL,n_115 = NULL,o_115 = NULL,b_7 = NULL;
  o_115 = t;
  if(match_cons(t, sym__2))
    {
      m_115 = ATgetArgument(t, 0);
      n_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_115);
  l_115 = t;
  t = n_115;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_115, n_115);
  b_7 = t;
  t = SSLsetAnnotations(b_7, l_115);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm o_116 = NULL,p_116 = NULL,q_116 = NULL,r_116 = NULL,y_116 = NULL;
  o_116 = t;
  if(match_cons(t, sym__2))
    {
      p_116 = ATgetArgument(t, 0);
      q_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_116;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_116 = ATgetFirst((ATermList) t);
      y_116 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_44 = t;
        int g_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_117(p_116, q_116, o_116, t);
            LocalPopChoice(g_44);
          }
        else
          {
            t = f_44;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_116), r_116), y_116);
          }
      }
    }
  else
    {
      t = i_117(p_116, q_116, o_116, t);
    }
  return(t);
}
static ATerm i_117 (ATerm q_115, ATerm r_115, ATerm t_115, ATerm t)
{
  ATerm u_115 = NULL,z_115 = NULL,d_7 = NULL,f_116 = NULL,g_116 = NULL,h_116 = NULL,i_116 = NULL;
  t = SSLgetAnnotations(t_115);
  u_115 = t;
  t = r_115;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_116 = ATgetFirst((ATermList) t);
      i_116 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_116;
  if(match_cons(t, sym__2))
    {
      g_116 = ATgetArgument(t, 0);
      h_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_44 = t;
    int j_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_116;
        if((g_116 != t))
          {
            _fail(t);
          }
        t = i_116;
        LocalPopChoice(j_44);
      }
    else
      {
        t = h_44;
        t = r_115;
        t = k_13(g_116, h_116, i_116, t);
      }
  }
  z_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_115, z_115);
  d_7 = t;
  t = SSLsetAnnotations(d_7, u_115);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm h_117 = NULL;
  if(match_cons(t, sym__2))
    {
      h_117 = ATgetArgument(t, 0);
      if((h_117 != ATgetArgument(t, 1)))
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
  ATerm l_44 = t;
  int m_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(z_6, a_7, c_7, t);
      LocalPopChoice(m_44);
    }
  else
    {
      t = l_44;
      {
        ATerm c_117 = NULL,d_117 = NULL,e_117 = NULL;
        c_117 = t;
        if(match_cons(t, sym__2))
          {
            d_117 = ATgetArgument(t, 0);
            e_117 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_117;
        t = i_13(e_7, d_117, e_117, t);
      }
    }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL;
  if(match_cons(t, sym__2))
    {
      o_49 = ATgetArgument(t, 0);
      p_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_13(o_7, o_49, p_49, t);
  return(t);
}
static ATerm o_7 (ATerm t)
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
static ATerm q_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm e_50 = NULL,h_50 = NULL;
  if(match_cons(t, sym__2))
    {
      e_50 = ATgetArgument(t, 0);
      h_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_13(u_7, e_50, h_50, t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm k_50 = NULL;
  if(match_cons(t, sym__2))
    {
      k_50 = ATgetArgument(t, 0);
      if((k_50 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm a_128 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm f_118 (ATerm t)
  {
    ATerm n_44 = t;
    int o_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_127(t);
        LocalPopChoice(o_44);
      }
    else
      {
        t = n_44;
        {
          ATerm p_44 = t;
          int q_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_117 = NULL,l_117 = NULL,y_48 = NULL,d_49 = NULL;
              k_117 = t;
              t = z_127(t);
              l_117 = t;
              t = k_117;
              {
                static ATerm h_7 (ATerm t)
                {
                  ATerm o_117 = NULL;
                  t = f_118(t);
                  o_117 = t;
                  t = (ATerm) ATmakeAppl(sym__2, o_117, l_117);
                  t = diff_0_0(t);
                  return(t);
                }
                t = a_128(h_7, f_118, j_7, t);
              }
              d_49 = t;
              t = SSL_explode_term(d_49);
              if(match_cons(t, sym__2))
                {
                  ATerm s_44 = ATgetArgument(t, 0);
                  y_48 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_48;
              t = foldr_3_0(l_7, n_7, _id, t);
              LocalPopChoice(q_44);
            }
          else
            {
              t = p_44;
              {
                ATerm w_49 = NULL,z_49 = NULL;
                z_49 = t;
                t = SSL_explode_term(z_49);
                if(match_cons(t, sym__2))
                  {
                    ATerm t_44 = ATgetArgument(t, 0);
                    w_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = w_49;
                t = foldr_3_0(q_7, t_7, f_118, t);
              }
            }
        }
      }
    return(t);
  }
  t = f_118(t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm y_118 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_118);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm u_44 = t;
  int v_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_44);
    }
  else
    {
      t = u_44;
      {
        ATerm w_44 = t;
        int x_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_44);
          }
        else
          {
            t = w_44;
            {
              ATerm c_119 = NULL,d_119 = NULL,e_119 = NULL,f_119 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  c_119 = ATgetArgument(t, 0);
                  d_119 = ATgetArgument(t, 1);
                  e_119 = ATgetArgument(t, 2);
                  f_119 = ATgetArgument(t, 3);
                  t = e_119;
                  t = map_1_0(b_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_119 = ATgetArgument(t, 0);
                      d_119 = ATgetArgument(t, 1);
                      e_119 = ATgetArgument(t, 2);
                      f_119 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_119;
                  t = map_1_0(c_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm o_119 = NULL;
  ATerm z_44 = t;
  int b_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_119 = ATgetArgument(t, 0);
          {
            ATerm c_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_45);
      t = o_119;
    }
  else
    {
      t = z_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_119 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_119;
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm x_119 = NULL;
  ATerm d_45 = t;
  int e_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_119 = ATgetArgument(t, 0);
          {
            ATerm g_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_45);
      t = x_119;
    }
  else
    {
      t = d_45;
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
ATerm Bind0_0_0 (ATerm t)
{
  ATerm n_118 = NULL,v_118 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      v_118 = ATgetArgument(t, 0);
      t = v_118;
      if(match_cons(t, sym_Rule_3))
        {
          n_118 = ATgetArgument(t, 0);
          {
            ATerm h_45 = ATgetArgument(t, 1);
          }
          {
            ATerm i_45 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = n_118;
      t = free_vars_3_0(w_7, z_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          v_118 = ATgetArgument(t, 0);
          {
            ATerm j_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = v_118;
    }
  return(t);
}
ATerm Var_1_0 (ATerm g_88 (ATerm), ATerm t)
{
  ATerm b_120 = NULL,c_120 = NULL,d_120 = NULL,e_120 = NULL,i_7 = NULL;
  e_120 = t;
  if(match_cons(t, sym_Var_1))
    {
      c_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_120);
  b_120 = t;
  t = c_120;
  t = g_88(t);
  d_120 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, d_120);
  i_7 = t;
  t = SSLsetAnnotations(i_7, b_120);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm k_45 = t;
  int l_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_45);
    }
  else
    {
      t = k_45;
      {
        ATerm n_120 = NULL,o_120 = NULL,p_120 = NULL,q_120 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            n_120 = ATgetArgument(t, 0);
            o_120 = ATgetArgument(t, 1);
            p_120 = ATgetArgument(t, 2);
            q_120 = ATgetArgument(t, 3);
            t = p_120;
            t = map_1_0(e_8, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                n_120 = ATgetArgument(t, 0);
                o_120 = ATgetArgument(t, 1);
                p_120 = ATgetArgument(t, 2);
                q_120 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = p_120;
            t = map_1_0(f_8, t);
          }
      }
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm x_120 = NULL;
  ATerm m_45 = t;
  int n_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_120 = ATgetArgument(t, 0);
          {
            ATerm o_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_45);
      t = x_120;
    }
  else
    {
      t = m_45;
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
static ATerm f_8 (ATerm t)
{
  ATerm i_121 = NULL;
  ATerm p_45 = t;
  int r_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_121 = ATgetArgument(t, 0);
          {
            ATerm s_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_45);
      t = i_121;
    }
  else
    {
      t = p_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_121 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_121;
    }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm p_121 = NULL,q_121 = NULL,s_121 = NULL,t_121 = NULL,z_121 = NULL;
  p_121 = t;
  if(match_cons(t, sym_Let_2))
    {
      q_121 = ATgetArgument(t, 0);
      s_121 = ATgetArgument(t, 1);
      t = p_121;
      t = b_13(q_121, s_121, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          q_121 = ATgetArgument(t, 0);
          s_121 = ATgetArgument(t, 1);
          t_121 = ATgetArgument(t, 2);
          t = s_121;
          t = map_1_0(h_8, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              q_121 = ATgetArgument(t, 0);
              s_121 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, q_121);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  q_121 = ATgetArgument(t, 0);
                  s_121 = ATgetArgument(t, 1);
                  t_121 = ATgetArgument(t, 2);
                  z_121 = ATgetArgument(t, 3);
                  t = s_121;
                  t = map_1_0(j_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_121 = ATgetArgument(t, 0);
                      s_121 = ATgetArgument(t, 1);
                      t_121 = ATgetArgument(t, 2);
                      z_121 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_121;
                  t = map_1_0(k_8, t);
                }
            }
        }
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm h_122 = NULL;
  ATerm t_45 = t;
  int w_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_122 = ATgetArgument(t, 0);
          {
            ATerm x_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_45);
      t = h_122;
    }
  else
    {
      t = t_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_122;
    }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm s_122 = NULL;
  ATerm y_45 = t;
  int z_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_122 = ATgetArgument(t, 0);
          {
            ATerm a_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_45);
      t = s_122;
    }
  else
    {
      t = y_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_122;
    }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm b_123 = NULL;
  ATerm b_46 = t;
  int d_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_123 = ATgetArgument(t, 0);
          {
            ATerm e_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_46);
      t = b_123;
    }
  else
    {
      t = b_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_123 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_123;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, d_8, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, g_8, sboundin_3_0, spaste_1_0, t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm c_54 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      c_54 = ATgetArgument(t, 0);
      {
        ATerm g_46 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = c_54;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_46 = ATgetArgument(t, 0);
      if(((ATgetType(l_46) != AT_LIST) || !(ATisEmpty(l_46))))
        _fail(t);
      {
        ATerm n_46 = ATgetArgument(t, 1);
        if(((ATgetType(n_46) != AT_LIST) || !(ATisEmpty(n_46))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm d_54 = NULL,e_54 = NULL,l_54 = NULL,m_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_46 = ATgetArgument(t, 0);
      if(((ATgetType(o_46) == AT_LIST) && !(ATisEmpty(o_46))))
        {
          d_54 = ATgetFirst((ATermList) o_46);
          e_54 = (ATerm) ATgetNext((ATermList) o_46);
        }
      else
        _fail(t);
      {
        ATerm p_46 = ATgetArgument(t, 1);
        if(((ATgetType(p_46) == AT_LIST) && !(ATisEmpty(p_46))))
          {
            l_54 = ATgetFirst((ATermList) p_46);
            m_54 = (ATerm) ATgetNext((ATermList) p_46);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_54, l_54), (ATerm) ATmakeAppl(sym__2, e_54, m_54));
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm o_54 = NULL,p_54 = NULL;
  if(match_cons(t, sym__2))
    {
      o_54 = ATgetArgument(t, 0);
      p_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_54), o_54);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm t_54 = NULL,u_54 = NULL;
  if(match_cons(t, sym__2))
    {
      t_54 = ATgetArgument(t, 0);
      u_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_54), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_54))));
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_v_13;
  return(t);
}
ATerm InlineCall_0_0 (ATerm t)
{
  ATerm c_125 = NULL,d_125 = NULL,e_125 = NULL,f_125 = NULL,g_125 = NULL;
  c_125 = t;
  if(match_cons(t, sym_CallT_3))
    {
      d_125 = ATgetArgument(t, 0);
      f_125 = ATgetArgument(t, 1);
      g_125 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_125;
  if(match_cons(t, sym_SVar_1))
    {
      e_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_46 = t;
    int r_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_51 = NULL,w_51 = NULL;
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_125), (ATerm)ATempty, (ATerm) ATempty);
        v_51 = t;
        t = term_v_13;
        w_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_v_13, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_125), (ATerm)ATempty, (ATerm) ATempty));
        t = g_7(w_51, v_51, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = c_125;
        _fail(t);
        LocalPopChoice(r_46);
      }
    else
      {
        t = q_46;
        {
          ATerm t_46 = t;
          int u_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_52 = NULL,m_52 = NULL;
              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_125), (ATerm)ATempty, (ATerm) ATempty);
              l_52 = t;
              t = term_v_13;
              m_52 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_v_13, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_125), (ATerm)ATempty, (ATerm) ATempty));
              t = g_7(m_52, l_52, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = c_125;
              _fail(t);
              LocalPopChoice(u_46);
            }
          else
            {
              t = t_46;
              {
                ATerm v_46 = t;
                int w_46 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_53 = NULL,h_53 = NULL,j_53 = NULL,k_53 = NULL,r_53 = NULL,s_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,a_55 = NULL,b_55 = NULL;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_125), (ATerm)ATempty, (ATerm) ATempty);
                    a_55 = t;
                    t = term_v_13;
                    b_55 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_v_13, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_125), (ATerm)ATempty, (ATerm) ATempty));
                    t = g_7(b_55, a_55, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm x_46 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) x_46) != ATmakeSymbol("d_0", 0, ATtrue)))
                          _fail(t);
                        g_53 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = g_53;
                    t = strename_0_0(t);
                    if(match_cons(t, sym_SDefT_4))
                      {
                        if((e_125 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        h_53 = ATgetArgument(t, 1);
                        k_53 = ATgetArgument(t, 2);
                        j_53 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__3, h_53, f_125, j_53);
                    t = substitute_args_0_0(t);
                    s_53 = t;
                    t = k_53;
                    t = map_1_0(q_8, t);
                    r_53 = t;
                    t = (ATerm) ATmakeAppl(sym__2, g_125, r_53);
                    t = genzip_4_0(u_8, v_8, w_8, x_8, t);
                    z_53 = t;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_125), (ATerm)ATempty, (ATerm) ATempty);
                    a_54 = t;
                    t = term_y_46;
                    b_54 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_125), (ATerm)ATempty, (ATerm) ATempty), term_y_46);
                    t = u_13(y_8, a_54, b_54, t);
                    t = (ATerm) ATmakeAppl(sym_Scope_2, r_53, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, z_53), s_53));
                    t = simplify_0_0(t);
                    LocalPopChoice(w_46);
                  }
                else
                  {
                    t = v_46;
                    {
                      ATerm q_55 = NULL,s_55 = NULL;
                      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_125), (ATerm)ATempty, (ATerm) ATempty);
                      q_55 = t;
                      t = term_v_13;
                      s_55 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_v_13, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_125), (ATerm)ATempty, (ATerm) ATempty));
                      t = g_7(s_55, q_55, t);
                      if(!(match_cons(t, sym_Undefined_0)))
                        _fail(t);
                      t = c_125;
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
  ATerm z_46 = t;
  if((PushChoice() == 0))
    {
      ATerm l_125 = NULL,m_125 = NULL;
      if(match_cons(t, sym__2))
        {
          l_125 = ATgetArgument(t, 0);
          m_125 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, l_125, m_125);
      {
        ATerm b_47 = t;
        int c_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(l_125, m_125);
            LocalPopChoice(c_47);
          }
        else
          {
            t = b_47;
            t = SSL_gtr(l_125, m_125);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, l_125, m_125);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_46;
    }
  return(t);
}
ATerm foldr_3_0 (ATerm h_124 (ATerm), ATerm i_124 (ATerm), ATerm j_124 (ATerm), ATerm t)
{
  ATerm o_125 = NULL,p_125 = NULL,q_125 = NULL;
  o_125 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_125;
      t = h_124(t);
    }
  else
    {
      ATerm t_125 = NULL,u_125 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_125 = ATgetFirst((ATermList) t);
          q_125 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_125;
      t = j_124(t);
      t_125 = t;
      t = q_125;
      t = foldr_3_0(h_124, i_124, j_124, t);
      u_125 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_125, u_125);
      t = i_124(t);
    }
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_e_47;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm a_56 = NULL,b_56 = NULL;
  if(match_cons(t, sym__2))
    {
      a_56 = ATgetArgument(t, 0);
      b_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(a_56, b_56, t);
  return(t);
}
ATerm occurrences_1_0 (ATerm r_121 (ATerm), ATerm t)
{
  ATerm e_126 = NULL,f_126 = NULL,i_126 = NULL,u_55 = NULL;
  i_126 = t;
  {
    ATerm f_47 = t;
    int h_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_121(t);
        t = term_g_14;
        LocalPopChoice(h_47);
      }
    else
      {
        t = f_47;
        t = term_e_47;
      }
  }
  e_126 = t;
  t = SSL_explode_term(i_126);
  if(match_cons(t, sym__2))
    {
      ATerm i_47 = ATgetArgument(t, 0);
      u_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_55;
  {
    static ATerm c_9 (ATerm t)
    {
      t = occurrences_1_0(r_121, t);
      return(t);
    }
    t = foldr_3_0(z_8, a_9, c_9, t);
  }
  f_126 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_126, f_126);
  t = n_15(e_126, f_126, t);
  return(t);
}
static ATerm s_13 (ATerm l_108 (ATerm), ATerm s_24, ATerm r_24, ATerm t)
{
  ATerm l_126 = NULL,m_126 = NULL;
  l_126 = t;
  t = r_24;
  {
    ATerm j_47 = t;
    if((PushChoice() == 0))
      {
        static ATerm d_9 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm k_47 = ATgetArgument(t, 0);
              if(match_cons(k_47, sym_SVar_1))
                {
                  if((s_24 != ATgetArgument(k_47, 0)))
                    {
                      _fail(ATgetArgument(k_47, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm l_47 = ATgetArgument(t, 1);
              }
              {
                ATerm n_47 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(d_9, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_47;
      }
  }
  t = l_108(t);
  {
    static ATerm h_9 (ATerm t)
    {
      if(match_cons(t, sym_CallT_3))
        {
          ATerm o_47 = ATgetArgument(t, 0);
          if(match_cons(o_47, sym_SVar_1))
            {
              if((s_24 != ATgetArgument(o_47, 0)))
                {
                  _fail(ATgetArgument(o_47, 0));
                }
            }
          else
            _fail(t);
          {
            ATerm p_47 = ATgetArgument(t, 1);
          }
          {
            ATerm q_47 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      return(t);
    }
    t = occurrences_1_0(h_9, t);
  }
  m_126 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_126, term_g_14);
  t = leq_0_0(t);
  t = l_126;
  return(t);
}
static ATerm u_13 (ATerm b_118 (ATerm), ATerm u_34, ATerm s_34, ATerm t)
{
  ATerm n_126 = NULL,q_126 = NULL,r_126 = NULL,s_126 = NULL,t_126 = NULL,u_126 = NULL,v_126 = NULL,w_126 = NULL;
  s_126 = t;
  t = b_118(t);
  n_126 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_126, u_34, s_34);
  t = t_15(n_126, u_34, s_34, t);
  {
    ATerm r_47 = t;
    int s_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_126 = NULL;
        t = term_t_47;
        x_126 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_126, term_t_47);
        t = s_15(n_126, x_126, t);
        LocalPopChoice(s_47);
      }
    else
      {
        t = r_47;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_126 = ATgetFirst((ATermList) t);
      r_126 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, n_126, term_t_47, (ATerm) ATinsert(CheckATermList(r_126), (ATerm) ATinsert(CheckATermList(q_126), u_34)));
  t = lookup_table_0_1(n_126, t);
  w_126 = t;
  t = term_t_47;
  t_126 = t;
  t = (ATerm) ATinsert(CheckATermList(r_126), (ATerm) ATinsert(CheckATermList(q_126), u_34));
  u_126 = t;
  t = w_126;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_15(t_126, u_126, v_126, t);
  t = s_126;
  return(t);
}
static ATerm w_13 (ATerm q_36, ATerm r_36, ATerm t)
{
  ATerm y_126 = NULL,z_126 = NULL;
  z_126 = t;
  {
    ATerm u_47 = t;
    int v_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_36, r_36);
        t = s_15(q_36, r_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_47 = ATgetFirst((ATermList) t);
            y_126 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(v_47);
        {
          ATerm a_127 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, q_36, r_36, y_126);
          t = lookup_table_0_1(q_36, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              a_127 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_15(r_36, y_126, a_127, t);
          t = (ATerm) ATmakeAppl(sym__3, q_36, r_36, y_126);
        }
      }
    else
      {
        t = u_47;
        {
          ATerm c_127 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, q_36, r_36);
          t = lookup_table_0_1(q_36, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              c_127 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_15(r_36, c_127, t);
          t = (ATerm) ATmakeAppl(sym__2, q_36, r_36);
        }
      }
  }
  t = z_126;
  return(t);
}
ATerm end_scope_1_0 (ATerm y_117 (ATerm), ATerm t)
{
  ATerm e_127 = NULL,f_127 = NULL,g_127 = NULL,h_127 = NULL,i_127 = NULL,j_127 = NULL,k_127 = NULL;
  h_127 = t;
  t = y_117(t);
  g_127 = t;
  {
    ATerm x_47 = t;
    int y_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_127 = NULL;
        t = term_t_47;
        l_127 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_127, term_t_47);
        t = s_15(g_127, l_127, t);
        LocalPopChoice(y_47);
      }
    else
      {
        t = x_47;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_127 = ATgetFirst((ATermList) t);
      e_127 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, g_127, term_t_47, e_127);
  t = lookup_table_0_1(g_127, t);
  k_127 = t;
  t = term_t_47;
  i_127 = t;
  t = k_127;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_15(i_127, e_127, j_127, t);
  t = f_127;
  {
    static ATerm i_9 (ATerm t)
    {
      ATerm m_127 = NULL;
      m_127 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_127, m_127);
      t = w_13(g_127, m_127, t);
      return(t);
    }
    t = map_1_0(i_9, t);
  }
  t = h_127;
  return(t);
}
ATerm restore_always_2_0 (ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t)
{
  ATerm z_47 = t;
  int a_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_113(t);
      t = o_113(t);
      LocalPopChoice(a_48);
    }
  else
    {
      t = z_47;
      t = o_113(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm x_117 (ATerm), ATerm t)
{
  ATerm o_127 = NULL,p_127 = NULL,q_127 = NULL,r_127 = NULL,s_127 = NULL,t_127 = NULL,u_127 = NULL;
  p_127 = t;
  t = x_117(t);
  o_127 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_127, term_t_47);
  {
    ATerm b_48 = t;
    int d_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_128 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_48 = ATgetArgument(t, 0);
            ATerm g_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_t_47;
        c_128 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_127, term_t_47);
        t = s_15(o_127, c_128, t);
        LocalPopChoice(d_48);
      }
    else
      {
        t = b_48;
        t = (ATerm) ATempty;
      }
  }
  q_127 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_127, term_t_47, (ATerm) ATinsert(CheckATermList(q_127), (ATerm) ATempty));
  t = lookup_table_0_1(o_127, t);
  u_127 = t;
  t = term_t_47;
  r_127 = t;
  t = (ATerm) ATinsert(CheckATermList(q_127), (ATerm) ATempty);
  s_127 = t;
  t = u_127;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_15(r_127, s_127, t_127, t);
  t = p_127;
  return(t);
}
ATerm scope_2_0 (ATerm z_117 (ATerm), ATerm a_118 (ATerm), ATerm t)
{
  static ATerm j_9 (ATerm t)
  {
    t = end_scope_1_0(z_117, t);
    return(t);
  }
  t = begin_scope_1_0(z_117, t);
  t = restore_always_2_0(a_118, j_9, t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = term_v_13;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = term_v_13;
  return(t);
}
ATerm inline_sdef_0_0 (ATerm t)
{
  static ATerm l_9 (ATerm t)
  {
    static ATerm n_9 (ATerm t)
    {
      ATerm h_48 = t;
      int i_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_128 = NULL,i_128 = NULL,j_128 = NULL;
          h_128 = t;
          {
            ATerm j_48 = t;
            int k_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    i_128 = ATgetArgument(t, 0);
                    {
                      ATerm l_48 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm o_48 = ATgetArgument(t, 2);
                    }
                    {
                      ATerm p_48 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(k_48);
                {
                  ATerm m_128 = NULL,n_128 = NULL;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_128), (ATerm)ATempty, (ATerm) ATempty);
                  m_128 = t;
                  t = term_y_46;
                  n_128 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_128), (ATerm)ATempty, (ATerm) ATempty), term_y_46);
                  t = u_13(p_9, m_128, n_128, t);
                  t = h_128;
                }
              }
            else
              {
                t = j_48;
                if(match_cons(t, sym_Let_2))
                  {
                    i_128 = ATgetArgument(t, 0);
                    j_128 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = i_128;
                {
                  static ATerm q_9 (ATerm t)
                  {
                    ATerm q_128 = NULL,r_128 = NULL;
                    if(match_cons(t, sym_SDefT_4))
                      {
                        q_128 = ATgetArgument(t, 0);
                        {
                          ATerm q_48 = ATgetArgument(t, 1);
                        }
                        {
                          ATerm r_48 = ATgetArgument(t, 2);
                        }
                        r_128 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    {
                      static ATerm z_9 (ATerm t)
                      {
                        t = j_128;
                        return(t);
                      }
                      t = s_13(z_9, q_128, r_128, t);
                    }
                    t = AddSDef_0_0(t);
                    return(t);
                  }
                  t = map_1_0(q_9, t);
                }
                t = (ATerm) ATmakeAppl(sym_Let_2, i_128, j_128);
              }
          }
          LocalPopChoice(i_48);
        }
      else
        {
          t = h_48;
          t = repeat_2_0(InlineCall_0_0, _id, t);
        }
      t = SRTS_all(inline_sdef_0_0, t);
      return(t);
    }
    t = scope_2_0(m_9, n_9, t);
    return(t);
  }
  t = scope_2_0(k_9, l_9, t);
  return(t);
}
ATerm topdown_1_0 (ATerm g_110 (ATerm), ATerm t)
{
  static ATerm a_10 (ATerm t)
  {
    t = topdown_1_0(g_110, t);
    return(t);
  }
  t = g_110(t);
  t = SRTS_all(a_10, t);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm s_48 = t;
  int t_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm u_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(t_48);
      {
        ATerm v_128 = NULL,w_128 = NULL;
        v_128 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm v_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        w_128 = t;
        t = SSLgetAnnotations(v_128);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_48 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) w_48) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm x_48 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(x_48) != AT_LIST) || !(ATisEmpty(x_48))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = w_128;
      }
    }
  else
    {
      t = s_48;
      {
        ATerm z_48 = t;
        int a_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm c_49 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) c_49) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm e_49 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(a_49);
            _fail(t);
          }
        else
          {
            t = z_48;
          }
      }
    }
  return(t);
}
static ATerm y_13 (ATerm n_79, ATerm m_79, ATerm t)
{
  t = n_79;
  t = topdown_1_0(d_10, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, n_79);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm f_129 = NULL,g_129 = NULL,i_129 = NULL,j_129 = NULL,k_129 = NULL,l_129 = NULL,m_129 = NULL,n_129 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      i_129 = ATgetArgument(t, 0);
      l_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_129;
  if(match_cons(t, sym_Match_1))
    {
      j_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_129;
  if(match_cons(t, sym_Var_1))
    {
      k_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_129;
  if(match_cons(t, sym_Seq_2))
    {
      m_129 = ATgetArgument(t, 0);
      g_129 = ATgetArgument(t, 1);
      t = m_129;
      if(match_cons(t, sym_Build_1))
        {
          n_129 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_129;
      if(match_cons(t, sym_Var_1))
        {
          f_129 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_129;
      if((k_129 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_129)), g_129);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          m_129 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_129;
      if(match_cons(t, sym_Var_1))
        {
          n_129 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_129;
      if((k_129 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_129));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm v_129 = NULL,w_129 = NULL,y_129 = NULL,z_129 = NULL,a_130 = NULL,b_130 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      y_129 = ATgetArgument(t, 0);
      a_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_129;
  if(match_cons(t, sym_Build_1))
    {
      z_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_130;
  if(match_cons(t, sym_Seq_2))
    {
      b_130 = ATgetArgument(t, 0);
      w_129 = ATgetArgument(t, 1);
      t = b_130;
      if(match_cons(t, sym_Match_1))
        {
          v_129 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_129;
      if((z_129 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_129), w_129);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          b_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_130;
      if((z_129 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, z_129);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm j_130 = NULL,k_130 = NULL,m_130 = NULL,n_130 = NULL,o_130 = NULL,p_130 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      m_130 = ATgetArgument(t, 0);
      o_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_130;
  if(match_cons(t, sym_Match_1))
    {
      n_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_130;
  if(match_cons(t, sym_Seq_2))
    {
      p_130 = ATgetArgument(t, 0);
      k_130 = ATgetArgument(t, 1);
      t = p_130;
      if(match_cons(t, sym_Match_1))
        {
          j_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_130;
      if((n_130 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_130), k_130);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          p_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_130;
      if((n_130 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, n_130);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm x_130 = NULL,y_130 = NULL,z_130 = NULL,b_131 = NULL,d_131 = NULL,e_131 = NULL,f_131 = NULL,g_131 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      b_131 = ATgetArgument(t, 0);
      d_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_131;
  if(match_cons(t, sym_Build_1))
    {
      ATerm f_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_131;
  if(match_cons(t, sym_Seq_2))
    {
      e_131 = ATgetArgument(t, 0);
      f_131 = ATgetArgument(t, 1);
      t = e_131;
      if(match_cons(t, sym_PrimT_3))
        {
          x_130 = ATgetArgument(t, 0);
          y_130 = ATgetArgument(t, 1);
          z_130 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, x_130, y_130, z_130), f_131);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          e_131 = ATgetArgument(t, 0);
          f_131 = ATgetArgument(t, 1);
          g_131 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, e_131, f_131, g_131);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm s_131 = NULL,t_131 = NULL,v_131 = NULL,x_131 = NULL,y_131 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      v_131 = ATgetArgument(t, 0);
      x_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_131;
  if(match_cons(t, sym_Build_1))
    {
      ATerm g_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_131;
  if(match_cons(t, sym_Seq_2))
    {
      y_131 = ATgetArgument(t, 0);
      t_131 = ATgetArgument(t, 1);
      t = y_131;
      if(match_cons(t, sym_Build_1))
        {
          s_131 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_131), t_131);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          y_131 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, y_131);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm s_114 (ATerm), ATerm t_114 (ATerm), ATerm u_114 (ATerm), ATerm v_114 (ATerm), ATerm t)
{
  static ATerm i_132 (ATerm t)
  {
    ATerm h_49 = t;
    int i_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_114(t);
        LocalPopChoice(i_49);
      }
    else
      {
        t = h_49;
        {
          ATerm c_132 = NULL,d_132 = NULL,e_132 = NULL,f_132 = NULL,g_132 = NULL,h_132 = NULL,k_7 = NULL;
          t = t_114(t);
          h_132 = t;
          if(match_cons(t, sym__2))
            {
              d_132 = ATgetArgument(t, 0);
              e_132 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_132);
          c_132 = t;
          t = d_132;
          t = v_114(t);
          f_132 = t;
          t = e_132;
          t = i_132(t);
          g_132 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_132, g_132);
          k_7 = t;
          t = SSLsetAnnotations(k_7, c_132);
          t = u_114(t);
        }
      }
    return(t);
  }
  t = i_132(t);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_49 = ATgetArgument(t, 0);
      if(((ATgetType(j_49) != AT_LIST) || !(ATisEmpty(j_49))))
        _fail(t);
      {
        ATerm k_49 = ATgetArgument(t, 1);
        if(((ATgetType(k_49) != AT_LIST) || !(ATisEmpty(k_49))))
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
  ATerm h_133 = NULL,i_133 = NULL,j_133 = NULL,k_133 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_49 = ATgetArgument(t, 0);
      if(((ATgetType(l_49) == AT_LIST) && !(ATisEmpty(l_49))))
        {
          h_133 = ATgetFirst((ATermList) l_49);
          i_133 = (ATerm) ATgetNext((ATermList) l_49);
        }
      else
        _fail(t);
      {
        ATerm m_49 = ATgetArgument(t, 1);
        if(((ATgetType(m_49) == AT_LIST) && !(ATisEmpty(m_49))))
          {
            j_133 = ATgetFirst((ATermList) m_49);
            k_133 = (ATerm) ATgetNext((ATermList) m_49);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_133, j_133), (ATerm) ATmakeAppl(sym__2, i_133, k_133));
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm l_133 = NULL,m_133 = NULL;
  if(match_cons(t, sym__2))
    {
      l_133 = ATgetArgument(t, 0);
      m_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_133), l_133);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm n_133 = NULL,o_133 = NULL;
  if(match_cons(t, sym__2))
    {
      n_133 = ATgetArgument(t, 0);
      o_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_133), (ATerm) ATmakeAppl(sym_Match_1, o_133));
  return(t);
}
static ATerm j_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_49 = ATgetArgument(t, 0);
      if(((ATgetType(n_49) != AT_LIST) || !(ATisEmpty(n_49))))
        _fail(t);
      {
        ATerm s_49 = ATgetArgument(t, 1);
        if(((ATgetType(s_49) != AT_LIST) || !(ATisEmpty(s_49))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm t_133 = NULL,u_133 = NULL,v_133 = NULL,w_133 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_49 = ATgetArgument(t, 0);
      if(((ATgetType(t_49) == AT_LIST) && !(ATisEmpty(t_49))))
        {
          t_133 = ATgetFirst((ATermList) t_49);
          u_133 = (ATerm) ATgetNext((ATermList) t_49);
        }
      else
        _fail(t);
      {
        ATerm u_49 = ATgetArgument(t, 1);
        if(((ATgetType(u_49) == AT_LIST) && !(ATisEmpty(u_49))))
          {
            v_133 = ATgetFirst((ATermList) u_49);
            w_133 = (ATerm) ATgetNext((ATermList) u_49);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_133, v_133), (ATerm) ATmakeAppl(sym__2, u_133, w_133));
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm x_133 = NULL,z_133 = NULL;
  if(match_cons(t, sym__2))
    {
      x_133 = ATgetArgument(t, 0);
      z_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_133), x_133);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm a_134 = NULL,b_134 = NULL;
  if(match_cons(t, sym__2))
    {
      a_134 = ATgetArgument(t, 0);
      b_134 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_134), (ATerm) ATmakeAppl(sym_Match_1, b_134));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm q_132 = NULL,r_132 = NULL,s_132 = NULL,u_132 = NULL,v_132 = NULL,w_132 = NULL,x_132 = NULL,y_132 = NULL,z_132 = NULL,a_133 = NULL,b_133 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      u_132 = ATgetArgument(t, 0);
      y_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_132;
  if(match_cons(t, sym_Build_1))
    {
      v_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_132;
  if(match_cons(t, sym_Op_2))
    {
      w_132 = ATgetArgument(t, 0);
      x_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_132;
  if(match_cons(t, sym_Seq_2))
    {
      z_132 = ATgetArgument(t, 0);
      s_132 = ATgetArgument(t, 1);
      {
        ATerm g_133 = NULL;
        t = z_132;
        if(match_cons(t, sym_Match_1))
          {
            a_133 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_133;
        if(match_cons(t, sym_Op_2))
          {
            q_132 = ATgetArgument(t, 0);
            r_132 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_132;
        if((w_132 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, x_132, r_132);
        t = genzip_4_0(e_10, f_10, g_10, i_10, t);
        g_133 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_133), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, w_132, x_132)), s_132));
      }
    }
  else
    {
      ATerm s_133 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          z_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_132;
      if(match_cons(t, sym_Op_2))
        {
          a_133 = ATgetArgument(t, 0);
          b_133 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_133;
      if((w_132 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, x_132, b_133);
      t = genzip_4_0(j_10, k_10, l_10, m_10, t);
      s_133 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_133), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, w_132, x_132)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm x_134 = NULL,a_135 = NULL,b_135 = NULL,c_135 = NULL,d_135 = NULL,f_135 = NULL,g_135 = NULL,h_135 = NULL;
  a_135 = t;
  if(match_cons(t, sym_Seq_2))
    {
      b_135 = ATgetArgument(t, 0);
      f_135 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_135;
  if(match_cons(t, sym_Build_1))
    {
      c_135 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_135;
  if(match_cons(t, sym_Op_2))
    {
      d_135 = ATgetArgument(t, 0);
      {
        ATerm v_49 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = f_135;
  {
    ATerm x_49 = t;
    int y_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            g_135 = ATgetArgument(t, 0);
            {
              ATerm a_50 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(y_49);
        t = g_135;
        if(match_cons(t, sym_Match_1))
          {
            h_135 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_135;
        if(match_cons(t, sym_Op_2))
          {
            x_134 = ATgetArgument(t, 0);
            {
              ATerm b_50 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_135, x_134);
        {
          ATerm c_50 = t;
          if((PushChoice() == 0))
            {
              ATerm k_56 = NULL;
              if(match_cons(t, sym__2))
                {
                  k_56 = ATgetArgument(t, 0);
                  if((k_56 != ATgetArgument(t, 1)))
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
              t = c_50;
            }
        }
        t = term_b_17;
      }
    else
      {
        t = x_49;
        if(match_cons(t, sym_Match_1))
          {
            g_135 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_135;
        if(match_cons(t, sym_Op_2))
          {
            h_135 = ATgetArgument(t, 0);
            {
              ATerm d_50 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_135, h_135);
        {
          ATerm f_50 = t;
          if((PushChoice() == 0))
            {
              ATerm v_56 = NULL;
              if(match_cons(t, sym__2))
                {
                  v_56 = ATgetArgument(t, 0);
                  if((v_56 != ATgetArgument(t, 1)))
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
              t = f_50;
            }
        }
        t = term_b_17;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm k_111 (ATerm), ATerm t)
{
  static ATerm l_135 (ATerm t)
  {
    ATerm g_50 = t;
    int i_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_111(t);
        LocalPopChoice(i_50);
      }
    else
      {
        t = g_50;
        t = SRTS_one(l_135, t);
      }
    return(t);
  }
  t = l_135(t);
  return(t);
}
ATerm at_end_1_0 (ATerm h_119 (ATerm), ATerm t)
{
  static ATerm g_136 (ATerm t)
  {
    ATerm d_136 = NULL,e_136 = NULL,f_136 = NULL;
    f_136 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_136 = ATgetFirst((ATermList) t);
        e_136 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_57 = NULL,x_57 = NULL,m_7 = NULL;
          t = SSLgetAnnotations(f_136);
          o_57 = t;
          t = e_136;
          t = g_136(t);
          x_57 = t;
          t = (ATerm) ATinsert(CheckATermList(x_57), d_136);
          m_7 = t;
          t = SSLsetAnnotations(m_7, o_57);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_136;
        t = h_119(t);
      }
    return(t);
  }
  t = g_136(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_135 = NULL,o_135 = NULL,p_135 = NULL;
  n_135 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_135;
    }
  else
    {
      static ATerm o_10 (ATerm t)
      {
        t = not_null(p_135);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_135 = ATgetFirst((ATermList) t);
          if(((p_135 != NULL) && (p_135 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_135 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_135;
      t = at_end_1_0(o_10, t);
    }
  return(t);
}
static ATerm z_136 (ATerm p_136, ATerm t)
{
  ATerm q_136 = NULL;
  t = SSL_explode_term(p_136);
  if(match_cons(t, sym__2))
    {
      ATerm j_50 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_50) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_136;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_136 = NULL,v_136 = NULL,w_136 = NULL;
  w_136 = t;
  if(match_cons(t, sym__2))
    {
      u_136 = ATgetArgument(t, 0);
      v_136 = ATgetArgument(t, 1);
      {
        ATerm l_50 = t;
        int m_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm p_10 (ATerm t)
            {
              t = v_136;
              return(t);
            }
            t = u_136;
            t = at_end_1_0(p_10, t);
            LocalPopChoice(m_50);
          }
        else
          {
            t = l_50;
            t = z_136(w_136, t);
          }
      }
    }
  else
    {
      t = z_136(w_136, t);
    }
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm s_137 = NULL,t_137 = NULL,u_137 = NULL,v_137 = NULL,w_137 = NULL,x_137 = NULL,y_137 = NULL,z_137 = NULL,a_138 = NULL,b_138 = NULL,c_138 = NULL,d_138 = NULL,e_138 = NULL;
  s_137 = t;
  if(match_cons(t, sym_Let_2))
    {
      t_137 = ATgetArgument(t, 0);
      a_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_138;
  if(match_cons(t, sym_Let_2))
    {
      b_138 = ATgetArgument(t, 0);
      d_138 = ATgetArgument(t, 1);
      {
        ATerm i_138 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, t_137, b_138);
        t = conc_0_0(t);
        i_138 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, i_138, d_138);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          b_138 = ATgetArgument(t, 0);
          d_138 = ATgetArgument(t, 1);
          e_138 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = t_137;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_137 = ATgetFirst((ATermList) t);
          z_137 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_137;
      if(match_cons(t, sym_SDefT_4))
        {
          v_137 = ATgetArgument(t, 0);
          w_137 = ATgetArgument(t, 1);
          x_137 = ATgetArgument(t, 2);
          y_137 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = w_137;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_137;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_137;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_138;
      if(match_cons(t, sym_SVar_1))
        {
          c_138 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_138;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_138;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_138;
      if((v_137 != t))
        {
          _fail(t);
        }
      t = y_137;
      {
        ATerm n_50 = t;
        if((PushChoice() == 0))
          {
            static ATerm r_10 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm p_50 = ATgetArgument(t, 0);
                  if(match_cons(p_50, sym_SVar_1))
                    {
                      if((v_137 != ATgetArgument(p_50, 0)))
                        {
                          _fail(ATgetArgument(p_50, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm q_50 = ATgetArgument(t, 1);
                    if(((ATgetType(q_50) != AT_LIST) || !(ATisEmpty(q_50))))
                      _fail(t);
                  }
                  {
                    ATerm r_50 = ATgetArgument(t, 2);
                    if(((ATgetType(r_50) != AT_LIST) || !(ATisEmpty(r_50))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(r_10, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = n_50;
          }
      }
      t = y_137;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm t_138 = NULL,u_138 = NULL,v_138 = NULL,w_138 = NULL,x_138 = NULL,y_138 = NULL,a_139 = NULL,b_139 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      a_139 = ATgetArgument(t, 0);
      t = a_139;
      if(match_cons(t, sym_Seq_2))
        {
          y_138 = ATgetArgument(t, 0);
          u_138 = ATgetArgument(t, 1);
          t = y_138;
          if(match_cons(t, sym_Where_1))
            {
              t_138 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_138;
          if(match_cons(t, sym_Seq_2))
            {
              v_138 = ATgetArgument(t, 0);
              x_138 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_138;
          if(match_cons(t, sym_Build_1))
            {
              w_138 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, t_138, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_138), x_138)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              y_138 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, y_138);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          a_139 = ATgetArgument(t, 0);
          t = a_139;
          if(match_cons(t, sym_Test_1))
            {
              y_138 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, y_138);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              a_139 = ATgetArgument(t, 0);
              t = a_139;
              if(match_cons(t, sym_Not_1))
                {
                  y_138 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, y_138);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  a_139 = ATgetArgument(t, 0);
                  b_139 = ATgetArgument(t, 1);
                  t = b_139;
                  if((a_139 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      a_139 = ATgetArgument(t, 0);
                      b_139 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = b_139;
                  if((a_139 != t))
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
  ATerm p_139 = NULL,q_139 = NULL,r_139 = NULL,s_139 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      p_139 = ATgetArgument(t, 0);
      s_139 = ATgetArgument(t, 1);
      t = p_139;
      if(match_cons(t, sym_LChoice_2))
        {
          q_139 = ATgetArgument(t, 0);
          r_139 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, q_139, (ATerm) ATmakeAppl(sym_LChoice_2, r_139, s_139));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          p_139 = ATgetArgument(t, 0);
          s_139 = ATgetArgument(t, 1);
          t = p_139;
          if(match_cons(t, sym_Seq_2))
            {
              q_139 = ATgetArgument(t, 0);
              r_139 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, q_139, (ATerm) ATmakeAppl(sym_Seq_2, r_139, s_139));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              p_139 = ATgetArgument(t, 0);
              s_139 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_139;
          if(match_cons(t, sym_Choice_2))
            {
              q_139 = ATgetArgument(t, 0);
              r_139 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, q_139, (ATerm) ATmakeAppl(sym_Choice_2, r_139, s_139));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm g_140 = NULL,h_140 = NULL,i_140 = NULL,k_140 = NULL,l_140 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      k_140 = ATgetArgument(t, 0);
      l_140 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, k_140, l_140);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          k_140 = ATgetArgument(t, 0);
          t = k_140;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_140 = ATgetFirst((ATermList) t);
              h_140 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, g_140, (ATerm) ATmakeAppl(sym_LChoices_1, h_140));
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
              k_140 = ATgetArgument(t, 0);
              t = k_140;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_140 = ATgetFirst((ATermList) t);
                  h_140 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, g_140, (ATerm) ATmakeAppl(sym_Choices_1, h_140));
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
                  k_140 = ATgetArgument(t, 0);
                  t = k_140;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      g_140 = ATgetFirst((ATermList) t);
                      h_140 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_140, (ATerm) ATmakeAppl(sym_Seqs_1, h_140));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_u_16;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      k_140 = ATgetArgument(t, 0);
                      l_140 = ATgetArgument(t, 1);
                      i_140 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, l_140, (ATerm) ATmakeAppl(sym_Op_2, term_t_34, (ATerm) ATinsert(ATinsert(ATempty, i_140), k_140)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          k_140 = ATgetArgument(t, 0);
                          l_140 = ATgetArgument(t, 1);
                          i_140 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, i_140)), k_140), (ATerm) ATmakeAppl(sym_Build_1, l_140)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              k_140 = ATgetArgument(t, 0);
                              l_140 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, k_140, (ATerm) ATmakeAppl(sym_Match_1, l_140));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  k_140 = ATgetArgument(t, 0);
                                  l_140 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_140), l_140);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      k_140 = ATgetArgument(t, 0);
                                      l_140 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_140), k_140);
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
static ATerm v_10 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm y_141 = NULL,z_141 = NULL,a_142 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      y_141 = ATgetArgument(t, 0);
      t = y_141;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_b_17;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          y_141 = ATgetArgument(t, 0);
          t = y_141;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_u_16;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              y_141 = ATgetArgument(t, 0);
              z_141 = ATgetArgument(t, 1);
              t = y_141;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_b_17;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  y_141 = ATgetArgument(t, 0);
                  z_141 = ATgetArgument(t, 1);
                  t = z_141;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_b_17;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      y_141 = ATgetArgument(t, 0);
                      z_141 = ATgetArgument(t, 1);
                      t = z_141;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_b_17;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          y_141 = ATgetArgument(t, 0);
                          t = y_141;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_b_17;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              y_141 = ATgetArgument(t, 0);
                              t = y_141;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_b_17;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  y_141 = ATgetArgument(t, 0);
                                  z_141 = ATgetArgument(t, 1);
                                  t = z_141;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_b_17;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      y_141 = ATgetArgument(t, 0);
                                      z_141 = ATgetArgument(t, 1);
                                      t = z_141;
                                      t = fetch_1_0(v_10, t);
                                      t = term_b_17;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          y_141 = ATgetArgument(t, 0);
                                          z_141 = ATgetArgument(t, 1);
                                          t = z_141;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = y_141;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = z_141;
                                                }
                                              else
                                                {
                                                  t = y_141;
                                                }
                                            }
                                          else
                                            {
                                              t = y_141;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = z_141;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              y_141 = ATgetArgument(t, 0);
                                              z_141 = ATgetArgument(t, 1);
                                              t = z_141;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = y_141;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = z_141;
                                                    }
                                                  else
                                                    {
                                                      t = y_141;
                                                    }
                                                }
                                              else
                                                {
                                                  t = y_141;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = z_141;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  y_141 = ATgetArgument(t, 0);
                                                  t = y_141;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_b_17;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      y_141 = ATgetArgument(t, 0);
                                                      z_141 = ATgetArgument(t, 1);
                                                      a_142 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = a_142;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_141, z_141);
                                                }
                                            }
                                        }
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
  ATerm f_143 = NULL,h_143 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      h_143 = ATgetArgument(t, 0);
      t = h_143;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_u_16;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          h_143 = ATgetArgument(t, 0);
          t = h_143;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_b_17;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              h_143 = ATgetArgument(t, 0);
              f_143 = ATgetArgument(t, 1);
              t = f_143;
              if(match_cons(t, sym_Id_0))
                {
                  t = h_143;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = f_143;
                    }
                  else
                    {
                      t = h_143;
                    }
                }
              else
                {
                  t = h_143;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = f_143;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  h_143 = ATgetArgument(t, 0);
                  f_143 = ATgetArgument(t, 1);
                  t = h_143;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_u_16;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      h_143 = ATgetArgument(t, 0);
                      f_143 = ATgetArgument(t, 1);
                      t = f_143;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_u_16;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          h_143 = ATgetArgument(t, 0);
                          f_143 = ATgetArgument(t, 1);
                          t = f_143;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_u_16;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              h_143 = ATgetArgument(t, 0);
                              t = h_143;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_u_16;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  h_143 = ATgetArgument(t, 0);
                                  t = h_143;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_u_16;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      h_143 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = h_143;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_u_16;
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
  ATerm s_50 = t;
  int t_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(t_50);
    }
  else
    {
      t = s_50;
      {
        ATerm u_50 = t;
        int v_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(v_50);
          }
        else
          {
            t = u_50;
            {
              ATerm w_50 = t;
              int x_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(x_50);
                }
              else
                {
                  t = w_50;
                  {
                    ATerm z_50 = t;
                    int a_51 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(a_51);
                      }
                    else
                      {
                        t = z_50;
                        {
                          ATerm b_51 = t;
                          int d_51 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(d_51);
                            }
                          else
                            {
                              t = b_51;
                              {
                                ATerm e_51 = t;
                                int f_51 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm w_143 = NULL,x_143 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        w_143 = ATgetArgument(t, 0);
                                        x_143 = ATgetArgument(t, 1);
                                        t = w_143;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = x_143;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            w_143 = ATgetArgument(t, 0);
                                            x_143 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = w_143;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = x_143;
                                      }
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
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(h_51);
                                        }
                                      else
                                        {
                                          t = g_51;
                                          {
                                            ATerm i_51 = t;
                                            int j_51 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(j_51);
                                              }
                                            else
                                              {
                                                t = i_51;
                                                {
                                                  ATerm k_51 = t;
                                                  int l_51 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
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
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(n_51);
                                                          }
                                                        else
                                                          {
                                                            t = m_51;
                                                            {
                                                              ATerm p_51 = t;
                                                              int q_51 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(q_51);
                                                                }
                                                              else
                                                                {
                                                                  t = p_51;
                                                                  {
                                                                    ATerm r_51 = t;
                                                                    int s_51 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(s_51);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_51;
                                                                        {
                                                                          ATerm t_51 = t;
                                                                          int u_51 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(u_51);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = t_51;
                                                                              {
                                                                                ATerm x_51 = t;
                                                                                int y_51 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(y_51);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = x_51;
                                                                                    {
                                                                                      ATerm a_144 = NULL,b_144 = NULL,c_144 = NULL,d_144 = NULL;
                                                                                      b_144 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          c_144 = ATgetArgument(t, 0);
                                                                                          d_144 = ATgetArgument(t, 1);
                                                                                          t = c_144;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              a_144 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = b_144;
                                                                                          t = y_13(a_144, d_144, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              c_144 = ATgetArgument(t, 0);
                                                                                              d_144 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = c_144;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = d_144;
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_2_0 (ATerm b_116 (ATerm), ATerm c_116 (ATerm), ATerm t)
{
  static ATerm h_144 (ATerm t)
  {
    ATerm a_52 = t;
    int b_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_116(t);
        t = h_144(t);
        LocalPopChoice(b_52);
      }
    else
      {
        t = a_52;
        t = c_116(t);
      }
    return(t);
  }
  t = h_144(t);
  return(t);
}
ATerm downup_1_0 (ATerm i_110 (ATerm), ATerm t)
{
  t = i_110(t);
  {
    static ATerm w_10 (ATerm t)
    {
      t = downup_1_0(i_110, t);
      return(t);
    }
    t = SRTS_all(w_10, t);
  }
  t = i_110(t);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = downup_1_0(b_11, t);
  {
    ATerm c_52 = t;
    int d_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        LocalPopChoice(d_52);
      }
    else
      {
        t = c_52;
      }
  }
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = repeat_2_0(Simplify_0_0, _id, t);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = inline_sdef_0_0(t);
  {
    ATerm e_52 = t;
    int f_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        LocalPopChoice(f_52);
      }
    else
      {
        t = e_52;
      }
  }
  return(t);
}
ATerm inline_sdefs_0_0 (ATerm t)
{
  t = map_1_0(x_10, t);
  t = map_1_0(c_11, t);
  return(t);
}
static ATerm e_15 (ATerm n_53, ATerm o_53, ATerm t)
{
  ATerm q_144 = NULL;
  t = SSL_fputc(n_53, o_53);
  q_144 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_144);
  return(t);
}
static ATerm f_15 (ATerm a_32, ATerm b_32, ATerm t)
{
  ATerm r_144 = NULL;
  t = SSL_write_term_to_stream_text(a_32, b_32);
  r_144 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_144);
  return(t);
}
static ATerm h_15 (ATerm q_117 (ATerm), ATerm m_237, ATerm g_32, ATerm t)
{
  ATerm s_144 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_237, term_i_52);
  t = l_15(t);
  s_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_144, g_32);
  t = q_117(t);
  t = fclose_0_0(t);
  t = g_32;
  return(t);
}
static ATerm g_15 (ATerm w_31, ATerm x_31, ATerm t)
{
  ATerm t_144 = NULL;
  t = SSL_write_term_to_stream_baf(w_31, x_31);
  t_144 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_144);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm a_145 = NULL,b_145 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_52 = ATgetArgument(t, 0);
      if(match_cons(j_52, sym_Stream_1))
        {
          a_145 = ATgetArgument(j_52, 0);
        }
      else
        _fail(t);
      b_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_15(a_145, b_145, t);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm c_145 = NULL,d_145 = NULL,e_145 = NULL,f_145 = NULL,g_145 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_52 = ATgetArgument(t, 0);
      if(match_cons(k_52, sym_Stream_1))
        {
          f_145 = ATgetArgument(k_52, 0);
        }
      else
        _fail(t);
      g_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_15(f_145, g_145, t);
  c_145 = t;
  t = term_n_52;
  d_145 = t;
  t = c_145;
  if(match_cons(t, sym_Stream_1))
    {
      e_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_52, c_145);
  t = e_15(d_145, e_145, t);
  return(t);
}
ATerm output_1_0 (ATerm s_136 (ATerm), ATerm t)
{
  ATerm u_144 = NULL,v_144 = NULL;
  t = s_136(t);
  v_144 = t;
  {
    ATerm o_52 = t;
    int p_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_144 = NULL,x_144 = NULL;
        t = term_r_52;
        w_144 = t;
        t = term_s_52;
        x_144 = t;
        t = term_t_52;
        t = s_15(w_144, x_144, t);
        LocalPopChoice(p_52);
      }
    else
      {
        t = o_52;
        t = term_u_52;
      }
  }
  u_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_144, v_144);
  {
    ATerm v_52 = t;
    int w_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_144 = NULL,z_144 = NULL;
        t = term_r_52;
        y_144 = t;
        t = term_x_52;
        z_144 = t;
        t = term_y_52;
        t = s_15(y_144, z_144, t);
        t = (ATerm) ATmakeAppl(sym__2, u_144, v_144);
        LocalPopChoice(w_52);
        if(match_cons(t, sym__2))
          {
            ATerm z_52 = ATgetArgument(t, 0);
            ATerm a_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_15(e_11, u_144, v_144, t);
      }
    else
      {
        t = v_52;
        if(match_cons(t, sym__2))
          {
            ATerm b_53 = ATgetArgument(t, 0);
            ATerm c_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_15(f_11, u_144, v_144, t);
      }
  }
  return(t);
}
static ATerm u_145 (ATerm o_145, ATerm t)
{
  t = SSL_fclose(o_145);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_145 = NULL,s_145 = NULL;
  s_145 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_145 = ATgetArgument(t, 0);
      {
        ATerm d_53 = t;
        int f_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_145);
            LocalPopChoice(f_53);
          }
        else
          {
            t = d_53;
            t = u_145(s_145, t);
          }
      }
    }
  else
    {
      t = u_145(s_145, t);
    }
  return(t);
}
static ATerm i_15 (ATerm c_32, ATerm t)
{
  t = SSL_read_term_from_stream(c_32);
  return(t);
}
static ATerm j_15 (ATerm g_52, ATerm h_52, ATerm t)
{
  t = SSL_strcat(g_52, h_52);
  return(t);
}
static ATerm k_15 (ATerm p_53, ATerm q_53, ATerm t)
{
  ATerm v_145 = NULL;
  t = SSL_fopen(p_53, q_53);
  v_145 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_145);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_145 = NULL;
  t = SSL_stdin_stream();
  w_145 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_145);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_145 = NULL;
  t = SSL_stdout_stream();
  x_145 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_145);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_145 = NULL;
  t = SSL_stderr_stream();
  y_145 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_145);
  return(t);
}
static ATerm f_147 (ATerm e_146, ATerm t)
{
  ATerm f_146 = NULL;
  t = SSL_explode_term(e_146);
  if(match_cons(t, sym__2))
    {
      ATerm i_53 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_53) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_53 = ATgetArgument(t, 1);
        if(((ATgetType(l_53) == AT_LIST) && !(ATisEmpty(l_53))))
          {
            f_146 = ATgetFirst((ATermList) l_53);
            {
              ATerm m_53 = (ATerm) ATgetNext((ATermList) l_53);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_146;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_146;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_146;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_146;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm g_147 (ATerm i_146, ATerm j_146, ATerm k_146, ATerm t)
{
  ATerm l_146 = NULL,m_146 = NULL,n_146 = NULL,q_146 = NULL,r_7 = NULL;
  t = SSLgetAnnotations(k_146);
  n_146 = t;
  t = i_146;
  if(match_cons(t, sym_Path_1))
    {
      q_146 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_146, j_146);
  r_7 = t;
  t = SSLsetAnnotations(r_7, n_146);
  if(match_cons(t, sym__2))
    {
      l_146 = ATgetArgument(t, 0);
      m_146 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_15(l_146, m_146, t);
  return(t);
}
static ATerm h_147 (ATerm s_146, ATerm t_146, ATerm u_146, ATerm t)
{
  ATerm v_146 = NULL,w_146 = NULL,x_146 = NULL,a_147 = NULL,s_7 = NULL;
  t = SSLgetAnnotations(u_146);
  x_146 = t;
  t = SSL_is_string(s_146);
  a_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_147, t_146);
  s_7 = t;
  t = SSLsetAnnotations(s_7, x_146);
  if(match_cons(t, sym__2))
    {
      v_146 = ATgetArgument(t, 0);
      w_146 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_15(v_146, w_146, t);
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm c_147 = NULL,d_147 = NULL,e_147 = NULL;
  c_147 = t;
  if(match_cons(t, sym__2))
    {
      d_147 = ATgetArgument(t, 0);
      e_147 = ATgetArgument(t, 1);
      {
        ATerm t_53 = t;
        int u_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_147(c_147, t);
            LocalPopChoice(u_53);
          }
        else
          {
            t = t_53;
            {
              ATerm v_53 = t;
              int w_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_147(d_147, e_147, c_147, t);
                  LocalPopChoice(w_53);
                }
              else
                {
                  t = v_53;
                  t = h_147(d_147, e_147, c_147, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_147(c_147, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_147 = NULL,k_147 = NULL,l_147 = NULL,q_147 = NULL;
  q_147 = t;
  {
    ATerm y_53 = t;
    int f_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_147, term_g_54);
        t = l_15(t);
        LocalPopChoice(f_54);
      }
    else
      {
        t = y_53;
        {
          ATerm s_59 = NULL,u_59 = NULL;
          t = term_i_54;
          u_59 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_54, q_147);
          t = j_15(u_59, q_147, t);
          s_59 = t;
          t = SSL_perror(s_59);
          _fail(t);
        }
      }
  }
  k_147 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_147 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_15(l_147, t);
  j_147 = t;
  t = k_147;
  t = fclose_0_0(t);
  t = j_147;
  return(t);
}
ATerm input_1_0 (ATerm t_136 (ATerm), ATerm t)
{
  ATerm j_54 = t;
  int k_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_147 = NULL,u_147 = NULL;
      t = term_r_52;
      t_147 = t;
      t = term_n_54;
      u_147 = t;
      t = term_r_54;
      t = s_15(t_147, u_147, t);
      LocalPopChoice(k_54);
    }
  else
    {
      t = j_54;
      t = term_s_54;
    }
  t = ReadFromFile_0_0(t);
  t = t_136(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm v_147 = NULL,w_147 = NULL,x_147 = NULL,y_147 = NULL,z_147 = NULL;
  v_147 = t;
  t = term_v_54;
  t = whoami_0_0(t);
  w_147 = t;
  t = term_w_54;
  y_147 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_54), w_147), term_x_54);
  z_147 = t;
  t = SSL_printnl(y_147, z_147);
  t = term_g_14;
  x_147 = t;
  t = SSL_exit(x_147);
  t = v_147;
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm b_148 = NULL;
  b_148 = t;
  if(match_string(t, "-k"))
    {
      t = b_148;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_148;
    }
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm c_148 = NULL,d_148 = NULL,e_148 = NULL;
  c_148 = t;
  t = SSL_string_to_int(c_148);
  d_148 = t;
  t = term_z_54;
  e_148 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_54, d_148);
  t = v_15(e_148, d_148, t);
  t = c_148;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  t = term_c_55;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_11, h_11, j_11, t);
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm g_148 = NULL;
  g_148 = t;
  if(match_string(t, "-S"))
    {
      t = g_148;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_148;
    }
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm h_148 = NULL,i_148 = NULL;
  t = term_d_55;
  h_148 = t;
  t = term_e_47;
  i_148 = t;
  t = term_f_55;
  t = v_15(h_148, i_148, t);
  t = term_g_55;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  t = term_h_55;
  return(t);
}
static ATerm p_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm j_148 = NULL,k_148 = NULL,l_148 = NULL;
  j_148 = t;
  t = SSL_string_to_int(j_148);
  k_148 = t;
  t = term_d_55;
  l_148 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_55, k_148);
  t = v_15(l_148, k_148, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_148);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = term_i_55;
  return(t);
}
static ATerm s_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm m_148 = NULL,n_148 = NULL;
  t = term_k_55;
  m_148 = t;
  t = term_v_54;
  n_148 = t;
  t = term_l_55;
  t = v_15(m_148, n_148, t);
  t = term_m_55;
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = term_n_55;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_55 = t;
  int p_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_11, l_11, o_11, t);
      LocalPopChoice(p_55);
    }
  else
    {
      t = o_55;
      {
        ATerm r_55 = t;
        int t_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_11, q_11, r_11, t);
            LocalPopChoice(t_55);
          }
        else
          {
            t = r_55;
            t = Option_3_0(s_11, t_11, u_11, t);
          }
      }
    }
  return(t);
}
static ATerm v_15 (ATerm g_56, ATerm h_56, ATerm t)
{
  ATerm o_148 = NULL,p_148 = NULL;
  t = term_r_52;
  o_148 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_52, g_56, h_56);
  t = lookup_table_0_1(o_148, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_148 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_15(g_56, h_56, p_148, t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_52, g_56, h_56);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm t_148 = NULL,u_148 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_148 = NULL,w_148 = NULL,x_148 = NULL;
      t = term_v_54;
      t = e_0(t);
      v_148 = t;
      t = term_v_55;
      w_148 = t;
      t = term_w_55;
      x_148 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_55, term_w_55, v_148);
      t = t_15(w_148, x_148, v_148, t);
      _fail(t);
    }
  else
    {
      ATerm a_149 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_148 = ATgetFirst((ATermList) t);
          u_148 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_148;
      t = b_0(t);
      t = term_v_54;
      t = c_0(t);
      a_149 = t;
      t = (ATerm) ATinsert(CheckATermList(u_148), a_149);
    }
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm c_149 = NULL;
  c_149 = t;
  if(match_string(t, "-o"))
    {
      t = c_149;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_149;
    }
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm d_149 = NULL,e_149 = NULL;
  d_149 = t;
  t = term_s_52;
  e_149 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_52, d_149);
  t = v_15(e_149, d_149, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_149);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_x_55;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_11, x_11, y_11, t);
  return(t);
}
static ATerm t_15 (ATerm j_36, ATerm k_36, ATerm h_36, ATerm t)
{
  ATerm g_149 = NULL,h_149 = NULL,i_149 = NULL,j_149 = NULL,k_149 = NULL;
  g_149 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_36, k_36);
  {
    ATerm y_55 = t;
    int z_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_56 = ATgetArgument(t, 0);
            ATerm d_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_36, k_36);
        t = s_15(j_36, k_36, t);
        LocalPopChoice(z_55);
      }
    else
      {
        t = y_55;
        t = (ATerm) ATempty;
      }
  }
  h_149 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_36, k_36, (ATerm) ATinsert(CheckATermList(h_149), h_36));
  t = lookup_table_0_1(j_36, t);
  k_149 = t;
  t = (ATerm) ATinsert(CheckATermList(h_149), h_36);
  i_149 = t;
  t = k_149;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_149 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_15(k_36, i_149, j_149, t);
  t = g_149;
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm r_149 = NULL,s_149 = NULL,t_149 = NULL,u_149 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_149 = NULL,w_149 = NULL,x_149 = NULL;
      t = term_v_54;
      t = l_0(t);
      v_149 = t;
      t = term_v_55;
      w_149 = t;
      t = term_w_55;
      x_149 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_55, term_w_55, v_149);
      t = t_15(w_149, x_149, v_149, t);
      _fail(t);
    }
  else
    {
      ATerm b_150 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_149 = ATgetFirst((ATermList) t);
          s_149 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_149;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_149 = ATgetFirst((ATermList) t);
          u_149 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_149;
      t = i_0(t);
      t = t_149;
      t = j_0(t);
      b_150 = t;
      t = (ATerm) ATinsert(CheckATermList(u_149), b_150);
    }
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm d_150 = NULL;
  d_150 = t;
  if(match_string(t, "-i"))
    {
      t = d_150;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_150;
    }
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm e_150 = NULL,f_150 = NULL;
  e_150 = t;
  t = term_n_54;
  f_150 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_54, e_150);
  t = v_15(f_150, e_150, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_150);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = term_e_56;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_11, a_12, b_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_150 = NULL,h_150 = NULL,i_150 = NULL,j_150 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_54;
  t = whoami_0_0(t);
  g_150 = t;
  t = term_w_54;
  i_150 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_56), g_150);
  j_150 = t;
  t = SSL_printnl(i_150, j_150);
  t = term_g_14;
  h_150 = t;
  t = SSL_exit(h_150);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm k_150 = NULL,l_150 = NULL;
  t = term_r_52;
  k_150 = t;
  t = term_i_56;
  l_150 = t;
  t = term_j_56;
  t = s_15(k_150, l_150, t);
  return(t);
}
static ATerm n_15 (ATerm g_33, ATerm h_33, ATerm t)
{
  ATerm l_56 = t;
  int m_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_33, h_33);
      LocalPopChoice(m_56);
    }
  else
    {
      t = l_56;
      t = SSL_addr(g_33, h_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_124 (ATerm), ATerm g_124 (ATerm), ATerm t)
{
  ATerm n_150 = NULL,o_150 = NULL,p_150 = NULL;
  n_150 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_150;
      t = f_124(t);
    }
  else
    {
      ATerm s_150 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_150 = ATgetFirst((ATermList) t);
          p_150 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_150;
      t = foldr_2_0(f_124, g_124, t);
      s_150 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_150, s_150);
      t = g_124(t);
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
  t = term_e_47;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL;
  if(match_cons(t, sym__2))
    {
      c_60 = ATgetArgument(t, 0);
      d_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(c_60, d_60, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_150 = NULL,w_59 = NULL,y_59 = NULL;
  t = times_0_0(t);
  y_59 = t;
  t = SSL_explode_term(y_59);
  if(match_cons(t, sym__2))
    {
      ATerm n_56 = ATgetArgument(t, 0);
      w_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_59;
  t = foldr_2_0(f_12, g_12, t);
  v_150 = t;
  t = SSL_TicksToSeconds(v_150);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_151 = NULL,h_151 = NULL,i_151 = NULL;
  g_151 = t;
  if(match_cons(t, sym__2))
    {
      h_151 = ATgetArgument(t, 0);
      i_151 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_56 = t;
    int p_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_151;
        if((h_151 != t))
          {
            _fail(t);
          }
        t = g_151;
        LocalPopChoice(p_56);
      }
    else
      {
        t = o_56;
        t = (ATerm) ATmakeAppl(sym__2, h_151, i_151);
        {
          ATerm q_56 = t;
          int r_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_151, i_151);
              LocalPopChoice(r_56);
            }
          else
            {
              t = q_56;
              t = SSL_gtr(h_151, i_151);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, h_151, i_151);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_133 (ATerm), ATerm t)
{
  ATerm m_151 = NULL;
  m_151 = t;
  {
    ATerm s_56 = t;
    int t_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_151 = NULL,p_151 = NULL,q_151 = NULL;
        t = term_r_52;
        p_151 = t;
        t = term_d_55;
        q_151 = t;
        t = term_u_56;
        t = s_15(p_151, q_151, t);
        o_151 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_151, term_g_14);
        t = geq_0_0(t);
        t = m_151;
        t = y_133(t);
        LocalPopChoice(t_56);
      }
    else
      {
        t = s_56;
        t = m_151;
      }
  }
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm s_151 = NULL,t_151 = NULL,v_151 = NULL,w_151 = NULL;
  t = run_time_0_0(t);
  s_151 = t;
  t = term_v_54;
  t = whoami_0_0(t);
  t_151 = t;
  t = term_w_54;
  v_151 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_56), s_151), term_w_56), t_151);
  w_151 = t;
  t = SSL_printnl(v_151, w_151);
  t = (ATerm) ATmakeAppl(sym__2, term_w_54, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_56), s_151), term_w_56), t_151));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_151 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_47;
  x_151 = t;
  t = SSL_exit(x_151);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm h_152 = NULL,i_152 = NULL;
  i_152 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = i_152;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_152 = ATgetArgument(t, 0);
          {
            ATerm i_61 = NULL,v_7 = NULL;
            t = SSLgetAnnotations(i_152);
            i_61 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_152);
            v_7 = t;
            t = SSLsetAnnotations(v_7, i_61);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = i_152;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_136 (ATerm), ATerm t)
{
  ATerm y_56 = t;
  int a_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_152 = NULL,b_152 = NULL;
      t = term_r_52;
      a_152 = t;
      t = term_b_57;
      b_152 = t;
      t = term_c_57;
      t = s_15(a_152, b_152, t);
      LocalPopChoice(a_57);
    }
  else
    {
      t = y_56;
      t = fetch_1_0(i_12, t);
    }
  t = j_136(t);
  return(t);
}
static ATerm w_15 (ATerm w_39, ATerm x_39, ATerm y_39, ATerm t)
{
  ATerm k_152 = NULL;
  t = SSL_hashtable_put(y_39, w_39, x_39);
  k_152 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_152);
  return(t);
}
ATerm lookup_table_0_1 (ATerm b_38, ATerm t)
{
  ATerm t_152 = NULL;
  t = table_hashtable_0_0(t);
  t_152 = t;
  {
    ATerm d_57 = t;
    int f_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_61 = NULL;
        t = t_152;
        if(match_cons(t, sym_Hashtable_1))
          {
            w_61 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_15(b_38, w_61, t);
        LocalPopChoice(f_57);
      }
    else
      {
        t = d_57;
        {
          ATerm c_62 = NULL;
          t = b_38;
          t = table_create_0_0(t);
          t = t_152;
          if(match_cons(t, sym_Hashtable_1))
            {
              c_62 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_15(b_38, c_62, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm e_40, ATerm f_40, ATerm t)
{
  ATerm w_152 = NULL;
  t = SSL_hashtable_create(e_40, f_40);
  w_152 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_152);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm x_152 = NULL,y_152 = NULL,z_152 = NULL,b_153 = NULL,c_153 = NULL;
  x_152 = t;
  t = term_g_57;
  b_153 = t;
  t = term_h_57;
  c_153 = t;
  t = x_152;
  t = new_hashtable_0_2(b_153, c_153, t);
  y_152 = t;
  t = x_152;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_152 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_15(x_152, y_152, z_152, t);
  t = x_152;
  return(t);
}
static ATerm p_15 (ATerm b_40, ATerm c_40, ATerm t)
{
  ATerm d_153 = NULL;
  t = SSL_hashtable_remove(c_40, b_40);
  d_153 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_153);
  return(t);
}
static ATerm q_15 (ATerm g_40, ATerm t)
{
  ATerm e_153 = NULL;
  t = SSL_hashtable_destroy(g_40);
  e_153 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_153);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm f_153 = NULL;
  t = SSL_table_hashtable();
  f_153 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_153);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm g_153 = NULL,h_153 = NULL,i_153 = NULL,j_153 = NULL;
  g_153 = t;
  t = table_hashtable_0_0(t);
  h_153 = t;
  t = lookup_table_0_1(g_153, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_153 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_15(j_153, t);
  t = h_153;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_153 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_15(g_153, i_153, t);
  t = g_153;
  return(t);
}
ATerm map_1_0 (ATerm q_118 (ATerm), ATerm t)
{
  static ATerm y_153 (ATerm t)
  {
    ATerm v_153 = NULL,w_153 = NULL,x_153 = NULL;
    v_153 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_153;
      }
    else
      {
        ATerm k_62 = NULL,a_63 = NULL,b_63 = NULL,x_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_153 = ATgetFirst((ATermList) t);
            x_153 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_153);
        k_62 = t;
        t = w_153;
        t = q_118(t);
        a_63 = t;
        t = x_153;
        t = y_153(t);
        b_63 = t;
        t = (ATerm) ATinsert(CheckATermList(b_63), a_63);
        x_7 = t;
        t = SSLsetAnnotations(x_7, k_62);
      }
    return(t);
  }
  t = y_153(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm b_154 = NULL,c_154 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_154 = ATgetFirst((ATermList) t);
      c_154 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_154 = NULL,h_154 = NULL;
        static ATerm j_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_154)), not_null(h_154));
          return(t);
        }
        t = c_154;
        t = h_0(t);
        if(((g_154 != NULL) && (g_154 != t)))
          _fail(t);
        else
          g_154 = t;
        t = b_154;
        t = f_0(t);
        if(((h_154 != NULL) && (h_154 != t)))
          _fail(t);
        else
          h_154 = t;
        t = c_154;
        t = reverse_acc_2_0(f_0, j_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_54;
      t = h_0(t);
    }
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm n_154 = NULL,o_154 = NULL,p_154 = NULL,x_9 = NULL;
  p_154 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_154 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_154);
  n_154 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_154);
  x_9 = t;
  t = SSLsetAnnotations(x_9, n_154);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm r_154 = NULL;
  r_154 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_154), term_i_57);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_154 = NULL,k_154 = NULL;
  ATerm j_57 = t;
  int k_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_154 = NULL,m_154 = NULL;
      t = term_r_52;
      l_154 = t;
      t = term_i_56;
      m_154 = t;
      t = term_j_56;
      t = s_15(l_154, m_154, t);
      LocalPopChoice(k_57);
    }
  else
    {
      t = j_57;
      t = fetch_1_0(k_12, t);
    }
  t = term_l_57;
  t = echo_0_0(t);
  t = term_v_55;
  j_154 = t;
  t = term_w_55;
  k_154 = t;
  t = term_m_57;
  t = s_15(j_154, k_154, t);
  t = reverse_acc_2_0(_id, l_12, t);
  t = map_1_0(m_12, t);
  return(t);
}
ATerm fetch_1_0 (ATerm a_119 (ATerm), ATerm t)
{
  static ATerm o_155 (ATerm t)
  {
    ATerm l_155 = NULL,m_155 = NULL,n_155 = NULL;
    l_155 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_155 = ATgetFirst((ATermList) t);
        n_155 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_57 = t;
      int p_57 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_63 = NULL,o_63 = NULL,b_10 = NULL;
          t = SSLgetAnnotations(l_155);
          j_63 = t;
          t = m_155;
          t = a_119(t);
          o_63 = t;
          t = (ATerm) ATinsert(CheckATermList(n_155), o_63);
          b_10 = t;
          t = SSLsetAnnotations(b_10, j_63);
          LocalPopChoice(p_57);
        }
      else
        {
          t = n_57;
          {
            ATerm w_63 = NULL,z_63 = NULL,c_10 = NULL;
            t = SSLgetAnnotations(l_155);
            w_63 = t;
            t = n_155;
            t = o_155(t);
            z_63 = t;
            t = (ATerm) ATinsert(CheckATermList(z_63), m_155);
            c_10 = t;
            t = SSLsetAnnotations(c_10, w_63);
          }
        }
    }
    return(t);
  }
  t = o_155(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_155 = NULL,u_155 = NULL,v_155 = NULL;
  t_155 = t;
  {
    ATerm q_57 = t;
    int r_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_155;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_57 = ATgetFirst((ATermList) t);
                ATerm t_57 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_155;
          }
        LocalPopChoice(r_57);
      }
    else
      {
        t = q_57;
        t = (ATerm) ATinsert(ATempty, t_155);
      }
  }
  u_155 = t;
  t = term_u_52;
  v_155 = t;
  t = SSL_printnl(v_155, u_155);
  t = t_155;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm z_155 = NULL,a_156 = NULL;
  t = term_r_52;
  z_155 = t;
  t = term_i_56;
  a_156 = t;
  t = term_j_56;
  t = s_15(z_155, a_156, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm x_15 (ATerm z_39, ATerm a_40, ATerm t)
{
  t = SSL_hashtable_get(a_40, z_39);
  return(t);
}
static ATerm s_15 (ATerm i_38, ATerm j_38, ATerm t)
{
  ATerm b_156 = NULL;
  t = lookup_table_0_1(i_38, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_156 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(j_38, b_156, t);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm d_156 = NULL,e_156 = NULL;
  t = term_u_57;
  d_156 = t;
  t = term_v_54;
  e_156 = t;
  t = term_v_57;
  t = v_15(d_156, e_156, t);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_w_57;
  return(t);
}
static ATerm r_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm f_156 = NULL,g_156 = NULL,h_156 = NULL,i_156 = NULL;
  t = term_u_57;
  h_156 = t;
  t = term_v_54;
  i_156 = t;
  t = term_v_57;
  t = v_15(h_156, i_156, t);
  t = term_y_57;
  f_156 = t;
  t = term_v_54;
  g_156 = t;
  t = term_z_57;
  t = v_15(f_156, g_156, t);
  t = term_a_58;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  t = term_b_58;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_58 = t;
  int d_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_12, p_12, q_12, t);
      LocalPopChoice(d_58);
    }
  else
    {
      t = c_58;
      t = Option_3_0(r_12, s_12, t_12, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_94 (ATerm), ATerm w_94 (ATerm), ATerm t)
{
  ATerm j_156 = NULL,k_156 = NULL,l_156 = NULL,m_156 = NULL,n_156 = NULL,o_156 = NULL,h_10 = NULL;
  o_156 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_156 = ATgetFirst((ATermList) t);
      l_156 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_156);
  j_156 = t;
  t = k_156;
  t = v_94(t);
  m_156 = t;
  t = l_156;
  t = w_94(t);
  n_156 = t;
  t = (ATerm) ATinsert(CheckATermList(n_156), m_156);
  h_10 = t;
  t = SSLsetAnnotations(h_10, j_156);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_138 (ATerm), ATerm t)
{
  ATerm u_156 = NULL,v_156 = NULL,w_156 = NULL,x_156 = NULL,z_156 = NULL,a_157 = NULL,q_10 = NULL;
  u_156 = t;
  {
    ATerm e_58 = t;
    int f_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_58;
        t = m_138(t);
        LocalPopChoice(f_58);
      }
    else
      {
        t = e_58;
      }
  }
  t = u_156;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_156 = ATgetFirst((ATermList) t);
      x_156 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_156);
  v_156 = t;
  t = term_i_56;
  a_157 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_56, w_156);
  t = v_15(a_157, w_156, t);
  t = x_156;
  {
    static ATerm k_157 (ATerm t)
    {
      ATerm h_58 = t;
      int i_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_58 = t;
          int k_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_157 = NULL;
              d_157 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_157;
              LocalPopChoice(k_58);
            }
          else
            {
              t = j_58;
              t = m_138(t);
              t = Cons_2_0(_id, k_157, t);
            }
          LocalPopChoice(i_58);
        }
      else
        {
          t = h_58;
          {
            ATerm g_157 = NULL,h_157 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_157 = ATgetFirst((ATermList) t);
                h_157 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_157), (ATerm) ATmakeAppl(sym_Undefined_1, g_157));
          }
        }
      return(t);
    }
    t = k_157(t);
  }
  z_156 = t;
  t = (ATerm) ATinsert(CheckATermList(z_156), (ATerm) ATmakeAppl(sym_Program_1, w_156));
  q_10 = t;
  t = SSLsetAnnotations(q_10, v_156);
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm x_157 = NULL;
  x_157 = t;
  if(match_string(t, "--help"))
    {
      t = x_157;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_157;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_157;
        }
    }
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm y_157 = NULL,z_157 = NULL;
  t = term_b_57;
  y_157 = t;
  t = term_v_54;
  z_157 = t;
  t = term_l_58;
  t = v_15(y_157, z_157, t);
  t = term_m_58;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = term_n_58;
  return(t);
}
static ATerm e_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_138 (ATerm), ATerm t)
{
  ATerm p_157 = NULL,q_157 = NULL,r_157 = NULL,s_157 = NULL,t_157 = NULL,u_157 = NULL,v_157 = NULL,w_157 = NULL;
  r_157 = t;
  t = term_v_55;
  s_157 = t;
  t = term_o_58;
  t = lookup_table_0_1(s_157, t);
  w_157 = t;
  t = term_w_55;
  t_157 = t;
  t = (ATerm) ATempty;
  u_157 = t;
  t = w_157;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_15(t_157, u_157, v_157, t);
  t = r_157;
  {
    static ATerm u_12 (ATerm t)
    {
      ATerm p_58 = t;
      int q_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_138(t);
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
                t = Option_3_0(v_12, w_12, d_13, t);
                LocalPopChoice(s_58);
              }
            else
              {
                t = r_58;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_12, t);
  }
  {
    ATerm t_58 = t;
    int u_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_158 = NULL;
        k_158 = t;
        {
          ATerm v_58 = t;
          int w_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_64 = NULL;
              t = k_158;
              {
                ATerm x_58 = t;
                int y_58 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_64 = NULL,r_64 = NULL;
                    t = term_r_52;
                    q_64 = t;
                    t = term_b_57;
                    r_64 = t;
                    t = term_c_57;
                    t = s_15(q_64, r_64, t);
                    LocalPopChoice(y_58);
                  }
                else
                  {
                    t = x_58;
                    t = fetch_1_0(e_13, t);
                  }
              }
              t = k_158;
              t = default_system_usage_0_0(t);
              t = term_e_47;
              p_64 = t;
              t = SSL_exit(p_64);
              LocalPopChoice(w_58);
            }
          else
            {
              t = v_58;
              {
                ATerm z_64 = NULL,a_65 = NULL,b_65 = NULL;
                t = term_r_52;
                a_65 = t;
                t = term_u_57;
                b_65 = t;
                t = term_z_58;
                t = s_15(a_65, b_65, t);
                t = k_158;
                t = default_system_about_0_0(t);
                t = term_e_47;
                z_64 = t;
                t = SSL_exit(z_64);
              }
            }
        }
        LocalPopChoice(u_58);
      }
    else
      {
        t = t_58;
        {
          ATerm a_59 = t;
          int b_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_158 = NULL,m_158 = NULL,n_158 = NULL;
              static ATerm f_13 (ATerm t)
              {
                ATerm o_158 = NULL,p_158 = NULL,q_158 = NULL,s_10 = NULL;
                q_158 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_158 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_158);
                o_158 = t;
                t = p_158;
                if(((p_157 != NULL) && (p_157 != t)))
                  _fail(t);
                else
                  p_157 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_158);
                s_10 = t;
                t = SSLsetAnnotations(s_10, o_158);
                return(t);
              }
              t = fetch_1_0(f_13, t);
              t = term_w_54;
              m_158 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_157)), term_c_59);
              n_158 = t;
              t = SSL_printnl(m_158, n_158);
              t = (ATerm) ATmakeAppl(sym__2, term_w_54, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_157)), term_c_59));
              t = default_system_usage_0_0(t);
              t = term_g_14;
              l_158 = t;
              t = SSL_exit(l_158);
              LocalPopChoice(b_59);
            }
          else
            {
              t = a_59;
            }
        }
      }
  }
  q_157 = t;
  t = term_v_55;
  t = table_destroy_0_0(t);
  t = q_157;
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_136 (ATerm), ATerm m_136 (ATerm), ATerm n_136 (ATerm), ATerm o_136 (ATerm), ATerm t)
{
  ATerm v_158 = NULL,w_158 = NULL,x_158 = NULL,y_158 = NULL,z_158 = NULL;
  t = parse_options_1_0(l_136, t);
  v_158 = t;
  t = term_d_59;
  t = table_create_0_0(t);
  t = term_d_59;
  w_158 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_59, term_e_59, v_158);
  t = lookup_table_0_1(w_158, t);
  z_158 = t;
  t = term_e_59;
  x_158 = t;
  t = z_158;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_158 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_15(x_158, v_158, y_158, t);
  t = v_158;
  t = n_136(t);
  {
    ATerm f_59 = t;
    int g_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_136, t);
        LocalPopChoice(g_59);
      }
    else
      {
        t = f_59;
        {
          ATerm h_59 = t;
          int i_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_136(t);
              t = report_success_0_0(t);
              LocalPopChoice(i_59);
            }
          else
            {
              t = h_59;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm j_59 = t;
  int k_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(k_59);
    }
  else
    {
      t = j_59;
      {
        ATerm l_59 = t;
        int m_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(m_59);
          }
        else
          {
            t = l_59;
            {
              ATerm n_59 = t;
              int o_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(o_13, p_13, q_13, t);
                  LocalPopChoice(o_59);
                }
              else
                {
                  t = n_59;
                  {
                    ATerm p_59 = t;
                    int q_59 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(q_59);
                      }
                    else
                      {
                        t = p_59;
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
static ATerm l_13 (ATerm t)
{
  t = input_1_0(r_13, t);
  return(t);
}
static ATerm o_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_13 (ATerm t)
{
  ATerm b_159 = NULL,c_159 = NULL;
  t = term_x_52;
  b_159 = t;
  t = term_v_54;
  c_159 = t;
  t = term_t_59;
  t = v_15(b_159, c_159, t);
  t = term_v_59;
  return(t);
}
static ATerm q_13 (ATerm t)
{
  t = term_x_59;
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = output_1_0(t_13, t);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm e_159 = NULL,f_159 = NULL,g_159 = NULL,h_159 = NULL,i_159 = NULL,j_159 = NULL,k_159 = NULL,l_159 = NULL,m_159 = NULL,n_159 = NULL,o_159 = NULL,p_159 = NULL,q_159 = NULL,r_159 = NULL,s_159 = NULL,d_11 = NULL,a_11 = NULL,z_10 = NULL,y_10 = NULL;
  s_159 = t;
  if(match_cons(t, sym_Specification_1))
    {
      f_159 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_159);
  e_159 = t;
  t = f_159;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_159 = ATgetFirst((ATermList) t);
      i_159 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_159);
  g_159 = t;
  t = i_159;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_159 = ATgetFirst((ATermList) t);
      m_159 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_159);
  k_159 = t;
  t = l_159;
  if(match_cons(t, sym_Strategies_1))
    {
      p_159 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_159);
  o_159 = t;
  t = p_159;
  t = inline_sdefs_0_0(t);
  q_159 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, q_159);
  y_10 = t;
  t = SSLsetAnnotations(y_10, o_159);
  r_159 = t;
  t = m_159;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_159), r_159);
  z_10 = t;
  t = SSLsetAnnotations(z_10, k_159);
  n_159 = t;
  t = (ATerm) ATinsert(CheckATermList(n_159), h_159);
  a_11 = t;
  t = SSLsetAnnotations(a_11, g_159);
  j_159 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, j_159);
  d_11 = t;
  t = SSLsetAnnotations(d_11, e_159);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(j_13, default_usage_0_0, _id, l_13, t);
  return(t);
}
