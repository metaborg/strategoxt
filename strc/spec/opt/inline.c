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
ATerm term_h_57;
ATerm term_g_57;
ATerm term_f_57;
ATerm term_o_56;
ATerm term_n_56;
ATerm term_l_56;
ATerm term_x_55;
ATerm term_w_55;
ATerm term_v_55;
ATerm term_q_55;
ATerm term_k_55;
ATerm term_j_55;
ATerm term_i_55;
ATerm term_h_55;
ATerm term_g_55;
ATerm term_e_55;
ATerm term_d_55;
ATerm term_r_54;
ATerm term_g_54;
ATerm term_e_54;
ATerm term_a_54;
ATerm term_z_53;
ATerm term_w_53;
ATerm term_v_53;
ATerm term_k_53;
ATerm term_j_53;
ATerm term_i_53;
ATerm term_c_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_q_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_k_52;
ATerm term_j_52;
ATerm term_h_52;
ATerm term_g_52;
ATerm term_f_52;
ATerm term_e_52;
ATerm term_d_52;
ATerm term_b_52;
ATerm term_z_51;
ATerm term_y_51;
ATerm term_x_51;
ATerm term_u_51;
ATerm term_s_51;
ATerm term_p_51;
ATerm term_m_51;
ATerm term_w_50;
ATerm term_m_50;
ATerm term_l_50;
ATerm term_i_50;
ATerm term_v_49;
ATerm term_a_45;
ATerm term_k_44;
ATerm term_e_44;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_o_35;
ATerm term_c_35;
ATerm term_b_34;
ATerm term_j_16;
ATerm term_d_16;
ATerm term_c_14;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_k_13;
ATerm term_i_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(50);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(sym__2, term_f_52, term_k_44);
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_44);
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(sym__2, term_l_52, term_x_51);
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(sym__2, term_a_53, term_b_53);
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(sym__2, term_d_55, term_x_51);
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(sym__2, term_h_55, term_x_51);
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(sym__2, term_z_53, term_x_51);
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_55));
  term_x_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_56));
  term_l_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_57));
  term_f_57 = (ATerm) ATmakeAppl(sym__2, term_w_50, term_x_51);
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm AddSDef_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm term_size_0_0 (ATerm t);
ATerm Seq_2_0 (ATerm j_84 (ATerm), ATerm k_84 (ATerm), ATerm t);
static ATerm g_1 (ATerm t);
ATerm body_to_inline_0_0 (ATerm t);
ATerm inlineable_0_0 (ATerm t);
static ATerm s_6 (ATerm l_35, ATerm m_35, ATerm t);
ATerm bottomup_1_0 (ATerm i_102 (ATerm), ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
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
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm spaste_1_0 (ATerm l_101 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_12 (ATerm l_25, ATerm k_25, ATerm t);
ATerm SVar_1_0 (ATerm u_83 (ATerm), ATerm t);
static ATerm z_12 (ATerm o_117 (ATerm), ATerm p_117 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm a_43, ATerm z_42, ATerm y_42, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm a_13 (ATerm i_117 (ATerm), ATerm j_117 (ATerm (ATerm), ATerm), ATerm s_42, ATerm v_42, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm w_117 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm d_117 (ATerm (ATerm), ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm g_117 (ATerm (ATerm), ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm tpaste_1_0 (ATerm h_101 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm tvars_0_0 (ATerm t);
static ATerm t_12 (ATerm z_112 (ATerm), ATerm v_39, ATerm u_39, ATerm t);
static ATerm u_12 (ATerm c_113 (ATerm), ATerm d_113 (ATerm), ATerm z_39, ATerm y_39, ATerm t);
static ATerm v_12 (ATerm u_112 (ATerm), ATerm t_39, ATerm s_39, ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm x_12 (ATerm b_601, ATerm g_601, ATerm u_58, ATerm t);
ATerm while_not_2_0 (ATerm t_108 (ATerm), ATerm u_108 (ATerm), ATerm t);
ATerm for_3_0 (ATerm w_108 (ATerm), ATerm x_108 (ATerm), ATerm y_108 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm n_107 (ATerm z_105, ATerm a_106, ATerm b_106, ATerm t);
static ATerm o_6 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm free_vars_3_0 (ATerm g_119 (ATerm), ATerm h_119 (ATerm), ATerm i_119 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm e_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm l_80 (ATerm), ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
ATerm InlineCall_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm p_115 (ATerm), ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm t);
static ATerm d_8 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm occurrences_1_0 (ATerm g_113 (ATerm), ATerm t);
static ATerm f_13 (ATerm m_100 (ATerm), ATerm o_24, ATerm n_24, ATerm t);
static ATerm h_13 (ATerm c_110 (ATerm), ATerm l_34, ATerm j_34, ATerm t);
static ATerm j_13 (ATerm d_35, ATerm e_35, ATerm t);
ATerm end_scope_1_0 (ATerm z_109 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm y_109 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm t);
static ATerm t_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm y_8 (ATerm t);
ATerm inline_sdef_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm h_102 (ATerm), ATerm t);
static ATerm f_9 (ATerm t);
static ATerm m_13 (ATerm s_71, ATerm r_71, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm l_103 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm c_111 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm l_127 (ATerm d_127, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm d_10 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm j_102 (ATerm), ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
ATerm inline_sdefs_0_0 (ATerm t);
static ATerm r_14 (ATerm c_50, ATerm d_50, ATerm t);
static ATerm s_14 (ATerm t_31, ATerm u_31, ATerm t);
static ATerm u_14 (ATerm r_109 (ATerm), ATerm t_225, ATerm x_31, ATerm t);
static ATerm t_14 (ATerm p_31, ATerm q_31, ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
ATerm output_1_0 (ATerm a_128 (ATerm), ATerm t);
static ATerm j_136 (ATerm d_136, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm v_14 (ATerm v_31, ATerm t);
static ATerm w_14 (ATerm e_50, ATerm f_50, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm u_137 (ATerm t_136, ATerm t);
static ATerm v_137 (ATerm x_136, ATerm y_136, ATerm z_136, ATerm t);
static ATerm w_137 (ATerm h_137, ATerm i_137, ATerm j_137, ATerm t);
static ATerm x_14 (ATerm t);
static ATerm o_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm b_128 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm g_15 (ATerm s_52, ATerm t_52, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm e_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm e_15 (ATerm v_34, ATerm y_34, ATerm u_34, ATerm t);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm j_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm z_14 (ATerm x_32, ATerm y_32, ATerm t);
ATerm foldr_2_0 (ATerm n_115 (ATerm), ATerm o_115 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm g_125 (ATerm), ATerm t);
static ATerm p_11 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm q_11 (ATerm t);
ATerm need_help_1_0 (ATerm r_127 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm s_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm v_11 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm w_110 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_15 (ATerm w_48, ATerm x_48, ATerm t);
ATerm debug_1_0 (ATerm p_109 (ATerm), ATerm t);
ATerm map_1_0 (ATerm m_110 (ATerm), ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm d_15 (ATerm b_37, ATerm c_37, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm u_129 (ATerm), ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
ATerm parse_options_1_0 (ATerm t_129 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm t_127 (ATerm), ATerm u_127 (ATerm), ATerm v_127 (ATerm), ATerm w_127 (ATerm), ATerm t);
static ATerm w_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm g_13 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_i_13;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_k_13;
  return(t);
}
ATerm AddSDef_0_0 (ATerm t)
{
  ATerm o_0 = NULL,p_0 = NULL,r_0 = NULL,s_0 = NULL,t_0 = NULL;
  o_0 = t;
  {
    ATerm l_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDefT_4))
          {
            p_0 = ATgetArgument(t, 0);
            {
              ATerm o_13 = ATgetArgument(t, 1);
            }
            {
              ATerm p_13 = ATgetArgument(t, 2);
            }
            {
              ATerm q_13 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(n_13);
        {
          ATerm x_0 = NULL,y_0 = NULL,a_1 = NULL,d_1 = NULL;
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_0), (ATerm)ATempty, (ATerm) ATempty);
          a_1 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_13, o_0);
          d_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_0), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_r_13, o_0));
          t = h_13(u_0, a_1, d_1, t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_0), (ATerm)ATempty, (ATerm) ATempty);
          x_0 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_s_13, o_0);
          y_0 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_0), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_s_13, o_0));
          t = h_13(v_0, x_0, y_0, t);
          t = o_0;
        }
      }
    else
      {
        t = l_13;
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
  t = term_t_13;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm c_1 = NULL,o_1 = NULL;
  if(match_cons(t, sym__2))
    {
      c_1 = ATgetArgument(t, 0);
      o_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_14(c_1, o_1, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_t_13;
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
  t = z_14(z_1, a_2, t);
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_0 = NULL,m_0 = NULL;
      m_0 = t;
      t = SSL_explode_term(m_0);
      if(match_cons(t, sym__2))
        {
          ATerm w_13 = ATgetArgument(t, 0);
          a_0 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_0;
      t = foldr_3_0(w_0, z_0, term_size_0_0, t);
      LocalPopChoice(v_13);
    }
  else
    {
      t = u_13;
      {
        static ATerm m_1 (ATerm t)
        {
          ATerm s_1 = NULL,v_1 = NULL;
          v_1 = t;
          t = SSL_explode_term(v_1);
          if(match_cons(t, sym__2))
            {
              ATerm x_13 = ATgetArgument(t, 0);
              s_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_1;
          t = foldr_3_0(e_1, f_1, m_1, t);
          return(t);
        }
        t = m_1(t);
      }
    }
  return(t);
}
ATerm Seq_2_0 (ATerm j_84 (ATerm), ATerm k_84 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,t_1 = NULL,u_1 = NULL,q_0 = NULL;
  u_1 = t;
  if(match_cons(t, sym_Seq_2))
    {
      p_1 = ATgetArgument(t, 0);
      q_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_1);
  n_1 = t;
  t = p_1;
  t = j_84(t);
  r_1 = t;
  t = q_1;
  t = k_84(t);
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, r_1, t_1);
  q_0 = t;
  t = SSLsetAnnotations(q_0, n_1);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL,n_2 = NULL;
  p_8 = t;
  if(match_cons(t, sym_Match_1))
    {
      o_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_8);
  n_8 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, o_8);
  n_2 = t;
  t = SSLsetAnnotations(n_2, n_8);
  return(t);
}
ATerm body_to_inline_0_0 (ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL;
  static ATerm s_12 (ATerm t)
  {
    ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
    p_12 = t;
    if(match_cons(t, sym_Id_0))
      {
        t = p_12;
      }
    else
      {
        if(match_cons(t, sym_Fail_0))
          {
            t = p_12;
          }
        else
          {
            if(match_cons(t, sym_CallT_3))
              {
                q_12 = ATgetArgument(t, 0);
                r_12 = ATgetArgument(t, 1);
                o_12 = ATgetArgument(t, 2);
                {
                  ATerm f_2 = NULL,j_2 = NULL,k_2 = NULL,t_2 = NULL,i_1 = NULL,b_1 = NULL;
                  t = SSLgetAnnotations(p_12);
                  f_2 = t;
                  t = q_12;
                  if(match_cons(t, sym_SVar_1))
                    {
                      k_2 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_12);
                  j_2 = t;
                  t = (ATerm) ATmakeAppl(sym_SVar_1, k_2);
                  b_1 = t;
                  t = SSLsetAnnotations(b_1, j_2);
                  t_2 = t;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, t_2, r_12, o_12);
                  i_1 = t;
                  t = SSLsetAnnotations(i_1, f_2);
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    q_12 = ATgetArgument(t, 0);
                    r_12 = ATgetArgument(t, 1);
                    o_12 = ATgetArgument(t, 2);
                    {
                      ATerm w_3 = NULL,c_4 = NULL,e_4 = NULL,f_4 = NULL,k_1 = NULL,j_1 = NULL;
                      t = SSLgetAnnotations(p_12);
                      w_3 = t;
                      t = q_12;
                      if(match_cons(t, sym_SVar_1))
                        {
                          e_4 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(q_12);
                      c_4 = t;
                      t = (ATerm) ATmakeAppl(sym_SVar_1, e_4);
                      j_1 = t;
                      t = SSLsetAnnotations(j_1, c_4);
                      f_4 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, f_4, r_12, o_12);
                      k_1 = t;
                      t = SSLsetAnnotations(k_1, w_3);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Build_1))
                      {
                        q_12 = ATgetArgument(t, 0);
                        {
                          ATerm t_5 = NULL,l_1 = NULL;
                          t = SSLgetAnnotations(p_12);
                          t_5 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, q_12);
                          l_1 = t;
                          t = SSLsetAnnotations(l_1, t_5);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            q_12 = ATgetArgument(t, 0);
                            {
                              ATerm a_7 = NULL,w_1 = NULL;
                              t = SSLgetAnnotations(p_12);
                              a_7 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, q_12);
                              w_1 = t;
                              t = SSLsetAnnotations(w_1, a_7);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                q_12 = ATgetArgument(t, 0);
                                r_12 = ATgetArgument(t, 1);
                                {
                                  ATerm y_13 = t;
                                  int z_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm r_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,y_1 = NULL,x_1 = NULL;
                                      t = SSLgetAnnotations(p_12);
                                      r_7 = t;
                                      t = q_12;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          v_7 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(q_12);
                                      u_7 = t;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, v_7);
                                      x_1 = t;
                                      t = SSLsetAnnotations(x_1, u_7);
                                      w_7 = t;
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_7, r_12);
                                      y_1 = t;
                                      t = SSLsetAnnotations(y_1, r_7);
                                      LocalPopChoice(z_13);
                                    }
                                  else
                                    {
                                      t = y_13;
                                      {
                                        ATerm e_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,p_2 = NULL,o_2 = NULL;
                                        t = SSLgetAnnotations(p_12);
                                        e_8 = t;
                                        t = q_12;
                                        if(match_cons(t, sym_Scope_2))
                                          {
                                            i_8 = ATgetArgument(t, 0);
                                            j_8 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = SSLgetAnnotations(q_12);
                                        h_8 = t;
                                        t = j_8;
                                        t = Seq_2_0(g_1, _id, t);
                                        k_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Scope_2, i_8, k_8);
                                        o_2 = t;
                                        t = SSLsetAnnotations(o_2, h_8);
                                        l_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, l_8, r_12);
                                        p_2 = t;
                                        t = SSLsetAnnotations(p_2, e_8);
                                      }
                                    }
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    q_12 = ATgetArgument(t, 0);
                                    r_12 = ATgetArgument(t, 1);
                                    {
                                      ATerm a_14 = t;
                                      int b_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm x_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,r_2 = NULL,q_2 = NULL;
                                          t = SSLgetAnnotations(p_12);
                                          x_8 = t;
                                          t = r_12;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              b_9 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = SSLgetAnnotations(r_12);
                                          a_9 = t;
                                          t = (ATerm) ATmakeAppl(sym_Match_1, b_9);
                                          q_2 = t;
                                          t = SSLsetAnnotations(q_2, a_9);
                                          c_9 = t;
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, q_12, c_9);
                                          r_2 = t;
                                          t = SSLsetAnnotations(r_2, x_8);
                                          LocalPopChoice(b_14);
                                        }
                                      else
                                        {
                                          t = a_14;
                                          {
                                            ATerm l_9 = NULL,u_9 = NULL,v_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,w_2 = NULL,u_2 = NULL,s_2 = NULL;
                                            t = SSLgetAnnotations(p_12);
                                            l_9 = t;
                                            t = r_12;
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                v_9 = ATgetArgument(t, 0);
                                                x_9 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(r_12);
                                            u_9 = t;
                                            t = v_9;
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                a_10 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(v_9);
                                            z_9 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, a_10);
                                            s_2 = t;
                                            t = SSLsetAnnotations(s_2, z_9);
                                            b_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, b_10, x_9);
                                            u_2 = t;
                                            t = SSLsetAnnotations(u_2, u_9);
                                            y_9 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, q_12, y_9);
                                            w_2 = t;
                                            t = SSLsetAnnotations(w_2, l_9);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Choice_2))
                                      {
                                        q_12 = ATgetArgument(t, 0);
                                        r_12 = ATgetArgument(t, 1);
                                        {
                                          ATerm s_10 = NULL,v_10 = NULL,x_10 = NULL,x_2 = NULL;
                                          t = SSLgetAnnotations(p_12);
                                          s_10 = t;
                                          t = q_12;
                                          t = s_12(t);
                                          v_10 = t;
                                          t = r_12;
                                          t = s_12(t);
                                          x_10 = t;
                                          t = (ATerm) ATmakeAppl(sym_Choice_2, v_10, x_10);
                                          x_2 = t;
                                          t = SSLsetAnnotations(x_2, s_10);
                                        }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_LChoice_2))
                                          {
                                            q_12 = ATgetArgument(t, 0);
                                            r_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm f_11 = NULL,i_11 = NULL,k_11 = NULL,z_2 = NULL;
                                              t = SSLgetAnnotations(p_12);
                                              f_11 = t;
                                              t = q_12;
                                              t = s_12(t);
                                              i_11 = t;
                                              t = r_12;
                                              t = s_12(t);
                                              k_11 = t;
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, i_11, k_11);
                                              z_2 = t;
                                              t = SSLsetAnnotations(z_2, f_11);
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_GuardedLChoice_3))
                                              {
                                                q_12 = ATgetArgument(t, 0);
                                                r_12 = ATgetArgument(t, 1);
                                                o_12 = ATgetArgument(t, 2);
                                                {
                                                  ATerm u_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,b_3 = NULL;
                                                  t = SSLgetAnnotations(p_12);
                                                  u_11 = t;
                                                  t = q_12;
                                                  t = s_12(t);
                                                  z_11 = t;
                                                  t = r_12;
                                                  t = s_12(t);
                                                  a_12 = t;
                                                  t = o_12;
                                                  t = s_12(t);
                                                  b_12 = t;
                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_11, a_12, b_12);
                                                  b_3 = t;
                                                  t = SSLsetAnnotations(b_3, u_11);
                                                }
                                              }
                                            else
                                              {
                                                ATerm h_15 = NULL,e_3 = NULL;
                                                if(match_cons(t, sym_Cong_2))
                                                  {
                                                    q_12 = ATgetArgument(t, 0);
                                                    r_12 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSLgetAnnotations(p_12);
                                                h_15 = t;
                                                t = (ATerm) ATmakeAppl(sym_Cong_2, q_12, r_12);
                                                e_3 = t;
                                                t = SSLsetAnnotations(e_3, h_15);
                                              }
                                          }
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
  t = s_12(t);
  l_2 = t;
  t = term_size_0_0(t);
  m_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_2, term_c_14);
  t = leq_0_0(t);
  t = l_2;
  return(t);
}
ATerm inlineable_0_0 (ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL,f_15 = NULL,j_15 = NULL,m_15 = NULL;
  a_15 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      b_15 = ATgetArgument(t, 0);
      f_15 = ATgetArgument(t, 1);
      j_15 = ATgetArgument(t, 2);
      m_15 = ATgetArgument(t, 3);
      {
        ATerm a_16 = NULL,b_16 = NULL,g_16 = NULL,m_4 = NULL;
        t = SSLgetAnnotations(a_15);
        b_16 = t;
        t = b_15;
        {
          ATerm d_14 = t;
          if((PushChoice() == 0))
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_14;
            }
        }
        a_16 = t;
        t = m_15;
        {
          ATerm e_14 = t;
          if((PushChoice() == 0))
            {
              static ATerm h_1 (ATerm t)
              {
                if(match_cons(t, sym_CallT_3))
                  {
                    ATerm f_14 = ATgetArgument(t, 0);
                    if(match_cons(f_14, sym_SVar_1))
                      {
                        if((a_16 != ATgetArgument(f_14, 0)))
                          {
                            _fail(ATgetArgument(f_14, 0));
                          }
                      }
                    else
                      _fail(t);
                    {
                      ATerm g_14 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm h_14 = ATgetArgument(t, 2);
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
              t = e_14;
            }
        }
        t = m_15;
        t = body_to_inline_0_0(t);
        g_16 = t;
        t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, a_16, f_15, j_15, g_16);
        m_4 = t;
        t = SSLsetAnnotations(m_4, b_16);
      }
    }
  else
    {
      ATerm s_16 = NULL,t_16 = NULL,y_16 = NULL,n_4 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          b_15 = ATgetArgument(t, 0);
          f_15 = ATgetArgument(t, 1);
          j_15 = ATgetArgument(t, 2);
          m_15 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_15);
      t_16 = t;
      t = b_15;
      {
        ATerm i_14 = t;
        if((PushChoice() == 0))
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = i_14;
          }
      }
      s_16 = t;
      t = m_15;
      {
        ATerm j_14 = t;
        if((PushChoice() == 0))
          {
            static ATerm b_2 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm k_14 = ATgetArgument(t, 0);
                  if(match_cons(k_14, sym_SVar_1))
                    {
                      if((s_16 != ATgetArgument(k_14, 0)))
                        {
                          _fail(ATgetArgument(k_14, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm l_14 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm m_14 = ATgetArgument(t, 2);
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
            t = j_14;
          }
      }
      t = m_15;
      t = body_to_inline_0_0(t);
      y_16 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, s_16, f_15, j_15, y_16);
      n_4 = t;
      t = SSLsetAnnotations(n_4, t_16);
    }
  return(t);
}
static ATerm s_6 (ATerm l_35, ATerm m_35, ATerm t)
{
  ATerm t_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_35, m_35);
  t = d_15(l_35, m_35, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_15 = ATgetFirst((ATermList) t);
      {
        ATerm n_14 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_15;
  return(t);
}
ATerm bottomup_1_0 (ATerm i_102 (ATerm), ATerm t)
{
  static ATerm c_2 (ATerm t)
  {
    t = bottomup_1_0(i_102, t);
    return(t);
  }
  t = SRTS_all(c_2, t);
  t = i_102(t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_14 = ATgetArgument(t, 0);
      if(((ATgetType(o_14) != AT_LIST) || !(ATisEmpty(o_14))))
        _fail(t);
      {
        ATerm p_14 = ATgetArgument(t, 1);
        if(((ATgetType(p_14) != AT_LIST) || !(ATisEmpty(p_14))))
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
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_14 = ATgetArgument(t, 0);
      if(((ATgetType(q_14) == AT_LIST) && !(ATisEmpty(q_14))))
        {
          c_31 = ATgetFirst((ATermList) q_14);
          d_31 = (ATerm) ATgetNext((ATermList) q_14);
        }
      else
        _fail(t);
      {
        ATerm y_14 = ATgetArgument(t, 1);
        if(((ATgetType(y_14) == AT_LIST) && !(ATisEmpty(y_14))))
          {
            e_31 = ATgetFirst((ATermList) y_14);
            f_31 = (ATerm) ATgetNext((ATermList) y_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_31, e_31), (ATerm) ATmakeAppl(sym__2, d_31, f_31));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL;
  if(match_cons(t, sym__2))
    {
      g_31 = ATgetArgument(t, 0);
      h_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_31), g_31);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm i_31 = NULL,l_31 = NULL;
  if(match_cons(t, sym__2))
    {
      i_31 = ATgetArgument(t, 0);
      l_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_31), (ATerm) ATmakeAppl(sym_Match_1, l_31));
  return(t);
}
static ATerm v_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_15 = ATgetArgument(t, 0);
      if(((ATgetType(i_15) != AT_LIST) || !(ATisEmpty(i_15))))
        _fail(t);
      {
        ATerm k_15 = ATgetArgument(t, 1);
        if(((ATgetType(k_15) != AT_LIST) || !(ATisEmpty(k_15))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_15 = ATgetArgument(t, 0);
      if(((ATgetType(l_15) == AT_LIST) && !(ATisEmpty(l_15))))
        {
          m_41 = ATgetFirst((ATermList) l_15);
          n_41 = (ATerm) ATgetNext((ATermList) l_15);
        }
      else
        _fail(t);
      {
        ATerm n_15 = ATgetArgument(t, 1);
        if(((ATgetType(n_15) == AT_LIST) && !(ATisEmpty(n_15))))
          {
            o_41 = ATgetFirst((ATermList) n_15);
            p_41 = (ATerm) ATgetNext((ATermList) n_15);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_41, o_41), (ATerm) ATmakeAppl(sym__2, n_41, p_41));
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm q_41 = NULL,s_41 = NULL;
  if(match_cons(t, sym__2))
    {
      q_41 = ATgetArgument(t, 0);
      s_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_41), q_41);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm t_41 = NULL,c_42 = NULL;
  if(match_cons(t, sym__2))
    {
      t_41 = ATgetArgument(t, 0);
      c_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_41), (ATerm) ATmakeAppl(sym_Match_1, c_42));
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm o_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm q_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(p_15);
      {
        ATerm k_60 = NULL,l_60 = NULL;
        k_60 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm r_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        l_60 = t;
        t = SSLgetAnnotations(k_60);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_15 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) s_15) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm u_15 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(u_15) != AT_LIST) || !(ATisEmpty(u_15))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = l_60;
      }
    }
  else
    {
      t = o_15;
      {
        ATerm v_15 = t;
        int w_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm x_15 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) x_15) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm y_15 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(w_15);
            _fail(t);
          }
        else
          {
            t = v_15;
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
    ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,i_22 = NULL,j_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,y_22 = NULL,h_23 = NULL,j_23 = NULL;
    j_23 = t;
    if(match_cons(t, sym_Test_1))
      {
        h_23 = ATgetArgument(t, 0);
        t = h_23;
        if(match_cons(t, sym_Id_0))
          {
            ATerm z_15 = t;
            int c_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_d_16;
                t = d_2(t);
                LocalPopChoice(c_16);
              }
            else
              {
                t = z_15;
                {
                  ATerm e_16 = t;
                  int f_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,t_23 = NULL,u_23 = NULL,b_24 = NULL,g_24 = NULL,p_24 = NULL,q_24 = NULL,t_24 = NULL,u_24 = NULL;
                      t = j_23;
                      t = new_0_0(t);
                      l_23 = t;
                      t = bottomup_1_0(d_2, t);
                      t_24 = t;
                      t = (ATerm) ATempty;
                      t = d_2(t);
                      u_24 = t;
                      t = (ATerm) ATinsert(CheckATermList(u_24), t_24);
                      t = d_2(t);
                      o_23 = t;
                      t = l_23;
                      t = bottomup_1_0(d_2, t);
                      q_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, q_24);
                      t = d_2(t);
                      p_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, p_24);
                      t = d_2(t);
                      q_23 = t;
                      t = h_23;
                      t = bottomup_1_0(d_2, t);
                      t_23 = t;
                      t = l_23;
                      t = bottomup_1_0(d_2, t);
                      g_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, g_24);
                      t = d_2(t);
                      b_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, b_24);
                      t = d_2(t);
                      u_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_23, u_23);
                      t = d_2(t);
                      r_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_23, r_23);
                      t = d_2(t);
                      p_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, o_23, p_23);
                      t = d_2(t);
                      LocalPopChoice(f_16);
                    }
                  else
                    {
                      t = e_16;
                      t = j_23;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
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
                          ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,h_25 = NULL,i_25 = NULL,m_25 = NULL,p_25 = NULL,q_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,c_26 = NULL;
                          t = j_23;
                          t = new_0_0(t);
                          c_25 = t;
                          t = bottomup_1_0(d_2, t);
                          x_25 = t;
                          t = (ATerm) ATempty;
                          t = d_2(t);
                          c_26 = t;
                          t = (ATerm) ATinsert(CheckATermList(c_26), x_25);
                          t = d_2(t);
                          d_25 = t;
                          t = c_25;
                          t = bottomup_1_0(d_2, t);
                          w_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, w_25);
                          t = d_2(t);
                          v_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, v_25);
                          t = d_2(t);
                          f_25 = t;
                          t = h_23;
                          t = bottomup_1_0(d_2, t);
                          i_25 = t;
                          t = c_25;
                          t = bottomup_1_0(d_2, t);
                          q_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, q_25);
                          t = d_2(t);
                          p_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, p_25);
                          t = d_2(t);
                          m_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_25, m_25);
                          t = d_2(t);
                          h_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_25, h_25);
                          t = d_2(t);
                          e_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, d_25, e_25);
                          t = d_2(t);
                          LocalPopChoice(l_16);
                        }
                      else
                        {
                          t = k_16;
                          t = j_23;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    p_22 = ATgetArgument(t, 0);
                    {
                      ATerm m_16 = t;
                      int n_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, p_22);
                          t = d_2(t);
                          LocalPopChoice(n_16);
                        }
                      else
                        {
                          t = m_16;
                          {
                            ATerm o_16 = t;
                            int p_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm h_26 = NULL,i_26 = NULL,n_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,g_27 = NULL,h_27 = NULL;
                                t = j_23;
                                t = new_0_0(t);
                                h_26 = t;
                                t = bottomup_1_0(d_2, t);
                                g_27 = t;
                                t = (ATerm) ATempty;
                                t = d_2(t);
                                h_27 = t;
                                t = (ATerm) ATinsert(CheckATermList(h_27), g_27);
                                t = d_2(t);
                                i_26 = t;
                                t = h_26;
                                t = bottomup_1_0(d_2, t);
                                c_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, c_27);
                                t = d_2(t);
                                b_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, b_27);
                                t = d_2(t);
                                v_26 = t;
                                t = h_23;
                                t = bottomup_1_0(d_2, t);
                                x_26 = t;
                                t = h_26;
                                t = bottomup_1_0(d_2, t);
                                a_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, a_27);
                                t = d_2(t);
                                z_26 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, z_26);
                                t = d_2(t);
                                y_26 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, x_26, y_26);
                                t = d_2(t);
                                w_26 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, v_26, w_26);
                                t = d_2(t);
                                n_26 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, i_26, n_26);
                                t = d_2(t);
                                LocalPopChoice(p_16);
                              }
                            else
                              {
                                t = o_16;
                                t = j_23;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm q_16 = t;
                    int r_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_27 = NULL,m_27 = NULL,o_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,w_27 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
                        t = j_23;
                        t = new_0_0(t);
                        k_27 = t;
                        t = bottomup_1_0(d_2, t);
                        f_28 = t;
                        t = (ATerm) ATempty;
                        t = d_2(t);
                        g_28 = t;
                        t = (ATerm) ATinsert(CheckATermList(g_28), f_28);
                        t = d_2(t);
                        m_27 = t;
                        t = k_27;
                        t = bottomup_1_0(d_2, t);
                        e_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, e_28);
                        t = d_2(t);
                        d_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, d_28);
                        t = d_2(t);
                        q_27 = t;
                        t = h_23;
                        t = bottomup_1_0(d_2, t);
                        s_27 = t;
                        t = k_27;
                        t = bottomup_1_0(d_2, t);
                        c_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, c_28);
                        t = d_2(t);
                        b_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, b_28);
                        t = d_2(t);
                        w_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, s_27, w_27);
                        t = d_2(t);
                        r_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, q_27, r_27);
                        t = d_2(t);
                        o_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, m_27, o_27);
                        t = d_2(t);
                        LocalPopChoice(r_16);
                      }
                    else
                      {
                        t = q_16;
                        t = j_23;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            h_23 = ATgetArgument(t, 0);
            t = h_23;
            if(match_cons(t, sym_Id_0))
              {
                ATerm u_16 = t;
                int v_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_j_16;
                    t = d_2(t);
                    LocalPopChoice(v_16);
                  }
                else
                  {
                    t = u_16;
                    t = j_23;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm w_16 = t;
                    int x_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_d_16;
                        t = d_2(t);
                        LocalPopChoice(x_16);
                      }
                    else
                      {
                        t = w_16;
                        t = j_23;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        p_22 = ATgetArgument(t, 0);
                        {
                          ATerm z_16 = t;
                          int a_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, p_22);
                              t = d_2(t);
                              LocalPopChoice(a_17);
                            }
                          else
                            {
                              t = z_16;
                              t = j_23;
                            }
                        }
                      }
                    else
                      {
                        t = j_23;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                h_23 = ATgetArgument(t, 0);
                y_22 = ATgetArgument(t, 1);
                t = y_22;
                if(match_cons(t, sym_Id_0))
                  {
                    t = h_23;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = y_22;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = h_23;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                p_22 = ATgetArgument(t, 0);
                                q_22 = ATgetArgument(t, 1);
                                t = h_23;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    p_22 = ATgetArgument(t, 0);
                                    q_22 = ATgetArgument(t, 1);
                                    t = h_23;
                                  }
                                else
                                  {
                                    t = h_23;
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
                        o_22 = ATgetArgument(t, 1);
                        t = j_22;
                        if(match_cons(t, sym_Match_1))
                          {
                            i_22 = ATgetArgument(t, 0);
                            t = i_22;
                            if(match_cons(t, sym_Op_2))
                              {
                                e_22 = ATgetArgument(t, 0);
                                z_21 = ATgetArgument(t, 1);
                                t = h_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = y_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm b_17 = t;
                                        int c_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_j_16;
                                            t = d_2(t);
                                            LocalPopChoice(c_17);
                                          }
                                        else
                                          {
                                            t = b_17;
                                            t = j_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            p_22 = ATgetArgument(t, 0);
                                            q_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm d_17 = t;
                                              int e_17 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm g_30 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                  t = d_2(t);
                                                  g_30 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_22, g_30);
                                                  t = d_2(t);
                                                  LocalPopChoice(e_17);
                                                }
                                              else
                                                {
                                                  t = d_17;
                                                  t = j_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                p_22 = ATgetArgument(t, 0);
                                                t = p_22;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    f_22 = ATgetArgument(t, 0);
                                                    a_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm f_17 = t;
                                                      int g_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, f_22, e_22);
                                                          {
                                                            ATerm h_17 = t;
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
                                                                t = h_17;
                                                              }
                                                          }
                                                          t = term_j_16;
                                                          t = bottomup_1_0(d_2, t);
                                                          LocalPopChoice(g_17);
                                                        }
                                                      else
                                                        {
                                                          t = f_17;
                                                          {
                                                            ATerm i_17 = t;
                                                            int k_17 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm b_31 = NULL;
                                                                t = e_22;
                                                                if((f_22 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, a_22, z_21);
                                                                t = genzip_4_0(e_2, g_2, h_2, i_2, t);
                                                                b_31 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_31), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, f_22, a_22)), o_22));
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(k_17);
                                                              }
                                                            else
                                                              {
                                                                t = i_17;
                                                                {
                                                                  ATerm l_17 = t;
                                                                  int m_17 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm s_31 = NULL;
                                                                      t = i_22;
                                                                      if((p_22 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, p_22);
                                                                      t = d_2(t);
                                                                      s_31 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_31, o_22);
                                                                      t = d_2(t);
                                                                      LocalPopChoice(m_17);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = l_17;
                                                                      t = j_23;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm n_17 = t;
                                                    int o_17 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm g_32 = NULL;
                                                        t = i_22;
                                                        if((p_22 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, p_22);
                                                        t = d_2(t);
                                                        g_32 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, g_32, o_22);
                                                        t = d_2(t);
                                                        LocalPopChoice(o_17);
                                                      }
                                                    else
                                                      {
                                                        t = n_17;
                                                        t = j_23;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    p_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm p_17 = t;
                                                      int r_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm s_32 = NULL;
                                                          t = i_22;
                                                          if((p_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, p_22);
                                                          t = d_2(t);
                                                          s_32 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, s_32, o_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(r_17);
                                                        }
                                                      else
                                                        {
                                                          t = p_17;
                                                          t = j_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        p_22 = ATgetArgument(t, 0);
                                                        q_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm s_17 = t;
                                                          int t_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm d_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                              t = d_2(t);
                                                              d_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, p_22, d_33);
                                                              t = d_2(t);
                                                              LocalPopChoice(t_17);
                                                            }
                                                          else
                                                            {
                                                              t = s_17;
                                                              t = j_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = h_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = y_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm u_17 = t;
                                        int v_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_j_16;
                                            t = d_2(t);
                                            LocalPopChoice(v_17);
                                          }
                                        else
                                          {
                                            t = u_17;
                                            t = j_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            p_22 = ATgetArgument(t, 0);
                                            q_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm w_17 = t;
                                              int x_17 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm m_33 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                  t = d_2(t);
                                                  m_33 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_22, m_33);
                                                  t = d_2(t);
                                                  LocalPopChoice(x_17);
                                                }
                                              else
                                                {
                                                  t = w_17;
                                                  t = j_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                p_22 = ATgetArgument(t, 0);
                                                {
                                                  ATerm y_17 = t;
                                                  int z_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm q_33 = NULL;
                                                      t = i_22;
                                                      if((p_22 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, p_22);
                                                      t = d_2(t);
                                                      q_33 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_33, o_22);
                                                      t = d_2(t);
                                                      LocalPopChoice(z_17);
                                                    }
                                                  else
                                                    {
                                                      t = y_17;
                                                      t = j_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    p_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm a_18 = t;
                                                      int b_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm u_33 = NULL;
                                                          t = i_22;
                                                          if((p_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, p_22);
                                                          t = d_2(t);
                                                          u_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_33, o_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(b_18);
                                                        }
                                                      else
                                                        {
                                                          t = a_18;
                                                          t = j_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        p_22 = ATgetArgument(t, 0);
                                                        q_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm c_18 = t;
                                                          int f_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                              t = d_2(t);
                                                              z_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, p_22, z_33);
                                                              t = d_2(t);
                                                              LocalPopChoice(f_18);
                                                            }
                                                          else
                                                            {
                                                              t = c_18;
                                                              t = j_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_23;
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
                                    e_22 = ATgetArgument(t, 0);
                                    t = h_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = y_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm g_18 = t;
                                            int i_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_j_16;
                                                t = d_2(t);
                                                LocalPopChoice(i_18);
                                              }
                                            else
                                              {
                                                t = g_18;
                                                t = j_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                p_22 = ATgetArgument(t, 0);
                                                q_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm j_18 = t;
                                                  int k_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm w_34 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                      t = d_2(t);
                                                      w_34 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_22, w_34);
                                                      t = d_2(t);
                                                      LocalPopChoice(k_18);
                                                    }
                                                  else
                                                    {
                                                      t = j_18;
                                                      t = j_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm l_18 = t;
                                                int n_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm o_18 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(n_18);
                                                    {
                                                      ATerm r_18 = t;
                                                      int y_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm b_35 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, i_22);
                                                          t = d_2(t);
                                                          b_35 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_35, o_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(y_18);
                                                        }
                                                      else
                                                        {
                                                          t = r_18;
                                                          t = j_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = l_18;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        p_22 = ATgetArgument(t, 0);
                                                        t = p_22;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            f_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm a_19 = t;
                                                              int f_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm i_35 = NULL,j_35 = NULL;
                                                                  t = e_22;
                                                                  if((f_22 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, f_22);
                                                                  t = d_2(t);
                                                                  j_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, j_35);
                                                                  t = d_2(t);
                                                                  i_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_35, o_22);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(f_19);
                                                                }
                                                              else
                                                                {
                                                                  t = a_19;
                                                                  t = j_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_23;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            p_22 = ATgetArgument(t, 0);
                                                            q_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm g_19 = t;
                                                              int h_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm d_36 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                                  t = d_2(t);
                                                                  d_36 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, p_22, d_36);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(h_19);
                                                                }
                                                              else
                                                                {
                                                                  t = g_19;
                                                                  t = j_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_23;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = h_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = y_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm i_19 = t;
                                            int j_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_j_16;
                                                t = d_2(t);
                                                LocalPopChoice(j_19);
                                              }
                                            else
                                              {
                                                t = i_19;
                                                t = j_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                p_22 = ATgetArgument(t, 0);
                                                q_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm k_19 = t;
                                                  int l_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm s_36 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                      t = d_2(t);
                                                      s_36 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_22, s_36);
                                                      t = d_2(t);
                                                      LocalPopChoice(l_19);
                                                    }
                                                  else
                                                    {
                                                      t = k_19;
                                                      t = j_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm m_19 = t;
                                                int n_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm o_19 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(n_19);
                                                    {
                                                      ATerm p_19 = t;
                                                      int q_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm f_37 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, i_22);
                                                          t = d_2(t);
                                                          f_37 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_37, o_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(q_19);
                                                        }
                                                      else
                                                        {
                                                          t = p_19;
                                                          t = j_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = m_19;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        p_22 = ATgetArgument(t, 0);
                                                        q_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm r_19 = t;
                                                          int s_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm x_37 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                              t = d_2(t);
                                                              x_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, p_22, x_37);
                                                              t = d_2(t);
                                                              LocalPopChoice(s_19);
                                                            }
                                                          else
                                                            {
                                                              t = r_19;
                                                              t = j_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_23;
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
                                    t = h_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = y_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm u_19 = t;
                                            int v_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_j_16;
                                                t = d_2(t);
                                                LocalPopChoice(v_19);
                                              }
                                            else
                                              {
                                                t = u_19;
                                                t = j_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                p_22 = ATgetArgument(t, 0);
                                                q_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm w_19 = t;
                                                  int z_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_38 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                      t = d_2(t);
                                                      t_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_22, t_38);
                                                      t = d_2(t);
                                                      LocalPopChoice(z_19);
                                                    }
                                                  else
                                                    {
                                                      t = w_19;
                                                      t = j_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm g_20 = t;
                                                int i_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm l_20 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(i_20);
                                                    {
                                                      ATerm m_20 = t;
                                                      int n_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm e_39 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, i_22, b_22, c_22);
                                                          t = d_2(t);
                                                          e_39 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_39, o_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(n_20);
                                                        }
                                                      else
                                                        {
                                                          t = m_20;
                                                          t = j_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = g_20;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        p_22 = ATgetArgument(t, 0);
                                                        q_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm o_20 = t;
                                                          int p_20 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm l_39 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                              t = d_2(t);
                                                              l_39 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, p_22, l_39);
                                                              t = d_2(t);
                                                              LocalPopChoice(p_20);
                                                            }
                                                          else
                                                            {
                                                              t = o_20;
                                                              t = j_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = h_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = y_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm q_20 = t;
                                            int r_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_j_16;
                                                t = d_2(t);
                                                LocalPopChoice(r_20);
                                              }
                                            else
                                              {
                                                t = q_20;
                                                t = j_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                p_22 = ATgetArgument(t, 0);
                                                q_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm s_20 = t;
                                                  int t_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm h_40 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                      t = d_2(t);
                                                      h_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_22, h_40);
                                                      t = d_2(t);
                                                      LocalPopChoice(t_20);
                                                    }
                                                  else
                                                    {
                                                      t = s_20;
                                                      t = j_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    p_22 = ATgetArgument(t, 0);
                                                    q_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm u_20 = t;
                                                      int v_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm n_40 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                          t = d_2(t);
                                                          n_40 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, p_22, n_40);
                                                          t = d_2(t);
                                                          LocalPopChoice(v_20);
                                                        }
                                                      else
                                                        {
                                                          t = u_20;
                                                          t = j_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = j_23;
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
                                t = h_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = y_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm w_20 = t;
                                        int x_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_j_16;
                                            t = d_2(t);
                                            LocalPopChoice(x_20);
                                          }
                                        else
                                          {
                                            t = w_20;
                                            t = j_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            p_22 = ATgetArgument(t, 0);
                                            q_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm y_20 = t;
                                              int z_20 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm a_41 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                  t = d_2(t);
                                                  a_41 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_22, a_41);
                                                  t = d_2(t);
                                                  LocalPopChoice(z_20);
                                                }
                                              else
                                                {
                                                  t = y_20;
                                                  t = j_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                p_22 = ATgetArgument(t, 0);
                                                t = p_22;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    f_22 = ATgetArgument(t, 0);
                                                    a_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm a_21 = t;
                                                      int b_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, f_22, i_22);
                                                          {
                                                            ATerm c_21 = t;
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
                                                                t = c_21;
                                                              }
                                                          }
                                                          t = term_j_16;
                                                          t = bottomup_1_0(d_2, t);
                                                          LocalPopChoice(b_21);
                                                        }
                                                      else
                                                        {
                                                          t = a_21;
                                                          {
                                                            ATerm d_21 = t;
                                                            int e_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm j_41 = NULL;
                                                                t = i_22;
                                                                if((f_22 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, a_22, b_22);
                                                                t = genzip_4_0(v_2, y_2, a_3, c_3, t);
                                                                j_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_41), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, f_22, a_22)));
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(e_21);
                                                              }
                                                            else
                                                              {
                                                                t = d_21;
                                                                {
                                                                  ATerm f_21 = t;
                                                                  int g_21 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = j_22;
                                                                      if((p_22 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, p_22);
                                                                      t = d_2(t);
                                                                      LocalPopChoice(g_21);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = f_21;
                                                                      t = j_23;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm h_21 = t;
                                                    int i_21 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = j_22;
                                                        if((p_22 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, p_22);
                                                        t = d_2(t);
                                                        LocalPopChoice(i_21);
                                                      }
                                                    else
                                                      {
                                                        t = h_21;
                                                        t = j_23;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    p_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm k_21 = t;
                                                      int l_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = j_22;
                                                          if((p_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, p_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(l_21);
                                                        }
                                                      else
                                                        {
                                                          t = k_21;
                                                          t = j_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        p_22 = ATgetArgument(t, 0);
                                                        q_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm m_21 = t;
                                                          int n_21 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm w_43 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                              t = d_2(t);
                                                              w_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, p_22, w_43);
                                                              t = d_2(t);
                                                              LocalPopChoice(n_21);
                                                            }
                                                          else
                                                            {
                                                              t = m_21;
                                                              t = j_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = h_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = y_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm o_21 = t;
                                        int p_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_j_16;
                                            t = d_2(t);
                                            LocalPopChoice(p_21);
                                          }
                                        else
                                          {
                                            t = o_21;
                                            t = j_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            p_22 = ATgetArgument(t, 0);
                                            q_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm q_21 = t;
                                              int w_21 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm u_44 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                  t = d_2(t);
                                                  u_44 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_22, u_44);
                                                  t = d_2(t);
                                                  LocalPopChoice(w_21);
                                                }
                                              else
                                                {
                                                  t = q_21;
                                                  t = j_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                p_22 = ATgetArgument(t, 0);
                                                {
                                                  ATerm h_22 = t;
                                                  int t_22 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = j_22;
                                                      if((p_22 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, p_22);
                                                      t = d_2(t);
                                                      LocalPopChoice(t_22);
                                                    }
                                                  else
                                                    {
                                                      t = h_22;
                                                      t = j_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    p_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm v_22 = t;
                                                      int z_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = j_22;
                                                          if((p_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, p_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(z_22);
                                                        }
                                                      else
                                                        {
                                                          t = v_22;
                                                          t = j_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        p_22 = ATgetArgument(t, 0);
                                                        q_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm a_23 = t;
                                                          int b_23 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm o_45 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                              t = d_2(t);
                                                              o_45 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, p_22, o_45);
                                                              t = d_2(t);
                                                              LocalPopChoice(b_23);
                                                            }
                                                          else
                                                            {
                                                              t = a_23;
                                                              t = j_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_23;
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
                                    t = h_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = y_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm c_23 = t;
                                            int d_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_j_16;
                                                t = d_2(t);
                                                LocalPopChoice(d_23);
                                              }
                                            else
                                              {
                                                t = c_23;
                                                t = j_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                p_22 = ATgetArgument(t, 0);
                                                q_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm e_23 = t;
                                                  int f_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_47 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                      t = d_2(t);
                                                      e_47 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_22, e_47);
                                                      t = d_2(t);
                                                      LocalPopChoice(f_23);
                                                    }
                                                  else
                                                    {
                                                      t = e_23;
                                                      t = j_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm g_23 = t;
                                                int i_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm k_23 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(i_23);
                                                    {
                                                      ATerm m_23 = t;
                                                      int n_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, j_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(n_23);
                                                        }
                                                      else
                                                        {
                                                          t = m_23;
                                                          t = j_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = g_23;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        p_22 = ATgetArgument(t, 0);
                                                        t = p_22;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            f_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm s_23 = t;
                                                              int v_23 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm l_47 = NULL;
                                                                  t = i_22;
                                                                  if((f_22 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, f_22);
                                                                  t = d_2(t);
                                                                  l_47 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, l_47);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(v_23);
                                                                }
                                                              else
                                                                {
                                                                  t = s_23;
                                                                  t = j_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_23;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            p_22 = ATgetArgument(t, 0);
                                                            q_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm x_23 = t;
                                                              int y_23 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm y_47 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                                  t = d_2(t);
                                                                  y_47 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, p_22, y_47);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(y_23);
                                                                }
                                                              else
                                                                {
                                                                  t = x_23;
                                                                  t = j_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_23;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = h_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = y_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm z_23 = t;
                                            int a_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_j_16;
                                                t = d_2(t);
                                                LocalPopChoice(a_24);
                                              }
                                            else
                                              {
                                                t = z_23;
                                                t = j_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                p_22 = ATgetArgument(t, 0);
                                                q_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm e_24 = t;
                                                  int m_24 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm r_48 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                      t = d_2(t);
                                                      r_48 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_22, r_48);
                                                      t = d_2(t);
                                                      LocalPopChoice(m_24);
                                                    }
                                                  else
                                                    {
                                                      t = e_24;
                                                      t = j_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm s_24 = t;
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
                                                      ATerm z_24 = t;
                                                      int a_25 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, j_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(a_25);
                                                        }
                                                      else
                                                        {
                                                          t = z_24;
                                                          t = j_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = s_24;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        p_22 = ATgetArgument(t, 0);
                                                        q_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_25 = t;
                                                          int g_25 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm d_49 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                              t = d_2(t);
                                                              d_49 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, p_22, d_49);
                                                              t = d_2(t);
                                                              LocalPopChoice(g_25);
                                                            }
                                                          else
                                                            {
                                                              t = b_25;
                                                              t = j_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_23;
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
                                    o_22 = ATgetArgument(t, 1);
                                    d_22 = ATgetArgument(t, 2);
                                    t = h_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = y_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm j_25 = t;
                                            int n_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_j_16;
                                                t = d_2(t);
                                                LocalPopChoice(n_25);
                                              }
                                            else
                                              {
                                                t = j_25;
                                                t = j_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                p_22 = ATgetArgument(t, 0);
                                                q_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm o_25 = t;
                                                  int r_25 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_49 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                      t = d_2(t);
                                                      t_49 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_22, t_49);
                                                      t = d_2(t);
                                                      LocalPopChoice(r_25);
                                                    }
                                                  else
                                                    {
                                                      t = o_25;
                                                      t = j_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm s_25 = t;
                                                int t_25 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm u_25 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(t_25);
                                                    {
                                                      ATerm z_25 = t;
                                                      int a_26 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, j_22, o_22, d_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(a_26);
                                                        }
                                                      else
                                                        {
                                                          t = z_25;
                                                          t = j_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = s_25;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        p_22 = ATgetArgument(t, 0);
                                                        q_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm d_26 = t;
                                                          int e_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm v_50 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                              t = d_2(t);
                                                              v_50 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, p_22, v_50);
                                                              t = d_2(t);
                                                              LocalPopChoice(e_26);
                                                            }
                                                          else
                                                            {
                                                              t = d_26;
                                                              t = j_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_23;
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
                                        o_22 = ATgetArgument(t, 1);
                                        t = h_23;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = y_22;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm f_26 = t;
                                                int g_26 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_j_16;
                                                    t = d_2(t);
                                                    LocalPopChoice(g_26);
                                                  }
                                                else
                                                  {
                                                    t = f_26;
                                                    {
                                                      ATerm j_26 = t;
                                                      int k_26 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm t_51 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_23, o_22);
                                                          t = d_2(t);
                                                          t_51 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, j_22, t_51);
                                                          t = d_2(t);
                                                          LocalPopChoice(k_26);
                                                        }
                                                      else
                                                        {
                                                          t = j_26;
                                                          t = j_23;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    p_22 = ATgetArgument(t, 0);
                                                    q_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm l_26 = t;
                                                      int m_26 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm a_52 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                          t = d_2(t);
                                                          a_52 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_22, a_52);
                                                          t = d_2(t);
                                                          LocalPopChoice(m_26);
                                                        }
                                                      else
                                                        {
                                                          t = l_26;
                                                          {
                                                            ATerm o_26 = t;
                                                            int p_26 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm i_52 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, h_23, o_22);
                                                                t = d_2(t);
                                                                i_52 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, j_22, i_52);
                                                                t = d_2(t);
                                                                LocalPopChoice(p_26);
                                                              }
                                                            else
                                                              {
                                                                t = o_26;
                                                                t = j_23;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        p_22 = ATgetArgument(t, 0);
                                                        q_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm r_26 = t;
                                                          int s_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_52 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_23, o_22);
                                                              t = d_2(t);
                                                              r_52 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, j_22, r_52);
                                                              t = d_2(t);
                                                              LocalPopChoice(s_26);
                                                            }
                                                          else
                                                            {
                                                              t = r_26;
                                                              {
                                                                ATerm d_27 = t;
                                                                int e_27 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm y_52 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                                    t = d_2(t);
                                                                    y_52 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, p_22, y_52);
                                                                    t = d_2(t);
                                                                    LocalPopChoice(e_27);
                                                                  }
                                                                else
                                                                  {
                                                                    t = d_27;
                                                                    t = j_23;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm f_27 = t;
                                                        int i_27 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm n_53 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, h_23, o_22);
                                                            t = d_2(t);
                                                            n_53 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, j_22, n_53);
                                                            t = d_2(t);
                                                            LocalPopChoice(i_27);
                                                          }
                                                        else
                                                          {
                                                            t = f_27;
                                                            t = j_23;
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
                                            o_22 = ATgetArgument(t, 1);
                                            t = h_23;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = y_22;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm j_27 = t;
                                                    int l_27 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_j_16;
                                                        t = d_2(t);
                                                        LocalPopChoice(l_27);
                                                      }
                                                    else
                                                      {
                                                        t = j_27;
                                                        {
                                                          ATerm n_27 = t;
                                                          int p_27 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_54 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_23, o_22);
                                                              t = d_2(t);
                                                              f_54 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, j_22, f_54);
                                                              t = d_2(t);
                                                              LocalPopChoice(p_27);
                                                            }
                                                          else
                                                            {
                                                              t = n_27;
                                                              t = j_23;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        p_22 = ATgetArgument(t, 0);
                                                        q_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_27 = t;
                                                          int u_27 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm k_54 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                              t = d_2(t);
                                                              k_54 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_22, k_54);
                                                              t = d_2(t);
                                                              LocalPopChoice(u_27);
                                                            }
                                                          else
                                                            {
                                                              t = t_27;
                                                              {
                                                                ATerm x_27 = t;
                                                                int y_27 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm q_54 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, h_23, o_22);
                                                                    t = d_2(t);
                                                                    q_54 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, j_22, q_54);
                                                                    t = d_2(t);
                                                                    LocalPopChoice(y_27);
                                                                  }
                                                                else
                                                                  {
                                                                    t = x_27;
                                                                    t = j_23;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            p_22 = ATgetArgument(t, 0);
                                                            q_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm z_27 = t;
                                                              int h_28 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm b_55 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_23, o_22);
                                                                  t = d_2(t);
                                                                  b_55 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, j_22, b_55);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(h_28);
                                                                }
                                                              else
                                                                {
                                                                  t = z_27;
                                                                  {
                                                                    ATerm i_28 = t;
                                                                    int j_28 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm f_55 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                                        t = d_2(t);
                                                                        f_55 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, p_22, f_55);
                                                                        t = d_2(t);
                                                                        LocalPopChoice(j_28);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = i_28;
                                                                        t = j_23;
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
                                                                ATerm n_55 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, h_23, o_22);
                                                                t = d_2(t);
                                                                n_55 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, j_22, n_55);
                                                                t = d_2(t);
                                                                LocalPopChoice(n_28);
                                                              }
                                                            else
                                                              {
                                                                t = m_28;
                                                                t = j_23;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = h_23;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = y_22;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm o_28 = t;
                                                    int p_28 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_j_16;
                                                        t = d_2(t);
                                                        LocalPopChoice(p_28);
                                                      }
                                                    else
                                                      {
                                                        t = o_28;
                                                        t = j_23;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        p_22 = ATgetArgument(t, 0);
                                                        q_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm q_28 = t;
                                                          int r_28 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm b_56 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                              t = d_2(t);
                                                              b_56 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_22, b_56);
                                                              t = d_2(t);
                                                              LocalPopChoice(r_28);
                                                            }
                                                          else
                                                            {
                                                              t = q_28;
                                                              t = j_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            p_22 = ATgetArgument(t, 0);
                                                            q_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm s_28 = t;
                                                              int t_28 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm m_56 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, y_22);
                                                                  t = d_2(t);
                                                                  m_56 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, p_22, m_56);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(t_28);
                                                                }
                                                              else
                                                                {
                                                                  t = s_28;
                                                                  t = j_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_23;
                                                          }
                                                      }
                                                  }
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
                    h_23 = ATgetArgument(t, 0);
                    y_22 = ATgetArgument(t, 1);
                    t = y_22;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = h_23;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm u_28 = t;
                            int v_28 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_d_16;
                                t = d_2(t);
                                LocalPopChoice(v_28);
                              }
                            else
                              {
                                t = u_28;
                                t = h_23;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = y_22;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    p_22 = ATgetArgument(t, 0);
                                    q_22 = ATgetArgument(t, 1);
                                    t = h_23;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        p_22 = ATgetArgument(t, 0);
                                        t = h_23;
                                      }
                                    else
                                      {
                                        t = h_23;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = h_23;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm w_28 = t;
                            int x_28 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_d_16;
                                t = d_2(t);
                                LocalPopChoice(x_28);
                              }
                            else
                              {
                                t = w_28;
                                {
                                  ATerm y_28 = t;
                                  int z_28 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = y_22;
                                      if((h_23 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(z_28);
                                    }
                                  else
                                    {
                                      t = y_28;
                                      t = j_23;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = y_22;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    p_22 = ATgetArgument(t, 0);
                                    q_22 = ATgetArgument(t, 1);
                                    {
                                      ATerm a_29 = t;
                                      int b_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm a_60 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, q_22, y_22);
                                          t = d_2(t);
                                          a_60 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, p_22, a_60);
                                          t = d_2(t);
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
                                                t = y_22;
                                                if((h_23 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(d_29);
                                              }
                                            else
                                              {
                                                t = c_29;
                                                t = j_23;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        p_22 = ATgetArgument(t, 0);
                                        {
                                          ATerm e_29 = t;
                                          int f_29 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = y_22;
                                              if((h_23 != t))
                                                {
                                                  _fail(t);
                                                }
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
                                                    t = p_22;
                                                    t = topdown_1_0(d_3, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, p_22);
                                                    t = bottomup_1_0(d_2, t);
                                                    LocalPopChoice(h_29);
                                                  }
                                                else
                                                  {
                                                    t = g_29;
                                                    t = j_23;
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
                                            t = y_22;
                                            if((h_23 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(k_29);
                                          }
                                        else
                                          {
                                            t = j_29;
                                            t = j_23;
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
                        h_23 = ATgetArgument(t, 0);
                        y_22 = ATgetArgument(t, 1);
                        t = y_22;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = h_23;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm l_29 = t;
                                int m_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_d_16;
                                    t = d_2(t);
                                    LocalPopChoice(m_29);
                                  }
                                else
                                  {
                                    t = l_29;
                                    t = y_22;
                                  }
                              }
                            else
                              {
                                ATerm n_29 = t;
                                int o_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_d_16;
                                    t = d_2(t);
                                    LocalPopChoice(o_29);
                                  }
                                else
                                  {
                                    t = n_29;
                                    t = j_23;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = h_23;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm p_29 = t;
                                    int q_29 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_j_16;
                                        t = d_2(t);
                                        LocalPopChoice(q_29);
                                      }
                                    else
                                      {
                                        t = p_29;
                                        t = y_22;
                                      }
                                  }
                                else
                                  {
                                    ATerm r_29 = t;
                                    int s_29 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_j_16;
                                        t = d_2(t);
                                        LocalPopChoice(s_29);
                                      }
                                    else
                                      {
                                        t = r_29;
                                        t = j_23;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    j_22 = ATgetArgument(t, 0);
                                    o_22 = ATgetArgument(t, 1);
                                    t = h_23;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = y_22;
                                      }
                                    else
                                      {
                                        ATerm t_29 = t;
                                        int u_29 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm d_62 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, h_23, j_22);
                                            t = conc_0_0(t);
                                            d_62 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, d_62, o_22);
                                            t = bottomup_1_0(d_2, t);
                                            LocalPopChoice(u_29);
                                          }
                                        else
                                          {
                                            t = t_29;
                                            t = j_23;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = h_23;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = y_22;
                                      }
                                    else
                                      {
                                        t = j_23;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm v_29 = t;
                        int w_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm x_29 = ATgetArgument(t, 0);
                                y_22 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(w_29);
                            t = y_22;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm y_29 = t;
                                int z_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_d_16;
                                    t = d_2(t);
                                    LocalPopChoice(z_29);
                                  }
                                else
                                  {
                                    t = y_29;
                                    t = j_23;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm b_30 = t;
                                    int d_30 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_j_16;
                                        t = d_2(t);
                                        LocalPopChoice(d_30);
                                      }
                                    else
                                      {
                                        t = b_30;
                                        t = j_23;
                                      }
                                  }
                                else
                                  {
                                    t = j_23;
                                  }
                              }
                          }
                        else
                          {
                            t = v_29;
                            if(match_cons(t, sym_All_1))
                              {
                                h_23 = ATgetArgument(t, 0);
                                t = h_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm f_30 = t;
                                    int i_30 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_d_16;
                                        t = d_2(t);
                                        LocalPopChoice(i_30);
                                      }
                                    else
                                      {
                                        t = f_30;
                                        t = j_23;
                                      }
                                  }
                                else
                                  {
                                    t = j_23;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    h_23 = ATgetArgument(t, 0);
                                    t = h_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm j_30 = t;
                                        int k_30 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_d_16;
                                            t = d_2(t);
                                            LocalPopChoice(k_30);
                                          }
                                        else
                                          {
                                            t = j_30;
                                            {
                                              ATerm l_30 = t;
                                              int m_30 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL;
                                                  t = j_23;
                                                  t = new_0_0(t);
                                                  u_62 = t;
                                                  t = bottomup_1_0(d_2, t);
                                                  m_63 = t;
                                                  t = (ATerm) ATempty;
                                                  t = d_2(t);
                                                  n_63 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(n_63), m_63);
                                                  t = d_2(t);
                                                  v_62 = t;
                                                  t = u_62;
                                                  t = bottomup_1_0(d_2, t);
                                                  l_63 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, l_63);
                                                  t = d_2(t);
                                                  f_63 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, f_63);
                                                  t = d_2(t);
                                                  x_62 = t;
                                                  t = h_23;
                                                  t = bottomup_1_0(d_2, t);
                                                  b_63 = t;
                                                  t = u_62;
                                                  t = bottomup_1_0(d_2, t);
                                                  e_63 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, e_63);
                                                  t = d_2(t);
                                                  d_63 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, d_63);
                                                  t = d_2(t);
                                                  c_63 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_63, c_63);
                                                  t = d_2(t);
                                                  y_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_62, y_62);
                                                  t = d_2(t);
                                                  w_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, v_62, w_62);
                                                  t = d_2(t);
                                                  LocalPopChoice(m_30);
                                                }
                                              else
                                                {
                                                  t = l_30;
                                                  t = j_23;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm n_30 = t;
                                            int o_30 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_j_16;
                                                t = d_2(t);
                                                LocalPopChoice(o_30);
                                              }
                                            else
                                              {
                                                t = n_30;
                                                {
                                                  ATerm p_30 = t;
                                                  int q_30 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL,w_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL;
                                                      t = j_23;
                                                      t = new_0_0(t);
                                                      s_63 = t;
                                                      t = bottomup_1_0(d_2, t);
                                                      j_64 = t;
                                                      t = (ATerm) ATempty;
                                                      t = d_2(t);
                                                      k_64 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(k_64), j_64);
                                                      t = d_2(t);
                                                      t_63 = t;
                                                      t = s_63;
                                                      t = bottomup_1_0(d_2, t);
                                                      i_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, i_64);
                                                      t = d_2(t);
                                                      h_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, h_64);
                                                      t = d_2(t);
                                                      w_63 = t;
                                                      t = h_23;
                                                      t = bottomup_1_0(d_2, t);
                                                      z_63 = t;
                                                      t = s_63;
                                                      t = bottomup_1_0(d_2, t);
                                                      g_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, g_64);
                                                      t = d_2(t);
                                                      b_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, b_64);
                                                      t = d_2(t);
                                                      a_64 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_63, a_64);
                                                      t = d_2(t);
                                                      y_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_63, y_63);
                                                      t = d_2(t);
                                                      u_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, t_63, u_63);
                                                      t = d_2(t);
                                                      LocalPopChoice(q_30);
                                                    }
                                                  else
                                                    {
                                                      t = p_30;
                                                      t = j_23;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                p_22 = ATgetArgument(t, 0);
                                                q_22 = ATgetArgument(t, 1);
                                                t = q_22;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    s_21 = ATgetArgument(t, 0);
                                                    u_21 = ATgetArgument(t, 1);
                                                    t = s_21;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        t_21 = ATgetArgument(t, 0);
                                                        t = p_22;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            f_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm r_30 = t;
                                                              int s_30 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm r_64 = NULL,e_65 = NULL,q_65 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, t_21);
                                                                  t = d_2(t);
                                                                  q_65 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_65, u_21);
                                                                  t = d_2(t);
                                                                  e_65 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_22, e_65);
                                                                  t = d_2(t);
                                                                  r_64 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, r_64);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(s_30);
                                                                }
                                                              else
                                                                {
                                                                  t = r_30;
                                                                  {
                                                                    ATerm t_30 = t;
                                                                    int u_30 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm y_65 = NULL,z_65 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL,g_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,q_66 = NULL;
                                                                        t = j_23;
                                                                        t = new_0_0(t);
                                                                        y_65 = t;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        m_66 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = d_2(t);
                                                                        q_66 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(q_66), m_66);
                                                                        t = d_2(t);
                                                                        z_65 = t;
                                                                        t = y_65;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        l_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, l_66);
                                                                        t = d_2(t);
                                                                        k_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, k_66);
                                                                        t = d_2(t);
                                                                        c_66 = t;
                                                                        t = h_23;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        e_66 = t;
                                                                        t = y_65;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        j_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, j_66);
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
                                                                        b_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, z_65, b_66);
                                                                        t = d_2(t);
                                                                        LocalPopChoice(u_30);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_30;
                                                                        t = j_23;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm v_30 = t;
                                                            int x_30 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL;
                                                                t = j_23;
                                                                t = new_0_0(t);
                                                                x_66 = t;
                                                                t = bottomup_1_0(d_2, t);
                                                                p_67 = t;
                                                                t = (ATerm) ATempty;
                                                                t = d_2(t);
                                                                q_67 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(q_67), p_67);
                                                                t = d_2(t);
                                                                y_66 = t;
                                                                t = x_66;
                                                                t = bottomup_1_0(d_2, t);
                                                                o_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, o_67);
                                                                t = d_2(t);
                                                                i_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, i_67);
                                                                t = d_2(t);
                                                                a_67 = t;
                                                                t = h_23;
                                                                t = bottomup_1_0(d_2, t);
                                                                c_67 = t;
                                                                t = x_66;
                                                                t = bottomup_1_0(d_2, t);
                                                                h_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, h_67);
                                                                t = d_2(t);
                                                                g_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, g_67);
                                                                t = d_2(t);
                                                                f_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, c_67, f_67);
                                                                t = d_2(t);
                                                                b_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, a_67, b_67);
                                                                t = d_2(t);
                                                                z_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, y_66, z_66);
                                                                t = d_2(t);
                                                                LocalPopChoice(x_30);
                                                              }
                                                            else
                                                              {
                                                                t = v_30;
                                                                t = j_23;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = p_22;
                                                        {
                                                          ATerm y_30 = t;
                                                          int j_31 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm v_67 = NULL,b_68 = NULL,c_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,t_68 = NULL,w_68 = NULL;
                                                              t = j_23;
                                                              t = new_0_0(t);
                                                              v_67 = t;
                                                              t = bottomup_1_0(d_2, t);
                                                              t_68 = t;
                                                              t = (ATerm) ATempty;
                                                              t = d_2(t);
                                                              w_68 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(w_68), t_68);
                                                              t = d_2(t);
                                                              b_68 = t;
                                                              t = v_67;
                                                              t = bottomup_1_0(d_2, t);
                                                              r_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, r_68);
                                                              t = d_2(t);
                                                              q_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, q_68);
                                                              t = d_2(t);
                                                              f_68 = t;
                                                              t = h_23;
                                                              t = bottomup_1_0(d_2, t);
                                                              h_68 = t;
                                                              t = v_67;
                                                              t = bottomup_1_0(d_2, t);
                                                              p_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, p_68);
                                                              t = d_2(t);
                                                              o_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, o_68);
                                                              t = d_2(t);
                                                              n_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_68, n_68);
                                                              t = d_2(t);
                                                              g_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_68, g_68);
                                                              t = d_2(t);
                                                              c_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, b_68, c_68);
                                                              t = d_2(t);
                                                              LocalPopChoice(j_31);
                                                            }
                                                          else
                                                            {
                                                              t = y_30;
                                                              t = j_23;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = p_22;
                                                    {
                                                      ATerm k_31 = t;
                                                      int m_31 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL,g_69 = NULL,h_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL;
                                                          t = j_23;
                                                          t = new_0_0(t);
                                                          z_68 = t;
                                                          t = bottomup_1_0(d_2, t);
                                                          n_69 = t;
                                                          t = (ATerm) ATempty;
                                                          t = d_2(t);
                                                          o_69 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(o_69), n_69);
                                                          t = d_2(t);
                                                          a_69 = t;
                                                          t = z_68;
                                                          t = bottomup_1_0(d_2, t);
                                                          m_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, m_69);
                                                          t = d_2(t);
                                                          l_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, l_69);
                                                          t = d_2(t);
                                                          c_69 = t;
                                                          t = h_23;
                                                          t = bottomup_1_0(d_2, t);
                                                          g_69 = t;
                                                          t = z_68;
                                                          t = bottomup_1_0(d_2, t);
                                                          k_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, k_69);
                                                          t = d_2(t);
                                                          j_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, j_69);
                                                          t = d_2(t);
                                                          h_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_69, h_69);
                                                          t = d_2(t);
                                                          d_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_69, d_69);
                                                          t = d_2(t);
                                                          b_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, a_69, b_69);
                                                          t = d_2(t);
                                                          LocalPopChoice(m_31);
                                                        }
                                                      else
                                                        {
                                                          t = k_31;
                                                          t = j_23;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    p_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm n_31 = t;
                                                      int o_31 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, p_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(o_31);
                                                        }
                                                      else
                                                        {
                                                          t = n_31;
                                                          {
                                                            ATerm r_31 = t;
                                                            int w_31 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm e_70 = NULL,f_70 = NULL,j_70 = NULL,k_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL,t_70 = NULL,v_70 = NULL,w_70 = NULL;
                                                                t = j_23;
                                                                t = new_0_0(t);
                                                                e_70 = t;
                                                                t = bottomup_1_0(d_2, t);
                                                                v_70 = t;
                                                                t = (ATerm) ATempty;
                                                                t = d_2(t);
                                                                w_70 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(w_70), v_70);
                                                                t = d_2(t);
                                                                f_70 = t;
                                                                t = e_70;
                                                                t = bottomup_1_0(d_2, t);
                                                                t_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, t_70);
                                                                t = d_2(t);
                                                                r_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, r_70);
                                                                t = d_2(t);
                                                                k_70 = t;
                                                                t = h_23;
                                                                t = bottomup_1_0(d_2, t);
                                                                n_70 = t;
                                                                t = e_70;
                                                                t = bottomup_1_0(d_2, t);
                                                                q_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, q_70);
                                                                t = d_2(t);
                                                                p_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, p_70);
                                                                t = d_2(t);
                                                                o_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, n_70, o_70);
                                                                t = d_2(t);
                                                                m_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, k_70, m_70);
                                                                t = d_2(t);
                                                                j_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, f_70, j_70);
                                                                t = d_2(t);
                                                                LocalPopChoice(w_31);
                                                              }
                                                            else
                                                              {
                                                                t = r_31;
                                                                t = j_23;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm y_31 = t;
                                                    int z_31 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm z_70 = NULL,b_71 = NULL,e_71 = NULL,g_71 = NULL,h_71 = NULL,l_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL,t_71 = NULL,u_71 = NULL,y_71 = NULL,a_72 = NULL;
                                                        t = j_23;
                                                        t = new_0_0(t);
                                                        z_70 = t;
                                                        t = bottomup_1_0(d_2, t);
                                                        y_71 = t;
                                                        t = (ATerm) ATempty;
                                                        t = d_2(t);
                                                        a_72 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(a_72), y_71);
                                                        t = d_2(t);
                                                        b_71 = t;
                                                        t = z_70;
                                                        t = bottomup_1_0(d_2, t);
                                                        u_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, u_71);
                                                        t = d_2(t);
                                                        t_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, t_71);
                                                        t = d_2(t);
                                                        g_71 = t;
                                                        t = h_23;
                                                        t = bottomup_1_0(d_2, t);
                                                        l_71 = t;
                                                        t = z_70;
                                                        t = bottomup_1_0(d_2, t);
                                                        q_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, q_71);
                                                        t = d_2(t);
                                                        p_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, p_71);
                                                        t = d_2(t);
                                                        o_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, l_71, o_71);
                                                        t = d_2(t);
                                                        h_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, g_71, h_71);
                                                        t = d_2(t);
                                                        e_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, b_71, e_71);
                                                        t = d_2(t);
                                                        LocalPopChoice(z_31);
                                                      }
                                                    else
                                                      {
                                                        t = y_31;
                                                        t = j_23;
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
                                        h_23 = ATgetArgument(t, 0);
                                        t = h_23;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm a_32 = t;
                                            int b_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_d_16;
                                                t = d_2(t);
                                                LocalPopChoice(b_32);
                                              }
                                            else
                                              {
                                                t = a_32;
                                                t = j_23;
                                              }
                                          }
                                        else
                                          {
                                            t = j_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            h_23 = ATgetArgument(t, 0);
                                            t = h_23;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm c_32 = t;
                                                int d_32 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_j_16;
                                                    t = d_2(t);
                                                    LocalPopChoice(d_32);
                                                  }
                                                else
                                                  {
                                                    t = c_32;
                                                    t = j_23;
                                                  }
                                              }
                                            else
                                              {
                                                t = j_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                h_23 = ATgetArgument(t, 0);
                                                t = h_23;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm e_32 = t;
                                                    int h_32 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_j_16;
                                                        t = d_2(t);
                                                        LocalPopChoice(h_32);
                                                      }
                                                    else
                                                      {
                                                        t = e_32;
                                                        t = j_23;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = j_23;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm i_32 = t;
                                                int j_32 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm k_32 = ATgetArgument(t, 0);
                                                        y_22 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(j_32);
                                                    t = y_22;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm l_32 = t;
                                                        int m_32 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_j_16;
                                                            t = d_2(t);
                                                            LocalPopChoice(m_32);
                                                          }
                                                        else
                                                          {
                                                            t = l_32;
                                                            t = j_23;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = j_23;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = i_32;
                                                    {
                                                      ATerm n_32 = t;
                                                      int q_32 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm r_32 = ATgetArgument(t, 0);
                                                              y_22 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(q_32);
                                                          {
                                                            ATerm t_32 = t;
                                                            int v_32 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = y_22;
                                                                t = fetch_1_0(f_3, t);
                                                                t = term_j_16;
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(v_32);
                                                              }
                                                            else
                                                              {
                                                                t = t_32;
                                                                t = j_23;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = n_32;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              h_23 = ATgetArgument(t, 0);
                                                              y_22 = ATgetArgument(t, 1);
                                                              t = y_22;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = h_23;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = y_22;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          p_22 = ATgetArgument(t, 0);
                                                                          q_22 = ATgetArgument(t, 1);
                                                                          t = h_23;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = h_23;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = h_23;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = y_22;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          p_22 = ATgetArgument(t, 0);
                                                                          q_22 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm w_32 = t;
                                                                            int z_32 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm m_74 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, q_22, y_22);
                                                                                t = d_2(t);
                                                                                m_74 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, p_22, m_74);
                                                                                t = d_2(t);
                                                                                LocalPopChoice(z_32);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = w_32;
                                                                                {
                                                                                  ATerm a_33 = t;
                                                                                  int b_33 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = y_22;
                                                                                      if((h_23 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(b_33);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = a_33;
                                                                                      t = j_23;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm c_33 = t;
                                                                          int e_33 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = y_22;
                                                                              if((h_23 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(e_33);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = c_33;
                                                                              t = j_23;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  h_23 = ATgetArgument(t, 0);
                                                                  y_22 = ATgetArgument(t, 1);
                                                                  r_21 = ATgetArgument(t, 2);
                                                                  t = r_21;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm f_33 = t;
                                                                      int g_33 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_23, y_22);
                                                                          t = d_2(t);
                                                                          LocalPopChoice(g_33);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = f_33;
                                                                          t = j_23;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = j_23;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      h_23 = ATgetArgument(t, 0);
                                                                      y_22 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm h_33 = t;
                                                                        int i_33 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, h_23, y_22);
                                                                            t = d_2(t);
                                                                            LocalPopChoice(i_33);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = h_33;
                                                                            t = j_23;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          h_23 = ATgetArgument(t, 0);
                                                                          t = h_23;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              p_22 = ATgetFirst((ATermList) t);
                                                                              q_22 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm j_33 = t;
                                                                                int k_33 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm a_75 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, q_22);
                                                                                    t = d_2(t);
                                                                                    a_75 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, p_22, a_75);
                                                                                    t = d_2(t);
                                                                                    LocalPopChoice(k_33);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = j_33;
                                                                                    t = j_23;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm l_33 = t;
                                                                                  int n_33 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_j_16;
                                                                                      t = d_2(t);
                                                                                      LocalPopChoice(n_33);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = l_33;
                                                                                      t = j_23;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = j_23;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              h_23 = ATgetArgument(t, 0);
                                                                              t = h_23;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  p_22 = ATgetFirst((ATermList) t);
                                                                                  q_22 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm o_33 = t;
                                                                                    int p_33 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm g_75 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, q_22);
                                                                                        t = d_2(t);
                                                                                        g_75 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, p_22, g_75);
                                                                                        t = d_2(t);
                                                                                        LocalPopChoice(p_33);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = o_33;
                                                                                        t = j_23;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm r_33 = t;
                                                                                      int s_33 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_j_16;
                                                                                          t = d_2(t);
                                                                                          LocalPopChoice(s_33);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = r_33;
                                                                                          t = j_23;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = j_23;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  h_23 = ATgetArgument(t, 0);
                                                                                  t = h_23;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      p_22 = ATgetFirst((ATermList) t);
                                                                                      q_22 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm t_33 = t;
                                                                                        int v_33 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm s_75 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, q_22);
                                                                                            t = d_2(t);
                                                                                            s_75 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, p_22, s_75);
                                                                                            t = d_2(t);
                                                                                            LocalPopChoice(v_33);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = t_33;
                                                                                            t = j_23;
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
                                                                                              t = term_d_16;
                                                                                              t = d_2(t);
                                                                                              LocalPopChoice(x_33);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = w_33;
                                                                                              t = j_23;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = j_23;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      h_23 = ATgetArgument(t, 0);
                                                                                      y_22 = ATgetArgument(t, 1);
                                                                                      r_21 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm y_33 = t;
                                                                                        int a_34 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL,l_76 = NULL;
                                                                                            t = term_b_34;
                                                                                            t = bottomup_1_0(d_2, t);
                                                                                            c_76 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = d_2(t);
                                                                                            l_76 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(l_76), r_21);
                                                                                            t = d_2(t);
                                                                                            e_76 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(e_76), h_23);
                                                                                            t = d_2(t);
                                                                                            d_76 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, c_76, d_76);
                                                                                            t = d_2(t);
                                                                                            b_76 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, y_22, b_76);
                                                                                            t = d_2(t);
                                                                                            LocalPopChoice(a_34);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = y_33;
                                                                                            t = j_23;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          h_23 = ATgetArgument(t, 0);
                                                                                          y_22 = ATgetArgument(t, 1);
                                                                                          r_21 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm c_34 = t;
                                                                                            int d_34 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm q_76 = NULL,r_76 = NULL,s_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, y_22);
                                                                                                t = d_2(t);
                                                                                                r_76 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, r_21);
                                                                                                t = d_2(t);
                                                                                                w_76 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = d_2(t);
                                                                                                x_76 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(x_76), w_76);
                                                                                                t = d_2(t);
                                                                                                v_76 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(v_76), h_23);
                                                                                                t = d_2(t);
                                                                                                s_76 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(s_76), r_76);
                                                                                                t = d_2(t);
                                                                                                q_76 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, q_76);
                                                                                                t = d_2(t);
                                                                                                LocalPopChoice(d_34);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = c_34;
                                                                                                t = j_23;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              h_23 = ATgetArgument(t, 0);
                                                                                              y_22 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm e_34 = t;
                                                                                                int f_34 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm d_77 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, y_22);
                                                                                                    t = d_2(t);
                                                                                                    d_77 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, h_23, d_77);
                                                                                                    t = d_2(t);
                                                                                                    LocalPopChoice(f_34);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = e_34;
                                                                                                    t = j_23;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  h_23 = ATgetArgument(t, 0);
                                                                                                  y_22 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm g_34 = t;
                                                                                                    int h_34 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm h_77 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, h_23);
                                                                                                        t = d_2(t);
                                                                                                        h_77 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, h_77, y_22);
                                                                                                        t = d_2(t);
                                                                                                        LocalPopChoice(h_34);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = g_34;
                                                                                                        t = j_23;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      h_23 = ATgetArgument(t, 0);
                                                                                                      y_22 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm k_34 = t;
                                                                                                        int m_34 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm l_77 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, y_22);
                                                                                                            t = d_2(t);
                                                                                                            l_77 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, l_77, h_23);
                                                                                                            t = d_2(t);
                                                                                                            LocalPopChoice(m_34);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = k_34;
                                                                                                            t = j_23;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          h_23 = ATgetArgument(t, 0);
                                                                                                          y_22 = ATgetArgument(t, 1);
                                                                                                          t = y_22;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              j_22 = ATgetArgument(t, 0);
                                                                                                              o_22 = ATgetArgument(t, 1);
                                                                                                              t = h_23;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = y_22;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm o_34 = t;
                                                                                                                  int p_34 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm w_77 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, h_23, j_22);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      w_77 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, w_77, o_22);
                                                                                                                      t = bottomup_1_0(d_2, t);
                                                                                                                      LocalPopChoice(p_34);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = o_34;
                                                                                                                      t = j_23;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  j_22 = ATgetArgument(t, 0);
                                                                                                                  o_22 = ATgetArgument(t, 1);
                                                                                                                  d_22 = ATgetArgument(t, 2);
                                                                                                                  t = d_22;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = o_22;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = j_22;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              i_22 = ATgetArgument(t, 0);
                                                                                                                              t = h_23;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = y_22;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      p_22 = ATgetFirst((ATermList) t);
                                                                                                                                      q_22 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = q_22;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = p_22;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              f_22 = ATgetArgument(t, 0);
                                                                                                                                              a_22 = ATgetArgument(t, 1);
                                                                                                                                              v_21 = ATgetArgument(t, 2);
                                                                                                                                              y_21 = ATgetArgument(t, 3);
                                                                                                                                              t = v_21;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = a_22;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm q_34 = t;
                                                                                                                                                      int r_34 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = i_22;
                                                                                                                                                          if((f_22 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = y_21;
                                                                                                                                                          {
                                                                                                                                                            ATerm s_34 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm g_3 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm t_34 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(t_34, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((f_22 != ATgetArgument(t_34, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(t_34, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm x_34 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(x_34) != AT_LIST) || !(ATisEmpty(x_34))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm z_34 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(z_34) != AT_LIST) || !(ATisEmpty(z_34))))
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
                                                                                                                                                                t = s_34;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = y_21;
                                                                                                                                                          t = bottomup_1_0(d_2, t);
                                                                                                                                                          LocalPopChoice(r_34);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = q_34;
                                                                                                                                                          t = j_23;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = j_23;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = j_23;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = j_23;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = j_23;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = j_23;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = h_23;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = y_22;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = j_23;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = h_23;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = y_22;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = j_23;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = h_23;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = y_22;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = j_23;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = h_23;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = y_22;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = j_23;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              h_23 = ATgetArgument(t, 0);
                                                                                                              y_22 = ATgetArgument(t, 1);
                                                                                                              t = h_23;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = y_22;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = j_23;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = j_23;
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                  }
                                              }
                                          }
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
  ATerm g_79 = NULL,i_79 = NULL,j_79 = NULL,k_79 = NULL,d_18 = NULL,e_18 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm a_35 = ATgetArgument(t, 0);
      if(match_cons(a_35, sym_SVar_1))
        {
          j_79 = ATgetArgument(a_35, 0);
        }
      else
        _fail(t);
      g_79 = ATgetArgument(t, 1);
      i_79 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_79), (ATerm)ATempty, (ATerm) ATempty);
  d_18 = t;
  t = term_c_35;
  e_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_35, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_79), (ATerm)ATempty, (ATerm) ATempty));
  t = s_6(e_18, d_18, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm f_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_35) != ATmakeSymbol("n_0", 0, ATtrue)))
        _fail(t);
      k_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_79), g_79, i_79);
  return(t);
}
ATerm SubsArgCall1_0_0 (ATerm t)
{
  ATerm m_79 = NULL,n_79 = NULL,h_18 = NULL;
  m_79 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm g_35 = ATgetArgument(t, 0);
      if(match_cons(g_35, sym_SVar_1))
        {
          ATerm n_35 = ATgetArgument(g_35, 0);
        }
      else
        _fail(t);
      {
        ATerm h_35 = ATgetArgument(t, 1);
        if(((ATgetType(h_35) != AT_LIST) || !(ATisEmpty(h_35))))
          _fail(t);
      }
      {
        ATerm k_35 = ATgetArgument(t, 2);
        if(((ATgetType(k_35) != AT_LIST) || !(ATisEmpty(k_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_o_35;
  h_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_35, m_79);
  t = s_6(h_18, m_79, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm p_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_35) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      n_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_79;
  t = strename_0_0(t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_c_35;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_o_35;
  return(t);
}
ATerm substitute_arg_0_0 (ATerm t)
{
  ATerm e_80 = NULL,f_80 = NULL,g_80 = NULL,h_80 = NULL,i_80 = NULL,j_80 = NULL,k_80 = NULL,n_80 = NULL,o_80 = NULL,r_80 = NULL,u_80 = NULL;
  i_80 = t;
  if(match_cons(t, sym__2))
    {
      j_80 = ATgetArgument(t, 0);
      u_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_80;
  if(match_cons(t, sym_VarDec_2))
    {
      k_80 = ATgetArgument(t, 0);
      n_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_80;
  if(match_cons(t, sym_FunType_2))
    {
      o_80 = ATgetArgument(t, 0);
      {
        ATerm q_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = o_80;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_35 = ATgetFirst((ATermList) t);
      r_80 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_80;
  {
    ATerm s_35 = t;
    int t_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_35 = ATgetFirst((ATermList) t);
            ATerm v_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_35);
        {
          ATerm a_81 = NULL,c_81 = NULL;
          t = u_80;
          if(match_cons(t, sym_CallT_3))
            {
              e_80 = ATgetArgument(t, 0);
              g_80 = ATgetArgument(t, 1);
              h_80 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = e_80;
          if(match_cons(t, sym_SVar_1))
            {
              f_80 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_80;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = h_80;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_80), (ATerm)ATempty, (ATerm) ATempty);
          a_81 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_35, f_80);
          c_81 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_80), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_w_35, f_80));
          t = h_13(h_3, a_81, c_81, t);
          t = i_80;
        }
      }
    else
      {
        t = s_35;
        {
          ATerm h_81 = NULL,i_81 = NULL;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_80), (ATerm)ATempty, (ATerm) ATempty);
          h_81 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_35, u_80);
          i_81 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_80), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_x_35, u_80));
          t = h_13(i_3, h_81, i_81, t);
          t = i_80;
        }
      }
  }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_o_35;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_c_35;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_35 = ATgetArgument(t, 0);
      if(((ATgetType(z_35) != AT_LIST) || !(ATisEmpty(z_35))))
        _fail(t);
      {
        ATerm a_36 = ATgetArgument(t, 1);
        if(((ATgetType(a_36) != AT_LIST) || !(ATisEmpty(a_36))))
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
  ATerm q_81 = NULL,r_81 = NULL,s_81 = NULL,t_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_36 = ATgetArgument(t, 0);
      if(((ATgetType(b_36) == AT_LIST) && !(ATisEmpty(b_36))))
        {
          q_81 = ATgetFirst((ATermList) b_36);
          r_81 = (ATerm) ATgetNext((ATermList) b_36);
        }
      else
        _fail(t);
      {
        ATerm c_36 = ATgetArgument(t, 1);
        if(((ATgetType(c_36) == AT_LIST) && !(ATisEmpty(c_36))))
          {
            s_81 = ATgetFirst((ATermList) c_36);
            t_81 = (ATerm) ATgetNext((ATermList) c_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_81, s_81), (ATerm) ATmakeAppl(sym__2, r_81, t_81));
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm u_81 = NULL,v_81 = NULL;
  if(match_cons(t, sym__2))
    {
      u_81 = ATgetArgument(t, 0);
      v_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_81), u_81);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm e_36 = t;
  int f_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_36 = t;
      int j_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SubsArgCall1_0_0(t);
          LocalPopChoice(j_36);
        }
      else
        {
          t = g_36;
          t = SubsArgCall2_0_0(t);
        }
      LocalPopChoice(f_36);
    }
  else
    {
      t = e_36;
    }
  return(t);
}
ATerm substitute_args_0_0 (ATerm t)
{
  ATerm n_81 = NULL,o_81 = NULL,p_81 = NULL;
  static ATerm k_3 (ATerm t)
  {
    static ATerm m_3 (ATerm t)
    {
      if(match_cons(t, sym__3))
        {
          if(((n_81 != NULL) && (n_81 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            n_81 = ATgetArgument(t, 0);
          if(((o_81 != NULL) && (o_81 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            o_81 = ATgetArgument(t, 1);
          if(((p_81 != NULL) && (p_81 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            p_81 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, n_81, o_81);
      t = genzip_4_0(n_3, o_3, p_3, substitute_arg_0_0, t);
      t = p_81;
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
      ATerm k_36 = ATgetArgument(t, 0);
      if(((ATgetType(k_36) != AT_LIST) || !(ATisEmpty(k_36))))
        _fail(t);
      {
        ATerm l_36 = ATgetArgument(t, 1);
        if(((ATgetType(l_36) != AT_LIST) || !(ATisEmpty(l_36))))
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
      ATerm m_36 = ATgetArgument(t, 0);
      if(((ATgetType(m_36) == AT_LIST) && !(ATisEmpty(m_36))))
        {
          s_18 = ATgetFirst((ATermList) m_36);
          t_18 = (ATerm) ATgetNext((ATermList) m_36);
        }
      else
        _fail(t);
      {
        ATerm n_36 = ATgetArgument(t, 1);
        if(((ATgetType(n_36) == AT_LIST) && !(ATisEmpty(n_36))))
          {
            u_18 = ATgetFirst((ATermList) n_36);
            v_18 = (ATerm) ATgetNext((ATermList) n_36);
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
    ATerm o_36 = t;
    int u_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm x_36 = ATgetArgument(t, 0);
            b_19 = ATgetArgument(t, 1);
            c_19 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(u_36);
        t = (ATerm) ATmakeAppl(sym_SDef_3, e_19, b_19, c_19);
      }
    else
      {
        t = o_36;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm z_36 = ATgetArgument(t, 0);
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
      ATerm a_37 = ATgetArgument(t, 0);
      if(((ATgetType(a_37) != AT_LIST) || !(ATisEmpty(a_37))))
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
static ATerm x_3 (ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_37 = ATgetArgument(t, 0);
      if(((ATgetType(h_37) == AT_LIST) && !(ATisEmpty(h_37))))
        {
          a_20 = ATgetFirst((ATermList) h_37);
          b_20 = (ATerm) ATgetNext((ATermList) h_37);
        }
      else
        _fail(t);
      {
        ATerm i_37 = ATgetArgument(t, 1);
        if(((ATgetType(i_37) == AT_LIST) && !(ATisEmpty(i_37))))
          {
            c_20 = ATgetFirst((ATermList) i_37);
            d_20 = (ATerm) ATgetNext((ATermList) i_37);
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
static ATerm y_3 (ATerm t)
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
    ATerm j_37 = t;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, k_20);
      }
    else
      {
        t = j_37;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm m_37 = ATgetArgument(t, 0);
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
      ATerm n_37 = ATgetArgument(t, 0);
      if(((ATgetType(n_37) != AT_LIST) || !(ATisEmpty(n_37))))
        _fail(t);
      {
        ATerm o_37 = ATgetArgument(t, 1);
        if(((ATgetType(o_37) != AT_LIST) || !(ATisEmpty(o_37))))
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
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_37 = ATgetArgument(t, 0);
      if(((ATgetType(p_37) == AT_LIST) && !(ATisEmpty(p_37))))
        {
          k_22 = ATgetFirst((ATermList) p_37);
          l_22 = (ATerm) ATgetNext((ATermList) p_37);
        }
      else
        _fail(t);
      {
        ATerm q_37 = ATgetArgument(t, 1);
        if(((ATgetType(q_37) == AT_LIST) && !(ATisEmpty(q_37))))
          {
            m_22 = ATgetFirst((ATermList) q_37);
            n_22 = (ATerm) ATgetNext((ATermList) q_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_22, m_22), (ATerm) ATmakeAppl(sym__2, l_22, n_22));
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL;
  if(match_cons(t, sym__2))
    {
      r_22 = ATgetArgument(t, 0);
      s_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_22), r_22);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm u_22 = NULL,w_22 = NULL,x_22 = NULL;
  if(match_cons(t, sym__2))
    {
      u_22 = ATgetArgument(t, 0);
      x_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_22;
  {
    ATerm r_37 = t;
    int s_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm t_37 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_37);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_22);
      }
    else
      {
        t = r_37;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm u_37 = ATgetArgument(t, 0);
            w_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, x_22, w_22);
      }
  }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_37 = ATgetArgument(t, 0);
      if(((ATgetType(v_37) != AT_LIST) || !(ATisEmpty(v_37))))
        _fail(t);
      {
        ATerm w_37 = ATgetArgument(t, 1);
        if(((ATgetType(w_37) != AT_LIST) || !(ATisEmpty(w_37))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm f_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_37 = ATgetArgument(t, 0);
      if(((ATgetType(y_37) == AT_LIST) && !(ATisEmpty(y_37))))
        {
          f_24 = ATgetFirst((ATermList) y_37);
          h_24 = (ATerm) ATgetNext((ATermList) y_37);
        }
      else
        _fail(t);
      {
        ATerm a_38 = ATgetArgument(t, 1);
        if(((ATgetType(a_38) == AT_LIST) && !(ATisEmpty(a_38))))
          {
            i_24 = ATgetFirst((ATermList) a_38);
            j_24 = (ATerm) ATgetNext((ATermList) a_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_24, i_24), (ATerm) ATmakeAppl(sym__2, h_24, j_24));
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL;
  if(match_cons(t, sym__2))
    {
      k_24 = ATgetArgument(t, 0);
      l_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_24), k_24);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm r_24 = NULL,v_24 = NULL,w_24 = NULL;
  if(match_cons(t, sym__2))
    {
      r_24 = ATgetArgument(t, 0);
      w_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_24;
  {
    ATerm b_38 = t;
    int c_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm d_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_38);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, w_24);
      }
    else
      {
        t = b_38;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm e_38 = ATgetArgument(t, 0);
            v_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, w_24, v_24);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm l_101 (ATerm), ATerm t)
{
  ATerm x_88 = NULL,y_88 = NULL,z_88 = NULL,b_89 = NULL,c_89 = NULL;
  z_88 = t;
  if(match_cons(t, sym_Let_2))
    {
      b_89 = ATgetArgument(t, 0);
      c_89 = ATgetArgument(t, 1);
      {
        ATerm m_18 = NULL,p_18 = NULL,q_18 = NULL,r_4 = NULL;
        t = SSLgetAnnotations(z_88);
        m_18 = t;
        t = b_89;
        t = l_101(t);
        q_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_89, q_18);
        t = genzip_4_0(r_3, s_3, t_3, u_3, t);
        p_18 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, p_18, c_89);
        r_4 = t;
        t = SSLsetAnnotations(r_4, m_18);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          b_89 = ATgetArgument(t, 0);
          c_89 = ATgetArgument(t, 1);
          x_88 = ATgetArgument(t, 2);
          {
            ATerm t_19 = NULL,x_19 = NULL,y_19 = NULL,s_4 = NULL;
            t = SSLgetAnnotations(z_88);
            t_19 = t;
            t = c_89;
            t = l_101(t);
            y_19 = t;
            t = (ATerm) ATmakeAppl(sym__2, c_89, y_19);
            t = genzip_4_0(v_3, x_3, y_3, z_3, t);
            x_19 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, b_89, x_19, x_88);
            s_4 = t;
            t = SSLsetAnnotations(s_4, t_19);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              b_89 = ATgetArgument(t, 0);
              c_89 = ATgetArgument(t, 1);
              x_88 = ATgetArgument(t, 2);
              y_88 = ATgetArgument(t, 3);
              {
                ATerm j_21 = NULL,x_21 = NULL,g_22 = NULL,t_4 = NULL;
                t = SSLgetAnnotations(z_88);
                j_21 = t;
                t = c_89;
                t = l_101(t);
                g_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, c_89, g_22);
                t = genzip_4_0(a_4, b_4, d_4, g_4, t);
                x_21 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, b_89, x_21, x_88, y_88);
                t_4 = t;
                t = SSLsetAnnotations(t_4, j_21);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  b_89 = ATgetArgument(t, 0);
                  c_89 = ATgetArgument(t, 1);
                  x_88 = ATgetArgument(t, 2);
                  y_88 = ATgetArgument(t, 3);
                  {
                    ATerm w_23 = NULL,c_24 = NULL,d_24 = NULL,v_4 = NULL;
                    t = SSLgetAnnotations(z_88);
                    w_23 = t;
                    t = c_89;
                    t = l_101(t);
                    d_24 = t;
                    t = (ATerm) ATmakeAppl(sym__2, c_89, d_24);
                    t = genzip_4_0(h_4, i_4, j_4, k_4, t);
                    c_24 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, b_89, c_24, x_88, y_88);
                    v_4 = t;
                    t = SSLsetAnnotations(v_4, w_23);
                  }
                }
              else
                {
                  ATerm y_25 = NULL,b_26 = NULL,w_4 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      b_89 = ATgetArgument(t, 0);
                      c_89 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_88);
                  y_25 = t;
                  t = b_89;
                  t = l_101(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      b_26 = ATgetFirst((ATermList) t);
                      {
                        ATerm f_38 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, b_26, c_89);
                  w_4 = t;
                  t = SSLsetAnnotations(w_4, y_25);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm t)
{
  ATerm z_91 = NULL,c_92 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL;
  f_92 = t;
  if(match_cons(t, sym_Let_2))
    {
      g_92 = ATgetArgument(t, 0);
      h_92 = ATgetArgument(t, 1);
      {
        ATerm q_26 = NULL,t_26 = NULL,u_26 = NULL,d_5 = NULL;
        t = SSLgetAnnotations(f_92);
        q_26 = t;
        t = g_92;
        t = m_101(t);
        t_26 = t;
        t = h_92;
        t = m_101(t);
        u_26 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, t_26, u_26);
        d_5 = t;
        t = SSLsetAnnotations(d_5, q_26);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          g_92 = ATgetArgument(t, 0);
          h_92 = ATgetArgument(t, 1);
          z_91 = ATgetArgument(t, 2);
          {
            ATerm v_27 = NULL,a_28 = NULL,k_28 = NULL,l_28 = NULL,e_5 = NULL;
            t = SSLgetAnnotations(f_92);
            v_27 = t;
            t = g_92;
            t = o_101(t);
            a_28 = t;
            t = h_92;
            t = o_101(t);
            k_28 = t;
            t = z_91;
            t = m_101(t);
            l_28 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, a_28, k_28, l_28);
            e_5 = t;
            t = SSLsetAnnotations(e_5, v_27);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              g_92 = ATgetArgument(t, 0);
              h_92 = ATgetArgument(t, 1);
              z_91 = ATgetArgument(t, 2);
              c_92 = ATgetArgument(t, 3);
              {
                ATerm i_29 = NULL,a_30 = NULL,c_30 = NULL,e_30 = NULL,h_30 = NULL,f_5 = NULL;
                t = SSLgetAnnotations(f_92);
                i_29 = t;
                t = g_92;
                t = o_101(t);
                a_30 = t;
                t = h_92;
                t = o_101(t);
                c_30 = t;
                t = z_91;
                t = o_101(t);
                e_30 = t;
                t = c_92;
                t = m_101(t);
                h_30 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, a_30, c_30, e_30, h_30);
                f_5 = t;
                t = SSLsetAnnotations(f_5, i_29);
              }
            }
          else
            {
              ATerm w_30 = NULL,z_30 = NULL,a_31 = NULL,h_5 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  g_92 = ATgetArgument(t, 0);
                  h_92 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(f_92);
              w_30 = t;
              t = g_92;
              t = o_101(t);
              z_30 = t;
              t = h_92;
              t = m_101(t);
              a_31 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, z_30, a_31);
              h_5 = t;
              t = SSLsetAnnotations(h_5, w_30);
            }
        }
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm x_92 = NULL;
  ATerm g_38 = t;
  int i_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          x_92 = ATgetArgument(t, 0);
          {
            ATerm k_38 = ATgetArgument(t, 1);
          }
          {
            ATerm n_38 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_38);
      t = x_92;
    }
  else
    {
      t = g_38;
      if(match_cons(t, sym_SDefT_4))
        {
          x_92 = ATgetArgument(t, 0);
          {
            ATerm p_38 = ATgetArgument(t, 1);
          }
          {
            ATerm r_38 = ATgetArgument(t, 2);
          }
          {
            ATerm s_38 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = x_92;
    }
  return(t);
}
static ATerm n_12 (ATerm l_25, ATerm k_25, ATerm t)
{
  t = l_25;
  t = map_1_0(l_4, t);
  return(t);
}
ATerm SVar_1_0 (ATerm u_83 (ATerm), ATerm t)
{
  ATerm g_93 = NULL,l_93 = NULL,p_93 = NULL,q_93 = NULL,m_5 = NULL;
  q_93 = t;
  if(match_cons(t, sym_SVar_1))
    {
      l_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_93);
  g_93 = t;
  t = l_93;
  t = u_83(t);
  p_93 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, p_93);
  m_5 = t;
  t = SSLsetAnnotations(m_5, g_93);
  return(t);
}
static ATerm z_12 (ATerm o_117 (ATerm), ATerm p_117 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm a_43, ATerm z_42, ATerm y_42, ATerm t)
{
  static ATerm o_4 (ATerm t)
  {
    ATerm s_93 = NULL;
    s_93 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_93, y_42);
    t = o_117(t);
    return(t);
  }
  static ATerm p_4 (ATerm t)
  {
    ATerm t_93 = NULL;
    t_93 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_93, z_42);
    t = o_117(t);
    return(t);
  }
  t = a_43;
  t = p_117(o_4, p_4, _id, t);
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
      ATerm u_38 = ATgetArgument(t, 0);
      if(((ATgetType(u_38) != AT_LIST) || !(ATisEmpty(u_38))))
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
static ATerm u_4 (ATerm t)
{
  ATerm c_94 = NULL,d_94 = NULL,e_94 = NULL,f_94 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_38 = ATgetArgument(t, 0);
      if(((ATgetType(z_38) == AT_LIST) && !(ATisEmpty(z_38))))
        {
          c_94 = ATgetFirst((ATermList) z_38);
          d_94 = (ATerm) ATgetNext((ATermList) z_38);
        }
      else
        _fail(t);
      {
        ATerm a_39 = ATgetArgument(t, 1);
        if(((ATgetType(a_39) == AT_LIST) && !(ATisEmpty(a_39))))
          {
            e_94 = ATgetFirst((ATermList) a_39);
            f_94 = (ATerm) ATgetNext((ATermList) a_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_94, e_94), (ATerm) ATmakeAppl(sym__2, d_94, f_94));
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm g_94 = NULL,h_94 = NULL;
  if(match_cons(t, sym__2))
    {
      g_94 = ATgetArgument(t, 0);
      h_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_94), g_94);
  return(t);
}
static ATerm a_13 (ATerm i_117 (ATerm), ATerm j_117 (ATerm (ATerm), ATerm), ATerm s_42, ATerm v_42, ATerm t)
{
  ATerm w_93 = NULL,x_93 = NULL,y_93 = NULL,z_93 = NULL,b_94 = NULL;
  t = s_42;
  t = i_117(t);
  w_93 = t;
  t = map_1_0(new_0_0, t);
  x_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_93, x_93);
  t = genzip_4_0(q_4, u_4, x_4, _id, t);
  b_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_94, v_42);
  t = conc_0_0(t);
  y_93 = t;
  t = s_42;
  {
    static ATerm y_4 (ATerm t)
    {
      t = x_93;
      return(t);
    }
    t = j_117(y_4, t);
  }
  z_93 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_93, v_42, y_93);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm m_94 = NULL,n_94 = NULL,o_94 = NULL,p_94 = NULL,q_94 = NULL,r_94 = NULL,s_94 = NULL;
  o_94 = t;
  if(match_cons(t, sym__2))
    {
      p_94 = ATgetArgument(t, 0);
      q_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_94;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_94 = ATgetFirst((ATermList) t);
      s_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_94;
  if(match_cons(t, sym__2))
    {
      m_94 = ATgetArgument(t, 0);
      n_94 = ATgetArgument(t, 1);
      {
        ATerm b_39 = t;
        int c_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_94;
            if((p_94 != t))
              {
                _fail(t);
              }
            t = n_94;
            LocalPopChoice(c_39);
          }
        else
          {
            t = b_39;
            t = (ATerm) ATmakeAppl(sym__2, p_94, s_94);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, p_94, s_94);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm w_117 (ATerm), ATerm t)
{
  static ATerm r_95 (ATerm t)
  {
    ATerm d_39 = t;
    int f_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_117(t);
        LocalPopChoice(f_39);
      }
    else
      {
        t = d_39;
        {
          ATerm o_95 = NULL,p_95 = NULL,q_95 = NULL;
          static ATerm z_4 (ATerm t)
          {
            ATerm f_32 = NULL;
            f_32 = t;
            t = (ATerm) ATmakeAppl(sym__2, f_32, not_null(q_95));
            t = r_95(t);
            return(t);
          }
          o_95 = t;
          if(match_cons(t, sym__2))
            {
              p_95 = ATgetArgument(t, 0);
              if(((q_95 != NULL) && (q_95 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                q_95 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_95;
          t = SRTS_all(z_4, t);
        }
      }
    return(t);
  }
  t = r_95(t);
  return(t);
}
ATerm rename_4_0 (ATerm d_117 (ATerm (ATerm), ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm g_117 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm v_95 = NULL;
  static ATerm k_96 (ATerm t)
  {
    static ATerm a_5 (ATerm t)
    {
      ATerm e_96 = NULL,f_96 = NULL,g_96 = NULL;
      e_96 = t;
      if(match_cons(t, sym__2))
        {
          f_96 = ATgetArgument(t, 0);
          g_96 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm g_39 = t;
        int h_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_5 (ATerm t)
            {
              ATerm j_96 = NULL;
              j_96 = t;
              t = (ATerm) ATmakeAppl(sym__2, j_96, g_96);
              t = lookup_0_0(t);
              return(t);
            }
            t = f_96;
            t = d_117(b_5, t);
            LocalPopChoice(h_39);
          }
        else
          {
            t = g_39;
            {
              ATerm o_32 = NULL,p_32 = NULL,u_32 = NULL;
              t = e_96;
              t = a_13(e_117, g_117, f_96, g_96, t);
              if(match_cons(t, sym__3))
                {
                  o_32 = ATgetArgument(t, 0);
                  p_32 = ATgetArgument(t, 1);
                  u_32 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = z_12(k_96, f_117, o_32, p_32, u_32, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(a_5, t);
    return(t);
  }
  v_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_95, (ATerm) ATempty);
  t = k_96(t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_39 = ATgetArgument(t, 0);
      if(((ATgetType(i_39) != AT_LIST) || !(ATisEmpty(i_39))))
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
static ATerm g_5 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL,t_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_39 = ATgetArgument(t, 0);
      if(((ATgetType(n_39) == AT_LIST) && !(ATisEmpty(n_39))))
        {
          p_36 = ATgetFirst((ATermList) n_39);
          q_36 = (ATerm) ATgetNext((ATermList) n_39);
        }
      else
        _fail(t);
      {
        ATerm o_39 = ATgetArgument(t, 1);
        if(((ATgetType(o_39) == AT_LIST) && !(ATisEmpty(o_39))))
          {
            r_36 = ATgetFirst((ATermList) o_39);
            t_36 = (ATerm) ATgetNext((ATermList) o_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_36, r_36), (ATerm) ATmakeAppl(sym__2, q_36, t_36));
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL;
  if(match_cons(t, sym__2))
    {
      v_36 = ATgetArgument(t, 0);
      w_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_36), v_36);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm y_36 = NULL,e_37 = NULL,g_37 = NULL;
  if(match_cons(t, sym__2))
    {
      y_36 = ATgetArgument(t, 0);
      g_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_36;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_37);
      }
    else
      {
        t = p_39;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm w_39 = ATgetArgument(t, 0);
            e_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, g_37, e_37);
      }
  }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_39 = ATgetArgument(t, 0);
      if(((ATgetType(x_39) != AT_LIST) || !(ATisEmpty(x_39))))
        _fail(t);
      {
        ATerm a_40 = ATgetArgument(t, 1);
        if(((ATgetType(a_40) != AT_LIST) || !(ATisEmpty(a_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL,o_38 = NULL,q_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_40 = ATgetArgument(t, 0);
      if(((ATgetType(b_40) == AT_LIST) && !(ATisEmpty(b_40))))
        {
          l_38 = ATgetFirst((ATermList) b_40);
          m_38 = (ATerm) ATgetNext((ATermList) b_40);
        }
      else
        _fail(t);
      {
        ATerm c_40 = ATgetArgument(t, 1);
        if(((ATgetType(c_40) == AT_LIST) && !(ATisEmpty(c_40))))
          {
            o_38 = ATgetFirst((ATermList) c_40);
            q_38 = (ATerm) ATgetNext((ATermList) c_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_38, o_38), (ATerm) ATmakeAppl(sym__2, m_38, q_38));
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL;
  if(match_cons(t, sym__2))
    {
      v_38 = ATgetArgument(t, 0);
      w_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_38), v_38);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm y_38 = NULL,j_39 = NULL,k_39 = NULL;
  if(match_cons(t, sym__2))
    {
      y_38 = ATgetArgument(t, 0);
      k_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_38;
  {
    ATerm d_40 = t;
    int e_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm f_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_40);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, k_39);
      }
    else
      {
        t = d_40;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm g_40 = ATgetArgument(t, 0);
            j_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, k_39, j_39);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm h_101 (ATerm), ATerm t)
{
  ATerm e_99 = NULL,f_99 = NULL,g_99 = NULL,h_99 = NULL,j_99 = NULL;
  e_99 = t;
  if(match_cons(t, sym_Scope_2))
    {
      f_99 = ATgetArgument(t, 0);
      g_99 = ATgetArgument(t, 1);
      {
        ATerm i_34 = NULL,n_34 = NULL,p_5 = NULL;
        t = SSLgetAnnotations(e_99);
        i_34 = t;
        t = f_99;
        t = h_101(t);
        n_34 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, n_34, g_99);
        p_5 = t;
        t = SSLsetAnnotations(p_5, i_34);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          f_99 = ATgetArgument(t, 0);
          g_99 = ATgetArgument(t, 1);
          h_99 = ATgetArgument(t, 2);
          j_99 = ATgetArgument(t, 3);
          {
            ATerm y_35 = NULL,h_36 = NULL,i_36 = NULL,q_5 = NULL;
            t = SSLgetAnnotations(e_99);
            y_35 = t;
            t = h_99;
            t = h_101(t);
            i_36 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_99, i_36);
            t = genzip_4_0(c_5, g_5, i_5, j_5, t);
            h_36 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, f_99, g_99, h_36, j_99);
            q_5 = t;
            t = SSLsetAnnotations(q_5, y_35);
          }
        }
      else
        {
          ATerm z_37 = NULL,h_38 = NULL,j_38 = NULL,r_5 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              f_99 = ATgetArgument(t, 0);
              g_99 = ATgetArgument(t, 1);
              h_99 = ATgetArgument(t, 2);
              j_99 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_99);
          z_37 = t;
          t = h_99;
          t = h_101(t);
          j_38 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_99, j_38);
          t = genzip_4_0(k_5, l_5, n_5, o_5, t);
          h_38 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, f_99, g_99, h_38, j_99);
          r_5 = t;
          t = SSLsetAnnotations(r_5, z_37);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm t)
{
  ATerm x_101 = NULL,y_101 = NULL,z_101 = NULL,a_102 = NULL,b_102 = NULL;
  a_102 = t;
  if(match_cons(t, sym_Scope_2))
    {
      b_102 = ATgetArgument(t, 0);
      x_101 = ATgetArgument(t, 1);
      {
        ATerm t_40 = NULL,g_41 = NULL,h_41 = NULL,x_5 = NULL;
        t = SSLgetAnnotations(a_102);
        t_40 = t;
        t = b_102;
        t = k_101(t);
        g_41 = t;
        t = x_101;
        t = i_101(t);
        h_41 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, g_41, h_41);
        x_5 = t;
        t = SSLsetAnnotations(x_5, t_40);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          b_102 = ATgetArgument(t, 0);
          x_101 = ATgetArgument(t, 1);
          y_101 = ATgetArgument(t, 2);
          z_101 = ATgetArgument(t, 3);
          {
            ATerm a_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,y_5 = NULL;
            t = SSLgetAnnotations(a_102);
            a_42 = t;
            t = b_102;
            t = k_101(t);
            g_42 = t;
            t = x_101;
            t = k_101(t);
            h_42 = t;
            t = y_101;
            t = k_101(t);
            i_42 = t;
            t = z_101;
            t = i_101(t);
            j_42 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, g_42, h_42, i_42, j_42);
            y_5 = t;
            t = SSLsetAnnotations(y_5, a_42);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              b_102 = ATgetArgument(t, 0);
              x_101 = ATgetArgument(t, 1);
              y_101 = ATgetArgument(t, 2);
              z_101 = ATgetArgument(t, 3);
              {
                ATerm c_43 = NULL,h_43 = NULL,i_43 = NULL,k_43 = NULL,l_43 = NULL,z_5 = NULL;
                t = SSLgetAnnotations(a_102);
                c_43 = t;
                t = b_102;
                t = k_101(t);
                h_43 = t;
                t = x_101;
                t = k_101(t);
                i_43 = t;
                t = y_101;
                t = k_101(t);
                k_43 = t;
                t = z_101;
                t = i_101(t);
                l_43 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, h_43, i_43, k_43, l_43);
                z_5 = t;
                t = SSLsetAnnotations(z_5, c_43);
              }
            }
          else
            {
              ATerm f_44 = NULL,i_44 = NULL,a_6 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  b_102 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_102);
              f_44 = t;
              t = b_102;
              t = i_101(t);
              i_44 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, i_44);
              a_6 = t;
              t = SSLsetAnnotations(a_6, f_44);
            }
        }
    }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm m_102 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_102);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm i_40 = t;
  int j_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_40);
    }
  else
    {
      t = i_40;
      {
        ATerm o_102 = NULL,p_102 = NULL,q_102 = NULL,r_102 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            o_102 = ATgetArgument(t, 0);
            t = o_102;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                o_102 = ATgetArgument(t, 0);
                p_102 = ATgetArgument(t, 1);
                q_102 = ATgetArgument(t, 2);
                r_102 = ATgetArgument(t, 3);
                t = q_102;
                t = map_1_0(v_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    o_102 = ATgetArgument(t, 0);
                    p_102 = ATgetArgument(t, 1);
                    q_102 = ATgetArgument(t, 2);
                    r_102 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = q_102;
                t = map_1_0(w_5, t);
              }
          }
      }
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm a_103 = NULL;
  ATerm k_40 = t;
  int l_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_103 = ATgetArgument(t, 0);
          {
            ATerm m_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_40);
      t = a_103;
    }
  else
    {
      t = k_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_103 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_103;
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm j_103 = NULL;
  ATerm o_40 = t;
  int p_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_103 = ATgetArgument(t, 0);
          {
            ATerm q_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_40);
      t = j_103;
    }
  else
    {
      t = o_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_103 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_103;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(s_5, u_5, tboundin_3_0, t);
  return(t);
}
static ATerm t_12 (ATerm z_112 (ATerm), ATerm v_39, ATerm u_39, ATerm t)
{
  static ATerm d_104 (ATerm t)
  {
    ATerm y_103 = NULL,z_103 = NULL,a_104 = NULL;
    y_103 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_39;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_103 = ATgetFirst((ATermList) t);
            a_104 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_40 = t;
          int s_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_103;
              {
                static ATerm b_6 (ATerm t)
                {
                  t = u_39;
                  return(t);
                }
                t = u_12(z_112, b_6, z_103, a_104, t);
              }
              t = d_104(t);
              LocalPopChoice(s_40);
            }
          else
            {
              t = r_40;
              {
                ATerm s_44 = NULL,y_44 = NULL,g_6 = NULL;
                t = SSLgetAnnotations(y_103);
                s_44 = t;
                t = a_104;
                t = d_104(t);
                y_44 = t;
                t = (ATerm) ATinsert(CheckATermList(y_44), z_103);
                g_6 = t;
                t = SSLsetAnnotations(g_6, s_44);
              }
            }
        }
      }
    return(t);
  }
  t = v_39;
  t = d_104(t);
  return(t);
}
static ATerm u_12 (ATerm c_113 (ATerm), ATerm d_113 (ATerm), ATerm z_39, ATerm y_39, ATerm t)
{
  t = d_113(t);
  {
    static ATerm c_6 (ATerm t)
    {
      ATerm f_104 = NULL;
      f_104 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_39, f_104);
      t = c_113(t);
      return(t);
    }
    t = fetch_1_0(c_6, t);
  }
  t = y_39;
  return(t);
}
static ATerm v_12 (ATerm u_112 (ATerm), ATerm t_39, ATerm s_39, ATerm t)
{
  static ATerm w_104 (ATerm t)
  {
    ATerm r_104 = NULL,s_104 = NULL,t_104 = NULL;
    r_104 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_104;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_104 = ATgetFirst((ATermList) t);
            t_104 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_40 = t;
          int v_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_104;
              {
                static ATerm d_6 (ATerm t)
                {
                  t = s_39;
                  return(t);
                }
                t = u_12(u_112, d_6, s_104, t_104, t);
              }
              t = w_104(t);
              LocalPopChoice(v_40);
            }
          else
            {
              t = u_40;
              {
                ATerm l_45 = NULL,v_45 = NULL,i_6 = NULL;
                t = SSLgetAnnotations(r_104);
                l_45 = t;
                t = t_104;
                t = w_104(t);
                v_45 = t;
                t = (ATerm) ATinsert(CheckATermList(v_45), s_104);
                i_6 = t;
                t = SSLsetAnnotations(i_6, l_45);
              }
            }
        }
      }
    return(t);
  }
  t = t_39;
  t = w_104(t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_40 = ATgetArgument(t, 0);
      if(((ATgetType(w_40) != AT_LIST) || !(ATisEmpty(w_40))))
        _fail(t);
      {
        ATerm x_40 = ATgetArgument(t, 1);
        if(((ATgetType(x_40) != AT_LIST) || !(ATisEmpty(x_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm e_105 = NULL,f_105 = NULL,g_105 = NULL,h_105 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_40 = ATgetArgument(t, 0);
      if(((ATgetType(y_40) == AT_LIST) && !(ATisEmpty(y_40))))
        {
          e_105 = ATgetFirst((ATermList) y_40);
          f_105 = (ATerm) ATgetNext((ATermList) y_40);
        }
      else
        _fail(t);
      {
        ATerm z_40 = ATgetArgument(t, 1);
        if(((ATgetType(z_40) == AT_LIST) && !(ATisEmpty(z_40))))
          {
            g_105 = ATgetFirst((ATermList) z_40);
            h_105 = (ATerm) ATgetNext((ATermList) z_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_105, g_105), (ATerm) ATmakeAppl(sym__2, f_105, h_105));
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm i_105 = NULL,j_105 = NULL;
  if(match_cons(t, sym__2))
    {
      i_105 = ATgetArgument(t, 0);
      j_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_105), i_105);
  return(t);
}
static ATerm x_12 (ATerm b_601, ATerm g_601, ATerm u_58, ATerm t)
{
  ATerm z_104 = NULL,a_105 = NULL,b_105 = NULL,c_105 = NULL;
  t = SSL_explode_term(g_601);
  if(match_cons(t, sym__2))
    {
      z_104 = ATgetArgument(t, 0);
      b_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(b_601);
  if(match_cons(t, sym__2))
    {
      if((z_104 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      a_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_105, b_105);
  t = genzip_4_0(e_6, f_6, h_6, _id, t);
  c_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_105, u_58);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm t_108 (ATerm), ATerm u_108 (ATerm), ATerm t)
{
  static ATerm l_105 (ATerm t)
  {
    ATerm b_41 = t;
    int c_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_108(t);
        LocalPopChoice(c_41);
      }
    else
      {
        t = b_41;
        t = u_108(t);
        t = l_105(t);
      }
    return(t);
  }
  t = l_105(t);
  return(t);
}
ATerm for_3_0 (ATerm w_108 (ATerm), ATerm x_108 (ATerm), ATerm y_108 (ATerm), ATerm t)
{
  t = w_108(t);
  t = while_not_2_0(x_108, y_108, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm u_105 = NULL;
  u_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, u_105);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm v_105 = NULL,w_105 = NULL,x_105 = NULL,y_105 = NULL,l_6 = NULL;
  y_105 = t;
  if(match_cons(t, sym__2))
    {
      w_105 = ATgetArgument(t, 0);
      x_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_105);
  v_105 = t;
  t = x_105;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_105, x_105);
  l_6 = t;
  t = SSLsetAnnotations(l_6, v_105);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm y_106 = NULL,a_107 = NULL,b_107 = NULL,c_107 = NULL,d_107 = NULL;
  y_106 = t;
  if(match_cons(t, sym__2))
    {
      a_107 = ATgetArgument(t, 0);
      b_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_107;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_107 = ATgetFirst((ATermList) t);
      d_107 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_41 = t;
        int e_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_107(a_107, b_107, y_106, t);
            LocalPopChoice(e_41);
          }
        else
          {
            t = d_41;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_107), c_107), d_107);
          }
      }
    }
  else
    {
      t = n_107(a_107, b_107, y_106, t);
    }
  return(t);
}
static ATerm n_107 (ATerm z_105, ATerm a_106, ATerm b_106, ATerm t)
{
  ATerm c_106 = NULL,g_106 = NULL,m_6 = NULL,k_106 = NULL,l_106 = NULL,m_106 = NULL,n_106 = NULL;
  t = SSLgetAnnotations(b_106);
  c_106 = t;
  t = a_106;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_106 = ATgetFirst((ATermList) t);
      n_106 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_106;
  if(match_cons(t, sym__2))
    {
      l_106 = ATgetArgument(t, 0);
      m_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_41 = t;
    int i_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_106;
        if((l_106 != t))
          {
            _fail(t);
          }
        t = n_106;
        LocalPopChoice(i_41);
      }
    else
      {
        t = f_41;
        t = a_106;
        t = x_12(l_106, m_106, n_106, t);
      }
  }
  g_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_105, g_106);
  m_6 = t;
  t = SSLsetAnnotations(m_6, c_106);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm m_107 = NULL;
  if(match_cons(t, sym__2))
    {
      m_107 = ATgetArgument(t, 0);
      if((m_107 != ATgetArgument(t, 1)))
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
  ATerm k_41 = t;
  int l_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(j_6, k_6, n_6, t);
      LocalPopChoice(l_41);
    }
  else
    {
      t = k_41;
      {
        ATerm h_107 = NULL,i_107 = NULL,j_107 = NULL;
        h_107 = t;
        if(match_cons(t, sym__2))
          {
            i_107 = ATgetArgument(t, 0);
            j_107 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_107;
        t = v_12(o_6, i_107, j_107, t);
      }
    }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL;
  if(match_cons(t, sym__2))
    {
      g_46 = ATgetArgument(t, 0);
      h_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_12(x_6, g_46, h_46, t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm i_46 = NULL;
  if(match_cons(t, sym__2))
    {
      i_46 = ATgetArgument(t, 0);
      if((i_46 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL;
  if(match_cons(t, sym__2))
    {
      q_46 = ATgetArgument(t, 0);
      r_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_12(d_7, q_46, r_46, t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm s_46 = NULL;
  if(match_cons(t, sym__2))
    {
      s_46 = ATgetArgument(t, 0);
      if((s_46 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm g_119 (ATerm), ATerm h_119 (ATerm), ATerm i_119 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm i_108 (ATerm t)
  {
    ATerm r_41 = t;
    int u_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_119(t);
        LocalPopChoice(u_41);
      }
    else
      {
        t = r_41;
        {
          ATerm v_41 = t;
          int w_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_107 = NULL,q_107 = NULL,a_46 = NULL,b_46 = NULL;
              p_107 = t;
              t = h_119(t);
              q_107 = t;
              t = p_107;
              {
                static ATerm p_6 (ATerm t)
                {
                  ATerm s_107 = NULL;
                  t = i_108(t);
                  s_107 = t;
                  t = (ATerm) ATmakeAppl(sym__2, s_107, q_107);
                  t = diff_0_0(t);
                  return(t);
                }
                t = i_119(p_6, i_108, r_6, t);
              }
              b_46 = t;
              t = SSL_explode_term(b_46);
              if(match_cons(t, sym__2))
                {
                  ATerm x_41 = ATgetArgument(t, 0);
                  a_46 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = a_46;
              t = foldr_3_0(t_6, v_6, _id, t);
              LocalPopChoice(w_41);
            }
          else
            {
              t = v_41;
              {
                ATerm k_46 = NULL,l_46 = NULL;
                l_46 = t;
                t = SSL_explode_term(l_46);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_41 = ATgetArgument(t, 0);
                    k_46 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = k_46;
                t = foldr_3_0(z_6, b_7, i_108, t);
              }
            }
        }
      }
    return(t);
  }
  t = i_108(t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm b_109 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_109);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm z_41 = t;
  int b_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_42);
    }
  else
    {
      t = z_41;
      {
        ATerm d_109 = NULL,e_109 = NULL,f_109 = NULL,g_109 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            d_109 = ATgetArgument(t, 0);
            t = d_109;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                d_109 = ATgetArgument(t, 0);
                e_109 = ATgetArgument(t, 1);
                f_109 = ATgetArgument(t, 2);
                g_109 = ATgetArgument(t, 3);
                t = f_109;
                t = map_1_0(i_7, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    d_109 = ATgetArgument(t, 0);
                    e_109 = ATgetArgument(t, 1);
                    f_109 = ATgetArgument(t, 2);
                    g_109 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = f_109;
                t = map_1_0(k_7, t);
              }
          }
      }
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm o_109 = NULL;
  ATerm d_42 = t;
  int e_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_109 = ATgetArgument(t, 0);
          {
            ATerm f_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_42);
      t = o_109;
    }
  else
    {
      t = d_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_109 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_109;
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm h_110 = NULL;
  ATerm k_42 = t;
  int l_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_110 = ATgetArgument(t, 0);
          {
            ATerm m_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_42);
      t = h_110;
    }
  else
    {
      t = k_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_110;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm o_108 = NULL,s_108 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      s_108 = ATgetArgument(t, 0);
      t = s_108;
      if(match_cons(t, sym_Rule_3))
        {
          o_108 = ATgetArgument(t, 0);
          {
            ATerm n_42 = ATgetArgument(t, 1);
          }
          {
            ATerm o_42 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = o_108;
      t = free_vars_3_0(e_7, g_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          s_108 = ATgetArgument(t, 0);
          {
            ATerm p_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = s_108;
    }
  return(t);
}
ATerm Var_1_0 (ATerm l_80 (ATerm), ATerm t)
{
  ATerm o_110 = NULL,p_110 = NULL,q_110 = NULL,s_110 = NULL,q_6 = NULL;
  s_110 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_110);
  o_110 = t;
  t = p_110;
  t = l_80(t);
  q_110 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_110);
  q_6 = t;
  t = SSLsetAnnotations(q_6, o_110);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm q_42 = t;
  int r_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_42);
    }
  else
    {
      t = q_42;
      {
        ATerm h_111 = NULL,i_111 = NULL,j_111 = NULL,k_111 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            h_111 = ATgetArgument(t, 0);
            i_111 = ATgetArgument(t, 1);
            j_111 = ATgetArgument(t, 2);
            k_111 = ATgetArgument(t, 3);
            t = j_111;
            t = map_1_0(n_7, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                h_111 = ATgetArgument(t, 0);
                i_111 = ATgetArgument(t, 1);
                j_111 = ATgetArgument(t, 2);
                k_111 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = j_111;
            t = map_1_0(o_7, t);
          }
      }
    }
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm r_111 = NULL;
  ATerm t_42 = t;
  int u_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_111 = ATgetArgument(t, 0);
          {
            ATerm w_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_42);
      t = r_111;
    }
  else
    {
      t = t_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_111 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_111;
    }
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm a_112 = NULL;
  ATerm x_42 = t;
  int b_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_112 = ATgetArgument(t, 0);
          {
            ATerm d_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_43);
      t = a_112;
    }
  else
    {
      t = x_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_112 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_112;
    }
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm d_112 = NULL,e_112 = NULL,f_112 = NULL,g_112 = NULL,h_112 = NULL;
  d_112 = t;
  if(match_cons(t, sym_Let_2))
    {
      e_112 = ATgetArgument(t, 0);
      f_112 = ATgetArgument(t, 1);
      t = d_112;
      t = n_12(e_112, f_112, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          e_112 = ATgetArgument(t, 0);
          f_112 = ATgetArgument(t, 1);
          g_112 = ATgetArgument(t, 2);
          t = f_112;
          t = map_1_0(q_7, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              e_112 = ATgetArgument(t, 0);
              f_112 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, e_112);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  e_112 = ATgetArgument(t, 0);
                  f_112 = ATgetArgument(t, 1);
                  g_112 = ATgetArgument(t, 2);
                  h_112 = ATgetArgument(t, 3);
                  t = f_112;
                  t = map_1_0(s_7, t);
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
                  t = f_112;
                  t = map_1_0(t_7, t);
                }
            }
        }
    }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm p_112 = NULL;
  ATerm e_43 = t;
  int f_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_112 = ATgetArgument(t, 0);
          {
            ATerm g_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_43);
      t = p_112;
    }
  else
    {
      t = e_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_112 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_112;
    }
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm h_113 = NULL;
  ATerm j_43 = t;
  int m_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_113 = ATgetArgument(t, 0);
          {
            ATerm n_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_43);
      t = h_113;
    }
  else
    {
      t = j_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_113;
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm v_113 = NULL;
  ATerm o_43 = t;
  int p_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_113 = ATgetArgument(t, 0);
          {
            ATerm q_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_43);
      t = v_113;
    }
  else
    {
      t = o_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_113;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, m_7, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, p_7, sboundin_3_0, spaste_1_0, t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm a_50 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      a_50 = ATgetArgument(t, 0);
      {
        ATerm r_43 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = a_50;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_43 = ATgetArgument(t, 0);
      if(((ATgetType(s_43) != AT_LIST) || !(ATisEmpty(s_43))))
        _fail(t);
      {
        ATerm t_43 = ATgetArgument(t, 1);
        if(((ATgetType(t_43) != AT_LIST) || !(ATisEmpty(t_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL,n_50 = NULL,o_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_43 = ATgetArgument(t, 0);
      if(((ATgetType(u_43) == AT_LIST) && !(ATisEmpty(u_43))))
        {
          g_50 = ATgetFirst((ATermList) u_43);
          h_50 = (ATerm) ATgetNext((ATermList) u_43);
        }
      else
        _fail(t);
      {
        ATerm v_43 = ATgetArgument(t, 1);
        if(((ATgetType(v_43) == AT_LIST) && !(ATisEmpty(v_43))))
          {
            n_50 = ATgetFirst((ATermList) v_43);
            o_50 = (ATerm) ATgetNext((ATermList) v_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_50, n_50), (ATerm) ATmakeAppl(sym__2, h_50, o_50));
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL;
  if(match_cons(t, sym__2))
    {
      p_50 = ATgetArgument(t, 0);
      q_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_50), p_50);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm r_50 = NULL,u_50 = NULL;
  if(match_cons(t, sym__2))
    {
      r_50 = ATgetArgument(t, 0);
      u_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, r_50), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_50))));
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_i_13;
  return(t);
}
ATerm InlineCall_0_0 (ATerm t)
{
  ATerm w_115 = NULL,x_115 = NULL,y_115 = NULL,z_115 = NULL,a_116 = NULL;
  w_115 = t;
  if(match_cons(t, sym_CallT_3))
    {
      x_115 = ATgetArgument(t, 0);
      z_115 = ATgetArgument(t, 1);
      a_116 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_115;
  if(match_cons(t, sym_SVar_1))
    {
      y_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_43 = t;
    int y_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_47 = NULL,w_47 = NULL;
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_115), (ATerm)ATempty, (ATerm) ATempty);
        v_47 = t;
        t = term_i_13;
        w_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_13, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_115), (ATerm)ATempty, (ATerm) ATempty));
        t = s_6(w_47, v_47, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        LocalPopChoice(y_43);
      }
    else
      {
        t = x_43;
        {
          ATerm z_43 = t;
          int a_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_48 = NULL,i_48 = NULL;
              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_115), (ATerm)ATempty, (ATerm) ATempty);
              h_48 = t;
              t = term_i_13;
              i_48 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_i_13, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_115), (ATerm)ATempty, (ATerm) ATempty));
              t = s_6(i_48, h_48, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              LocalPopChoice(a_44);
            }
          else
            {
              t = z_43;
              {
                ATerm b_44 = t;
                int c_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_49 = NULL,h_49 = NULL,m_49 = NULL,n_49 = NULL,p_49 = NULL,u_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL,b_51 = NULL,c_51 = NULL;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_115), (ATerm)ATempty, (ATerm) ATempty);
                    b_51 = t;
                    t = term_i_13;
                    c_51 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_i_13, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_115), (ATerm)ATempty, (ATerm) ATempty));
                    t = s_6(c_51, b_51, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm d_44 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) d_44) != ATmakeSymbol("d_0", 0, ATtrue)))
                          _fail(t);
                        e_49 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = e_49;
                    t = strename_0_0(t);
                    if(match_cons(t, sym_SDefT_4))
                      {
                        if((y_115 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        h_49 = ATgetArgument(t, 1);
                        n_49 = ATgetArgument(t, 2);
                        m_49 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__3, h_49, z_115, m_49);
                    t = substitute_args_0_0(t);
                    u_49 = t;
                    t = n_49;
                    t = map_1_0(x_7, t);
                    p_49 = t;
                    t = (ATerm) ATmakeAppl(sym__2, a_116, p_49);
                    t = genzip_4_0(y_7, z_7, a_8, b_8, t);
                    x_49 = t;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_115), (ATerm)ATempty, (ATerm) ATempty);
                    y_49 = t;
                    t = term_e_44;
                    z_49 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_115), (ATerm)ATempty, (ATerm) ATempty), term_e_44);
                    t = h_13(c_8, y_49, z_49, t);
                    t = (ATerm) ATmakeAppl(sym_Scope_2, p_49, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_49), u_49));
                    t = simplify_0_0(t);
                    LocalPopChoice(c_44);
                  }
                else
                  {
                    t = b_44;
                    {
                      ATerm v_51 = NULL,w_51 = NULL;
                      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_115), (ATerm)ATempty, (ATerm) ATempty);
                      v_51 = t;
                      t = term_i_13;
                      w_51 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_i_13, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_115), (ATerm)ATempty, (ATerm) ATempty));
                      t = s_6(w_51, v_51, t);
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
ATerm leq_0_0 (ATerm t)
{
  ATerm g_44 = t;
  if((PushChoice() == 0))
    {
      ATerm g_116 = NULL,i_116 = NULL;
      if(match_cons(t, sym__2))
        {
          g_116 = ATgetArgument(t, 0);
          i_116 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, g_116, i_116);
      {
        ATerm h_44 = t;
        int j_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(g_116, i_116);
            LocalPopChoice(j_44);
          }
        else
          {
            t = h_44;
            t = SSL_gtr(g_116, i_116);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, g_116, i_116);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_44;
    }
  return(t);
}
ATerm foldr_3_0 (ATerm p_115 (ATerm), ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm t)
{
  ATerm l_116 = NULL,m_116 = NULL,o_116 = NULL;
  l_116 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_116;
      t = p_115(t);
    }
  else
    {
      ATerm r_116 = NULL,s_116 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_116 = ATgetFirst((ATermList) t);
          o_116 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_116;
      t = r_115(t);
      r_116 = t;
      t = o_116;
      t = foldr_3_0(p_115, q_115, r_115, t);
      s_116 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_116, s_116);
      t = q_115(t);
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_k_44;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm o_52 = NULL,p_52 = NULL;
  if(match_cons(t, sym__2))
    {
      o_52 = ATgetArgument(t, 0);
      p_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_14(o_52, p_52, t);
  return(t);
}
ATerm occurrences_1_0 (ATerm g_113 (ATerm), ATerm t)
{
  ATerm v_116 = NULL,w_116 = NULL,x_116 = NULL,c_52 = NULL;
  x_116 = t;
  {
    ATerm l_44 = t;
    int m_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_113(t);
        t = term_t_13;
        LocalPopChoice(m_44);
      }
    else
      {
        t = l_44;
        t = term_k_44;
      }
  }
  v_116 = t;
  t = SSL_explode_term(x_116);
  if(match_cons(t, sym__2))
    {
      ATerm n_44 = ATgetArgument(t, 0);
      c_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_52;
  {
    static ATerm g_8 (ATerm t)
    {
      t = occurrences_1_0(g_113, t);
      return(t);
    }
    t = foldr_3_0(d_8, f_8, g_8, t);
  }
  w_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_116, w_116);
  t = z_14(v_116, w_116, t);
  return(t);
}
static ATerm f_13 (ATerm m_100 (ATerm), ATerm o_24, ATerm n_24, ATerm t)
{
  ATerm a_117 = NULL,b_117 = NULL;
  a_117 = t;
  t = n_24;
  {
    ATerm o_44 = t;
    if((PushChoice() == 0))
      {
        static ATerm m_8 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm p_44 = ATgetArgument(t, 0);
              if(match_cons(p_44, sym_SVar_1))
                {
                  if((o_24 != ATgetArgument(p_44, 0)))
                    {
                      _fail(ATgetArgument(p_44, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm q_44 = ATgetArgument(t, 1);
              }
              {
                ATerm r_44 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(m_8, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_44;
      }
  }
  t = m_100(t);
  {
    static ATerm q_8 (ATerm t)
    {
      if(match_cons(t, sym_CallT_3))
        {
          ATerm t_44 = ATgetArgument(t, 0);
          if(match_cons(t_44, sym_SVar_1))
            {
              if((o_24 != ATgetArgument(t_44, 0)))
                {
                  _fail(ATgetArgument(t_44, 0));
                }
            }
          else
            _fail(t);
          {
            ATerm v_44 = ATgetArgument(t, 1);
          }
          {
            ATerm w_44 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      return(t);
    }
    t = occurrences_1_0(q_8, t);
  }
  b_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_117, term_t_13);
  t = leq_0_0(t);
  t = a_117;
  return(t);
}
static ATerm h_13 (ATerm c_110 (ATerm), ATerm l_34, ATerm j_34, ATerm t)
{
  ATerm c_117 = NULL,k_117 = NULL,l_117 = NULL,m_117 = NULL,n_117 = NULL,q_117 = NULL;
  m_117 = t;
  t = c_110(t);
  c_117 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_117, l_34, j_34);
  t = e_15(c_117, l_34, j_34, t);
  {
    ATerm x_44 = t;
    int z_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_117 = NULL;
        t = term_a_45;
        r_117 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_117, term_a_45);
        t = d_15(c_117, r_117, t);
        LocalPopChoice(z_44);
      }
    else
      {
        t = x_44;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_117 = ATgetFirst((ATermList) t);
      l_117 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_a_45;
  n_117 = t;
  t = (ATerm) ATinsert(CheckATermList(l_117), (ATerm) ATinsert(CheckATermList(k_117), l_34));
  q_117 = t;
  t = SSL_table_put(c_117, n_117, q_117);
  t = m_117;
  return(t);
}
static ATerm j_13 (ATerm d_35, ATerm e_35, ATerm t)
{
  ATerm s_117 = NULL,t_117 = NULL;
  t_117 = t;
  {
    ATerm b_45 = t;
    int c_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_35, e_35);
        t = d_15(d_35, e_35, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_45 = ATgetFirst((ATermList) t);
            s_117 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(c_45);
        t = SSL_table_put(d_35, e_35, s_117);
        t = (ATerm) ATmakeAppl(sym__3, d_35, e_35, s_117);
      }
    else
      {
        t = b_45;
        t = SSL_table_remove(d_35, e_35);
        t = (ATerm) ATmakeAppl(sym__2, d_35, e_35);
      }
  }
  t = t_117;
  return(t);
}
ATerm end_scope_1_0 (ATerm z_109 (ATerm), ATerm t)
{
  ATerm u_117 = NULL,v_117 = NULL,y_117 = NULL,z_117 = NULL,a_118 = NULL;
  z_117 = t;
  t = z_109(t);
  y_117 = t;
  {
    ATerm e_45 = t;
    int f_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_118 = NULL;
        t = term_a_45;
        b_118 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_117, term_a_45);
        t = d_15(y_117, b_118, t);
        LocalPopChoice(f_45);
      }
    else
      {
        t = e_45;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_117 = ATgetFirst((ATermList) t);
      u_117 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_a_45;
  a_118 = t;
  t = SSL_table_put(y_117, a_118, u_117);
  t = v_117;
  {
    static ATerm r_8 (ATerm t)
    {
      ATerm c_118 = NULL;
      c_118 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_117, c_118);
      t = j_13(y_117, c_118, t);
      return(t);
    }
    t = map_1_0(r_8, t);
  }
  t = z_117;
  return(t);
}
ATerm restore_always_2_0 (ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm t)
{
  ATerm g_45 = t;
  int h_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_105(t);
      t = p_105(t);
      LocalPopChoice(h_45);
    }
  else
    {
      t = g_45;
      t = p_105(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm y_109 (ATerm), ATerm t)
{
  ATerm f_118 = NULL,h_118 = NULL,i_118 = NULL,j_118 = NULL,k_118 = NULL;
  h_118 = t;
  t = y_109(t);
  f_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_118, term_a_45);
  {
    ATerm i_45 = t;
    int j_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_118 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_45 = ATgetArgument(t, 0);
            ATerm m_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_a_45;
        o_118 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_118, term_a_45);
        t = d_15(f_118, o_118, t);
        LocalPopChoice(j_45);
      }
    else
      {
        t = i_45;
        t = (ATerm) ATempty;
      }
  }
  i_118 = t;
  t = term_a_45;
  j_118 = t;
  t = (ATerm) ATinsert(CheckATermList(i_118), (ATerm) ATempty);
  k_118 = t;
  t = SSL_table_put(f_118, j_118, k_118);
  t = h_118;
  return(t);
}
ATerm scope_2_0 (ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm t)
{
  static ATerm s_8 (ATerm t)
  {
    t = end_scope_1_0(a_110, t);
    return(t);
  }
  t = begin_scope_1_0(a_110, t);
  t = restore_always_2_0(b_110, s_8, t);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_i_13;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  t = term_k_13;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_i_13;
  return(t);
}
ATerm inline_sdef_0_0 (ATerm t)
{
  static ATerm u_8 (ATerm t)
  {
    static ATerm w_8 (ATerm t)
    {
      ATerm n_45 = t;
      int p_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_118 = NULL,v_118 = NULL,x_118 = NULL;
          u_118 = t;
          {
            ATerm q_45 = t;
            int r_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    v_118 = ATgetArgument(t, 0);
                    {
                      ATerm s_45 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm t_45 = ATgetArgument(t, 2);
                    }
                    {
                      ATerm u_45 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(r_45);
                {
                  ATerm b_119 = NULL,c_119 = NULL;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_118), (ATerm)ATempty, (ATerm) ATempty);
                  b_119 = t;
                  t = term_e_44;
                  c_119 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_118), (ATerm)ATempty, (ATerm) ATempty), term_e_44);
                  t = h_13(y_8, b_119, c_119, t);
                  t = u_118;
                }
              }
            else
              {
                t = q_45;
                if(match_cons(t, sym_Let_2))
                  {
                    v_118 = ATgetArgument(t, 0);
                    x_118 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = v_118;
                {
                  static ATerm z_8 (ATerm t)
                  {
                    ATerm f_119 = NULL,k_119 = NULL;
                    if(match_cons(t, sym_SDefT_4))
                      {
                        f_119 = ATgetArgument(t, 0);
                        {
                          ATerm w_45 = ATgetArgument(t, 1);
                        }
                        {
                          ATerm x_45 = ATgetArgument(t, 2);
                        }
                        k_119 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    {
                      static ATerm d_9 (ATerm t)
                      {
                        t = x_118;
                        return(t);
                      }
                      t = f_13(d_9, f_119, k_119, t);
                    }
                    t = AddSDef_0_0(t);
                    return(t);
                  }
                  t = map_1_0(z_8, t);
                }
                t = (ATerm) ATmakeAppl(sym_Let_2, v_118, x_118);
              }
          }
          LocalPopChoice(p_45);
        }
      else
        {
          t = n_45;
          t = repeat_2_0(InlineCall_0_0, _id, t);
        }
      t = SRTS_all(inline_sdef_0_0, t);
      return(t);
    }
    t = scope_2_0(v_8, w_8, t);
    return(t);
  }
  t = scope_2_0(t_8, u_8, t);
  return(t);
}
ATerm topdown_1_0 (ATerm h_102 (ATerm), ATerm t)
{
  static ATerm e_9 (ATerm t)
  {
    t = topdown_1_0(h_102, t);
    return(t);
  }
  t = h_102(t);
  t = SRTS_all(e_9, t);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm y_45 = t;
  int z_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm c_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(z_45);
      {
        ATerm o_119 = NULL,p_119 = NULL;
        o_119 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm d_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        p_119 = t;
        t = SSLgetAnnotations(o_119);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_46 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) e_46) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm f_46 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(f_46) != AT_LIST) || !(ATisEmpty(f_46))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = p_119;
      }
    }
  else
    {
      t = y_45;
      {
        ATerm j_46 = t;
        int m_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm n_46 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) n_46) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm o_46 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(m_46);
            _fail(t);
          }
        else
          {
            t = j_46;
          }
      }
    }
  return(t);
}
static ATerm m_13 (ATerm s_71, ATerm r_71, ATerm t)
{
  t = s_71;
  t = topdown_1_0(f_9, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, s_71);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm y_119 = NULL,z_119 = NULL,b_120 = NULL,c_120 = NULL,d_120 = NULL,e_120 = NULL,f_120 = NULL,g_120 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      b_120 = ATgetArgument(t, 0);
      e_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_120;
  if(match_cons(t, sym_Match_1))
    {
      c_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_120;
  if(match_cons(t, sym_Var_1))
    {
      d_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_120;
  if(match_cons(t, sym_Seq_2))
    {
      f_120 = ATgetArgument(t, 0);
      z_119 = ATgetArgument(t, 1);
      t = f_120;
      if(match_cons(t, sym_Build_1))
        {
          g_120 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_120;
      if(match_cons(t, sym_Var_1))
        {
          y_119 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_119;
      if((d_120 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_120)), z_119);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          f_120 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_120;
      if(match_cons(t, sym_Var_1))
        {
          g_120 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_120;
      if((d_120 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_120));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm o_120 = NULL,p_120 = NULL,r_120 = NULL,s_120 = NULL,t_120 = NULL,u_120 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      r_120 = ATgetArgument(t, 0);
      t_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_120;
  if(match_cons(t, sym_Build_1))
    {
      s_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_120;
  if(match_cons(t, sym_Seq_2))
    {
      u_120 = ATgetArgument(t, 0);
      p_120 = ATgetArgument(t, 1);
      t = u_120;
      if(match_cons(t, sym_Match_1))
        {
          o_120 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_120;
      if((s_120 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_120), p_120);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          u_120 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_120;
      if((s_120 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, s_120);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm c_121 = NULL,d_121 = NULL,f_121 = NULL,g_121 = NULL,h_121 = NULL,i_121 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      f_121 = ATgetArgument(t, 0);
      h_121 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_121;
  if(match_cons(t, sym_Match_1))
    {
      g_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_121;
  if(match_cons(t, sym_Seq_2))
    {
      i_121 = ATgetArgument(t, 0);
      d_121 = ATgetArgument(t, 1);
      t = i_121;
      if(match_cons(t, sym_Match_1))
        {
          c_121 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_121;
      if((g_121 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, g_121), d_121);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          i_121 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_121;
      if((g_121 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, g_121);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm q_121 = NULL,r_121 = NULL,s_121 = NULL,u_121 = NULL,w_121 = NULL,x_121 = NULL,y_121 = NULL,z_121 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      u_121 = ATgetArgument(t, 0);
      w_121 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_121;
  if(match_cons(t, sym_Build_1))
    {
      ATerm p_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_121;
  if(match_cons(t, sym_Seq_2))
    {
      x_121 = ATgetArgument(t, 0);
      y_121 = ATgetArgument(t, 1);
      t = x_121;
      if(match_cons(t, sym_PrimT_3))
        {
          q_121 = ATgetArgument(t, 0);
          r_121 = ATgetArgument(t, 1);
          s_121 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, q_121, r_121, s_121), y_121);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          x_121 = ATgetArgument(t, 0);
          y_121 = ATgetArgument(t, 1);
          z_121 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, x_121, y_121, z_121);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm l_122 = NULL,m_122 = NULL,o_122 = NULL,q_122 = NULL,r_122 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      o_122 = ATgetArgument(t, 0);
      q_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_122;
  if(match_cons(t, sym_Build_1))
    {
      ATerm t_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_122;
  if(match_cons(t, sym_Seq_2))
    {
      r_122 = ATgetArgument(t, 0);
      m_122 = ATgetArgument(t, 1);
      t = r_122;
      if(match_cons(t, sym_Build_1))
        {
          l_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_122), m_122);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          r_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, r_122);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm t)
{
  static ATerm b_123 (ATerm t)
  {
    ATerm u_46 = t;
    int v_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_106(t);
        LocalPopChoice(v_46);
      }
    else
      {
        t = u_46;
        {
          ATerm v_122 = NULL,w_122 = NULL,x_122 = NULL,y_122 = NULL,z_122 = NULL,a_123 = NULL,u_6 = NULL;
          t = u_106(t);
          a_123 = t;
          if(match_cons(t, sym__2))
            {
              w_122 = ATgetArgument(t, 0);
              x_122 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_123);
          v_122 = t;
          t = w_122;
          t = w_106(t);
          y_122 = t;
          t = x_122;
          t = b_123(t);
          z_122 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_122, z_122);
          u_6 = t;
          t = SSLsetAnnotations(u_6, v_122);
          t = v_106(t);
        }
      }
    return(t);
  }
  t = b_123(t);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_46 = ATgetArgument(t, 0);
      if(((ATgetType(w_46) != AT_LIST) || !(ATisEmpty(w_46))))
        _fail(t);
      {
        ATerm x_46 = ATgetArgument(t, 1);
        if(((ATgetType(x_46) != AT_LIST) || !(ATisEmpty(x_46))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm a_124 = NULL,b_124 = NULL,c_124 = NULL,d_124 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_46 = ATgetArgument(t, 0);
      if(((ATgetType(y_46) == AT_LIST) && !(ATisEmpty(y_46))))
        {
          a_124 = ATgetFirst((ATermList) y_46);
          b_124 = (ATerm) ATgetNext((ATermList) y_46);
        }
      else
        _fail(t);
      {
        ATerm z_46 = ATgetArgument(t, 1);
        if(((ATgetType(z_46) == AT_LIST) && !(ATisEmpty(z_46))))
          {
            c_124 = ATgetFirst((ATermList) z_46);
            d_124 = (ATerm) ATgetNext((ATermList) z_46);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_124, c_124), (ATerm) ATmakeAppl(sym__2, b_124, d_124));
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm e_124 = NULL,f_124 = NULL;
  if(match_cons(t, sym__2))
    {
      e_124 = ATgetArgument(t, 0);
      f_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_124), e_124);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm g_124 = NULL,h_124 = NULL;
  if(match_cons(t, sym__2))
    {
      g_124 = ATgetArgument(t, 0);
      h_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_124), (ATerm) ATmakeAppl(sym_Match_1, h_124));
  return(t);
}
static ATerm k_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_47 = ATgetArgument(t, 0);
      if(((ATgetType(a_47) != AT_LIST) || !(ATisEmpty(a_47))))
        _fail(t);
      {
        ATerm b_47 = ATgetArgument(t, 1);
        if(((ATgetType(b_47) != AT_LIST) || !(ATisEmpty(b_47))))
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
  ATerm m_124 = NULL,n_124 = NULL,o_124 = NULL,p_124 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_47 = ATgetArgument(t, 0);
      if(((ATgetType(c_47) == AT_LIST) && !(ATisEmpty(c_47))))
        {
          m_124 = ATgetFirst((ATermList) c_47);
          n_124 = (ATerm) ATgetNext((ATermList) c_47);
        }
      else
        _fail(t);
      {
        ATerm d_47 = ATgetArgument(t, 1);
        if(((ATgetType(d_47) == AT_LIST) && !(ATisEmpty(d_47))))
          {
            o_124 = ATgetFirst((ATermList) d_47);
            p_124 = (ATerm) ATgetNext((ATermList) d_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_124, o_124), (ATerm) ATmakeAppl(sym__2, n_124, p_124));
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm q_124 = NULL,r_124 = NULL;
  if(match_cons(t, sym__2))
    {
      q_124 = ATgetArgument(t, 0);
      r_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_124), q_124);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm s_124 = NULL,t_124 = NULL;
  if(match_cons(t, sym__2))
    {
      s_124 = ATgetArgument(t, 0);
      t_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_124), (ATerm) ATmakeAppl(sym_Match_1, t_124));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm j_123 = NULL,k_123 = NULL,l_123 = NULL,n_123 = NULL,o_123 = NULL,p_123 = NULL,q_123 = NULL,r_123 = NULL,s_123 = NULL,t_123 = NULL,u_123 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      n_123 = ATgetArgument(t, 0);
      r_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_123;
  if(match_cons(t, sym_Build_1))
    {
      o_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_123;
  if(match_cons(t, sym_Op_2))
    {
      p_123 = ATgetArgument(t, 0);
      q_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_123;
  if(match_cons(t, sym_Seq_2))
    {
      s_123 = ATgetArgument(t, 0);
      l_123 = ATgetArgument(t, 1);
      {
        ATerm z_123 = NULL;
        t = s_123;
        if(match_cons(t, sym_Match_1))
          {
            t_123 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_123;
        if(match_cons(t, sym_Op_2))
          {
            j_123 = ATgetArgument(t, 0);
            k_123 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_123;
        if((p_123 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, q_123, k_123);
        t = genzip_4_0(g_9, h_9, i_9, j_9, t);
        z_123 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, z_123), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, p_123, q_123)), l_123));
      }
    }
  else
    {
      ATerm l_124 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          s_123 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_123;
      if(match_cons(t, sym_Op_2))
        {
          t_123 = ATgetArgument(t, 0);
          u_123 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_123;
      if((p_123 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, q_123, u_123);
      t = genzip_4_0(k_9, m_9, o_9, p_9, t);
      l_124 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, l_124), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, p_123, q_123)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm q_125 = NULL,t_125 = NULL,u_125 = NULL,v_125 = NULL,w_125 = NULL,y_125 = NULL,z_125 = NULL,a_126 = NULL;
  t_125 = t;
  if(match_cons(t, sym_Seq_2))
    {
      u_125 = ATgetArgument(t, 0);
      y_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_125;
  if(match_cons(t, sym_Build_1))
    {
      v_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_125;
  if(match_cons(t, sym_Op_2))
    {
      w_125 = ATgetArgument(t, 0);
      {
        ATerm f_47 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = y_125;
  {
    ATerm g_47 = t;
    int h_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            z_125 = ATgetArgument(t, 0);
            {
              ATerm i_47 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(h_47);
        t = z_125;
        if(match_cons(t, sym_Match_1))
          {
            a_126 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_126;
        if(match_cons(t, sym_Op_2))
          {
            q_125 = ATgetArgument(t, 0);
            {
              ATerm j_47 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_125, q_125);
        {
          ATerm k_47 = t;
          if((PushChoice() == 0))
            {
              ATerm e_53 = NULL;
              if(match_cons(t, sym__2))
                {
                  e_53 = ATgetArgument(t, 0);
                  if((e_53 != ATgetArgument(t, 1)))
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
              t = k_47;
            }
        }
        t = term_j_16;
      }
    else
      {
        t = g_47;
        if(match_cons(t, sym_Match_1))
          {
            z_125 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_125;
        if(match_cons(t, sym_Op_2))
          {
            a_126 = ATgetArgument(t, 0);
            {
              ATerm m_47 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_125, a_126);
        {
          ATerm n_47 = t;
          if((PushChoice() == 0))
            {
              ATerm b_54 = NULL;
              if(match_cons(t, sym__2))
                {
                  b_54 = ATgetArgument(t, 0);
                  if((b_54 != ATgetArgument(t, 1)))
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
              t = n_47;
            }
        }
        t = term_j_16;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm l_103 (ATerm), ATerm t)
{
  static ATerm e_126 (ATerm t)
  {
    ATerm o_47 = t;
    int p_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_103(t);
        LocalPopChoice(p_47);
      }
    else
      {
        t = o_47;
        t = SRTS_one(e_126, t);
      }
    return(t);
  }
  t = e_126(t);
  return(t);
}
ATerm at_end_1_0 (ATerm c_111 (ATerm), ATerm t)
{
  static ATerm z_126 (ATerm t)
  {
    ATerm w_126 = NULL,x_126 = NULL,y_126 = NULL;
    y_126 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_126 = ATgetFirst((ATermList) t);
        x_126 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_54 = NULL,w_54 = NULL,w_6 = NULL;
          t = SSLgetAnnotations(y_126);
          t_54 = t;
          t = x_126;
          t = z_126(t);
          w_54 = t;
          t = (ATerm) ATinsert(CheckATermList(w_54), w_126);
          w_6 = t;
          t = SSLsetAnnotations(w_6, t_54);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_126;
        t = c_111(t);
      }
    return(t);
  }
  t = z_126(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_126 = NULL,h_126 = NULL,i_126 = NULL;
  g_126 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_126;
    }
  else
    {
      static ATerm q_9 (ATerm t)
      {
        t = not_null(i_126);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_126 = ATgetFirst((ATermList) t);
          if(((i_126 != NULL) && (i_126 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_126 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_126;
      t = at_end_1_0(q_9, t);
    }
  return(t);
}
static ATerm l_127 (ATerm d_127, ATerm t)
{
  ATerm e_127 = NULL;
  t = SSL_explode_term(d_127);
  if(match_cons(t, sym__2))
    {
      ATerm q_47 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_47) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_127;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_127 = NULL,h_127 = NULL,i_127 = NULL;
  i_127 = t;
  if(match_cons(t, sym__2))
    {
      g_127 = ATgetArgument(t, 0);
      h_127 = ATgetArgument(t, 1);
      {
        ATerm r_47 = t;
        int s_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_9 (ATerm t)
            {
              t = h_127;
              return(t);
            }
            t = g_127;
            t = at_end_1_0(s_9, t);
            LocalPopChoice(s_47);
          }
        else
          {
            t = r_47;
            t = l_127(i_127, t);
          }
      }
    }
  else
    {
      t = l_127(i_127, t);
    }
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm l_128 = NULL,m_128 = NULL,n_128 = NULL,o_128 = NULL,p_128 = NULL,q_128 = NULL,r_128 = NULL,s_128 = NULL,t_128 = NULL,u_128 = NULL,v_128 = NULL,w_128 = NULL,x_128 = NULL;
  l_128 = t;
  if(match_cons(t, sym_Let_2))
    {
      m_128 = ATgetArgument(t, 0);
      t_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_128;
  if(match_cons(t, sym_Let_2))
    {
      u_128 = ATgetArgument(t, 0);
      w_128 = ATgetArgument(t, 1);
      {
        ATerm b_129 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, m_128, u_128);
        t = conc_0_0(t);
        b_129 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, b_129, w_128);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          u_128 = ATgetArgument(t, 0);
          w_128 = ATgetArgument(t, 1);
          x_128 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_128;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_128 = ATgetFirst((ATermList) t);
          s_128 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_128;
      if(match_cons(t, sym_SDefT_4))
        {
          o_128 = ATgetArgument(t, 0);
          p_128 = ATgetArgument(t, 1);
          q_128 = ATgetArgument(t, 2);
          r_128 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = p_128;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_128;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_128;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_128;
      if(match_cons(t, sym_SVar_1))
        {
          v_128 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_128;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_128;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_128;
      if((o_128 != t))
        {
          _fail(t);
        }
      t = r_128;
      {
        ATerm t_47 = t;
        if((PushChoice() == 0))
          {
            static ATerm w_9 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm u_47 = ATgetArgument(t, 0);
                  if(match_cons(u_47, sym_SVar_1))
                    {
                      if((o_128 != ATgetArgument(u_47, 0)))
                        {
                          _fail(ATgetArgument(u_47, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm x_47 = ATgetArgument(t, 1);
                    if(((ATgetType(x_47) != AT_LIST) || !(ATisEmpty(x_47))))
                      _fail(t);
                  }
                  {
                    ATerm z_47 = ATgetArgument(t, 2);
                    if(((ATgetType(z_47) != AT_LIST) || !(ATisEmpty(z_47))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(w_9, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = t_47;
          }
      }
      t = r_128;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm k_129 = NULL,l_129 = NULL,m_129 = NULL,n_129 = NULL,o_129 = NULL,p_129 = NULL,r_129 = NULL,s_129 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      r_129 = ATgetArgument(t, 0);
      t = r_129;
      if(match_cons(t, sym_Seq_2))
        {
          p_129 = ATgetArgument(t, 0);
          l_129 = ATgetArgument(t, 1);
          t = p_129;
          if(match_cons(t, sym_Where_1))
            {
              k_129 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_129;
          if(match_cons(t, sym_Seq_2))
            {
              m_129 = ATgetArgument(t, 0);
              o_129 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_129;
          if(match_cons(t, sym_Build_1))
            {
              n_129 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, k_129, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_129), o_129)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              p_129 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, p_129);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          r_129 = ATgetArgument(t, 0);
          t = r_129;
          if(match_cons(t, sym_Test_1))
            {
              p_129 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, p_129);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              r_129 = ATgetArgument(t, 0);
              t = r_129;
              if(match_cons(t, sym_Not_1))
                {
                  p_129 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, p_129);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  r_129 = ATgetArgument(t, 0);
                  s_129 = ATgetArgument(t, 1);
                  t = s_129;
                  if((r_129 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      r_129 = ATgetArgument(t, 0);
                      s_129 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = s_129;
                  if((r_129 != t))
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
  ATerm i_130 = NULL,j_130 = NULL,k_130 = NULL,l_130 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      i_130 = ATgetArgument(t, 0);
      l_130 = ATgetArgument(t, 1);
      t = i_130;
      if(match_cons(t, sym_LChoice_2))
        {
          j_130 = ATgetArgument(t, 0);
          k_130 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, j_130, (ATerm) ATmakeAppl(sym_LChoice_2, k_130, l_130));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          i_130 = ATgetArgument(t, 0);
          l_130 = ATgetArgument(t, 1);
          t = i_130;
          if(match_cons(t, sym_Seq_2))
            {
              j_130 = ATgetArgument(t, 0);
              k_130 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, j_130, (ATerm) ATmakeAppl(sym_Seq_2, k_130, l_130));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              i_130 = ATgetArgument(t, 0);
              l_130 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_130;
          if(match_cons(t, sym_Choice_2))
            {
              j_130 = ATgetArgument(t, 0);
              k_130 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, j_130, (ATerm) ATmakeAppl(sym_Choice_2, k_130, l_130));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm z_130 = NULL,a_131 = NULL,b_131 = NULL,d_131 = NULL,e_131 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      d_131 = ATgetArgument(t, 0);
      e_131 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, d_131, e_131);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          d_131 = ATgetArgument(t, 0);
          t = d_131;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_130 = ATgetFirst((ATermList) t);
              a_131 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, z_130, (ATerm) ATmakeAppl(sym_LChoices_1, a_131));
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
          if(match_cons(t, sym_Choices_1))
            {
              d_131 = ATgetArgument(t, 0);
              t = d_131;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_130 = ATgetFirst((ATermList) t);
                  a_131 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, z_130, (ATerm) ATmakeAppl(sym_Choices_1, a_131));
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
              if(match_cons(t, sym_Seqs_1))
                {
                  d_131 = ATgetArgument(t, 0);
                  t = d_131;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      z_130 = ATgetFirst((ATermList) t);
                      a_131 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_130, (ATerm) ATmakeAppl(sym_Seqs_1, a_131));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_d_16;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      d_131 = ATgetArgument(t, 0);
                      e_131 = ATgetArgument(t, 1);
                      b_131 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, e_131, (ATerm) ATmakeAppl(sym_Op_2, term_b_34, (ATerm) ATinsert(ATinsert(ATempty, b_131), d_131)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          d_131 = ATgetArgument(t, 0);
                          e_131 = ATgetArgument(t, 1);
                          b_131 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, b_131)), d_131), (ATerm) ATmakeAppl(sym_Build_1, e_131)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              d_131 = ATgetArgument(t, 0);
                              e_131 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_131, (ATerm) ATmakeAppl(sym_Match_1, e_131));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  d_131 = ATgetArgument(t, 0);
                                  e_131 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_131), e_131);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      d_131 = ATgetArgument(t, 0);
                                      e_131 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_131), d_131);
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
static ATerm d_10 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm r_132 = NULL,s_132 = NULL,t_132 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      r_132 = ATgetArgument(t, 0);
      t = r_132;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_j_16;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          r_132 = ATgetArgument(t, 0);
          t = r_132;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_d_16;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              r_132 = ATgetArgument(t, 0);
              s_132 = ATgetArgument(t, 1);
              t = r_132;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_j_16;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  r_132 = ATgetArgument(t, 0);
                  s_132 = ATgetArgument(t, 1);
                  t = s_132;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_j_16;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      r_132 = ATgetArgument(t, 0);
                      s_132 = ATgetArgument(t, 1);
                      t = s_132;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_j_16;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          r_132 = ATgetArgument(t, 0);
                          t = r_132;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_j_16;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              r_132 = ATgetArgument(t, 0);
                              t = r_132;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_j_16;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  r_132 = ATgetArgument(t, 0);
                                  s_132 = ATgetArgument(t, 1);
                                  t = s_132;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_j_16;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      r_132 = ATgetArgument(t, 0);
                                      s_132 = ATgetArgument(t, 1);
                                      t = s_132;
                                      t = fetch_1_0(d_10, t);
                                      t = term_j_16;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          r_132 = ATgetArgument(t, 0);
                                          s_132 = ATgetArgument(t, 1);
                                          t = s_132;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = r_132;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = s_132;
                                                }
                                              else
                                                {
                                                  t = r_132;
                                                }
                                            }
                                          else
                                            {
                                              t = r_132;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = s_132;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              r_132 = ATgetArgument(t, 0);
                                              s_132 = ATgetArgument(t, 1);
                                              t = s_132;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = r_132;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = s_132;
                                                    }
                                                  else
                                                    {
                                                      t = r_132;
                                                    }
                                                }
                                              else
                                                {
                                                  t = r_132;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = s_132;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  r_132 = ATgetArgument(t, 0);
                                                  t = r_132;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_j_16;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      r_132 = ATgetArgument(t, 0);
                                                      s_132 = ATgetArgument(t, 1);
                                                      t_132 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = t_132;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, r_132, s_132);
                                                }
                                            }
                                        }
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
  ATerm x_133 = NULL,z_133 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      z_133 = ATgetArgument(t, 0);
      t = z_133;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_d_16;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          z_133 = ATgetArgument(t, 0);
          t = z_133;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_j_16;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              z_133 = ATgetArgument(t, 0);
              x_133 = ATgetArgument(t, 1);
              t = x_133;
              if(match_cons(t, sym_Id_0))
                {
                  t = z_133;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = x_133;
                    }
                  else
                    {
                      t = z_133;
                    }
                }
              else
                {
                  t = z_133;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = x_133;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  z_133 = ATgetArgument(t, 0);
                  x_133 = ATgetArgument(t, 1);
                  t = z_133;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_d_16;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      z_133 = ATgetArgument(t, 0);
                      x_133 = ATgetArgument(t, 1);
                      t = x_133;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_d_16;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          z_133 = ATgetArgument(t, 0);
                          x_133 = ATgetArgument(t, 1);
                          t = x_133;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_d_16;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              z_133 = ATgetArgument(t, 0);
                              t = z_133;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_d_16;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  z_133 = ATgetArgument(t, 0);
                                  t = z_133;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_d_16;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      z_133 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = z_133;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_d_16;
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
  ATerm a_48 = t;
  int b_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(b_48);
    }
  else
    {
      t = a_48;
      {
        ATerm c_48 = t;
        int d_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(d_48);
          }
        else
          {
            t = c_48;
            {
              ATerm e_48 = t;
              int f_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(f_48);
                }
              else
                {
                  t = e_48;
                  {
                    ATerm g_48 = t;
                    int j_48 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(j_48);
                      }
                    else
                      {
                        t = g_48;
                        {
                          ATerm k_48 = t;
                          int l_48 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(l_48);
                            }
                          else
                            {
                              t = k_48;
                              {
                                ATerm m_48 = t;
                                int n_48 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_134 = NULL,q_134 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        p_134 = ATgetArgument(t, 0);
                                        q_134 = ATgetArgument(t, 1);
                                        t = p_134;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = q_134;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            p_134 = ATgetArgument(t, 0);
                                            q_134 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = p_134;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = q_134;
                                      }
                                    LocalPopChoice(n_48);
                                  }
                                else
                                  {
                                    t = m_48;
                                    {
                                      ATerm o_48 = t;
                                      int p_48 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(p_48);
                                        }
                                      else
                                        {
                                          t = o_48;
                                          {
                                            ATerm q_48 = t;
                                            int s_48 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(s_48);
                                              }
                                            else
                                              {
                                                t = q_48;
                                                {
                                                  ATerm t_48 = t;
                                                  int u_48 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(u_48);
                                                    }
                                                  else
                                                    {
                                                      t = t_48;
                                                      {
                                                        ATerm v_48 = t;
                                                        int y_48 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(y_48);
                                                          }
                                                        else
                                                          {
                                                            t = v_48;
                                                            {
                                                              ATerm z_48 = t;
                                                              int a_49 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(a_49);
                                                                }
                                                              else
                                                                {
                                                                  t = z_48;
                                                                  {
                                                                    ATerm b_49 = t;
                                                                    int c_49 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(c_49);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = b_49;
                                                                        {
                                                                          ATerm f_49 = t;
                                                                          int g_49 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(g_49);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_49;
                                                                              {
                                                                                ATerm i_49 = t;
                                                                                int j_49 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(j_49);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = i_49;
                                                                                    {
                                                                                      ATerm t_134 = NULL,u_134 = NULL,v_134 = NULL,w_134 = NULL;
                                                                                      u_134 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          v_134 = ATgetArgument(t, 0);
                                                                                          w_134 = ATgetArgument(t, 1);
                                                                                          t = v_134;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              t_134 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = u_134;
                                                                                          t = m_13(t_134, w_134, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              v_134 = ATgetArgument(t, 0);
                                                                                              w_134 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = v_134;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = w_134;
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_2_0 (ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm t)
{
  static ATerm a_135 (ATerm t)
  {
    ATerm k_49 = t;
    int l_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_108(t);
        t = a_135(t);
        LocalPopChoice(l_49);
      }
    else
      {
        t = k_49;
        t = d_108(t);
      }
    return(t);
  }
  t = a_135(t);
  return(t);
}
ATerm downup_1_0 (ATerm j_102 (ATerm), ATerm t)
{
  t = j_102(t);
  {
    static ATerm f_10 (ATerm t)
    {
      t = downup_1_0(j_102, t);
      return(t);
    }
    t = SRTS_all(f_10, t);
  }
  t = j_102(t);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  t = downup_1_0(h_10, t);
  {
    ATerm o_49 = t;
    int q_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        LocalPopChoice(q_49);
      }
    else
      {
        t = o_49;
      }
  }
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = repeat_2_0(Simplify_0_0, _id, t);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = inline_sdef_0_0(t);
  {
    ATerm r_49 = t;
    int s_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        LocalPopChoice(s_49);
      }
    else
      {
        t = r_49;
      }
  }
  return(t);
}
ATerm inline_sdefs_0_0 (ATerm t)
{
  t = map_1_0(g_10, t);
  t = map_1_0(i_10, t);
  return(t);
}
static ATerm r_14 (ATerm c_50, ATerm d_50, ATerm t)
{
  ATerm j_135 = NULL;
  t = SSL_fputc(c_50, d_50);
  j_135 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_135);
  return(t);
}
static ATerm s_14 (ATerm t_31, ATerm u_31, ATerm t)
{
  ATerm k_135 = NULL;
  t = SSL_write_term_to_stream_text(t_31, u_31);
  k_135 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_135);
  return(t);
}
static ATerm u_14 (ATerm r_109 (ATerm), ATerm t_225, ATerm x_31, ATerm t)
{
  ATerm l_135 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_225, term_v_49);
  t = x_14(t);
  l_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_135, x_31);
  t = r_109(t);
  t = fclose_0_0(t);
  t = x_31;
  return(t);
}
static ATerm t_14 (ATerm p_31, ATerm q_31, ATerm t)
{
  ATerm m_135 = NULL;
  t = SSL_write_term_to_stream_baf(p_31, q_31);
  m_135 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_135);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm p_135 = NULL,q_135 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_49 = ATgetArgument(t, 0);
      if(match_cons(w_49, sym_Stream_1))
        {
          p_135 = ATgetArgument(w_49, 0);
        }
      else
        _fail(t);
      q_135 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_14(p_135, q_135, t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm r_135 = NULL,s_135 = NULL,t_135 = NULL,u_135 = NULL,v_135 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_50 = ATgetArgument(t, 0);
      if(match_cons(b_50, sym_Stream_1))
        {
          u_135 = ATgetArgument(b_50, 0);
        }
      else
        _fail(t);
      v_135 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_14(u_135, v_135, t);
  r_135 = t;
  t = term_i_50;
  s_135 = t;
  t = r_135;
  if(match_cons(t, sym_Stream_1))
    {
      t_135 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_i_50, r_135);
  t = r_14(s_135, t_135, t);
  return(t);
}
ATerm output_1_0 (ATerm a_128 (ATerm), ATerm t)
{
  ATerm n_135 = NULL,o_135 = NULL;
  t = a_128(t);
  o_135 = t;
  {
    ATerm j_50 = t;
    int k_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_50;
        t = get_config_0_0(t);
        LocalPopChoice(k_50);
      }
    else
      {
        t = j_50;
        t = term_m_50;
      }
  }
  n_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_135, o_135);
  {
    ATerm s_50 = t;
    int t_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_50;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, n_135, o_135);
        LocalPopChoice(t_50);
        if(match_cons(t, sym__2))
          {
            ATerm x_50 = ATgetArgument(t, 0);
            ATerm y_50 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_14(m_10, n_135, o_135, t);
      }
    else
      {
        t = s_50;
        if(match_cons(t, sym__2))
          {
            ATerm z_50 = ATgetArgument(t, 0);
            ATerm a_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_14(n_10, n_135, o_135, t);
      }
  }
  return(t);
}
static ATerm j_136 (ATerm d_136, ATerm t)
{
  t = SSL_fclose(d_136);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_136 = NULL,h_136 = NULL;
  h_136 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_136 = ATgetArgument(t, 0);
      {
        ATerm d_51 = t;
        int e_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_136);
            LocalPopChoice(e_51);
          }
        else
          {
            t = d_51;
            t = j_136(h_136, t);
          }
      }
    }
  else
    {
      t = j_136(h_136, t);
    }
  return(t);
}
static ATerm v_14 (ATerm v_31, ATerm t)
{
  t = SSL_read_term_from_stream(v_31);
  return(t);
}
static ATerm w_14 (ATerm e_50, ATerm f_50, ATerm t)
{
  ATerm k_136 = NULL;
  t = SSL_fopen(e_50, f_50);
  k_136 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_136);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_136 = NULL;
  t = SSL_stdin_stream();
  l_136 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_136);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_136 = NULL;
  t = SSL_stdout_stream();
  m_136 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_136);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_136 = NULL;
  t = SSL_stderr_stream();
  n_136 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_136);
  return(t);
}
static ATerm u_137 (ATerm t_136, ATerm t)
{
  ATerm u_136 = NULL;
  t = SSL_explode_term(t_136);
  if(match_cons(t, sym__2))
    {
      ATerm f_51 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_51) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_51 = ATgetArgument(t, 1);
        if(((ATgetType(g_51) == AT_LIST) && !(ATisEmpty(g_51))))
          {
            u_136 = ATgetFirst((ATermList) g_51);
            {
              ATerm h_51 = (ATerm) ATgetNext((ATermList) g_51);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_136;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_136;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_136;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_136;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm v_137 (ATerm x_136, ATerm y_136, ATerm z_136, ATerm t)
{
  ATerm a_137 = NULL,b_137 = NULL,c_137 = NULL,f_137 = NULL,y_6 = NULL;
  t = SSLgetAnnotations(z_136);
  c_137 = t;
  t = x_136;
  if(match_cons(t, sym_Path_1))
    {
      f_137 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_137, y_136);
  y_6 = t;
  t = SSLsetAnnotations(y_6, c_137);
  if(match_cons(t, sym__2))
    {
      a_137 = ATgetArgument(t, 0);
      b_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_14(a_137, b_137, t);
  return(t);
}
static ATerm w_137 (ATerm h_137, ATerm i_137, ATerm j_137, ATerm t)
{
  ATerm k_137 = NULL,l_137 = NULL,m_137 = NULL,p_137 = NULL,c_7 = NULL;
  t = SSLgetAnnotations(j_137);
  m_137 = t;
  t = SSL_is_string(h_137);
  p_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_137, i_137);
  c_7 = t;
  t = SSLsetAnnotations(c_7, m_137);
  if(match_cons(t, sym__2))
    {
      k_137 = ATgetArgument(t, 0);
      l_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_14(k_137, l_137, t);
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm r_137 = NULL,s_137 = NULL,t_137 = NULL;
  r_137 = t;
  if(match_cons(t, sym__2))
    {
      s_137 = ATgetArgument(t, 0);
      t_137 = ATgetArgument(t, 1);
      {
        ATerm i_51 = t;
        int j_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_137(r_137, t);
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
                  t = v_137(s_137, t_137, r_137, t);
                  LocalPopChoice(l_51);
                }
              else
                {
                  t = k_51;
                  t = w_137(s_137, t_137, r_137, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_137(r_137, t);
    }
  return(t);
}
static ATerm o_10 (ATerm t)
{
  t = term_m_51;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_137 = NULL,y_137 = NULL,z_137 = NULL;
  ATerm n_51 = t;
  int o_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_138 = NULL;
      a_138 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_138, term_p_51);
      t = x_14(t);
      LocalPopChoice(o_51);
    }
  else
    {
      t = n_51;
      t = debug_1_0(o_10, t);
      _fail(t);
    }
  y_137 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_137 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_14(z_137, t);
  x_137 = t;
  t = y_137;
  t = fclose_0_0(t);
  t = x_137;
  return(t);
}
ATerm input_1_0 (ATerm b_128 (ATerm), ATerm t)
{
  ATerm q_51 = t;
  int r_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_51;
      t = get_config_0_0(t);
      LocalPopChoice(r_51);
    }
  else
    {
      t = q_51;
      t = term_u_51;
    }
  t = ReadFromFile_0_0(t);
  t = b_128(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_138 = NULL,d_138 = NULL,e_138 = NULL,f_138 = NULL,g_138 = NULL;
  c_138 = t;
  t = term_x_51;
  t = whoami_0_0(t);
  d_138 = t;
  t = term_y_51;
  f_138 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_52), d_138), term_z_51);
  g_138 = t;
  t = SSL_printnl(f_138, g_138);
  t = term_t_13;
  e_138 = t;
  t = SSL_exit(e_138);
  t = c_138;
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm i_138 = NULL;
  i_138 = t;
  if(match_string(t, "-k"))
    {
      t = i_138;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = i_138;
    }
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm j_138 = NULL,k_138 = NULL,l_138 = NULL;
  j_138 = t;
  t = SSL_string_to_int(j_138);
  k_138 = t;
  t = term_d_52;
  l_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_52, k_138);
  t = g_15(l_138, k_138, t);
  t = j_138;
  return(t);
}
static ATerm r_10 (ATerm t)
{
  t = term_e_52;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_10, q_10, r_10, t);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm n_138 = NULL;
  n_138 = t;
  if(match_string(t, "-S"))
    {
      t = n_138;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_138;
    }
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm o_138 = NULL,p_138 = NULL;
  t = term_f_52;
  o_138 = t;
  t = term_k_44;
  p_138 = t;
  t = term_g_52;
  t = g_15(o_138, p_138, t);
  t = term_h_52;
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_j_52;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm q_138 = NULL,r_138 = NULL,s_138 = NULL;
  q_138 = t;
  t = SSL_string_to_int(q_138);
  r_138 = t;
  t = term_f_52;
  s_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_52, r_138);
  t = g_15(s_138, r_138, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_138);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = term_k_52;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm t_138 = NULL,u_138 = NULL;
  t = term_l_52;
  t_138 = t;
  t = term_x_51;
  u_138 = t;
  t = term_m_52;
  t = g_15(t_138, u_138, t);
  t = term_n_52;
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = term_q_52;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_52 = t;
  int v_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_10, u_10, w_10, t);
      LocalPopChoice(v_52);
    }
  else
    {
      t = u_52;
      {
        ATerm w_52 = t;
        int x_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_10, z_10, a_11, t);
            LocalPopChoice(x_52);
          }
        else
          {
            t = w_52;
            t = Option_3_0(b_11, c_11, d_11, t);
          }
      }
    }
  return(t);
}
static ATerm g_15 (ATerm s_52, ATerm t_52, ATerm t)
{
  ATerm v_138 = NULL;
  t = term_z_52;
  v_138 = t;
  t = SSL_table_put(v_138, s_52, t_52);
  t = (ATerm) ATmakeAppl(sym__3, term_z_52, s_52, t_52);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm y_138 = NULL,z_138 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_139 = NULL,b_139 = NULL,c_139 = NULL;
      t = term_x_51;
      t = e_0(t);
      a_139 = t;
      t = term_a_53;
      b_139 = t;
      t = term_b_53;
      c_139 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_53, term_b_53, a_139);
      t = e_15(b_139, c_139, a_139, t);
      _fail(t);
    }
  else
    {
      ATerm f_139 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_138 = ATgetFirst((ATermList) t);
          z_138 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_138;
      t = b_0(t);
      t = term_x_51;
      t = c_0(t);
      f_139 = t;
      t = (ATerm) ATinsert(CheckATermList(z_138), f_139);
    }
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm h_139 = NULL;
  h_139 = t;
  if(match_string(t, "-o"))
    {
      t = h_139;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_139;
    }
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm i_139 = NULL,j_139 = NULL;
  i_139 = t;
  t = term_l_50;
  j_139 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_50, i_139);
  t = g_15(j_139, i_139, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_139);
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = term_c_53;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_11, g_11, h_11, t);
  return(t);
}
static ATerm e_15 (ATerm v_34, ATerm y_34, ATerm u_34, ATerm t)
{
  ATerm l_139 = NULL,m_139 = NULL,n_139 = NULL;
  l_139 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_34, y_34);
  {
    ATerm d_53 = t;
    int f_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_53 = ATgetArgument(t, 0);
            ATerm h_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_34, y_34);
        t = d_15(v_34, y_34, t);
        LocalPopChoice(f_53);
      }
    else
      {
        t = d_53;
        t = (ATerm) ATempty;
      }
  }
  m_139 = t;
  t = (ATerm) ATinsert(CheckATermList(m_139), u_34);
  n_139 = t;
  t = SSL_table_put(v_34, y_34, n_139);
  t = l_139;
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm u_139 = NULL,v_139 = NULL,w_139 = NULL,x_139 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_139 = NULL,z_139 = NULL,a_140 = NULL;
      t = term_x_51;
      t = l_0(t);
      y_139 = t;
      t = term_a_53;
      z_139 = t;
      t = term_b_53;
      a_140 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_53, term_b_53, y_139);
      t = e_15(z_139, a_140, y_139, t);
      _fail(t);
    }
  else
    {
      ATerm e_140 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_139 = ATgetFirst((ATermList) t);
          v_139 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_139;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_139 = ATgetFirst((ATermList) t);
          x_139 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_139;
      t = i_0(t);
      t = w_139;
      t = j_0(t);
      e_140 = t;
      t = (ATerm) ATinsert(CheckATermList(x_139), e_140);
    }
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm g_140 = NULL;
  g_140 = t;
  if(match_string(t, "-i"))
    {
      t = g_140;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_140;
    }
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm h_140 = NULL,i_140 = NULL;
  h_140 = t;
  t = term_s_51;
  i_140 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_51, h_140);
  t = g_15(i_140, h_140, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_140);
  return(t);
}
static ATerm m_11 (ATerm t)
{
  t = term_i_53;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_11, l_11, m_11, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_140 = NULL,k_140 = NULL,l_140 = NULL,m_140 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_51;
  t = whoami_0_0(t);
  j_140 = t;
  t = term_y_51;
  l_140 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_53), j_140);
  m_140 = t;
  t = SSL_printnl(l_140, m_140);
  t = term_t_13;
  k_140 = t;
  t = SSL_exit(k_140);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_k_53;
  t = get_config_0_0(t);
  return(t);
}
static ATerm z_14 (ATerm x_32, ATerm y_32, ATerm t)
{
  ATerm l_53 = t;
  int m_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_32, y_32);
      LocalPopChoice(m_53);
    }
  else
    {
      t = l_53;
      t = SSL_addr(x_32, y_32);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_115 (ATerm), ATerm o_115 (ATerm), ATerm t)
{
  ATerm o_140 = NULL,p_140 = NULL,q_140 = NULL;
  o_140 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_140;
      t = n_115(t);
    }
  else
    {
      ATerm t_140 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_140 = ATgetFirst((ATermList) t);
          q_140 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_140;
      t = foldr_2_0(n_115, o_115, t);
      t_140 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_140, t_140);
      t = o_115(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm n_11 (ATerm t)
{
  t = term_k_44;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm z_56 = NULL,a_57 = NULL;
  if(match_cons(t, sym__2))
    {
      z_56 = ATgetArgument(t, 0);
      a_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_14(z_56, a_57, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_140 = NULL,u_56 = NULL,v_56 = NULL;
  t = times_0_0(t);
  v_56 = t;
  t = SSL_explode_term(v_56);
  if(match_cons(t, sym__2))
    {
      ATerm o_53 = ATgetArgument(t, 0);
      u_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_56;
  t = foldr_2_0(n_11, o_11, t);
  w_140 = t;
  t = SSL_TicksToSeconds(w_140);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_141 = NULL,i_141 = NULL,j_141 = NULL;
  h_141 = t;
  if(match_cons(t, sym__2))
    {
      i_141 = ATgetArgument(t, 0);
      j_141 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_53 = t;
    int q_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_141;
        if((i_141 != t))
          {
            _fail(t);
          }
        t = h_141;
        LocalPopChoice(q_53);
      }
    else
      {
        t = p_53;
        t = (ATerm) ATmakeAppl(sym__2, i_141, j_141);
        {
          ATerm r_53 = t;
          int s_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_141, j_141);
              LocalPopChoice(s_53);
            }
          else
            {
              t = r_53;
              t = SSL_gtr(i_141, j_141);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, i_141, j_141);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_125 (ATerm), ATerm t)
{
  ATerm n_141 = NULL;
  n_141 = t;
  {
    ATerm t_53 = t;
    int u_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_141 = NULL;
        t = term_f_52;
        t = get_config_0_0(t);
        p_141 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_141, term_t_13);
        t = geq_0_0(t);
        t = n_141;
        t = g_125(t);
        LocalPopChoice(u_53);
      }
    else
      {
        t = t_53;
        t = n_141;
      }
  }
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm r_141 = NULL,s_141 = NULL,u_141 = NULL,v_141 = NULL;
  t = run_time_0_0(t);
  r_141 = t;
  t = term_x_51;
  t = whoami_0_0(t);
  s_141 = t;
  t = term_y_51;
  u_141 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_53), r_141), term_v_53), s_141);
  v_141 = t;
  t = SSL_printnl(u_141, v_141);
  t = (ATerm) ATmakeAppl(sym__2, term_y_51, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_53), r_141), term_v_53), s_141));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_141 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_44;
  w_141 = t;
  t = SSL_exit(w_141);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm e_142 = NULL,f_142 = NULL;
  f_142 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = f_142;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          e_142 = ATgetArgument(t, 0);
          {
            ATerm t_57 = NULL,f_7 = NULL;
            t = SSLgetAnnotations(f_142);
            t_57 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_142);
            f_7 = t;
            t = SSLsetAnnotations(f_7, t_57);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = f_142;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_127 (ATerm), ATerm t)
{
  ATerm x_53 = t;
  int y_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_53;
      t = get_config_0_0(t);
      LocalPopChoice(y_53);
    }
  else
    {
      t = x_53;
      t = fetch_1_0(q_11, t);
    }
  t = r_127(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm i_142 = NULL,j_142 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_142 = ATgetFirst((ATermList) t);
      j_142 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_142 = NULL,o_142 = NULL;
        static ATerm r_11 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_142)), not_null(o_142));
          return(t);
        }
        t = j_142;
        t = h_0(t);
        if(((n_142 != NULL) && (n_142 != t)))
          _fail(t);
        else
          n_142 = t;
        t = i_142;
        t = f_0(t);
        if(((o_142 != NULL) && (o_142 != t)))
          _fail(t);
        else
          o_142 = t;
        t = j_142;
        t = reverse_acc_2_0(f_0, r_11, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_51;
      t = h_0(t);
    }
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm s_142 = NULL,t_142 = NULL,u_142 = NULL,h_7 = NULL;
  u_142 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_142);
  s_142 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_142);
  h_7 = t;
  t = SSLsetAnnotations(h_7, s_142);
  return(t);
}
static ATerm t_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm w_142 = NULL;
  w_142 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_142), term_a_54);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_142 = NULL,r_142 = NULL;
  ATerm c_54 = t;
  int d_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_53;
      t = get_config_0_0(t);
      LocalPopChoice(d_54);
    }
  else
    {
      t = c_54;
      t = fetch_1_0(s_11, t);
    }
  t = term_e_54;
  t = echo_0_0(t);
  t = term_a_53;
  q_142 = t;
  t = term_b_53;
  r_142 = t;
  t = term_g_54;
  t = d_15(q_142, r_142, t);
  t = reverse_acc_2_0(_id, t_11, t);
  t = map_1_0(v_11, t);
  return(t);
}
ATerm fetch_1_0 (ATerm w_110 (ATerm), ATerm t)
{
  static ATerm t_143 (ATerm t)
  {
    ATerm q_143 = NULL,r_143 = NULL,s_143 = NULL;
    q_143 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_143 = ATgetFirst((ATermList) t);
        s_143 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_54 = t;
      int i_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_58 = NULL,r_58 = NULL,j_7 = NULL;
          t = SSLgetAnnotations(q_143);
          n_58 = t;
          t = r_143;
          t = w_110(t);
          r_58 = t;
          t = (ATerm) ATinsert(CheckATermList(s_143), r_58);
          j_7 = t;
          t = SSLsetAnnotations(j_7, n_58);
          LocalPopChoice(i_54);
        }
      else
        {
          t = h_54;
          {
            ATerm d_59 = NULL,g_59 = NULL,l_7 = NULL;
            t = SSLgetAnnotations(q_143);
            d_59 = t;
            t = s_143;
            t = t_143(t);
            g_59 = t;
            t = (ATerm) ATinsert(CheckATermList(g_59), r_143);
            l_7 = t;
            t = SSLsetAnnotations(l_7, d_59);
          }
        }
    }
    return(t);
  }
  t = t_143(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_143 = NULL,y_143 = NULL,z_143 = NULL;
  x_143 = t;
  {
    ATerm j_54 = t;
    int l_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_143;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_54 = ATgetFirst((ATermList) t);
                ATerm n_54 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_143;
          }
        LocalPopChoice(l_54);
      }
    else
      {
        t = j_54;
        t = (ATerm) ATinsert(ATempty, x_143);
      }
  }
  y_143 = t;
  t = term_m_50;
  z_143 = t;
  t = SSL_printnl(z_143, y_143);
  t = x_143;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_k_53;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_15 (ATerm w_48, ATerm x_48, ATerm t)
{
  t = SSL_strcat(w_48, x_48);
  return(t);
}
ATerm debug_1_0 (ATerm p_109 (ATerm), ATerm t)
{
  ATerm d_144 = NULL,e_144 = NULL,f_144 = NULL,g_144 = NULL;
  d_144 = t;
  t = p_109(t);
  e_144 = t;
  t = term_y_51;
  f_144 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_144), e_144);
  g_144 = t;
  t = SSL_printnl(f_144, g_144);
  t = d_144;
  return(t);
}
ATerm map_1_0 (ATerm m_110 (ATerm), ATerm t)
{
  static ATerm v_144 (ATerm t)
  {
    ATerm s_144 = NULL,t_144 = NULL,u_144 = NULL;
    s_144 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_144;
      }
    else
      {
        ATerm r_59 = NULL,u_59 = NULL,z_59 = NULL,n_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_144 = ATgetFirst((ATermList) t);
            u_144 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_144);
        r_59 = t;
        t = t_144;
        t = m_110(t);
        u_59 = t;
        t = u_144;
        t = v_144(t);
        z_59 = t;
        t = (ATerm) ATinsert(CheckATermList(z_59), u_59);
        n_9 = t;
        t = SSLsetAnnotations(n_9, r_59);
      }
    return(t);
  }
  t = v_144(t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm o_54 = t;
  int p_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(p_54);
    }
  else
    {
      t = o_54;
    }
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = term_r_54;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm s_54 = t;
  int u_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_145 = NULL;
      d_145 = t;
      t = SSL_is_string(d_145);
      LocalPopChoice(u_54);
    }
  else
    {
      t = s_54;
      {
        ATerm v_54 = t;
        int x_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(w_11, t);
            LocalPopChoice(x_54);
          }
        else
          {
            t = v_54;
            {
              ATerm j_145 = NULL,k_145 = NULL,l_145 = NULL;
              j_145 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_145 = ATgetArgument(t, 0);
                  t = k_145;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_145 = ATgetArgument(t, 0);
                      t = k_145;
                      {
                        ATerm y_54 = t;
                        int z_54 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(z_54);
                          }
                        else
                          {
                            t = y_54;
                            t = debug_1_0(x_11, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm p_145 = NULL,q_145 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_145 = ATgetArgument(t, 0);
                          l_145 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_145;
                      t = eval_config_0_0(t);
                      p_145 = t;
                      t = l_145;
                      t = eval_config_0_0(t);
                      q_145 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_145, q_145);
                      t = c_15(p_145, q_145, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_15 (ATerm b_37, ATerm c_37, ATerm t)
{
  t = SSL_table_get(b_37, c_37);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm u_145 = NULL,v_145 = NULL;
  u_145 = t;
  t = term_z_52;
  v_145 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_52, u_145);
  t = d_15(v_145, u_145, t);
  {
    ATerm a_55 = t;
    int c_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_145 = NULL,x_145 = NULL;
        t = eval_config_0_0(t);
        w_145 = t;
        t = term_z_52;
        x_145 = t;
        t = SSL_table_put(x_145, u_145, w_145);
        t = w_145;
        LocalPopChoice(c_55);
      }
    else
      {
        t = a_55;
      }
  }
  return(t);
}
static ATerm y_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm a_146 = NULL,b_146 = NULL;
  t = term_d_55;
  a_146 = t;
  t = term_x_51;
  b_146 = t;
  t = term_e_55;
  t = g_15(a_146, b_146, t);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = term_g_55;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm c_146 = NULL,d_146 = NULL,e_146 = NULL,f_146 = NULL;
  t = term_d_55;
  e_146 = t;
  t = term_x_51;
  f_146 = t;
  t = term_e_55;
  t = g_15(e_146, f_146, t);
  t = term_h_55;
  c_146 = t;
  t = term_x_51;
  d_146 = t;
  t = term_i_55;
  t = g_15(c_146, d_146, t);
  t = term_j_55;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_k_55;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_55 = t;
  int m_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_11, c_12, d_12, t);
      LocalPopChoice(m_55);
    }
  else
    {
      t = l_55;
      t = Option_3_0(e_12, f_12, g_12, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm t)
{
  ATerm g_146 = NULL,h_146 = NULL,i_146 = NULL,j_146 = NULL,k_146 = NULL,l_146 = NULL,r_9 = NULL;
  l_146 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_146 = ATgetFirst((ATermList) t);
      i_146 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_146);
  g_146 = t;
  t = h_146;
  t = y_86(t);
  j_146 = t;
  t = i_146;
  t = z_86(t);
  k_146 = t;
  t = (ATerm) ATinsert(CheckATermList(k_146), j_146);
  r_9 = t;
  t = SSLsetAnnotations(r_9, g_146);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_129 (ATerm), ATerm t)
{
  ATerm q_146 = NULL,r_146 = NULL,s_146 = NULL,t_146 = NULL,v_146 = NULL,w_146 = NULL,t_9 = NULL;
  q_146 = t;
  {
    ATerm o_55 = t;
    int p_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_55;
        t = u_129(t);
        LocalPopChoice(p_55);
      }
    else
      {
        t = o_55;
      }
  }
  t = q_146;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_146 = ATgetFirst((ATermList) t);
      t_146 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_146);
  r_146 = t;
  t = term_k_53;
  w_146 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_53, s_146);
  t = g_15(w_146, s_146, t);
  t = t_146;
  {
    static ATerm h_147 (ATerm t)
    {
      ATerm r_55 = t;
      int s_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_55 = t;
          int u_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_147 = NULL;
              a_147 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_147;
              LocalPopChoice(u_55);
            }
          else
            {
              t = t_55;
              t = u_129(t);
              t = Cons_2_0(_id, h_147, t);
            }
          LocalPopChoice(s_55);
        }
      else
        {
          t = r_55;
          {
            ATerm d_147 = NULL,e_147 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_147 = ATgetFirst((ATermList) t);
                e_147 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(e_147), (ATerm) ATmakeAppl(sym_Undefined_1, d_147));
          }
        }
      return(t);
    }
    t = h_147(t);
  }
  v_146 = t;
  t = (ATerm) ATinsert(CheckATermList(v_146), (ATerm) ATmakeAppl(sym_Program_1, s_146));
  t_9 = t;
  t = SSLsetAnnotations(t_9, r_146);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm t_147 = NULL;
  t_147 = t;
  if(match_string(t, "--help"))
    {
      t = t_147;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_147;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_147;
        }
    }
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm u_147 = NULL,v_147 = NULL;
  t = term_z_53;
  u_147 = t;
  t = term_x_51;
  v_147 = t;
  t = term_v_55;
  t = g_15(u_147, v_147, t);
  t = term_w_55;
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = term_x_55;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_129 (ATerm), ATerm t)
{
  ATerm m_147 = NULL,n_147 = NULL,o_147 = NULL,p_147 = NULL,q_147 = NULL,r_147 = NULL,s_147 = NULL;
  o_147 = t;
  t = term_a_53;
  q_147 = t;
  t = term_b_53;
  r_147 = t;
  t = (ATerm) ATempty;
  s_147 = t;
  t = SSL_table_put(q_147, r_147, s_147);
  t = o_147;
  {
    static ATerm h_12 (ATerm t)
    {
      ATerm y_55 = t;
      int z_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_129(t);
          LocalPopChoice(z_55);
        }
      else
        {
          t = y_55;
          {
            ATerm a_56 = t;
            int c_56 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_12, j_12, k_12, t);
                LocalPopChoice(c_56);
              }
            else
              {
                t = a_56;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_12, t);
  }
  {
    ATerm d_56 = t;
    int e_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_148 = NULL;
        d_148 = t;
        {
          ATerm f_56 = t;
          int g_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_61 = NULL;
              t = d_148;
              {
                ATerm h_56 = t;
                int i_56 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_z_53;
                    t = get_config_0_0(t);
                    LocalPopChoice(i_56);
                  }
                else
                  {
                    t = h_56;
                    t = fetch_1_0(l_12, t);
                  }
              }
              t = d_148;
              t = default_system_usage_0_0(t);
              t = term_k_44;
              h_61 = t;
              t = SSL_exit(h_61);
              LocalPopChoice(g_56);
            }
          else
            {
              t = f_56;
              {
                ATerm n_61 = NULL;
                t = term_d_55;
                t = get_config_0_0(t);
                t = d_148;
                t = default_system_about_0_0(t);
                t = term_k_44;
                n_61 = t;
                t = SSL_exit(n_61);
              }
            }
        }
        LocalPopChoice(e_56);
      }
    else
      {
        t = d_56;
        {
          ATerm j_56 = t;
          int k_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_148 = NULL,f_148 = NULL,g_148 = NULL;
              static ATerm m_12 (ATerm t)
              {
                ATerm h_148 = NULL,i_148 = NULL,j_148 = NULL,c_10 = NULL;
                j_148 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    i_148 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_148);
                h_148 = t;
                t = i_148;
                if(((m_147 != NULL) && (m_147 != t)))
                  _fail(t);
                else
                  m_147 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, i_148);
                c_10 = t;
                t = SSLsetAnnotations(c_10, h_148);
                return(t);
              }
              t = fetch_1_0(m_12, t);
              t = term_y_51;
              f_148 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_147)), term_l_56);
              g_148 = t;
              t = SSL_printnl(f_148, g_148);
              t = (ATerm) ATmakeAppl(sym__2, term_y_51, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_147)), term_l_56));
              t = default_system_usage_0_0(t);
              t = term_t_13;
              e_148 = t;
              t = SSL_exit(e_148);
              LocalPopChoice(k_56);
            }
          else
            {
              t = j_56;
            }
        }
      }
  }
  n_147 = t;
  t = term_a_53;
  p_147 = t;
  t = SSL_table_destroy(p_147);
  t = n_147;
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_127 (ATerm), ATerm u_127 (ATerm), ATerm v_127 (ATerm), ATerm w_127 (ATerm), ATerm t)
{
  ATerm o_148 = NULL,p_148 = NULL,q_148 = NULL,r_148 = NULL;
  t = parse_options_1_0(t_127, t);
  o_148 = t;
  t = term_n_56;
  r_148 = t;
  t = SSL_table_create(r_148);
  t = term_n_56;
  p_148 = t;
  t = term_o_56;
  q_148 = t;
  t = SSL_table_put(p_148, q_148, o_148);
  t = o_148;
  t = v_127(t);
  {
    ATerm p_56 = t;
    int q_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_127, t);
        LocalPopChoice(q_56);
      }
    else
      {
        t = p_56;
        {
          ATerm r_56 = t;
          int s_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_127(t);
              t = report_success_0_0(t);
              LocalPopChoice(s_56);
            }
          else
            {
              t = r_56;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm t_56 = t;
  int w_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(w_56);
    }
  else
    {
      t = t_56;
      {
        ATerm x_56 = t;
        int y_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(y_56);
          }
        else
          {
            t = x_56;
            {
              ATerm b_57 = t;
              int c_57 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(b_13, c_13, d_13, t);
                  LocalPopChoice(c_57);
                }
              else
                {
                  t = b_57;
                  {
                    ATerm d_57 = t;
                    int e_57 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(e_57);
                      }
                    else
                      {
                        t = d_57;
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
static ATerm y_12 (ATerm t)
{
  t = input_1_0(e_13, t);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm t_148 = NULL,u_148 = NULL;
  t = term_w_50;
  t_148 = t;
  t = term_x_51;
  u_148 = t;
  t = term_f_57;
  t = g_15(t_148, u_148, t);
  t = term_g_57;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = term_h_57;
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = output_1_0(g_13, t);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm w_148 = NULL,x_148 = NULL,y_148 = NULL,z_148 = NULL,a_149 = NULL,b_149 = NULL,c_149 = NULL,d_149 = NULL,e_149 = NULL,f_149 = NULL,g_149 = NULL,h_149 = NULL,i_149 = NULL,j_149 = NULL,k_149 = NULL,l_10 = NULL,k_10 = NULL,j_10 = NULL,e_10 = NULL;
  k_149 = t;
  if(match_cons(t, sym_Specification_1))
    {
      x_148 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_149);
  w_148 = t;
  t = x_148;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_148 = ATgetFirst((ATermList) t);
      a_149 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_148);
  y_148 = t;
  t = a_149;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_149 = ATgetFirst((ATermList) t);
      e_149 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_149);
  c_149 = t;
  t = d_149;
  if(match_cons(t, sym_Strategies_1))
    {
      h_149 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_149);
  g_149 = t;
  t = h_149;
  t = inline_sdefs_0_0(t);
  i_149 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, i_149);
  e_10 = t;
  t = SSLsetAnnotations(e_10, g_149);
  j_149 = t;
  t = e_149;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_149), j_149);
  j_10 = t;
  t = SSLsetAnnotations(j_10, c_149);
  f_149 = t;
  t = (ATerm) ATinsert(CheckATermList(f_149), z_148);
  k_10 = t;
  t = SSLsetAnnotations(k_10, y_148);
  b_149 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, b_149);
  l_10 = t;
  t = SSLsetAnnotations(l_10, w_148);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(w_12, default_usage_0_0, _id, y_12, t);
  return(t);
}

