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
ATerm term_a_58;
ATerm term_z_57;
ATerm term_y_57;
ATerm term_j_57;
ATerm term_i_57;
ATerm term_h_57;
ATerm term_u_56;
ATerm term_t_56;
ATerm term_s_56;
ATerm term_n_56;
ATerm term_h_56;
ATerm term_g_56;
ATerm term_e_56;
ATerm term_d_56;
ATerm term_c_56;
ATerm term_b_56;
ATerm term_a_56;
ATerm term_p_55;
ATerm term_d_55;
ATerm term_c_55;
ATerm term_z_54;
ATerm term_x_54;
ATerm term_u_54;
ATerm term_t_54;
ATerm term_g_54;
ATerm term_f_54;
ATerm term_e_54;
ATerm term_y_53;
ATerm term_x_53;
ATerm term_w_53;
ATerm term_v_53;
ATerm term_p_53;
ATerm term_o_53;
ATerm term_m_53;
ATerm term_l_53;
ATerm term_k_53;
ATerm term_j_53;
ATerm term_i_53;
ATerm term_g_53;
ATerm term_e_53;
ATerm term_d_53;
ATerm term_c_53;
ATerm term_b_53;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_t_52;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_o_52;
ATerm term_j_52;
ATerm term_d_51;
ATerm term_x_50;
ATerm term_w_50;
ATerm term_t_50;
ATerm term_n_50;
ATerm term_v_45;
ATerm term_h_45;
ATerm term_c_45;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_t_35;
ATerm term_i_35;
ATerm term_g_34;
ATerm term_o_16;
ATerm term_j_16;
ATerm term_i_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_o_13;
ATerm term_m_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(50);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(sym__2, term_e_53, term_h_45);
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_45);
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(sym__2, term_l_53, term_t_52);
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(sym__2, term_w_53, term_x_53);
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(sym__2, term_a_56, term_t_52);
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(sym__2, term_d_56, term_t_52);
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_56));
  term_h_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(sym__2, term_x_54, term_t_52);
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_57));
  term_y_57 = (ATerm) ATmakeAppl(sym__2, term_d_51, term_t_52);
  ATprotect(&(term_z_57));
  term_z_57 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_58));
  term_a_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
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
ATerm Seq_2_0 (ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm t);
static ATerm g_1 (ATerm t);
ATerm body_to_inline_0_0 (ATerm t);
ATerm inlineable_0_0 (ATerm t);
static ATerm z_6 (ATerm l_35, ATerm m_35, ATerm t);
ATerm bottomup_1_0 (ATerm n_102 (ATerm), ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
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
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm spaste_1_0 (ATerm q_101 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm u_12 (ATerm l_25, ATerm k_25, ATerm t);
ATerm SVar_1_0 (ATerm z_83 (ATerm), ATerm t);
static ATerm f_13 (ATerm t_117 (ATerm), ATerm u_117 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm d_43, ATerm c_43, ATerm b_43, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm g_13 (ATerm n_117 (ATerm), ATerm o_117 (ATerm (ATerm), ATerm), ATerm v_42, ATerm y_42, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm b_118 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm i_117 (ATerm (ATerm), ATerm), ATerm j_117 (ATerm), ATerm k_117 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_117 (ATerm (ATerm), ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm tpaste_1_0 (ATerm m_101 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm t);
static ATerm q_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm z_12 (ATerm e_113 (ATerm), ATerm w_39, ATerm v_39, ATerm t);
static ATerm a_13 (ATerm h_113 (ATerm), ATerm i_113 (ATerm), ATerm a_40, ATerm z_39, ATerm t);
static ATerm b_13 (ATerm z_112 (ATerm), ATerm u_39, ATerm t_39, ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm d_13 (ATerm a_603, ATerm f_603, ATerm z_58, ATerm t);
ATerm while_not_2_0 (ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm t);
ATerm for_3_0 (ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_110 (ATerm v_108, ATerm w_108, ATerm x_108, ATerm t);
static ATerm t_6 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
ATerm free_vars_3_0 (ATerm l_119 (ATerm), ATerm m_119 (ATerm), ATerm n_119 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm q_80 (ATerm), ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
ATerm InlineCall_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm w_115 (ATerm), ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm occurrences_1_0 (ATerm l_113 (ATerm), ATerm t);
static ATerm l_13 (ATerm r_100 (ATerm), ATerm o_24, ATerm n_24, ATerm t);
static ATerm n_13 (ATerm h_110 (ATerm), ATerm m_34, ATerm k_34, ATerm t);
static ATerm p_13 (ATerm d_35, ATerm e_35, ATerm t);
ATerm end_scope_1_0 (ATerm e_110 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm t_105 (ATerm), ATerm u_105 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm d_110 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm t);
static ATerm y_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm d_9 (ATerm t);
ATerm inline_sdef_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm m_102 (ATerm), ATerm t);
static ATerm k_9 (ATerm t);
static ATerm r_13 (ATerm x_71, ATerm w_71, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm z_9 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm q_103 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm h_111 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm d_130 (ATerm t_129, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm i_10 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm o_102 (ATerm), ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
ATerm inline_sdefs_0_0 (ATerm t);
static ATerm x_14 (ATerm f_50, ATerm g_50, ATerm t);
static ATerm y_14 (ATerm u_31, ATerm v_31, ATerm t);
static ATerm a_15 (ATerm w_109 (ATerm), ATerm t_226, ATerm y_31, ATerm t);
static ATerm z_14 (ATerm q_31, ATerm r_31, ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
ATerm output_1_0 (ATerm f_128 (ATerm), ATerm t);
static ATerm s_138 (ATerm m_138, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm b_15 (ATerm w_31, ATerm t);
static ATerm c_15 (ATerm h_50, ATerm i_50, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm d_140 (ATerm c_139, ATerm t);
static ATerm e_140 (ATerm g_139, ATerm h_139, ATerm i_139, ATerm t);
static ATerm f_140 (ATerm q_139, ATerm r_139, ATerm s_139, ATerm t);
static ATerm d_15 (ATerm t);
static ATerm t_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm g_128 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm m_15 (ATerm x_52, ATerm y_52, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm k_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm o_11 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm k_15 (ATerm u_34, ATerm x_34, ATerm t_34, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm v_0 (ATerm), ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm e_15 (ATerm y_32, ATerm z_32, ATerm t);
ATerm foldr_2_0 (ATerm s_115 (ATerm), ATerm t_115 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm t_11 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm l_125 (ATerm), ATerm t);
static ATerm u_11 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm v_11 (ATerm t);
ATerm need_help_1_0 (ATerm w_127 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm x_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm b_111 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm i_15 (ATerm z_48, ATerm a_49, ATerm t);
ATerm debug_1_0 (ATerm u_109 (ATerm), ATerm t);
ATerm map_1_0 (ATerm r_110 (ATerm), ATerm t);
static ATerm b_12 (ATerm t);
static ATerm d_12 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm j_15 (ATerm c_37, ATerm d_37, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm z_129 (ATerm), ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm w_12 (ATerm t);
ATerm parse_options_1_0 (ATerm y_129 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm a_128 (ATerm), ATerm b_128 (ATerm), ATerm t);
static ATerm y_12 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm k_13 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = term_m_13;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_o_13;
  return(t);
}
ATerm AddSDef_0_0 (ATerm t)
{
  ATerm f_0 = NULL,m_0 = NULL,q_0 = NULL,r_0 = NULL,s_0 = NULL;
  f_0 = t;
  {
    ATerm q_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDefT_4))
          {
            m_0 = ATgetArgument(t, 0);
            {
              ATerm u_13 = ATgetArgument(t, 1);
            }
            {
              ATerm v_13 = ATgetArgument(t, 2);
            }
            {
              ATerm w_13 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(t_13);
        {
          ATerm x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL;
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_0), (ATerm)ATempty, (ATerm) ATempty);
          z_0 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_13, f_0);
          a_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_0), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_x_13, f_0));
          t = n_13(t_0, z_0, a_1, t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_0), (ATerm)ATempty, (ATerm) ATempty);
          x_0 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_13, f_0);
          y_0 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_0), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_y_13, f_0));
          t = n_13(u_0, x_0, y_0, t);
          t = f_0;
        }
      }
    else
      {
        t = q_13;
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
  t = term_z_13;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm e_1 = NULL,r_1 = NULL;
  if(match_cons(t, sym__2))
    {
      e_1 = ATgetArgument(t, 0);
      r_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_15(e_1, r_1, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_z_13;
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
  t = e_15(z_1, a_2, t);
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  ATerm a_14 = t;
  int b_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_0 = NULL,b_0 = NULL;
      b_0 = t;
      t = SSL_explode_term(b_0);
      if(match_cons(t, sym__2))
        {
          ATerm c_14 = ATgetArgument(t, 0);
          a_0 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_0;
      t = foldr_3_0(w_0, b_1, term_size_0_0, t);
      LocalPopChoice(b_14);
    }
  else
    {
      t = a_14;
      {
        static ATerm m_1 (ATerm t)
        {
          ATerm u_1 = NULL,v_1 = NULL;
          v_1 = t;
          t = SSL_explode_term(v_1);
          if(match_cons(t, sym__2))
            {
              ATerm d_14 = ATgetArgument(t, 0);
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
ATerm Seq_2_0 (ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,s_1 = NULL,t_1 = NULL,p_0 = NULL;
  t_1 = t;
  if(match_cons(t, sym_Seq_2))
    {
      o_1 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_1);
  n_1 = t;
  t = o_1;
  t = o_84(t);
  q_1 = t;
  t = p_1;
  t = p_84(t);
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, q_1, s_1);
  p_0 = t;
  t = SSLsetAnnotations(p_0, n_1);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL,p_2 = NULL;
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
  p_2 = t;
  t = SSLsetAnnotations(p_2, r_8);
  return(t);
}
ATerm body_to_inline_0_0 (ATerm t)
{
  ATerm m_2 = NULL,o_2 = NULL;
  static ATerm v_12 (ATerm t)
  {
    ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
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
                q_12 = ATgetArgument(t, 2);
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
                  t = (ATerm) ATmakeAppl(sym_CallT_3, l_2, t_12, q_12);
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
                    q_12 = ATgetArgument(t, 2);
                    {
                      ATerm y_3 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,k_1 = NULL,j_1 = NULL;
                      t = SSLgetAnnotations(r_12);
                      y_3 = t;
                      t = s_12;
                      if(match_cons(t, sym_SVar_1))
                        {
                          h_4 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(s_12);
                      g_4 = t;
                      t = (ATerm) ATmakeAppl(sym_SVar_1, h_4);
                      j_1 = t;
                      t = SSLsetAnnotations(j_1, g_4);
                      i_4 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, i_4, t_12, q_12);
                      k_1 = t;
                      t = SSLsetAnnotations(k_1, y_3);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Build_1))
                      {
                        s_12 = ATgetArgument(t, 0);
                        {
                          ATerm e_5 = NULL,l_1 = NULL;
                          t = SSLgetAnnotations(r_12);
                          e_5 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, s_12);
                          l_1 = t;
                          t = SSLsetAnnotations(l_1, e_5);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            s_12 = ATgetArgument(t, 0);
                            {
                              ATerm v_6 = NULL,w_1 = NULL;
                              t = SSLgetAnnotations(r_12);
                              v_6 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, s_12);
                              w_1 = t;
                              t = SSLsetAnnotations(w_1, v_6);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                s_12 = ATgetArgument(t, 0);
                                t_12 = ATgetArgument(t, 1);
                                {
                                  ATerm e_14 = t;
                                  int f_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm v_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,y_1 = NULL,x_1 = NULL;
                                      t = SSLgetAnnotations(r_12);
                                      v_7 = t;
                                      t = s_12;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          z_7 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(s_12);
                                      y_7 = t;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, z_7);
                                      x_1 = t;
                                      t = SSLsetAnnotations(x_1, y_7);
                                      a_8 = t;
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_8, t_12);
                                      y_1 = t;
                                      t = SSLsetAnnotations(y_1, v_7);
                                      LocalPopChoice(f_14);
                                    }
                                  else
                                    {
                                      t = e_14;
                                      {
                                        ATerm i_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL,s_2 = NULL,r_2 = NULL;
                                        t = SSLgetAnnotations(r_12);
                                        i_8 = t;
                                        t = s_12;
                                        if(match_cons(t, sym_Scope_2))
                                          {
                                            m_8 = ATgetArgument(t, 0);
                                            n_8 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = SSLgetAnnotations(s_12);
                                        l_8 = t;
                                        t = n_8;
                                        t = Seq_2_0(g_1, _id, t);
                                        o_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Scope_2, m_8, o_8);
                                        r_2 = t;
                                        t = SSLsetAnnotations(r_2, l_8);
                                        p_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, p_8, t_12);
                                        s_2 = t;
                                        t = SSLsetAnnotations(s_2, i_8);
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
                                      ATerm g_14 = t;
                                      int h_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm b_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,u_2 = NULL,t_2 = NULL;
                                          t = SSLgetAnnotations(r_12);
                                          b_9 = t;
                                          t = t_12;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              f_9 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = SSLgetAnnotations(t_12);
                                          e_9 = t;
                                          t = (ATerm) ATmakeAppl(sym_Match_1, f_9);
                                          t_2 = t;
                                          t = SSLsetAnnotations(t_2, e_9);
                                          g_9 = t;
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, s_12, g_9);
                                          u_2 = t;
                                          t = SSLsetAnnotations(u_2, b_9);
                                          LocalPopChoice(h_14);
                                        }
                                      else
                                        {
                                          t = g_14;
                                          {
                                            ATerm o_9 = NULL,s_9 = NULL,w_9 = NULL,x_9 = NULL,b_10 = NULL,c_10 = NULL,e_10 = NULL,f_10 = NULL,x_2 = NULL,w_2 = NULL,v_2 = NULL;
                                            t = SSLgetAnnotations(r_12);
                                            o_9 = t;
                                            t = t_12;
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_9 = ATgetArgument(t, 0);
                                                x_9 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(t_12);
                                            s_9 = t;
                                            t = w_9;
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                e_10 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(w_9);
                                            c_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, e_10);
                                            v_2 = t;
                                            t = SSLsetAnnotations(v_2, c_10);
                                            f_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, x_9);
                                            w_2 = t;
                                            t = SSLsetAnnotations(w_2, s_9);
                                            b_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, s_12, b_10);
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
                                        s_12 = ATgetArgument(t, 0);
                                        t_12 = ATgetArgument(t, 1);
                                        {
                                          ATerm u_10 = NULL,z_10 = NULL,a_11 = NULL,y_2 = NULL;
                                          t = SSLgetAnnotations(r_12);
                                          u_10 = t;
                                          t = s_12;
                                          t = v_12(t);
                                          z_10 = t;
                                          t = t_12;
                                          t = v_12(t);
                                          a_11 = t;
                                          t = (ATerm) ATmakeAppl(sym_Choice_2, z_10, a_11);
                                          y_2 = t;
                                          t = SSLsetAnnotations(y_2, u_10);
                                        }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_LChoice_2))
                                          {
                                            s_12 = ATgetArgument(t, 0);
                                            t_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm j_11 = NULL,m_11 = NULL,n_11 = NULL,z_2 = NULL;
                                              t = SSLgetAnnotations(r_12);
                                              j_11 = t;
                                              t = s_12;
                                              t = v_12(t);
                                              m_11 = t;
                                              t = t_12;
                                              t = v_12(t);
                                              n_11 = t;
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, m_11, n_11);
                                              z_2 = t;
                                              t = SSLsetAnnotations(z_2, j_11);
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_GuardedLChoice_3))
                                              {
                                                s_12 = ATgetArgument(t, 0);
                                                t_12 = ATgetArgument(t, 1);
                                                q_12 = ATgetArgument(t, 2);
                                                {
                                                  ATerm y_11 = NULL,c_12 = NULL,e_12 = NULL,f_12 = NULL,b_3 = NULL;
                                                  t = SSLgetAnnotations(r_12);
                                                  y_11 = t;
                                                  t = s_12;
                                                  t = v_12(t);
                                                  c_12 = t;
                                                  t = t_12;
                                                  t = v_12(t);
                                                  e_12 = t;
                                                  t = q_12;
                                                  t = v_12(t);
                                                  f_12 = t;
                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, c_12, e_12, f_12);
                                                  b_3 = t;
                                                  t = SSLsetAnnotations(b_3, y_11);
                                                }
                                              }
                                            else
                                              {
                                                ATerm s_13 = NULL,d_3 = NULL;
                                                if(match_cons(t, sym_Cong_2))
                                                  {
                                                    s_12 = ATgetArgument(t, 0);
                                                    t_12 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSLgetAnnotations(r_12);
                                                s_13 = t;
                                                t = (ATerm) ATmakeAppl(sym_Cong_2, s_12, t_12);
                                                d_3 = t;
                                                t = SSLsetAnnotations(d_3, s_13);
                                              }
                                          }
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
  t = v_12(t);
  m_2 = t;
  t = term_size_0_0(t);
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_2, term_i_14);
  t = leq_0_0(t);
  t = m_2;
  return(t);
}
ATerm inlineable_0_0 (ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
  v_14 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      w_14 = ATgetArgument(t, 0);
      f_15 = ATgetArgument(t, 1);
      g_15 = ATgetArgument(t, 2);
      h_15 = ATgetArgument(t, 3);
      {
        ATerm a_16 = NULL,b_16 = NULL,g_16 = NULL,n_4 = NULL;
        t = SSLgetAnnotations(v_14);
        b_16 = t;
        t = w_14;
        {
          ATerm j_14 = t;
          if((PushChoice() == 0))
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_14;
            }
        }
        a_16 = t;
        t = h_15;
        {
          ATerm k_14 = t;
          if((PushChoice() == 0))
            {
              static ATerm h_1 (ATerm t)
              {
                if(match_cons(t, sym_CallT_3))
                  {
                    ATerm l_14 = ATgetArgument(t, 0);
                    if(match_cons(l_14, sym_SVar_1))
                      {
                        if((a_16 != ATgetArgument(l_14, 0)))
                          {
                            _fail(ATgetArgument(l_14, 0));
                          }
                      }
                    else
                      _fail(t);
                    {
                      ATerm m_14 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm n_14 = ATgetArgument(t, 2);
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
              t = k_14;
            }
        }
        t = h_15;
        t = body_to_inline_0_0(t);
        g_16 = t;
        t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, a_16, f_15, g_15, g_16);
        n_4 = t;
        t = SSLsetAnnotations(n_4, b_16);
      }
    }
  else
    {
      ATerm s_16 = NULL,t_16 = NULL,y_16 = NULL,p_4 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          w_14 = ATgetArgument(t, 0);
          f_15 = ATgetArgument(t, 1);
          g_15 = ATgetArgument(t, 2);
          h_15 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_14);
      t_16 = t;
      t = w_14;
      {
        ATerm o_14 = t;
        if((PushChoice() == 0))
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = o_14;
          }
      }
      s_16 = t;
      t = h_15;
      {
        ATerm p_14 = t;
        if((PushChoice() == 0))
          {
            static ATerm b_2 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm q_14 = ATgetArgument(t, 0);
                  if(match_cons(q_14, sym_SVar_1))
                    {
                      if((s_16 != ATgetArgument(q_14, 0)))
                        {
                          _fail(ATgetArgument(q_14, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm r_14 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm s_14 = ATgetArgument(t, 2);
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
            t = p_14;
          }
      }
      t = h_15;
      t = body_to_inline_0_0(t);
      y_16 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, s_16, f_15, g_15, y_16);
      p_4 = t;
      t = SSLsetAnnotations(p_4, t_16);
    }
  return(t);
}
static ATerm z_6 (ATerm l_35, ATerm m_35, ATerm t)
{
  ATerm s_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_35, m_35);
  t = j_15(l_35, m_35, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_15 = ATgetFirst((ATermList) t);
      {
        ATerm t_14 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_15;
  return(t);
}
ATerm bottomup_1_0 (ATerm n_102 (ATerm), ATerm t)
{
  static ATerm c_2 (ATerm t)
  {
    t = bottomup_1_0(n_102, t);
    return(t);
  }
  t = SRTS_all(c_2, t);
  t = n_102(t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_14 = ATgetArgument(t, 0);
      if(((ATgetType(u_14) != AT_LIST) || !(ATisEmpty(u_14))))
        _fail(t);
      {
        ATerm l_15 = ATgetArgument(t, 1);
        if(((ATgetType(l_15) != AT_LIST) || !(ATisEmpty(l_15))))
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
  ATerm x_30 = NULL,z_30 = NULL,a_31 = NULL,d_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_15 = ATgetArgument(t, 0);
      if(((ATgetType(n_15) == AT_LIST) && !(ATisEmpty(n_15))))
        {
          x_30 = ATgetFirst((ATermList) n_15);
          z_30 = (ATerm) ATgetNext((ATermList) n_15);
        }
      else
        _fail(t);
      {
        ATerm o_15 = ATgetArgument(t, 1);
        if(((ATgetType(o_15) == AT_LIST) && !(ATisEmpty(o_15))))
          {
            a_31 = ATgetFirst((ATermList) o_15);
            d_31 = (ATerm) ATgetNext((ATermList) o_15);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_30, a_31), (ATerm) ATmakeAppl(sym__2, z_30, d_31));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL;
  if(match_cons(t, sym__2))
    {
      i_31 = ATgetArgument(t, 0);
      j_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_31), i_31);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL;
  if(match_cons(t, sym__2))
    {
      k_31 = ATgetArgument(t, 0);
      l_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_31), (ATerm) ATmakeAppl(sym_Match_1, l_31));
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_15 = ATgetArgument(t, 0);
      if(((ATgetType(p_15) != AT_LIST) || !(ATisEmpty(p_15))))
        _fail(t);
      {
        ATerm q_15 = ATgetArgument(t, 1);
        if(((ATgetType(q_15) != AT_LIST) || !(ATisEmpty(q_15))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,t_41 = NULL,u_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_15 = ATgetArgument(t, 0);
      if(((ATgetType(r_15) == AT_LIST) && !(ATisEmpty(r_15))))
        {
          p_41 = ATgetFirst((ATermList) r_15);
          q_41 = (ATerm) ATgetNext((ATermList) r_15);
        }
      else
        _fail(t);
      {
        ATerm t_15 = ATgetArgument(t, 1);
        if(((ATgetType(t_15) == AT_LIST) && !(ATisEmpty(t_15))))
          {
            t_41 = ATgetFirst((ATermList) t_15);
            u_41 = (ATerm) ATgetNext((ATermList) t_15);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_41, t_41), (ATerm) ATmakeAppl(sym__2, q_41, u_41));
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL;
  if(match_cons(t, sym__2))
    {
      v_41 = ATgetArgument(t, 0);
      w_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_41), v_41);
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
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_41), (ATerm) ATmakeAppl(sym_Match_1, z_41));
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm u_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm w_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(v_15);
      {
        ATerm g_60 = NULL,h_60 = NULL;
        g_60 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm x_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        h_60 = t;
        t = SSLgetAnnotations(g_60);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_15 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) y_15) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm z_15 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(z_15) != AT_LIST) || !(ATisEmpty(z_15))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = h_60;
      }
    }
  else
    {
      t = u_15;
      {
        ATerm c_16 = t;
        int d_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm e_16 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) e_16) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm f_16 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(d_16);
            _fail(t);
          }
        else
          {
            t = c_16;
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
    ATerm r_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,y_22 = NULL;
    y_22 = t;
    if(match_cons(t, sym_Test_1))
      {
        q_22 = ATgetArgument(t, 0);
        t = q_22;
        if(match_cons(t, sym_Id_0))
          {
            ATerm h_16 = t;
            int i_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_j_16;
                t = d_2(t);
                LocalPopChoice(i_16);
              }
            else
              {
                t = h_16;
                {
                  ATerm k_16 = t;
                  int l_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_23 = NULL,l_23 = NULL,n_23 = NULL,o_23 = NULL,t_23 = NULL,u_23 = NULL,b_24 = NULL,g_24 = NULL,p_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL;
                      t = y_22;
                      t = new_0_0(t);
                      k_23 = t;
                      t = bottomup_1_0(d_2, t);
                      t_24 = t;
                      t = (ATerm) ATempty;
                      t = d_2(t);
                      u_24 = t;
                      t = (ATerm) ATinsert(CheckATermList(u_24), t_24);
                      t = d_2(t);
                      l_23 = t;
                      t = k_23;
                      t = bottomup_1_0(d_2, t);
                      s_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, s_24);
                      t = d_2(t);
                      r_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, r_24);
                      t = d_2(t);
                      o_23 = t;
                      t = q_22;
                      t = bottomup_1_0(d_2, t);
                      u_23 = t;
                      t = k_23;
                      t = bottomup_1_0(d_2, t);
                      p_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, p_24);
                      t = d_2(t);
                      g_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, g_24);
                      t = d_2(t);
                      b_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_23, b_24);
                      t = d_2(t);
                      t_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_23, t_23);
                      t = d_2(t);
                      n_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, l_23, n_23);
                      t = d_2(t);
                      LocalPopChoice(l_16);
                    }
                  else
                    {
                      t = k_16;
                      t = y_22;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm m_16 = t;
                int n_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_o_16;
                    t = d_2(t);
                    LocalPopChoice(n_16);
                  }
                else
                  {
                    t = m_16;
                    {
                      ATerm p_16 = t;
                      int q_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_24 = NULL,e_25 = NULL,f_25 = NULL,h_25 = NULL,i_25 = NULL,m_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,t_25 = NULL,w_25 = NULL,x_25 = NULL,c_26 = NULL;
                          t = y_22;
                          t = new_0_0(t);
                          z_24 = t;
                          t = bottomup_1_0(d_2, t);
                          x_25 = t;
                          t = (ATerm) ATempty;
                          t = d_2(t);
                          c_26 = t;
                          t = (ATerm) ATinsert(CheckATermList(c_26), x_25);
                          t = d_2(t);
                          e_25 = t;
                          t = z_24;
                          t = bottomup_1_0(d_2, t);
                          w_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, w_25);
                          t = d_2(t);
                          t_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, t_25);
                          t = d_2(t);
                          h_25 = t;
                          t = q_22;
                          t = bottomup_1_0(d_2, t);
                          m_25 = t;
                          t = z_24;
                          t = bottomup_1_0(d_2, t);
                          q_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, q_25);
                          t = d_2(t);
                          p_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, p_25);
                          t = d_2(t);
                          o_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, m_25, o_25);
                          t = d_2(t);
                          i_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_25, i_25);
                          t = d_2(t);
                          f_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, e_25, f_25);
                          t = d_2(t);
                          LocalPopChoice(q_16);
                        }
                      else
                        {
                          t = p_16;
                          t = y_22;
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
                      ATerm r_16 = t;
                      int u_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, m_22);
                          t = d_2(t);
                          LocalPopChoice(u_16);
                        }
                      else
                        {
                          t = r_16;
                          {
                            ATerm v_16 = t;
                            int w_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL,p_26 = NULL,v_26 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL;
                                t = y_22;
                                t = new_0_0(t);
                                l_26 = t;
                                t = bottomup_1_0(d_2, t);
                                i_27 = t;
                                t = (ATerm) ATempty;
                                t = d_2(t);
                                j_27 = t;
                                t = (ATerm) ATinsert(CheckATermList(j_27), i_27);
                                t = d_2(t);
                                m_26 = t;
                                t = l_26;
                                t = bottomup_1_0(d_2, t);
                                h_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, h_27);
                                t = d_2(t);
                                g_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, g_27);
                                t = d_2(t);
                                p_26 = t;
                                t = q_22;
                                t = bottomup_1_0(d_2, t);
                                c_27 = t;
                                t = l_26;
                                t = bottomup_1_0(d_2, t);
                                f_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, f_27);
                                t = d_2(t);
                                e_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, e_27);
                                t = d_2(t);
                                d_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, c_27, d_27);
                                t = d_2(t);
                                v_26 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, p_26, v_26);
                                t = d_2(t);
                                n_26 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, m_26, n_26);
                                t = d_2(t);
                                LocalPopChoice(w_16);
                              }
                            else
                              {
                                t = v_16;
                                t = y_22;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm x_16 = t;
                    int z_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,w_27 = NULL,x_27 = NULL,z_27 = NULL,a_28 = NULL,c_28 = NULL,i_28 = NULL,j_28 = NULL;
                        t = y_22;
                        t = new_0_0(t);
                        o_27 = t;
                        t = bottomup_1_0(d_2, t);
                        i_28 = t;
                        t = (ATerm) ATempty;
                        t = d_2(t);
                        j_28 = t;
                        t = (ATerm) ATinsert(CheckATermList(j_28), i_28);
                        t = d_2(t);
                        p_27 = t;
                        t = o_27;
                        t = bottomup_1_0(d_2, t);
                        c_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, c_28);
                        t = d_2(t);
                        a_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, a_28);
                        t = d_2(t);
                        r_27 = t;
                        t = q_22;
                        t = bottomup_1_0(d_2, t);
                        t_27 = t;
                        t = o_27;
                        t = bottomup_1_0(d_2, t);
                        z_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, z_27);
                        t = d_2(t);
                        x_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, x_27);
                        t = d_2(t);
                        w_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, t_27, w_27);
                        t = d_2(t);
                        s_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, r_27, s_27);
                        t = d_2(t);
                        q_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, p_27, q_27);
                        t = d_2(t);
                        LocalPopChoice(z_16);
                      }
                    else
                      {
                        t = x_16;
                        t = y_22;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            q_22 = ATgetArgument(t, 0);
            t = q_22;
            if(match_cons(t, sym_Id_0))
              {
                ATerm a_17 = t;
                int b_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_o_16;
                    t = d_2(t);
                    LocalPopChoice(b_17);
                  }
                else
                  {
                    t = a_17;
                    t = y_22;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm c_17 = t;
                    int d_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_j_16;
                        t = d_2(t);
                        LocalPopChoice(d_17);
                      }
                    else
                      {
                        t = c_17;
                        t = y_22;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
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
                              t = y_22;
                            }
                        }
                      }
                    else
                      {
                        t = y_22;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                q_22 = ATgetArgument(t, 0);
                p_22 = ATgetArgument(t, 1);
                t = p_22;
                if(match_cons(t, sym_Id_0))
                  {
                    t = q_22;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = p_22;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = q_22;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                m_22 = ATgetArgument(t, 0);
                                o_22 = ATgetArgument(t, 1);
                                t = q_22;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    m_22 = ATgetArgument(t, 0);
                                    o_22 = ATgetArgument(t, 1);
                                    t = q_22;
                                  }
                                else
                                  {
                                    t = q_22;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        k_22 = ATgetArgument(t, 0);
                        l_22 = ATgetArgument(t, 1);
                        t = k_22;
                        if(match_cons(t, sym_Match_1))
                          {
                            j_22 = ATgetArgument(t, 0);
                            t = j_22;
                            if(match_cons(t, sym_Op_2))
                              {
                                g_22 = ATgetArgument(t, 0);
                                z_21 = ATgetArgument(t, 1);
                                t = q_22;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = p_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm g_17 = t;
                                        int h_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_o_16;
                                            t = d_2(t);
                                            LocalPopChoice(h_17);
                                          }
                                        else
                                          {
                                            t = g_17;
                                            t = y_22;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            m_22 = ATgetArgument(t, 0);
                                            o_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm i_17 = t;
                                              int k_17 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm i_30 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                  t = d_2(t);
                                                  i_30 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, i_30);
                                                  t = d_2(t);
                                                  LocalPopChoice(k_17);
                                                }
                                              else
                                                {
                                                  t = i_17;
                                                  t = y_22;
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
                                                      ATerm l_17 = t;
                                                      int m_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, h_22, g_22);
                                                          {
                                                            ATerm n_17 = t;
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
                                                                t = n_17;
                                                              }
                                                          }
                                                          t = term_o_16;
                                                          t = bottomup_1_0(d_2, t);
                                                          LocalPopChoice(m_17);
                                                        }
                                                      else
                                                        {
                                                          t = l_17;
                                                          {
                                                            ATerm o_17 = t;
                                                            int p_17 = stack_ptr;
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
                                                                LocalPopChoice(p_17);
                                                              }
                                                            else
                                                              {
                                                                t = o_17;
                                                                {
                                                                  ATerm r_17 = t;
                                                                  int s_17 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm s_31 = NULL;
                                                                      t = j_22;
                                                                      if((m_22 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, m_22);
                                                                      t = d_2(t);
                                                                      s_31 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_31, l_22);
                                                                      t = d_2(t);
                                                                      LocalPopChoice(s_17);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = r_17;
                                                                      t = y_22;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm t_17 = t;
                                                    int u_17 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm d_32 = NULL;
                                                        t = j_22;
                                                        if((m_22 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, m_22);
                                                        t = d_2(t);
                                                        d_32 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, d_32, l_22);
                                                        t = d_2(t);
                                                        LocalPopChoice(u_17);
                                                      }
                                                    else
                                                      {
                                                        t = t_17;
                                                        t = y_22;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    m_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm v_17 = t;
                                                      int w_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm n_32 = NULL;
                                                          t = j_22;
                                                          if((m_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, m_22);
                                                          t = d_2(t);
                                                          n_32 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_32, l_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(w_17);
                                                        }
                                                      else
                                                        {
                                                          t = v_17;
                                                          t = y_22;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_22 = ATgetArgument(t, 0);
                                                        o_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm x_17 = t;
                                                          int y_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm e_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                              t = d_2(t);
                                                              e_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, e_33);
                                                              t = d_2(t);
                                                              LocalPopChoice(y_17);
                                                            }
                                                          else
                                                            {
                                                              t = x_17;
                                                              t = y_22;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = y_22;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = q_22;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = p_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm z_17 = t;
                                        int a_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_o_16;
                                            t = d_2(t);
                                            LocalPopChoice(a_18);
                                          }
                                        else
                                          {
                                            t = z_17;
                                            t = y_22;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            m_22 = ATgetArgument(t, 0);
                                            o_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm b_18 = t;
                                              int c_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm r_33 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                  t = d_2(t);
                                                  r_33 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, r_33);
                                                  t = d_2(t);
                                                  LocalPopChoice(c_18);
                                                }
                                              else
                                                {
                                                  t = b_18;
                                                  t = y_22;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                m_22 = ATgetArgument(t, 0);
                                                {
                                                  ATerm f_18 = t;
                                                  int g_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm v_33 = NULL;
                                                      t = j_22;
                                                      if((m_22 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, m_22);
                                                      t = d_2(t);
                                                      v_33 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_33, l_22);
                                                      t = d_2(t);
                                                      LocalPopChoice(g_18);
                                                    }
                                                  else
                                                    {
                                                      t = f_18;
                                                      t = y_22;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    m_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm i_18 = t;
                                                      int j_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm z_33 = NULL;
                                                          t = j_22;
                                                          if((m_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, m_22);
                                                          t = d_2(t);
                                                          z_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, z_33, l_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(j_18);
                                                        }
                                                      else
                                                        {
                                                          t = i_18;
                                                          t = y_22;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_22 = ATgetArgument(t, 0);
                                                        o_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm k_18 = t;
                                                          int l_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                              t = d_2(t);
                                                              p_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, p_34);
                                                              t = d_2(t);
                                                              LocalPopChoice(l_18);
                                                            }
                                                          else
                                                            {
                                                              t = k_18;
                                                              t = y_22;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = y_22;
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
                                    g_22 = ATgetArgument(t, 0);
                                    t = q_22;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = p_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm n_18 = t;
                                            int o_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_16;
                                                t = d_2(t);
                                                LocalPopChoice(o_18);
                                              }
                                            else
                                              {
                                                t = n_18;
                                                t = y_22;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_22 = ATgetArgument(t, 0);
                                                o_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm r_18 = t;
                                                  int y_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm f_35 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                      t = d_2(t);
                                                      f_35 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, f_35);
                                                      t = d_2(t);
                                                      LocalPopChoice(y_18);
                                                    }
                                                  else
                                                    {
                                                      t = r_18;
                                                      t = y_22;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm a_19 = t;
                                                int f_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm g_19 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(f_19);
                                                    {
                                                      ATerm h_19 = t;
                                                      int i_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm j_35 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, j_22);
                                                          t = d_2(t);
                                                          j_35 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_35, l_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(i_19);
                                                        }
                                                      else
                                                        {
                                                          t = h_19;
                                                          t = y_22;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = a_19;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        m_22 = ATgetArgument(t, 0);
                                                        t = m_22;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            h_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm j_19 = t;
                                                              int k_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm p_35 = NULL,q_35 = NULL;
                                                                  t = g_22;
                                                                  if((h_22 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, h_22);
                                                                  t = d_2(t);
                                                                  q_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, q_35);
                                                                  t = d_2(t);
                                                                  p_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_35, l_22);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(k_19);
                                                                }
                                                              else
                                                                {
                                                                  t = j_19;
                                                                  t = y_22;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = y_22;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            m_22 = ATgetArgument(t, 0);
                                                            o_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm l_19 = t;
                                                              int m_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm w_35 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                                  t = d_2(t);
                                                                  w_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, w_35);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(m_19);
                                                                }
                                                              else
                                                                {
                                                                  t = l_19;
                                                                  t = y_22;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = y_22;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = q_22;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = p_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm n_19 = t;
                                            int o_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_16;
                                                t = d_2(t);
                                                LocalPopChoice(o_19);
                                              }
                                            else
                                              {
                                                t = n_19;
                                                t = y_22;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_22 = ATgetArgument(t, 0);
                                                o_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm p_19 = t;
                                                  int q_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_36 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                      t = d_2(t);
                                                      t_36 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, t_36);
                                                      t = d_2(t);
                                                      LocalPopChoice(q_19);
                                                    }
                                                  else
                                                    {
                                                      t = p_19;
                                                      t = y_22;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm r_19 = t;
                                                int s_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm u_19 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(s_19);
                                                    {
                                                      ATerm v_19 = t;
                                                      int w_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm x_36 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, j_22);
                                                          t = d_2(t);
                                                          x_36 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_36, l_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(w_19);
                                                        }
                                                      else
                                                        {
                                                          t = v_19;
                                                          t = y_22;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = r_19;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_22 = ATgetArgument(t, 0);
                                                        o_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm z_19 = t;
                                                          int g_20 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_37 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                              t = d_2(t);
                                                              p_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, p_37);
                                                              t = d_2(t);
                                                              LocalPopChoice(g_20);
                                                            }
                                                          else
                                                            {
                                                              t = z_19;
                                                              t = y_22;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = y_22;
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
                                    b_22 = ATgetArgument(t, 1);
                                    e_22 = ATgetArgument(t, 2);
                                    t = q_22;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = p_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm i_20 = t;
                                            int l_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_16;
                                                t = d_2(t);
                                                LocalPopChoice(l_20);
                                              }
                                            else
                                              {
                                                t = i_20;
                                                t = y_22;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_22 = ATgetArgument(t, 0);
                                                o_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm m_20 = t;
                                                  int n_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_38 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                      t = d_2(t);
                                                      t_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, t_38);
                                                      t = d_2(t);
                                                      LocalPopChoice(n_20);
                                                    }
                                                  else
                                                    {
                                                      t = m_20;
                                                      t = y_22;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm o_20 = t;
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
                                                          ATerm i_39 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, j_22, b_22, e_22);
                                                          t = d_2(t);
                                                          i_39 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_39, l_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(s_20);
                                                        }
                                                      else
                                                        {
                                                          t = r_20;
                                                          t = y_22;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = o_20;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_22 = ATgetArgument(t, 0);
                                                        o_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_20 = t;
                                                          int u_20 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_39 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                              t = d_2(t);
                                                              n_39 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, n_39);
                                                              t = d_2(t);
                                                              LocalPopChoice(u_20);
                                                            }
                                                          else
                                                            {
                                                              t = t_20;
                                                              t = y_22;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = y_22;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = q_22;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = p_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm v_20 = t;
                                            int w_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_16;
                                                t = d_2(t);
                                                LocalPopChoice(w_20);
                                              }
                                            else
                                              {
                                                t = v_20;
                                                t = y_22;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_22 = ATgetArgument(t, 0);
                                                o_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm x_20 = t;
                                                  int y_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm k_40 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                      t = d_2(t);
                                                      k_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, k_40);
                                                      t = d_2(t);
                                                      LocalPopChoice(y_20);
                                                    }
                                                  else
                                                    {
                                                      t = x_20;
                                                      t = y_22;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    m_22 = ATgetArgument(t, 0);
                                                    o_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm z_20 = t;
                                                      int a_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm s_40 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                          t = d_2(t);
                                                          s_40 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, s_40);
                                                          t = d_2(t);
                                                          LocalPopChoice(a_21);
                                                        }
                                                      else
                                                        {
                                                          t = z_20;
                                                          t = y_22;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = y_22;
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
                            k_22 = ATgetArgument(t, 0);
                            t = k_22;
                            if(match_cons(t, sym_Op_2))
                              {
                                j_22 = ATgetArgument(t, 0);
                                b_22 = ATgetArgument(t, 1);
                                t = q_22;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = p_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm b_21 = t;
                                        int c_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_o_16;
                                            t = d_2(t);
                                            LocalPopChoice(c_21);
                                          }
                                        else
                                          {
                                            t = b_21;
                                            t = y_22;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            m_22 = ATgetArgument(t, 0);
                                            o_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm d_21 = t;
                                              int e_21 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm j_41 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                  t = d_2(t);
                                                  j_41 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, j_41);
                                                  t = d_2(t);
                                                  LocalPopChoice(e_21);
                                                }
                                              else
                                                {
                                                  t = d_21;
                                                  t = y_22;
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
                                                      ATerm f_21 = t;
                                                      int g_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, h_22, j_22);
                                                          {
                                                            ATerm h_21 = t;
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
                                                                t = h_21;
                                                              }
                                                          }
                                                          t = term_o_16;
                                                          t = bottomup_1_0(d_2, t);
                                                          LocalPopChoice(g_21);
                                                        }
                                                      else
                                                        {
                                                          t = f_21;
                                                          {
                                                            ATerm i_21 = t;
                                                            int j_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm o_41 = NULL;
                                                                t = j_22;
                                                                if((h_22 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, a_22, b_22);
                                                                t = genzip_4_0(n_2, q_2, a_3, c_3, t);
                                                                o_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_41), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, h_22, a_22)));
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(j_21);
                                                              }
                                                            else
                                                              {
                                                                t = i_21;
                                                                {
                                                                  ATerm k_21 = t;
                                                                  int l_21 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = k_22;
                                                                      if((m_22 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, m_22);
                                                                      t = d_2(t);
                                                                      LocalPopChoice(l_21);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = k_21;
                                                                      t = y_22;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm n_21 = t;
                                                    int o_21 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = k_22;
                                                        if((m_22 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, m_22);
                                                        t = d_2(t);
                                                        LocalPopChoice(o_21);
                                                      }
                                                    else
                                                      {
                                                        t = n_21;
                                                        t = y_22;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    m_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm p_21 = t;
                                                      int q_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = k_22;
                                                          if((m_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, m_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(q_21);
                                                        }
                                                      else
                                                        {
                                                          t = p_21;
                                                          t = y_22;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_22 = ATgetArgument(t, 0);
                                                        o_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm s_21 = t;
                                                          int d_22 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm b_44 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                              t = d_2(t);
                                                              b_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, b_44);
                                                              t = d_2(t);
                                                              LocalPopChoice(d_22);
                                                            }
                                                          else
                                                            {
                                                              t = s_21;
                                                              t = y_22;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = y_22;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = q_22;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = p_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm v_22 = t;
                                        int x_22 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_o_16;
                                            t = d_2(t);
                                            LocalPopChoice(x_22);
                                          }
                                        else
                                          {
                                            t = v_22;
                                            t = y_22;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            m_22 = ATgetArgument(t, 0);
                                            o_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm b_23 = t;
                                              int c_23 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm m_44 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                  t = d_2(t);
                                                  m_44 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, m_44);
                                                  t = d_2(t);
                                                  LocalPopChoice(c_23);
                                                }
                                              else
                                                {
                                                  t = b_23;
                                                  t = y_22;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                m_22 = ATgetArgument(t, 0);
                                                {
                                                  ATerm d_23 = t;
                                                  int e_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = k_22;
                                                      if((m_22 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, m_22);
                                                      t = d_2(t);
                                                      LocalPopChoice(e_23);
                                                    }
                                                  else
                                                    {
                                                      t = d_23;
                                                      t = y_22;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    m_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm f_23 = t;
                                                      int g_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = k_22;
                                                          if((m_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, m_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(g_23);
                                                        }
                                                      else
                                                        {
                                                          t = f_23;
                                                          t = y_22;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_22 = ATgetArgument(t, 0);
                                                        o_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_23 = t;
                                                          int i_23 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm b_45 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                              t = d_2(t);
                                                              b_45 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, b_45);
                                                              t = d_2(t);
                                                              LocalPopChoice(i_23);
                                                            }
                                                          else
                                                            {
                                                              t = h_23;
                                                              t = y_22;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = y_22;
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
                                k_22 = ATgetArgument(t, 0);
                                t = k_22;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    j_22 = ATgetArgument(t, 0);
                                    t = q_22;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = p_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm j_23 = t;
                                            int m_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_16;
                                                t = d_2(t);
                                                LocalPopChoice(m_23);
                                              }
                                            else
                                              {
                                                t = j_23;
                                                t = y_22;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_22 = ATgetArgument(t, 0);
                                                o_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm p_23 = t;
                                                  int q_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_45 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                      t = d_2(t);
                                                      o_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, o_45);
                                                      t = d_2(t);
                                                      LocalPopChoice(q_23);
                                                    }
                                                  else
                                                    {
                                                      t = p_23;
                                                      t = y_22;
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
                                                        ATerm w_23 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(s_23);
                                                    {
                                                      ATerm x_23 = t;
                                                      int y_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, k_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(y_23);
                                                        }
                                                      else
                                                        {
                                                          t = x_23;
                                                          t = y_22;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = r_23;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        m_22 = ATgetArgument(t, 0);
                                                        t = m_22;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            h_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm z_23 = t;
                                                              int d_24 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm y_45 = NULL;
                                                                  t = j_22;
                                                                  if((h_22 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, h_22);
                                                                  t = d_2(t);
                                                                  y_45 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, y_45);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(d_24);
                                                                }
                                                              else
                                                                {
                                                                  t = z_23;
                                                                  t = y_22;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = y_22;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            m_22 = ATgetArgument(t, 0);
                                                            o_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm l_24 = t;
                                                              int q_24 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm k_46 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                                  t = d_2(t);
                                                                  k_46 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, k_46);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(q_24);
                                                                }
                                                              else
                                                                {
                                                                  t = l_24;
                                                                  t = y_22;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = y_22;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = q_22;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = p_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm v_24 = t;
                                            int y_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_16;
                                                t = d_2(t);
                                                LocalPopChoice(y_24);
                                              }
                                            else
                                              {
                                                t = v_24;
                                                t = y_22;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_22 = ATgetArgument(t, 0);
                                                o_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm a_25 = t;
                                                  int b_25 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm a_47 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                      t = d_2(t);
                                                      a_47 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, a_47);
                                                      t = d_2(t);
                                                      LocalPopChoice(b_25);
                                                    }
                                                  else
                                                    {
                                                      t = a_25;
                                                      t = y_22;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm c_25 = t;
                                                int d_25 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm g_25 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(d_25);
                                                    {
                                                      ATerm j_25 = t;
                                                      int n_25 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, k_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(n_25);
                                                        }
                                                      else
                                                        {
                                                          t = j_25;
                                                          t = y_22;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = c_25;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_22 = ATgetArgument(t, 0);
                                                        o_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm r_25 = t;
                                                          int s_25 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_47 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                              t = d_2(t);
                                                              p_47 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, p_47);
                                                              t = d_2(t);
                                                              LocalPopChoice(s_25);
                                                            }
                                                          else
                                                            {
                                                              t = r_25;
                                                              t = y_22;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = y_22;
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
                                    k_22 = ATgetArgument(t, 0);
                                    l_22 = ATgetArgument(t, 1);
                                    f_22 = ATgetArgument(t, 2);
                                    t = q_22;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = p_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm u_25 = t;
                                            int v_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_16;
                                                t = d_2(t);
                                                LocalPopChoice(v_25);
                                              }
                                            else
                                              {
                                                t = u_25;
                                                t = y_22;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_22 = ATgetArgument(t, 0);
                                                o_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm z_25 = t;
                                                  int a_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_48 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                      t = d_2(t);
                                                      o_48 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, o_48);
                                                      t = d_2(t);
                                                      LocalPopChoice(a_26);
                                                    }
                                                  else
                                                    {
                                                      t = z_25;
                                                      t = y_22;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm d_26 = t;
                                                int e_26 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm f_26 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(e_26);
                                                    {
                                                      ATerm g_26 = t;
                                                      int h_26 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, k_22, l_22, f_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(h_26);
                                                        }
                                                      else
                                                        {
                                                          t = g_26;
                                                          t = y_22;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = d_26;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_22 = ATgetArgument(t, 0);
                                                        o_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm i_26 = t;
                                                          int j_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm e_49 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                              t = d_2(t);
                                                              e_49 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, e_49);
                                                              t = d_2(t);
                                                              LocalPopChoice(j_26);
                                                            }
                                                          else
                                                            {
                                                              t = i_26;
                                                              t = y_22;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = y_22;
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
                                        k_22 = ATgetArgument(t, 0);
                                        l_22 = ATgetArgument(t, 1);
                                        t = q_22;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = p_22;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm k_26 = t;
                                                int o_26 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_o_16;
                                                    t = d_2(t);
                                                    LocalPopChoice(o_26);
                                                  }
                                                else
                                                  {
                                                    t = k_26;
                                                    {
                                                      ATerm q_26 = t;
                                                      int s_26 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm o_50 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, l_22);
                                                          t = d_2(t);
                                                          o_50 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, k_22, o_50);
                                                          t = d_2(t);
                                                          LocalPopChoice(s_26);
                                                        }
                                                      else
                                                        {
                                                          t = q_26;
                                                          t = y_22;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    m_22 = ATgetArgument(t, 0);
                                                    o_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm t_26 = t;
                                                      int x_26 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm y_50 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                          t = d_2(t);
                                                          y_50 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, y_50);
                                                          t = d_2(t);
                                                          LocalPopChoice(x_26);
                                                        }
                                                      else
                                                        {
                                                          t = t_26;
                                                          {
                                                            ATerm y_26 = t;
                                                            int z_26 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm k_51 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, l_22);
                                                                t = d_2(t);
                                                                k_51 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, k_22, k_51);
                                                                t = d_2(t);
                                                                LocalPopChoice(z_26);
                                                              }
                                                            else
                                                              {
                                                                t = y_26;
                                                                t = y_22;
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
                                                        o_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm a_27 = t;
                                                          int b_27 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm v_51 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, l_22);
                                                              t = d_2(t);
                                                              v_51 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, k_22, v_51);
                                                              t = d_2(t);
                                                              LocalPopChoice(b_27);
                                                            }
                                                          else
                                                            {
                                                              t = a_27;
                                                              {
                                                                ATerm k_27 = t;
                                                                int l_27 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm u_52 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                                    t = d_2(t);
                                                                    u_52 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, u_52);
                                                                    t = d_2(t);
                                                                    LocalPopChoice(l_27);
                                                                  }
                                                                else
                                                                  {
                                                                    t = k_27;
                                                                    t = y_22;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm m_27 = t;
                                                        int n_27 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm f_53 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, l_22);
                                                            t = d_2(t);
                                                            f_53 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, k_22, f_53);
                                                            t = d_2(t);
                                                            LocalPopChoice(n_27);
                                                          }
                                                        else
                                                          {
                                                            t = m_27;
                                                            t = y_22;
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
                                            k_22 = ATgetArgument(t, 0);
                                            l_22 = ATgetArgument(t, 1);
                                            t = q_22;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = p_22;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm u_27 = t;
                                                    int y_27 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_o_16;
                                                        t = d_2(t);
                                                        LocalPopChoice(y_27);
                                                      }
                                                    else
                                                      {
                                                        t = u_27;
                                                        {
                                                          ATerm b_28 = t;
                                                          int d_28 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm b_54 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, l_22);
                                                              t = d_2(t);
                                                              b_54 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, k_22, b_54);
                                                              t = d_2(t);
                                                              LocalPopChoice(d_28);
                                                            }
                                                          else
                                                            {
                                                              t = b_28;
                                                              t = y_22;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        m_22 = ATgetArgument(t, 0);
                                                        o_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_28 = t;
                                                          int k_28 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm j_54 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                              t = d_2(t);
                                                              j_54 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, j_54);
                                                              t = d_2(t);
                                                              LocalPopChoice(k_28);
                                                            }
                                                          else
                                                            {
                                                              t = h_28;
                                                              {
                                                                ATerm l_28 = t;
                                                                int m_28 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm s_54 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, l_22);
                                                                    t = d_2(t);
                                                                    s_54 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, k_22, s_54);
                                                                    t = d_2(t);
                                                                    LocalPopChoice(m_28);
                                                                  }
                                                                else
                                                                  {
                                                                    t = l_28;
                                                                    t = y_22;
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
                                                            o_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm n_28 = t;
                                                              int o_28 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm y_54 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, l_22);
                                                                  t = d_2(t);
                                                                  y_54 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, k_22, y_54);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(o_28);
                                                                }
                                                              else
                                                                {
                                                                  t = n_28;
                                                                  {
                                                                    ATerm p_28 = t;
                                                                    int q_28 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm e_55 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                                        t = d_2(t);
                                                                        e_55 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, e_55);
                                                                        t = d_2(t);
                                                                        LocalPopChoice(q_28);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = p_28;
                                                                        t = y_22;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm r_28 = t;
                                                            int s_28 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm u_55 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, l_22);
                                                                t = d_2(t);
                                                                u_55 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, k_22, u_55);
                                                                t = d_2(t);
                                                                LocalPopChoice(s_28);
                                                              }
                                                            else
                                                              {
                                                                t = r_28;
                                                                t = y_22;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = q_22;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = p_22;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm t_28 = t;
                                                    int u_28 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_o_16;
                                                        t = d_2(t);
                                                        LocalPopChoice(u_28);
                                                      }
                                                    else
                                                      {
                                                        t = t_28;
                                                        t = y_22;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        m_22 = ATgetArgument(t, 0);
                                                        o_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm v_28 = t;
                                                          int w_28 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_56 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                              t = d_2(t);
                                                              f_56 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, f_56);
                                                              t = d_2(t);
                                                              LocalPopChoice(w_28);
                                                            }
                                                          else
                                                            {
                                                              t = v_28;
                                                              t = y_22;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            m_22 = ATgetArgument(t, 0);
                                                            o_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm x_28 = t;
                                                              int y_28 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm k_56 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, o_22, p_22);
                                                                  t = d_2(t);
                                                                  k_56 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, m_22, k_56);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(y_28);
                                                                }
                                                              else
                                                                {
                                                                  t = x_28;
                                                                  t = y_22;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = y_22;
                                                          }
                                                      }
                                                  }
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
                    q_22 = ATgetArgument(t, 0);
                    p_22 = ATgetArgument(t, 1);
                    t = p_22;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = q_22;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm z_28 = t;
                            int a_29 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_j_16;
                                t = d_2(t);
                                LocalPopChoice(a_29);
                              }
                            else
                              {
                                t = z_28;
                                t = q_22;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = p_22;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    m_22 = ATgetArgument(t, 0);
                                    o_22 = ATgetArgument(t, 1);
                                    t = q_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        m_22 = ATgetArgument(t, 0);
                                        t = q_22;
                                      }
                                    else
                                      {
                                        t = q_22;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = q_22;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm b_29 = t;
                            int c_29 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_j_16;
                                t = d_2(t);
                                LocalPopChoice(c_29);
                              }
                            else
                              {
                                t = b_29;
                                {
                                  ATerm d_29 = t;
                                  int e_29 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = p_22;
                                      if((q_22 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(e_29);
                                    }
                                  else
                                    {
                                      t = d_29;
                                      t = y_22;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = p_22;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    m_22 = ATgetArgument(t, 0);
                                    o_22 = ATgetArgument(t, 1);
                                    {
                                      ATerm f_29 = t;
                                      int g_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm a_59 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, o_22, p_22);
                                          t = d_2(t);
                                          a_59 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, m_22, a_59);
                                          t = d_2(t);
                                          LocalPopChoice(g_29);
                                        }
                                      else
                                        {
                                          t = f_29;
                                          {
                                            ATerm h_29 = t;
                                            int i_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = p_22;
                                                if((q_22 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(i_29);
                                              }
                                            else
                                              {
                                                t = h_29;
                                                t = y_22;
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
                                          ATerm j_29 = t;
                                          int k_29 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = p_22;
                                              if((q_22 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(k_29);
                                            }
                                          else
                                            {
                                              t = j_29;
                                              {
                                                ATerm l_29 = t;
                                                int n_29 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = m_22;
                                                    t = topdown_1_0(e_3, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, m_22);
                                                    t = bottomup_1_0(d_2, t);
                                                    LocalPopChoice(n_29);
                                                  }
                                                else
                                                  {
                                                    t = l_29;
                                                    t = y_22;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm o_29 = t;
                                        int p_29 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = p_22;
                                            if((q_22 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(p_29);
                                          }
                                        else
                                          {
                                            t = o_29;
                                            t = y_22;
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
                        q_22 = ATgetArgument(t, 0);
                        p_22 = ATgetArgument(t, 1);
                        t = p_22;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = q_22;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm q_29 = t;
                                int s_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_j_16;
                                    t = d_2(t);
                                    LocalPopChoice(s_29);
                                  }
                                else
                                  {
                                    t = q_29;
                                    t = p_22;
                                  }
                              }
                            else
                              {
                                ATerm t_29 = t;
                                int u_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_j_16;
                                    t = d_2(t);
                                    LocalPopChoice(u_29);
                                  }
                                else
                                  {
                                    t = t_29;
                                    t = y_22;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = q_22;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm v_29 = t;
                                    int w_29 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_o_16;
                                        t = d_2(t);
                                        LocalPopChoice(w_29);
                                      }
                                    else
                                      {
                                        t = v_29;
                                        t = p_22;
                                      }
                                  }
                                else
                                  {
                                    ATerm x_29 = t;
                                    int y_29 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_o_16;
                                        t = d_2(t);
                                        LocalPopChoice(y_29);
                                      }
                                    else
                                      {
                                        t = x_29;
                                        t = y_22;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    k_22 = ATgetArgument(t, 0);
                                    l_22 = ATgetArgument(t, 1);
                                    t = q_22;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = p_22;
                                      }
                                    else
                                      {
                                        ATerm z_29 = t;
                                        int c_30 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm z_61 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, q_22, k_22);
                                            t = conc_0_0(t);
                                            z_61 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, z_61, l_22);
                                            t = bottomup_1_0(d_2, t);
                                            LocalPopChoice(c_30);
                                          }
                                        else
                                          {
                                            t = z_29;
                                            t = y_22;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = q_22;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = p_22;
                                      }
                                    else
                                      {
                                        t = y_22;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm d_30 = t;
                        int f_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm g_30 = ATgetArgument(t, 0);
                                p_22 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(f_30);
                            t = p_22;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm h_30 = t;
                                int j_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_j_16;
                                    t = d_2(t);
                                    LocalPopChoice(j_30);
                                  }
                                else
                                  {
                                    t = h_30;
                                    t = y_22;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm k_30 = t;
                                    int l_30 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_o_16;
                                        t = d_2(t);
                                        LocalPopChoice(l_30);
                                      }
                                    else
                                      {
                                        t = k_30;
                                        t = y_22;
                                      }
                                  }
                                else
                                  {
                                    t = y_22;
                                  }
                              }
                          }
                        else
                          {
                            t = d_30;
                            if(match_cons(t, sym_All_1))
                              {
                                q_22 = ATgetArgument(t, 0);
                                t = q_22;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm m_30 = t;
                                    int n_30 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_j_16;
                                        t = d_2(t);
                                        LocalPopChoice(n_30);
                                      }
                                    else
                                      {
                                        t = m_30;
                                        t = y_22;
                                      }
                                  }
                                else
                                  {
                                    t = y_22;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    q_22 = ATgetArgument(t, 0);
                                    t = q_22;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm o_30 = t;
                                        int p_30 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_j_16;
                                            t = d_2(t);
                                            LocalPopChoice(p_30);
                                          }
                                        else
                                          {
                                            t = o_30;
                                            {
                                              ATerm q_30 = t;
                                              int r_30 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,q_63 = NULL;
                                                  t = y_22;
                                                  t = new_0_0(t);
                                                  u_62 = t;
                                                  t = bottomup_1_0(d_2, t);
                                                  n_63 = t;
                                                  t = (ATerm) ATempty;
                                                  t = d_2(t);
                                                  q_63 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(q_63), n_63);
                                                  t = d_2(t);
                                                  v_62 = t;
                                                  t = u_62;
                                                  t = bottomup_1_0(d_2, t);
                                                  m_63 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, m_63);
                                                  t = d_2(t);
                                                  l_63 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, l_63);
                                                  t = d_2(t);
                                                  x_62 = t;
                                                  t = q_22;
                                                  t = bottomup_1_0(d_2, t);
                                                  f_63 = t;
                                                  t = u_62;
                                                  t = bottomup_1_0(d_2, t);
                                                  i_63 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, i_63);
                                                  t = d_2(t);
                                                  h_63 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, h_63);
                                                  t = d_2(t);
                                                  g_63 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_63, g_63);
                                                  t = d_2(t);
                                                  e_63 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_62, e_63);
                                                  t = d_2(t);
                                                  w_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, v_62, w_62);
                                                  t = d_2(t);
                                                  LocalPopChoice(r_30);
                                                }
                                              else
                                                {
                                                  t = q_30;
                                                  t = y_22;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm t_30 = t;
                                            int u_30 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_16;
                                                t = d_2(t);
                                                LocalPopChoice(u_30);
                                              }
                                            else
                                              {
                                                t = t_30;
                                                {
                                                  ATerm v_30 = t;
                                                  int w_30 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,p_64 = NULL;
                                                      t = y_22;
                                                      t = new_0_0(t);
                                                      t_63 = t;
                                                      t = bottomup_1_0(d_2, t);
                                                      k_64 = t;
                                                      t = (ATerm) ATempty;
                                                      t = d_2(t);
                                                      p_64 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(p_64), k_64);
                                                      t = d_2(t);
                                                      y_63 = t;
                                                      t = t_63;
                                                      t = bottomup_1_0(d_2, t);
                                                      j_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, j_64);
                                                      t = d_2(t);
                                                      i_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, i_64);
                                                      t = d_2(t);
                                                      a_64 = t;
                                                      t = q_22;
                                                      t = bottomup_1_0(d_2, t);
                                                      c_64 = t;
                                                      t = t_63;
                                                      t = bottomup_1_0(d_2, t);
                                                      h_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, h_64);
                                                      t = d_2(t);
                                                      e_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, e_64);
                                                      t = d_2(t);
                                                      d_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_64, d_64);
                                                      t = d_2(t);
                                                      b_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_64, b_64);
                                                      t = d_2(t);
                                                      z_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, y_63, z_63);
                                                      t = d_2(t);
                                                      LocalPopChoice(w_30);
                                                    }
                                                  else
                                                    {
                                                      t = v_30;
                                                      t = y_22;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_22 = ATgetArgument(t, 0);
                                                o_22 = ATgetArgument(t, 1);
                                                t = o_22;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    u_21 = ATgetArgument(t, 0);
                                                    w_21 = ATgetArgument(t, 1);
                                                    t = u_21;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        v_21 = ATgetArgument(t, 0);
                                                        t = m_22;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            h_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm b_31 = t;
                                                              int c_31 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm u_64 = NULL,j_65 = NULL,k_65 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, v_21);
                                                                  t = d_2(t);
                                                                  k_65 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, k_65, w_21);
                                                                  t = d_2(t);
                                                                  j_65 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_22, j_65);
                                                                  t = d_2(t);
                                                                  u_64 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, u_64);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(c_31);
                                                                }
                                                              else
                                                                {
                                                                  t = b_31;
                                                                  {
                                                                    ATerm g_31 = t;
                                                                    int h_31 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm u_65 = NULL,v_65 = NULL,a_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL,g_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL;
                                                                        t = y_22;
                                                                        t = new_0_0(t);
                                                                        u_65 = t;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        q_66 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = d_2(t);
                                                                        r_66 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(r_66), q_66);
                                                                        t = d_2(t);
                                                                        v_65 = t;
                                                                        t = u_65;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        p_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, p_66);
                                                                        t = d_2(t);
                                                                        o_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, o_66);
                                                                        t = d_2(t);
                                                                        c_66 = t;
                                                                        t = q_22;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        e_66 = t;
                                                                        t = u_65;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        n_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, n_66);
                                                                        t = d_2(t);
                                                                        g_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, g_66);
                                                                        t = d_2(t);
                                                                        f_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, e_66, f_66);
                                                                        t = d_2(t);
                                                                        d_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, c_66, d_66);
                                                                        t = d_2(t);
                                                                        a_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, v_65, a_66);
                                                                        t = d_2(t);
                                                                        LocalPopChoice(h_31);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = g_31;
                                                                        t = y_22;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm m_31 = t;
                                                            int n_31 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm u_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,e_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL,o_67 = NULL;
                                                                t = y_22;
                                                                t = new_0_0(t);
                                                                u_66 = t;
                                                                t = bottomup_1_0(d_2, t);
                                                                l_67 = t;
                                                                t = (ATerm) ATempty;
                                                                t = d_2(t);
                                                                o_67 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(o_67), l_67);
                                                                t = d_2(t);
                                                                x_66 = t;
                                                                t = u_66;
                                                                t = bottomup_1_0(d_2, t);
                                                                k_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, k_67);
                                                                t = d_2(t);
                                                                j_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, j_67);
                                                                t = d_2(t);
                                                                z_66 = t;
                                                                t = q_22;
                                                                t = bottomup_1_0(d_2, t);
                                                                b_67 = t;
                                                                t = u_66;
                                                                t = bottomup_1_0(d_2, t);
                                                                i_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, i_67);
                                                                t = d_2(t);
                                                                h_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, h_67);
                                                                t = d_2(t);
                                                                e_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, b_67, e_67);
                                                                t = d_2(t);
                                                                a_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, z_66, a_67);
                                                                t = d_2(t);
                                                                y_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, x_66, y_66);
                                                                t = d_2(t);
                                                                LocalPopChoice(n_31);
                                                              }
                                                            else
                                                              {
                                                                t = m_31;
                                                                t = y_22;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = m_22;
                                                        {
                                                          ATerm o_31 = t;
                                                          int p_31 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_67 = NULL,v_67 = NULL,w_67 = NULL,z_67 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL;
                                                              t = y_22;
                                                              t = new_0_0(t);
                                                              u_67 = t;
                                                              t = bottomup_1_0(d_2, t);
                                                              i_68 = t;
                                                              t = (ATerm) ATempty;
                                                              t = d_2(t);
                                                              j_68 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(j_68), i_68);
                                                              t = d_2(t);
                                                              v_67 = t;
                                                              t = u_67;
                                                              t = bottomup_1_0(d_2, t);
                                                              h_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, h_68);
                                                              t = d_2(t);
                                                              g_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, g_68);
                                                              t = d_2(t);
                                                              z_67 = t;
                                                              t = q_22;
                                                              t = bottomup_1_0(d_2, t);
                                                              c_68 = t;
                                                              t = u_67;
                                                              t = bottomup_1_0(d_2, t);
                                                              f_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, f_68);
                                                              t = d_2(t);
                                                              e_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, e_68);
                                                              t = d_2(t);
                                                              d_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, c_68, d_68);
                                                              t = d_2(t);
                                                              b_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_67, b_68);
                                                              t = d_2(t);
                                                              w_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, v_67, w_67);
                                                              t = d_2(t);
                                                              LocalPopChoice(p_31);
                                                            }
                                                          else
                                                            {
                                                              t = o_31;
                                                              t = y_22;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = m_22;
                                                    {
                                                      ATerm t_31 = t;
                                                      int x_31 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm p_68 = NULL,s_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL;
                                                          t = y_22;
                                                          t = new_0_0(t);
                                                          p_68 = t;
                                                          t = bottomup_1_0(d_2, t);
                                                          h_69 = t;
                                                          t = (ATerm) ATempty;
                                                          t = d_2(t);
                                                          i_69 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(i_69), h_69);
                                                          t = d_2(t);
                                                          s_68 = t;
                                                          t = p_68;
                                                          t = bottomup_1_0(d_2, t);
                                                          g_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, g_69);
                                                          t = d_2(t);
                                                          f_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, f_69);
                                                          t = d_2(t);
                                                          v_68 = t;
                                                          t = q_22;
                                                          t = bottomup_1_0(d_2, t);
                                                          z_68 = t;
                                                          t = p_68;
                                                          t = bottomup_1_0(d_2, t);
                                                          e_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, e_69);
                                                          t = d_2(t);
                                                          b_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, b_69);
                                                          t = d_2(t);
                                                          a_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, z_68, a_69);
                                                          t = d_2(t);
                                                          w_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_68, w_68);
                                                          t = d_2(t);
                                                          u_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, s_68, u_68);
                                                          t = d_2(t);
                                                          LocalPopChoice(x_31);
                                                        }
                                                      else
                                                        {
                                                          t = t_31;
                                                          t = y_22;
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
                                                      ATerm z_31 = t;
                                                      int a_32 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, m_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(a_32);
                                                        }
                                                      else
                                                        {
                                                          t = z_31;
                                                          {
                                                            ATerm b_32 = t;
                                                            int c_32 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm m_69 = NULL,o_69 = NULL,p_69 = NULL,r_69 = NULL,s_69 = NULL,z_69 = NULL,a_70 = NULL,e_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL;
                                                                t = y_22;
                                                                t = new_0_0(t);
                                                                m_69 = t;
                                                                t = bottomup_1_0(d_2, t);
                                                                k_70 = t;
                                                                t = (ATerm) ATempty;
                                                                t = d_2(t);
                                                                l_70 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(l_70), k_70);
                                                                t = d_2(t);
                                                                o_69 = t;
                                                                t = m_69;
                                                                t = bottomup_1_0(d_2, t);
                                                                j_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, j_70);
                                                                t = d_2(t);
                                                                i_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, i_70);
                                                                t = d_2(t);
                                                                r_69 = t;
                                                                t = q_22;
                                                                t = bottomup_1_0(d_2, t);
                                                                z_69 = t;
                                                                t = m_69;
                                                                t = bottomup_1_0(d_2, t);
                                                                h_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, h_70);
                                                                t = d_2(t);
                                                                e_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, e_70);
                                                                t = d_2(t);
                                                                a_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, z_69, a_70);
                                                                t = d_2(t);
                                                                s_69 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, r_69, s_69);
                                                                t = d_2(t);
                                                                p_69 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, o_69, p_69);
                                                                t = d_2(t);
                                                                LocalPopChoice(c_32);
                                                              }
                                                            else
                                                              {
                                                                t = b_32;
                                                                t = y_22;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm e_32 = t;
                                                    int f_32 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm u_70 = NULL,x_70 = NULL,z_70 = NULL,a_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL,z_71 = NULL;
                                                        t = y_22;
                                                        t = new_0_0(t);
                                                        u_70 = t;
                                                        t = bottomup_1_0(d_2, t);
                                                        q_71 = t;
                                                        t = (ATerm) ATempty;
                                                        t = d_2(t);
                                                        z_71 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(z_71), q_71);
                                                        t = d_2(t);
                                                        x_70 = t;
                                                        t = u_70;
                                                        t = bottomup_1_0(d_2, t);
                                                        p_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, p_71);
                                                        t = d_2(t);
                                                        o_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, o_71);
                                                        t = d_2(t);
                                                        a_71 = t;
                                                        t = q_22;
                                                        t = bottomup_1_0(d_2, t);
                                                        i_71 = t;
                                                        t = u_70;
                                                        t = bottomup_1_0(d_2, t);
                                                        l_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, l_71);
                                                        t = d_2(t);
                                                        k_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, k_71);
                                                        t = d_2(t);
                                                        j_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, i_71, j_71);
                                                        t = d_2(t);
                                                        h_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, a_71, h_71);
                                                        t = d_2(t);
                                                        z_70 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, x_70, z_70);
                                                        t = d_2(t);
                                                        LocalPopChoice(f_32);
                                                      }
                                                    else
                                                      {
                                                        t = e_32;
                                                        t = y_22;
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
                                        q_22 = ATgetArgument(t, 0);
                                        t = q_22;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm g_32 = t;
                                            int h_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_j_16;
                                                t = d_2(t);
                                                LocalPopChoice(h_32);
                                              }
                                            else
                                              {
                                                t = g_32;
                                                t = y_22;
                                              }
                                          }
                                        else
                                          {
                                            t = y_22;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            q_22 = ATgetArgument(t, 0);
                                            t = q_22;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm i_32 = t;
                                                int k_32 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_o_16;
                                                    t = d_2(t);
                                                    LocalPopChoice(k_32);
                                                  }
                                                else
                                                  {
                                                    t = i_32;
                                                    t = y_22;
                                                  }
                                              }
                                            else
                                              {
                                                t = y_22;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                q_22 = ATgetArgument(t, 0);
                                                t = q_22;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm l_32 = t;
                                                    int m_32 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_o_16;
                                                        t = d_2(t);
                                                        LocalPopChoice(m_32);
                                                      }
                                                    else
                                                      {
                                                        t = l_32;
                                                        t = y_22;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = y_22;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm o_32 = t;
                                                int p_32 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm q_32 = ATgetArgument(t, 0);
                                                        p_22 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(p_32);
                                                    t = p_22;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm r_32 = t;
                                                        int s_32 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_o_16;
                                                            t = d_2(t);
                                                            LocalPopChoice(s_32);
                                                          }
                                                        else
                                                          {
                                                            t = r_32;
                                                            t = y_22;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = y_22;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = o_32;
                                                    {
                                                      ATerm w_32 = t;
                                                      int x_32 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm a_33 = ATgetArgument(t, 0);
                                                              p_22 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(x_32);
                                                          {
                                                            ATerm b_33 = t;
                                                            int c_33 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = p_22;
                                                                t = fetch_1_0(f_3, t);
                                                                t = term_o_16;
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(c_33);
                                                              }
                                                            else
                                                              {
                                                                t = b_33;
                                                                t = y_22;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = w_32;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              q_22 = ATgetArgument(t, 0);
                                                              p_22 = ATgetArgument(t, 1);
                                                              t = p_22;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = q_22;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = p_22;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          m_22 = ATgetArgument(t, 0);
                                                                          o_22 = ATgetArgument(t, 1);
                                                                          t = q_22;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = q_22;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = q_22;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = p_22;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          m_22 = ATgetArgument(t, 0);
                                                                          o_22 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm d_33 = t;
                                                                            int f_33 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm i_75 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, o_22, p_22);
                                                                                t = d_2(t);
                                                                                i_75 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, m_22, i_75);
                                                                                t = d_2(t);
                                                                                LocalPopChoice(f_33);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = d_33;
                                                                                {
                                                                                  ATerm g_33 = t;
                                                                                  int h_33 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = p_22;
                                                                                      if((q_22 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(h_33);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = g_33;
                                                                                      t = y_22;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm i_33 = t;
                                                                          int j_33 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = p_22;
                                                                              if((q_22 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(j_33);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = i_33;
                                                                              t = y_22;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  q_22 = ATgetArgument(t, 0);
                                                                  p_22 = ATgetArgument(t, 1);
                                                                  r_21 = ATgetArgument(t, 2);
                                                                  t = r_21;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm k_33 = t;
                                                                      int l_33 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, p_22);
                                                                          t = d_2(t);
                                                                          LocalPopChoice(l_33);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = k_33;
                                                                          t = y_22;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = y_22;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      q_22 = ATgetArgument(t, 0);
                                                                      p_22 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm m_33 = t;
                                                                        int n_33 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, q_22, p_22);
                                                                            t = d_2(t);
                                                                            LocalPopChoice(n_33);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = m_33;
                                                                            t = y_22;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          q_22 = ATgetArgument(t, 0);
                                                                          t = q_22;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              m_22 = ATgetFirst((ATermList) t);
                                                                              o_22 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm o_33 = t;
                                                                                int p_33 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm f_76 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, o_22);
                                                                                    t = d_2(t);
                                                                                    f_76 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, m_22, f_76);
                                                                                    t = d_2(t);
                                                                                    LocalPopChoice(p_33);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = o_33;
                                                                                    t = y_22;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm q_33 = t;
                                                                                  int s_33 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_o_16;
                                                                                      t = d_2(t);
                                                                                      LocalPopChoice(s_33);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = q_33;
                                                                                      t = y_22;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = y_22;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              q_22 = ATgetArgument(t, 0);
                                                                              t = q_22;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  m_22 = ATgetFirst((ATermList) t);
                                                                                  o_22 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm t_33 = t;
                                                                                    int u_33 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm l_76 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, o_22);
                                                                                        t = d_2(t);
                                                                                        l_76 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, m_22, l_76);
                                                                                        t = d_2(t);
                                                                                        LocalPopChoice(u_33);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = t_33;
                                                                                        t = y_22;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm w_33 = t;
                                                                                      int x_33 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_o_16;
                                                                                          t = d_2(t);
                                                                                          LocalPopChoice(x_33);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = w_33;
                                                                                          t = y_22;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = y_22;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  q_22 = ATgetArgument(t, 0);
                                                                                  t = q_22;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      m_22 = ATgetFirst((ATermList) t);
                                                                                      o_22 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm y_33 = t;
                                                                                        int a_34 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm y_76 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, o_22);
                                                                                            t = d_2(t);
                                                                                            y_76 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, m_22, y_76);
                                                                                            t = d_2(t);
                                                                                            LocalPopChoice(a_34);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = y_33;
                                                                                            t = y_22;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm b_34 = t;
                                                                                          int c_34 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_j_16;
                                                                                              t = d_2(t);
                                                                                              LocalPopChoice(c_34);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = b_34;
                                                                                              t = y_22;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = y_22;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      q_22 = ATgetArgument(t, 0);
                                                                                      p_22 = ATgetArgument(t, 1);
                                                                                      r_21 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm d_34 = t;
                                                                                        int f_34 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL;
                                                                                            t = term_g_34;
                                                                                            t = bottomup_1_0(d_2, t);
                                                                                            g_77 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = d_2(t);
                                                                                            j_77 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(j_77), r_21);
                                                                                            t = d_2(t);
                                                                                            i_77 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(i_77), q_22);
                                                                                            t = d_2(t);
                                                                                            h_77 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, g_77, h_77);
                                                                                            t = d_2(t);
                                                                                            f_77 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, p_22, f_77);
                                                                                            t = d_2(t);
                                                                                            LocalPopChoice(f_34);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = d_34;
                                                                                            t = y_22;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          q_22 = ATgetArgument(t, 0);
                                                                                          p_22 = ATgetArgument(t, 1);
                                                                                          r_21 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm i_34 = t;
                                                                                            int j_34 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, p_22);
                                                                                                t = d_2(t);
                                                                                                p_77 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, r_21);
                                                                                                t = d_2(t);
                                                                                                s_77 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = d_2(t);
                                                                                                t_77 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(t_77), s_77);
                                                                                                t = d_2(t);
                                                                                                r_77 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(r_77), q_22);
                                                                                                t = d_2(t);
                                                                                                q_77 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(q_77), p_77);
                                                                                                t = d_2(t);
                                                                                                o_77 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, o_77);
                                                                                                t = d_2(t);
                                                                                                LocalPopChoice(j_34);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = i_34;
                                                                                                t = y_22;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              q_22 = ATgetArgument(t, 0);
                                                                                              p_22 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm l_34 = t;
                                                                                                int n_34 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm x_77 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, p_22);
                                                                                                    t = d_2(t);
                                                                                                    x_77 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, x_77);
                                                                                                    t = d_2(t);
                                                                                                    LocalPopChoice(n_34);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = l_34;
                                                                                                    t = y_22;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  q_22 = ATgetArgument(t, 0);
                                                                                                  p_22 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm o_34 = t;
                                                                                                    int q_34 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm b_78 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, q_22);
                                                                                                        t = d_2(t);
                                                                                                        b_78 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, b_78, p_22);
                                                                                                        t = d_2(t);
                                                                                                        LocalPopChoice(q_34);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = o_34;
                                                                                                        t = y_22;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      q_22 = ATgetArgument(t, 0);
                                                                                                      p_22 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm r_34 = t;
                                                                                                        int s_34 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm h_78 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, p_22);
                                                                                                            t = d_2(t);
                                                                                                            h_78 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, h_78, q_22);
                                                                                                            t = d_2(t);
                                                                                                            LocalPopChoice(s_34);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = r_34;
                                                                                                            t = y_22;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          q_22 = ATgetArgument(t, 0);
                                                                                                          p_22 = ATgetArgument(t, 1);
                                                                                                          t = p_22;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              k_22 = ATgetArgument(t, 0);
                                                                                                              l_22 = ATgetArgument(t, 1);
                                                                                                              t = q_22;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = p_22;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm v_34 = t;
                                                                                                                  int w_34 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm x_78 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, q_22, k_22);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      x_78 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, x_78, l_22);
                                                                                                                      t = bottomup_1_0(d_2, t);
                                                                                                                      LocalPopChoice(w_34);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = v_34;
                                                                                                                      t = y_22;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  k_22 = ATgetArgument(t, 0);
                                                                                                                  l_22 = ATgetArgument(t, 1);
                                                                                                                  f_22 = ATgetArgument(t, 2);
                                                                                                                  t = f_22;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = l_22;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = k_22;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              j_22 = ATgetArgument(t, 0);
                                                                                                                              t = q_22;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = p_22;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      m_22 = ATgetFirst((ATermList) t);
                                                                                                                                      o_22 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = o_22;
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
                                                                                                                                                      ATerm y_34 = t;
                                                                                                                                                      int z_34 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = j_22;
                                                                                                                                                          if((h_22 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = y_21;
                                                                                                                                                          {
                                                                                                                                                            ATerm a_35 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm g_3 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm b_35 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(b_35, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((h_22 != ATgetArgument(b_35, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(b_35, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm c_35 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(c_35) != AT_LIST) || !(ATisEmpty(c_35))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm g_35 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(g_35) != AT_LIST) || !(ATisEmpty(g_35))))
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
                                                                                                                                                                t = a_35;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = y_21;
                                                                                                                                                          t = bottomup_1_0(d_2, t);
                                                                                                                                                          LocalPopChoice(z_34);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = y_34;
                                                                                                                                                          t = y_22;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = y_22;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = y_22;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = y_22;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = y_22;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = y_22;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = q_22;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = p_22;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = y_22;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = q_22;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = p_22;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = y_22;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = q_22;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = p_22;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = y_22;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = q_22;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = p_22;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = y_22;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              q_22 = ATgetArgument(t, 0);
                                                                                                              p_22 = ATgetArgument(t, 1);
                                                                                                              t = q_22;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = p_22;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = y_22;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = y_22;
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                  }
                                              }
                                          }
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
  ATerm i_80 = NULL,j_80 = NULL,l_80 = NULL,m_80 = NULL,d_18 = NULL,e_18 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm h_35 = ATgetArgument(t, 0);
      if(match_cons(h_35, sym_SVar_1))
        {
          l_80 = ATgetArgument(h_35, 0);
        }
      else
        _fail(t);
      i_80 = ATgetArgument(t, 1);
      j_80 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_80), (ATerm)ATempty, (ATerm) ATempty);
  d_18 = t;
  t = term_i_35;
  e_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_35, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_80), (ATerm)ATempty, (ATerm) ATempty));
  t = z_6(e_18, d_18, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm k_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_35) != ATmakeSymbol("n_0", 0, ATtrue)))
        _fail(t);
      m_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_80), i_80, j_80);
  return(t);
}
ATerm SubsArgCall1_0_0 (ATerm t)
{
  ATerm o_80 = NULL,p_80 = NULL,h_18 = NULL;
  o_80 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm n_35 = ATgetArgument(t, 0);
      if(match_cons(n_35, sym_SVar_1))
        {
          ATerm s_35 = ATgetArgument(n_35, 0);
        }
      else
        _fail(t);
      {
        ATerm o_35 = ATgetArgument(t, 1);
        if(((ATgetType(o_35) != AT_LIST) || !(ATisEmpty(o_35))))
          _fail(t);
      }
      {
        ATerm r_35 = ATgetArgument(t, 2);
        if(((ATgetType(r_35) != AT_LIST) || !(ATisEmpty(r_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_t_35;
  h_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_35, o_80);
  t = z_6(h_18, o_80, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm u_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_35) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      p_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_80;
  t = strename_0_0(t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_i_35;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_t_35;
  return(t);
}
ATerm substitute_arg_0_0 (ATerm t)
{
  ATerm j_81 = NULL,k_81 = NULL,l_81 = NULL,m_81 = NULL,n_81 = NULL,o_81 = NULL,p_81 = NULL,q_81 = NULL,r_81 = NULL,t_81 = NULL,v_81 = NULL;
  n_81 = t;
  if(match_cons(t, sym__2))
    {
      o_81 = ATgetArgument(t, 0);
      v_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_81;
  if(match_cons(t, sym_VarDec_2))
    {
      p_81 = ATgetArgument(t, 0);
      q_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_81;
  if(match_cons(t, sym_FunType_2))
    {
      r_81 = ATgetArgument(t, 0);
      {
        ATerm v_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = r_81;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_35 = ATgetFirst((ATermList) t);
      t_81 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_81;
  {
    ATerm y_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_36 = ATgetFirst((ATermList) t);
            ATerm c_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(a_36);
        {
          ATerm z_81 = NULL,a_82 = NULL;
          t = v_81;
          if(match_cons(t, sym_CallT_3))
            {
              j_81 = ATgetArgument(t, 0);
              l_81 = ATgetArgument(t, 1);
              m_81 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = j_81;
          if(match_cons(t, sym_SVar_1))
            {
              k_81 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_81;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = m_81;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_81), (ATerm)ATempty, (ATerm) ATempty);
          z_81 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_36, k_81);
          a_82 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_81), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_d_36, k_81));
          t = n_13(h_3, z_81, a_82, t);
          t = n_81;
        }
      }
    else
      {
        t = y_35;
        {
          ATerm g_82 = NULL,h_82 = NULL;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_81), (ATerm)ATempty, (ATerm) ATempty);
          g_82 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_36, v_81);
          h_82 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_81), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_e_36, v_81));
          t = n_13(i_3, g_82, h_82, t);
          t = n_81;
        }
      }
  }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_t_35;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_i_35;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_36 = ATgetArgument(t, 0);
      if(((ATgetType(f_36) != AT_LIST) || !(ATisEmpty(f_36))))
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
static ATerm o_3 (ATerm t)
{
  ATerm r_82 = NULL,u_82 = NULL,v_82 = NULL,w_82 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_36 = ATgetArgument(t, 0);
      if(((ATgetType(h_36) == AT_LIST) && !(ATisEmpty(h_36))))
        {
          r_82 = ATgetFirst((ATermList) h_36);
          u_82 = (ATerm) ATgetNext((ATermList) h_36);
        }
      else
        _fail(t);
      {
        ATerm k_36 = ATgetArgument(t, 1);
        if(((ATgetType(k_36) == AT_LIST) && !(ATisEmpty(k_36))))
          {
            v_82 = ATgetFirst((ATermList) k_36);
            w_82 = (ATerm) ATgetNext((ATermList) k_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_82, v_82), (ATerm) ATmakeAppl(sym__2, u_82, w_82));
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm x_82 = NULL,y_82 = NULL;
  if(match_cons(t, sym__2))
    {
      x_82 = ATgetArgument(t, 0);
      y_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_82), x_82);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm n_36 = t;
  int o_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_36 = t;
      int q_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SubsArgCall1_0_0(t);
          LocalPopChoice(q_36);
        }
      else
        {
          t = p_36;
          t = SubsArgCall2_0_0(t);
        }
      LocalPopChoice(o_36);
    }
  else
    {
      t = n_36;
    }
  return(t);
}
ATerm substitute_args_0_0 (ATerm t)
{
  ATerm j_82 = NULL,k_82 = NULL,l_82 = NULL;
  static ATerm k_3 (ATerm t)
  {
    static ATerm m_3 (ATerm t)
    {
      if(match_cons(t, sym__3))
        {
          if(((j_82 != NULL) && (j_82 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            j_82 = ATgetArgument(t, 0);
          if(((k_82 != NULL) && (k_82 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            k_82 = ATgetArgument(t, 1);
          if(((l_82 != NULL) && (l_82 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            l_82 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, j_82, k_82);
      t = genzip_4_0(n_3, o_3, p_3, substitute_arg_0_0, t);
      t = l_82;
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
      ATerm u_36 = ATgetArgument(t, 0);
      if(((ATgetType(u_36) != AT_LIST) || !(ATisEmpty(u_36))))
        _fail(t);
      {
        ATerm v_36 = ATgetArgument(t, 1);
        if(((ATgetType(v_36) != AT_LIST) || !(ATisEmpty(v_36))))
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
      ATerm w_36 = ATgetArgument(t, 0);
      if(((ATgetType(w_36) == AT_LIST) && !(ATisEmpty(w_36))))
        {
          s_18 = ATgetFirst((ATermList) w_36);
          t_18 = (ATerm) ATgetNext((ATermList) w_36);
        }
      else
        _fail(t);
      {
        ATerm a_37 = ATgetArgument(t, 1);
        if(((ATgetType(a_37) == AT_LIST) && !(ATisEmpty(a_37))))
          {
            u_18 = ATgetFirst((ATermList) a_37);
            v_18 = (ATerm) ATgetNext((ATermList) a_37);
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
    ATerm e_37 = t;
    int f_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm g_37 = ATgetArgument(t, 0);
            b_19 = ATgetArgument(t, 1);
            c_19 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(f_37);
        t = (ATerm) ATmakeAppl(sym_SDef_3, e_19, b_19, c_19);
      }
    else
      {
        t = e_37;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm j_37 = ATgetArgument(t, 0);
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
static ATerm w_3 (ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_37 = ATgetArgument(t, 0);
      if(((ATgetType(m_37) == AT_LIST) && !(ATisEmpty(m_37))))
        {
          a_20 = ATgetFirst((ATermList) m_37);
          b_20 = (ATerm) ATgetNext((ATermList) m_37);
        }
      else
        _fail(t);
      {
        ATerm n_37 = ATgetArgument(t, 1);
        if(((ATgetType(n_37) == AT_LIST) && !(ATisEmpty(n_37))))
          {
            c_20 = ATgetFirst((ATermList) n_37);
            d_20 = (ATerm) ATgetNext((ATermList) n_37);
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
static ATerm z_3 (ATerm t)
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
    ATerm o_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm r_37 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_37);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, k_20);
      }
    else
      {
        t = o_37;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm s_37 = ATgetArgument(t, 0);
            j_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, k_20, j_20);
      }
  }
  return(t);
}
static ATerm a_4 (ATerm t)
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
static ATerm b_4 (ATerm t)
{
  ATerm i_22 = NULL,n_22 = NULL,r_22 = NULL,s_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_37 = ATgetArgument(t, 0);
      if(((ATgetType(v_37) == AT_LIST) && !(ATisEmpty(v_37))))
        {
          i_22 = ATgetFirst((ATermList) v_37);
          n_22 = (ATerm) ATgetNext((ATermList) v_37);
        }
      else
        _fail(t);
      {
        ATerm w_37 = ATgetArgument(t, 1);
        if(((ATgetType(w_37) == AT_LIST) && !(ATisEmpty(w_37))))
          {
            r_22 = ATgetFirst((ATermList) w_37);
            s_22 = (ATerm) ATgetNext((ATermList) w_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_22, r_22), (ATerm) ATmakeAppl(sym__2, n_22, s_22));
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL;
  if(match_cons(t, sym__2))
    {
      t_22 = ATgetArgument(t, 0);
      u_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_22), t_22);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm w_22 = NULL,z_22 = NULL,a_23 = NULL;
  if(match_cons(t, sym__2))
    {
      w_22 = ATgetArgument(t, 0);
      a_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_22;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, a_23);
      }
    else
      {
        t = x_37;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm b_38 = ATgetArgument(t, 0);
            z_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, a_23, z_22);
      }
  }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_38 = ATgetArgument(t, 0);
      if(((ATgetType(c_38) != AT_LIST) || !(ATisEmpty(c_38))))
        _fail(t);
      {
        ATerm d_38 = ATgetArgument(t, 1);
        if(((ATgetType(d_38) != AT_LIST) || !(ATisEmpty(d_38))))
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
  ATerm e_24 = NULL,f_24 = NULL,h_24 = NULL,i_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_38 = ATgetArgument(t, 0);
      if(((ATgetType(e_38) == AT_LIST) && !(ATisEmpty(e_38))))
        {
          e_24 = ATgetFirst((ATermList) e_38);
          f_24 = (ATerm) ATgetNext((ATermList) e_38);
        }
      else
        _fail(t);
      {
        ATerm f_38 = ATgetArgument(t, 1);
        if(((ATgetType(f_38) == AT_LIST) && !(ATisEmpty(f_38))))
          {
            h_24 = ATgetFirst((ATermList) f_38);
            i_24 = (ATerm) ATgetNext((ATermList) f_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_24, h_24), (ATerm) ATmakeAppl(sym__2, f_24, i_24));
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL;
  if(match_cons(t, sym__2))
    {
      j_24 = ATgetArgument(t, 0);
      k_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_24), j_24);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm m_24 = NULL,w_24 = NULL,x_24 = NULL;
  if(match_cons(t, sym__2))
    {
      m_24 = ATgetArgument(t, 0);
      x_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_24;
  {
    ATerm g_38 = t;
    int h_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm i_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(h_38);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_24);
      }
    else
      {
        t = g_38;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm l_38 = ATgetArgument(t, 0);
            w_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, x_24, w_24);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm q_101 (ATerm), ATerm t)
{
  ATerm y_89 = NULL,z_89 = NULL,b_90 = NULL,c_90 = NULL,d_90 = NULL;
  b_90 = t;
  if(match_cons(t, sym_Let_2))
    {
      c_90 = ATgetArgument(t, 0);
      d_90 = ATgetArgument(t, 1);
      {
        ATerm m_18 = NULL,p_18 = NULL,q_18 = NULL,t_4 = NULL;
        t = SSLgetAnnotations(b_90);
        m_18 = t;
        t = c_90;
        t = q_101(t);
        q_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_90, q_18);
        t = genzip_4_0(r_3, s_3, t_3, u_3, t);
        p_18 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, p_18, d_90);
        t_4 = t;
        t = SSLsetAnnotations(t_4, m_18);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          c_90 = ATgetArgument(t, 0);
          d_90 = ATgetArgument(t, 1);
          y_89 = ATgetArgument(t, 2);
          {
            ATerm t_19 = NULL,x_19 = NULL,y_19 = NULL,u_4 = NULL;
            t = SSLgetAnnotations(b_90);
            t_19 = t;
            t = d_90;
            t = q_101(t);
            y_19 = t;
            t = (ATerm) ATmakeAppl(sym__2, d_90, y_19);
            t = genzip_4_0(v_3, w_3, x_3, z_3, t);
            x_19 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, c_90, x_19, y_89);
            u_4 = t;
            t = SSLsetAnnotations(u_4, t_19);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              c_90 = ATgetArgument(t, 0);
              d_90 = ATgetArgument(t, 1);
              y_89 = ATgetArgument(t, 2);
              z_89 = ATgetArgument(t, 3);
              {
                ATerm m_21 = NULL,t_21 = NULL,c_22 = NULL,w_4 = NULL;
                t = SSLgetAnnotations(b_90);
                m_21 = t;
                t = d_90;
                t = q_101(t);
                c_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, d_90, c_22);
                t = genzip_4_0(a_4, b_4, c_4, d_4, t);
                t_21 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, c_90, t_21, y_89, z_89);
                w_4 = t;
                t = SSLsetAnnotations(w_4, m_21);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  c_90 = ATgetArgument(t, 0);
                  d_90 = ATgetArgument(t, 1);
                  y_89 = ATgetArgument(t, 2);
                  z_89 = ATgetArgument(t, 3);
                  {
                    ATerm v_23 = NULL,a_24 = NULL,c_24 = NULL,x_4 = NULL;
                    t = SSLgetAnnotations(b_90);
                    v_23 = t;
                    t = d_90;
                    t = q_101(t);
                    c_24 = t;
                    t = (ATerm) ATmakeAppl(sym__2, d_90, c_24);
                    t = genzip_4_0(e_4, f_4, j_4, k_4, t);
                    a_24 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, c_90, a_24, y_89, z_89);
                    x_4 = t;
                    t = SSLsetAnnotations(x_4, v_23);
                  }
                }
              else
                {
                  ATerm y_25 = NULL,b_26 = NULL,y_4 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      c_90 = ATgetArgument(t, 0);
                      d_90 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(b_90);
                  y_25 = t;
                  t = c_90;
                  t = q_101(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      b_26 = ATgetFirst((ATermList) t);
                      {
                        ATerm n_38 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, b_26, d_90);
                  y_4 = t;
                  t = SSLsetAnnotations(y_4, y_25);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm t)
{
  ATerm p_93 = NULL,r_93 = NULL,s_93 = NULL,t_93 = NULL,u_93 = NULL;
  s_93 = t;
  if(match_cons(t, sym_Let_2))
    {
      t_93 = ATgetArgument(t, 0);
      u_93 = ATgetArgument(t, 1);
      {
        ATerm r_26 = NULL,u_26 = NULL,w_26 = NULL,g_5 = NULL;
        t = SSLgetAnnotations(s_93);
        r_26 = t;
        t = t_93;
        t = r_101(t);
        u_26 = t;
        t = u_93;
        t = r_101(t);
        w_26 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, u_26, w_26);
        g_5 = t;
        t = SSLsetAnnotations(g_5, r_26);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          t_93 = ATgetArgument(t, 0);
          u_93 = ATgetArgument(t, 1);
          p_93 = ATgetArgument(t, 2);
          {
            ATerm v_27 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_5 = NULL;
            t = SSLgetAnnotations(s_93);
            v_27 = t;
            t = t_93;
            t = t_101(t);
            e_28 = t;
            t = u_93;
            t = t_101(t);
            f_28 = t;
            t = p_93;
            t = r_101(t);
            g_28 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, e_28, f_28, g_28);
            h_5 = t;
            t = SSLsetAnnotations(h_5, v_27);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              t_93 = ATgetArgument(t, 0);
              u_93 = ATgetArgument(t, 1);
              p_93 = ATgetArgument(t, 2);
              r_93 = ATgetArgument(t, 3);
              {
                ATerm m_29 = NULL,r_29 = NULL,a_30 = NULL,b_30 = NULL,e_30 = NULL,i_5 = NULL;
                t = SSLgetAnnotations(s_93);
                m_29 = t;
                t = t_93;
                t = t_101(t);
                r_29 = t;
                t = u_93;
                t = t_101(t);
                a_30 = t;
                t = p_93;
                t = t_101(t);
                b_30 = t;
                t = r_93;
                t = r_101(t);
                e_30 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, r_29, a_30, b_30, e_30);
                i_5 = t;
                t = SSLsetAnnotations(i_5, m_29);
              }
            }
          else
            {
              ATerm y_30 = NULL,e_31 = NULL,f_31 = NULL,j_5 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  t_93 = ATgetArgument(t, 0);
                  u_93 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(s_93);
              y_30 = t;
              t = t_93;
              t = t_101(t);
              e_31 = t;
              t = u_93;
              t = r_101(t);
              f_31 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, e_31, f_31);
              j_5 = t;
              t = SSLsetAnnotations(j_5, y_30);
            }
        }
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm b_94 = NULL;
  ATerm q_38 = t;
  int s_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          b_94 = ATgetArgument(t, 0);
          {
            ATerm v_38 = ATgetArgument(t, 1);
          }
          {
            ATerm w_38 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_38);
      t = b_94;
    }
  else
    {
      t = q_38;
      if(match_cons(t, sym_SDefT_4))
        {
          b_94 = ATgetArgument(t, 0);
          {
            ATerm y_38 = ATgetArgument(t, 1);
          }
          {
            ATerm z_38 = ATgetArgument(t, 2);
          }
          {
            ATerm a_39 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = b_94;
    }
  return(t);
}
static ATerm u_12 (ATerm l_25, ATerm k_25, ATerm t)
{
  t = l_25;
  t = map_1_0(l_4, t);
  return(t);
}
ATerm SVar_1_0 (ATerm z_83 (ATerm), ATerm t)
{
  ATerm h_94 = NULL,i_94 = NULL,j_94 = NULL,k_94 = NULL,p_5 = NULL;
  k_94 = t;
  if(match_cons(t, sym_SVar_1))
    {
      i_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_94);
  h_94 = t;
  t = i_94;
  t = z_83(t);
  j_94 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, j_94);
  p_5 = t;
  t = SSLsetAnnotations(p_5, h_94);
  return(t);
}
static ATerm f_13 (ATerm t_117 (ATerm), ATerm u_117 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm d_43, ATerm c_43, ATerm b_43, ATerm t)
{
  static ATerm m_4 (ATerm t)
  {
    ATerm m_94 = NULL;
    m_94 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_94, b_43);
    t = t_117(t);
    return(t);
  }
  static ATerm o_4 (ATerm t)
  {
    ATerm n_94 = NULL;
    n_94 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_94, c_43);
    t = t_117(t);
    return(t);
  }
  t = d_43;
  t = u_117(m_4, o_4, _id, t);
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
      ATerm c_39 = ATgetArgument(t, 0);
      if(((ATgetType(c_39) != AT_LIST) || !(ATisEmpty(c_39))))
        _fail(t);
      {
        ATerm f_39 = ATgetArgument(t, 1);
        if(((ATgetType(f_39) != AT_LIST) || !(ATisEmpty(f_39))))
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
  ATerm y_94 = NULL,z_94 = NULL,a_95 = NULL,b_95 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_39 = ATgetArgument(t, 0);
      if(((ATgetType(g_39) == AT_LIST) && !(ATisEmpty(g_39))))
        {
          y_94 = ATgetFirst((ATermList) g_39);
          z_94 = (ATerm) ATgetNext((ATermList) g_39);
        }
      else
        _fail(t);
      {
        ATerm h_39 = ATgetArgument(t, 1);
        if(((ATgetType(h_39) == AT_LIST) && !(ATisEmpty(h_39))))
          {
            a_95 = ATgetFirst((ATermList) h_39);
            b_95 = (ATerm) ATgetNext((ATermList) h_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_94, a_95), (ATerm) ATmakeAppl(sym__2, z_94, b_95));
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm c_95 = NULL,d_95 = NULL;
  if(match_cons(t, sym__2))
    {
      c_95 = ATgetArgument(t, 0);
      d_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_95), c_95);
  return(t);
}
static ATerm g_13 (ATerm n_117 (ATerm), ATerm o_117 (ATerm (ATerm), ATerm), ATerm v_42, ATerm y_42, ATerm t)
{
  ATerm s_94 = NULL,t_94 = NULL,u_94 = NULL,v_94 = NULL,x_94 = NULL;
  t = v_42;
  t = n_117(t);
  s_94 = t;
  t = map_1_0(new_0_0, t);
  t_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_94, t_94);
  t = genzip_4_0(q_4, r_4, s_4, _id, t);
  x_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_94, y_42);
  t = conc_0_0(t);
  u_94 = t;
  t = v_42;
  {
    static ATerm v_4 (ATerm t)
    {
      t = t_94;
      return(t);
    }
    t = o_117(v_4, t);
  }
  v_94 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_94, y_42, u_94);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL,p_95 = NULL;
  l_95 = t;
  if(match_cons(t, sym__2))
    {
      m_95 = ATgetArgument(t, 0);
      n_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_95;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_95 = ATgetFirst((ATermList) t);
      p_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_95;
  if(match_cons(t, sym__2))
    {
      j_95 = ATgetArgument(t, 0);
      k_95 = ATgetArgument(t, 1);
      {
        ATerm j_39 = t;
        int k_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_95;
            if((m_95 != t))
              {
                _fail(t);
              }
            t = k_95;
            LocalPopChoice(k_39);
          }
        else
          {
            t = j_39;
            t = (ATerm) ATmakeAppl(sym__2, m_95, p_95);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, m_95, p_95);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm b_118 (ATerm), ATerm t)
{
  static ATerm l_96 (ATerm t)
  {
    ATerm l_39 = t;
    int m_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_118(t);
        LocalPopChoice(m_39);
      }
    else
      {
        t = l_39;
        {
          ATerm i_96 = NULL,j_96 = NULL,k_96 = NULL;
          static ATerm z_4 (ATerm t)
          {
            ATerm j_32 = NULL;
            j_32 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_32, not_null(k_96));
            t = l_96(t);
            return(t);
          }
          i_96 = t;
          if(match_cons(t, sym__2))
            {
              j_96 = ATgetArgument(t, 0);
              if(((k_96 != NULL) && (k_96 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                k_96 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_96;
          t = SRTS_all(z_4, t);
        }
      }
    return(t);
  }
  t = l_96(t);
  return(t);
}
ATerm rename_4_0 (ATerm i_117 (ATerm (ATerm), ATerm), ATerm j_117 (ATerm), ATerm k_117 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_117 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm p_96 = NULL;
  static ATerm e_97 (ATerm t)
  {
    static ATerm a_5 (ATerm t)
    {
      ATerm y_96 = NULL,z_96 = NULL,a_97 = NULL;
      y_96 = t;
      if(match_cons(t, sym__2))
        {
          z_96 = ATgetArgument(t, 0);
          a_97 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm o_39 = t;
        int p_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_5 (ATerm t)
            {
              ATerm d_97 = NULL;
              d_97 = t;
              t = (ATerm) ATmakeAppl(sym__2, d_97, a_97);
              t = lookup_0_0(t);
              return(t);
            }
            t = z_96;
            t = i_117(b_5, t);
            LocalPopChoice(p_39);
          }
        else
          {
            t = o_39;
            {
              ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL;
              t = y_96;
              t = g_13(j_117, l_117, z_96, a_97, t);
              if(match_cons(t, sym__3))
                {
                  t_32 = ATgetArgument(t, 0);
                  u_32 = ATgetArgument(t, 1);
                  v_32 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = f_13(e_97, k_117, t_32, u_32, v_32, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(a_5, t);
    return(t);
  }
  p_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_96, (ATerm) ATempty);
  t = e_97(t);
  return(t);
}
static ATerm c_5 (ATerm t)
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
static ATerm d_5 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,r_36 = NULL,s_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_39 = ATgetArgument(t, 0);
      if(((ATgetType(s_39) == AT_LIST) && !(ATisEmpty(s_39))))
        {
          l_36 = ATgetFirst((ATermList) s_39);
          m_36 = (ATerm) ATgetNext((ATermList) s_39);
        }
      else
        _fail(t);
      {
        ATerm x_39 = ATgetArgument(t, 1);
        if(((ATgetType(x_39) == AT_LIST) && !(ATisEmpty(x_39))))
          {
            r_36 = ATgetFirst((ATermList) x_39);
            s_36 = (ATerm) ATgetNext((ATermList) x_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_36, r_36), (ATerm) ATmakeAppl(sym__2, m_36, s_36));
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL;
  if(match_cons(t, sym__2))
    {
      y_36 = ATgetArgument(t, 0);
      z_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_36), y_36);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm b_37 = NULL,h_37 = NULL,i_37 = NULL;
  if(match_cons(t, sym__2))
    {
      b_37 = ATgetArgument(t, 0);
      i_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_37;
  {
    ATerm y_39 = t;
    int b_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm c_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(b_40);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_37);
      }
    else
      {
        t = y_39;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm d_40 = ATgetArgument(t, 0);
            h_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, i_37, h_37);
      }
  }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_40 = ATgetArgument(t, 0);
      if(((ATgetType(e_40) != AT_LIST) || !(ATisEmpty(e_40))))
        _fail(t);
      {
        ATerm f_40 = ATgetArgument(t, 1);
        if(((ATgetType(f_40) != AT_LIST) || !(ATisEmpty(f_40))))
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
  ATerm m_38 = NULL,o_38 = NULL,p_38 = NULL,r_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_40 = ATgetArgument(t, 0);
      if(((ATgetType(g_40) == AT_LIST) && !(ATisEmpty(g_40))))
        {
          m_38 = ATgetFirst((ATermList) g_40);
          o_38 = (ATerm) ATgetNext((ATermList) g_40);
        }
      else
        _fail(t);
      {
        ATerm h_40 = ATgetArgument(t, 1);
        if(((ATgetType(h_40) == AT_LIST) && !(ATisEmpty(h_40))))
          {
            p_38 = ATgetFirst((ATermList) h_40);
            r_38 = (ATerm) ATgetNext((ATermList) h_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_38, p_38), (ATerm) ATmakeAppl(sym__2, o_38, r_38));
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm u_38 = NULL,x_38 = NULL;
  if(match_cons(t, sym__2))
    {
      u_38 = ATgetArgument(t, 0);
      x_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_38), u_38);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm b_39 = NULL,d_39 = NULL,e_39 = NULL;
  if(match_cons(t, sym__2))
    {
      b_39 = ATgetArgument(t, 0);
      e_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_39;
  {
    ATerm i_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm l_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(j_40);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_39);
      }
    else
      {
        t = i_40;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm m_40 = ATgetArgument(t, 0);
            d_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, e_39, d_39);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm m_101 (ATerm), ATerm t)
{
  ATerm z_99 = NULL,a_100 = NULL,b_100 = NULL,c_100 = NULL,d_100 = NULL;
  z_99 = t;
  if(match_cons(t, sym_Scope_2))
    {
      a_100 = ATgetArgument(t, 0);
      b_100 = ATgetArgument(t, 1);
      {
        ATerm e_34 = NULL,h_34 = NULL,r_5 = NULL;
        t = SSLgetAnnotations(z_99);
        e_34 = t;
        t = a_100;
        t = m_101(t);
        h_34 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, h_34, b_100);
        r_5 = t;
        t = SSLsetAnnotations(r_5, e_34);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          a_100 = ATgetArgument(t, 0);
          b_100 = ATgetArgument(t, 1);
          c_100 = ATgetArgument(t, 2);
          d_100 = ATgetArgument(t, 3);
          {
            ATerm z_35 = NULL,i_36 = NULL,j_36 = NULL,s_5 = NULL;
            t = SSLgetAnnotations(z_99);
            z_35 = t;
            t = c_100;
            t = m_101(t);
            j_36 = t;
            t = (ATerm) ATmakeAppl(sym__2, c_100, j_36);
            t = genzip_4_0(c_5, d_5, f_5, k_5, t);
            i_36 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, a_100, b_100, i_36, d_100);
            s_5 = t;
            t = SSLsetAnnotations(s_5, z_35);
          }
        }
      else
        {
          ATerm a_38 = NULL,j_38 = NULL,k_38 = NULL,t_5 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              a_100 = ATgetArgument(t, 0);
              b_100 = ATgetArgument(t, 1);
              c_100 = ATgetArgument(t, 2);
              d_100 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_99);
          a_38 = t;
          t = c_100;
          t = m_101(t);
          k_38 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_100, k_38);
          t = genzip_4_0(l_5, m_5, n_5, o_5, t);
          j_38 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, a_100, b_100, j_38, d_100);
          t_5 = t;
          t = SSLsetAnnotations(t_5, a_38);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm t)
{
  ATerm b_103 = NULL,c_103 = NULL,d_103 = NULL,e_103 = NULL,f_103 = NULL;
  e_103 = t;
  if(match_cons(t, sym_Scope_2))
    {
      f_103 = ATgetArgument(t, 0);
      b_103 = ATgetArgument(t, 1);
      {
        ATerm o_40 = NULL,c_41 = NULL,d_41 = NULL,y_5 = NULL;
        t = SSLgetAnnotations(e_103);
        o_40 = t;
        t = f_103;
        t = p_101(t);
        c_41 = t;
        t = b_103;
        t = n_101(t);
        d_41 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, c_41, d_41);
        y_5 = t;
        t = SSLsetAnnotations(y_5, o_40);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          f_103 = ATgetArgument(t, 0);
          b_103 = ATgetArgument(t, 1);
          c_103 = ATgetArgument(t, 2);
          d_103 = ATgetArgument(t, 3);
          {
            ATerm c_42 = NULL,k_42 = NULL,l_42 = NULL,n_42 = NULL,o_42 = NULL,z_5 = NULL;
            t = SSLgetAnnotations(e_103);
            c_42 = t;
            t = f_103;
            t = p_101(t);
            k_42 = t;
            t = b_103;
            t = p_101(t);
            l_42 = t;
            t = c_103;
            t = p_101(t);
            n_42 = t;
            t = d_103;
            t = n_101(t);
            o_42 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, k_42, l_42, n_42, o_42);
            z_5 = t;
            t = SSLsetAnnotations(z_5, c_42);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              f_103 = ATgetArgument(t, 0);
              b_103 = ATgetArgument(t, 1);
              c_103 = ATgetArgument(t, 2);
              d_103 = ATgetArgument(t, 3);
              {
                ATerm f_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,b_6 = NULL;
                t = SSLgetAnnotations(e_103);
                f_43 = t;
                t = f_103;
                t = p_101(t);
                m_43 = t;
                t = b_103;
                t = p_101(t);
                n_43 = t;
                t = c_103;
                t = p_101(t);
                o_43 = t;
                t = d_103;
                t = n_101(t);
                p_43 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, m_43, n_43, o_43, p_43);
                b_6 = t;
                t = SSLsetAnnotations(b_6, f_43);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  f_103 = ATgetArgument(t, 0);
                  {
                    ATerm z_43 = NULL,k_44 = NULL,c_6 = NULL;
                    t = SSLgetAnnotations(e_103);
                    z_43 = t;
                    t = f_103;
                    t = n_101(t);
                    k_44 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, k_44);
                    c_6 = t;
                    t = SSLsetAnnotations(c_6, z_43);
                  }
                }
              else
                {
                  ATerm z_44 = NULL,f_45 = NULL,e_6 = NULL;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      f_103 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(e_103);
                  z_44 = t;
                  t = f_103;
                  t = n_101(t);
                  f_45 = t;
                  t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, f_45);
                  e_6 = t;
                  t = SSLsetAnnotations(e_6, z_44);
                }
            }
        }
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm y_103 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_103);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm n_40 = t;
  int p_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_40);
    }
  else
    {
      t = n_40;
      {
        ATerm q_40 = t;
        int r_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_40);
          }
        else
          {
            t = q_40;
            {
              ATerm a_104 = NULL,b_104 = NULL,c_104 = NULL,d_104 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  a_104 = ATgetArgument(t, 0);
                  b_104 = ATgetArgument(t, 1);
                  c_104 = ATgetArgument(t, 2);
                  d_104 = ATgetArgument(t, 3);
                  t = c_104;
                  t = map_1_0(v_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      a_104 = ATgetArgument(t, 0);
                      b_104 = ATgetArgument(t, 1);
                      c_104 = ATgetArgument(t, 2);
                      d_104 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_104;
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
  ATerm k_104 = NULL;
  ATerm t_40 = t;
  int u_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_104 = ATgetArgument(t, 0);
          {
            ATerm v_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_40);
      t = k_104;
    }
  else
    {
      t = t_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_104 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_104;
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm u_104 = NULL;
  ATerm w_40 = t;
  int x_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_104 = ATgetArgument(t, 0);
          {
            ATerm y_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_40);
      t = u_104;
    }
  else
    {
      t = w_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_104 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_104;
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm y_104 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_104);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm z_40 = t;
  int a_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_41);
    }
  else
    {
      t = z_40;
      {
        ATerm b_41 = t;
        int e_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_41);
          }
        else
          {
            t = b_41;
            {
              ATerm a_105 = NULL,b_105 = NULL,c_105 = NULL,d_105 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  a_105 = ATgetArgument(t, 0);
                  b_105 = ATgetArgument(t, 1);
                  c_105 = ATgetArgument(t, 2);
                  d_105 = ATgetArgument(t, 3);
                  t = c_105;
                  t = map_1_0(d_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      a_105 = ATgetArgument(t, 0);
                      b_105 = ATgetArgument(t, 1);
                      c_105 = ATgetArgument(t, 2);
                      d_105 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_105;
                  t = map_1_0(f_6, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm k_105 = NULL;
  ATerm f_41 = t;
  int g_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_105 = ATgetArgument(t, 0);
          {
            ATerm h_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_41);
      t = k_105;
    }
  else
    {
      t = f_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_105 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_105;
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm v_105 = NULL;
  ATerm i_41 = t;
  int k_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_105 = ATgetArgument(t, 0);
          {
            ATerm l_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_41);
      t = v_105;
    }
  else
    {
      t = i_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_105 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_105;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm w_103 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      w_103 = ATgetArgument(t, 0);
      t = w_103;
      t = free_vars_3_0(q_5, u_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          w_103 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_103;
      t = free_vars_3_0(x_5, a_6, tboundin_3_0, t);
    }
  return(t);
}
static ATerm z_12 (ATerm e_113 (ATerm), ATerm w_39, ATerm v_39, ATerm t)
{
  static ATerm o_106 (ATerm t)
  {
    ATerm i_106 = NULL,j_106 = NULL,k_106 = NULL;
    i_106 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_39;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_106 = ATgetFirst((ATermList) t);
            k_106 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm m_41 = t;
          int n_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_106;
              {
                static ATerm g_6 (ATerm t)
                {
                  t = v_39;
                  return(t);
                }
                t = a_13(e_113, g_6, j_106, k_106, t);
              }
              t = o_106(t);
              LocalPopChoice(n_41);
            }
          else
            {
              t = m_41;
              {
                ATerm x_45 = NULL,c_46 = NULL,k_6 = NULL;
                t = SSLgetAnnotations(i_106);
                x_45 = t;
                t = k_106;
                t = o_106(t);
                c_46 = t;
                t = (ATerm) ATinsert(CheckATermList(c_46), j_106);
                k_6 = t;
                t = SSLsetAnnotations(k_6, x_45);
              }
            }
        }
      }
    return(t);
  }
  t = w_39;
  t = o_106(t);
  return(t);
}
static ATerm a_13 (ATerm h_113 (ATerm), ATerm i_113 (ATerm), ATerm a_40, ATerm z_39, ATerm t)
{
  t = i_113(t);
  {
    static ATerm h_6 (ATerm t)
    {
      ATerm r_106 = NULL;
      r_106 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_40, r_106);
      t = h_113(t);
      return(t);
    }
    t = fetch_1_0(h_6, t);
  }
  t = z_39;
  return(t);
}
static ATerm b_13 (ATerm z_112 (ATerm), ATerm u_39, ATerm t_39, ATerm t)
{
  static ATerm n_107 (ATerm t)
  {
    ATerm h_107 = NULL,j_107 = NULL,k_107 = NULL;
    h_107 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_107;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_107 = ATgetFirst((ATermList) t);
            k_107 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_41 = t;
          int s_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_107;
              {
                static ATerm i_6 (ATerm t)
                {
                  t = t_39;
                  return(t);
                }
                t = a_13(z_112, i_6, j_107, k_107, t);
              }
              t = n_107(t);
              LocalPopChoice(s_41);
            }
          else
            {
              t = r_41;
              {
                ATerm u_46 = NULL,d_47 = NULL,n_6 = NULL;
                t = SSLgetAnnotations(h_107);
                u_46 = t;
                t = k_107;
                t = n_107(t);
                d_47 = t;
                t = (ATerm) ATinsert(CheckATermList(d_47), j_107);
                n_6 = t;
                t = SSLsetAnnotations(n_6, u_46);
              }
            }
        }
      }
    return(t);
  }
  t = u_39;
  t = n_107(t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_41 = ATgetArgument(t, 0);
      if(((ATgetType(y_41) != AT_LIST) || !(ATisEmpty(y_41))))
        _fail(t);
      {
        ATerm a_42 = ATgetArgument(t, 1);
        if(((ATgetType(a_42) != AT_LIST) || !(ATisEmpty(a_42))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm v_107 = NULL,w_107 = NULL,x_107 = NULL,y_107 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_42 = ATgetArgument(t, 0);
      if(((ATgetType(b_42) == AT_LIST) && !(ATisEmpty(b_42))))
        {
          v_107 = ATgetFirst((ATermList) b_42);
          w_107 = (ATerm) ATgetNext((ATermList) b_42);
        }
      else
        _fail(t);
      {
        ATerm d_42 = ATgetArgument(t, 1);
        if(((ATgetType(d_42) == AT_LIST) && !(ATisEmpty(d_42))))
          {
            x_107 = ATgetFirst((ATermList) d_42);
            y_107 = (ATerm) ATgetNext((ATermList) d_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_107, x_107), (ATerm) ATmakeAppl(sym__2, w_107, y_107));
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm z_107 = NULL,a_108 = NULL;
  if(match_cons(t, sym__2))
    {
      z_107 = ATgetArgument(t, 0);
      a_108 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_108), z_107);
  return(t);
}
static ATerm d_13 (ATerm a_603, ATerm f_603, ATerm z_58, ATerm t)
{
  ATerm q_107 = NULL,r_107 = NULL,s_107 = NULL,t_107 = NULL;
  t = SSL_explode_term(f_603);
  if(match_cons(t, sym__2))
    {
      q_107 = ATgetArgument(t, 0);
      s_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(a_603);
  if(match_cons(t, sym__2))
    {
      if((q_107 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      r_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_107, s_107);
  t = genzip_4_0(j_6, l_6, m_6, _id, t);
  t_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_107, z_58);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm t)
{
  static ATerm c_108 (ATerm t)
  {
    ATerm e_42 = t;
    int f_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_108(t);
        LocalPopChoice(f_42);
      }
    else
      {
        t = e_42;
        t = z_108(t);
        t = c_108(t);
      }
    return(t);
  }
  t = c_108(t);
  return(t);
}
ATerm for_3_0 (ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm t)
{
  t = b_109(t);
  t = while_not_2_0(c_109, d_109, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm p_108 = NULL;
  p_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, p_108);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm r_108 = NULL,s_108 = NULL,t_108 = NULL,u_108 = NULL,p_6 = NULL;
  u_108 = t;
  if(match_cons(t, sym__2))
    {
      s_108 = ATgetArgument(t, 0);
      t_108 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_108);
  r_108 = t;
  t = t_108;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_108, t_108);
  p_6 = t;
  t = SSLsetAnnotations(p_6, r_108);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm t_109 = NULL,v_109 = NULL,x_109 = NULL,y_109 = NULL,z_109 = NULL;
  t_109 = t;
  if(match_cons(t, sym__2))
    {
      v_109 = ATgetArgument(t, 0);
      x_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_109;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_109 = ATgetFirst((ATermList) t);
      z_109 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_42 = t;
        int h_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_110(v_109, x_109, t_109, t);
            LocalPopChoice(h_42);
          }
        else
          {
            t = g_42;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_109), y_109), z_109);
          }
      }
    }
  else
    {
      t = u_110(v_109, x_109, t_109, t);
    }
  return(t);
}
static ATerm u_110 (ATerm v_108, ATerm w_108, ATerm x_108, ATerm t)
{
  ATerm e_109 = NULL,h_109 = NULL,r_6 = NULL,k_109 = NULL,l_109 = NULL,m_109 = NULL,n_109 = NULL;
  t = SSLgetAnnotations(x_108);
  e_109 = t;
  t = w_108;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_109 = ATgetFirst((ATermList) t);
      n_109 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_109;
  if(match_cons(t, sym__2))
    {
      l_109 = ATgetArgument(t, 0);
      m_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_42 = t;
    int j_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_109;
        if((l_109 != t))
          {
            _fail(t);
          }
        t = n_109;
        LocalPopChoice(j_42);
      }
    else
      {
        t = i_42;
        t = w_108;
        t = d_13(l_109, m_109, n_109, t);
      }
  }
  h_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_108, h_109);
  r_6 = t;
  t = SSLsetAnnotations(r_6, e_109);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm t_110 = NULL;
  if(match_cons(t, sym__2))
    {
      t_110 = ATgetArgument(t, 0);
      if((t_110 != ATgetArgument(t, 1)))
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
  ATerm m_42 = t;
  int p_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(o_6, q_6, s_6, t);
      LocalPopChoice(p_42);
    }
  else
    {
      t = m_42;
      {
        ATerm k_110 = NULL,m_110 = NULL,n_110 = NULL;
        k_110 = t;
        if(match_cons(t, sym__2))
          {
            m_110 = ATgetArgument(t, 0);
            n_110 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_110;
        t = b_13(t_6, m_110, n_110, t);
      }
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL;
  if(match_cons(t, sym__2))
    {
      u_47 = ATgetArgument(t, 0);
      v_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_12(f_7, u_47, v_47, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm w_47 = NULL;
  if(match_cons(t, sym__2))
    {
      w_47 = ATgetArgument(t, 0);
      if((w_47 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm f_48 = NULL,i_48 = NULL;
  if(match_cons(t, sym__2))
    {
      f_48 = ATgetArgument(t, 0);
      i_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_12(i_7, f_48, i_48, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm j_48 = NULL;
  if(match_cons(t, sym__2))
    {
      j_48 = ATgetArgument(t, 0);
      if((j_48 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm l_119 (ATerm), ATerm m_119 (ATerm), ATerm n_119 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm p_111 (ATerm t)
  {
    ATerm q_42 = t;
    int r_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_119(t);
        LocalPopChoice(r_42);
      }
    else
      {
        t = q_42;
        {
          ATerm s_42 = t;
          int t_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_110 = NULL,x_110 = NULL,m_47 = NULL,n_47 = NULL;
              w_110 = t;
              t = m_119(t);
              x_110 = t;
              t = w_110;
              {
                static ATerm w_6 (ATerm t)
                {
                  ATerm z_110 = NULL;
                  t = p_111(t);
                  z_110 = t;
                  t = (ATerm) ATmakeAppl(sym__2, z_110, x_110);
                  t = diff_0_0(t);
                  return(t);
                }
                t = n_119(w_6, p_111, y_6, t);
              }
              n_47 = t;
              t = SSL_explode_term(n_47);
              if(match_cons(t, sym__2))
                {
                  ATerm u_42 = ATgetArgument(t, 0);
                  m_47 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_47;
              t = foldr_3_0(a_7, c_7, _id, t);
              LocalPopChoice(t_42);
            }
          else
            {
              t = s_42;
              {
                ATerm z_47 = NULL,b_48 = NULL;
                b_48 = t;
                t = SSL_explode_term(b_48);
                if(match_cons(t, sym__2))
                  {
                    ATerm w_42 = ATgetArgument(t, 0);
                    z_47 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_47;
                t = foldr_3_0(g_7, h_7, p_111, t);
              }
            }
        }
      }
    return(t);
  }
  t = p_111(t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm c_112 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_112);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm x_42 = t;
  int z_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_42);
    }
  else
    {
      t = x_42;
      {
        ATerm a_43 = t;
        int e_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_43);
          }
        else
          {
            t = a_43;
            {
              ATerm e_112 = NULL,f_112 = NULL,g_112 = NULL,h_112 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  e_112 = ATgetArgument(t, 0);
                  f_112 = ATgetArgument(t, 1);
                  g_112 = ATgetArgument(t, 2);
                  h_112 = ATgetArgument(t, 3);
                  t = g_112;
                  t = map_1_0(n_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_112 = ATgetArgument(t, 0);
                      f_112 = ATgetArgument(t, 1);
                      g_112 = ATgetArgument(t, 2);
                      h_112 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_112;
                  t = map_1_0(q_7, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm o_112 = NULL;
  ATerm g_43 = t;
  int h_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_112 = ATgetArgument(t, 0);
          {
            ATerm i_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_43);
      t = o_112;
    }
  else
    {
      t = g_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_112 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_112;
    }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm x_112 = NULL;
  ATerm j_43 = t;
  int k_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_112 = ATgetArgument(t, 0);
          {
            ATerm l_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_43);
      t = x_112;
    }
  else
    {
      t = j_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_112 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_112;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm v_111 = NULL,z_111 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      z_111 = ATgetArgument(t, 0);
      t = z_111;
      if(match_cons(t, sym_Rule_3))
        {
          v_111 = ATgetArgument(t, 0);
          {
            ATerm q_43 = ATgetArgument(t, 1);
          }
          {
            ATerm r_43 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = v_111;
      t = free_vars_3_0(j_7, l_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          z_111 = ATgetArgument(t, 0);
          {
            ATerm s_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = z_111;
    }
  return(t);
}
ATerm Var_1_0 (ATerm q_80 (ATerm), ATerm t)
{
  ATerm d_113 = NULL,g_113 = NULL,j_113 = NULL,k_113 = NULL,u_6 = NULL;
  k_113 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_113);
  d_113 = t;
  t = g_113;
  t = q_80(t);
  j_113 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_113);
  u_6 = t;
  t = SSLsetAnnotations(u_6, d_113);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm t_43 = t;
  int u_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_43);
    }
  else
    {
      t = t_43;
      {
        ATerm z_113 = NULL,a_114 = NULL,b_114 = NULL,c_114 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            z_113 = ATgetArgument(t, 0);
            a_114 = ATgetArgument(t, 1);
            b_114 = ATgetArgument(t, 2);
            c_114 = ATgetArgument(t, 3);
            t = b_114;
            t = map_1_0(s_7, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                z_113 = ATgetArgument(t, 0);
                a_114 = ATgetArgument(t, 1);
                b_114 = ATgetArgument(t, 2);
                c_114 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = b_114;
            t = map_1_0(t_7, t);
          }
      }
    }
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm j_114 = NULL;
  ATerm v_43 = t;
  int w_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_114 = ATgetArgument(t, 0);
          {
            ATerm x_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_43);
      t = j_114;
    }
  else
    {
      t = v_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_114 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_114;
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm s_114 = NULL;
  ATerm y_43 = t;
  int a_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_114 = ATgetArgument(t, 0);
          {
            ATerm c_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_44);
      t = s_114;
    }
  else
    {
      t = y_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_114 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_114;
    }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm v_114 = NULL,w_114 = NULL,y_114 = NULL,z_114 = NULL,b_115 = NULL;
  v_114 = t;
  if(match_cons(t, sym_Let_2))
    {
      w_114 = ATgetArgument(t, 0);
      y_114 = ATgetArgument(t, 1);
      t = v_114;
      t = u_12(w_114, y_114, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          w_114 = ATgetArgument(t, 0);
          y_114 = ATgetArgument(t, 1);
          z_114 = ATgetArgument(t, 2);
          t = y_114;
          t = map_1_0(w_7, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              w_114 = ATgetArgument(t, 0);
              y_114 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, w_114);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  w_114 = ATgetArgument(t, 0);
                  y_114 = ATgetArgument(t, 1);
                  z_114 = ATgetArgument(t, 2);
                  b_115 = ATgetArgument(t, 3);
                  t = y_114;
                  t = map_1_0(x_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      w_114 = ATgetArgument(t, 0);
                      y_114 = ATgetArgument(t, 1);
                      z_114 = ATgetArgument(t, 2);
                      b_115 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_114;
                  t = map_1_0(b_8, t);
                }
            }
        }
    }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm k_115 = NULL;
  ATerm d_44 = t;
  int e_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_115 = ATgetArgument(t, 0);
          {
            ATerm f_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_44);
      t = k_115;
    }
  else
    {
      t = d_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_115 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_115;
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm b_116 = NULL;
  ATerm g_44 = t;
  int h_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_116 = ATgetArgument(t, 0);
          {
            ATerm i_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_44);
      t = b_116;
    }
  else
    {
      t = g_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_116 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_116;
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm k_116 = NULL;
  ATerm j_44 = t;
  int l_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_116 = ATgetArgument(t, 0);
          {
            ATerm n_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_44);
      t = k_116;
    }
  else
    {
      t = j_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_116 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_116;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, r_7, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, u_7, sboundin_3_0, spaste_1_0, t);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm x_51 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      x_51 = ATgetArgument(t, 0);
      {
        ATerm o_44 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = x_51;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_44 = ATgetArgument(t, 0);
      if(((ATgetType(p_44) != AT_LIST) || !(ATisEmpty(p_44))))
        _fail(t);
      {
        ATerm q_44 = ATgetArgument(t, 1);
        if(((ATgetType(q_44) != AT_LIST) || !(ATisEmpty(q_44))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_44 = ATgetArgument(t, 0);
      if(((ATgetType(r_44) == AT_LIST) && !(ATisEmpty(r_44))))
        {
          y_51 = ATgetFirst((ATermList) r_44);
          z_51 = (ATerm) ATgetNext((ATermList) r_44);
        }
      else
        _fail(t);
      {
        ATerm s_44 = ATgetArgument(t, 1);
        if(((ATgetType(s_44) == AT_LIST) && !(ATisEmpty(s_44))))
          {
            a_52 = ATgetFirst((ATermList) s_44);
            b_52 = (ATerm) ATgetNext((ATermList) s_44);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_51, a_52), (ATerm) ATmakeAppl(sym__2, z_51, b_52));
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL;
  if(match_cons(t, sym__2))
    {
      c_52 = ATgetArgument(t, 0);
      d_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_52), c_52);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL;
  if(match_cons(t, sym__2))
    {
      e_52 = ATgetArgument(t, 0);
      f_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_52), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_52))));
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_m_13;
  return(t);
}
ATerm InlineCall_0_0 (ATerm t)
{
  ATerm w_118 = NULL,x_118 = NULL,y_118 = NULL,z_118 = NULL,a_119 = NULL;
  w_118 = t;
  if(match_cons(t, sym_CallT_3))
    {
      x_118 = ATgetArgument(t, 0);
      z_118 = ATgetArgument(t, 1);
      a_119 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_118;
  if(match_cons(t, sym_SVar_1))
    {
      y_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_44 = t;
    int u_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_49 = NULL,y_49 = NULL;
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_118), (ATerm)ATempty, (ATerm) ATempty);
        x_49 = t;
        t = term_m_13;
        y_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_13, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_118), (ATerm)ATempty, (ATerm) ATempty));
        t = z_6(y_49, x_49, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = w_118;
        _fail(t);
        LocalPopChoice(u_44);
      }
    else
      {
        t = t_44;
        {
          ATerm v_44 = t;
          int w_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_50 = NULL,r_50 = NULL;
              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_118), (ATerm)ATempty, (ATerm) ATempty);
              q_50 = t;
              t = term_m_13;
              r_50 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_m_13, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_118), (ATerm)ATempty, (ATerm) ATempty));
              t = z_6(r_50, q_50, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = w_118;
              _fail(t);
              LocalPopChoice(w_44);
            }
          else
            {
              t = v_44;
              {
                ATerm x_44 = t;
                int y_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_51 = NULL,c_51 = NULL,e_51 = NULL,f_51 = NULL,p_51 = NULL,q_51 = NULL,t_51 = NULL,u_51 = NULL,w_51 = NULL,l_52 = NULL,m_52 = NULL;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_118), (ATerm)ATempty, (ATerm) ATempty);
                    l_52 = t;
                    t = term_m_13;
                    m_52 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_m_13, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_118), (ATerm)ATempty, (ATerm) ATempty));
                    t = z_6(m_52, l_52, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm a_45 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) a_45) != ATmakeSymbol("d_0", 0, ATtrue)))
                          _fail(t);
                        b_51 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = b_51;
                    t = strename_0_0(t);
                    if(match_cons(t, sym_SDefT_4))
                      {
                        if((y_118 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        c_51 = ATgetArgument(t, 1);
                        f_51 = ATgetArgument(t, 2);
                        e_51 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__3, c_51, z_118, e_51);
                    t = substitute_args_0_0(t);
                    q_51 = t;
                    t = f_51;
                    t = map_1_0(c_8, t);
                    p_51 = t;
                    t = (ATerm) ATmakeAppl(sym__2, a_119, p_51);
                    t = genzip_4_0(d_8, e_8, f_8, g_8, t);
                    t_51 = t;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_118), (ATerm)ATempty, (ATerm) ATempty);
                    u_51 = t;
                    t = term_c_45;
                    w_51 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_118), (ATerm)ATempty, (ATerm) ATempty), term_c_45);
                    t = n_13(h_8, u_51, w_51, t);
                    t = (ATerm) ATmakeAppl(sym_Scope_2, p_51, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_51), q_51));
                    t = simplify_0_0(t);
                    LocalPopChoice(y_44);
                  }
                else
                  {
                    t = x_44;
                    {
                      ATerm z_52 = NULL,a_53 = NULL;
                      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_118), (ATerm)ATempty, (ATerm) ATempty);
                      z_52 = t;
                      t = term_m_13;
                      a_53 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_m_13, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_118), (ATerm)ATempty, (ATerm) ATempty));
                      t = z_6(a_53, z_52, t);
                      if(!(match_cons(t, sym_Undefined_0)))
                        _fail(t);
                      t = w_118;
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
  ATerm d_45 = t;
  if((PushChoice() == 0))
    {
      ATerm h_119 = NULL,j_119 = NULL;
      if(match_cons(t, sym__2))
        {
          h_119 = ATgetArgument(t, 0);
          j_119 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, h_119, j_119);
      {
        ATerm e_45 = t;
        int g_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(h_119, j_119);
            LocalPopChoice(g_45);
          }
        else
          {
            t = e_45;
            t = SSL_gtr(h_119, j_119);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, h_119, j_119);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_45;
    }
  return(t);
}
ATerm foldr_3_0 (ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm w_115 (ATerm), ATerm t)
{
  ATerm p_119 = NULL,q_119 = NULL,r_119 = NULL;
  p_119 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_119;
      t = u_115(t);
    }
  else
    {
      ATerm u_119 = NULL,v_119 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_119 = ATgetFirst((ATermList) t);
          r_119 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_119;
      t = w_115(t);
      u_119 = t;
      t = r_119;
      t = foldr_3_0(u_115, v_115, w_115, t);
      v_119 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_119, v_119);
      t = v_115(t);
    }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_h_45;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm n_53 = NULL,s_53 = NULL;
  if(match_cons(t, sym__2))
    {
      n_53 = ATgetArgument(t, 0);
      s_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_15(n_53, s_53, t);
  return(t);
}
ATerm occurrences_1_0 (ATerm l_113 (ATerm), ATerm t)
{
  ATerm y_119 = NULL,z_119 = NULL,a_120 = NULL,h_53 = NULL;
  a_120 = t;
  {
    ATerm i_45 = t;
    int j_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_113(t);
        t = term_z_13;
        LocalPopChoice(j_45);
      }
    else
      {
        t = i_45;
        t = term_h_45;
      }
  }
  y_119 = t;
  t = SSL_explode_term(a_120);
  if(match_cons(t, sym__2))
    {
      ATerm k_45 = ATgetArgument(t, 0);
      h_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_53;
  {
    static ATerm q_8 (ATerm t)
    {
      t = occurrences_1_0(l_113, t);
      return(t);
    }
    t = foldr_3_0(j_8, k_8, q_8, t);
  }
  z_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_119, z_119);
  t = e_15(y_119, z_119, t);
  return(t);
}
static ATerm l_13 (ATerm r_100 (ATerm), ATerm o_24, ATerm n_24, ATerm t)
{
  ATerm d_120 = NULL,e_120 = NULL;
  d_120 = t;
  t = n_24;
  {
    ATerm l_45 = t;
    if((PushChoice() == 0))
      {
        static ATerm u_8 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm m_45 = ATgetArgument(t, 0);
              if(match_cons(m_45, sym_SVar_1))
                {
                  if((o_24 != ATgetArgument(m_45, 0)))
                    {
                      _fail(ATgetArgument(m_45, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm n_45 = ATgetArgument(t, 1);
              }
              {
                ATerm p_45 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(u_8, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_45;
      }
  }
  t = r_100(t);
  {
    static ATerm v_8 (ATerm t)
    {
      if(match_cons(t, sym_CallT_3))
        {
          ATerm q_45 = ATgetArgument(t, 0);
          if(match_cons(q_45, sym_SVar_1))
            {
              if((o_24 != ATgetArgument(q_45, 0)))
                {
                  _fail(ATgetArgument(q_45, 0));
                }
            }
          else
            _fail(t);
          {
            ATerm r_45 = ATgetArgument(t, 1);
          }
          {
            ATerm s_45 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      return(t);
    }
    t = occurrences_1_0(v_8, t);
  }
  e_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_120, term_z_13);
  t = leq_0_0(t);
  t = d_120;
  return(t);
}
static ATerm n_13 (ATerm h_110 (ATerm), ATerm m_34, ATerm k_34, ATerm t)
{
  ATerm f_120 = NULL,g_120 = NULL,h_120 = NULL,i_120 = NULL,j_120 = NULL,k_120 = NULL;
  i_120 = t;
  t = h_110(t);
  f_120 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_120, m_34, k_34);
  t = k_15(f_120, m_34, k_34, t);
  {
    ATerm t_45 = t;
    int u_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_120 = NULL;
        t = term_v_45;
        l_120 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_120, term_v_45);
        t = j_15(f_120, l_120, t);
        LocalPopChoice(u_45);
      }
    else
      {
        t = t_45;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_120 = ATgetFirst((ATermList) t);
      h_120 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_v_45;
  j_120 = t;
  t = (ATerm) ATinsert(CheckATermList(h_120), (ATerm) ATinsert(CheckATermList(g_120), m_34));
  k_120 = t;
  t = SSL_table_put(f_120, j_120, k_120);
  t = i_120;
  return(t);
}
static ATerm p_13 (ATerm d_35, ATerm e_35, ATerm t)
{
  ATerm m_120 = NULL,n_120 = NULL;
  n_120 = t;
  {
    ATerm w_45 = t;
    int z_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_35, e_35);
        t = j_15(d_35, e_35, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_46 = ATgetFirst((ATermList) t);
            m_120 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(z_45);
        t = SSL_table_put(d_35, e_35, m_120);
        t = (ATerm) ATmakeAppl(sym__3, d_35, e_35, m_120);
      }
    else
      {
        t = w_45;
        t = SSL_table_remove(d_35, e_35);
        t = (ATerm) ATmakeAppl(sym__2, d_35, e_35);
      }
  }
  t = n_120;
  return(t);
}
ATerm end_scope_1_0 (ATerm e_110 (ATerm), ATerm t)
{
  ATerm o_120 = NULL,p_120 = NULL,q_120 = NULL,r_120 = NULL,s_120 = NULL;
  r_120 = t;
  t = e_110(t);
  q_120 = t;
  {
    ATerm b_46 = t;
    int d_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_120 = NULL;
        t = term_v_45;
        t_120 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_120, term_v_45);
        t = j_15(q_120, t_120, t);
        LocalPopChoice(d_46);
      }
    else
      {
        t = b_46;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_120 = ATgetFirst((ATermList) t);
      o_120 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_v_45;
  s_120 = t;
  t = SSL_table_put(q_120, s_120, o_120);
  t = p_120;
  {
    static ATerm w_8 (ATerm t)
    {
      ATerm u_120 = NULL;
      u_120 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_120, u_120);
      t = p_13(q_120, u_120, t);
      return(t);
    }
    t = map_1_0(w_8, t);
  }
  t = r_120;
  return(t);
}
ATerm restore_always_2_0 (ATerm t_105 (ATerm), ATerm u_105 (ATerm), ATerm t)
{
  ATerm e_46 = t;
  int f_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_105(t);
      t = u_105(t);
      LocalPopChoice(f_46);
    }
  else
    {
      t = e_46;
      t = u_105(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm d_110 (ATerm), ATerm t)
{
  ATerm w_120 = NULL,x_120 = NULL,y_120 = NULL,z_120 = NULL,a_121 = NULL;
  x_120 = t;
  t = d_110(t);
  w_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_120, term_v_45);
  {
    ATerm g_46 = t;
    int h_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_121 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_46 = ATgetArgument(t, 0);
            ATerm j_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_v_45;
        e_121 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_120, term_v_45);
        t = j_15(w_120, e_121, t);
        LocalPopChoice(h_46);
      }
    else
      {
        t = g_46;
        t = (ATerm) ATempty;
      }
  }
  y_120 = t;
  t = term_v_45;
  z_120 = t;
  t = (ATerm) ATinsert(CheckATermList(y_120), (ATerm) ATempty);
  a_121 = t;
  t = SSL_table_put(w_120, z_120, a_121);
  t = x_120;
  return(t);
}
ATerm scope_2_0 (ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm t)
{
  static ATerm x_8 (ATerm t)
  {
    t = end_scope_1_0(f_110, t);
    return(t);
  }
  t = begin_scope_1_0(f_110, t);
  t = restore_always_2_0(g_110, x_8, t);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_m_13;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_o_13;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  t = term_m_13;
  return(t);
}
ATerm inline_sdef_0_0 (ATerm t)
{
  static ATerm z_8 (ATerm t)
  {
    static ATerm c_9 (ATerm t)
    {
      ATerm l_46 = t;
      int m_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_121 = NULL,k_121 = NULL,l_121 = NULL;
          j_121 = t;
          {
            ATerm n_46 = t;
            int o_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    k_121 = ATgetArgument(t, 0);
                    {
                      ATerm p_46 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm q_46 = ATgetArgument(t, 2);
                    }
                    {
                      ATerm r_46 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(o_46);
                {
                  ATerm o_121 = NULL,p_121 = NULL;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_121), (ATerm)ATempty, (ATerm) ATempty);
                  o_121 = t;
                  t = term_c_45;
                  p_121 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_121), (ATerm)ATempty, (ATerm) ATempty), term_c_45);
                  t = n_13(d_9, o_121, p_121, t);
                  t = j_121;
                }
              }
            else
              {
                t = n_46;
                if(match_cons(t, sym_Let_2))
                  {
                    k_121 = ATgetArgument(t, 0);
                    l_121 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = k_121;
                {
                  static ATerm h_9 (ATerm t)
                  {
                    ATerm s_121 = NULL,t_121 = NULL;
                    if(match_cons(t, sym_SDefT_4))
                      {
                        s_121 = ATgetArgument(t, 0);
                        {
                          ATerm s_46 = ATgetArgument(t, 1);
                        }
                        {
                          ATerm t_46 = ATgetArgument(t, 2);
                        }
                        t_121 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    {
                      static ATerm i_9 (ATerm t)
                      {
                        t = l_121;
                        return(t);
                      }
                      t = l_13(i_9, s_121, t_121, t);
                    }
                    t = AddSDef_0_0(t);
                    return(t);
                  }
                  t = map_1_0(h_9, t);
                }
                t = (ATerm) ATmakeAppl(sym_Let_2, k_121, l_121);
              }
          }
          LocalPopChoice(m_46);
        }
      else
        {
          t = l_46;
          t = repeat_2_0(InlineCall_0_0, _id, t);
        }
      t = SRTS_all(inline_sdef_0_0, t);
      return(t);
    }
    t = scope_2_0(a_9, c_9, t);
    return(t);
  }
  t = scope_2_0(y_8, z_8, t);
  return(t);
}
ATerm topdown_1_0 (ATerm m_102 (ATerm), ATerm t)
{
  static ATerm j_9 (ATerm t)
  {
    t = topdown_1_0(m_102, t);
    return(t);
  }
  t = m_102(t);
  t = SRTS_all(j_9, t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm v_46 = t;
  int w_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm x_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(w_46);
      {
        ATerm x_121 = NULL,y_121 = NULL;
        x_121 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm y_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        y_121 = t;
        t = SSLgetAnnotations(x_121);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_46 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) z_46) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm b_47 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(b_47) != AT_LIST) || !(ATisEmpty(b_47))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = y_121;
      }
    }
  else
    {
      t = v_46;
      {
        ATerm c_47 = t;
        int e_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm f_47 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) f_47) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm g_47 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(e_47);
            _fail(t);
          }
        else
          {
            t = c_47;
          }
      }
    }
  return(t);
}
static ATerm r_13 (ATerm x_71, ATerm w_71, ATerm t)
{
  t = x_71;
  t = topdown_1_0(k_9, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, x_71);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm h_122 = NULL,i_122 = NULL,k_122 = NULL,l_122 = NULL,m_122 = NULL,n_122 = NULL,o_122 = NULL,p_122 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      k_122 = ATgetArgument(t, 0);
      n_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_122;
  if(match_cons(t, sym_Match_1))
    {
      l_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_122;
  if(match_cons(t, sym_Var_1))
    {
      m_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_122;
  if(match_cons(t, sym_Seq_2))
    {
      o_122 = ATgetArgument(t, 0);
      i_122 = ATgetArgument(t, 1);
      t = o_122;
      if(match_cons(t, sym_Build_1))
        {
          p_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_122;
      if(match_cons(t, sym_Var_1))
        {
          h_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_122;
      if((m_122 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_122)), i_122);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          o_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_122;
      if(match_cons(t, sym_Var_1))
        {
          p_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_122;
      if((m_122 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_122));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm x_122 = NULL,y_122 = NULL,a_123 = NULL,b_123 = NULL,c_123 = NULL,d_123 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      a_123 = ATgetArgument(t, 0);
      c_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_123;
  if(match_cons(t, sym_Build_1))
    {
      b_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_123;
  if(match_cons(t, sym_Seq_2))
    {
      d_123 = ATgetArgument(t, 0);
      y_122 = ATgetArgument(t, 1);
      t = d_123;
      if(match_cons(t, sym_Match_1))
        {
          x_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_122;
      if((b_123 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_123), y_122);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          d_123 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_123;
      if((b_123 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, b_123);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm l_123 = NULL,m_123 = NULL,o_123 = NULL,p_123 = NULL,q_123 = NULL,r_123 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      o_123 = ATgetArgument(t, 0);
      q_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_123;
  if(match_cons(t, sym_Match_1))
    {
      p_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_123;
  if(match_cons(t, sym_Seq_2))
    {
      r_123 = ATgetArgument(t, 0);
      m_123 = ATgetArgument(t, 1);
      t = r_123;
      if(match_cons(t, sym_Match_1))
        {
          l_123 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_123;
      if((p_123 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_123), m_123);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          r_123 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_123;
      if((p_123 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, p_123);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm z_123 = NULL,a_124 = NULL,b_124 = NULL,d_124 = NULL,f_124 = NULL,g_124 = NULL,h_124 = NULL,i_124 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      d_124 = ATgetArgument(t, 0);
      f_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_124;
  if(match_cons(t, sym_Build_1))
    {
      ATerm h_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_124;
  if(match_cons(t, sym_Seq_2))
    {
      g_124 = ATgetArgument(t, 0);
      h_124 = ATgetArgument(t, 1);
      t = g_124;
      if(match_cons(t, sym_PrimT_3))
        {
          z_123 = ATgetArgument(t, 0);
          a_124 = ATgetArgument(t, 1);
          b_124 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, z_123, a_124, b_124), h_124);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          g_124 = ATgetArgument(t, 0);
          h_124 = ATgetArgument(t, 1);
          i_124 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, g_124, h_124, i_124);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm u_124 = NULL,v_124 = NULL,x_124 = NULL,z_124 = NULL,a_125 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      x_124 = ATgetArgument(t, 0);
      z_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_124;
  if(match_cons(t, sym_Build_1))
    {
      ATerm i_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_124;
  if(match_cons(t, sym_Seq_2))
    {
      a_125 = ATgetArgument(t, 0);
      v_124 = ATgetArgument(t, 1);
      t = a_125;
      if(match_cons(t, sym_Build_1))
        {
          u_124 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_124), v_124);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          a_125 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, a_125);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm t)
{
  static ATerm k_125 (ATerm t)
  {
    ATerm j_47 = t;
    int k_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_106(t);
        LocalPopChoice(k_47);
      }
    else
      {
        t = j_47;
        {
          ATerm e_125 = NULL,f_125 = NULL,g_125 = NULL,h_125 = NULL,i_125 = NULL,j_125 = NULL,x_6 = NULL;
          t = z_106(t);
          j_125 = t;
          if(match_cons(t, sym__2))
            {
              f_125 = ATgetArgument(t, 0);
              g_125 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_125);
          e_125 = t;
          t = f_125;
          t = b_107(t);
          h_125 = t;
          t = g_125;
          t = k_125(t);
          i_125 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_125, i_125);
          x_6 = t;
          t = SSLsetAnnotations(x_6, e_125);
          t = a_107(t);
        }
      }
    return(t);
  }
  t = k_125(t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_47 = ATgetArgument(t, 0);
      if(((ATgetType(l_47) != AT_LIST) || !(ATisEmpty(l_47))))
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
static ATerm m_9 (ATerm t)
{
  ATerm k_126 = NULL,l_126 = NULL,m_126 = NULL,n_126 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_47 = ATgetArgument(t, 0);
      if(((ATgetType(q_47) == AT_LIST) && !(ATisEmpty(q_47))))
        {
          k_126 = ATgetFirst((ATermList) q_47);
          l_126 = (ATerm) ATgetNext((ATermList) q_47);
        }
      else
        _fail(t);
      {
        ATerm r_47 = ATgetArgument(t, 1);
        if(((ATgetType(r_47) == AT_LIST) && !(ATisEmpty(r_47))))
          {
            m_126 = ATgetFirst((ATermList) r_47);
            n_126 = (ATerm) ATgetNext((ATermList) r_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_126, m_126), (ATerm) ATmakeAppl(sym__2, l_126, n_126));
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm o_126 = NULL,p_126 = NULL;
  if(match_cons(t, sym__2))
    {
      o_126 = ATgetArgument(t, 0);
      p_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_126), o_126);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm q_126 = NULL,r_126 = NULL;
  if(match_cons(t, sym__2))
    {
      q_126 = ATgetArgument(t, 0);
      r_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_126), (ATerm) ATmakeAppl(sym_Match_1, r_126));
  return(t);
}
static ATerm r_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_47 = ATgetArgument(t, 0);
      if(((ATgetType(s_47) != AT_LIST) || !(ATisEmpty(s_47))))
        _fail(t);
      {
        ATerm t_47 = ATgetArgument(t, 1);
        if(((ATgetType(t_47) != AT_LIST) || !(ATisEmpty(t_47))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm w_126 = NULL,x_126 = NULL,y_126 = NULL,z_126 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_47 = ATgetArgument(t, 0);
      if(((ATgetType(x_47) == AT_LIST) && !(ATisEmpty(x_47))))
        {
          w_126 = ATgetFirst((ATermList) x_47);
          x_126 = (ATerm) ATgetNext((ATermList) x_47);
        }
      else
        _fail(t);
      {
        ATerm y_47 = ATgetArgument(t, 1);
        if(((ATgetType(y_47) == AT_LIST) && !(ATisEmpty(y_47))))
          {
            y_126 = ATgetFirst((ATermList) y_47);
            z_126 = (ATerm) ATgetNext((ATermList) y_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_126, y_126), (ATerm) ATmakeAppl(sym__2, x_126, z_126));
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm a_127 = NULL,b_127 = NULL;
  if(match_cons(t, sym__2))
    {
      a_127 = ATgetArgument(t, 0);
      b_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_127), a_127);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm c_127 = NULL,d_127 = NULL;
  if(match_cons(t, sym__2))
    {
      c_127 = ATgetArgument(t, 0);
      d_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_127), (ATerm) ATmakeAppl(sym_Match_1, d_127));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm t_125 = NULL,u_125 = NULL,v_125 = NULL,x_125 = NULL,y_125 = NULL,z_125 = NULL,a_126 = NULL,b_126 = NULL,c_126 = NULL,d_126 = NULL,e_126 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      x_125 = ATgetArgument(t, 0);
      b_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_125;
  if(match_cons(t, sym_Build_1))
    {
      y_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_125;
  if(match_cons(t, sym_Op_2))
    {
      z_125 = ATgetArgument(t, 0);
      a_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_126;
  if(match_cons(t, sym_Seq_2))
    {
      c_126 = ATgetArgument(t, 0);
      v_125 = ATgetArgument(t, 1);
      {
        ATerm j_126 = NULL;
        t = c_126;
        if(match_cons(t, sym_Match_1))
          {
            d_126 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_126;
        if(match_cons(t, sym_Op_2))
          {
            t_125 = ATgetArgument(t, 0);
            u_125 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_125;
        if((z_125 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, a_126, u_125);
        t = genzip_4_0(l_9, m_9, n_9, p_9, t);
        j_126 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_126), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, z_125, a_126)), v_125));
      }
    }
  else
    {
      ATerm v_126 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          c_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_126;
      if(match_cons(t, sym_Op_2))
        {
          d_126 = ATgetArgument(t, 0);
          e_126 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_126;
      if((z_125 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, a_126, e_126);
      t = genzip_4_0(r_9, t_9, v_9, z_9, t);
      v_126 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_126), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, z_125, a_126)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm e_128 = NULL,j_128 = NULL,k_128 = NULL,l_128 = NULL,m_128 = NULL,o_128 = NULL,p_128 = NULL,q_128 = NULL;
  j_128 = t;
  if(match_cons(t, sym_Seq_2))
    {
      k_128 = ATgetArgument(t, 0);
      o_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_128;
  if(match_cons(t, sym_Build_1))
    {
      l_128 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_128;
  if(match_cons(t, sym_Op_2))
    {
      m_128 = ATgetArgument(t, 0);
      {
        ATerm a_48 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = o_128;
  {
    ATerm c_48 = t;
    int d_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            p_128 = ATgetArgument(t, 0);
            {
              ATerm e_48 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_48);
        t = p_128;
        if(match_cons(t, sym_Match_1))
          {
            q_128 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_128;
        if(match_cons(t, sym_Op_2))
          {
            e_128 = ATgetArgument(t, 0);
            {
              ATerm g_48 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_128, e_128);
        {
          ATerm h_48 = t;
          if((PushChoice() == 0))
            {
              ATerm h_54 = NULL;
              if(match_cons(t, sym__2))
                {
                  h_54 = ATgetArgument(t, 0);
                  if((h_54 != ATgetArgument(t, 1)))
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
              t = h_48;
            }
        }
        t = term_o_16;
      }
    else
      {
        t = c_48;
        if(match_cons(t, sym_Match_1))
          {
            p_128 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = p_128;
        if(match_cons(t, sym_Op_2))
          {
            q_128 = ATgetArgument(t, 0);
            {
              ATerm k_48 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_128, q_128);
        {
          ATerm l_48 = t;
          if((PushChoice() == 0))
            {
              ATerm f_55 = NULL;
              if(match_cons(t, sym__2))
                {
                  f_55 = ATgetArgument(t, 0);
                  if((f_55 != ATgetArgument(t, 1)))
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
              t = l_48;
            }
        }
        t = term_o_16;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm q_103 (ATerm), ATerm t)
{
  static ATerm u_128 (ATerm t)
  {
    ATerm m_48 = t;
    int n_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_103(t);
        LocalPopChoice(n_48);
      }
    else
      {
        t = m_48;
        t = SRTS_one(u_128, t);
      }
    return(t);
  }
  t = u_128(t);
  return(t);
}
ATerm at_end_1_0 (ATerm h_111 (ATerm), ATerm t)
{
  static ATerm p_129 (ATerm t)
  {
    ATerm m_129 = NULL,n_129 = NULL,o_129 = NULL;
    o_129 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_129 = ATgetFirst((ATermList) t);
        n_129 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_55 = NULL,t_55 = NULL,b_7 = NULL;
          t = SSLgetAnnotations(o_129);
          o_55 = t;
          t = n_129;
          t = p_129(t);
          t_55 = t;
          t = (ATerm) ATinsert(CheckATermList(t_55), m_129);
          b_7 = t;
          t = SSLsetAnnotations(b_7, o_55);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_129;
        t = h_111(t);
      }
    return(t);
  }
  t = p_129(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_128 = NULL,x_128 = NULL,y_128 = NULL;
  w_128 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_128;
    }
  else
    {
      static ATerm d_10 (ATerm t)
      {
        t = not_null(y_128);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_128 = ATgetFirst((ATermList) t);
          if(((y_128 != NULL) && (y_128 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_128 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_128;
      t = at_end_1_0(d_10, t);
    }
  return(t);
}
static ATerm d_130 (ATerm t_129, ATerm t)
{
  ATerm u_129 = NULL;
  t = SSL_explode_term(t_129);
  if(match_cons(t, sym__2))
    {
      ATerm p_48 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_48) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_129;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_129 = NULL,x_129 = NULL,a_130 = NULL;
  a_130 = t;
  if(match_cons(t, sym__2))
    {
      w_129 = ATgetArgument(t, 0);
      x_129 = ATgetArgument(t, 1);
      {
        ATerm q_48 = t;
        int r_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm g_10 (ATerm t)
            {
              t = x_129;
              return(t);
            }
            t = w_129;
            t = at_end_1_0(g_10, t);
            LocalPopChoice(r_48);
          }
        else
          {
            t = q_48;
            t = d_130(a_130, t);
          }
      }
    }
  else
    {
      t = d_130(a_130, t);
    }
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm w_130 = NULL,x_130 = NULL,y_130 = NULL,z_130 = NULL,a_131 = NULL,b_131 = NULL,c_131 = NULL,d_131 = NULL,e_131 = NULL,f_131 = NULL,g_131 = NULL,h_131 = NULL,i_131 = NULL;
  w_130 = t;
  if(match_cons(t, sym_Let_2))
    {
      x_130 = ATgetArgument(t, 0);
      e_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_131;
  if(match_cons(t, sym_Let_2))
    {
      f_131 = ATgetArgument(t, 0);
      h_131 = ATgetArgument(t, 1);
      {
        ATerm m_131 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, x_130, f_131);
        t = conc_0_0(t);
        m_131 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, m_131, h_131);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          f_131 = ATgetArgument(t, 0);
          h_131 = ATgetArgument(t, 1);
          i_131 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = x_130;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_130 = ATgetFirst((ATermList) t);
          d_131 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_130;
      if(match_cons(t, sym_SDefT_4))
        {
          z_130 = ATgetArgument(t, 0);
          a_131 = ATgetArgument(t, 1);
          b_131 = ATgetArgument(t, 2);
          c_131 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = a_131;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_131;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_131;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_131;
      if(match_cons(t, sym_SVar_1))
        {
          g_131 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_131;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_131;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_131;
      if((z_130 != t))
        {
          _fail(t);
        }
      t = c_131;
      {
        ATerm s_48 = t;
        if((PushChoice() == 0))
          {
            static ATerm h_10 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm t_48 = ATgetArgument(t, 0);
                  if(match_cons(t_48, sym_SVar_1))
                    {
                      if((z_130 != ATgetArgument(t_48, 0)))
                        {
                          _fail(ATgetArgument(t_48, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm u_48 = ATgetArgument(t, 1);
                    if(((ATgetType(u_48) != AT_LIST) || !(ATisEmpty(u_48))))
                      _fail(t);
                  }
                  {
                    ATerm v_48 = ATgetArgument(t, 2);
                    if(((ATgetType(v_48) != AT_LIST) || !(ATisEmpty(v_48))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(h_10, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = s_48;
          }
      }
      t = c_131;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm v_131 = NULL,w_131 = NULL,x_131 = NULL,y_131 = NULL,z_131 = NULL,a_132 = NULL,c_132 = NULL,d_132 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      c_132 = ATgetArgument(t, 0);
      t = c_132;
      if(match_cons(t, sym_Seq_2))
        {
          a_132 = ATgetArgument(t, 0);
          w_131 = ATgetArgument(t, 1);
          t = a_132;
          if(match_cons(t, sym_Where_1))
            {
              v_131 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_131;
          if(match_cons(t, sym_Seq_2))
            {
              x_131 = ATgetArgument(t, 0);
              z_131 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_131;
          if(match_cons(t, sym_Build_1))
            {
              y_131 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, v_131, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, y_131), z_131)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              a_132 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, a_132);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          c_132 = ATgetArgument(t, 0);
          t = c_132;
          if(match_cons(t, sym_Test_1))
            {
              a_132 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, a_132);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              c_132 = ATgetArgument(t, 0);
              t = c_132;
              if(match_cons(t, sym_Not_1))
                {
                  a_132 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, a_132);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  c_132 = ATgetArgument(t, 0);
                  d_132 = ATgetArgument(t, 1);
                  t = d_132;
                  if((c_132 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      c_132 = ATgetArgument(t, 0);
                      d_132 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = d_132;
                  if((c_132 != t))
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
  ATerm r_132 = NULL,s_132 = NULL,t_132 = NULL,u_132 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      r_132 = ATgetArgument(t, 0);
      u_132 = ATgetArgument(t, 1);
      t = r_132;
      if(match_cons(t, sym_LChoice_2))
        {
          s_132 = ATgetArgument(t, 0);
          t_132 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, s_132, (ATerm) ATmakeAppl(sym_LChoice_2, t_132, u_132));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          r_132 = ATgetArgument(t, 0);
          u_132 = ATgetArgument(t, 1);
          t = r_132;
          if(match_cons(t, sym_Seq_2))
            {
              s_132 = ATgetArgument(t, 0);
              t_132 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, s_132, (ATerm) ATmakeAppl(sym_Seq_2, t_132, u_132));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              r_132 = ATgetArgument(t, 0);
              u_132 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_132;
          if(match_cons(t, sym_Choice_2))
            {
              s_132 = ATgetArgument(t, 0);
              t_132 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, s_132, (ATerm) ATmakeAppl(sym_Choice_2, t_132, u_132));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm i_133 = NULL,j_133 = NULL,k_133 = NULL,m_133 = NULL,n_133 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      m_133 = ATgetArgument(t, 0);
      n_133 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, m_133, n_133);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          m_133 = ATgetArgument(t, 0);
          t = m_133;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_133 = ATgetFirst((ATermList) t);
              j_133 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, i_133, (ATerm) ATmakeAppl(sym_LChoices_1, j_133));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_o_16;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              m_133 = ATgetArgument(t, 0);
              t = m_133;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_133 = ATgetFirst((ATermList) t);
                  j_133 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, i_133, (ATerm) ATmakeAppl(sym_Choices_1, j_133));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_o_16;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  m_133 = ATgetArgument(t, 0);
                  t = m_133;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      i_133 = ATgetFirst((ATermList) t);
                      j_133 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_133, (ATerm) ATmakeAppl(sym_Seqs_1, j_133));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_j_16;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      m_133 = ATgetArgument(t, 0);
                      n_133 = ATgetArgument(t, 1);
                      k_133 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, n_133, (ATerm) ATmakeAppl(sym_Op_2, term_g_34, (ATerm) ATinsert(ATinsert(ATempty, k_133), m_133)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          m_133 = ATgetArgument(t, 0);
                          n_133 = ATgetArgument(t, 1);
                          k_133 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, k_133)), m_133), (ATerm) ATmakeAppl(sym_Build_1, n_133)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              m_133 = ATgetArgument(t, 0);
                              n_133 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_133, (ATerm) ATmakeAppl(sym_Match_1, n_133));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  m_133 = ATgetArgument(t, 0);
                                  n_133 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_133), n_133);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      m_133 = ATgetArgument(t, 0);
                                      n_133 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_133), m_133);
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
static ATerm i_10 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm c_135 = NULL,d_135 = NULL,e_135 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      c_135 = ATgetArgument(t, 0);
      t = c_135;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_o_16;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          c_135 = ATgetArgument(t, 0);
          t = c_135;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_j_16;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              c_135 = ATgetArgument(t, 0);
              d_135 = ATgetArgument(t, 1);
              t = c_135;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_o_16;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  c_135 = ATgetArgument(t, 0);
                  d_135 = ATgetArgument(t, 1);
                  t = d_135;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_o_16;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      c_135 = ATgetArgument(t, 0);
                      d_135 = ATgetArgument(t, 1);
                      t = d_135;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_o_16;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          c_135 = ATgetArgument(t, 0);
                          t = c_135;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_o_16;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              c_135 = ATgetArgument(t, 0);
                              t = c_135;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_o_16;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  c_135 = ATgetArgument(t, 0);
                                  d_135 = ATgetArgument(t, 1);
                                  t = d_135;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_o_16;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      c_135 = ATgetArgument(t, 0);
                                      d_135 = ATgetArgument(t, 1);
                                      t = d_135;
                                      t = fetch_1_0(i_10, t);
                                      t = term_o_16;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          c_135 = ATgetArgument(t, 0);
                                          d_135 = ATgetArgument(t, 1);
                                          t = d_135;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = c_135;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = d_135;
                                                }
                                              else
                                                {
                                                  t = c_135;
                                                }
                                            }
                                          else
                                            {
                                              t = c_135;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = d_135;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              c_135 = ATgetArgument(t, 0);
                                              d_135 = ATgetArgument(t, 1);
                                              t = d_135;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = c_135;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = d_135;
                                                    }
                                                  else
                                                    {
                                                      t = c_135;
                                                    }
                                                }
                                              else
                                                {
                                                  t = c_135;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = d_135;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  c_135 = ATgetArgument(t, 0);
                                                  t = c_135;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_o_16;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      c_135 = ATgetArgument(t, 0);
                                                      d_135 = ATgetArgument(t, 1);
                                                      e_135 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = e_135;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, c_135, d_135);
                                                }
                                            }
                                        }
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
  ATerm h_136 = NULL,j_136 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      j_136 = ATgetArgument(t, 0);
      t = j_136;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_j_16;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          j_136 = ATgetArgument(t, 0);
          t = j_136;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_o_16;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              j_136 = ATgetArgument(t, 0);
              h_136 = ATgetArgument(t, 1);
              t = h_136;
              if(match_cons(t, sym_Id_0))
                {
                  t = j_136;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = h_136;
                    }
                  else
                    {
                      t = j_136;
                    }
                }
              else
                {
                  t = j_136;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = h_136;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  j_136 = ATgetArgument(t, 0);
                  h_136 = ATgetArgument(t, 1);
                  t = j_136;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_j_16;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      j_136 = ATgetArgument(t, 0);
                      h_136 = ATgetArgument(t, 1);
                      t = h_136;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_j_16;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          j_136 = ATgetArgument(t, 0);
                          h_136 = ATgetArgument(t, 1);
                          t = h_136;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_j_16;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              j_136 = ATgetArgument(t, 0);
                              t = j_136;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_j_16;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  j_136 = ATgetArgument(t, 0);
                                  t = j_136;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_j_16;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      j_136 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = j_136;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_j_16;
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
  ATerm w_48 = t;
  int x_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(x_48);
    }
  else
    {
      t = w_48;
      {
        ATerm y_48 = t;
        int b_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(b_49);
          }
        else
          {
            t = y_48;
            {
              ATerm c_49 = t;
              int d_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(d_49);
                }
              else
                {
                  t = c_49;
                  {
                    ATerm f_49 = t;
                    int g_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(g_49);
                      }
                    else
                      {
                        t = f_49;
                        {
                          ATerm h_49 = t;
                          int i_49 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(i_49);
                            }
                          else
                            {
                              t = h_49;
                              {
                                ATerm j_49 = t;
                                int k_49 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm y_136 = NULL,z_136 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        y_136 = ATgetArgument(t, 0);
                                        z_136 = ATgetArgument(t, 1);
                                        t = y_136;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = z_136;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            y_136 = ATgetArgument(t, 0);
                                            z_136 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = y_136;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = z_136;
                                      }
                                    LocalPopChoice(k_49);
                                  }
                                else
                                  {
                                    t = j_49;
                                    {
                                      ATerm l_49 = t;
                                      int m_49 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(m_49);
                                        }
                                      else
                                        {
                                          t = l_49;
                                          {
                                            ATerm n_49 = t;
                                            int o_49 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(o_49);
                                              }
                                            else
                                              {
                                                t = n_49;
                                                {
                                                  ATerm p_49 = t;
                                                  int q_49 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(q_49);
                                                    }
                                                  else
                                                    {
                                                      t = p_49;
                                                      {
                                                        ATerm r_49 = t;
                                                        int s_49 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(s_49);
                                                          }
                                                        else
                                                          {
                                                            t = r_49;
                                                            {
                                                              ATerm t_49 = t;
                                                              int u_49 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(u_49);
                                                                }
                                                              else
                                                                {
                                                                  t = t_49;
                                                                  {
                                                                    ATerm v_49 = t;
                                                                    int w_49 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(w_49);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = v_49;
                                                                        {
                                                                          ATerm z_49 = t;
                                                                          int a_50 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(a_50);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = z_49;
                                                                              {
                                                                                ATerm b_50 = t;
                                                                                int c_50 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(c_50);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = b_50;
                                                                                    {
                                                                                      ATerm c_137 = NULL,d_137 = NULL,e_137 = NULL,f_137 = NULL;
                                                                                      d_137 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          e_137 = ATgetArgument(t, 0);
                                                                                          f_137 = ATgetArgument(t, 1);
                                                                                          t = e_137;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              c_137 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = d_137;
                                                                                          t = r_13(c_137, f_137, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              e_137 = ATgetArgument(t, 0);
                                                                                              f_137 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = e_137;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = f_137;
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_2_0 (ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm t)
{
  static ATerm j_137 (ATerm t)
  {
    ATerm d_50 = t;
    int e_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_108(t);
        t = j_137(t);
        LocalPopChoice(e_50);
      }
    else
      {
        t = d_50;
        t = i_108(t);
      }
    return(t);
  }
  t = j_137(t);
  return(t);
}
ATerm downup_1_0 (ATerm o_102 (ATerm), ATerm t)
{
  t = o_102(t);
  {
    static ATerm m_10 (ATerm t)
    {
      t = downup_1_0(o_102, t);
      return(t);
    }
    t = SRTS_all(m_10, t);
  }
  t = o_102(t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = downup_1_0(o_10, t);
  {
    ATerm j_50 = t;
    int k_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        LocalPopChoice(k_50);
      }
    else
      {
        t = j_50;
      }
  }
  return(t);
}
static ATerm o_10 (ATerm t)
{
  t = repeat_2_0(Simplify_0_0, _id, t);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = inline_sdef_0_0(t);
  {
    ATerm l_50 = t;
    int m_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        LocalPopChoice(m_50);
      }
    else
      {
        t = l_50;
      }
  }
  return(t);
}
ATerm inline_sdefs_0_0 (ATerm t)
{
  t = map_1_0(n_10, t);
  t = map_1_0(p_10, t);
  return(t);
}
static ATerm x_14 (ATerm f_50, ATerm g_50, ATerm t)
{
  ATerm s_137 = NULL;
  t = SSL_fputc(f_50, g_50);
  s_137 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_137);
  return(t);
}
static ATerm y_14 (ATerm u_31, ATerm v_31, ATerm t)
{
  ATerm t_137 = NULL;
  t = SSL_write_term_to_stream_text(u_31, v_31);
  t_137 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_137);
  return(t);
}
static ATerm a_15 (ATerm w_109 (ATerm), ATerm t_226, ATerm y_31, ATerm t)
{
  ATerm u_137 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_226, term_n_50);
  t = d_15(t);
  u_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_137, y_31);
  t = w_109(t);
  t = fclose_0_0(t);
  t = y_31;
  return(t);
}
static ATerm z_14 (ATerm q_31, ATerm r_31, ATerm t)
{
  ATerm v_137 = NULL;
  t = SSL_write_term_to_stream_baf(q_31, r_31);
  v_137 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_137);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm y_137 = NULL,z_137 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_50 = ATgetArgument(t, 0);
      if(match_cons(p_50, sym_Stream_1))
        {
          y_137 = ATgetArgument(p_50, 0);
        }
      else
        _fail(t);
      z_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_14(y_137, z_137, t);
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm a_138 = NULL,b_138 = NULL,c_138 = NULL,d_138 = NULL,e_138 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_50 = ATgetArgument(t, 0);
      if(match_cons(s_50, sym_Stream_1))
        {
          d_138 = ATgetArgument(s_50, 0);
        }
      else
        _fail(t);
      e_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_14(d_138, e_138, t);
  a_138 = t;
  t = term_t_50;
  b_138 = t;
  t = a_138;
  if(match_cons(t, sym_Stream_1))
    {
      c_138 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_t_50, a_138);
  t = x_14(b_138, c_138, t);
  return(t);
}
ATerm output_1_0 (ATerm f_128 (ATerm), ATerm t)
{
  ATerm w_137 = NULL,x_137 = NULL;
  t = f_128(t);
  x_137 = t;
  {
    ATerm u_50 = t;
    int v_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_50;
        t = get_config_0_0(t);
        LocalPopChoice(v_50);
      }
    else
      {
        t = u_50;
        t = term_x_50;
      }
  }
  w_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_137, x_137);
  {
    ATerm z_50 = t;
    int a_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_51;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, w_137, x_137);
        LocalPopChoice(a_51);
        if(match_cons(t, sym__2))
          {
            ATerm g_51 = ATgetArgument(t, 0);
            ATerm h_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_15(r_10, w_137, x_137, t);
      }
    else
      {
        t = z_50;
        if(match_cons(t, sym__2))
          {
            ATerm i_51 = ATgetArgument(t, 0);
            ATerm j_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_15(s_10, w_137, x_137, t);
      }
  }
  return(t);
}
static ATerm s_138 (ATerm m_138, ATerm t)
{
  t = SSL_fclose(m_138);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_138 = NULL,q_138 = NULL;
  q_138 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_138 = ATgetArgument(t, 0);
      {
        ATerm l_51 = t;
        int m_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_138);
            LocalPopChoice(m_51);
          }
        else
          {
            t = l_51;
            t = s_138(q_138, t);
          }
      }
    }
  else
    {
      t = s_138(q_138, t);
    }
  return(t);
}
static ATerm b_15 (ATerm w_31, ATerm t)
{
  t = SSL_read_term_from_stream(w_31);
  return(t);
}
static ATerm c_15 (ATerm h_50, ATerm i_50, ATerm t)
{
  ATerm t_138 = NULL;
  t = SSL_fopen(h_50, i_50);
  t_138 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_138);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_138 = NULL;
  t = SSL_stdin_stream();
  u_138 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_138);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_138 = NULL;
  t = SSL_stdout_stream();
  v_138 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_138);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_138 = NULL;
  t = SSL_stderr_stream();
  w_138 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_138);
  return(t);
}
static ATerm d_140 (ATerm c_139, ATerm t)
{
  ATerm d_139 = NULL;
  t = SSL_explode_term(c_139);
  if(match_cons(t, sym__2))
    {
      ATerm n_51 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_51) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_51 = ATgetArgument(t, 1);
        if(((ATgetType(o_51) == AT_LIST) && !(ATisEmpty(o_51))))
          {
            d_139 = ATgetFirst((ATermList) o_51);
            {
              ATerm r_51 = (ATerm) ATgetNext((ATermList) o_51);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_139;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_139;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_139;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_139;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm e_140 (ATerm g_139, ATerm h_139, ATerm i_139, ATerm t)
{
  ATerm j_139 = NULL,k_139 = NULL,l_139 = NULL,o_139 = NULL,d_7 = NULL;
  t = SSLgetAnnotations(i_139);
  l_139 = t;
  t = g_139;
  if(match_cons(t, sym_Path_1))
    {
      o_139 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_139, h_139);
  d_7 = t;
  t = SSLsetAnnotations(d_7, l_139);
  if(match_cons(t, sym__2))
    {
      j_139 = ATgetArgument(t, 0);
      k_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_15(j_139, k_139, t);
  return(t);
}
static ATerm f_140 (ATerm q_139, ATerm r_139, ATerm s_139, ATerm t)
{
  ATerm t_139 = NULL,u_139 = NULL,v_139 = NULL,y_139 = NULL,e_7 = NULL;
  t = SSLgetAnnotations(s_139);
  v_139 = t;
  t = SSL_is_string(q_139);
  y_139 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_139, r_139);
  e_7 = t;
  t = SSLsetAnnotations(e_7, v_139);
  if(match_cons(t, sym__2))
    {
      t_139 = ATgetArgument(t, 0);
      u_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_15(t_139, u_139, t);
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm a_140 = NULL,b_140 = NULL,c_140 = NULL;
  a_140 = t;
  if(match_cons(t, sym__2))
    {
      b_140 = ATgetArgument(t, 0);
      c_140 = ATgetArgument(t, 1);
      {
        ATerm s_51 = t;
        int g_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_140(a_140, t);
            LocalPopChoice(g_52);
          }
        else
          {
            t = s_51;
            {
              ATerm h_52 = t;
              int i_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_140(b_140, c_140, a_140, t);
                  LocalPopChoice(i_52);
                }
              else
                {
                  t = h_52;
                  t = f_140(b_140, c_140, a_140, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_140(a_140, t);
    }
  return(t);
}
static ATerm t_10 (ATerm t)
{
  t = term_j_52;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_140 = NULL,h_140 = NULL,i_140 = NULL;
  ATerm k_52 = t;
  int n_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_140 = NULL;
      j_140 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_140, term_o_52);
      t = d_15(t);
      LocalPopChoice(n_52);
    }
  else
    {
      t = k_52;
      t = debug_1_0(t_10, t);
      _fail(t);
    }
  h_140 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_15(i_140, t);
  g_140 = t;
  t = h_140;
  t = fclose_0_0(t);
  t = g_140;
  return(t);
}
ATerm input_1_0 (ATerm g_128 (ATerm), ATerm t)
{
  ATerm p_52 = t;
  int q_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_52;
      t = get_config_0_0(t);
      LocalPopChoice(q_52);
    }
  else
    {
      t = p_52;
      t = term_s_52;
    }
  t = ReadFromFile_0_0(t);
  t = g_128(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_140 = NULL,m_140 = NULL,n_140 = NULL,o_140 = NULL,p_140 = NULL;
  l_140 = t;
  t = term_t_52;
  t = whoami_0_0(t);
  m_140 = t;
  t = term_v_52;
  o_140 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_53), m_140), term_w_52);
  p_140 = t;
  t = SSL_printnl(o_140, p_140);
  t = term_z_13;
  n_140 = t;
  t = SSL_exit(n_140);
  t = l_140;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm r_140 = NULL;
  r_140 = t;
  if(match_string(t, "-k"))
    {
      t = r_140;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_140;
    }
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm s_140 = NULL,t_140 = NULL,u_140 = NULL;
  s_140 = t;
  t = SSL_string_to_int(s_140);
  t_140 = t;
  t = term_c_53;
  u_140 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_53, t_140);
  t = m_15(u_140, t_140, t);
  t = s_140;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = term_d_53;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_10, w_10, x_10, t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm w_140 = NULL;
  w_140 = t;
  if(match_string(t, "-S"))
    {
      t = w_140;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_140;
    }
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm x_140 = NULL,y_140 = NULL;
  t = term_e_53;
  x_140 = t;
  t = term_h_45;
  y_140 = t;
  t = term_g_53;
  t = m_15(x_140, y_140, t);
  t = term_i_53;
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = term_j_53;
  return(t);
}
static ATerm d_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm z_140 = NULL,a_141 = NULL,b_141 = NULL;
  z_140 = t;
  t = SSL_string_to_int(z_140);
  a_141 = t;
  t = term_e_53;
  b_141 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_53, a_141);
  t = m_15(b_141, a_141, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_140);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  t = term_k_53;
  return(t);
}
static ATerm g_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm c_141 = NULL,d_141 = NULL;
  t = term_l_53;
  c_141 = t;
  t = term_t_52;
  d_141 = t;
  t = term_m_53;
  t = m_15(c_141, d_141, t);
  t = term_o_53;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  t = term_p_53;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_53 = t;
  int r_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_10, b_11, c_11, t);
      LocalPopChoice(r_53);
    }
  else
    {
      t = q_53;
      {
        ATerm t_53 = t;
        int u_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_11, e_11, f_11, t);
            LocalPopChoice(u_53);
          }
        else
          {
            t = t_53;
            t = Option_3_0(g_11, h_11, i_11, t);
          }
      }
    }
  return(t);
}
static ATerm m_15 (ATerm x_52, ATerm y_52, ATerm t)
{
  ATerm e_141 = NULL;
  t = term_v_53;
  e_141 = t;
  t = SSL_table_put(e_141, x_52, y_52);
  t = (ATerm) ATmakeAppl(sym__3, term_v_53, x_52, y_52);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm h_141 = NULL,i_141 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_141 = NULL,k_141 = NULL,l_141 = NULL;
      t = term_t_52;
      t = h_0(t);
      j_141 = t;
      t = term_w_53;
      k_141 = t;
      t = term_x_53;
      l_141 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_53, term_x_53, j_141);
      t = k_15(k_141, l_141, j_141, t);
      _fail(t);
    }
  else
    {
      ATerm o_141 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_141 = ATgetFirst((ATermList) t);
          i_141 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_141;
      t = c_0(t);
      t = term_t_52;
      t = e_0(t);
      o_141 = t;
      t = (ATerm) ATinsert(CheckATermList(i_141), o_141);
    }
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm q_141 = NULL;
  q_141 = t;
  if(match_string(t, "-o"))
    {
      t = q_141;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_141;
    }
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm r_141 = NULL,s_141 = NULL;
  r_141 = t;
  t = term_w_50;
  s_141 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_50, r_141);
  t = m_15(s_141, r_141, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_141);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  t = term_y_53;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_11, l_11, o_11, t);
  return(t);
}
static ATerm k_15 (ATerm u_34, ATerm x_34, ATerm t_34, ATerm t)
{
  ATerm u_141 = NULL,v_141 = NULL,w_141 = NULL;
  u_141 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_34, x_34);
  {
    ATerm z_53 = t;
    int a_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_54 = ATgetArgument(t, 0);
            ATerm d_54 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_34, x_34);
        t = j_15(u_34, x_34, t);
        LocalPopChoice(a_54);
      }
    else
      {
        t = z_53;
        t = (ATerm) ATempty;
      }
  }
  v_141 = t;
  t = (ATerm) ATinsert(CheckATermList(v_141), t_34);
  w_141 = t;
  t = SSL_table_put(u_34, x_34, w_141);
  t = u_141;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm d_142 = NULL,e_142 = NULL,f_142 = NULL,g_142 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_142 = NULL,i_142 = NULL,j_142 = NULL;
      t = term_t_52;
      t = v_0(t);
      h_142 = t;
      t = term_w_53;
      i_142 = t;
      t = term_x_53;
      j_142 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_53, term_x_53, h_142);
      t = k_15(i_142, j_142, h_142, t);
      _fail(t);
    }
  else
    {
      ATerm n_142 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_142 = ATgetFirst((ATermList) t);
          e_142 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_142;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_142 = ATgetFirst((ATermList) t);
          g_142 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_142;
      t = l_0(t);
      t = f_142;
      t = o_0(t);
      n_142 = t;
      t = (ATerm) ATinsert(CheckATermList(g_142), n_142);
    }
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm p_142 = NULL;
  p_142 = t;
  if(match_string(t, "-i"))
    {
      t = p_142;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_142;
    }
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm q_142 = NULL,r_142 = NULL;
  q_142 = t;
  t = term_r_52;
  r_142 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_52, q_142);
  t = m_15(r_142, q_142, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_142);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = term_e_54;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_11, q_11, r_11, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_142 = NULL,t_142 = NULL,u_142 = NULL,v_142 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_52;
  t = whoami_0_0(t);
  s_142 = t;
  t = term_v_52;
  u_142 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_54), s_142);
  v_142 = t;
  t = SSL_printnl(u_142, v_142);
  t = term_z_13;
  t_142 = t;
  t = SSL_exit(t_142);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_g_54;
  t = get_config_0_0(t);
  return(t);
}
static ATerm e_15 (ATerm y_32, ATerm z_32, ATerm t)
{
  ATerm i_54 = t;
  int k_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_32, z_32);
      LocalPopChoice(k_54);
    }
  else
    {
      t = i_54;
      t = SSL_addr(y_32, z_32);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_115 (ATerm), ATerm t_115 (ATerm), ATerm t)
{
  ATerm x_142 = NULL,y_142 = NULL,z_142 = NULL;
  x_142 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_142;
      t = s_115(t);
    }
  else
    {
      ATerm c_143 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_142 = ATgetFirst((ATermList) t);
          z_142 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_142;
      t = foldr_2_0(s_115, t_115, t);
      c_143 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_142, c_143);
      t = t_115(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm s_11 (ATerm t)
{
  t = term_h_45;
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL;
  if(match_cons(t, sym__2))
    {
      c_58 = ATgetArgument(t, 0);
      d_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_15(c_58, d_58, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_143 = NULL,m_57 = NULL,t_57 = NULL;
  t = times_0_0(t);
  t_57 = t;
  t = SSL_explode_term(t_57);
  if(match_cons(t, sym__2))
    {
      ATerm l_54 = ATgetArgument(t, 0);
      m_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_57;
  t = foldr_2_0(s_11, t_11, t);
  f_143 = t;
  t = SSL_TicksToSeconds(f_143);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_143 = NULL,r_143 = NULL,s_143 = NULL;
  q_143 = t;
  if(match_cons(t, sym__2))
    {
      r_143 = ATgetArgument(t, 0);
      s_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_54 = t;
    int n_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_143;
        if((r_143 != t))
          {
            _fail(t);
          }
        t = q_143;
        LocalPopChoice(n_54);
      }
    else
      {
        t = m_54;
        t = (ATerm) ATmakeAppl(sym__2, r_143, s_143);
        {
          ATerm o_54 = t;
          int p_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_143, s_143);
              LocalPopChoice(p_54);
            }
          else
            {
              t = o_54;
              t = SSL_gtr(r_143, s_143);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, r_143, s_143);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_125 (ATerm), ATerm t)
{
  ATerm w_143 = NULL;
  w_143 = t;
  {
    ATerm q_54 = t;
    int r_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_143 = NULL;
        t = term_e_53;
        t = get_config_0_0(t);
        y_143 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_143, term_z_13);
        t = geq_0_0(t);
        t = w_143;
        t = l_125(t);
        LocalPopChoice(r_54);
      }
    else
      {
        t = q_54;
        t = w_143;
      }
  }
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm a_144 = NULL,b_144 = NULL,d_144 = NULL,e_144 = NULL;
  t = run_time_0_0(t);
  a_144 = t;
  t = term_t_52;
  t = whoami_0_0(t);
  b_144 = t;
  t = term_v_52;
  d_144 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_54), a_144), term_t_54), b_144);
  e_144 = t;
  t = SSL_printnl(d_144, e_144);
  t = (ATerm) ATmakeAppl(sym__2, term_v_52, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_54), a_144), term_t_54), b_144));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_144 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_45;
  f_144 = t;
  t = SSL_exit(f_144);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm n_144 = NULL,o_144 = NULL;
  o_144 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_144;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_144 = ATgetArgument(t, 0);
          {
            ATerm d_59 = NULL,k_7 = NULL;
            t = SSLgetAnnotations(o_144);
            d_59 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_144);
            k_7 = t;
            t = SSLsetAnnotations(k_7, d_59);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_144;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_127 (ATerm), ATerm t)
{
  ATerm v_54 = t;
  int w_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_54;
      t = get_config_0_0(t);
      LocalPopChoice(w_54);
    }
  else
    {
      t = v_54;
      t = fetch_1_0(v_11, t);
    }
  t = w_127(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm r_144 = NULL,s_144 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_144 = ATgetFirst((ATermList) t);
      s_144 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_144 = NULL,x_144 = NULL;
        static ATerm w_11 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_144)), not_null(x_144));
          return(t);
        }
        t = s_144;
        t = j_0(t);
        if(((w_144 != NULL) && (w_144 != t)))
          _fail(t);
        else
          w_144 = t;
        t = r_144;
        t = i_0(t);
        if(((x_144 != NULL) && (x_144 != t)))
          _fail(t);
        else
          x_144 = t;
        t = s_144;
        t = reverse_acc_2_0(i_0, w_11, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_52;
      t = j_0(t);
    }
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm b_145 = NULL,c_145 = NULL,d_145 = NULL,m_7 = NULL;
  d_145 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_145);
  b_145 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_145);
  m_7 = t;
  t = SSLsetAnnotations(m_7, b_145);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm f_145 = NULL;
  f_145 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_145), term_z_54);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_144 = NULL,a_145 = NULL;
  ATerm a_55 = t;
  int b_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_54;
      t = get_config_0_0(t);
      LocalPopChoice(b_55);
    }
  else
    {
      t = a_55;
      t = fetch_1_0(x_11, t);
    }
  t = term_c_55;
  t = echo_0_0(t);
  t = term_w_53;
  z_144 = t;
  t = term_x_53;
  a_145 = t;
  t = term_d_55;
  t = j_15(z_144, a_145, t);
  t = reverse_acc_2_0(_id, z_11, t);
  t = map_1_0(a_12, t);
  return(t);
}
ATerm fetch_1_0 (ATerm b_111 (ATerm), ATerm t)
{
  static ATerm c_146 (ATerm t)
  {
    ATerm z_145 = NULL,a_146 = NULL,b_146 = NULL;
    z_145 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_146 = ATgetFirst((ATermList) t);
        b_146 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_55 = t;
      int h_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_59 = NULL,o_59 = NULL,o_7 = NULL;
          t = SSLgetAnnotations(z_145);
          l_59 = t;
          t = a_146;
          t = b_111(t);
          o_59 = t;
          t = (ATerm) ATinsert(CheckATermList(b_146), o_59);
          o_7 = t;
          t = SSLsetAnnotations(o_7, l_59);
          LocalPopChoice(h_55);
        }
      else
        {
          t = g_55;
          {
            ATerm x_59 = NULL,a_60 = NULL,p_7 = NULL;
            t = SSLgetAnnotations(z_145);
            x_59 = t;
            t = b_146;
            t = c_146(t);
            a_60 = t;
            t = (ATerm) ATinsert(CheckATermList(a_60), a_146);
            p_7 = t;
            t = SSLsetAnnotations(p_7, x_59);
          }
        }
    }
    return(t);
  }
  t = c_146(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_146 = NULL,h_146 = NULL,i_146 = NULL;
  g_146 = t;
  {
    ATerm i_55 = t;
    int j_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_146;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_55 = ATgetFirst((ATermList) t);
                ATerm l_55 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_146;
          }
        LocalPopChoice(j_55);
      }
    else
      {
        t = i_55;
        t = (ATerm) ATinsert(ATempty, g_146);
      }
  }
  h_146 = t;
  t = term_x_50;
  i_146 = t;
  t = SSL_printnl(i_146, h_146);
  t = g_146;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_g_54;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm i_15 (ATerm z_48, ATerm a_49, ATerm t)
{
  t = SSL_strcat(z_48, a_49);
  return(t);
}
ATerm debug_1_0 (ATerm u_109 (ATerm), ATerm t)
{
  ATerm m_146 = NULL,n_146 = NULL,o_146 = NULL,p_146 = NULL;
  m_146 = t;
  t = u_109(t);
  n_146 = t;
  t = term_v_52;
  o_146 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_146), n_146);
  p_146 = t;
  t = SSL_printnl(o_146, p_146);
  t = m_146;
  return(t);
}
ATerm map_1_0 (ATerm r_110 (ATerm), ATerm t)
{
  static ATerm f_147 (ATerm t)
  {
    ATerm b_147 = NULL,d_147 = NULL,e_147 = NULL;
    b_147 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_147;
      }
    else
      {
        ATerm q_60 = NULL,u_60 = NULL,v_60 = NULL,q_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_147 = ATgetFirst((ATermList) t);
            e_147 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_147);
        q_60 = t;
        t = d_147;
        t = r_110(t);
        u_60 = t;
        t = e_147;
        t = f_147(t);
        v_60 = t;
        t = (ATerm) ATinsert(CheckATermList(v_60), u_60);
        q_9 = t;
        t = SSLsetAnnotations(q_9, q_60);
      }
    return(t);
  }
  t = f_147(t);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm m_55 = t;
  int n_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(n_55);
    }
  else
    {
      t = m_55;
    }
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = term_p_55;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_55 = t;
  int r_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_147 = NULL;
      n_147 = t;
      t = SSL_is_string(n_147);
      LocalPopChoice(r_55);
    }
  else
    {
      t = q_55;
      {
        ATerm s_55 = t;
        int v_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(b_12, t);
            LocalPopChoice(v_55);
          }
        else
          {
            t = s_55;
            {
              ATerm t_147 = NULL,u_147 = NULL,v_147 = NULL;
              t_147 = t;
              if(match_cons(t, sym_Path_1))
                {
                  u_147 = ATgetArgument(t, 0);
                  t = u_147;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      u_147 = ATgetArgument(t, 0);
                      t = u_147;
                      {
                        ATerm w_55 = t;
                        int x_55 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(x_55);
                          }
                        else
                          {
                            t = w_55;
                            t = debug_1_0(d_12, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm z_147 = NULL,a_148 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          u_147 = ATgetArgument(t, 0);
                          v_147 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_147;
                      t = eval_config_0_0(t);
                      z_147 = t;
                      t = v_147;
                      t = eval_config_0_0(t);
                      a_148 = t;
                      t = (ATerm) ATmakeAppl(sym__2, z_147, a_148);
                      t = i_15(z_147, a_148, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_15 (ATerm c_37, ATerm d_37, ATerm t)
{
  t = SSL_table_get(c_37, d_37);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm f_148 = NULL,g_148 = NULL;
  f_148 = t;
  t = term_v_53;
  g_148 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_53, f_148);
  t = j_15(g_148, f_148, t);
  {
    ATerm y_55 = t;
    int z_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_148 = NULL,i_148 = NULL;
        t = eval_config_0_0(t);
        h_148 = t;
        t = term_v_53;
        i_148 = t;
        t = SSL_table_put(i_148, f_148, h_148);
        t = h_148;
        LocalPopChoice(z_55);
      }
    else
      {
        t = y_55;
      }
  }
  return(t);
}
static ATerm g_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm l_148 = NULL,m_148 = NULL;
  t = term_a_56;
  l_148 = t;
  t = term_t_52;
  m_148 = t;
  t = term_b_56;
  t = m_15(l_148, m_148, t);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_c_56;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm n_148 = NULL,o_148 = NULL,p_148 = NULL,q_148 = NULL;
  t = term_a_56;
  p_148 = t;
  t = term_t_52;
  q_148 = t;
  t = term_b_56;
  t = m_15(p_148, q_148, t);
  t = term_d_56;
  n_148 = t;
  t = term_t_52;
  o_148 = t;
  t = term_e_56;
  t = m_15(n_148, o_148, t);
  t = term_g_56;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = term_h_56;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_56 = t;
  int j_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_12, h_12, i_12, t);
      LocalPopChoice(j_56);
    }
  else
    {
      t = i_56;
      t = Option_3_0(j_12, k_12, l_12, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm t)
{
  ATerm r_148 = NULL,s_148 = NULL,t_148 = NULL,u_148 = NULL,v_148 = NULL,w_148 = NULL,u_9 = NULL;
  w_148 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_148 = ATgetFirst((ATermList) t);
      t_148 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_148);
  r_148 = t;
  t = s_148;
  t = d_87(t);
  u_148 = t;
  t = t_148;
  t = e_87(t);
  v_148 = t;
  t = (ATerm) ATinsert(CheckATermList(v_148), u_148);
  u_9 = t;
  t = SSLsetAnnotations(u_9, r_148);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_129 (ATerm), ATerm t)
{
  ATerm b_149 = NULL,c_149 = NULL,d_149 = NULL,e_149 = NULL,g_149 = NULL,h_149 = NULL,y_9 = NULL;
  b_149 = t;
  {
    ATerm l_56 = t;
    int m_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_56;
        t = z_129(t);
        LocalPopChoice(m_56);
      }
    else
      {
        t = l_56;
      }
  }
  t = b_149;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_149 = ATgetFirst((ATermList) t);
      e_149 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_149);
  c_149 = t;
  t = term_g_54;
  h_149 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_54, d_149);
  t = m_15(h_149, d_149, t);
  t = e_149;
  {
    static ATerm r_149 (ATerm t)
    {
      ATerm o_56 = t;
      int p_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_56 = t;
          int r_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_149 = NULL;
              k_149 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_149;
              LocalPopChoice(r_56);
            }
          else
            {
              t = q_56;
              t = z_129(t);
              t = Cons_2_0(_id, r_149, t);
            }
          LocalPopChoice(p_56);
        }
      else
        {
          t = o_56;
          {
            ATerm n_149 = NULL,o_149 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_149 = ATgetFirst((ATermList) t);
                o_149 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_149), (ATerm) ATmakeAppl(sym_Undefined_1, n_149));
          }
        }
      return(t);
    }
    t = r_149(t);
  }
  g_149 = t;
  t = (ATerm) ATinsert(CheckATermList(g_149), (ATerm) ATmakeAppl(sym_Program_1, d_149));
  y_9 = t;
  t = SSLsetAnnotations(y_9, c_149);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm d_150 = NULL;
  d_150 = t;
  if(match_string(t, "--help"))
    {
      t = d_150;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_150;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_150;
        }
    }
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm e_150 = NULL,f_150 = NULL;
  t = term_x_54;
  e_150 = t;
  t = term_t_52;
  f_150 = t;
  t = term_s_56;
  t = m_15(e_150, f_150, t);
  t = term_t_56;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  t = term_u_56;
  return(t);
}
static ATerm w_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_129 (ATerm), ATerm t)
{
  ATerm w_149 = NULL,x_149 = NULL,y_149 = NULL,z_149 = NULL,a_150 = NULL,b_150 = NULL,c_150 = NULL;
  y_149 = t;
  t = term_w_53;
  a_150 = t;
  t = term_x_53;
  b_150 = t;
  t = (ATerm) ATempty;
  c_150 = t;
  t = SSL_table_put(a_150, b_150, c_150);
  t = y_149;
  {
    static ATerm m_12 (ATerm t)
    {
      ATerm v_56 = t;
      int w_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_129(t);
          LocalPopChoice(w_56);
        }
      else
        {
          t = v_56;
          {
            ATerm x_56 = t;
            int y_56 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_12, o_12, p_12, t);
                LocalPopChoice(y_56);
              }
            else
              {
                t = x_56;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_12, t);
  }
  {
    ATerm z_56 = t;
    int a_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_150 = NULL;
        m_150 = t;
        {
          ATerm b_57 = t;
          int c_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_62 = NULL;
              t = m_150;
              {
                ATerm d_57 = t;
                int e_57 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_x_54;
                    t = get_config_0_0(t);
                    LocalPopChoice(e_57);
                  }
                else
                  {
                    t = d_57;
                    t = fetch_1_0(w_12, t);
                  }
              }
              t = m_150;
              t = default_system_usage_0_0(t);
              t = term_h_45;
              a_62 = t;
              t = SSL_exit(a_62);
              LocalPopChoice(c_57);
            }
          else
            {
              t = b_57;
              {
                ATerm i_62 = NULL;
                t = term_a_56;
                t = get_config_0_0(t);
                t = m_150;
                t = default_system_about_0_0(t);
                t = term_h_45;
                i_62 = t;
                t = SSL_exit(i_62);
              }
            }
        }
        LocalPopChoice(a_57);
      }
    else
      {
        t = z_56;
        {
          ATerm f_57 = t;
          int g_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_150 = NULL,o_150 = NULL,p_150 = NULL;
              static ATerm x_12 (ATerm t)
              {
                ATerm q_150 = NULL,r_150 = NULL,s_150 = NULL,a_10 = NULL;
                s_150 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    r_150 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(s_150);
                q_150 = t;
                t = r_150;
                if(((w_149 != NULL) && (w_149 != t)))
                  _fail(t);
                else
                  w_149 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, r_150);
                a_10 = t;
                t = SSLsetAnnotations(a_10, q_150);
                return(t);
              }
              t = fetch_1_0(x_12, t);
              t = term_v_52;
              o_150 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_149)), term_h_57);
              p_150 = t;
              t = SSL_printnl(o_150, p_150);
              t = (ATerm) ATmakeAppl(sym__2, term_v_52, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_149)), term_h_57));
              t = default_system_usage_0_0(t);
              t = term_z_13;
              n_150 = t;
              t = SSL_exit(n_150);
              LocalPopChoice(g_57);
            }
          else
            {
              t = f_57;
            }
        }
      }
  }
  x_149 = t;
  t = term_w_53;
  z_149 = t;
  t = SSL_table_destroy(z_149);
  t = x_149;
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm a_128 (ATerm), ATerm b_128 (ATerm), ATerm t)
{
  ATerm x_150 = NULL,y_150 = NULL,z_150 = NULL,a_151 = NULL;
  t = parse_options_1_0(y_127, t);
  x_150 = t;
  t = term_i_57;
  a_151 = t;
  t = SSL_table_create(a_151);
  t = term_i_57;
  y_150 = t;
  t = term_j_57;
  z_150 = t;
  t = SSL_table_put(y_150, z_150, x_150);
  t = x_150;
  t = a_128(t);
  {
    ATerm k_57 = t;
    int l_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_127, t);
        LocalPopChoice(l_57);
      }
    else
      {
        t = k_57;
        {
          ATerm n_57 = t;
          int o_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_128(t);
              t = report_success_0_0(t);
              LocalPopChoice(o_57);
            }
          else
            {
              t = n_57;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm p_57 = t;
  int q_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(q_57);
    }
  else
    {
      t = p_57;
      {
        ATerm r_57 = t;
        int s_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(s_57);
          }
        else
          {
            t = r_57;
            {
              ATerm u_57 = t;
              int v_57 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(e_13, h_13, i_13, t);
                  LocalPopChoice(v_57);
                }
              else
                {
                  t = u_57;
                  {
                    ATerm w_57 = t;
                    int x_57 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(x_57);
                      }
                    else
                      {
                        t = w_57;
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
static ATerm c_13 (ATerm t)
{
  t = input_1_0(j_13, t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm c_151 = NULL,d_151 = NULL;
  t = term_d_51;
  c_151 = t;
  t = term_t_52;
  d_151 = t;
  t = term_y_57;
  t = m_15(c_151, d_151, t);
  t = term_z_57;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  t = term_a_58;
  return(t);
}
static ATerm j_13 (ATerm t)
{
  t = output_1_0(k_13, t);
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm f_151 = NULL,g_151 = NULL,h_151 = NULL,i_151 = NULL,j_151 = NULL,k_151 = NULL,l_151 = NULL,m_151 = NULL,n_151 = NULL,o_151 = NULL,p_151 = NULL,q_151 = NULL,r_151 = NULL,s_151 = NULL,t_151 = NULL,q_10 = NULL,l_10 = NULL,k_10 = NULL,j_10 = NULL;
  t_151 = t;
  if(match_cons(t, sym_Specification_1))
    {
      g_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_151);
  f_151 = t;
  t = g_151;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_151 = ATgetFirst((ATermList) t);
      j_151 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_151);
  h_151 = t;
  t = j_151;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_151 = ATgetFirst((ATermList) t);
      n_151 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_151);
  l_151 = t;
  t = m_151;
  if(match_cons(t, sym_Strategies_1))
    {
      q_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_151);
  p_151 = t;
  t = q_151;
  t = inline_sdefs_0_0(t);
  r_151 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, r_151);
  j_10 = t;
  t = SSLsetAnnotations(j_10, p_151);
  s_151 = t;
  t = n_151;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_151), s_151);
  k_10 = t;
  t = SSLsetAnnotations(k_10, l_151);
  o_151 = t;
  t = (ATerm) ATinsert(CheckATermList(o_151), i_151);
  l_10 = t;
  t = SSLsetAnnotations(l_10, h_151);
  k_151 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, k_151);
  q_10 = t;
  t = SSLsetAnnotations(q_10, f_151);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(y_12, default_usage_0_0, _id, c_13, t);
  return(t);
}
