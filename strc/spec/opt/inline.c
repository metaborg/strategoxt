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
ATerm term_b_58;
ATerm term_l_57;
ATerm term_j_57;
ATerm term_i_57;
ATerm term_h_57;
ATerm term_c_57;
ATerm term_b_57;
ATerm term_a_57;
ATerm term_h_56;
ATerm term_f_56;
ATerm term_e_56;
ATerm term_u_55;
ATerm term_o_55;
ATerm term_j_55;
ATerm term_h_55;
ATerm term_e_55;
ATerm term_d_55;
ATerm term_b_55;
ATerm term_a_55;
ATerm term_u_54;
ATerm term_t_54;
ATerm term_q_54;
ATerm term_p_54;
ATerm term_l_54;
ATerm term_k_54;
ATerm term_a_54;
ATerm term_z_53;
ATerm term_y_53;
ATerm term_x_53;
ATerm term_q_53;
ATerm term_p_53;
ATerm term_m_53;
ATerm term_l_53;
ATerm term_f_53;
ATerm term_e_53;
ATerm term_d_53;
ATerm term_c_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_y_52;
ATerm term_x_52;
ATerm term_w_52;
ATerm term_u_52;
ATerm term_t_52;
ATerm term_s_52;
ATerm term_m_52;
ATerm term_d_52;
ATerm term_y_51;
ATerm term_v_51;
ATerm term_g_51;
ATerm term_a_51;
ATerm term_x_50;
ATerm term_o_45;
ATerm term_y_44;
ATerm term_u_44;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_b_36;
ATerm term_o_35;
ATerm term_t_34;
ATerm term_e_17;
ATerm term_w_16;
ATerm term_v_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
void init_constant_terms (void)
{
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(50);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(sym__2, term_s_52, term_y_44);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_44);
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(sym__2, term_c_53, term_z_13);
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(sym__2, term_l_53, term_m_53);
  ATprotect(&(term_a_55));
  term_a_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(sym__2, term_a_55, term_z_13);
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(sym__2, term_e_55, term_z_13);
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_55));
  term_u_55 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(sym__2, term_p_54, term_z_13);
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_56));
  term_h_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(sym__2, term_h_57, term_z_13);
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_58));
  term_b_58 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm AddSDef_0_0 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm term_size_0_0 (ATerm);
ATerm Seq_2_0 (ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm);
ATerm l_1 (ATerm);
ATerm body_to_inline_0_0 (ATerm);
ATerm inlineable_0_0 (ATerm);
ATerm x_6 (ATerm q_38, ATerm r_38, ATerm);
ATerm bottomup_1_0 (ATerm m_98 (ATerm), ATerm);
ATerm j_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm t_2 (ATerm);
ATerm w_2 (ATerm);
ATerm y_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm k_3 (ATerm);
ATerm simplify_0_0 (ATerm);
ATerm SubsArgCall2_0_0 (ATerm);
ATerm SubsArgCall1_0_0 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm substitute_arg_0_0 (ATerm);
ATerm o_3 (ATerm);
ATerm q_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm substitute_args_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm spaste_1_0 (ATerm p_97 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm);
ATerm q_4 (ATerm);
ATerm s_12 (ATerm r_23, ATerm q_23, ATerm);
ATerm SVar_1_0 (ATerm p_86 (ATerm), ATerm);
ATerm e_13 (ATerm a_112 (ATerm), ATerm b_112 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm s_40, ATerm r_40, ATerm q_40, ATerm);
ATerm new_0_0 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm f_13 (ATerm u_111 (ATerm), ATerm v_111 (ATerm (ATerm), ATerm), ATerm k_40, ATerm n_40, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm i_112 (ATerm), ATerm);
ATerm rename_4_0 (ATerm p_111 (ATerm (ATerm), ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm s_111 (ATerm (ATerm), ATerm), ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm k_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm tpaste_1_0 (ATerm l_97 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm);
ATerm v_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm y_12 (ATerm z_106 (ATerm), ATerm a_32, ATerm z_31, ATerm);
ATerm z_12 (ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm e_32, ATerm d_32, ATerm);
ATerm a_13 (ATerm u_106 (ATerm), ATerm y_31, ATerm x_31, ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm c_13 (ATerm z_549, ATerm e_550, ATerm v_54, ATerm);
ATerm while_not_2_0 (ATerm d_116 (ATerm), ATerm e_116 (ATerm), ATerm);
ATerm for_3_0 (ATerm g_116 (ATerm), ATerm h_116 (ATerm), ATerm i_116 (ATerm), ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm p_6 (ATerm);
ATerm k_110 (ATerm u_108, ATerm v_108, ATerm w_108, ATerm);
ATerm r_6 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm w_6 (ATerm);
ATerm y_6 (ATerm);
ATerm a_7 (ATerm);
ATerm c_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm free_vars_3_0 (ATerm s_113 (ATerm), ATerm t_113 (ATerm), ATerm u_113 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm h_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm g_83 (ATerm), ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm InlineCall_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm foldr_3_0 (ATerm p_109 (ATerm), ATerm q_109 (ATerm), ATerm r_109 (ATerm), ATerm);
ATerm g_8 (ATerm);
ATerm i_8 (ATerm);
ATerm occurrences_1_0 (ATerm g_107 (ATerm), ATerm);
ATerm k_13 (ATerm q_96 (ATerm), ATerm u_22, ATerm t_22, ATerm);
ATerm m_13 (ATerm z_110 (ATerm), ATerm x_37, ATerm v_37, ATerm);
ATerm o_13 (ATerm k_38, ATerm l_38, ATerm);
ATerm end_scope_1_0 (ATerm w_110 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm v_110 (ATerm), ATerm);
ATerm scope_2_0 (ATerm x_110 (ATerm), ATerm y_110 (ATerm), ATerm);
ATerm w_8 (ATerm);
ATerm y_8 (ATerm);
ATerm b_9 (ATerm);
ATerm inline_sdef_0_0 (ATerm);
ATerm topdown_1_0 (ATerm l_98 (ATerm), ATerm);
ATerm i_9 (ATerm);
ATerm r_13 (ATerm p_67, ATerm o_67, ATerm);
ATerm MatchBuildIdemVar_0_0 (ATerm);
ATerm BuildMatchIdem_0_0 (ATerm);
ATerm MatchIdem_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildBuild_0_0 (ATerm);
ATerm genzip_4_0 (ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm p_9 (ATerm);
ATerm q_9 (ATerm);
ATerm s_9 (ATerm);
ATerm t_9 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm p_99 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm c_105 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm p_129 (ATerm g_129, ATerm);
ATerm conc_0_0 (ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm g_10 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm o_115 (ATerm), ATerm);
ATerm downup_1_0 (ATerm n_98 (ATerm), ATerm);
ATerm k_10 (ATerm);
ATerm l_10 (ATerm);
ATerm m_10 (ATerm);
ATerm inline_sdefs_0_0 (ATerm);
ATerm y_14 (ATerm h_73, ATerm i_73, ATerm);
ATerm z_14 (ATerm g_76, ATerm h_76, ATerm);
ATerm b_15 (ATerm z_125 (ATerm), ATerm y_734, ATerm k_76, ATerm);
ATerm a_15 (ATerm c_76, ATerm d_76, ATerm);
ATerm o_10 (ATerm);
ATerm q_10 (ATerm);
ATerm s_10 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm u_120 (ATerm), ATerm);
ATerm r_139 (ATerm l_139, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm c_15 (ATerm i_76, ATerm);
ATerm e_15 (ATerm j_73, ATerm k_73, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm c_141 (ATerm b_140, ATerm);
ATerm d_141 (ATerm f_140, ATerm g_140, ATerm h_140, ATerm);
ATerm e_141 (ATerm p_140, ATerm q_140, ATerm r_140, ATerm);
ATerm f_15 (ATerm);
ATerm u_10 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm w_104 (ATerm), ATerm);
ATerm x_14 (ATerm p_46, ATerm q_46, ATerm);
ATerm debug_1_0 (ATerm x_125 (ATerm), ATerm);
ATerm v_10 (ATerm);
ATerm x_10 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm i_119 (ATerm), ATerm);
ATerm a_11 (ATerm);
ATerm b_11 (ATerm);
ATerm c_11 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm f_11 (ATerm);
ATerm g_11 (ATerm);
ATerm h_11 (ATerm);
ATerm j_11 (ATerm);
ATerm k_11 (ATerm);
ATerm n_11 (ATerm);
ATerm p_11 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm l_15 (ATerm v_48, ATerm w_48, ATerm);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm q_11 (ATerm);
ATerm r_11 (ATerm);
ATerm s_11 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm j_15 (ATerm f_38, ATerm g_38, ATerm e_38, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm t_11 (ATerm);
ATerm u_11 (ATerm);
ATerm v_11 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm g_15 (ATerm h_36, ATerm j_36, ATerm);
ATerm foldr_2_0 (ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm w_11 (ATerm);
ATerm y_11 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm h_119 (ATerm), ATerm);
ATerm z_11 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm a_12 (ATerm);
ATerm need_help_1_0 (ATerm s_121 (ATerm), ATerm);
ATerm map_1_0 (ATerm m_104 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm i_15 (ATerm w_39, ATerm x_39, ATerm);
ATerm g_12 (ATerm);
ATerm h_12 (ATerm);
ATerm i_12 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm j_12 (ATerm);
ATerm l_12 (ATerm);
ATerm m_12 (ATerm);
ATerm q_12 (ATerm);
ATerm r_12 (ATerm);
ATerm t_12 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm x_81 (ATerm), ATerm y_81 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm v_123 (ATerm), ATerm);
ATerm g_13 (ATerm);
ATerm h_13 (ATerm);
ATerm i_13 (ATerm);
ATerm j_13 (ATerm);
ATerm parse_options_1_0 (ATerm u_123 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_121 (ATerm), ATerm v_121 (ATerm), ATerm w_121 (ATerm), ATerm x_121 (ATerm), ATerm);
ATerm p_13 (ATerm);
ATerm s_13 (ATerm);
ATerm t_13 (ATerm);
ATerm u_13 (ATerm);
ATerm v_13 (ATerm);
ATerm iowrap_3_0 (ATerm d_121 (ATerm), ATerm e_121 (ATerm), ATerm f_121 (ATerm), ATerm);
ATerm y_13 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_0 = NULL,o_0 = NULL,p_0 = NULL,r_0 = NULL,s_0 = NULL;
  m_0 = t;
  t = term_z_13;
  t = whoami_0_0(t);
  o_0 = t;
  t = term_a_14;
  r_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_14), o_0), term_b_14);
  s_0 = t;
  t = SSL_printnl(r_0, s_0);
  t = term_d_14;
  p_0 = t;
  t = SSL_exit(p_0);
  t = m_0;
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_e_14;
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm AddSDef_0_0 (ATerm t)
{
  ATerm u_0 = NULL,v_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL;
  u_0 = t;
  {
    ATerm g_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDefT_4))
          {
            v_0 = ATgetArgument(t, 0);
            {
              ATerm i_14 = ATgetArgument(t, 1);
            }
            {
              ATerm j_14 = ATgetArgument(t, 2);
            }
            {
              ATerm k_14 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(h_14);
        {
          ATerm f_1 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL;
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_0), (ATerm)ATempty, (ATerm) ATempty);
          h_1 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_14, u_0);
          i_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_0), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_l_14, u_0));
          t = m_13(z_0, h_1, i_1, t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_0), (ATerm)ATempty, (ATerm) ATempty);
          f_1 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_14, u_0);
          g_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_0), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_m_14, u_0));
          t = m_13(a_1, f_1, g_1, t);
          t = u_0;
        }
      }
    else
      {
        t = g_14;
        if(match_cons(t, sym_ExtSDefInl_4))
          {
            v_0 = ATgetArgument(t, 0);
            w_0 = ATgetArgument(t, 1);
            x_0 = ATgetArgument(t, 2);
            y_0 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, v_0, w_0, x_0, y_0);
        t = AddSDef_0_0(t);
        t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, v_0, w_0, x_0, y_0);
      }
  }
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = term_d_14;
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm c_1 = NULL,o_1 = NULL;
  if(match_cons(t, sym__2))
    {
      c_1 = ATgetArgument(t, 0);
      o_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_15(c_1, o_1, t);
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_d_14;
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm e_2 = NULL,f_2 = NULL;
  if(match_cons(t, sym__2))
    {
      e_2 = ATgetArgument(t, 0);
      f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_15(e_2, f_2, t);
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  ATerm n_14 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_0 = NULL,q_0 = NULL;
      q_0 = t;
      t = SSL_explode_term(q_0);
      if(match_cons(t, sym__2))
        {
          ATerm p_14 = ATgetArgument(t, 0);
          a_0 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_0;
      t = foldr_3_0(d_1, e_1, term_size_0_0, t);
      ;
      LocalPopChoice(o_14);
    }
  else
    {
      t = n_14;
      {
        ATerm t_1 (ATerm t)
        {
          ATerm s_1 = NULL,y_1 = NULL;
          y_1 = t;
          t = SSL_explode_term(y_1);
          if(match_cons(t, sym__2))
            {
              ATerm q_14 = ATgetArgument(t, 0);
              s_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_1;
          t = foldr_3_0(j_1, k_1, t_1, t);
          return(t);
        }
        t = t_1(t);
      }
    }
  return(t);
}
ATerm Seq_2_0 (ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm t)
{
  ATerm u_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL,z_1 = NULL,a_2 = NULL,t_0 = NULL;
  a_2 = t;
  if(match_cons(t, sym_Seq_2))
    {
      v_1 = ATgetArgument(t, 0);
      w_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_2);
  u_1 = t;
  t = v_1;
  t = e_87(t);
  x_1 = t;
  t = w_1;
  t = f_87(t);
  z_1 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, x_1, z_1);
  t_0 = t;
  t = SSLsetAnnotations(t_0, u_1);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL,u_2 = NULL;
  s_8 = t;
  if(match_cons(t, sym_Match_1))
    {
      r_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_8);
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, r_8);
  u_2 = t;
  t = SSLsetAnnotations(u_2, q_8);
  return(t);
}
ATerm body_to_inline_0_0 (ATerm t)
{
  ATerm q_2 = NULL,s_2 = NULL;
  ATerm d_13 (ATerm t)
  {
    ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL,b_13 = NULL;
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
                x_12 = ATgetArgument(t, 0);
                b_13 = ATgetArgument(t, 1);
                v_12 = ATgetArgument(t, 2);
                {
                  ATerm k_2 = NULL,o_2 = NULL,p_2 = NULL,r_2 = NULL,n_1 = NULL,b_1 = NULL;
                  t = SSLgetAnnotations(w_12);
                  k_2 = t;
                  t = x_12;
                  if(match_cons(t, sym_SVar_1))
                    {
                      p_2 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(x_12);
                  o_2 = t;
                  t = (ATerm) ATmakeAppl(sym_SVar_1, p_2);
                  b_1 = t;
                  t = SSLsetAnnotations(b_1, o_2);
                  r_2 = t;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, r_2, b_13, v_12);
                  n_1 = t;
                  t = SSLsetAnnotations(n_1, k_2);
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    x_12 = ATgetArgument(t, 0);
                    b_13 = ATgetArgument(t, 1);
                    v_12 = ATgetArgument(t, 2);
                    {
                      ATerm e_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,q_1 = NULL,p_1 = NULL;
                      t = SSLgetAnnotations(w_12);
                      e_4 = t;
                      t = x_12;
                      if(match_cons(t, sym_SVar_1))
                        {
                          l_4 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(x_12);
                      k_4 = t;
                      t = (ATerm) ATmakeAppl(sym_SVar_1, l_4);
                      p_1 = t;
                      t = SSLsetAnnotations(p_1, k_4);
                      m_4 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, m_4, b_13, v_12);
                      q_1 = t;
                      t = SSLsetAnnotations(q_1, e_4);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Build_1))
                      {
                        x_12 = ATgetArgument(t, 0);
                        {
                          ATerm j_5 = NULL,r_1 = NULL;
                          t = SSLgetAnnotations(w_12);
                          j_5 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, x_12);
                          r_1 = t;
                          t = SSLsetAnnotations(r_1, j_5);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            x_12 = ATgetArgument(t, 0);
                            {
                              ATerm u_6 = NULL,b_2 = NULL;
                              t = SSLgetAnnotations(w_12);
                              u_6 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, x_12);
                              b_2 = t;
                              t = SSLsetAnnotations(b_2, u_6);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                x_12 = ATgetArgument(t, 0);
                                b_13 = ATgetArgument(t, 1);
                                {
                                  ATerm r_14 = t;
                                  int s_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm u_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,d_2 = NULL,c_2 = NULL;
                                      t = SSLgetAnnotations(w_12);
                                      u_7 = t;
                                      t = x_12;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          y_7 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(x_12);
                                      x_7 = t;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, y_7);
                                      c_2 = t;
                                      t = SSLsetAnnotations(c_2, x_7);
                                      z_7 = t;
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_7, b_13);
                                      d_2 = t;
                                      t = SSLsetAnnotations(d_2, u_7);
                                      ;
                                      LocalPopChoice(s_14);
                                    }
                                  else
                                    {
                                      t = r_14;
                                      {
                                        ATerm h_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL,x_2 = NULL,v_2 = NULL;
                                        t = SSLgetAnnotations(w_12);
                                        h_8 = t;
                                        t = x_12;
                                        if(match_cons(t, sym_Scope_2))
                                          {
                                            l_8 = ATgetArgument(t, 0);
                                            m_8 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = SSLgetAnnotations(x_12);
                                        k_8 = t;
                                        t = m_8;
                                        t = Seq_2_0(l_1, _id, t);
                                        n_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Scope_2, l_8, n_8);
                                        v_2 = t;
                                        t = SSLsetAnnotations(v_2, k_8);
                                        o_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, o_8, b_13);
                                        x_2 = t;
                                        t = SSLsetAnnotations(x_2, h_8);
                                      }
                                    }
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    x_12 = ATgetArgument(t, 0);
                                    b_13 = ATgetArgument(t, 1);
                                    {
                                      ATerm t_14 = t;
                                      int u_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm a_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,c_3 = NULL,z_2 = NULL;
                                          t = SSLgetAnnotations(w_12);
                                          a_9 = t;
                                          t = b_13;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              e_9 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = SSLgetAnnotations(b_13);
                                          d_9 = t;
                                          t = (ATerm) ATmakeAppl(sym_Match_1, e_9);
                                          z_2 = t;
                                          t = SSLsetAnnotations(z_2, d_9);
                                          f_9 = t;
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, x_12, f_9);
                                          c_3 = t;
                                          t = SSLsetAnnotations(c_3, a_9);
                                          ;
                                          LocalPopChoice(u_14);
                                        }
                                      else
                                        {
                                          t = t_14;
                                          {
                                            ATerm n_9 = NULL,u_9 = NULL,v_9 = NULL,z_9 = NULL,a_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_3 = NULL,e_3 = NULL,d_3 = NULL;
                                            t = SSLgetAnnotations(w_12);
                                            n_9 = t;
                                            t = b_13;
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                v_9 = ATgetArgument(t, 0);
                                                z_9 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(b_13);
                                            u_9 = t;
                                            t = v_9;
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                d_10 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(v_9);
                                            c_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, d_10);
                                            d_3 = t;
                                            t = SSLsetAnnotations(d_3, c_10);
                                            e_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, e_10, z_9);
                                            e_3 = t;
                                            t = SSLsetAnnotations(e_3, u_9);
                                            a_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, x_12, a_10);
                                            f_3 = t;
                                            t = SSLsetAnnotations(f_3, n_9);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Choice_2))
                                      {
                                        x_12 = ATgetArgument(t, 0);
                                        b_13 = ATgetArgument(t, 1);
                                        {
                                          ATerm t_10 = NULL,y_10 = NULL,z_10 = NULL,g_3 = NULL;
                                          t = SSLgetAnnotations(w_12);
                                          t_10 = t;
                                          t = x_12;
                                          t = d_13(t);
                                          y_10 = t;
                                          t = b_13;
                                          t = d_13(t);
                                          z_10 = t;
                                          t = (ATerm) ATmakeAppl(sym_Choice_2, y_10, z_10);
                                          g_3 = t;
                                          t = SSLsetAnnotations(g_3, t_10);
                                        }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_LChoice_2))
                                          {
                                            x_12 = ATgetArgument(t, 0);
                                            b_13 = ATgetArgument(t, 1);
                                            {
                                              ATerm i_11 = NULL,l_11 = NULL,m_11 = NULL,h_3 = NULL;
                                              t = SSLgetAnnotations(w_12);
                                              i_11 = t;
                                              t = x_12;
                                              t = d_13(t);
                                              l_11 = t;
                                              t = b_13;
                                              t = d_13(t);
                                              m_11 = t;
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, l_11, m_11);
                                              h_3 = t;
                                              t = SSLsetAnnotations(h_3, i_11);
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_GuardedLChoice_3))
                                              {
                                                x_12 = ATgetArgument(t, 0);
                                                b_13 = ATgetArgument(t, 1);
                                                v_12 = ATgetArgument(t, 2);
                                                {
                                                  ATerm x_11 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,i_3 = NULL;
                                                  t = SSLgetAnnotations(w_12);
                                                  x_11 = t;
                                                  t = x_12;
                                                  t = d_13(t);
                                                  c_12 = t;
                                                  t = b_13;
                                                  t = d_13(t);
                                                  d_12 = t;
                                                  t = v_12;
                                                  t = d_13(t);
                                                  e_12 = t;
                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, c_12, d_12, e_12);
                                                  i_3 = t;
                                                  t = SSLsetAnnotations(i_3, x_11);
                                                }
                                              }
                                            else
                                              {
                                                ATerm x_13 = NULL,j_3 = NULL;
                                                if(match_cons(t, sym_Cong_2))
                                                  {
                                                    x_12 = ATgetArgument(t, 0);
                                                    b_13 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSLgetAnnotations(w_12);
                                                x_13 = t;
                                                t = (ATerm) ATmakeAppl(sym_Cong_2, x_12, b_13);
                                                j_3 = t;
                                                t = SSLsetAnnotations(j_3, x_13);
                                              }
                                          }
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
  t = d_13(t);
  q_2 = t;
  t = term_size_0_0(t);
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_2, term_v_14);
  t = leq_0_0(t);
  t = q_2;
  return(t);
}
ATerm inlineable_0_0 (ATerm t)
{
  ATerm k_15 = NULL,o_15 = NULL,r_15 = NULL,w_15 = NULL,x_15 = NULL;
  k_15 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      o_15 = ATgetArgument(t, 0);
      r_15 = ATgetArgument(t, 1);
      w_15 = ATgetArgument(t, 2);
      x_15 = ATgetArgument(t, 3);
      {
        ATerm f_16 = NULL,g_16 = NULL,l_16 = NULL,t_4 = NULL;
        t = SSLgetAnnotations(k_15);
        g_16 = t;
        t = o_15;
        {
          ATerm w_14 = t;
          if((PushChoice() == 0))
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_14;
            }
          f_16 = t;
          t = x_15;
          {
            ATerm d_15 = t;
            if((PushChoice() == 0))
              {
                ATerm m_1 (ATerm t)
                {
                  if(match_cons(t, sym_CallT_3))
                    {
                      ATerm h_15 = ATgetArgument(t, 0);
                      if(match_cons(h_15, sym_SVar_1))
                        {
                          if((f_16 != ATgetArgument(h_15, 0)))
                            {
                              _fail(ATgetArgument(h_15, 0));
                            }
                        }
                      else
                        _fail(t);
                      {
                        ATerm m_15 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm n_15 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1_0(m_1, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = d_15;
              }
            t = x_15;
            t = body_to_inline_0_0(t);
            l_16 = t;
            t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, f_16, r_15, w_15, l_16);
            t_4 = t;
            t = SSLsetAnnotations(t_4, g_16);
          }
        }
      }
    }
  else
    {
      ATerm x_16 = NULL,y_16 = NULL,d_17 = NULL,u_4 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          o_15 = ATgetArgument(t, 0);
          r_15 = ATgetArgument(t, 1);
          w_15 = ATgetArgument(t, 2);
          x_15 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_15);
      y_16 = t;
      t = o_15;
      {
        ATerm p_15 = t;
        if((PushChoice() == 0))
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = p_15;
          }
        x_16 = t;
        t = x_15;
        {
          ATerm q_15 = t;
          if((PushChoice() == 0))
            {
              ATerm g_2 (ATerm t)
              {
                if(match_cons(t, sym_CallT_3))
                  {
                    ATerm s_15 = ATgetArgument(t, 0);
                    if(match_cons(s_15, sym_SVar_1))
                      {
                        if((x_16 != ATgetArgument(s_15, 0)))
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
              t = oncetd_1_0(g_2, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = q_15;
            }
          t = x_15;
          t = body_to_inline_0_0(t);
          d_17 = t;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, x_16, r_15, w_15, d_17);
          u_4 = t;
          t = SSLsetAnnotations(u_4, y_16);
        }
      }
    }
  return(t);
}
ATerm x_6 (ATerm q_38, ATerm r_38, ATerm t)
{
  ATerm a_16 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_38, r_38);
  t = i_15(q_38, r_38, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_16 = ATgetFirst((ATermList) t);
      {
        ATerm v_15 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_16;
  return(t);
}
ATerm bottomup_1_0 (ATerm m_98 (ATerm), ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    t = bottomup_1_0(m_98, t);
    return(t);
  }
  t = SRTS_all(h_2, t);
  t = m_98(t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_15 = ATgetArgument(t, 0);
      if(((ATgetType(y_15) != AT_LIST) || !(ATisEmpty(y_15))))
        _fail(t);
      {
        ATerm z_15 = ATgetArgument(t, 1);
        if(((ATgetType(z_15) != AT_LIST) || !(ATisEmpty(z_15))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,g_32 = NULL,j_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_16 = ATgetArgument(t, 0);
      if(((ATgetType(b_16) == AT_LIST) && !(ATisEmpty(b_16))))
        {
          v_31 = ATgetFirst((ATermList) b_16);
          w_31 = (ATerm) ATgetNext((ATermList) b_16);
        }
      else
        _fail(t);
      {
        ATerm c_16 = ATgetArgument(t, 1);
        if(((ATgetType(c_16) == AT_LIST) && !(ATisEmpty(c_16))))
          {
            g_32 = ATgetFirst((ATermList) c_16);
            j_32 = (ATerm) ATgetNext((ATermList) c_16);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_31, g_32), (ATerm) ATmakeAppl(sym__2, w_31, j_32));
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL;
  if(match_cons(t, sym__2))
    {
      k_32 = ATgetArgument(t, 0);
      l_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_32), k_32);
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm m_32 = NULL,o_32 = NULL;
  if(match_cons(t, sym__2))
    {
      m_32 = ATgetArgument(t, 0);
      o_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_32), (ATerm) ATmakeAppl(sym_Match_1, o_32));
  return(t);
}
ATerm t_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_16 = ATgetArgument(t, 0);
      if(((ATgetType(d_16) != AT_LIST) || !(ATisEmpty(d_16))))
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
ATerm w_2 (ATerm t)
{
  ATerm g_42 = NULL,q_42 = NULL,a_43 = NULL,c_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_16 = ATgetArgument(t, 0);
      if(((ATgetType(h_16) == AT_LIST) && !(ATisEmpty(h_16))))
        {
          g_42 = ATgetFirst((ATermList) h_16);
          q_42 = (ATerm) ATgetNext((ATermList) h_16);
        }
      else
        _fail(t);
      {
        ATerm i_16 = ATgetArgument(t, 1);
        if(((ATgetType(i_16) == AT_LIST) && !(ATisEmpty(i_16))))
          {
            a_43 = ATgetFirst((ATermList) i_16);
            c_43 = (ATerm) ATgetNext((ATermList) i_16);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_42, a_43), (ATerm) ATmakeAppl(sym__2, q_42, c_43));
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL;
  if(match_cons(t, sym__2))
    {
      k_43 = ATgetArgument(t, 0);
      l_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_43), k_43);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL;
  if(match_cons(t, sym__2))
    {
      m_43 = ATgetArgument(t, 0);
      n_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_43), (ATerm) ATmakeAppl(sym_Match_1, n_43));
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm j_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm m_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(k_16);
      {
        ATerm m_61 = NULL,n_61 = NULL;
        m_61 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm n_16 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        n_61 = t;
        t = SSLgetAnnotations(m_61);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_16 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) o_16) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_16 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(p_16) != AT_LIST) || !(ATisEmpty(p_16))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = n_61;
      }
    }
  else
    {
      t = j_16;
      {
        ATerm q_16 = t;
        int r_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm s_16 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) s_16) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm t_16 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(r_16);
            _fail(t);
          }
        else
          {
            t = q_16;
          }
      }
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    ATerm e_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,l_23 = NULL,n_23 = NULL,o_23 = NULL,t_23 = NULL,u_23 = NULL,z_23 = NULL,a_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,i_24 = NULL,j_24 = NULL,o_24 = NULL,q_24 = NULL,r_24 = NULL;
    r_24 = t;
    if(match_cons(t, sym_Test_1))
      {
        q_24 = ATgetArgument(t, 0);
        t = q_24;
        if(match_cons(t, sym_Id_0))
          {
            ATerm u_16 = t;
            int v_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_w_16;
                t = i_2(t);
                ;
                LocalPopChoice(v_16);
              }
            else
              {
                t = u_16;
                {
                  ATerm z_16 = t;
                  int a_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_24 = NULL,w_24 = NULL,z_24 = NULL,c_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,r_25 = NULL;
                      t = r_24;
                      t = new_0_0(t);
                      t_24 = t;
                      t = bottomup_1_0(i_2, t);
                      o_25 = t;
                      t = (ATerm) ATempty;
                      t = i_2(t);
                      r_25 = t;
                      t = (ATerm) ATinsert(CheckATermList(r_25), o_25);
                      t = i_2(t);
                      w_24 = t;
                      t = t_24;
                      t = bottomup_1_0(i_2, t);
                      n_25 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, n_25);
                      t = i_2(t);
                      m_25 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, m_25);
                      t = i_2(t);
                      c_25 = t;
                      t = q_24;
                      t = bottomup_1_0(i_2, t);
                      h_25 = t;
                      t = t_24;
                      t = bottomup_1_0(i_2, t);
                      l_25 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, l_25);
                      t = i_2(t);
                      k_25 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, k_25);
                      t = i_2(t);
                      i_25 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_25, i_25);
                      t = i_2(t);
                      g_25 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_25, g_25);
                      t = i_2(t);
                      z_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, w_24, z_24);
                      t = i_2(t);
                      ;
                      LocalPopChoice(a_17);
                    }
                  else
                    {
                      t = z_16;
                      t = r_24;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm b_17 = t;
                int c_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_e_17;
                    t = i_2(t);
                    ;
                    LocalPopChoice(c_17);
                  }
                else
                  {
                    t = b_17;
                    {
                      ATerm f_17 = t;
                      int g_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm u_25 = NULL,x_25 = NULL,y_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,h_26 = NULL,j_26 = NULL,k_26 = NULL,m_26 = NULL,n_26 = NULL;
                          t = r_24;
                          t = new_0_0(t);
                          u_25 = t;
                          t = bottomup_1_0(i_2, t);
                          m_26 = t;
                          t = (ATerm) ATempty;
                          t = i_2(t);
                          n_26 = t;
                          t = (ATerm) ATinsert(CheckATermList(n_26), m_26);
                          t = i_2(t);
                          x_25 = t;
                          t = u_25;
                          t = bottomup_1_0(i_2, t);
                          k_26 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, k_26);
                          t = i_2(t);
                          j_26 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, j_26);
                          t = i_2(t);
                          a_26 = t;
                          t = q_24;
                          t = bottomup_1_0(i_2, t);
                          c_26 = t;
                          t = u_25;
                          t = bottomup_1_0(i_2, t);
                          h_26 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, h_26);
                          t = i_2(t);
                          e_26 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, e_26);
                          t = i_2(t);
                          d_26 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_26, d_26);
                          t = i_2(t);
                          b_26 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_26, b_26);
                          t = i_2(t);
                          y_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, x_25, y_25);
                          t = i_2(t);
                          ;
                          LocalPopChoice(g_17);
                        }
                      else
                        {
                          t = f_17;
                          t = r_24;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    i_24 = ATgetArgument(t, 0);
                    {
                      ATerm h_17 = t;
                      int i_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, i_24);
                          t = i_2(t);
                          ;
                          LocalPopChoice(i_17);
                        }
                      else
                        {
                          t = h_17;
                          {
                            ATerm j_17 = t;
                            int k_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,u_27 = NULL;
                                t = r_24;
                                t = new_0_0(t);
                                f_27 = t;
                                t = bottomup_1_0(i_2, t);
                                s_27 = t;
                                t = (ATerm) ATempty;
                                t = i_2(t);
                                u_27 = t;
                                t = (ATerm) ATinsert(CheckATermList(u_27), s_27);
                                t = i_2(t);
                                g_27 = t;
                                t = f_27;
                                t = bottomup_1_0(i_2, t);
                                r_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, r_27);
                                t = i_2(t);
                                q_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, q_27);
                                t = i_2(t);
                                i_27 = t;
                                t = q_24;
                                t = bottomup_1_0(i_2, t);
                                k_27 = t;
                                t = f_27;
                                t = bottomup_1_0(i_2, t);
                                p_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, p_27);
                                t = i_2(t);
                                o_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, o_27);
                                t = i_2(t);
                                n_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, k_27, n_27);
                                t = i_2(t);
                                j_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_27, j_27);
                                t = i_2(t);
                                h_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, g_27, h_27);
                                t = i_2(t);
                                ;
                                LocalPopChoice(k_17);
                              }
                            else
                              {
                                t = j_17;
                                t = r_24;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm l_17 = t;
                    int m_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_27 = NULL,g_28 = NULL,h_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL;
                        t = r_24;
                        t = new_0_0(t);
                        y_27 = t;
                        t = bottomup_1_0(i_2, t);
                        t_28 = t;
                        t = (ATerm) ATempty;
                        t = i_2(t);
                        u_28 = t;
                        t = (ATerm) ATinsert(CheckATermList(u_28), t_28);
                        t = i_2(t);
                        g_28 = t;
                        t = y_27;
                        t = bottomup_1_0(i_2, t);
                        s_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, s_28);
                        t = i_2(t);
                        r_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, r_28);
                        t = i_2(t);
                        k_28 = t;
                        t = q_24;
                        t = bottomup_1_0(i_2, t);
                        m_28 = t;
                        t = y_27;
                        t = bottomup_1_0(i_2, t);
                        p_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, p_28);
                        t = i_2(t);
                        o_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, o_28);
                        t = i_2(t);
                        n_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, m_28, n_28);
                        t = i_2(t);
                        l_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, k_28, l_28);
                        t = i_2(t);
                        h_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, g_28, h_28);
                        t = i_2(t);
                        ;
                        LocalPopChoice(m_17);
                      }
                    else
                      {
                        t = l_17;
                        t = r_24;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            q_24 = ATgetArgument(t, 0);
            t = q_24;
            if(match_cons(t, sym_Id_0))
              {
                ATerm n_17 = t;
                int p_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_e_17;
                    t = i_2(t);
                    ;
                    LocalPopChoice(p_17);
                  }
                else
                  {
                    t = n_17;
                    t = r_24;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm q_17 = t;
                    int r_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_w_16;
                        t = i_2(t);
                        ;
                        LocalPopChoice(r_17);
                      }
                    else
                      {
                        t = q_17;
                        t = r_24;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        i_24 = ATgetArgument(t, 0);
                        {
                          ATerm s_17 = t;
                          int t_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, i_24);
                              t = i_2(t);
                              ;
                              LocalPopChoice(t_17);
                            }
                          else
                            {
                              t = s_17;
                              t = r_24;
                            }
                        }
                      }
                    else
                      {
                        t = r_24;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                q_24 = ATgetArgument(t, 0);
                o_24 = ATgetArgument(t, 1);
                t = o_24;
                if(match_cons(t, sym_Id_0))
                  {
                    t = q_24;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = o_24;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = q_24;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                i_24 = ATgetArgument(t, 0);
                                j_24 = ATgetArgument(t, 1);
                                t = q_24;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    i_24 = ATgetArgument(t, 0);
                                    j_24 = ATgetArgument(t, 1);
                                    t = q_24;
                                  }
                                else
                                  {
                                    t = q_24;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        e_24 = ATgetArgument(t, 0);
                        f_24 = ATgetArgument(t, 1);
                        t = e_24;
                        if(match_cons(t, sym_Match_1))
                          {
                            d_24 = ATgetArgument(t, 0);
                            t = d_24;
                            if(match_cons(t, sym_Op_2))
                              {
                                a_24 = ATgetArgument(t, 0);
                                n_23 = ATgetArgument(t, 1);
                                t = q_24;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_24;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm u_17 = t;
                                        int w_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_e_17;
                                            t = i_2(t);
                                            ;
                                            LocalPopChoice(w_17);
                                          }
                                        else
                                          {
                                            t = u_17;
                                            t = r_24;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            i_24 = ATgetArgument(t, 0);
                                            j_24 = ATgetArgument(t, 1);
                                            {
                                              ATerm x_17 = t;
                                              int y_17 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm i_31 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                  t = i_2(t);
                                                  i_31 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_24, i_31);
                                                  t = i_2(t);
                                                  ;
                                                  LocalPopChoice(y_17);
                                                }
                                              else
                                                {
                                                  t = x_17;
                                                  t = r_24;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                i_24 = ATgetArgument(t, 0);
                                                t = i_24;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    c_24 = ATgetArgument(t, 0);
                                                    o_23 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm z_17 = t;
                                                      int a_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, c_24, a_24);
                                                          {
                                                            ATerm b_18 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm o_17 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    o_17 = ATgetArgument(t, 0);
                                                                    if((o_17 != ATgetArgument(t, 1)))
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
                                                                t = b_18;
                                                              }
                                                            t = term_e_17;
                                                            t = bottomup_1_0(i_2, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(a_18);
                                                        }
                                                      else
                                                        {
                                                          t = z_17;
                                                          {
                                                            ATerm c_18 = t;
                                                            int d_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm u_31 = NULL;
                                                                t = a_24;
                                                                if((c_24 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, o_23, n_23);
                                                                t = genzip_4_0(j_2, l_2, m_2, n_2, t);
                                                                u_31 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_31), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, c_24, o_23)), f_24));
                                                                t = bottomup_1_0(i_2, t);
                                                                ;
                                                                LocalPopChoice(d_18);
                                                              }
                                                            else
                                                              {
                                                                t = c_18;
                                                                {
                                                                  ATerm e_18 = t;
                                                                  int f_18 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm a_33 = NULL;
                                                                      t = d_24;
                                                                      if((i_24 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, i_24);
                                                                      t = i_2(t);
                                                                      a_33 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_33, f_24);
                                                                      t = i_2(t);
                                                                      ;
                                                                      LocalPopChoice(f_18);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = e_18;
                                                                      t = r_24;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm g_18 = t;
                                                    int h_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm h_33 = NULL;
                                                        t = d_24;
                                                        if((i_24 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, i_24);
                                                        t = i_2(t);
                                                        h_33 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, h_33, f_24);
                                                        t = i_2(t);
                                                        ;
                                                        LocalPopChoice(h_18);
                                                      }
                                                    else
                                                      {
                                                        t = g_18;
                                                        t = r_24;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    i_24 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm k_18 = t;
                                                      int l_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm m_33 = NULL;
                                                          t = d_24;
                                                          if((i_24 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, i_24);
                                                          t = i_2(t);
                                                          m_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, m_33, f_24);
                                                          t = i_2(t);
                                                          ;
                                                          LocalPopChoice(l_18);
                                                        }
                                                      else
                                                        {
                                                          t = k_18;
                                                          t = r_24;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_24 = ATgetArgument(t, 0);
                                                        j_24 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm n_18 = t;
                                                          int o_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm t_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                              t = i_2(t);
                                                              t_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_24, t_33);
                                                              t = i_2(t);
                                                              ;
                                                              LocalPopChoice(o_18);
                                                            }
                                                          else
                                                            {
                                                              t = n_18;
                                                              t = r_24;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = r_24;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = q_24;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_24;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm p_18 = t;
                                        int q_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_e_17;
                                            t = i_2(t);
                                            ;
                                            LocalPopChoice(q_18);
                                          }
                                        else
                                          {
                                            t = p_18;
                                            t = r_24;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            i_24 = ATgetArgument(t, 0);
                                            j_24 = ATgetArgument(t, 1);
                                            {
                                              ATerm s_18 = t;
                                              int t_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm e_34 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                  t = i_2(t);
                                                  e_34 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_24, e_34);
                                                  t = i_2(t);
                                                  ;
                                                  LocalPopChoice(t_18);
                                                }
                                              else
                                                {
                                                  t = s_18;
                                                  t = r_24;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                i_24 = ATgetArgument(t, 0);
                                                {
                                                  ATerm w_18 = t;
                                                  int d_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm i_34 = NULL;
                                                      t = d_24;
                                                      if((i_24 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, i_24);
                                                      t = i_2(t);
                                                      i_34 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_34, f_24);
                                                      t = i_2(t);
                                                      ;
                                                      LocalPopChoice(d_19);
                                                    }
                                                  else
                                                    {
                                                      t = w_18;
                                                      t = r_24;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    i_24 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm f_19 = t;
                                                      int k_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm m_34 = NULL;
                                                          t = d_24;
                                                          if((i_24 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, i_24);
                                                          t = i_2(t);
                                                          m_34 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, m_34, f_24);
                                                          t = i_2(t);
                                                          ;
                                                          LocalPopChoice(k_19);
                                                        }
                                                      else
                                                        {
                                                          t = f_19;
                                                          t = r_24;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_24 = ATgetArgument(t, 0);
                                                        j_24 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm l_19 = t;
                                                          int m_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                              t = i_2(t);
                                                              r_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_24, r_34);
                                                              t = i_2(t);
                                                              ;
                                                              LocalPopChoice(m_19);
                                                            }
                                                          else
                                                            {
                                                              t = l_19;
                                                              t = r_24;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = r_24;
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
                                d_24 = ATgetArgument(t, 0);
                                t = d_24;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    a_24 = ATgetArgument(t, 0);
                                    t = q_24;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_24;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm n_19 = t;
                                            int o_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_17;
                                                t = i_2(t);
                                                ;
                                                LocalPopChoice(o_19);
                                              }
                                            else
                                              {
                                                t = n_19;
                                                t = r_24;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                i_24 = ATgetArgument(t, 0);
                                                j_24 = ATgetArgument(t, 1);
                                                {
                                                  ATerm p_19 = t;
                                                  int q_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm a_35 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                      t = i_2(t);
                                                      a_35 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_24, a_35);
                                                      t = i_2(t);
                                                      ;
                                                      LocalPopChoice(q_19);
                                                    }
                                                  else
                                                    {
                                                      t = p_19;
                                                      t = r_24;
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
                                                        ATerm t_19 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(s_19);
                                                    {
                                                      ATerm u_19 = t;
                                                      int v_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm h_35 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, d_24);
                                                          t = i_2(t);
                                                          h_35 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_35, f_24);
                                                          t = i_2(t);
                                                          ;
                                                          LocalPopChoice(v_19);
                                                        }
                                                      else
                                                        {
                                                          t = u_19;
                                                          t = r_24;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = r_19;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        i_24 = ATgetArgument(t, 0);
                                                        t = i_24;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            c_24 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm w_19 = t;
                                                              int x_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm p_35 = NULL,v_35 = NULL;
                                                                  t = a_24;
                                                                  if((c_24 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, c_24);
                                                                  t = i_2(t);
                                                                  v_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, v_35);
                                                                  t = i_2(t);
                                                                  p_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_35, f_24);
                                                                  t = i_2(t);
                                                                  ;
                                                                  LocalPopChoice(x_19);
                                                                }
                                                              else
                                                                {
                                                                  t = w_19;
                                                                  t = r_24;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = r_24;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            i_24 = ATgetArgument(t, 0);
                                                            j_24 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm z_19 = t;
                                                              int a_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm d_36 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                                  t = i_2(t);
                                                                  d_36 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, i_24, d_36);
                                                                  t = i_2(t);
                                                                  ;
                                                                  LocalPopChoice(a_20);
                                                                }
                                                              else
                                                                {
                                                                  t = z_19;
                                                                  t = r_24;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = r_24;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = q_24;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_24;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm b_20 = t;
                                            int e_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_17;
                                                t = i_2(t);
                                                ;
                                                LocalPopChoice(e_20);
                                              }
                                            else
                                              {
                                                t = b_20;
                                                t = r_24;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                i_24 = ATgetArgument(t, 0);
                                                j_24 = ATgetArgument(t, 1);
                                                {
                                                  ATerm l_20 = t;
                                                  int n_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm f_37 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                      t = i_2(t);
                                                      f_37 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_24, f_37);
                                                      t = i_2(t);
                                                      ;
                                                      LocalPopChoice(n_20);
                                                    }
                                                  else
                                                    {
                                                      t = l_20;
                                                      t = r_24;
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
                                                          ATerm b_38 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, d_24);
                                                          t = i_2(t);
                                                          b_38 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_38, f_24);
                                                          t = i_2(t);
                                                          ;
                                                          LocalPopChoice(u_20);
                                                        }
                                                      else
                                                        {
                                                          t = t_20;
                                                          t = r_24;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = q_20;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_24 = ATgetArgument(t, 0);
                                                        j_24 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm v_20 = t;
                                                          int w_20 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm v_38 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                              t = i_2(t);
                                                              v_38 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_24, v_38);
                                                              t = i_2(t);
                                                              ;
                                                              LocalPopChoice(w_20);
                                                            }
                                                          else
                                                            {
                                                              t = v_20;
                                                              t = r_24;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = r_24;
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
                                    d_24 = ATgetArgument(t, 0);
                                    t_23 = ATgetArgument(t, 1);
                                    u_23 = ATgetArgument(t, 2);
                                    t = q_24;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_24;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm x_20 = t;
                                            int y_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_17;
                                                t = i_2(t);
                                                ;
                                                LocalPopChoice(y_20);
                                              }
                                            else
                                              {
                                                t = x_20;
                                                t = r_24;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                i_24 = ATgetArgument(t, 0);
                                                j_24 = ATgetArgument(t, 1);
                                                {
                                                  ATerm z_20 = t;
                                                  int a_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm j_39 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                      t = i_2(t);
                                                      j_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_24, j_39);
                                                      t = i_2(t);
                                                      ;
                                                      LocalPopChoice(a_21);
                                                    }
                                                  else
                                                    {
                                                      t = z_20;
                                                      t = r_24;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm b_21 = t;
                                                int d_21 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm e_21 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(d_21);
                                                    {
                                                      ATerm f_21 = t;
                                                      int g_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm r_39 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, d_24, t_23, u_23);
                                                          t = i_2(t);
                                                          r_39 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, r_39, f_24);
                                                          t = i_2(t);
                                                          ;
                                                          LocalPopChoice(g_21);
                                                        }
                                                      else
                                                        {
                                                          t = f_21;
                                                          t = r_24;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = b_21;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_24 = ATgetArgument(t, 0);
                                                        j_24 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_21 = t;
                                                          int p_21 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm y_39 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                              t = i_2(t);
                                                              y_39 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_24, y_39);
                                                              t = i_2(t);
                                                              ;
                                                              LocalPopChoice(p_21);
                                                            }
                                                          else
                                                            {
                                                              t = j_21;
                                                              t = r_24;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = r_24;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = q_24;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_24;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm q_21 = t;
                                            int r_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_17;
                                                t = i_2(t);
                                                ;
                                                LocalPopChoice(r_21);
                                              }
                                            else
                                              {
                                                t = q_21;
                                                t = r_24;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                i_24 = ATgetArgument(t, 0);
                                                j_24 = ATgetArgument(t, 1);
                                                {
                                                  ATerm t_21 = t;
                                                  int u_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm w_40 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                      t = i_2(t);
                                                      w_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_24, w_40);
                                                      t = i_2(t);
                                                      ;
                                                      LocalPopChoice(u_21);
                                                    }
                                                  else
                                                    {
                                                      t = t_21;
                                                      t = r_24;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    i_24 = ATgetArgument(t, 0);
                                                    j_24 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm v_21 = t;
                                                      int w_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm i_41 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                          t = i_2(t);
                                                          i_41 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, i_24, i_41);
                                                          t = i_2(t);
                                                          ;
                                                          LocalPopChoice(w_21);
                                                        }
                                                      else
                                                        {
                                                          t = v_21;
                                                          t = r_24;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = r_24;
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
                            e_24 = ATgetArgument(t, 0);
                            t = e_24;
                            if(match_cons(t, sym_Op_2))
                              {
                                d_24 = ATgetArgument(t, 0);
                                t_23 = ATgetArgument(t, 1);
                                t = q_24;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_24;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm x_21 = t;
                                        int y_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_e_17;
                                            t = i_2(t);
                                            ;
                                            LocalPopChoice(y_21);
                                          }
                                        else
                                          {
                                            t = x_21;
                                            t = r_24;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            i_24 = ATgetArgument(t, 0);
                                            j_24 = ATgetArgument(t, 1);
                                            {
                                              ATerm z_21 = t;
                                              int a_22 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm z_41 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                  t = i_2(t);
                                                  z_41 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_24, z_41);
                                                  t = i_2(t);
                                                  ;
                                                  LocalPopChoice(a_22);
                                                }
                                              else
                                                {
                                                  t = z_21;
                                                  t = r_24;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                i_24 = ATgetArgument(t, 0);
                                                t = i_24;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    c_24 = ATgetArgument(t, 0);
                                                    o_23 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm c_22 = t;
                                                      int f_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, c_24, d_24);
                                                          {
                                                            ATerm g_22 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm v_17 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    v_17 = ATgetArgument(t, 0);
                                                                    if((v_17 != ATgetArgument(t, 1)))
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
                                                                t = g_22;
                                                              }
                                                            t = term_e_17;
                                                            t = bottomup_1_0(i_2, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(f_22);
                                                        }
                                                      else
                                                        {
                                                          t = c_22;
                                                          {
                                                            ATerm h_22 = t;
                                                            int i_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm f_42 = NULL;
                                                                t = d_24;
                                                                if((c_24 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, o_23, t_23);
                                                                t = genzip_4_0(t_2, w_2, y_2, a_3, t);
                                                                f_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, f_42), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, c_24, o_23)));
                                                                t = bottomup_1_0(i_2, t);
                                                                ;
                                                                LocalPopChoice(i_22);
                                                              }
                                                            else
                                                              {
                                                                t = h_22;
                                                                {
                                                                  ATerm j_22 = t;
                                                                  int k_22 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = e_24;
                                                                      if((i_24 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, i_24);
                                                                      t = i_2(t);
                                                                      ;
                                                                      LocalPopChoice(k_22);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = j_22;
                                                                      t = r_24;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm l_22 = t;
                                                    int m_22 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = e_24;
                                                        if((i_24 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, i_24);
                                                        t = i_2(t);
                                                        ;
                                                        LocalPopChoice(m_22);
                                                      }
                                                    else
                                                      {
                                                        t = l_22;
                                                        t = r_24;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    i_24 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm n_22 = t;
                                                      int o_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = e_24;
                                                          if((i_24 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, i_24);
                                                          t = i_2(t);
                                                          ;
                                                          LocalPopChoice(o_22);
                                                        }
                                                      else
                                                        {
                                                          t = n_22;
                                                          t = r_24;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_24 = ATgetArgument(t, 0);
                                                        j_24 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm p_22 = t;
                                                          int q_22 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_44 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                              t = i_2(t);
                                                              g_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_24, g_44);
                                                              t = i_2(t);
                                                              ;
                                                              LocalPopChoice(q_22);
                                                            }
                                                          else
                                                            {
                                                              t = p_22;
                                                              t = r_24;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = r_24;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = q_24;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_24;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm r_22 = t;
                                        int s_22 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_e_17;
                                            t = i_2(t);
                                            ;
                                            LocalPopChoice(s_22);
                                          }
                                        else
                                          {
                                            t = r_22;
                                            t = r_24;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            i_24 = ATgetArgument(t, 0);
                                            j_24 = ATgetArgument(t, 1);
                                            {
                                              ATerm v_22 = t;
                                              int w_22 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm c_45 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                  t = i_2(t);
                                                  c_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_24, c_45);
                                                  t = i_2(t);
                                                  ;
                                                  LocalPopChoice(w_22);
                                                }
                                              else
                                                {
                                                  t = v_22;
                                                  t = r_24;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                i_24 = ATgetArgument(t, 0);
                                                {
                                                  ATerm x_22 = t;
                                                  int y_22 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = e_24;
                                                      if((i_24 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, i_24);
                                                      t = i_2(t);
                                                      ;
                                                      LocalPopChoice(y_22);
                                                    }
                                                  else
                                                    {
                                                      t = x_22;
                                                      t = r_24;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    i_24 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm a_23 = t;
                                                      int b_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = e_24;
                                                          if((i_24 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, i_24);
                                                          t = i_2(t);
                                                          ;
                                                          LocalPopChoice(b_23);
                                                        }
                                                      else
                                                        {
                                                          t = a_23;
                                                          t = r_24;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_24 = ATgetArgument(t, 0);
                                                        j_24 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm c_23 = t;
                                                          int d_23 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_46 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                              t = i_2(t);
                                                              h_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_24, h_46);
                                                              t = i_2(t);
                                                              ;
                                                              LocalPopChoice(d_23);
                                                            }
                                                          else
                                                            {
                                                              t = c_23;
                                                              t = r_24;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = r_24;
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
                                e_24 = ATgetArgument(t, 0);
                                t = e_24;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    d_24 = ATgetArgument(t, 0);
                                    t = q_24;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_24;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm f_23 = t;
                                            int p_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_17;
                                                t = i_2(t);
                                                ;
                                                LocalPopChoice(p_23);
                                              }
                                            else
                                              {
                                                t = f_23;
                                                t = r_24;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                i_24 = ATgetArgument(t, 0);
                                                j_24 = ATgetArgument(t, 1);
                                                {
                                                  ATerm g_24 = t;
                                                  int k_24 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm g_47 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                      t = i_2(t);
                                                      g_47 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_24, g_47);
                                                      t = i_2(t);
                                                      ;
                                                      LocalPopChoice(k_24);
                                                    }
                                                  else
                                                    {
                                                      t = g_24;
                                                      t = r_24;
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
                                                        ATerm s_24 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(p_24);
                                                    {
                                                      ATerm u_24 = t;
                                                      int v_24 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, e_24);
                                                          t = i_2(t);
                                                          ;
                                                          LocalPopChoice(v_24);
                                                        }
                                                      else
                                                        {
                                                          t = u_24;
                                                          t = r_24;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = n_24;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        i_24 = ATgetArgument(t, 0);
                                                        t = i_24;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            c_24 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm x_24 = t;
                                                              int y_24 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm u_47 = NULL;
                                                                  t = d_24;
                                                                  if((c_24 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, c_24);
                                                                  t = i_2(t);
                                                                  u_47 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, u_47);
                                                                  t = i_2(t);
                                                                  ;
                                                                  LocalPopChoice(y_24);
                                                                }
                                                              else
                                                                {
                                                                  t = x_24;
                                                                  t = r_24;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = r_24;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            i_24 = ATgetArgument(t, 0);
                                                            j_24 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm a_25 = t;
                                                              int b_25 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm j_48 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                                  t = i_2(t);
                                                                  j_48 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, i_24, j_48);
                                                                  t = i_2(t);
                                                                  ;
                                                                  LocalPopChoice(b_25);
                                                                }
                                                              else
                                                                {
                                                                  t = a_25;
                                                                  t = r_24;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = r_24;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = q_24;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_24;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm d_25 = t;
                                            int e_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_17;
                                                t = i_2(t);
                                                ;
                                                LocalPopChoice(e_25);
                                              }
                                            else
                                              {
                                                t = d_25;
                                                t = r_24;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                i_24 = ATgetArgument(t, 0);
                                                j_24 = ATgetArgument(t, 1);
                                                {
                                                  ATerm f_25 = t;
                                                  int p_25 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm y_48 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                      t = i_2(t);
                                                      y_48 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_24, y_48);
                                                      t = i_2(t);
                                                      ;
                                                      LocalPopChoice(p_25);
                                                    }
                                                  else
                                                    {
                                                      t = f_25;
                                                      t = r_24;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm q_25 = t;
                                                int s_25 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm t_25 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(s_25);
                                                    {
                                                      ATerm w_25 = t;
                                                      int z_25 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, e_24);
                                                          t = i_2(t);
                                                          ;
                                                          LocalPopChoice(z_25);
                                                        }
                                                      else
                                                        {
                                                          t = w_25;
                                                          t = r_24;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = q_25;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_24 = ATgetArgument(t, 0);
                                                        j_24 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm f_26 = t;
                                                          int g_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_49 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                              t = i_2(t);
                                                              q_49 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_24, q_49);
                                                              t = i_2(t);
                                                              ;
                                                              LocalPopChoice(g_26);
                                                            }
                                                          else
                                                            {
                                                              t = f_26;
                                                              t = r_24;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = r_24;
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
                                    e_24 = ATgetArgument(t, 0);
                                    f_24 = ATgetArgument(t, 1);
                                    z_23 = ATgetArgument(t, 2);
                                    t = q_24;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_24;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm i_26 = t;
                                            int l_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_17;
                                                t = i_2(t);
                                                ;
                                                LocalPopChoice(l_26);
                                              }
                                            else
                                              {
                                                t = i_26;
                                                t = r_24;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                i_24 = ATgetArgument(t, 0);
                                                j_24 = ATgetArgument(t, 1);
                                                {
                                                  ATerm o_26 = t;
                                                  int q_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm j_50 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                      t = i_2(t);
                                                      j_50 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_24, j_50);
                                                      t = i_2(t);
                                                      ;
                                                      LocalPopChoice(q_26);
                                                    }
                                                  else
                                                    {
                                                      t = o_26;
                                                      t = r_24;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm r_26 = t;
                                                int u_26 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm v_26 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(u_26);
                                                    {
                                                      ATerm w_26 = t;
                                                      int x_26 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, e_24, f_24, z_23);
                                                          t = i_2(t);
                                                          ;
                                                          LocalPopChoice(x_26);
                                                        }
                                                      else
                                                        {
                                                          t = w_26;
                                                          t = r_24;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = r_26;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_24 = ATgetArgument(t, 0);
                                                        j_24 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm y_26 = t;
                                                          int z_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_51 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                              t = i_2(t);
                                                              n_51 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_24, n_51);
                                                              t = i_2(t);
                                                              ;
                                                              LocalPopChoice(z_26);
                                                            }
                                                          else
                                                            {
                                                              t = y_26;
                                                              t = r_24;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = r_24;
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
                                        e_24 = ATgetArgument(t, 0);
                                        f_24 = ATgetArgument(t, 1);
                                        t = q_24;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = o_24;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm a_27 = t;
                                                int b_27 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_e_17;
                                                    t = i_2(t);
                                                    ;
                                                    LocalPopChoice(b_27);
                                                  }
                                                else
                                                  {
                                                    t = a_27;
                                                    {
                                                      ATerm c_27 = t;
                                                      int d_27 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm f_52 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, q_24, f_24);
                                                          t = i_2(t);
                                                          f_52 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, e_24, f_52);
                                                          t = i_2(t);
                                                          ;
                                                          LocalPopChoice(d_27);
                                                        }
                                                      else
                                                        {
                                                          t = c_27;
                                                          t = r_24;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    i_24 = ATgetArgument(t, 0);
                                                    j_24 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm e_27 = t;
                                                      int m_27 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm o_52 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                          t = i_2(t);
                                                          o_52 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_24, o_52);
                                                          t = i_2(t);
                                                          ;
                                                          LocalPopChoice(m_27);
                                                        }
                                                      else
                                                        {
                                                          t = e_27;
                                                          {
                                                            ATerm t_27 = t;
                                                            int v_27 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm v_52 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, q_24, f_24);
                                                                t = i_2(t);
                                                                v_52 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, e_24, v_52);
                                                                t = i_2(t);
                                                                ;
                                                                LocalPopChoice(v_27);
                                                              }
                                                            else
                                                              {
                                                                t = t_27;
                                                                t = r_24;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        i_24 = ATgetArgument(t, 0);
                                                        j_24 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm w_27 = t;
                                                          int x_27 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_53 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, q_24, f_24);
                                                              t = i_2(t);
                                                              h_53 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, e_24, h_53);
                                                              t = i_2(t);
                                                              ;
                                                              LocalPopChoice(x_27);
                                                            }
                                                          else
                                                            {
                                                              t = w_27;
                                                              {
                                                                ATerm c_28 = t;
                                                                int d_28 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm o_53 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                                    t = i_2(t);
                                                                    o_53 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, i_24, o_53);
                                                                    t = i_2(t);
                                                                    ;
                                                                    LocalPopChoice(d_28);
                                                                  }
                                                                else
                                                                  {
                                                                    t = c_28;
                                                                    t = r_24;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm e_28 = t;
                                                        int f_28 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm w_53 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, q_24, f_24);
                                                            t = i_2(t);
                                                            w_53 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, e_24, w_53);
                                                            t = i_2(t);
                                                            ;
                                                            LocalPopChoice(f_28);
                                                          }
                                                        else
                                                          {
                                                            t = e_28;
                                                            t = r_24;
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
                                            e_24 = ATgetArgument(t, 0);
                                            f_24 = ATgetArgument(t, 1);
                                            t = q_24;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = o_24;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm i_28 = t;
                                                    int j_28 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_e_17;
                                                        t = i_2(t);
                                                        ;
                                                        LocalPopChoice(j_28);
                                                      }
                                                    else
                                                      {
                                                        t = i_28;
                                                        {
                                                          ATerm q_28 = t;
                                                          int v_28 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm o_54 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, q_24, f_24);
                                                              t = i_2(t);
                                                              o_54 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_24, o_54);
                                                              t = i_2(t);
                                                              ;
                                                              LocalPopChoice(v_28);
                                                            }
                                                          else
                                                            {
                                                              t = q_28;
                                                              t = r_24;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        i_24 = ATgetArgument(t, 0);
                                                        j_24 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm w_28 = t;
                                                          int x_28 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_55 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                              t = i_2(t);
                                                              i_55 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_24, i_55);
                                                              t = i_2(t);
                                                              ;
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
                                                                    ATerm w_55 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, q_24, f_24);
                                                                    t = i_2(t);
                                                                    w_55 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, e_24, w_55);
                                                                    t = i_2(t);
                                                                    ;
                                                                    LocalPopChoice(z_28);
                                                                  }
                                                                else
                                                                  {
                                                                    t = y_28;
                                                                    t = r_24;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            i_24 = ATgetArgument(t, 0);
                                                            j_24 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm a_29 = t;
                                                              int b_29 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm g_56 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_24, f_24);
                                                                  t = i_2(t);
                                                                  g_56 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, e_24, g_56);
                                                                  t = i_2(t);
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
                                                                        ATerm k_56 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                                        t = i_2(t);
                                                                        k_56 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, i_24, k_56);
                                                                        t = i_2(t);
                                                                        ;
                                                                        LocalPopChoice(d_29);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = c_29;
                                                                        t = r_24;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm f_29 = t;
                                                            int g_29 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm s_56 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, q_24, f_24);
                                                                t = i_2(t);
                                                                s_56 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, e_24, s_56);
                                                                t = i_2(t);
                                                                ;
                                                                LocalPopChoice(g_29);
                                                              }
                                                            else
                                                              {
                                                                t = f_29;
                                                                t = r_24;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = q_24;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = o_24;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm h_29 = t;
                                                    int i_29 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_e_17;
                                                        t = i_2(t);
                                                        ;
                                                        LocalPopChoice(i_29);
                                                      }
                                                    else
                                                      {
                                                        t = h_29;
                                                        t = r_24;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        i_24 = ATgetArgument(t, 0);
                                                        j_24 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm k_29 = t;
                                                          int m_29 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm k_57 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                              t = i_2(t);
                                                              k_57 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_24, k_57);
                                                              t = i_2(t);
                                                              ;
                                                              LocalPopChoice(m_29);
                                                            }
                                                          else
                                                            {
                                                              t = k_29;
                                                              t = r_24;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            i_24 = ATgetArgument(t, 0);
                                                            j_24 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm n_29 = t;
                                                              int o_29 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm t_57 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, j_24, o_24);
                                                                  t = i_2(t);
                                                                  t_57 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, i_24, t_57);
                                                                  t = i_2(t);
                                                                  ;
                                                                  LocalPopChoice(o_29);
                                                                }
                                                              else
                                                                {
                                                                  t = n_29;
                                                                  t = r_24;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = r_24;
                                                          }
                                                      }
                                                  }
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
                    q_24 = ATgetArgument(t, 0);
                    o_24 = ATgetArgument(t, 1);
                    t = o_24;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = q_24;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm q_29 = t;
                            int s_29 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_w_16;
                                t = i_2(t);
                                ;
                                LocalPopChoice(s_29);
                              }
                            else
                              {
                                t = q_29;
                                t = q_24;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = o_24;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    i_24 = ATgetArgument(t, 0);
                                    j_24 = ATgetArgument(t, 1);
                                    t = q_24;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        i_24 = ATgetArgument(t, 0);
                                        t = q_24;
                                      }
                                    else
                                      {
                                        t = q_24;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = q_24;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm t_29 = t;
                            int u_29 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_w_16;
                                t = i_2(t);
                                ;
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
                                      t = o_24;
                                      if((q_24 != t))
                                        {
                                          _fail(t);
                                        }
                                      ;
                                      LocalPopChoice(w_29);
                                    }
                                  else
                                    {
                                      t = v_29;
                                      t = r_24;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = o_24;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    i_24 = ATgetArgument(t, 0);
                                    j_24 = ATgetArgument(t, 1);
                                    {
                                      ATerm x_29 = t;
                                      int y_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm n_60 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, j_24, o_24);
                                          t = i_2(t);
                                          n_60 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, i_24, n_60);
                                          t = i_2(t);
                                          ;
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
                                                t = o_24;
                                                if((q_24 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                ;
                                                LocalPopChoice(a_30);
                                              }
                                            else
                                              {
                                                t = z_29;
                                                t = r_24;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        i_24 = ATgetArgument(t, 0);
                                        {
                                          ATerm b_30 = t;
                                          int c_30 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = o_24;
                                              if((q_24 != t))
                                                {
                                                  _fail(t);
                                                }
                                              ;
                                              LocalPopChoice(c_30);
                                            }
                                          else
                                            {
                                              t = b_30;
                                              {
                                                ATerm d_30 = t;
                                                int e_30 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = i_24;
                                                    t = topdown_1_0(b_3, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, i_24);
                                                    t = bottomup_1_0(i_2, t);
                                                    ;
                                                    LocalPopChoice(e_30);
                                                  }
                                                else
                                                  {
                                                    t = d_30;
                                                    t = r_24;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm f_30 = t;
                                        int g_30 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = o_24;
                                            if((q_24 != t))
                                              {
                                                _fail(t);
                                              }
                                            ;
                                            LocalPopChoice(g_30);
                                          }
                                        else
                                          {
                                            t = f_30;
                                            t = r_24;
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
                        q_24 = ATgetArgument(t, 0);
                        o_24 = ATgetArgument(t, 1);
                        t = o_24;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = q_24;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm h_30 = t;
                                int i_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_w_16;
                                    t = i_2(t);
                                    ;
                                    LocalPopChoice(i_30);
                                  }
                                else
                                  {
                                    t = h_30;
                                    t = o_24;
                                  }
                              }
                            else
                              {
                                ATerm k_30 = t;
                                int l_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_w_16;
                                    t = i_2(t);
                                    ;
                                    LocalPopChoice(l_30);
                                  }
                                else
                                  {
                                    t = k_30;
                                    t = r_24;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = q_24;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm m_30 = t;
                                    int n_30 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_e_17;
                                        t = i_2(t);
                                        ;
                                        LocalPopChoice(n_30);
                                      }
                                    else
                                      {
                                        t = m_30;
                                        t = o_24;
                                      }
                                  }
                                else
                                  {
                                    ATerm o_30 = t;
                                    int p_30 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_e_17;
                                        t = i_2(t);
                                        ;
                                        LocalPopChoice(p_30);
                                      }
                                    else
                                      {
                                        t = o_30;
                                        t = r_24;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    e_24 = ATgetArgument(t, 0);
                                    f_24 = ATgetArgument(t, 1);
                                    t = q_24;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = o_24;
                                      }
                                    else
                                      {
                                        ATerm q_30 = t;
                                        int s_30 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm h_63 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, q_24, e_24);
                                            t = conc_0_0(t);
                                            h_63 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, h_63, f_24);
                                            t = bottomup_1_0(i_2, t);
                                            ;
                                            LocalPopChoice(s_30);
                                          }
                                        else
                                          {
                                            t = q_30;
                                            t = r_24;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = q_24;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = o_24;
                                      }
                                    else
                                      {
                                        t = r_24;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm u_30 = t;
                        int v_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm w_30 = ATgetArgument(t, 0);
                                o_24 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(v_30);
                            t = o_24;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm x_30 = t;
                                int y_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_w_16;
                                    t = i_2(t);
                                    ;
                                    LocalPopChoice(y_30);
                                  }
                                else
                                  {
                                    t = x_30;
                                    t = r_24;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm z_30 = t;
                                    int a_31 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_e_17;
                                        t = i_2(t);
                                        ;
                                        LocalPopChoice(a_31);
                                      }
                                    else
                                      {
                                        t = z_30;
                                        t = r_24;
                                      }
                                  }
                                else
                                  {
                                    t = r_24;
                                  }
                              }
                          }
                        else
                          {
                            t = u_30;
                            if(match_cons(t, sym_All_1))
                              {
                                q_24 = ATgetArgument(t, 0);
                                t = q_24;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm b_31 = t;
                                    int c_31 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_w_16;
                                        t = i_2(t);
                                        ;
                                        LocalPopChoice(c_31);
                                      }
                                    else
                                      {
                                        t = b_31;
                                        t = r_24;
                                      }
                                  }
                                else
                                  {
                                    t = r_24;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    q_24 = ATgetArgument(t, 0);
                                    t = q_24;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm d_31 = t;
                                        int e_31 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_w_16;
                                            t = i_2(t);
                                            ;
                                            LocalPopChoice(e_31);
                                          }
                                        else
                                          {
                                            t = d_31;
                                            {
                                              ATerm f_31 = t;
                                              int g_31 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL;
                                                  t = r_24;
                                                  t = new_0_0(t);
                                                  a_64 = t;
                                                  t = bottomup_1_0(i_2, t);
                                                  s_64 = t;
                                                  t = (ATerm) ATempty;
                                                  t = i_2(t);
                                                  t_64 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(t_64), s_64);
                                                  t = i_2(t);
                                                  b_64 = t;
                                                  t = a_64;
                                                  t = bottomup_1_0(i_2, t);
                                                  r_64 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, r_64);
                                                  t = i_2(t);
                                                  o_64 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, o_64);
                                                  t = i_2(t);
                                                  d_64 = t;
                                                  t = q_24;
                                                  t = bottomup_1_0(i_2, t);
                                                  k_64 = t;
                                                  t = a_64;
                                                  t = bottomup_1_0(i_2, t);
                                                  n_64 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, n_64);
                                                  t = i_2(t);
                                                  m_64 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, m_64);
                                                  t = i_2(t);
                                                  l_64 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, k_64, l_64);
                                                  t = i_2(t);
                                                  e_64 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, d_64, e_64);
                                                  t = i_2(t);
                                                  c_64 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, b_64, c_64);
                                                  t = i_2(t);
                                                  ;
                                                  LocalPopChoice(g_31);
                                                }
                                              else
                                                {
                                                  t = f_31;
                                                  t = r_24;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm h_31 = t;
                                            int j_31 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_17;
                                                t = i_2(t);
                                                ;
                                                LocalPopChoice(j_31);
                                              }
                                            else
                                              {
                                                t = h_31;
                                                {
                                                  ATerm l_31 = t;
                                                  int m_31 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm w_64 = NULL,y_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL,r_65 = NULL,s_65 = NULL,t_65 = NULL;
                                                      t = r_24;
                                                      t = new_0_0(t);
                                                      w_64 = t;
                                                      t = bottomup_1_0(i_2, t);
                                                      s_65 = t;
                                                      t = (ATerm) ATempty;
                                                      t = i_2(t);
                                                      t_65 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(t_65), s_65);
                                                      t = i_2(t);
                                                      y_64 = t;
                                                      t = w_64;
                                                      t = bottomup_1_0(i_2, t);
                                                      r_65 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, r_65);
                                                      t = i_2(t);
                                                      l_65 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, l_65);
                                                      t = i_2(t);
                                                      b_65 = t;
                                                      t = q_24;
                                                      t = bottomup_1_0(i_2, t);
                                                      d_65 = t;
                                                      t = w_64;
                                                      t = bottomup_1_0(i_2, t);
                                                      k_65 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, k_65);
                                                      t = i_2(t);
                                                      j_65 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, j_65);
                                                      t = i_2(t);
                                                      i_65 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_65, i_65);
                                                      t = i_2(t);
                                                      c_65 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_65, c_65);
                                                      t = i_2(t);
                                                      a_65 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, y_64, a_65);
                                                      t = i_2(t);
                                                      ;
                                                      LocalPopChoice(m_31);
                                                    }
                                                  else
                                                    {
                                                      t = l_31;
                                                      t = r_24;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                i_24 = ATgetArgument(t, 0);
                                                j_24 = ATgetArgument(t, 1);
                                                t = j_24;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    g_23 = ATgetArgument(t, 0);
                                                    i_23 = ATgetArgument(t, 1);
                                                    t = g_23;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        h_23 = ATgetArgument(t, 0);
                                                        t = i_24;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            c_24 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm n_31 = t;
                                                              int o_31 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm g_66 = NULL,h_66 = NULL,j_66 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, h_23);
                                                                  t = i_2(t);
                                                                  j_66 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, j_66, i_23);
                                                                  t = i_2(t);
                                                                  h_66 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, c_24, h_66);
                                                                  t = i_2(t);
                                                                  g_66 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, g_66);
                                                                  t = i_2(t);
                                                                  ;
                                                                  LocalPopChoice(o_31);
                                                                }
                                                              else
                                                                {
                                                                  t = n_31;
                                                                  {
                                                                    ATerm p_31 = t;
                                                                    int q_31 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,e_67 = NULL,f_67 = NULL;
                                                                        t = r_24;
                                                                        t = new_0_0(t);
                                                                        n_66 = t;
                                                                        t = bottomup_1_0(i_2, t);
                                                                        e_67 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = i_2(t);
                                                                        f_67 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(f_67), e_67);
                                                                        t = i_2(t);
                                                                        o_66 = t;
                                                                        t = n_66;
                                                                        t = bottomup_1_0(i_2, t);
                                                                        b_67 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, b_67);
                                                                        t = i_2(t);
                                                                        a_67 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, a_67);
                                                                        t = i_2(t);
                                                                        q_66 = t;
                                                                        t = q_24;
                                                                        t = bottomup_1_0(i_2, t);
                                                                        w_66 = t;
                                                                        t = n_66;
                                                                        t = bottomup_1_0(i_2, t);
                                                                        z_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, z_66);
                                                                        t = i_2(t);
                                                                        y_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, y_66);
                                                                        t = i_2(t);
                                                                        x_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, w_66, x_66);
                                                                        t = i_2(t);
                                                                        r_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, q_66, r_66);
                                                                        t = i_2(t);
                                                                        p_66 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, o_66, p_66);
                                                                        t = i_2(t);
                                                                        ;
                                                                        LocalPopChoice(q_31);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = p_31;
                                                                        t = r_24;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm r_31 = t;
                                                            int s_31 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm i_67 = NULL,l_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL,x_67 = NULL,y_67 = NULL,b_68 = NULL,c_68 = NULL,i_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL;
                                                                t = r_24;
                                                                t = new_0_0(t);
                                                                i_67 = t;
                                                                t = bottomup_1_0(i_2, t);
                                                                p_68 = t;
                                                                t = (ATerm) ATempty;
                                                                t = i_2(t);
                                                                q_68 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(q_68), p_68);
                                                                t = i_2(t);
                                                                l_67 = t;
                                                                t = i_67;
                                                                t = bottomup_1_0(i_2, t);
                                                                o_68 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, o_68);
                                                                t = i_2(t);
                                                                i_68 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, i_68);
                                                                t = i_2(t);
                                                                t_67 = t;
                                                                t = q_24;
                                                                t = bottomup_1_0(i_2, t);
                                                                x_67 = t;
                                                                t = i_67;
                                                                t = bottomup_1_0(i_2, t);
                                                                c_68 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, c_68);
                                                                t = i_2(t);
                                                                b_68 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, b_68);
                                                                t = i_2(t);
                                                                y_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, x_67, y_67);
                                                                t = i_2(t);
                                                                u_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, t_67, u_67);
                                                                t = i_2(t);
                                                                s_67 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, l_67, s_67);
                                                                t = i_2(t);
                                                                ;
                                                                LocalPopChoice(s_31);
                                                              }
                                                            else
                                                              {
                                                                t = r_31;
                                                                t = r_24;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = i_24;
                                                        {
                                                          ATerm t_31 = t;
                                                          int b_32 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_68 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL,u_69 = NULL,x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL;
                                                              t = r_24;
                                                              t = new_0_0(t);
                                                              z_68 = t;
                                                              t = bottomup_1_0(i_2, t);
                                                              z_69 = t;
                                                              t = (ATerm) ATempty;
                                                              t = i_2(t);
                                                              a_70 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(a_70), z_69);
                                                              t = i_2(t);
                                                              n_69 = t;
                                                              t = z_68;
                                                              t = bottomup_1_0(i_2, t);
                                                              y_69 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, y_69);
                                                              t = i_2(t);
                                                              x_69 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, x_69);
                                                              t = i_2(t);
                                                              p_69 = t;
                                                              t = q_24;
                                                              t = bottomup_1_0(i_2, t);
                                                              r_69 = t;
                                                              t = z_68;
                                                              t = bottomup_1_0(i_2, t);
                                                              u_69 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, u_69);
                                                              t = i_2(t);
                                                              t_69 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, t_69);
                                                              t = i_2(t);
                                                              s_69 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, r_69, s_69);
                                                              t = i_2(t);
                                                              q_69 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_69, q_69);
                                                              t = i_2(t);
                                                              o_69 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, n_69, o_69);
                                                              t = i_2(t);
                                                              ;
                                                              LocalPopChoice(b_32);
                                                            }
                                                          else
                                                            {
                                                              t = t_31;
                                                              t = r_24;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = i_24;
                                                    {
                                                      ATerm c_32 = t;
                                                      int n_32 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,n_70 = NULL,t_70 = NULL,u_70 = NULL,z_70 = NULL,a_71 = NULL,b_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL;
                                                          t = r_24;
                                                          t = new_0_0(t);
                                                          h_70 = t;
                                                          t = bottomup_1_0(i_2, t);
                                                          h_71 = t;
                                                          t = (ATerm) ATempty;
                                                          t = i_2(t);
                                                          i_71 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(i_71), h_71);
                                                          t = i_2(t);
                                                          i_70 = t;
                                                          t = h_70;
                                                          t = bottomup_1_0(i_2, t);
                                                          g_71 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, g_71);
                                                          t = i_2(t);
                                                          b_71 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, b_71);
                                                          t = i_2(t);
                                                          k_70 = t;
                                                          t = q_24;
                                                          t = bottomup_1_0(i_2, t);
                                                          t_70 = t;
                                                          t = h_70;
                                                          t = bottomup_1_0(i_2, t);
                                                          a_71 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, a_71);
                                                          t = i_2(t);
                                                          z_70 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, z_70);
                                                          t = i_2(t);
                                                          u_70 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, t_70, u_70);
                                                          t = i_2(t);
                                                          n_70 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, k_70, n_70);
                                                          t = i_2(t);
                                                          j_70 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, i_70, j_70);
                                                          t = i_2(t);
                                                          ;
                                                          LocalPopChoice(n_32);
                                                        }
                                                      else
                                                        {
                                                          t = c_32;
                                                          t = r_24;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    i_24 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm p_32 = t;
                                                      int q_32 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, i_24);
                                                          t = i_2(t);
                                                          ;
                                                          LocalPopChoice(q_32);
                                                        }
                                                      else
                                                        {
                                                          t = p_32;
                                                          {
                                                            ATerm r_32 = t;
                                                            int s_32 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL;
                                                                t = r_24;
                                                                t = new_0_0(t);
                                                                q_71 = t;
                                                                t = bottomup_1_0(i_2, t);
                                                                c_72 = t;
                                                                t = (ATerm) ATempty;
                                                                t = i_2(t);
                                                                d_72 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(d_72), c_72);
                                                                t = i_2(t);
                                                                r_71 = t;
                                                                t = q_71;
                                                                t = bottomup_1_0(i_2, t);
                                                                b_72 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, b_72);
                                                                t = i_2(t);
                                                                a_72 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, a_72);
                                                                t = i_2(t);
                                                                t_71 = t;
                                                                t = q_24;
                                                                t = bottomup_1_0(i_2, t);
                                                                v_71 = t;
                                                                t = q_71;
                                                                t = bottomup_1_0(i_2, t);
                                                                y_71 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, y_71);
                                                                t = i_2(t);
                                                                x_71 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, x_71);
                                                                t = i_2(t);
                                                                w_71 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, v_71, w_71);
                                                                t = i_2(t);
                                                                u_71 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, t_71, u_71);
                                                                t = i_2(t);
                                                                s_71 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, r_71, s_71);
                                                                t = i_2(t);
                                                                ;
                                                                LocalPopChoice(s_32);
                                                              }
                                                            else
                                                              {
                                                                t = r_32;
                                                                t = r_24;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm t_32 = t;
                                                    int u_32 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,l_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,t_72 = NULL,w_72 = NULL,y_72 = NULL;
                                                        t = r_24;
                                                        t = new_0_0(t);
                                                        g_72 = t;
                                                        t = bottomup_1_0(i_2, t);
                                                        w_72 = t;
                                                        t = (ATerm) ATempty;
                                                        t = i_2(t);
                                                        y_72 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(y_72), w_72);
                                                        t = i_2(t);
                                                        h_72 = t;
                                                        t = g_72;
                                                        t = bottomup_1_0(i_2, t);
                                                        t_72 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, t_72);
                                                        t = i_2(t);
                                                        r_72 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, r_72);
                                                        t = i_2(t);
                                                        j_72 = t;
                                                        t = q_24;
                                                        t = bottomup_1_0(i_2, t);
                                                        n_72 = t;
                                                        t = g_72;
                                                        t = bottomup_1_0(i_2, t);
                                                        q_72 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, q_72);
                                                        t = i_2(t);
                                                        p_72 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, p_72);
                                                        t = i_2(t);
                                                        o_72 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, n_72, o_72);
                                                        t = i_2(t);
                                                        l_72 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, j_72, l_72);
                                                        t = i_2(t);
                                                        i_72 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, h_72, i_72);
                                                        t = i_2(t);
                                                        ;
                                                        LocalPopChoice(u_32);
                                                      }
                                                    else
                                                      {
                                                        t = t_32;
                                                        t = r_24;
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
                                        q_24 = ATgetArgument(t, 0);
                                        t = q_24;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm v_32 = t;
                                            int w_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_16;
                                                t = i_2(t);
                                                ;
                                                LocalPopChoice(w_32);
                                              }
                                            else
                                              {
                                                t = v_32;
                                                t = r_24;
                                              }
                                          }
                                        else
                                          {
                                            t = r_24;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            q_24 = ATgetArgument(t, 0);
                                            t = q_24;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm x_32 = t;
                                                int z_32 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_e_17;
                                                    t = i_2(t);
                                                    ;
                                                    LocalPopChoice(z_32);
                                                  }
                                                else
                                                  {
                                                    t = x_32;
                                                    t = r_24;
                                                  }
                                              }
                                            else
                                              {
                                                t = r_24;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                q_24 = ATgetArgument(t, 0);
                                                t = q_24;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm b_33 = t;
                                                    int c_33 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_e_17;
                                                        t = i_2(t);
                                                        ;
                                                        LocalPopChoice(c_33);
                                                      }
                                                    else
                                                      {
                                                        t = b_33;
                                                        t = r_24;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = r_24;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm d_33 = t;
                                                int e_33 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm g_33 = ATgetArgument(t, 0);
                                                        o_24 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(e_33);
                                                    t = o_24;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm i_33 = t;
                                                        int j_33 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_e_17;
                                                            t = i_2(t);
                                                            ;
                                                            LocalPopChoice(j_33);
                                                          }
                                                        else
                                                          {
                                                            t = i_33;
                                                            t = r_24;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = r_24;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = d_33;
                                                    {
                                                      ATerm k_33 = t;
                                                      int l_33 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm n_33 = ATgetArgument(t, 0);
                                                              o_24 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(l_33);
                                                          {
                                                            ATerm o_33 = t;
                                                            int p_33 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = o_24;
                                                                t = fetch_1_0(k_3, t);
                                                                t = term_e_17;
                                                                t = bottomup_1_0(i_2, t);
                                                                ;
                                                                LocalPopChoice(p_33);
                                                              }
                                                            else
                                                              {
                                                                t = o_33;
                                                                t = r_24;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = k_33;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              q_24 = ATgetArgument(t, 0);
                                                              o_24 = ATgetArgument(t, 1);
                                                              t = o_24;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = q_24;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = o_24;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          i_24 = ATgetArgument(t, 0);
                                                                          j_24 = ATgetArgument(t, 1);
                                                                          t = q_24;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = q_24;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = q_24;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = o_24;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          i_24 = ATgetArgument(t, 0);
                                                                          j_24 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm q_33 = t;
                                                                            int r_33 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm s_75 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, j_24, o_24);
                                                                                t = i_2(t);
                                                                                s_75 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, i_24, s_75);
                                                                                t = i_2(t);
                                                                                ;
                                                                                LocalPopChoice(r_33);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = q_33;
                                                                                {
                                                                                  ATerm s_33 = t;
                                                                                  int u_33 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = o_24;
                                                                                      if((q_24 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      ;
                                                                                      LocalPopChoice(u_33);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = s_33;
                                                                                      t = r_24;
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
                                                                              t = o_24;
                                                                              if((q_24 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              ;
                                                                              LocalPopChoice(w_33);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = v_33;
                                                                              t = r_24;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  q_24 = ATgetArgument(t, 0);
                                                                  o_24 = ATgetArgument(t, 1);
                                                                  e_23 = ATgetArgument(t, 2);
                                                                  t = e_23;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm x_33 = t;
                                                                      int y_33 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, q_24, o_24);
                                                                          t = i_2(t);
                                                                          ;
                                                                          LocalPopChoice(y_33);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = x_33;
                                                                          t = r_24;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = r_24;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      q_24 = ATgetArgument(t, 0);
                                                                      o_24 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm z_33 = t;
                                                                        int a_34 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, q_24, o_24);
                                                                            t = i_2(t);
                                                                            ;
                                                                            LocalPopChoice(a_34);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = z_33;
                                                                            t = r_24;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          q_24 = ATgetArgument(t, 0);
                                                                          t = q_24;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              i_24 = ATgetFirst((ATermList) t);
                                                                              j_24 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm b_34 = t;
                                                                                int c_34 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm v_76 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, j_24);
                                                                                    t = i_2(t);
                                                                                    v_76 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, i_24, v_76);
                                                                                    t = i_2(t);
                                                                                    ;
                                                                                    LocalPopChoice(c_34);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = b_34;
                                                                                    t = r_24;
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
                                                                                      t = term_e_17;
                                                                                      t = i_2(t);
                                                                                      ;
                                                                                      LocalPopChoice(f_34);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = d_34;
                                                                                      t = r_24;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = r_24;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              q_24 = ATgetArgument(t, 0);
                                                                              t = q_24;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  i_24 = ATgetFirst((ATermList) t);
                                                                                  j_24 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm g_34 = t;
                                                                                    int h_34 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm b_77 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, j_24);
                                                                                        t = i_2(t);
                                                                                        b_77 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, i_24, b_77);
                                                                                        t = i_2(t);
                                                                                        ;
                                                                                        LocalPopChoice(h_34);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = g_34;
                                                                                        t = r_24;
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
                                                                                          t = term_e_17;
                                                                                          t = i_2(t);
                                                                                          ;
                                                                                          LocalPopChoice(k_34);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = j_34;
                                                                                          t = r_24;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = r_24;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  q_24 = ATgetArgument(t, 0);
                                                                                  t = q_24;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      i_24 = ATgetFirst((ATermList) t);
                                                                                      j_24 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm l_34 = t;
                                                                                        int n_34 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm j_77 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, j_24);
                                                                                            t = i_2(t);
                                                                                            j_77 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, i_24, j_77);
                                                                                            t = i_2(t);
                                                                                            ;
                                                                                            LocalPopChoice(n_34);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = l_34;
                                                                                            t = r_24;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm o_34 = t;
                                                                                          int p_34 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_w_16;
                                                                                              t = i_2(t);
                                                                                              ;
                                                                                              LocalPopChoice(p_34);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = o_34;
                                                                                              t = r_24;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = r_24;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      q_24 = ATgetArgument(t, 0);
                                                                                      o_24 = ATgetArgument(t, 1);
                                                                                      e_23 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm q_34 = t;
                                                                                        int s_34 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm s_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL;
                                                                                            t = term_t_34;
                                                                                            t = bottomup_1_0(i_2, t);
                                                                                            t_77 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = i_2(t);
                                                                                            w_77 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(w_77), e_23);
                                                                                            t = i_2(t);
                                                                                            v_77 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(v_77), q_24);
                                                                                            t = i_2(t);
                                                                                            u_77 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, t_77, u_77);
                                                                                            t = i_2(t);
                                                                                            s_77 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, o_24, s_77);
                                                                                            t = i_2(t);
                                                                                            ;
                                                                                            LocalPopChoice(s_34);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = q_34;
                                                                                            t = r_24;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          q_24 = ATgetArgument(t, 0);
                                                                                          o_24 = ATgetArgument(t, 1);
                                                                                          e_23 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm u_34 = t;
                                                                                            int v_34 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm b_78 = NULL,c_78 = NULL,d_78 = NULL,e_78 = NULL,f_78 = NULL,g_78 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, o_24);
                                                                                                t = i_2(t);
                                                                                                c_78 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, e_23);
                                                                                                t = i_2(t);
                                                                                                f_78 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = i_2(t);
                                                                                                g_78 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(g_78), f_78);
                                                                                                t = i_2(t);
                                                                                                e_78 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(e_78), q_24);
                                                                                                t = i_2(t);
                                                                                                d_78 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(d_78), c_78);
                                                                                                t = i_2(t);
                                                                                                b_78 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, b_78);
                                                                                                t = i_2(t);
                                                                                                ;
                                                                                                LocalPopChoice(v_34);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = u_34;
                                                                                                t = r_24;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              q_24 = ATgetArgument(t, 0);
                                                                                              o_24 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm w_34 = t;
                                                                                                int x_34 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm k_78 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, o_24);
                                                                                                    t = i_2(t);
                                                                                                    k_78 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, q_24, k_78);
                                                                                                    t = i_2(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(x_34);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = w_34;
                                                                                                    t = r_24;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  q_24 = ATgetArgument(t, 0);
                                                                                                  o_24 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm y_34 = t;
                                                                                                    int z_34 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm o_78 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, q_24);
                                                                                                        t = i_2(t);
                                                                                                        o_78 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, o_78, o_24);
                                                                                                        t = i_2(t);
                                                                                                        ;
                                                                                                        LocalPopChoice(z_34);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = y_34;
                                                                                                        t = r_24;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      q_24 = ATgetArgument(t, 0);
                                                                                                      o_24 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm b_35 = t;
                                                                                                        int c_35 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm s_78 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, o_24);
                                                                                                            t = i_2(t);
                                                                                                            s_78 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, s_78, q_24);
                                                                                                            t = i_2(t);
                                                                                                            ;
                                                                                                            LocalPopChoice(c_35);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = b_35;
                                                                                                            t = r_24;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          q_24 = ATgetArgument(t, 0);
                                                                                                          o_24 = ATgetArgument(t, 1);
                                                                                                          t = o_24;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              e_24 = ATgetArgument(t, 0);
                                                                                                              f_24 = ATgetArgument(t, 1);
                                                                                                              t = q_24;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = o_24;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm d_35 = t;
                                                                                                                  int e_35 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm h_79 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, q_24, e_24);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      h_79 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, h_79, f_24);
                                                                                                                      t = bottomup_1_0(i_2, t);
                                                                                                                      ;
                                                                                                                      LocalPopChoice(e_35);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = d_35;
                                                                                                                      t = r_24;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  e_24 = ATgetArgument(t, 0);
                                                                                                                  f_24 = ATgetArgument(t, 1);
                                                                                                                  z_23 = ATgetArgument(t, 2);
                                                                                                                  t = z_23;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = f_24;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = e_24;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              d_24 = ATgetArgument(t, 0);
                                                                                                                              t = q_24;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = o_24;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      i_24 = ATgetFirst((ATermList) t);
                                                                                                                                      j_24 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = j_24;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = i_24;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              c_24 = ATgetArgument(t, 0);
                                                                                                                                              o_23 = ATgetArgument(t, 1);
                                                                                                                                              j_23 = ATgetArgument(t, 2);
                                                                                                                                              l_23 = ATgetArgument(t, 3);
                                                                                                                                              t = j_23;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = o_23;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm f_35 = t;
                                                                                                                                                      int g_35 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = d_24;
                                                                                                                                                          if((c_24 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = l_23;
                                                                                                                                                          {
                                                                                                                                                            ATerm j_35 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                ATerm l_3 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm k_35 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(k_35, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((c_24 != ATgetArgument(k_35, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(k_35, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm l_35 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(l_35) != AT_LIST) || !(ATisEmpty(l_35))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm m_35 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(m_35) != AT_LIST) || !(ATisEmpty(m_35))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  return(t);
                                                                                                                                                                }
                                                                                                                                                                t = oncetd_1_0(l_3, t);
                                                                                                                                                                PopChoice();
                                                                                                                                                                _fail(t);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                t = j_35;
                                                                                                                                                              }
                                                                                                                                                            t = l_23;
                                                                                                                                                            t = bottomup_1_0(i_2, t);
                                                                                                                                                          }
                                                                                                                                                          ;
                                                                                                                                                          LocalPopChoice(g_35);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = f_35;
                                                                                                                                                          t = r_24;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = r_24;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = r_24;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = r_24;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = r_24;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = r_24;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = q_24;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = o_24;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = r_24;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = q_24;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = o_24;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = r_24;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = q_24;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = o_24;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = r_24;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = q_24;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = o_24;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = r_24;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              q_24 = ATgetArgument(t, 0);
                                                                                                              o_24 = ATgetArgument(t, 1);
                                                                                                              t = q_24;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = o_24;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = r_24;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = r_24;
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                  }
                                              }
                                          }
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
  t = bottomup_1_0(i_2, t);
  return(t);
}
ATerm SubsArgCall2_0_0 (ATerm t)
{
  ATerm u_80 = NULL,w_80 = NULL,x_80 = NULL,z_80 = NULL,i_18 = NULL,j_18 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm n_35 = ATgetArgument(t, 0);
      if(match_cons(n_35, sym_SVar_1))
        {
          x_80 = ATgetArgument(n_35, 0);
        }
      else
        _fail(t);
      u_80 = ATgetArgument(t, 1);
      w_80 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_80), (ATerm)ATempty, (ATerm) ATempty);
  i_18 = t;
  t = term_o_35;
  j_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_35, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_80), (ATerm)ATempty, (ATerm) ATempty));
  t = x_6(j_18, i_18, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm q_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_35) != ATmakeSymbol("n_0", 0, ATtrue)))
        _fail(t);
      z_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_80), u_80, w_80);
  return(t);
}
ATerm SubsArgCall1_0_0 (ATerm t)
{
  ATerm a_81 = NULL,c_81 = NULL,m_18 = NULL;
  a_81 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm t_35 = ATgetArgument(t, 0);
      if(match_cons(t_35, sym_SVar_1))
        {
          ATerm a_36 = ATgetArgument(t_35, 0);
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
  t = term_b_36;
  m_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_36, a_81);
  t = x_6(m_18, a_81, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm c_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_36) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      c_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_81;
  t = strename_0_0(t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_o_35;
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_b_36;
  return(t);
}
ATerm substitute_arg_0_0 (ATerm t)
{
  ATerm v_81 = NULL,w_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL,c_82 = NULL,d_82 = NULL,e_82 = NULL,f_82 = NULL,h_82 = NULL,l_82 = NULL;
  b_82 = t;
  if(match_cons(t, sym__2))
    {
      c_82 = ATgetArgument(t, 0);
      l_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_82;
  if(match_cons(t, sym_VarDec_2))
    {
      d_82 = ATgetArgument(t, 0);
      e_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_82;
  if(match_cons(t, sym_FunType_2))
    {
      f_82 = ATgetArgument(t, 0);
      {
        ATerm e_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = f_82;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_36 = ATgetFirst((ATermList) t);
      h_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_82;
  {
    ATerm l_36 = t;
    int m_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_36 = ATgetFirst((ATermList) t);
            ATerm p_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(m_36);
        {
          ATerm q_82 = NULL,r_82 = NULL;
          t = l_82;
          if(match_cons(t, sym_CallT_3))
            {
              v_81 = ATgetArgument(t, 0);
              z_81 = ATgetArgument(t, 1);
              a_82 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = v_81;
          if(match_cons(t, sym_SVar_1))
            {
              w_81 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_81;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = a_82;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_82), (ATerm)ATempty, (ATerm) ATempty);
          q_82 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_s_36, w_81);
          r_82 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_82), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_s_36, w_81));
          t = m_13(m_3, q_82, r_82, t);
          t = b_82;
        }
      }
    else
      {
        t = l_36;
        {
          ATerm v_82 = NULL,x_82 = NULL;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_82), (ATerm)ATempty, (ATerm) ATempty);
          v_82 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_36, l_82);
          x_82 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_82), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_t_36, l_82));
          t = m_13(n_3, v_82, x_82, t);
          t = b_82;
        }
      }
  }
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_b_36;
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_o_35;
  return(t);
}
ATerm s_3 (ATerm t)
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
ATerm t_3 (ATerm t)
{
  ATerm e_83 = NULL,f_83 = NULL,i_83 = NULL,j_83 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_36 = ATgetArgument(t, 0);
      if(((ATgetType(w_36) == AT_LIST) && !(ATisEmpty(w_36))))
        {
          e_83 = ATgetFirst((ATermList) w_36);
          f_83 = (ATerm) ATgetNext((ATermList) w_36);
        }
      else
        _fail(t);
      {
        ATerm x_36 = ATgetArgument(t, 1);
        if(((ATgetType(x_36) == AT_LIST) && !(ATisEmpty(x_36))))
          {
            i_83 = ATgetFirst((ATermList) x_36);
            j_83 = (ATerm) ATgetNext((ATermList) x_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_83, i_83), (ATerm) ATmakeAppl(sym__2, f_83, j_83));
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm k_83 = NULL,l_83 = NULL;
  if(match_cons(t, sym__2))
    {
      k_83 = ATgetArgument(t, 0);
      l_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_83), k_83);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm y_36 = t;
  int z_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_37 = t;
      int b_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SubsArgCall1_0_0(t);
          ;
          LocalPopChoice(b_37);
        }
      else
        {
          t = a_37;
          t = SubsArgCall2_0_0(t);
        }
      ;
      LocalPopChoice(z_36);
    }
  else
    {
      t = y_36;
    }
  return(t);
}
ATerm substitute_args_0_0 (ATerm t)
{
  ATerm z_82 = NULL,b_83 = NULL,c_83 = NULL;
  ATerm p_3 (ATerm t)
  {
    ATerm r_3 (ATerm t)
    {
      if(match_cons(t, sym__3))
        {
          if(((z_82 != NULL) && (z_82 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            z_82 = ATgetArgument(t, 0);
          if(((b_83 != NULL) && (b_83 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            b_83 = ATgetArgument(t, 1);
          if(((c_83 != NULL) && (c_83 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            c_83 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, z_82, b_83);
      t = genzip_4_0(s_3, t_3, u_3, substitute_arg_0_0, t);
      t = c_83;
      t = topdown_1_0(v_3, t);
      return(t);
    }
    t = scope_2_0(q_3, r_3, t);
    return(t);
  }
  t = scope_2_0(o_3, p_3, t);
  return(t);
}
ATerm w_3 (ATerm t)
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
ATerm x_3 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_37 = ATgetArgument(t, 0);
      if(((ATgetType(e_37) == AT_LIST) && !(ATisEmpty(e_37))))
        {
          x_18 = ATgetFirst((ATermList) e_37);
          y_18 = (ATerm) ATgetNext((ATermList) e_37);
        }
      else
        _fail(t);
      {
        ATerm g_37 = ATgetArgument(t, 1);
        if(((ATgetType(g_37) == AT_LIST) && !(ATisEmpty(g_37))))
          {
            z_18 = ATgetFirst((ATermList) g_37);
            a_19 = (ATerm) ATgetNext((ATermList) g_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_18, z_18), (ATerm) ATmakeAppl(sym__2, y_18, a_19));
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL;
  if(match_cons(t, sym__2))
    {
      b_19 = ATgetArgument(t, 0);
      c_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_19), b_19);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm e_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
  if(match_cons(t, sym__2))
    {
      e_19 = ATgetArgument(t, 0);
      j_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_19;
  {
    ATerm h_37 = t;
    int i_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm j_37 = ATgetArgument(t, 0);
            g_19 = ATgetArgument(t, 1);
            h_19 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(i_37);
        t = (ATerm) ATmakeAppl(sym_SDef_3, j_19, g_19, h_19);
      }
    else
      {
        t = h_37;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm k_37 = ATgetArgument(t, 0);
            g_19 = ATgetArgument(t, 1);
            h_19 = ATgetArgument(t, 2);
            i_19 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, j_19, g_19, h_19, i_19);
      }
  }
  return(t);
}
ATerm a_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_37 = ATgetArgument(t, 0);
      if(((ATgetType(l_37) != AT_LIST) || !(ATisEmpty(l_37))))
        _fail(t);
      {
        ATerm m_37 = ATgetArgument(t, 1);
        if(((ATgetType(m_37) != AT_LIST) || !(ATisEmpty(m_37))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_37 = ATgetArgument(t, 0);
      if(((ATgetType(o_37) == AT_LIST) && !(ATisEmpty(o_37))))
        {
          f_20 = ATgetFirst((ATermList) o_37);
          g_20 = (ATerm) ATgetNext((ATermList) o_37);
        }
      else
        _fail(t);
      {
        ATerm p_37 = ATgetArgument(t, 1);
        if(((ATgetType(p_37) == AT_LIST) && !(ATisEmpty(p_37))))
          {
            h_20 = ATgetFirst((ATermList) p_37);
            i_20 = (ATerm) ATgetNext((ATermList) p_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_20, h_20), (ATerm) ATmakeAppl(sym__2, g_20, i_20));
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL;
  if(match_cons(t, sym__2))
    {
      j_20 = ATgetArgument(t, 0);
      k_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_20), j_20);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm m_20 = NULL,o_20 = NULL,p_20 = NULL;
  if(match_cons(t, sym__2))
    {
      m_20 = ATgetArgument(t, 0);
      p_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_20;
  {
    ATerm q_37 = t;
    int r_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm u_37 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(r_37);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, p_20);
      }
    else
      {
        t = q_37;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm h_38 = ATgetArgument(t, 0);
            o_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, p_20, o_20);
      }
  }
  return(t);
}
ATerm f_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_38 = ATgetArgument(t, 0);
      if(((ATgetType(i_38) != AT_LIST) || !(ATisEmpty(i_38))))
        _fail(t);
      {
        ATerm j_38 = ATgetArgument(t, 1);
        if(((ATgetType(j_38) != AT_LIST) || !(ATisEmpty(j_38))))
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
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_38 = ATgetArgument(t, 0);
      if(((ATgetType(n_38) == AT_LIST) && !(ATisEmpty(n_38))))
        {
          k_21 = ATgetFirst((ATermList) n_38);
          l_21 = (ATerm) ATgetNext((ATermList) n_38);
        }
      else
        _fail(t);
      {
        ATerm o_38 = ATgetArgument(t, 1);
        if(((ATgetType(o_38) == AT_LIST) && !(ATisEmpty(o_38))))
          {
            m_21 = ATgetFirst((ATermList) o_38);
            n_21 = (ATerm) ATgetNext((ATermList) o_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_21, m_21), (ATerm) ATmakeAppl(sym__2, l_21, n_21));
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm o_21 = NULL,s_21 = NULL;
  if(match_cons(t, sym__2))
    {
      o_21 = ATgetArgument(t, 0);
      s_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_21), o_21);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm b_22 = NULL,d_22 = NULL,e_22 = NULL;
  if(match_cons(t, sym__2))
    {
      b_22 = ATgetArgument(t, 0);
      e_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_22;
  {
    ATerm t_38 = t;
    int u_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm w_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(u_38);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_22);
      }
    else
      {
        t = t_38;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm x_38 = ATgetArgument(t, 0);
            d_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, e_22, d_22);
      }
  }
  return(t);
}
ATerm j_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_38 = ATgetArgument(t, 0);
      if(((ATgetType(y_38) != AT_LIST) || !(ATisEmpty(y_38))))
        _fail(t);
      {
        ATerm z_38 = ATgetArgument(t, 1);
        if(((ATgetType(z_38) != AT_LIST) || !(ATisEmpty(z_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm s_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_39 = ATgetArgument(t, 0);
      if(((ATgetType(a_39) == AT_LIST) && !(ATisEmpty(a_39))))
        {
          s_23 = ATgetFirst((ATermList) a_39);
          v_23 = (ATerm) ATgetNext((ATermList) a_39);
        }
      else
        _fail(t);
      {
        ATerm b_39 = ATgetArgument(t, 1);
        if(((ATgetType(b_39) == AT_LIST) && !(ATisEmpty(b_39))))
          {
            w_23 = ATgetFirst((ATermList) b_39);
            x_23 = (ATerm) ATgetNext((ATermList) b_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_23, w_23), (ATerm) ATmakeAppl(sym__2, v_23, x_23));
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm y_23 = NULL,b_24 = NULL;
  if(match_cons(t, sym__2))
    {
      y_23 = ATgetArgument(t, 0);
      b_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_24), y_23);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm h_24 = NULL,l_24 = NULL,m_24 = NULL;
  if(match_cons(t, sym__2))
    {
      h_24 = ATgetArgument(t, 0);
      m_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_24;
  {
    ATerm c_39 = t;
    int d_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm e_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(d_39);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, m_24);
      }
    else
      {
        t = c_39;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm f_39 = ATgetArgument(t, 0);
            l_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, m_24, l_24);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm p_97 (ATerm), ATerm t)
{
  ATerm o_90 = NULL,p_90 = NULL,r_90 = NULL,s_90 = NULL,t_90 = NULL;
  r_90 = t;
  if(match_cons(t, sym_Let_2))
    {
      s_90 = ATgetArgument(t, 0);
      t_90 = ATgetArgument(t, 1);
      {
        ATerm r_18 = NULL,u_18 = NULL,v_18 = NULL,y_4 = NULL;
        t = SSLgetAnnotations(r_90);
        r_18 = t;
        t = s_90;
        t = p_97(t);
        v_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_90, v_18);
        t = genzip_4_0(w_3, x_3, y_3, z_3, t);
        u_18 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, u_18, t_90);
        y_4 = t;
        t = SSLsetAnnotations(y_4, r_18);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          s_90 = ATgetArgument(t, 0);
          t_90 = ATgetArgument(t, 1);
          o_90 = ATgetArgument(t, 2);
          {
            ATerm y_19 = NULL,c_20 = NULL,d_20 = NULL,a_5 = NULL;
            t = SSLgetAnnotations(r_90);
            y_19 = t;
            t = t_90;
            t = p_97(t);
            d_20 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_90, d_20);
            t = genzip_4_0(a_4, b_4, c_4, d_4, t);
            c_20 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, s_90, c_20, o_90);
            a_5 = t;
            t = SSLsetAnnotations(a_5, y_19);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              s_90 = ATgetArgument(t, 0);
              t_90 = ATgetArgument(t, 1);
              o_90 = ATgetArgument(t, 2);
              p_90 = ATgetArgument(t, 3);
              {
                ATerm c_21 = NULL,h_21 = NULL,i_21 = NULL,b_5 = NULL;
                t = SSLgetAnnotations(r_90);
                c_21 = t;
                t = t_90;
                t = p_97(t);
                i_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, t_90, i_21);
                t = genzip_4_0(f_4, g_4, h_4, i_4, t);
                h_21 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, s_90, h_21, o_90, p_90);
                b_5 = t;
                t = SSLsetAnnotations(b_5, c_21);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  s_90 = ATgetArgument(t, 0);
                  t_90 = ATgetArgument(t, 1);
                  o_90 = ATgetArgument(t, 2);
                  p_90 = ATgetArgument(t, 3);
                  {
                    ATerm z_22 = NULL,k_23 = NULL,m_23 = NULL,c_5 = NULL;
                    t = SSLgetAnnotations(r_90);
                    z_22 = t;
                    t = t_90;
                    t = p_97(t);
                    m_23 = t;
                    t = (ATerm) ATmakeAppl(sym__2, t_90, m_23);
                    t = genzip_4_0(j_4, n_4, o_4, p_4, t);
                    k_23 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, s_90, k_23, o_90, p_90);
                    c_5 = t;
                    t = SSLsetAnnotations(c_5, z_22);
                  }
                }
              else
                {
                  ATerm j_25 = NULL,v_25 = NULL,e_5 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      s_90 = ATgetArgument(t, 0);
                      t_90 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_90);
                  j_25 = t;
                  t = s_90;
                  t = p_97(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_25 = ATgetFirst((ATermList) t);
                      {
                        ATerm g_39 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, v_25, t_90);
                  e_5 = t;
                  t = SSLsetAnnotations(e_5, j_25);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t)
{
  ATerm p_93 = NULL,t_93 = NULL,u_93 = NULL,v_93 = NULL,w_93 = NULL;
  u_93 = t;
  if(match_cons(t, sym_Let_2))
    {
      v_93 = ATgetArgument(t, 0);
      w_93 = ATgetArgument(t, 1);
      {
        ATerm p_26 = NULL,s_26 = NULL,t_26 = NULL,l_5 = NULL;
        t = SSLgetAnnotations(u_93);
        p_26 = t;
        t = v_93;
        t = q_97(t);
        s_26 = t;
        t = w_93;
        t = q_97(t);
        t_26 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, s_26, t_26);
        l_5 = t;
        t = SSLsetAnnotations(l_5, p_26);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          v_93 = ATgetArgument(t, 0);
          w_93 = ATgetArgument(t, 1);
          p_93 = ATgetArgument(t, 2);
          {
            ATerm l_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,m_5 = NULL;
            t = SSLgetAnnotations(u_93);
            l_27 = t;
            t = v_93;
            t = s_97(t);
            z_27 = t;
            t = w_93;
            t = s_97(t);
            a_28 = t;
            t = p_93;
            t = q_97(t);
            b_28 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, z_27, a_28, b_28);
            m_5 = t;
            t = SSLsetAnnotations(m_5, l_27);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              v_93 = ATgetArgument(t, 0);
              w_93 = ATgetArgument(t, 1);
              p_93 = ATgetArgument(t, 2);
              t_93 = ATgetArgument(t, 3);
              {
                ATerm e_29 = NULL,j_29 = NULL,l_29 = NULL,p_29 = NULL,r_29 = NULL,n_5 = NULL;
                t = SSLgetAnnotations(u_93);
                e_29 = t;
                t = v_93;
                t = s_97(t);
                j_29 = t;
                t = w_93;
                t = s_97(t);
                l_29 = t;
                t = p_93;
                t = s_97(t);
                p_29 = t;
                t = t_93;
                t = q_97(t);
                r_29 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, j_29, l_29, p_29, r_29);
                n_5 = t;
                t = SSLsetAnnotations(n_5, e_29);
              }
            }
          else
            {
              ATerm j_30 = NULL,r_30 = NULL,t_30 = NULL,o_5 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  v_93 = ATgetArgument(t, 0);
                  w_93 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(u_93);
              j_30 = t;
              t = v_93;
              t = s_97(t);
              r_30 = t;
              t = w_93;
              t = q_97(t);
              t_30 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, r_30, t_30);
              o_5 = t;
              t = SSLsetAnnotations(o_5, j_30);
            }
        }
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm m_94 = NULL;
  ATerm h_39 = t;
  int i_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          m_94 = ATgetArgument(t, 0);
          {
            ATerm k_39 = ATgetArgument(t, 1);
          }
          {
            ATerm l_39 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_39);
      t = m_94;
    }
  else
    {
      t = h_39;
      if(match_cons(t, sym_SDefT_4))
        {
          m_94 = ATgetArgument(t, 0);
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
      t = m_94;
    }
  return(t);
}
ATerm s_12 (ATerm r_23, ATerm q_23, ATerm t)
{
  t = r_23;
  t = map_1_0(q_4, t);
  return(t);
}
ATerm SVar_1_0 (ATerm p_86 (ATerm), ATerm t)
{
  ATerm a_95 = NULL,b_95 = NULL,c_95 = NULL,d_95 = NULL,u_5 = NULL;
  d_95 = t;
  if(match_cons(t, sym_SVar_1))
    {
      b_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_95);
  a_95 = t;
  t = b_95;
  t = p_86(t);
  c_95 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, c_95);
  u_5 = t;
  t = SSLsetAnnotations(u_5, a_95);
  return(t);
}
ATerm e_13 (ATerm a_112 (ATerm), ATerm b_112 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm s_40, ATerm r_40, ATerm q_40, ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    ATerm f_95 = NULL;
    f_95 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_95, q_40);
    t = a_112(t);
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    ATerm g_95 = NULL;
    g_95 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_95, r_40);
    t = a_112(t);
    return(t);
  }
  t = s_40;
  t = b_112(r_4, s_4, _id, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm v_4 (ATerm t)
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
ATerm w_4 (ATerm t)
{
  ATerm q_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_39 = ATgetArgument(t, 0);
      if(((ATgetType(s_39) == AT_LIST) && !(ATisEmpty(s_39))))
        {
          q_95 = ATgetFirst((ATermList) s_39);
          r_95 = (ATerm) ATgetNext((ATermList) s_39);
        }
      else
        _fail(t);
      {
        ATerm t_39 = ATgetArgument(t, 1);
        if(((ATgetType(t_39) == AT_LIST) && !(ATisEmpty(t_39))))
          {
            s_95 = ATgetFirst((ATermList) t_39);
            t_95 = (ATerm) ATgetNext((ATermList) t_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_95, s_95), (ATerm) ATmakeAppl(sym__2, r_95, t_95));
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm u_95 = NULL,x_95 = NULL;
  if(match_cons(t, sym__2))
    {
      u_95 = ATgetArgument(t, 0);
      x_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_95), u_95);
  return(t);
}
ATerm f_13 (ATerm u_111 (ATerm), ATerm v_111 (ATerm (ATerm), ATerm), ATerm k_40, ATerm n_40, ATerm t)
{
  ATerm k_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL,p_95 = NULL;
  t = k_40;
  t = u_111(t);
  k_95 = t;
  t = map_1_0(new_0_0, t);
  l_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_95, l_95);
  t = genzip_4_0(v_4, w_4, x_4, _id, t);
  p_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_95, n_40);
  t = conc_0_0(t);
  m_95 = t;
  t = k_40;
  {
    ATerm z_4 (ATerm t)
    {
      t = l_95;
      return(t);
    }
    t = v_111(z_4, t);
    n_95 = t;
    t = (ATerm) ATmakeAppl(sym__3, n_95, n_40, m_95);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm g_96 = NULL,h_96 = NULL,k_96 = NULL,l_96 = NULL,n_96 = NULL,o_96 = NULL,t_96 = NULL;
  k_96 = t;
  if(match_cons(t, sym__2))
    {
      l_96 = ATgetArgument(t, 0);
      n_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_96;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_96 = ATgetFirst((ATermList) t);
      t_96 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_96;
  if(match_cons(t, sym__2))
    {
      g_96 = ATgetArgument(t, 0);
      h_96 = ATgetArgument(t, 1);
      {
        ATerm u_39 = t;
        int v_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_96;
            if((l_96 != t))
              {
                _fail(t);
              }
            t = h_96;
            ;
            LocalPopChoice(v_39);
          }
        else
          {
            t = u_39;
            t = (ATerm) ATmakeAppl(sym__2, l_96, t_96);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, l_96, t_96);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm i_112 (ATerm), ATerm t)
{
  ATerm x_97 (ATerm t)
  {
    ATerm z_39 = t;
    int a_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_112(t);
        ;
        LocalPopChoice(a_40);
      }
    else
      {
        t = z_39;
        {
          ATerm u_97 = NULL,v_97 = NULL,w_97 = NULL;
          ATerm d_5 (ATerm t)
          {
            ATerm k_31 = NULL;
            k_31 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_31, not_null(w_97));
            t = x_97(t);
            return(t);
          }
          u_97 = t;
          if(match_cons(t, sym__2))
            {
              v_97 = ATgetArgument(t, 0);
              if(((w_97 != NULL) && (w_97 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                w_97 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_97;
          t = SRTS_all(d_5, t);
        }
      }
    return(t);
  }
  t = x_97(t);
  return(t);
}
ATerm rename_4_0 (ATerm p_111 (ATerm (ATerm), ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm s_111 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm b_98 = NULL;
  ATerm t_98 (ATerm t)
  {
    ATerm f_5 (ATerm t)
    {
      ATerm k_98 = NULL,o_98 = NULL,p_98 = NULL;
      k_98 = t;
      if(match_cons(t, sym__2))
        {
          o_98 = ATgetArgument(t, 0);
          p_98 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm b_40 = t;
        int c_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_5 (ATerm t)
            {
              ATerm s_98 = NULL;
              s_98 = t;
              t = (ATerm) ATmakeAppl(sym__2, s_98, p_98);
              t = lookup_0_0(t);
              return(t);
            }
            t = o_98;
            t = p_111(g_5, t);
            ;
            LocalPopChoice(c_40);
          }
        else
          {
            t = b_40;
            {
              ATerm f_32 = NULL,h_32 = NULL,i_32 = NULL;
              t = k_98;
              t = f_13(q_111, s_111, o_98, p_98, t);
              if(match_cons(t, sym__3))
                {
                  f_32 = ATgetArgument(t, 0);
                  h_32 = ATgetArgument(t, 1);
                  i_32 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = e_13(t_98, r_111, f_32, h_32, i_32, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(f_5, t);
    return(t);
  }
  b_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_98, (ATerm) ATempty);
  t = t_98(t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_40 = ATgetArgument(t, 0);
      if(((ATgetType(d_40) != AT_LIST) || !(ATisEmpty(d_40))))
        _fail(t);
      {
        ATerm e_40 = ATgetArgument(t, 1);
        if(((ATgetType(e_40) != AT_LIST) || !(ATisEmpty(e_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm u_35 = NULL,y_35 = NULL,z_35 = NULL,g_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_40 = ATgetArgument(t, 0);
      if(((ATgetType(f_40) == AT_LIST) && !(ATisEmpty(f_40))))
        {
          u_35 = ATgetFirst((ATermList) f_40);
          y_35 = (ATerm) ATgetNext((ATermList) f_40);
        }
      else
        _fail(t);
      {
        ATerm g_40 = ATgetArgument(t, 1);
        if(((ATgetType(g_40) == AT_LIST) && !(ATisEmpty(g_40))))
          {
            z_35 = ATgetFirst((ATermList) g_40);
            g_36 = (ATerm) ATgetNext((ATermList) g_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_35, z_35), (ATerm) ATmakeAppl(sym__2, y_35, g_36));
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm i_36 = NULL,k_36 = NULL;
  if(match_cons(t, sym__2))
    {
      i_36 = ATgetArgument(t, 0);
      k_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_36), i_36);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm n_36 = NULL,q_36 = NULL,r_36 = NULL;
  if(match_cons(t, sym__2))
    {
      n_36 = ATgetArgument(t, 0);
      r_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_36;
  {
    ATerm h_40 = t;
    int i_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm l_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(i_40);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, r_36);
      }
    else
      {
        t = h_40;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm m_40 = ATgetArgument(t, 0);
            q_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, r_36, q_36);
      }
  }
  return(t);
}
ATerm q_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_40 = ATgetArgument(t, 0);
      if(((ATgetType(p_40) != AT_LIST) || !(ATisEmpty(p_40))))
        _fail(t);
      {
        ATerm u_40 = ATgetArgument(t, 1);
        if(((ATgetType(u_40) != AT_LIST) || !(ATisEmpty(u_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm w_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_40 = ATgetArgument(t, 0);
      if(((ATgetType(v_40) == AT_LIST) && !(ATisEmpty(v_40))))
        {
          w_37 = ATgetFirst((ATermList) v_40);
          y_37 = (ATerm) ATgetNext((ATermList) v_40);
        }
      else
        _fail(t);
      {
        ATerm x_40 = ATgetArgument(t, 1);
        if(((ATgetType(x_40) == AT_LIST) && !(ATisEmpty(x_40))))
          {
            z_37 = ATgetFirst((ATermList) x_40);
            a_38 = (ATerm) ATgetNext((ATermList) x_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_37, z_37), (ATerm) ATmakeAppl(sym__2, y_37, a_38));
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL;
  if(match_cons(t, sym__2))
    {
      c_38 = ATgetArgument(t, 0);
      d_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_38), c_38);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm m_38 = NULL,p_38 = NULL,s_38 = NULL;
  if(match_cons(t, sym__2))
    {
      m_38 = ATgetArgument(t, 0);
      s_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_38;
  {
    ATerm y_40 = t;
    int z_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm a_41 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(z_40);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_38);
      }
    else
      {
        t = y_40;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm b_41 = ATgetArgument(t, 0);
            p_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, s_38, p_38);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm l_97 (ATerm), ATerm t)
{
  ATerm q_101 = NULL,r_101 = NULL,u_101 = NULL,v_101 = NULL,w_101 = NULL;
  q_101 = t;
  if(match_cons(t, sym_Scope_2))
    {
      r_101 = ATgetArgument(t, 0);
      u_101 = ATgetArgument(t, 1);
      {
        ATerm y_32 = NULL,f_33 = NULL,w_5 = NULL;
        t = SSLgetAnnotations(q_101);
        y_32 = t;
        t = r_101;
        t = l_97(t);
        f_33 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, f_33, u_101);
        w_5 = t;
        t = SSLsetAnnotations(w_5, y_32);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          r_101 = ATgetArgument(t, 0);
          u_101 = ATgetArgument(t, 1);
          v_101 = ATgetArgument(t, 2);
          w_101 = ATgetArgument(t, 3);
          {
            ATerm i_35 = NULL,r_35 = NULL,s_35 = NULL,x_5 = NULL;
            t = SSLgetAnnotations(q_101);
            i_35 = t;
            t = v_101;
            t = l_97(t);
            s_35 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_101, s_35);
            t = genzip_4_0(h_5, i_5, k_5, p_5, t);
            r_35 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, r_101, u_101, r_35, w_101);
            x_5 = t;
            t = SSLsetAnnotations(x_5, i_35);
          }
        }
      else
        {
          ATerm n_37 = NULL,s_37 = NULL,t_37 = NULL,y_5 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              r_101 = ATgetArgument(t, 0);
              u_101 = ATgetArgument(t, 1);
              v_101 = ATgetArgument(t, 2);
              w_101 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_101);
          n_37 = t;
          t = v_101;
          t = l_97(t);
          t_37 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_101, t_37);
          t = genzip_4_0(q_5, r_5, s_5, t_5, t);
          s_37 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, r_101, u_101, s_37, w_101);
          y_5 = t;
          t = SSLsetAnnotations(y_5, n_37);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm t)
{
  ATerm e_104 = NULL,f_104 = NULL,g_104 = NULL,h_104 = NULL,i_104 = NULL;
  h_104 = t;
  if(match_cons(t, sym_Scope_2))
    {
      i_104 = ATgetArgument(t, 0);
      e_104 = ATgetArgument(t, 1);
      {
        ATerm j_40 = NULL,o_40 = NULL,t_40 = NULL,d_6 = NULL;
        t = SSLgetAnnotations(h_104);
        j_40 = t;
        t = i_104;
        t = o_97(t);
        o_40 = t;
        t = e_104;
        t = m_97(t);
        t_40 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, o_40, t_40);
        d_6 = t;
        t = SSLsetAnnotations(d_6, j_40);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          i_104 = ATgetArgument(t, 0);
          e_104 = ATgetArgument(t, 1);
          f_104 = ATgetArgument(t, 2);
          g_104 = ATgetArgument(t, 3);
          {
            ATerm j_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,e_42 = NULL,e_6 = NULL;
            t = SSLgetAnnotations(h_104);
            j_41 = t;
            t = i_104;
            t = o_97(t);
            w_41 = t;
            t = e_104;
            t = o_97(t);
            x_41 = t;
            t = f_104;
            t = o_97(t);
            y_41 = t;
            t = g_104;
            t = m_97(t);
            e_42 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, w_41, x_41, y_41, e_42);
            e_6 = t;
            t = SSLsetAnnotations(e_6, j_41);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              i_104 = ATgetArgument(t, 0);
              e_104 = ATgetArgument(t, 1);
              f_104 = ATgetArgument(t, 2);
              g_104 = ATgetArgument(t, 3);
              {
                ATerm t_42 = NULL,y_42 = NULL,z_42 = NULL,b_43 = NULL,d_43 = NULL,g_6 = NULL;
                t = SSLgetAnnotations(h_104);
                t_42 = t;
                t = i_104;
                t = o_97(t);
                y_42 = t;
                t = e_104;
                t = o_97(t);
                z_42 = t;
                t = f_104;
                t = o_97(t);
                b_43 = t;
                t = g_104;
                t = m_97(t);
                d_43 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, y_42, z_42, b_43, d_43);
                g_6 = t;
                t = SSLsetAnnotations(g_6, t_42);
              }
            }
          else
            {
              ATerm v_43 = NULL,a_44 = NULL,h_6 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  i_104 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(h_104);
              v_43 = t;
              t = i_104;
              t = m_97(t);
              a_44 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, a_44);
              h_6 = t;
              t = SSLsetAnnotations(h_6, v_43);
            }
        }
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm t_104 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_104);
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm c_41 = t;
  int d_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(d_41);
    }
  else
    {
      t = c_41;
      {
        ATerm v_104 = NULL,y_104 = NULL,z_104 = NULL,a_105 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            v_104 = ATgetArgument(t, 0);
            t = v_104;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                v_104 = ATgetArgument(t, 0);
                y_104 = ATgetArgument(t, 1);
                z_104 = ATgetArgument(t, 2);
                a_105 = ATgetArgument(t, 3);
                t = z_104;
                t = map_1_0(a_6, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    v_104 = ATgetArgument(t, 0);
                    y_104 = ATgetArgument(t, 1);
                    z_104 = ATgetArgument(t, 2);
                    a_105 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = z_104;
                t = map_1_0(b_6, t);
              }
          }
      }
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm l_105 = NULL;
  ATerm e_41 = t;
  int f_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_105 = ATgetArgument(t, 0);
          {
            ATerm g_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_41);
      t = l_105;
    }
  else
    {
      t = e_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_105 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_105;
    }
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm u_105 = NULL;
  ATerm h_41 = t;
  int k_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_105 = ATgetArgument(t, 0);
          {
            ATerm l_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_41);
      t = u_105;
    }
  else
    {
      t = h_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_105 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_105;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(v_5, z_5, tboundin_3_0, t);
  return(t);
}
ATerm y_12 (ATerm z_106 (ATerm), ATerm a_32, ATerm z_31, ATerm t)
{
  ATerm m_106 (ATerm t)
  {
    ATerm h_106 = NULL,i_106 = NULL,j_106 = NULL;
    h_106 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_31;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_106 = ATgetFirst((ATermList) t);
            j_106 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm m_41 = t;
          int n_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_106;
              {
                ATerm c_6 (ATerm t)
                {
                  t = z_31;
                  return(t);
                }
                t = z_12(z_106, c_6, i_106, j_106, t);
                t = m_106(t);
              }
              ;
              LocalPopChoice(n_41);
            }
          else
            {
              t = m_41;
              {
                ATerm k_44 = NULL,p_44 = NULL,o_6 = NULL;
                t = SSLgetAnnotations(h_106);
                k_44 = t;
                t = j_106;
                t = m_106(t);
                p_44 = t;
                t = (ATerm) ATinsert(CheckATermList(p_44), i_106);
                o_6 = t;
                t = SSLsetAnnotations(o_6, k_44);
              }
            }
        }
      }
    return(t);
  }
  t = a_32;
  t = m_106(t);
  return(t);
}
ATerm z_12 (ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm e_32, ATerm d_32, ATerm t)
{
  t = d_107(t);
  {
    ATerm f_6 (ATerm t)
    {
      ATerm o_106 = NULL;
      o_106 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_32, o_106);
      t = c_107(t);
      return(t);
    }
    t = fetch_1_0(f_6, t);
    t = d_32;
  }
  return(t);
}
ATerm a_13 (ATerm u_106 (ATerm), ATerm y_31, ATerm x_31, ATerm t)
{
  ATerm s_107 (ATerm t)
  {
    ATerm f_107 = NULL,h_107 = NULL,o_107 = NULL;
    f_107 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_107;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_107 = ATgetFirst((ATermList) t);
            o_107 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm o_41 = t;
          int p_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_107;
              {
                ATerm i_6 (ATerm t)
                {
                  t = x_31;
                  return(t);
                }
                t = z_12(u_106, i_6, h_107, o_107, t);
                t = s_107(t);
              }
              ;
              LocalPopChoice(p_41);
            }
          else
            {
              t = o_41;
              {
                ATerm d_45 = NULL,n_45 = NULL,q_6 = NULL;
                t = SSLgetAnnotations(f_107);
                d_45 = t;
                t = o_107;
                t = s_107(t);
                n_45 = t;
                t = (ATerm) ATinsert(CheckATermList(n_45), h_107);
                q_6 = t;
                t = SSLsetAnnotations(q_6, d_45);
              }
            }
        }
      }
    return(t);
  }
  t = y_31;
  t = s_107(t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_41 = ATgetArgument(t, 0);
      if(((ATgetType(q_41) != AT_LIST) || !(ATisEmpty(q_41))))
        _fail(t);
      {
        ATerm r_41 = ATgetArgument(t, 1);
        if(((ATgetType(r_41) != AT_LIST) || !(ATisEmpty(r_41))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm a_108 = NULL,b_108 = NULL,d_108 = NULL,e_108 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_41 = ATgetArgument(t, 0);
      if(((ATgetType(s_41) == AT_LIST) && !(ATisEmpty(s_41))))
        {
          a_108 = ATgetFirst((ATermList) s_41);
          b_108 = (ATerm) ATgetNext((ATermList) s_41);
        }
      else
        _fail(t);
      {
        ATerm t_41 = ATgetArgument(t, 1);
        if(((ATgetType(t_41) == AT_LIST) && !(ATisEmpty(t_41))))
          {
            d_108 = ATgetFirst((ATermList) t_41);
            e_108 = (ATerm) ATgetNext((ATermList) t_41);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_108, d_108), (ATerm) ATmakeAppl(sym__2, b_108, e_108));
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm f_108 = NULL,g_108 = NULL;
  if(match_cons(t, sym__2))
    {
      f_108 = ATgetArgument(t, 0);
      g_108 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_108), f_108);
  return(t);
}
ATerm c_13 (ATerm z_549, ATerm e_550, ATerm v_54, ATerm t)
{
  ATerm v_107 = NULL,w_107 = NULL,x_107 = NULL,y_107 = NULL;
  t = SSL_explode_term(e_550);
  if(match_cons(t, sym__2))
    {
      v_107 = ATgetArgument(t, 0);
      x_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(z_549);
  if(match_cons(t, sym__2))
    {
      if((v_107 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      w_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_107, x_107);
  t = genzip_4_0(j_6, k_6, l_6, _id, t);
  y_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_107, v_54);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm d_116 (ATerm), ATerm e_116 (ATerm), ATerm t)
{
  ATerm i_108 (ATerm t)
  {
    ATerm u_41 = t;
    int v_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_116(t);
        ;
        LocalPopChoice(v_41);
      }
    else
      {
        t = u_41;
        t = e_116(t);
        t = i_108(t);
      }
    return(t);
  }
  t = i_108(t);
  return(t);
}
ATerm for_3_0 (ATerm g_116 (ATerm), ATerm h_116 (ATerm), ATerm i_116 (ATerm), ATerm t)
{
  t = g_116(t);
  t = while_not_2_0(h_116, i_116, t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm p_108 = NULL;
  p_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, p_108);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm q_108 = NULL,r_108 = NULL,s_108 = NULL,t_108 = NULL,t_6 = NULL;
  t_108 = t;
  if(match_cons(t, sym__2))
    {
      r_108 = ATgetArgument(t, 0);
      s_108 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_108);
  q_108 = t;
  t = s_108;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_108, s_108);
  t_6 = t;
  t = SSLsetAnnotations(t_6, q_108);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm w_109 = NULL,x_109 = NULL,y_109 = NULL,z_109 = NULL,a_110 = NULL;
  w_109 = t;
  if(match_cons(t, sym__2))
    {
      x_109 = ATgetArgument(t, 0);
      y_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_109;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_109 = ATgetFirst((ATermList) t);
      a_110 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_42 = t;
        int b_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_110(x_109, y_109, w_109, t);
            ;
            LocalPopChoice(b_42);
          }
        else
          {
            t = a_42;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_109), z_109), a_110);
          }
      }
    }
  else
    {
      t = k_110(x_109, y_109, w_109, t);
    }
  return(t);
}
ATerm k_110 (ATerm u_108, ATerm v_108, ATerm w_108, ATerm t)
{
  ATerm y_108 = NULL,c_109 = NULL,v_6 = NULL,i_109 = NULL,j_109 = NULL,k_109 = NULL,l_109 = NULL;
  t = SSLgetAnnotations(w_108);
  y_108 = t;
  t = v_108;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_109 = ATgetFirst((ATermList) t);
      l_109 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_109;
  if(match_cons(t, sym__2))
    {
      j_109 = ATgetArgument(t, 0);
      k_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_42 = t;
    int d_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_109;
        if((j_109 != t))
          {
            _fail(t);
          }
        t = l_109;
        ;
        LocalPopChoice(d_42);
      }
    else
      {
        t = c_42;
        t = v_108;
        t = c_13(j_109, k_109, l_109, t);
      }
    c_109 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_108, c_109);
    v_6 = t;
    t = SSLsetAnnotations(v_6, y_108);
  }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm j_110 = NULL;
  if(match_cons(t, sym__2))
    {
      j_110 = ATgetArgument(t, 0);
      if((j_110 != ATgetArgument(t, 1)))
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
  ATerm h_42 = t;
  int i_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(m_6, n_6, p_6, t);
      ;
      LocalPopChoice(i_42);
    }
  else
    {
      t = h_42;
      {
        ATerm e_110 = NULL,f_110 = NULL,g_110 = NULL;
        e_110 = t;
        if(match_cons(t, sym__2))
          {
            f_110 = ATgetArgument(t, 0);
            g_110 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_110;
        t = a_13(r_6, f_110, g_110, t);
      }
    }
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL;
  if(match_cons(t, sym__2))
    {
      y_45 = ATgetArgument(t, 0);
      z_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_12(c_7, y_45, z_45, t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm a_46 = NULL;
  if(match_cons(t, sym__2))
    {
      a_46 = ATgetArgument(t, 0);
      if((a_46 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL;
  if(match_cons(t, sym__2))
    {
      i_46 = ATgetArgument(t, 0);
      j_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_12(g_7, i_46, j_46, t);
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm k_46 = NULL;
  if(match_cons(t, sym__2))
    {
      k_46 = ATgetArgument(t, 0);
      if((k_46 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm s_113 (ATerm), ATerm t_113 (ATerm), ATerm u_113 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm g_111 (ATerm t)
  {
    ATerm j_42 = t;
    int k_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_113(t);
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
              ATerm m_110 = NULL,n_110 = NULL,s_45 = NULL,u_45 = NULL;
              m_110 = t;
              t = t_113(t);
              n_110 = t;
              t = m_110;
              {
                ATerm s_6 (ATerm t)
                {
                  ATerm p_110 = NULL;
                  t = g_111(t);
                  p_110 = t;
                  t = (ATerm) ATmakeAppl(sym__2, p_110, n_110);
                  t = diff_0_0(t);
                  return(t);
                }
                t = u_113(s_6, g_111, w_6, t);
                u_45 = t;
                t = SSL_explode_term(u_45);
                if(match_cons(t, sym__2))
                  {
                    ATerm n_42 = ATgetArgument(t, 0);
                    s_45 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = s_45;
                t = foldr_3_0(y_6, a_7, _id, t);
              }
              ;
              LocalPopChoice(m_42);
            }
          else
            {
              t = l_42;
              {
                ATerm c_46 = NULL,d_46 = NULL;
                d_46 = t;
                t = SSL_explode_term(d_46);
                if(match_cons(t, sym__2))
                  {
                    ATerm o_42 = ATgetArgument(t, 0);
                    c_46 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_46;
                t = foldr_3_0(e_7, f_7, g_111, t);
              }
            }
        }
      }
    return(t);
  }
  t = g_111(t);
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm f_112 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_112);
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm p_42 = t;
  int r_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(r_42);
    }
  else
    {
      t = p_42;
      {
        ATerm h_112 = NULL,k_112 = NULL,l_112 = NULL,m_112 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            h_112 = ATgetArgument(t, 0);
            t = h_112;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                h_112 = ATgetArgument(t, 0);
                k_112 = ATgetArgument(t, 1);
                l_112 = ATgetArgument(t, 2);
                m_112 = ATgetArgument(t, 3);
                t = l_112;
                t = map_1_0(n_7, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    h_112 = ATgetArgument(t, 0);
                    k_112 = ATgetArgument(t, 1);
                    l_112 = ATgetArgument(t, 2);
                    m_112 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = l_112;
                t = map_1_0(o_7, t);
              }
          }
      }
    }
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm u_112 = NULL;
  ATerm s_42 = t;
  int u_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_112 = ATgetArgument(t, 0);
          {
            ATerm v_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_42);
      t = u_112;
    }
  else
    {
      t = s_42;
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
ATerm o_7 (ATerm t)
{
  ATerm d_113 = NULL;
  ATerm w_42 = t;
  int x_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_113 = ATgetArgument(t, 0);
          {
            ATerm e_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_42);
      t = d_113;
    }
  else
    {
      t = w_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_113;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm n_111 = NULL,c_112 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      c_112 = ATgetArgument(t, 0);
      t = c_112;
      if(match_cons(t, sym_Rule_3))
        {
          n_111 = ATgetArgument(t, 0);
          {
            ATerm f_43 = ATgetArgument(t, 1);
          }
          {
            ATerm g_43 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = n_111;
      t = free_vars_3_0(h_7, m_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          c_112 = ATgetArgument(t, 0);
          {
            ATerm h_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = c_112;
    }
  return(t);
}
ATerm Var_1_0 (ATerm g_83 (ATerm), ATerm t)
{
  ATerm h_113 = NULL,i_113 = NULL,j_113 = NULL,k_113 = NULL,z_6 = NULL;
  k_113 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_113);
  h_113 = t;
  t = i_113;
  t = g_83(t);
  j_113 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_113);
  z_6 = t;
  t = SSLsetAnnotations(z_6, h_113);
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm i_43 = t;
  int j_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(j_43);
    }
  else
    {
      t = i_43;
      {
        ATerm x_113 = NULL,y_113 = NULL,z_113 = NULL,a_114 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            x_113 = ATgetArgument(t, 0);
            y_113 = ATgetArgument(t, 1);
            z_113 = ATgetArgument(t, 2);
            a_114 = ATgetArgument(t, 3);
            t = z_113;
            t = map_1_0(q_7, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                x_113 = ATgetArgument(t, 0);
                y_113 = ATgetArgument(t, 1);
                z_113 = ATgetArgument(t, 2);
                a_114 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = z_113;
            t = map_1_0(r_7, t);
          }
      }
    }
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm h_114 = NULL;
  ATerm o_43 = t;
  int p_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_114 = ATgetArgument(t, 0);
          {
            ATerm q_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_43);
      t = h_114;
    }
  else
    {
      t = o_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_114 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_114;
    }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm q_114 = NULL;
  ATerm r_43 = t;
  int s_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_114 = ATgetArgument(t, 0);
          {
            ATerm t_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_43);
      t = q_114;
    }
  else
    {
      t = r_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_114 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_114;
    }
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm t_114 = NULL,u_114 = NULL,v_114 = NULL,w_114 = NULL,x_114 = NULL;
  t_114 = t;
  if(match_cons(t, sym_Let_2))
    {
      u_114 = ATgetArgument(t, 0);
      v_114 = ATgetArgument(t, 1);
      t = t_114;
      t = s_12(u_114, v_114, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          u_114 = ATgetArgument(t, 0);
          v_114 = ATgetArgument(t, 1);
          w_114 = ATgetArgument(t, 2);
          t = v_114;
          t = map_1_0(t_7, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              u_114 = ATgetArgument(t, 0);
              v_114 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, u_114);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  u_114 = ATgetArgument(t, 0);
                  v_114 = ATgetArgument(t, 1);
                  w_114 = ATgetArgument(t, 2);
                  x_114 = ATgetArgument(t, 3);
                  t = v_114;
                  t = map_1_0(v_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      u_114 = ATgetArgument(t, 0);
                      v_114 = ATgetArgument(t, 1);
                      w_114 = ATgetArgument(t, 2);
                      x_114 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_114;
                  t = map_1_0(w_7, t);
                }
            }
        }
    }
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm f_115 = NULL;
  ATerm u_43 = t;
  int w_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_115 = ATgetArgument(t, 0);
          {
            ATerm x_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_43);
      t = f_115;
    }
  else
    {
      t = u_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_115 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_115;
    }
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm u_115 = NULL;
  ATerm y_43 = t;
  int z_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_115 = ATgetArgument(t, 0);
          {
            ATerm b_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_43);
      t = u_115;
    }
  else
    {
      t = y_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_115 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_115;
    }
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm k_116 = NULL;
  ATerm c_44 = t;
  int d_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_116 = ATgetArgument(t, 0);
          {
            ATerm e_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_44);
      t = k_116;
    }
  else
    {
      t = c_44;
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
  t = rename_4_0(Var_1_0, p_7, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, s_7, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm s_49 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      s_49 = ATgetArgument(t, 0);
      {
        ATerm f_44 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = s_49;
  return(t);
}
ATerm b_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_44 = ATgetArgument(t, 0);
      if(((ATgetType(h_44) != AT_LIST) || !(ATisEmpty(h_44))))
        _fail(t);
      {
        ATerm i_44 = ATgetArgument(t, 1);
        if(((ATgetType(i_44) != AT_LIST) || !(ATisEmpty(i_44))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm t_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_44 = ATgetArgument(t, 0);
      if(((ATgetType(j_44) == AT_LIST) && !(ATisEmpty(j_44))))
        {
          t_49 = ATgetFirst((ATermList) j_44);
          y_49 = (ATerm) ATgetNext((ATermList) j_44);
        }
      else
        _fail(t);
      {
        ATerm l_44 = ATgetArgument(t, 1);
        if(((ATgetType(l_44) == AT_LIST) && !(ATisEmpty(l_44))))
          {
            z_49 = ATgetFirst((ATermList) l_44);
            a_50 = (ATerm) ATgetNext((ATermList) l_44);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_49, z_49), (ATerm) ATmakeAppl(sym__2, y_49, a_50));
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL;
  if(match_cons(t, sym__2))
    {
      b_50 = ATgetArgument(t, 0);
      c_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_50), b_50);
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL;
  if(match_cons(t, sym__2))
    {
      d_50 = ATgetArgument(t, 0);
      e_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_50), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_50))));
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_e_14;
  return(t);
}
ATerm InlineCall_0_0 (ATerm t)
{
  ATerm g_118 = NULL,h_118 = NULL,i_118 = NULL,j_118 = NULL,k_118 = NULL;
  g_118 = t;
  if(match_cons(t, sym_CallT_3))
    {
      h_118 = ATgetArgument(t, 0);
      j_118 = ATgetArgument(t, 1);
      k_118 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_118;
  if(match_cons(t, sym_SVar_1))
    {
      i_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_44 = t;
    int n_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_47 = NULL,r_47 = NULL;
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_118), (ATerm)ATempty, (ATerm) ATempty);
        p_47 = t;
        t = term_e_14;
        r_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_14, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_118), (ATerm)ATempty, (ATerm) ATempty));
        t = x_6(r_47, p_47, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(n_44);
      }
    else
      {
        t = m_44;
        {
          ATerm o_44 = t;
          int q_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_48 = NULL,f_48 = NULL;
              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_118), (ATerm)ATempty, (ATerm) ATempty);
              e_48 = t;
              t = term_e_14;
              f_48 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_e_14, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_118), (ATerm)ATempty, (ATerm) ATempty));
              t = x_6(f_48, e_48, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(q_44);
            }
          else
            {
              t = o_44;
              {
                ATerm r_44 = t;
                int s_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_48 = NULL,d_49 = NULL,f_49 = NULL,g_49 = NULL,i_49 = NULL,k_49 = NULL,n_49 = NULL,o_49 = NULL,r_49 = NULL,p_50 = NULL,r_50 = NULL;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_118), (ATerm)ATempty, (ATerm) ATempty);
                    p_50 = t;
                    t = term_e_14;
                    r_50 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_e_14, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_118), (ATerm)ATempty, (ATerm) ATempty));
                    t = x_6(r_50, p_50, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm t_44 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) t_44) != ATmakeSymbol("d_0", 0, ATtrue)))
                          _fail(t);
                        x_48 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = x_48;
                    t = strename_0_0(t);
                    if(match_cons(t, sym_SDefT_4))
                      {
                        if((i_118 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        d_49 = ATgetArgument(t, 1);
                        g_49 = ATgetArgument(t, 2);
                        f_49 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__3, d_49, j_118, f_49);
                    t = substitute_args_0_0(t);
                    k_49 = t;
                    t = g_49;
                    t = map_1_0(a_8, t);
                    i_49 = t;
                    t = (ATerm) ATmakeAppl(sym__2, k_118, i_49);
                    t = genzip_4_0(b_8, c_8, d_8, e_8, t);
                    n_49 = t;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_118), (ATerm)ATempty, (ATerm) ATempty);
                    o_49 = t;
                    t = term_u_44;
                    r_49 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_118), (ATerm)ATempty, (ATerm) ATempty), term_u_44);
                    t = m_13(f_8, o_49, r_49, t);
                    t = (ATerm) ATmakeAppl(sym_Scope_2, i_49, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_49), k_49));
                    t = simplify_0_0(t);
                    ;
                    LocalPopChoice(s_44);
                  }
                else
                  {
                    t = r_44;
                    {
                      ATerm b_51 = NULL,c_51 = NULL;
                      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_118), (ATerm)ATempty, (ATerm) ATempty);
                      b_51 = t;
                      t = term_e_14;
                      c_51 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_e_14, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_118), (ATerm)ATempty, (ATerm) ATempty));
                      t = x_6(c_51, b_51, t);
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
  ATerm v_44 = t;
  if((PushChoice() == 0))
    {
      ATerm q_118 = NULL,r_118 = NULL;
      if(match_cons(t, sym__2))
        {
          q_118 = ATgetArgument(t, 0);
          r_118 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, q_118, r_118);
      {
        ATerm w_44 = t;
        int x_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(q_118, r_118);
            ;
            LocalPopChoice(x_44);
          }
        else
          {
            t = w_44;
            t = SSL_gtr(q_118, r_118);
          }
        t = (ATerm) ATmakeAppl(sym__2, q_118, r_118);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_44;
    }
  return(t);
}
ATerm foldr_3_0 (ATerm p_109 (ATerm), ATerm q_109 (ATerm), ATerm r_109 (ATerm), ATerm t)
{
  ATerm u_118 = NULL,v_118 = NULL,w_118 = NULL;
  u_118 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_118;
      t = p_109(t);
    }
  else
    {
      ATerm z_118 = NULL,a_119 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_118 = ATgetFirst((ATermList) t);
          w_118 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_118;
      t = r_109(t);
      z_118 = t;
      t = w_118;
      t = foldr_3_0(p_109, q_109, r_109, t);
      a_119 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_118, a_119);
      t = q_109(t);
    }
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_y_44;
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm l_51 = NULL,q_51 = NULL;
  if(match_cons(t, sym__2))
    {
      l_51 = ATgetArgument(t, 0);
      q_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_15(l_51, q_51, t);
  return(t);
}
ATerm occurrences_1_0 (ATerm g_107 (ATerm), ATerm t)
{
  ATerm d_119 = NULL,f_119 = NULL,g_119 = NULL,e_51 = NULL;
  g_119 = t;
  {
    ATerm z_44 = t;
    int a_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_107(t);
        t = term_d_14;
        ;
        LocalPopChoice(a_45);
      }
    else
      {
        t = z_44;
        t = term_y_44;
      }
    d_119 = t;
    t = SSL_explode_term(g_119);
    if(match_cons(t, sym__2))
      {
        ATerm b_45 = ATgetArgument(t, 0);
        e_51 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = e_51;
    {
      ATerm j_8 (ATerm t)
      {
        t = occurrences_1_0(g_107, t);
        return(t);
      }
      t = foldr_3_0(g_8, i_8, j_8, t);
      f_119 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_119, f_119);
      t = g_15(d_119, f_119, t);
    }
  }
  return(t);
}
ATerm k_13 (ATerm q_96 (ATerm), ATerm u_22, ATerm t_22, ATerm t)
{
  ATerm n_119 = NULL,o_119 = NULL;
  n_119 = t;
  t = t_22;
  {
    ATerm e_45 = t;
    if((PushChoice() == 0))
      {
        ATerm p_8 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm f_45 = ATgetArgument(t, 0);
              if(match_cons(f_45, sym_SVar_1))
                {
                  if((u_22 != ATgetArgument(f_45, 0)))
                    {
                      _fail(ATgetArgument(f_45, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm g_45 = ATgetArgument(t, 1);
              }
              {
                ATerm h_45 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(p_8, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_45;
      }
    t = q_96(t);
    {
      ATerm t_8 (ATerm t)
      {
        if(match_cons(t, sym_CallT_3))
          {
            ATerm i_45 = ATgetArgument(t, 0);
            if(match_cons(i_45, sym_SVar_1))
              {
                if((u_22 != ATgetArgument(i_45, 0)))
                  {
                    _fail(ATgetArgument(i_45, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm j_45 = ATgetArgument(t, 1);
            }
            {
              ATerm k_45 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        return(t);
      }
      t = occurrences_1_0(t_8, t);
      o_119 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_119, term_d_14);
      t = leq_0_0(t);
      t = n_119;
    }
  }
  return(t);
}
ATerm m_13 (ATerm z_110 (ATerm), ATerm x_37, ATerm v_37, ATerm t)
{
  ATerm p_119 = NULL,q_119 = NULL,r_119 = NULL,s_119 = NULL,t_119 = NULL,u_119 = NULL;
  s_119 = t;
  t = z_110(t);
  p_119 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_119, x_37, v_37);
  t = j_15(p_119, x_37, v_37, t);
  {
    ATerm l_45 = t;
    int m_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_119 = NULL;
        t = term_o_45;
        v_119 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_119, term_o_45);
        t = i_15(p_119, v_119, t);
        ;
        LocalPopChoice(m_45);
      }
    else
      {
        t = l_45;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_119 = ATgetFirst((ATermList) t);
        r_119 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_o_45;
    t_119 = t;
    t = (ATerm) ATinsert(CheckATermList(r_119), (ATerm) ATinsert(CheckATermList(q_119), x_37));
    u_119 = t;
    t = SSL_table_put(p_119, t_119, u_119);
    t = s_119;
  }
  return(t);
}
ATerm o_13 (ATerm k_38, ATerm l_38, ATerm t)
{
  ATerm w_119 = NULL,x_119 = NULL;
  x_119 = t;
  {
    ATerm p_45 = t;
    int q_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_38, l_38);
        t = i_15(k_38, l_38, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_45 = ATgetFirst((ATermList) t);
            w_119 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_45);
        t = SSL_table_put(k_38, l_38, w_119);
        t = (ATerm) ATmakeAppl(sym__3, k_38, l_38, w_119);
      }
    else
      {
        t = p_45;
        t = SSL_table_remove(k_38, l_38);
        t = (ATerm) ATmakeAppl(sym__2, k_38, l_38);
      }
    t = x_119;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm w_110 (ATerm), ATerm t)
{
  ATerm y_119 = NULL,z_119 = NULL,a_120 = NULL,b_120 = NULL,c_120 = NULL;
  b_120 = t;
  t = w_110(t);
  a_120 = t;
  {
    ATerm t_45 = t;
    int v_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_120 = NULL;
        t = term_o_45;
        d_120 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_120, term_o_45);
        t = i_15(a_120, d_120, t);
        ;
        LocalPopChoice(v_45);
      }
    else
      {
        t = t_45;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_119 = ATgetFirst((ATermList) t);
        y_119 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_o_45;
    c_120 = t;
    t = SSL_table_put(a_120, c_120, y_119);
    t = z_119;
    {
      ATerm u_8 (ATerm t)
      {
        ATerm e_120 = NULL;
        e_120 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_120, e_120);
        t = o_13(a_120, e_120, t);
        return(t);
      }
      t = map_1_0(u_8, t);
      t = b_120;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm t)
{
  ATerm w_45 = t;
  int x_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_101(t);
      t = t_101(t);
      ;
      LocalPopChoice(x_45);
    }
  else
    {
      t = w_45;
      t = t_101(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_110 (ATerm), ATerm t)
{
  ATerm g_120 = NULL,h_120 = NULL,i_120 = NULL,j_120 = NULL,k_120 = NULL;
  h_120 = t;
  t = v_110(t);
  g_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_120, term_o_45);
  {
    ATerm b_46 = t;
    int e_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_120 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_46 = ATgetArgument(t, 0);
            ATerm g_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_o_45;
        o_120 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_120, term_o_45);
        t = i_15(g_120, o_120, t);
        ;
        LocalPopChoice(e_46);
      }
    else
      {
        t = b_46;
        t = (ATerm) ATempty;
      }
    i_120 = t;
    t = term_o_45;
    j_120 = t;
    t = (ATerm) ATinsert(CheckATermList(i_120), (ATerm) ATempty);
    k_120 = t;
    t = SSL_table_put(g_120, j_120, k_120);
    t = h_120;
  }
  return(t);
}
ATerm scope_2_0 (ATerm x_110 (ATerm), ATerm y_110 (ATerm), ATerm t)
{
  ATerm v_8 (ATerm t)
  {
    t = end_scope_1_0(x_110, t);
    return(t);
  }
  t = begin_scope_1_0(x_110, t);
  t = restore_always_2_0(y_110, v_8, t);
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = term_e_14;
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm b_9 (ATerm t)
{
  t = term_e_14;
  return(t);
}
ATerm inline_sdef_0_0 (ATerm t)
{
  ATerm x_8 (ATerm t)
  {
    ATerm z_8 (ATerm t)
    {
      ATerm l_46 = t;
      int m_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_120 = NULL,t_120 = NULL,v_120 = NULL;
          s_120 = t;
          {
            ATerm n_46 = t;
            int o_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    t_120 = ATgetArgument(t, 0);
                    {
                      ATerm r_46 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm s_46 = ATgetArgument(t, 2);
                    }
                    {
                      ATerm t_46 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(o_46);
                {
                  ATerm y_120 = NULL,z_120 = NULL;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, t_120), (ATerm)ATempty, (ATerm) ATempty);
                  y_120 = t;
                  t = term_u_44;
                  z_120 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, t_120), (ATerm)ATempty, (ATerm) ATempty), term_u_44);
                  t = m_13(b_9, y_120, z_120, t);
                  t = s_120;
                }
              }
            else
              {
                t = n_46;
                if(match_cons(t, sym_Let_2))
                  {
                    t_120 = ATgetArgument(t, 0);
                    v_120 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_120;
                {
                  ATerm c_9 (ATerm t)
                  {
                    ATerm c_121 = NULL,g_121 = NULL;
                    if(match_cons(t, sym_SDefT_4))
                      {
                        c_121 = ATgetArgument(t, 0);
                        {
                          ATerm u_46 = ATgetArgument(t, 1);
                        }
                        {
                          ATerm v_46 = ATgetArgument(t, 2);
                        }
                        g_121 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    {
                      ATerm g_9 (ATerm t)
                      {
                        t = v_120;
                        return(t);
                      }
                      t = k_13(g_9, c_121, g_121, t);
                      t = AddSDef_0_0(t);
                    }
                    return(t);
                  }
                  t = map_1_0(c_9, t);
                  t = (ATerm) ATmakeAppl(sym_Let_2, t_120, v_120);
                }
              }
          }
          ;
          LocalPopChoice(m_46);
        }
      else
        {
          t = l_46;
          t = repeat_1_0(InlineCall_0_0, t);
        }
      t = SRTS_all(inline_sdef_0_0, t);
      return(t);
    }
    t = scope_2_0(y_8, z_8, t);
    return(t);
  }
  t = scope_2_0(w_8, x_8, t);
  return(t);
}
ATerm topdown_1_0 (ATerm l_98 (ATerm), ATerm t)
{
  ATerm h_9 (ATerm t)
  {
    t = topdown_1_0(l_98, t);
    return(t);
  }
  t = l_98(t);
  t = SRTS_all(h_9, t);
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm w_46 = t;
  int x_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm y_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(x_46);
      {
        ATerm j_121 = NULL,k_121 = NULL;
        j_121 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm z_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        k_121 = t;
        t = SSLgetAnnotations(j_121);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_47 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) a_47) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm b_47 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(b_47) != AT_LIST) || !(ATisEmpty(b_47))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = k_121;
      }
    }
  else
    {
      t = w_46;
      {
        ATerm c_47 = t;
        int d_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm e_47 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) e_47) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm f_47 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(d_47);
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
ATerm r_13 (ATerm p_67, ATerm o_67, ATerm t)
{
  t = p_67;
  t = topdown_1_0(i_9, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, p_67);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm y_121 = NULL,z_121 = NULL,b_122 = NULL,c_122 = NULL,d_122 = NULL,e_122 = NULL,f_122 = NULL,g_122 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      b_122 = ATgetArgument(t, 0);
      e_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_122;
  if(match_cons(t, sym_Match_1))
    {
      c_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_122;
  if(match_cons(t, sym_Var_1))
    {
      d_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_122;
  if(match_cons(t, sym_Seq_2))
    {
      f_122 = ATgetArgument(t, 0);
      z_121 = ATgetArgument(t, 1);
      t = f_122;
      if(match_cons(t, sym_Build_1))
        {
          g_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_122;
      if(match_cons(t, sym_Var_1))
        {
          y_121 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_121;
      if((d_122 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_122)), z_121);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          f_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_122;
      if(match_cons(t, sym_Var_1))
        {
          g_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_122;
      if((d_122 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_122));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm o_122 = NULL,p_122 = NULL,r_122 = NULL,s_122 = NULL,t_122 = NULL,u_122 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      r_122 = ATgetArgument(t, 0);
      t_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_122;
  if(match_cons(t, sym_Build_1))
    {
      s_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_122;
  if(match_cons(t, sym_Seq_2))
    {
      u_122 = ATgetArgument(t, 0);
      p_122 = ATgetArgument(t, 1);
      t = u_122;
      if(match_cons(t, sym_Match_1))
        {
          o_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_122;
      if((s_122 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_122), p_122);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          u_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_122;
      if((s_122 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, s_122);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm c_123 = NULL,d_123 = NULL,f_123 = NULL,g_123 = NULL,h_123 = NULL,i_123 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      f_123 = ATgetArgument(t, 0);
      h_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_123;
  if(match_cons(t, sym_Match_1))
    {
      g_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_123;
  if(match_cons(t, sym_Seq_2))
    {
      i_123 = ATgetArgument(t, 0);
      d_123 = ATgetArgument(t, 1);
      t = i_123;
      if(match_cons(t, sym_Match_1))
        {
          c_123 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_123;
      if((g_123 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, g_123), d_123);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          i_123 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_123;
      if((g_123 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, g_123);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm q_123 = NULL,r_123 = NULL,s_123 = NULL,w_123 = NULL,y_123 = NULL,z_123 = NULL,a_124 = NULL,b_124 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      w_123 = ATgetArgument(t, 0);
      y_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_123;
  if(match_cons(t, sym_Build_1))
    {
      ATerm h_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_123;
  if(match_cons(t, sym_Seq_2))
    {
      z_123 = ATgetArgument(t, 0);
      a_124 = ATgetArgument(t, 1);
      t = z_123;
      if(match_cons(t, sym_PrimT_3))
        {
          q_123 = ATgetArgument(t, 0);
          r_123 = ATgetArgument(t, 1);
          s_123 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, q_123, r_123, s_123), a_124);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          z_123 = ATgetArgument(t, 0);
          a_124 = ATgetArgument(t, 1);
          b_124 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, z_123, a_124, b_124);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm n_124 = NULL,o_124 = NULL,q_124 = NULL,s_124 = NULL,t_124 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      q_124 = ATgetArgument(t, 0);
      s_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_124;
  if(match_cons(t, sym_Build_1))
    {
      ATerm i_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_124;
  if(match_cons(t, sym_Seq_2))
    {
      t_124 = ATgetArgument(t, 0);
      o_124 = ATgetArgument(t, 1);
      t = t_124;
      if(match_cons(t, sym_Build_1))
        {
          n_124 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_124), o_124);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          t_124 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, t_124);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm t)
{
  ATerm d_125 (ATerm t)
  {
    ATerm j_47 = t;
    int k_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_102(t);
        ;
        LocalPopChoice(k_47);
      }
    else
      {
        t = j_47;
        {
          ATerm x_124 = NULL,y_124 = NULL,z_124 = NULL,a_125 = NULL,b_125 = NULL,c_125 = NULL,b_7 = NULL;
          t = y_102(t);
          c_125 = t;
          if(match_cons(t, sym__2))
            {
              y_124 = ATgetArgument(t, 0);
              z_124 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_125);
          x_124 = t;
          t = y_124;
          t = a_103(t);
          a_125 = t;
          t = z_124;
          t = d_125(t);
          b_125 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_125, b_125);
          b_7 = t;
          t = SSLsetAnnotations(b_7, x_124);
          t = z_102(t);
        }
      }
    return(t);
  }
  t = d_125(t);
  return(t);
}
ATerm j_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_47 = ATgetArgument(t, 0);
      if(((ATgetType(l_47) != AT_LIST) || !(ATisEmpty(l_47))))
        _fail(t);
      {
        ATerm m_47 = ATgetArgument(t, 1);
        if(((ATgetType(m_47) != AT_LIST) || !(ATisEmpty(m_47))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm e_126 = NULL,f_126 = NULL,g_126 = NULL,h_126 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_47 = ATgetArgument(t, 0);
      if(((ATgetType(n_47) == AT_LIST) && !(ATisEmpty(n_47))))
        {
          e_126 = ATgetFirst((ATermList) n_47);
          f_126 = (ATerm) ATgetNext((ATermList) n_47);
        }
      else
        _fail(t);
      {
        ATerm o_47 = ATgetArgument(t, 1);
        if(((ATgetType(o_47) == AT_LIST) && !(ATisEmpty(o_47))))
          {
            g_126 = ATgetFirst((ATermList) o_47);
            h_126 = (ATerm) ATgetNext((ATermList) o_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_126, g_126), (ATerm) ATmakeAppl(sym__2, f_126, h_126));
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm i_126 = NULL,j_126 = NULL;
  if(match_cons(t, sym__2))
    {
      i_126 = ATgetArgument(t, 0);
      j_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_126), i_126);
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm k_126 = NULL,l_126 = NULL;
  if(match_cons(t, sym__2))
    {
      k_126 = ATgetArgument(t, 0);
      l_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_126), (ATerm) ATmakeAppl(sym_Match_1, l_126));
  return(t);
}
ATerm p_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_47 = ATgetArgument(t, 0);
      if(((ATgetType(q_47) != AT_LIST) || !(ATisEmpty(q_47))))
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
ATerm q_9 (ATerm t)
{
  ATerm q_126 = NULL,r_126 = NULL,s_126 = NULL,t_126 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_47 = ATgetArgument(t, 0);
      if(((ATgetType(t_47) == AT_LIST) && !(ATisEmpty(t_47))))
        {
          q_126 = ATgetFirst((ATermList) t_47);
          r_126 = (ATerm) ATgetNext((ATermList) t_47);
        }
      else
        _fail(t);
      {
        ATerm v_47 = ATgetArgument(t, 1);
        if(((ATgetType(v_47) == AT_LIST) && !(ATisEmpty(v_47))))
          {
            s_126 = ATgetFirst((ATermList) v_47);
            t_126 = (ATerm) ATgetNext((ATermList) v_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_126, s_126), (ATerm) ATmakeAppl(sym__2, r_126, t_126));
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm u_126 = NULL,v_126 = NULL;
  if(match_cons(t, sym__2))
    {
      u_126 = ATgetArgument(t, 0);
      v_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_126), u_126);
  return(t);
}
ATerm t_9 (ATerm t)
{
  ATerm w_126 = NULL,x_126 = NULL;
  if(match_cons(t, sym__2))
    {
      w_126 = ATgetArgument(t, 0);
      x_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_126), (ATerm) ATmakeAppl(sym_Match_1, x_126));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm l_125 = NULL,m_125 = NULL,n_125 = NULL,p_125 = NULL,q_125 = NULL,r_125 = NULL,s_125 = NULL,t_125 = NULL,u_125 = NULL,v_125 = NULL,w_125 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      p_125 = ATgetArgument(t, 0);
      t_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_125;
  if(match_cons(t, sym_Build_1))
    {
      q_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_125;
  if(match_cons(t, sym_Op_2))
    {
      r_125 = ATgetArgument(t, 0);
      s_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_125;
  if(match_cons(t, sym_Seq_2))
    {
      u_125 = ATgetArgument(t, 0);
      n_125 = ATgetArgument(t, 1);
      {
        ATerm d_126 = NULL;
        t = u_125;
        if(match_cons(t, sym_Match_1))
          {
            v_125 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_125;
        if(match_cons(t, sym_Op_2))
          {
            l_125 = ATgetArgument(t, 0);
            m_125 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_125;
        if((r_125 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, s_125, m_125);
        t = genzip_4_0(j_9, k_9, l_9, m_9, t);
        d_126 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, d_126), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, r_125, s_125)), n_125));
      }
    }
  else
    {
      ATerm p_126 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          u_125 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_125;
      if(match_cons(t, sym_Op_2))
        {
          v_125 = ATgetArgument(t, 0);
          w_125 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_125;
      if((r_125 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, s_125, w_125);
      t = genzip_4_0(p_9, q_9, s_9, t_9, t);
      p_126 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_126), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, r_125, s_125)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm t_127 = NULL,w_127 = NULL,x_127 = NULL,y_127 = NULL,z_127 = NULL,b_128 = NULL,c_128 = NULL,d_128 = NULL;
  w_127 = t;
  if(match_cons(t, sym_Seq_2))
    {
      x_127 = ATgetArgument(t, 0);
      b_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_127;
  if(match_cons(t, sym_Build_1))
    {
      y_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_127;
  if(match_cons(t, sym_Op_2))
    {
      z_127 = ATgetArgument(t, 0);
      {
        ATerm w_47 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = b_128;
  {
    ATerm x_47 = t;
    int y_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            c_128 = ATgetArgument(t, 0);
            {
              ATerm z_47 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(y_47);
        t = c_128;
        if(match_cons(t, sym_Match_1))
          {
            d_128 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_128;
        if(match_cons(t, sym_Op_2))
          {
            t_127 = ATgetArgument(t, 0);
            {
              ATerm a_48 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_127, t_127);
        {
          ATerm b_48 = t;
          if((PushChoice() == 0))
            {
              ATerm g_52 = NULL;
              if(match_cons(t, sym__2))
                {
                  g_52 = ATgetArgument(t, 0);
                  if((g_52 != ATgetArgument(t, 1)))
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
              t = b_48;
            }
          t = term_e_17;
        }
      }
    else
      {
        t = x_47;
        if(match_cons(t, sym_Match_1))
          {
            c_128 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_128;
        if(match_cons(t, sym_Op_2))
          {
            d_128 = ATgetArgument(t, 0);
            {
              ATerm c_48 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_127, d_128);
        {
          ATerm d_48 = t;
          if((PushChoice() == 0))
            {
              ATerm b_53 = NULL;
              if(match_cons(t, sym__2))
                {
                  b_53 = ATgetArgument(t, 0);
                  if((b_53 != ATgetArgument(t, 1)))
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
              t = d_48;
            }
          t = term_e_17;
        }
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm p_99 (ATerm), ATerm t)
{
  ATerm h_128 (ATerm t)
  {
    ATerm g_48 = t;
    int h_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_99(t);
        ;
        LocalPopChoice(h_48);
      }
    else
      {
        t = g_48;
        t = SRTS_one(h_128, t);
      }
    return(t);
  }
  t = h_128(t);
  return(t);
}
ATerm at_end_1_0 (ATerm c_105 (ATerm), ATerm t)
{
  ATerm c_129 (ATerm t)
  {
    ATerm z_128 = NULL,a_129 = NULL,b_129 = NULL;
    b_129 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_128 = ATgetFirst((ATermList) t);
        a_129 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm n_53 = NULL,s_53 = NULL,d_7 = NULL;
          t = SSLgetAnnotations(b_129);
          n_53 = t;
          t = a_129;
          t = c_129(t);
          s_53 = t;
          t = (ATerm) ATinsert(CheckATermList(s_53), z_128);
          d_7 = t;
          t = SSLsetAnnotations(d_7, n_53);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_129;
        t = c_105(t);
      }
    return(t);
  }
  t = c_129(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_128 = NULL,k_128 = NULL,l_128 = NULL;
  j_128 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_128;
    }
  else
    {
      ATerm y_9 (ATerm t)
      {
        t = not_null(l_128);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_128 = ATgetFirst((ATermList) t);
          if(((l_128 != NULL) && (l_128 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_128 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_128;
      t = at_end_1_0(y_9, t);
    }
  return(t);
}
ATerm p_129 (ATerm g_129, ATerm t)
{
  ATerm h_129 = NULL;
  t = SSL_explode_term(g_129);
  if(match_cons(t, sym__2))
    {
      ATerm i_48 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_48) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      h_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_129;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm j_129 = NULL,k_129 = NULL,l_129 = NULL;
  l_129 = t;
  if(match_cons(t, sym__2))
    {
      j_129 = ATgetArgument(t, 0);
      k_129 = ATgetArgument(t, 1);
      {
        ATerm k_48 = t;
        int l_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_10 (ATerm t)
            {
              t = k_129;
              return(t);
            }
            t = j_129;
            t = at_end_1_0(b_10, t);
            ;
            LocalPopChoice(l_48);
          }
        else
          {
            t = k_48;
            t = p_129(l_129, t);
          }
      }
    }
  else
    {
      t = p_129(l_129, t);
    }
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm j_130 = NULL,k_130 = NULL,l_130 = NULL,m_130 = NULL,n_130 = NULL,o_130 = NULL,p_130 = NULL,q_130 = NULL,r_130 = NULL,s_130 = NULL,t_130 = NULL,u_130 = NULL,v_130 = NULL;
  j_130 = t;
  if(match_cons(t, sym_Let_2))
    {
      k_130 = ATgetArgument(t, 0);
      r_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_130;
  if(match_cons(t, sym_Let_2))
    {
      s_130 = ATgetArgument(t, 0);
      u_130 = ATgetArgument(t, 1);
      {
        ATerm z_130 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, k_130, s_130);
        t = conc_0_0(t);
        z_130 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, z_130, u_130);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          s_130 = ATgetArgument(t, 0);
          u_130 = ATgetArgument(t, 1);
          v_130 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = k_130;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_130 = ATgetFirst((ATermList) t);
          q_130 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_130;
      if(match_cons(t, sym_SDefT_4))
        {
          m_130 = ATgetArgument(t, 0);
          n_130 = ATgetArgument(t, 1);
          o_130 = ATgetArgument(t, 2);
          p_130 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = n_130;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_130;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_130;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_130;
      if(match_cons(t, sym_SVar_1))
        {
          t_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_130;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_130;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_130;
      if((m_130 != t))
        {
          _fail(t);
        }
      t = p_130;
      {
        ATerm m_48 = t;
        if((PushChoice() == 0))
          {
            ATerm f_10 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm n_48 = ATgetArgument(t, 0);
                  if(match_cons(n_48, sym_SVar_1))
                    {
                      if((m_130 != ATgetArgument(n_48, 0)))
                        {
                          _fail(ATgetArgument(n_48, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm o_48 = ATgetArgument(t, 1);
                    if(((ATgetType(o_48) != AT_LIST) || !(ATisEmpty(o_48))))
                      _fail(t);
                  }
                  {
                    ATerm p_48 = ATgetArgument(t, 2);
                    if(((ATgetType(p_48) != AT_LIST) || !(ATisEmpty(p_48))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(f_10, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_48;
          }
        t = p_130;
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm i_131 = NULL,j_131 = NULL,k_131 = NULL,l_131 = NULL,m_131 = NULL,n_131 = NULL,p_131 = NULL,q_131 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      p_131 = ATgetArgument(t, 0);
      t = p_131;
      if(match_cons(t, sym_Seq_2))
        {
          n_131 = ATgetArgument(t, 0);
          j_131 = ATgetArgument(t, 1);
          t = n_131;
          if(match_cons(t, sym_Where_1))
            {
              i_131 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_131;
          if(match_cons(t, sym_Seq_2))
            {
              k_131 = ATgetArgument(t, 0);
              m_131 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_131;
          if(match_cons(t, sym_Build_1))
            {
              l_131 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, i_131, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_131), m_131)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              n_131 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, n_131);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          p_131 = ATgetArgument(t, 0);
          t = p_131;
          if(match_cons(t, sym_Test_1))
            {
              n_131 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, n_131);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              p_131 = ATgetArgument(t, 0);
              t = p_131;
              if(match_cons(t, sym_Not_1))
                {
                  n_131 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, n_131);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  p_131 = ATgetArgument(t, 0);
                  q_131 = ATgetArgument(t, 1);
                  t = q_131;
                  if((p_131 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      p_131 = ATgetArgument(t, 0);
                      q_131 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = q_131;
                  if((p_131 != t))
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
  ATerm e_132 = NULL,f_132 = NULL,g_132 = NULL,h_132 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      e_132 = ATgetArgument(t, 0);
      h_132 = ATgetArgument(t, 1);
      t = e_132;
      if(match_cons(t, sym_LChoice_2))
        {
          f_132 = ATgetArgument(t, 0);
          g_132 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, f_132, (ATerm) ATmakeAppl(sym_LChoice_2, g_132, h_132));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          e_132 = ATgetArgument(t, 0);
          h_132 = ATgetArgument(t, 1);
          t = e_132;
          if(match_cons(t, sym_Seq_2))
            {
              f_132 = ATgetArgument(t, 0);
              g_132 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, f_132, (ATerm) ATmakeAppl(sym_Seq_2, g_132, h_132));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              e_132 = ATgetArgument(t, 0);
              h_132 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_132;
          if(match_cons(t, sym_Choice_2))
            {
              f_132 = ATgetArgument(t, 0);
              g_132 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, f_132, (ATerm) ATmakeAppl(sym_Choice_2, g_132, h_132));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm v_132 = NULL,w_132 = NULL,x_132 = NULL,z_132 = NULL,a_133 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      z_132 = ATgetArgument(t, 0);
      a_133 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, z_132, a_133);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          z_132 = ATgetArgument(t, 0);
          t = z_132;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_132 = ATgetFirst((ATermList) t);
              w_132 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, v_132, (ATerm) ATmakeAppl(sym_LChoices_1, w_132));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_e_17;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              z_132 = ATgetArgument(t, 0);
              t = z_132;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_132 = ATgetFirst((ATermList) t);
                  w_132 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, v_132, (ATerm) ATmakeAppl(sym_Choices_1, w_132));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_e_17;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  z_132 = ATgetArgument(t, 0);
                  t = z_132;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_132 = ATgetFirst((ATermList) t);
                      w_132 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_132, (ATerm) ATmakeAppl(sym_Seqs_1, w_132));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_w_16;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      z_132 = ATgetArgument(t, 0);
                      a_133 = ATgetArgument(t, 1);
                      x_132 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, a_133, (ATerm) ATmakeAppl(sym_Op_2, term_t_34, (ATerm) ATinsert(ATinsert(ATempty, x_132), z_132)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          z_132 = ATgetArgument(t, 0);
                          a_133 = ATgetArgument(t, 1);
                          x_132 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, x_132)), z_132), (ATerm) ATmakeAppl(sym_Build_1, a_133)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              z_132 = ATgetArgument(t, 0);
                              a_133 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_132, (ATerm) ATmakeAppl(sym_Match_1, a_133));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  z_132 = ATgetArgument(t, 0);
                                  a_133 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_132), a_133);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      z_132 = ATgetArgument(t, 0);
                                      a_133 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_133), z_132);
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
ATerm g_10 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm n_134 = NULL,o_134 = NULL,p_134 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      n_134 = ATgetArgument(t, 0);
      t = n_134;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_e_17;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          n_134 = ATgetArgument(t, 0);
          t = n_134;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_w_16;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              n_134 = ATgetArgument(t, 0);
              o_134 = ATgetArgument(t, 1);
              t = n_134;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_e_17;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  n_134 = ATgetArgument(t, 0);
                  o_134 = ATgetArgument(t, 1);
                  t = o_134;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_e_17;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      n_134 = ATgetArgument(t, 0);
                      o_134 = ATgetArgument(t, 1);
                      t = o_134;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_e_17;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          n_134 = ATgetArgument(t, 0);
                          t = n_134;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_e_17;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              n_134 = ATgetArgument(t, 0);
                              t = n_134;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_e_17;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  n_134 = ATgetArgument(t, 0);
                                  o_134 = ATgetArgument(t, 1);
                                  t = o_134;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_e_17;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      n_134 = ATgetArgument(t, 0);
                                      o_134 = ATgetArgument(t, 1);
                                      t = o_134;
                                      t = fetch_1_0(g_10, t);
                                      t = term_e_17;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          n_134 = ATgetArgument(t, 0);
                                          o_134 = ATgetArgument(t, 1);
                                          t = o_134;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = n_134;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = o_134;
                                                }
                                              else
                                                {
                                                  t = n_134;
                                                }
                                            }
                                          else
                                            {
                                              t = n_134;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = o_134;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              n_134 = ATgetArgument(t, 0);
                                              o_134 = ATgetArgument(t, 1);
                                              t = o_134;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = n_134;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = o_134;
                                                    }
                                                  else
                                                    {
                                                      t = n_134;
                                                    }
                                                }
                                              else
                                                {
                                                  t = n_134;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = o_134;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  n_134 = ATgetArgument(t, 0);
                                                  t = n_134;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_e_17;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      n_134 = ATgetArgument(t, 0);
                                                      o_134 = ATgetArgument(t, 1);
                                                      p_134 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = p_134;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_134, o_134);
                                                }
                                            }
                                        }
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
  ATerm s_135 = NULL,u_135 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      u_135 = ATgetArgument(t, 0);
      t = u_135;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_w_16;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          u_135 = ATgetArgument(t, 0);
          t = u_135;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_e_17;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              u_135 = ATgetArgument(t, 0);
              s_135 = ATgetArgument(t, 1);
              t = s_135;
              if(match_cons(t, sym_Id_0))
                {
                  t = u_135;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = s_135;
                    }
                  else
                    {
                      t = u_135;
                    }
                }
              else
                {
                  t = u_135;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = s_135;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  u_135 = ATgetArgument(t, 0);
                  s_135 = ATgetArgument(t, 1);
                  t = u_135;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_w_16;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      u_135 = ATgetArgument(t, 0);
                      s_135 = ATgetArgument(t, 1);
                      t = s_135;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_w_16;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          u_135 = ATgetArgument(t, 0);
                          s_135 = ATgetArgument(t, 1);
                          t = s_135;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_w_16;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              u_135 = ATgetArgument(t, 0);
                              t = u_135;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_w_16;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  u_135 = ATgetArgument(t, 0);
                                  t = u_135;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_w_16;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      u_135 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = u_135;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_w_16;
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
  ATerm q_48 = t;
  int r_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(r_48);
    }
  else
    {
      t = q_48;
      {
        ATerm s_48 = t;
        int t_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(t_48);
          }
        else
          {
            t = s_48;
            {
              ATerm u_48 = t;
              int z_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(z_48);
                }
              else
                {
                  t = u_48;
                  {
                    ATerm a_49 = t;
                    int b_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(b_49);
                      }
                    else
                      {
                        t = a_49;
                        {
                          ATerm c_49 = t;
                          int e_49 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(e_49);
                            }
                          else
                            {
                              t = c_49;
                              {
                                ATerm h_49 = t;
                                int j_49 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm j_136 = NULL,k_136 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        j_136 = ATgetArgument(t, 0);
                                        k_136 = ATgetArgument(t, 1);
                                        t = j_136;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = k_136;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            j_136 = ATgetArgument(t, 0);
                                            k_136 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = j_136;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = k_136;
                                      }
                                    ;
                                    LocalPopChoice(j_49);
                                  }
                                else
                                  {
                                    t = h_49;
                                    {
                                      ATerm l_49 = t;
                                      int m_49 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(m_49);
                                        }
                                      else
                                        {
                                          t = l_49;
                                          {
                                            ATerm p_49 = t;
                                            int u_49 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                ;
                                                LocalPopChoice(u_49);
                                              }
                                            else
                                              {
                                                t = p_49;
                                                {
                                                  ATerm v_49 = t;
                                                  int w_49 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      ;
                                                      LocalPopChoice(w_49);
                                                    }
                                                  else
                                                    {
                                                      t = v_49;
                                                      {
                                                        ATerm x_49 = t;
                                                        int f_50 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            ;
                                                            LocalPopChoice(f_50);
                                                          }
                                                        else
                                                          {
                                                            t = x_49;
                                                            {
                                                              ATerm g_50 = t;
                                                              int h_50 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  ;
                                                                  LocalPopChoice(h_50);
                                                                }
                                                              else
                                                                {
                                                                  t = g_50;
                                                                  {
                                                                    ATerm i_50 = t;
                                                                    int k_50 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
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
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              ;
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
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(o_50);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = n_50;
                                                                                    {
                                                                                      ATerm n_136 = NULL,o_136 = NULL,p_136 = NULL,q_136 = NULL;
                                                                                      o_136 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          p_136 = ATgetArgument(t, 0);
                                                                                          q_136 = ATgetArgument(t, 1);
                                                                                          t = p_136;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              n_136 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = o_136;
                                                                                          t = r_13(n_136, q_136, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              p_136 = ATgetArgument(t, 0);
                                                                                              q_136 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = p_136;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = q_136;
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_1_0 (ATerm o_115 (ATerm), ATerm t)
{
  ATerm x_136 (ATerm t)
  {
    ATerm q_50 = t;
    int s_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_115(t);
        t = x_136(t);
        ;
        LocalPopChoice(s_50);
      }
    else
      {
        t = q_50;
      }
    return(t);
  }
  t = x_136(t);
  return(t);
}
ATerm downup_1_0 (ATerm n_98 (ATerm), ATerm t)
{
  t = n_98(t);
  {
    ATerm i_10 (ATerm t)
    {
      t = downup_1_0(n_98, t);
      return(t);
    }
    t = SRTS_all(i_10, t);
    t = n_98(t);
  }
  return(t);
}
ATerm k_10 (ATerm t)
{
  t = downup_1_0(l_10, t);
  {
    ATerm t_50 = t;
    int u_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        ;
        LocalPopChoice(u_50);
      }
    else
      {
        t = t_50;
      }
  }
  return(t);
}
ATerm l_10 (ATerm t)
{
  t = repeat_1_0(Simplify_0_0, t);
  return(t);
}
ATerm m_10 (ATerm t)
{
  t = inline_sdef_0_0(t);
  {
    ATerm v_50 = t;
    int w_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        ;
        LocalPopChoice(w_50);
      }
    else
      {
        t = v_50;
      }
  }
  return(t);
}
ATerm inline_sdefs_0_0 (ATerm t)
{
  t = map_1_0(k_10, t);
  t = map_1_0(m_10, t);
  return(t);
}
ATerm y_14 (ATerm h_73, ATerm i_73, ATerm t)
{
  ATerm e_137 = NULL;
  t = SSL_fputc(h_73, i_73);
  e_137 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_137);
  return(t);
}
ATerm z_14 (ATerm g_76, ATerm h_76, ATerm t)
{
  ATerm f_137 = NULL;
  t = SSL_write_term_to_stream_text(g_76, h_76);
  f_137 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_137);
  return(t);
}
ATerm b_15 (ATerm z_125 (ATerm), ATerm y_734, ATerm k_76, ATerm t)
{
  ATerm g_137 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_734, term_x_50);
  t = f_15(t);
  g_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_137, k_76);
  t = z_125(t);
  t = fclose_0_0(t);
  t = k_76;
  return(t);
}
ATerm a_15 (ATerm c_76, ATerm d_76, ATerm t)
{
  ATerm h_137 = NULL;
  t = SSL_write_term_to_stream_baf(c_76, d_76);
  h_137 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_137);
  return(t);
}
ATerm o_10 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_50 = ATgetArgument(t, 0);
      if(match_cons(y_50, sym_Stream_1))
        {
          m_55 = ATgetArgument(y_50, 0);
        }
      else
        _fail(t);
      n_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_15(m_55, n_55, t);
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm c_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL,t_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_50 = ATgetArgument(t, 0);
      if(match_cons(z_50, sym_Stream_1))
        {
          o_56 = ATgetArgument(z_50, 0);
        }
      else
        _fail(t);
      t_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_14(o_56, t_56, t);
  c_56 = t;
  t = term_a_51;
  m_56 = t;
  t = c_56;
  if(match_cons(t, sym_Stream_1))
    {
      n_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_a_51, c_56);
  t = y_14(m_56, n_56, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm l_137 = NULL,m_137 = NULL,n_137 = NULL,o_137 = NULL,p_137 = NULL,r_137 = NULL,s_137 = NULL,t_137 = NULL,u_137 = NULL,v_137 = NULL,v_138 = NULL,w_138 = NULL,j_7 = NULL,i_7 = NULL;
  m_137 = t;
  if(match_cons(t, sym__2))
    {
      t_137 = ATgetArgument(t, 0);
      u_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_137);
  s_137 = t;
  t = t_137;
  {
    ATerm d_51 = t;
    int f_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_10 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((l_137 != NULL) && (l_137 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                l_137 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(n_10, t);
        ;
        LocalPopChoice(f_51);
      }
    else
      {
        t = d_51;
        t = term_g_51;
        l_137 = t;
      }
    v_137 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_137, u_137);
    i_7 = t;
    t = SSLsetAnnotations(i_7, s_137);
    t = m_137;
    if(match_cons(t, sym__2))
      {
        o_137 = ATgetArgument(t, 0);
        p_137 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(m_137);
    n_137 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_137, (ATerm) ATmakeAppl(sym__2, not_null(l_137), p_137));
    j_7 = t;
    t = SSLsetAnnotations(j_7, n_137);
    r_137 = t;
    if(match_cons(t, sym__2))
      {
        v_138 = ATgetArgument(t, 0);
        w_138 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm h_51 = t;
      int i_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_55 = NULL,f_55 = NULL,g_55 = NULL,k_55 = NULL,l_55 = NULL,k_7 = NULL;
          t = SSLgetAnnotations(r_137);
          c_55 = t;
          t = v_138;
          t = fetch_1_0(o_10, t);
          f_55 = t;
          t = w_138;
          if(match_cons(t, sym__2))
            {
              k_55 = ATgetArgument(t, 0);
              l_55 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_15(q_10, k_55, l_55, t);
          g_55 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_55, g_55);
          k_7 = t;
          t = SSLsetAnnotations(k_7, c_55);
          ;
          LocalPopChoice(i_51);
        }
      else
        {
          t = h_51;
          {
            ATerm s_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL,l_7 = NULL;
            t = SSLgetAnnotations(r_137);
            s_55 = t;
            t = w_138;
            if(match_cons(t, sym__2))
              {
                a_56 = ATgetArgument(t, 0);
                b_56 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = b_15(s_10, a_56, b_56, t);
            z_55 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_138, z_55);
            l_7 = t;
            t = SSLsetAnnotations(l_7, s_55);
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
ATerm apply_strategy_1_0 (ATerm u_120 (ATerm), ATerm t)
{
  ATerm z_138 = NULL,a_139 = NULL,b_139 = NULL,c_139 = NULL,d_139 = NULL;
  d_139 = t;
  t = dtime_0_0(t);
  t = d_139;
  t = u_120(t);
  c_139 = t;
  t = dtime_0_0(t);
  z_138 = t;
  t = c_139;
  if(match_cons(t, sym__2))
    {
      a_139 = ATgetArgument(t, 0);
      b_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_139), (ATerm) ATmakeAppl(sym_Runtime_1, z_138)), b_139);
  return(t);
}
ATerm r_139 (ATerm l_139, ATerm t)
{
  t = SSL_fclose(l_139);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_139 = NULL,p_139 = NULL;
  p_139 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_139 = ATgetArgument(t, 0);
      {
        ATerm j_51 = t;
        int k_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_139);
            ;
            LocalPopChoice(k_51);
          }
        else
          {
            t = j_51;
            t = r_139(p_139, t);
          }
      }
    }
  else
    {
      t = r_139(p_139, t);
    }
  return(t);
}
ATerm c_15 (ATerm i_76, ATerm t)
{
  t = SSL_read_term_from_stream(i_76);
  return(t);
}
ATerm e_15 (ATerm j_73, ATerm k_73, ATerm t)
{
  ATerm s_139 = NULL;
  t = SSL_fopen(j_73, k_73);
  s_139 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_139);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_139 = NULL;
  t = SSL_stdin_stream();
  t_139 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_139);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_139 = NULL;
  t = SSL_stdout_stream();
  u_139 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_139);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_139 = NULL;
  t = SSL_stderr_stream();
  v_139 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_139);
  return(t);
}
ATerm c_141 (ATerm b_140, ATerm t)
{
  ATerm c_140 = NULL;
  t = SSL_explode_term(b_140);
  if(match_cons(t, sym__2))
    {
      ATerm m_51 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_51) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_51 = ATgetArgument(t, 1);
        if(((ATgetType(o_51) == AT_LIST) && !(ATisEmpty(o_51))))
          {
            c_140 = ATgetFirst((ATermList) o_51);
            {
              ATerm p_51 = (ATerm) ATgetNext((ATermList) o_51);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_140;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_140;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_140;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_140;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm d_141 (ATerm f_140, ATerm g_140, ATerm h_140, ATerm t)
{
  ATerm i_140 = NULL,j_140 = NULL,k_140 = NULL,n_140 = NULL,o_9 = NULL;
  t = SSLgetAnnotations(h_140);
  k_140 = t;
  t = f_140;
  if(match_cons(t, sym_Path_1))
    {
      n_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_140, g_140);
  o_9 = t;
  t = SSLsetAnnotations(o_9, k_140);
  if(match_cons(t, sym__2))
    {
      i_140 = ATgetArgument(t, 0);
      j_140 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_15(i_140, j_140, t);
  return(t);
}
ATerm e_141 (ATerm p_140, ATerm q_140, ATerm r_140, ATerm t)
{
  ATerm s_140 = NULL,t_140 = NULL,u_140 = NULL,x_140 = NULL,r_9 = NULL;
  t = SSLgetAnnotations(r_140);
  u_140 = t;
  t = SSL_is_string(p_140);
  x_140 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_140, q_140);
  r_9 = t;
  t = SSLsetAnnotations(r_9, u_140);
  if(match_cons(t, sym__2))
    {
      s_140 = ATgetArgument(t, 0);
      t_140 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_15(s_140, t_140, t);
  return(t);
}
ATerm f_15 (ATerm t)
{
  ATerm z_140 = NULL,a_141 = NULL,b_141 = NULL;
  z_140 = t;
  if(match_cons(t, sym__2))
    {
      a_141 = ATgetArgument(t, 0);
      b_141 = ATgetArgument(t, 1);
      {
        ATerm r_51 = t;
        int s_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_141(z_140, t);
            ;
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
                  t = d_141(a_141, b_141, z_140, t);
                  ;
                  LocalPopChoice(u_51);
                }
              else
                {
                  t = t_51;
                  t = e_141(a_141, b_141, z_140, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_141(z_140, t);
    }
  return(t);
}
ATerm u_10 (ATerm t)
{
  t = term_v_51;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_141 = NULL,g_141 = NULL,h_141 = NULL;
  ATerm w_51 = t;
  int x_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_141 = NULL;
      i_141 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_141, term_y_51);
      t = f_15(t);
      ;
      LocalPopChoice(x_51);
    }
  else
    {
      t = w_51;
      t = debug_1_0(u_10, t);
      _fail(t);
    }
  g_141 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_141 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_15(h_141, t);
  f_141 = t;
  t = g_141;
  t = fclose_0_0(t);
  t = f_141;
  return(t);
}
ATerm fetch_1_0 (ATerm w_104 (ATerm), ATerm t)
{
  ATerm g_142 (ATerm t)
  {
    ATerm d_142 = NULL,e_142 = NULL,f_142 = NULL;
    d_142 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_142 = ATgetFirst((ATermList) t);
        f_142 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_51 = t;
      int a_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_57 = NULL,v_57 = NULL,w_9 = NULL;
          t = SSLgetAnnotations(d_142);
          o_57 = t;
          t = e_142;
          t = w_104(t);
          v_57 = t;
          t = (ATerm) ATinsert(CheckATermList(f_142), v_57);
          w_9 = t;
          t = SSLsetAnnotations(w_9, o_57);
          ;
          LocalPopChoice(a_52);
        }
      else
        {
          t = z_51;
          {
            ATerm h_58 = NULL,n_58 = NULL,x_9 = NULL;
            t = SSLgetAnnotations(d_142);
            h_58 = t;
            t = f_142;
            t = g_142(t);
            n_58 = t;
            t = (ATerm) ATinsert(CheckATermList(n_58), e_142);
            x_9 = t;
            t = SSLsetAnnotations(x_9, h_58);
          }
        }
    }
    return(t);
  }
  t = g_142(t);
  return(t);
}
ATerm x_14 (ATerm p_46, ATerm q_46, ATerm t)
{
  t = SSL_strcat(p_46, q_46);
  return(t);
}
ATerm debug_1_0 (ATerm x_125 (ATerm), ATerm t)
{
  ATerm j_142 = NULL,k_142 = NULL,l_142 = NULL,m_142 = NULL;
  j_142 = t;
  t = x_125(t);
  k_142 = t;
  t = term_a_14;
  l_142 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_142), k_142);
  m_142 = t;
  t = SSL_printnl(l_142, m_142);
  t = j_142;
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm b_52 = t;
  int c_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(c_52);
    }
  else
    {
      t = b_52;
    }
  return(t);
}
ATerm x_10 (ATerm t)
{
  t = term_d_52;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_52 = t;
  int h_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_142 = NULL;
      t_142 = t;
      t = SSL_is_string(t_142);
      ;
      LocalPopChoice(h_52);
    }
  else
    {
      t = e_52;
      {
        ATerm i_52 = t;
        int j_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(v_10, t);
            ;
            LocalPopChoice(j_52);
          }
        else
          {
            t = i_52;
            {
              ATerm a_143 = NULL,b_143 = NULL,c_143 = NULL;
              a_143 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_143 = ATgetArgument(t, 0);
                  t = b_143;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_143 = ATgetArgument(t, 0);
                      t = b_143;
                      {
                        ATerm k_52 = t;
                        int l_52 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(l_52);
                          }
                        else
                          {
                            t = k_52;
                            t = debug_1_0(x_10, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_143 = NULL,h_143 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_143 = ATgetArgument(t, 0);
                          c_143 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_143;
                      t = eval_config_0_0(t);
                      g_143 = t;
                      t = c_143;
                      t = eval_config_0_0(t);
                      h_143 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_143, h_143);
                      t = x_14(g_143, h_143, t);
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
  ATerm l_143 = NULL,m_143 = NULL;
  l_143 = t;
  t = term_m_52;
  m_143 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_52, l_143);
  t = i_15(m_143, l_143, t);
  {
    ATerm n_52 = t;
    int p_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_143 = NULL,o_143 = NULL;
        t = eval_config_0_0(t);
        n_143 = t;
        t = term_m_52;
        o_143 = t;
        t = SSL_table_put(o_143, l_143, n_143);
        t = n_143;
        ;
        LocalPopChoice(p_52);
      }
    else
      {
        t = n_52;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm i_119 (ATerm), ATerm t)
{
  ATerm s_143 = NULL;
  s_143 = t;
  {
    ATerm q_52 = t;
    int r_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_143 = NULL;
        t = term_s_52;
        t = get_config_0_0(t);
        u_143 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_143, term_t_52);
        t = geq_0_0(t);
        t = s_143;
        t = i_119(t);
        ;
        LocalPopChoice(r_52);
      }
    else
      {
        t = q_52;
        t = s_143;
      }
  }
  return(t);
}
ATerm a_11 (ATerm t)
{
  ATerm y_143 = NULL;
  y_143 = t;
  if(match_string(t, "-k"))
    {
      t = y_143;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_143;
    }
  return(t);
}
ATerm b_11 (ATerm t)
{
  ATerm z_143 = NULL,a_144 = NULL,b_144 = NULL;
  z_143 = t;
  t = SSL_string_to_int(z_143);
  a_144 = t;
  t = term_u_52;
  b_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_52, a_144);
  t = l_15(b_144, a_144, t);
  t = z_143;
  return(t);
}
ATerm c_11 (ATerm t)
{
  t = term_w_52;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_11, b_11, c_11, t);
  return(t);
}
ATerm d_11 (ATerm t)
{
  ATerm d_144 = NULL;
  d_144 = t;
  if(match_string(t, "-S"))
    {
      t = d_144;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_144;
    }
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm e_144 = NULL,f_144 = NULL;
  t = term_s_52;
  e_144 = t;
  t = term_y_44;
  f_144 = t;
  t = term_x_52;
  t = l_15(e_144, f_144, t);
  t = term_y_52;
  return(t);
}
ATerm f_11 (ATerm t)
{
  t = term_z_52;
  return(t);
}
ATerm g_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_11 (ATerm t)
{
  ATerm g_144 = NULL,h_144 = NULL,i_144 = NULL;
  g_144 = t;
  t = SSL_string_to_int(g_144);
  h_144 = t;
  t = term_s_52;
  i_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_52, h_144);
  t = l_15(i_144, h_144, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, g_144);
  return(t);
}
ATerm j_11 (ATerm t)
{
  t = term_a_53;
  return(t);
}
ATerm k_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_11 (ATerm t)
{
  ATerm j_144 = NULL,k_144 = NULL;
  t = term_c_53;
  j_144 = t;
  t = term_z_13;
  k_144 = t;
  t = term_d_53;
  t = l_15(j_144, k_144, t);
  t = term_e_53;
  return(t);
}
ATerm p_11 (ATerm t)
{
  t = term_f_53;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_53 = t;
  int i_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_11, e_11, f_11, t);
      ;
      LocalPopChoice(i_53);
    }
  else
    {
      t = g_53;
      {
        ATerm j_53 = t;
        int k_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_11, h_11, j_11, t);
            ;
            LocalPopChoice(k_53);
          }
        else
          {
            t = j_53;
            t = Option_3_0(k_11, n_11, p_11, t);
          }
      }
    }
  return(t);
}
ATerm l_15 (ATerm v_48, ATerm w_48, ATerm t)
{
  ATerm l_144 = NULL;
  t = term_m_52;
  l_144 = t;
  t = SSL_table_put(l_144, v_48, w_48);
  t = (ATerm) ATmakeAppl(sym__3, term_m_52, v_48, w_48);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm o_144 = NULL,p_144 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_144 = NULL,r_144 = NULL,s_144 = NULL;
      t = term_z_13;
      t = e_0(t);
      q_144 = t;
      t = term_l_53;
      r_144 = t;
      t = term_m_53;
      s_144 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_53, term_m_53, q_144);
      t = j_15(r_144, s_144, q_144, t);
      _fail(t);
    }
  else
    {
      ATerm v_144 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_144 = ATgetFirst((ATermList) t);
          p_144 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_144;
      t = b_0(t);
      t = term_z_13;
      t = c_0(t);
      v_144 = t;
      t = (ATerm) ATinsert(CheckATermList(p_144), v_144);
    }
  return(t);
}
ATerm q_11 (ATerm t)
{
  ATerm x_144 = NULL;
  x_144 = t;
  if(match_string(t, "-o"))
    {
      t = x_144;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_144;
    }
  return(t);
}
ATerm r_11 (ATerm t)
{
  ATerm y_144 = NULL,z_144 = NULL;
  y_144 = t;
  t = term_p_53;
  z_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_53, y_144);
  t = l_15(z_144, y_144, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_144);
  return(t);
}
ATerm s_11 (ATerm t)
{
  t = term_q_53;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_11, r_11, s_11, t);
  return(t);
}
ATerm j_15 (ATerm f_38, ATerm g_38, ATerm e_38, ATerm t)
{
  ATerm b_145 = NULL,c_145 = NULL,d_145 = NULL;
  b_145 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_38, g_38);
  {
    ATerm r_53 = t;
    int t_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_53 = ATgetArgument(t, 0);
            ATerm v_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_38, g_38);
        t = i_15(f_38, g_38, t);
        ;
        LocalPopChoice(t_53);
      }
    else
      {
        t = r_53;
        t = (ATerm) ATempty;
      }
    c_145 = t;
    t = (ATerm) ATinsert(CheckATermList(c_145), e_38);
    d_145 = t;
    t = SSL_table_put(f_38, g_38, d_145);
    t = b_145;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm k_145 = NULL,l_145 = NULL,m_145 = NULL,n_145 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_145 = NULL,p_145 = NULL,q_145 = NULL;
      t = term_z_13;
      t = l_0(t);
      o_145 = t;
      t = term_l_53;
      p_145 = t;
      t = term_m_53;
      q_145 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_53, term_m_53, o_145);
      t = j_15(p_145, q_145, o_145, t);
      _fail(t);
    }
  else
    {
      ATerm u_145 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_145 = ATgetFirst((ATermList) t);
          l_145 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_145;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_145 = ATgetFirst((ATermList) t);
          n_145 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_145;
      t = i_0(t);
      t = m_145;
      t = j_0(t);
      u_145 = t;
      t = (ATerm) ATinsert(CheckATermList(n_145), u_145);
    }
  return(t);
}
ATerm t_11 (ATerm t)
{
  ATerm w_145 = NULL;
  w_145 = t;
  if(match_string(t, "-i"))
    {
      t = w_145;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_145;
    }
  return(t);
}
ATerm u_11 (ATerm t)
{
  ATerm x_145 = NULL,y_145 = NULL;
  x_145 = t;
  t = term_x_53;
  y_145 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_53, x_145);
  t = l_15(y_145, x_145, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_145);
  return(t);
}
ATerm v_11 (ATerm t)
{
  t = term_y_53;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_11, u_11, v_11, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_145 = NULL,a_146 = NULL,b_146 = NULL,c_146 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_13;
  t = whoami_0_0(t);
  z_145 = t;
  t = term_a_14;
  b_146 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_53), z_145);
  c_146 = t;
  t = SSL_printnl(b_146, c_146);
  t = term_d_14;
  a_146 = t;
  t = SSL_exit(a_146);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_a_54;
  t = get_config_0_0(t);
  return(t);
}
ATerm g_15 (ATerm h_36, ATerm j_36, ATerm t)
{
  ATerm b_54 = t;
  int c_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(h_36, j_36);
      ;
      LocalPopChoice(c_54);
    }
  else
    {
      t = b_54;
      t = SSL_addr(h_36, j_36);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm t)
{
  ATerm e_146 = NULL,f_146 = NULL,g_146 = NULL;
  e_146 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_146;
      t = n_109(t);
    }
  else
    {
      ATerm j_146 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_146 = ATgetFirst((ATermList) t);
          g_146 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_146;
      t = foldr_2_0(n_109, o_109, t);
      j_146 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_146, j_146);
      t = o_109(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm w_11 (ATerm t)
{
  t = term_y_44;
  return(t);
}
ATerm y_11 (ATerm t)
{
  ATerm a_60 = NULL,b_60 = NULL;
  if(match_cons(t, sym__2))
    {
      a_60 = ATgetArgument(t, 0);
      b_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_15(a_60, b_60, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_146 = NULL,u_59 = NULL,v_59 = NULL;
  t = times_0_0(t);
  v_59 = t;
  t = SSL_explode_term(v_59);
  if(match_cons(t, sym__2))
    {
      ATerm d_54 = ATgetArgument(t, 0);
      u_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_59;
  t = foldr_2_0(w_11, y_11, t);
  m_146 = t;
  t = SSL_TicksToSeconds(m_146);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_146 = NULL,y_146 = NULL,z_146 = NULL;
  x_146 = t;
  if(match_cons(t, sym__2))
    {
      y_146 = ATgetArgument(t, 0);
      z_146 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_54 = t;
    int f_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_146;
        if((y_146 != t))
          {
            _fail(t);
          }
        t = x_146;
        ;
        LocalPopChoice(f_54);
      }
    else
      {
        t = e_54;
        t = (ATerm) ATmakeAppl(sym__2, y_146, z_146);
        {
          ATerm g_54 = t;
          int h_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_146, z_146);
              ;
              LocalPopChoice(h_54);
            }
          else
            {
              t = g_54;
              t = SSL_gtr(y_146, z_146);
            }
          t = (ATerm) ATmakeAppl(sym__2, y_146, z_146);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_119 (ATerm), ATerm t)
{
  ATerm d_147 = NULL;
  d_147 = t;
  {
    ATerm i_54 = t;
    int j_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_147 = NULL;
        t = term_s_52;
        t = get_config_0_0(t);
        f_147 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_147, term_d_14);
        t = geq_0_0(t);
        t = d_147;
        t = h_119(t);
        ;
        LocalPopChoice(j_54);
      }
    else
      {
        t = i_54;
        t = d_147;
      }
  }
  return(t);
}
ATerm z_11 (ATerm t)
{
  ATerm h_147 = NULL,i_147 = NULL,k_147 = NULL,l_147 = NULL;
  t = run_time_0_0(t);
  h_147 = t;
  t = term_z_13;
  t = whoami_0_0(t);
  i_147 = t;
  t = term_a_14;
  k_147 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_54), h_147), term_k_54), i_147);
  l_147 = t;
  t = SSL_printnl(k_147, l_147);
  t = (ATerm) ATmakeAppl(sym__2, term_a_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_54), h_147), term_k_54), i_147));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_147 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_44;
  m_147 = t;
  t = SSL_exit(m_147);
  return(t);
}
ATerm a_12 (ATerm t)
{
  ATerm u_147 = NULL,v_147 = NULL;
  v_147 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = v_147;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          u_147 = ATgetArgument(t, 0);
          {
            ATerm u_60 = NULL,h_10 = NULL;
            t = SSLgetAnnotations(v_147);
            u_60 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, u_147);
            h_10 = t;
            t = SSLsetAnnotations(h_10, u_60);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = v_147;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_121 (ATerm), ATerm t)
{
  ATerm m_54 = t;
  int n_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_54;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_54);
    }
  else
    {
      t = m_54;
      t = fetch_1_0(a_12, t);
    }
  t = s_121(t);
  return(t);
}
ATerm map_1_0 (ATerm m_104 (ATerm), ATerm t)
{
  ATerm l_148 (ATerm t)
  {
    ATerm i_148 = NULL,j_148 = NULL,k_148 = NULL;
    i_148 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_148;
      }
    else
      {
        ATerm e_61 = NULL,h_61 = NULL,i_61 = NULL,j_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_148 = ATgetFirst((ATermList) t);
            k_148 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_148);
        e_61 = t;
        t = j_148;
        t = m_104(t);
        h_61 = t;
        t = k_148;
        t = l_148(t);
        i_61 = t;
        t = (ATerm) ATinsert(CheckATermList(i_61), h_61);
        j_10 = t;
        t = SSLsetAnnotations(j_10, e_61);
      }
    return(t);
  }
  t = l_148(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm o_148 = NULL,p_148 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_148 = ATgetFirst((ATermList) t);
      p_148 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_148 = NULL,u_148 = NULL;
        ATerm f_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_148)), not_null(u_148));
          return(t);
        }
        t = p_148;
        t = h_0(t);
        if(((t_148 != NULL) && (t_148 != t)))
          _fail(t);
        else
          t_148 = t;
        t = o_148;
        t = f_0(t);
        if(((u_148 != NULL) && (u_148 != t)))
          _fail(t);
        else
          u_148 = t;
        t = p_148;
        t = reverse_acc_2_0(f_0, f_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_13;
      t = h_0(t);
    }
  return(t);
}
ATerm i_15 (ATerm w_39, ATerm x_39, ATerm t)
{
  t = SSL_table_get(w_39, x_39);
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm y_148 = NULL,z_148 = NULL,a_149 = NULL,p_10 = NULL;
  a_149 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_148 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_149);
  y_148 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_148);
  p_10 = t;
  t = SSLsetAnnotations(p_10, y_148);
  return(t);
}
ATerm h_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm c_149 = NULL;
  c_149 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_149), term_q_54);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_148 = NULL,x_148 = NULL;
  ATerm r_54 = t;
  int s_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_54;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_54);
    }
  else
    {
      t = r_54;
      t = fetch_1_0(g_12, t);
    }
  t = term_t_54;
  t = echo_0_0(t);
  t = term_l_53;
  w_148 = t;
  t = term_m_53;
  x_148 = t;
  t = term_u_54;
  t = i_15(w_148, x_148, t);
  t = reverse_acc_2_0(_id, h_12, t);
  t = map_1_0(i_12, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_149 = NULL,f_149 = NULL,g_149 = NULL;
  e_149 = t;
  {
    ATerm w_54 = t;
    int x_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_149;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_54 = ATgetFirst((ATermList) t);
                ATerm z_54 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_149;
          }
        ;
        LocalPopChoice(x_54);
      }
    else
      {
        t = w_54;
        t = (ATerm) ATinsert(ATempty, e_149);
      }
    f_149 = t;
    t = term_g_51;
    g_149 = t;
    t = SSL_printnl(g_149, f_149);
    t = e_149;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_a_54;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm j_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_12 (ATerm t)
{
  ATerm k_149 = NULL,l_149 = NULL;
  t = term_a_55;
  k_149 = t;
  t = term_z_13;
  l_149 = t;
  t = term_b_55;
  t = l_15(k_149, l_149, t);
  return(t);
}
ATerm m_12 (ATerm t)
{
  t = term_d_55;
  return(t);
}
ATerm q_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_12 (ATerm t)
{
  ATerm m_149 = NULL,n_149 = NULL,o_149 = NULL,p_149 = NULL;
  t = term_a_55;
  o_149 = t;
  t = term_z_13;
  p_149 = t;
  t = term_b_55;
  t = l_15(o_149, p_149, t);
  t = term_e_55;
  m_149 = t;
  t = term_z_13;
  n_149 = t;
  t = term_h_55;
  t = l_15(m_149, n_149, t);
  t = term_j_55;
  return(t);
}
ATerm t_12 (ATerm t)
{
  t = term_o_55;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_55 = t;
  int q_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_12, l_12, m_12, t);
      ;
      LocalPopChoice(q_55);
    }
  else
    {
      t = p_55;
      t = Option_3_0(q_12, r_12, t_12, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_81 (ATerm), ATerm y_81 (ATerm), ATerm t)
{
  ATerm q_149 = NULL,r_149 = NULL,t_149 = NULL,u_149 = NULL,v_149 = NULL,w_149 = NULL,r_10 = NULL;
  w_149 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_149 = ATgetFirst((ATermList) t);
      t_149 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_149);
  q_149 = t;
  t = r_149;
  t = x_81(t);
  u_149 = t;
  t = t_149;
  t = y_81(t);
  v_149 = t;
  t = (ATerm) ATinsert(CheckATermList(v_149), u_149);
  r_10 = t;
  t = SSLsetAnnotations(r_10, q_149);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_123 (ATerm), ATerm t)
{
  ATerm b_150 = NULL,c_150 = NULL,e_150 = NULL,f_150 = NULL,h_150 = NULL,i_150 = NULL,w_10 = NULL;
  b_150 = t;
  {
    ATerm r_55 = t;
    int t_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_55;
        t = v_123(t);
        ;
        LocalPopChoice(t_55);
      }
    else
      {
        t = r_55;
      }
    t = b_150;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_150 = ATgetFirst((ATermList) t);
        f_150 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(b_150);
    c_150 = t;
    t = term_a_54;
    i_150 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_a_54, e_150);
    t = l_15(i_150, e_150, t);
    t = f_150;
    {
      ATerm s_150 (ATerm t)
      {
        ATerm v_55 = t;
        int x_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_55 = t;
            int d_56 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_150 = NULL;
                l_150 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = l_150;
                ;
                LocalPopChoice(d_56);
              }
            else
              {
                t = y_55;
                t = v_123(t);
                t = Cons_2_0(_id, s_150, t);
              }
            ;
            LocalPopChoice(x_55);
          }
        else
          {
            t = v_55;
            {
              ATerm o_150 = NULL,p_150 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_150 = ATgetFirst((ATermList) t);
                  p_150 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_150), (ATerm) ATmakeAppl(sym_Undefined_1, o_150));
            }
          }
        return(t);
      }
      t = s_150(t);
      h_150 = t;
      t = (ATerm) ATinsert(CheckATermList(h_150), (ATerm) ATmakeAppl(sym_Program_1, e_150));
      w_10 = t;
      t = SSLsetAnnotations(w_10, c_150);
    }
  }
  return(t);
}
ATerm g_13 (ATerm t)
{
  ATerm e_151 = NULL;
  e_151 = t;
  if(match_string(t, "--help"))
    {
      t = e_151;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_151;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_151;
        }
    }
  return(t);
}
ATerm h_13 (ATerm t)
{
  ATerm f_151 = NULL,g_151 = NULL;
  t = term_p_54;
  f_151 = t;
  t = term_z_13;
  g_151 = t;
  t = term_e_56;
  t = l_15(f_151, g_151, t);
  t = term_f_56;
  return(t);
}
ATerm i_13 (ATerm t)
{
  t = term_h_56;
  return(t);
}
ATerm j_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_123 (ATerm), ATerm t)
{
  ATerm x_150 = NULL,y_150 = NULL,z_150 = NULL,a_151 = NULL,b_151 = NULL,c_151 = NULL,d_151 = NULL;
  z_150 = t;
  t = term_l_53;
  b_151 = t;
  t = term_m_53;
  c_151 = t;
  t = (ATerm) ATempty;
  d_151 = t;
  t = SSL_table_put(b_151, c_151, d_151);
  t = z_150;
  {
    ATerm u_12 (ATerm t)
    {
      ATerm i_56 = t;
      int j_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_123(t);
          ;
          LocalPopChoice(j_56);
        }
      else
        {
          t = i_56;
          {
            ATerm l_56 = t;
            int p_56 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(g_13, h_13, i_13, t);
                ;
                LocalPopChoice(p_56);
              }
            else
              {
                t = l_56;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_12, t);
    {
      ATerm q_56 = t;
      int r_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_151 = NULL;
          n_151 = t;
          {
            ATerm u_56 = t;
            int v_56 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_61 = NULL;
                t = n_151;
                {
                  ATerm w_56 = t;
                  int x_56 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_p_54;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(x_56);
                    }
                  else
                    {
                      t = w_56;
                      t = fetch_1_0(j_13, t);
                    }
                  t = n_151;
                  t = default_system_usage_0_0(t);
                  t = term_y_44;
                  v_61 = t;
                  t = SSL_exit(v_61);
                }
                ;
                LocalPopChoice(v_56);
              }
            else
              {
                t = u_56;
                {
                  ATerm a_62 = NULL;
                  t = term_a_55;
                  t = get_config_0_0(t);
                  t = n_151;
                  t = default_system_about_0_0(t);
                  t = term_y_44;
                  a_62 = t;
                  t = SSL_exit(a_62);
                }
              }
          }
          ;
          LocalPopChoice(r_56);
        }
      else
        {
          t = q_56;
          {
            ATerm y_56 = t;
            int z_56 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_151 = NULL,p_151 = NULL,q_151 = NULL;
                ATerm l_13 (ATerm t)
                {
                  ATerm r_151 = NULL,s_151 = NULL,t_151 = NULL,o_11 = NULL;
                  t_151 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      s_151 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_151);
                  r_151 = t;
                  t = s_151;
                  if(((x_150 != NULL) && (x_150 != t)))
                    _fail(t);
                  else
                    x_150 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, s_151);
                  o_11 = t;
                  t = SSLsetAnnotations(o_11, r_151);
                  return(t);
                }
                t = fetch_1_0(l_13, t);
                t = term_a_14;
                p_151 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_150)), term_a_57);
                q_151 = t;
                t = SSL_printnl(p_151, q_151);
                t = (ATerm) ATmakeAppl(sym__2, term_a_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_150)), term_a_57));
                t = default_system_usage_0_0(t);
                t = term_d_14;
                o_151 = t;
                t = SSL_exit(o_151);
                ;
                LocalPopChoice(z_56);
              }
            else
              {
                t = y_56;
              }
          }
        }
      y_150 = t;
      t = term_l_53;
      a_151 = t;
      t = SSL_table_destroy(a_151);
      t = y_150;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_121 (ATerm), ATerm v_121 (ATerm), ATerm w_121 (ATerm), ATerm x_121 (ATerm), ATerm t)
{
  ATerm y_151 = NULL,z_151 = NULL,a_152 = NULL,b_152 = NULL;
  t = parse_options_1_0(u_121, t);
  y_151 = t;
  t = term_b_57;
  b_152 = t;
  t = SSL_table_create(b_152);
  t = term_b_57;
  z_151 = t;
  t = term_c_57;
  a_152 = t;
  t = SSL_table_put(z_151, a_152, y_151);
  t = y_151;
  t = w_121(t);
  {
    ATerm d_57 = t;
    int e_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_121, t);
        ;
        LocalPopChoice(e_57);
      }
    else
      {
        t = d_57;
        {
          ATerm f_57 = t;
          int g_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_121(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(g_57);
            }
          else
            {
              t = f_57;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm p_13 (ATerm t)
{
  t = if_verbose2_1_0(v_13, t);
  return(t);
}
ATerm s_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_13 (ATerm t)
{
  ATerm c_152 = NULL,d_152 = NULL;
  t = term_h_57;
  c_152 = t;
  t = term_z_13;
  d_152 = t;
  t = term_i_57;
  t = l_15(c_152, d_152, t);
  t = term_j_57;
  return(t);
}
ATerm u_13 (ATerm t)
{
  t = term_l_57;
  return(t);
}
ATerm v_13 (ATerm t)
{
  ATerm e_152 = NULL,f_152 = NULL,g_152 = NULL,h_152 = NULL;
  e_152 = t;
  t = term_a_54;
  t = get_config_0_0(t);
  f_152 = t;
  t = term_a_14;
  g_152 = t;
  t = (ATerm) ATinsert(ATempty, f_152);
  h_152 = t;
  t = SSL_printnl(g_152, h_152);
  t = e_152;
  return(t);
}
ATerm iowrap_3_0 (ATerm d_121 (ATerm), ATerm e_121 (ATerm), ATerm f_121 (ATerm), ATerm t)
{
  ATerm n_13 (ATerm t)
  {
    ATerm m_57 = t;
    int n_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_121(t);
        ;
        LocalPopChoice(n_57);
      }
    else
      {
        t = m_57;
        {
          ATerm p_57 = t;
          int q_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
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
                    ;
                    LocalPopChoice(s_57);
                  }
                else
                  {
                    t = r_57;
                    {
                      ATerm u_57 = t;
                      int w_57 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(s_13, t_13, u_13, t);
                          ;
                          LocalPopChoice(w_57);
                        }
                      else
                        {
                          t = u_57;
                          {
                            ATerm x_57 = t;
                            int y_57 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(y_57);
                              }
                            else
                              {
                                t = x_57;
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
  ATerm q_13 (ATerm t)
  {
    ATerm i_152 = NULL,j_152 = NULL,k_152 = NULL;
    j_152 = t;
    {
      ATerm z_57 = t;
      int a_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_13 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((i_152 != NULL) && (i_152 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_152 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(w_13, t);
          ;
          LocalPopChoice(a_58);
        }
      else
        {
          t = z_57;
          t = term_b_58;
          i_152 = t;
        }
      t = not_null(i_152);
      t = ReadFromFile_0_0(t);
      k_152 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_152, k_152);
      t = apply_strategy_1_0(d_121, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(n_13, f_121, p_13, q_13, t);
  return(t);
}
ATerm y_13 (ATerm t)
{
  ATerm l_152 = NULL,m_152 = NULL,n_152 = NULL,o_152 = NULL,p_152 = NULL,q_152 = NULL,r_152 = NULL,s_152 = NULL,t_152 = NULL,u_152 = NULL,v_152 = NULL,w_152 = NULL,x_152 = NULL,y_152 = NULL,z_152 = NULL,a_153 = NULL,b_153 = NULL,c_153 = NULL,d_153 = NULL,p_12 = NULL,o_12 = NULL,n_12 = NULL,k_12 = NULL,b_12 = NULL;
  d_153 = t;
  if(match_cons(t, sym__2))
    {
      m_152 = ATgetArgument(t, 0);
      n_152 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_153);
  l_152 = t;
  t = n_152;
  if(match_cons(t, sym_Specification_1))
    {
      p_152 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_152);
  o_152 = t;
  t = p_152;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_152 = ATgetFirst((ATermList) t);
      t_152 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_152);
  r_152 = t;
  t = t_152;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_152 = ATgetFirst((ATermList) t);
      x_152 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_152);
  v_152 = t;
  t = w_152;
  if(match_cons(t, sym_Strategies_1))
    {
      a_153 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_152);
  z_152 = t;
  t = a_153;
  t = inline_sdefs_0_0(t);
  b_153 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, b_153);
  b_12 = t;
  t = SSLsetAnnotations(b_12, z_152);
  c_153 = t;
  t = x_152;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_152), c_153);
  k_12 = t;
  t = SSLsetAnnotations(k_12, v_152);
  y_152 = t;
  t = (ATerm) ATinsert(CheckATermList(y_152), s_152);
  n_12 = t;
  t = SSLsetAnnotations(n_12, r_152);
  u_152 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, u_152);
  o_12 = t;
  t = SSLsetAnnotations(o_12, o_152);
  q_152 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_152, q_152);
  p_12 = t;
  t = SSLsetAnnotations(p_12, l_152);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(y_13, _fail, default_usage_0_0, t);
  return(t);
}
